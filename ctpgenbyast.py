#!/usr/bin/env python3
# pylint: disable=too-many-locals
# pylint: disable=too-many-branches
# pylint: disable=too-many-statements
# pylint: disable=too-many-instance-attributes
# pylint: disable=too-many-lines
"""
Analyze the CTP header files and generate C/C++ source code accordingly.

Created on Thu Sep 3 18:28:57 2026

@author: zhuolin.shi
"""
import io
import os
from collections.abc import Callable, Iterator
from dataclasses import dataclass, field
from typing import Any, NamedTuple, TypeAlias

import chardet
import jinja2
from clang import cindex


class CTPEnumMember(NamedTuple):
    """Enum member for ctp."""

    name: str
    value: str
    comment: list[str] | None = None  # multi-line comment

@dataclass
class CTPEnum:
    """Enum for ctp."""

    name: str
    underlying_type: str  # e.g 'int', 'char', 'float', 'double', ...
    comment: list[str] | None = None  # multi-line comment
    members: list[CTPEnumMember] = field(default_factory=list)

class CTPDefine(NamedTuple):
    """Macro define for ctp."""

    name: str
    value: str
    comment: list[str] | None = None  # multi-line comment

class CTPStructMember(NamedTuple):
    """Struct member for ctp."""

    name: str
    type_base: str  # e.g 'int', 'char', 'float', 'double', ...
    type_is_array: bool = False
    type_array_length: int = 0  # only type_base is array, else 0
    type_alias: str | None = None  # e.g 'TThostFtdcTraderIDType'
    comment: list[str] | None = None  # multi-line comment

@dataclass
class CTPStruct:
    """Struct for ctp."""

    name: str
    comment: list[str] | None = None  # multi-line comment
    members: list[CTPStructMember] = field(default_factory=list)

class CTPClassMethodParam(NamedTuple):
    """Class method param for ctp."""

    name: str
    c_type: str
    is_const: bool = False
    is_pointer: bool = False
    is_reference: bool = False
    is_array: bool = False
    array_length: int = 0
    default: str | None = None

@dataclass
class CTPClassMethod:
    """Method for ctp."""

    name: str
    result_type: str
    access: str  # 'public', 'protected', 'private'
    is_static: bool = False
    is_virtual: bool = False
    is_pure_virtual: bool = False
    is_const_method: bool = False
    comment: list[str] | None = None  # multi-line comment
    params: list[CTPClassMethodParam] = field(default_factory=list)

@dataclass
class CTPClass:
    """Class for ctp."""

    name: str
    comment: list[str] | None = None  # multi-line comment
    methods: list[CTPClassMethod] = field(default_factory=list)

def file_read(
        filename: str,
        force_encoding: str | None = None,
        fallback_encoding: str = 'UTF-8') -> str:
    """Read a file and automatically detect its encoding using chardet.

    The function reads the file in binary mode, detects the most likely
    encoding with the `chardet` library, and decodes the content accordingly.

    Parameters
    ----------
    filename: str
        Path to the file to be read.
    force_encoding : str, optional
        If provided, this encoding is used directly, bypassing automatic
        detection. default is None.
    fallback_encoding : str, optional
        The encoding to use when automatic detection fails
        (i.e., chardet returns None). default is UTF-8.

    Returns
    -------
    str
        The file content as a decoded string.
    """
    f: io.BufferedReader
    with open(filename, 'rb') as f:
        raw_data: bytes = f.read()
    if force_encoding is not None:
        return raw_data.decode(force_encoding)
    detected_info: dict[str, str | None] = chardet.detect(raw_data)
    detected_encoding: str | None = detected_info.get('encoding')
    encoding_to_use: str = (detected_encoding if detected_encoding is not None
                            else fallback_encoding)
    return raw_data.decode(encoding_to_use)

def file_save(filename: str, content: str, encoding: str = 'UTF-8') -> None:
    """Save string content to a text file.

    Parameters
    ----------
    filename: str
        Path to the destination file.
    content: str
        The text content to write.
    encoding: str
        The encoding used to save the content.
    """
    f: io.TextIOWrapper
    with open(filename, 'wt', encoding=encoding, newline='\n') as f:
        f.write(content)
    print('save:', filename)

def gencode_from_template(
        template_filename: str,
        replace: dict[str, Any],
        generate_filename: str) -> None:
    """Render a Jinja2 template file and generate the output source file.

    Parameters
    ----------
    template_filename : str
        Absolute or relative path to the template file (e.g.,
        "/path/to/UserApiDataType.cpp.template").
    replace : dict[str, Any]
        Context data for template rendering. Keys correspond to template
        variable names (accessible as {{ key }} inside the template).
        Values can be of any type (strings, lists, dicts, custom objects).
    generate_filename : str
        Absolute or relative path where the generated source file should
        be written (e.g., "/path/to/output/UserApiDataType.cpp").
    """
    template_dir: str = os.path.dirname(os.path.abspath(template_filename))
    template_name: str = os.path.basename(template_filename)
    env: jinja2.Environment = jinja2.Environment(
        loader=jinja2.FileSystemLoader(str(template_dir)),
        undefined=jinja2.StrictUndefined,
        trim_blocks=True,
        lstrip_blocks=True,
    )
    output = env.get_template(template_name).render(**replace)
    if output != file_read(generate_filename):
        file_save(generate_filename, output)

def cpp_file_parse(
        filenames: list[str]
        ) -> tuple[dict[str, str], cindex.TranslationUnit]:
    """Parse a C/C++ source file using libclang.

    This function reads the source code, creates a temporary file, and parses
    it with Clang's index to obtain the translation unit (AST).

    Parameters
    ----------
    filenames: list[str]
        Paths to the C/C++ source files to parse.

    Returns
    -------
    tuple[dict[str, str], cindex.TranslationUnit]
        A tuple containing:
            - The original filename (str) and it's source code content (str)
            - The Clang translation unit (TranslationUnit) representing the AST
    """
    includes = '\n'.join(f'#include "{os.path.basename(f)}"'
                         for f in filenames)
    virtual_main = '__main__.h'
    files: list[tuple[str, str]] = ([(virtual_main, includes)] +
                                    [(f, file_read(f)) for f in filenames])
    include_paths: list[str] = list({os.path.dirname(f) for f in filenames})
    args: list[str] = ['-x', 'c++', '-std=c++11']
    args += [f'-I{include}' for include in include_paths]
    options: int = (
        cindex.TranslationUnit.PARSE_DETAILED_PROCESSING_RECORD |
        cindex.TranslationUnit.PARSE_INCLUDE_BRIEF_COMMENTS_IN_CODE_COMPLETION)

    tu: cindex.TranslationUnit = cindex.Index.create().parse(
        files[0][0],
        args=args,
        unsaved_files=files,
        options=options)

    if tu.diagnostics:
        for diag in tu.diagnostics:
            print(f"Diagnostic: {diag}")

    return dict(files), tu

def extract_raw_comment(
        files: dict[str, str],
        location: int | cindex.SourceLocation) -> list[str]:
    """Extract raw comment text surrounding a given source location.

    Parameters
    ----------
    files: dict[str, str]
        Mapping from filename to full source code content.
    location: int | cindex.SourceLocation
        Either a 0‑based line index, or a libclang SourceLocation object.

    Returns
    -------
    list[str]
        Comment lines (including comment markers) in top‑to‑bottom order.
        Returns empty list if no comment is found.

    Raises
    ------
    KeyError
        If the file name cannot be found in `files`.
    ValueError
        If `location` is of unsupported type.
    """
    # Backtrack to get preceding comment
    if isinstance(location, int):
        line_index: int = location
    elif isinstance(location, cindex.SourceLocation):
        line_index: int = location.line - 1  # base
    else:
        raise TypeError(
            f'Unsupported location type: {type(location).__name__}; '
            f'expected int or cindex.SourceLocation'
            )
    source_lines: list[str] = files[location.file.name].splitlines()
    comment_lines: list[str] = []
    i: int = line_index - 1
    is_block_comment: bool = False
    while i >= 0:
        line: str = source_lines[i].strip()
        if is_block_comment:
            comment_lines.insert(0, line)
            if line.startswith('/*'):
                break
            # Allow blank line between comments in block
        else:
            if line.startswith('/*') and line.endswith('*/'):
                comment_lines.insert(0, line)
                break
            if not line.startswith('/*') and line.endswith('*/'):
                comment_lines.insert(0, line)
                is_block_comment = True
            elif line.startswith('//'):
                comment_lines.insert(0, line)
            elif line == '':
                # Disable blank line between comments out of block
                break
            else:
                break
        i -= 1
    return comment_lines

def get_field_type(t: cindex.Type):
    """Resolve a Clang type to its base name or array info.

    Recursively resolve and normalize a `clang.cindex.Type` into a
    human-readable description, with special handling for arrays, typedefs,
    and elaborated types.

    This function traverses the type tree to strip away typedef aliases and
    elaborated type names (e.g., `struct S` → `S`), and for constant-sized
    arrays it returns both the element type and the array length.

    Parameters
    ----------
    t : cindex.Type
        The Clang type object to be analyzed. Must be a valid Type instance.

    Returns
    -------
    Union[str, Tuple[Union[str, Tuple], int]]
        - For **non‑array types**: returns a string containing the resolved
          type name (e.g., ``'int'``, ``'char'``, ``'MyStruct'``).
        - For **constant‑sized arrays**: returns a tuple
          ``(element_type, count)``, where `element_type` is the result of
          recursively calling this function on the array's element type (which
          may itself be an array, leading to nested tuples), and `count` is
          the integer number of elements.
        - For **typedefs** and **elaborated types** (`struct`/`class`/`enum`):
          the function recursively resolves to the underlying type, so the
          caller never sees the alias or elaborated qualifier.

    Raises
    ------
    TypeError
        If `t` is not an instance of `cindex.Type`.
    ValueError
        If the type is invalid (its kind is `TypeKind.INVALID`).

    Notes
    -----
    - The function **does not** handle incomplete arrays (`[]`) or
      variable‑length arrays; those will fall through to the `else` branch and
      return a spelling like ``'int[]'`` (or raise if the spelling is empty).
    - For `ELABORATED` types (e.g., `struct S`), `get_named_type()` is used to
      obtain the underlying declaration type, then recursion continues.

    Examples
    --------
    Assuming `field_cursor` is a `Cursor` for a struct member:

    >>> typ = field_cursor.type
    >>> result = get_field_type(typ)
    >>> if isinstance(result, tuple):
    ...     elem, length = result          # array: e.g., ('char', 21)
    ... else:
    ...     type_name = result             # non‑array: e.g., 'int'

    For a nested array `int[3][4]`, the function returns:
    `( ('int', 4), 3 )` – a tuple where the first element is itself a tuple.
    """
    if not isinstance(t, cindex.Type):
        raise TypeError(f'Expected cindex.Type, got {type(t).__name__}')
    if t.kind == cindex.TypeKind.CONSTANTARRAY:
        element_type = get_field_type(t.element_type)
        return element_type, t.element_count
    if t.kind == cindex.TypeKind.ELABORATED:
        t1 = t.get_named_type()
        return get_field_type(t1)
    if t.kind == cindex.TypeKind.TYPEDEF:
        return get_field_type(t.get_canonical())
    return t.spelling

def ctp_symbol_enum_parse(
        cpp_parse_data: tuple[dict[str, str], cindex.TranslationUnit]
        ) -> list[CTPEnum]:
    """Parse enum in ctp source code.

    Parameters
    ----------
    cpp_parse_data: tuple[dict[str, str], cindex.TranslationUnit]
        A tuple containing:
            - A list of (filename, source_code) pairs for
              the parsed CTP headers.
            - The Clang translation unit (AST) used for
              extracting macro definitions.

    Returns
    -------
    list[CTPEnum]
        parsed enums in ctp source code
    """
    cpp_files: dict[str, str]
    cpp_tu: cindex.TranslationUnit
    cpp_files, cpp_tu = cpp_parse_data
    child: cindex.Cursor
    ctp_enums: list[CTPEnum] = []
    target_filenames = set(cpp_files.keys())
    for child in cpp_tu.cursor.get_children():
        if child.kind != cindex.CursorKind.ENUM_DECL:
            continue
        if not child.location.file:
            continue
        if child.location.file.name not in target_filenames:
            continue
        enum_comment: list[str] = None
        if child.raw_comment and isinstance(child.raw_comment, str):
            enum_comment = child.raw_comment.splitlines()
        if not enum_comment:
            enum_comment = extract_raw_comment(cpp_files, child.location)
        if not enum_comment:
            enum_comment = None
        ctp_enums.append(CTPEnum(
            name = child.spelling,
            underlying_type = child.enum_type.spelling,
            comment = enum_comment))
        node: cindex.Cursor
        for node in child.get_children():
            if node.kind != cindex.CursorKind.ENUM_CONSTANT_DECL:
                continue
            node_comment: list[str] = None
            if node.raw_comment and isinstance(node.raw_comment, str):
                node_comment = node.raw_comment.splitlines()
            if not node_comment:
                node_comment = extract_raw_comment(cpp_files, node.location)
            if not node_comment:
                node_comment = None
            ctp_enums[-1].members.append(CTPEnumMember(
                name = node.spelling,
                value = str(node.enum_value),
                comment = node_comment))
    return ctp_enums

def ctp_symbol_defined_parse(
        cpp_parse_data: tuple[dict[str, str], cindex.TranslationUnit]
        ) -> list[CTPDefine]:
    """Parse defines/macro in ctp source code.

    Parameters
    ----------
    cpp_parse_data: tuple[dict[str, str], cindex.TranslationUnit]
        A tuple containing:
            - A list of (filename, source_code) pairs for
              the parsed CTP headers.
            - The Clang translation unit (AST) used for
              extracting macro definitions.

    Returns
    -------
    list[CTPDefineGroup]
        parsed define in ctp source code
    """
    cpp_files: dict[str, str]
    cpp_tu: cindex.TranslationUnit
    cpp_files, cpp_tu = cpp_parse_data
    child: cindex.Cursor
    ctp_defines: list[CTPDefine] = []
    target_filenames = set(cpp_files.keys())
    for child in cpp_tu.cursor.get_children():
        if child.kind != cindex.CursorKind.MACRO_DEFINITION:
            continue
        if not child.location.file:
            continue
        if child.location.file.name not in target_filenames:
            continue
        location: cindex.SourceLocation = child.location
        macro_name: str = child.spelling
        # Read tokens to get macro value
        tokens: list[cindex.Token] = list(cpp_tu.get_tokens(
            extent = child.extent))
        rhs_tokens: list[str] = []
        for idx, tok in enumerate(tokens):
            if tok.spelling == macro_name:
                rhs_tokens = [t.spelling for t in tokens[idx+1:]]
                break
        macro_value: str = ' '.join(rhs_tokens).strip()
        # Backtrack to get preceding comment
        macro_comment: list[str] = extract_raw_comment(cpp_files, location)
        ctp_defines.append(CTPDefine(
            name = macro_name,
            value = macro_value,
            comment = macro_comment if macro_comment else None
            ))
    return ctp_defines


def ctp_symbol_struct_parse(
        cpp_parse_data: tuple[dict[str, str], cindex.TranslationUnit]
        ) -> list[CTPStruct]:
    """Parse struct in ctp source code.

    Parameters
    ----------
    cpp_parse_data: tuple[dict[str, str], cindex.TranslationUnit]
        A tuple containing:
            - A list of (filename, source_code) pairs for
              the parsed CTP headers.
            - The Clang translation unit (AST) used for
              extracting macro definitions.

    Returns
    -------
    listlist[CTPStruct]
        parsed struct in ctp source code
    """
    cpp_files: dict[str, str]
    cpp_tu: cindex.TranslationUnit
    cpp_files, cpp_tu = cpp_parse_data
    structs: list[CTPStruct] = []
    target_filenames = set(cpp_files.keys())
    child: cindex.Cursor
    for child in cpp_tu.cursor.get_children():
        if child.kind != cindex.CursorKind.STRUCT_DECL:
            continue
        if child.location.file.name not in target_filenames:
            continue
        struct_name: str = child.spelling
        struct_comment: str | None = None
        if child.raw_comment and isinstance(child.raw_comment, str):
            struct_comment = child.raw_comment.splitlines()
        if not struct_comment:
            struct_comment = extract_raw_comment(cpp_files, child.location)
        if not struct_comment:
            struct_comment = None
        struct: CTPStruct = CTPStruct(
            name = struct_name, comment = struct_comment)
        node: cindex.Cursor
        for node in child.get_children():
            if node.kind != cindex.CursorKind.FIELD_DECL:
                continue
            m_comment: list[str] | None = None
            if node.raw_comment and isinstance(node.raw_comment, str):
                m_comment = node.raw_comment.splitlines()
            m_comment = m_comment or extract_raw_comment(
                cpp_files, node.location)
            m_comment = m_comment or None
            m_name = node.spelling
            m_type_alias = node.type.spelling
            m_field_type = get_field_type(node.type)
            if isinstance(m_field_type, str):
                m_type_base = m_field_type
                m_type_length = 0
                m_type_is_array = False
            elif (isinstance(m_field_type, tuple) and
                len(m_field_type)==2 and
                isinstance(m_field_type[0], str) and
                isinstance(m_field_type[1], int)):
                m_type_base = m_field_type[0]
                m_type_length = m_field_type[1]
                m_type_is_array = True
            else:
                raise TypeError(
                    f'Unexpected type {m_field_type!r} '
                    f'(type: {type(m_field_type)}) '
                    f'at {node.location.file.name}:{node.location.line} '
                    f'{m_type_alias} {m_name}')
            struct.members.append(CTPStructMember(
                name = m_name,
                type_base = m_type_base,
                type_is_array = m_type_is_array,
                type_array_length = m_type_length,
                type_alias = m_type_alias,
                comment = m_comment))
        structs.append(struct)
    return structs

def ctp_symbol_class_parse(
        cpp_parse_data: tuple[dict[str, str], cindex.TranslationUnit]
        ) -> list[CTPClass]:
    """Parse class in ctp source code.

    Parameters
    ----------
    cpp_parse_data: tuple[dict[str, str], cindex.TranslationUnit]
        A tuple containing:
            - A list of (filename, source_code) pairs for
              the parsed CTP headers.
            - The Clang translation unit (AST) used for
              extracting macro definitions.

    Returns
    -------
    listlist[CTPClass]
        parsed class in ctp source code
    """
    def get_default_value(arg_cursor):
        tokens = list(arg_cursor.get_tokens())
        for i, tok in enumerate(tokens):
            if tok.spelling == "=":
                # Concatenate all tokens after '='
                return ' '.join(t.spelling for t in tokens[i+1:])
        return None

    def parse_method(cpp_files: dict[str, str], method: cindex.Cursor):
        method_name: str = method.spelling
        method_comment: list[str] | None = None
        if method.raw_comment and isinstance(method.raw_comment, str):
            method_comment = method.raw_comment.splitlines()
        method_comment = method_comment or extract_raw_comment(
            cpp_files, method.location)
        method_comment = method_comment or None
        method_result_type: str = get_field_type(method.result_type)
        access_map = {
            cindex.AccessSpecifier.PUBLIC: "public",
            cindex.AccessSpecifier.PROTECTED: "protected",
            cindex.AccessSpecifier.PRIVATE: "private"}
        method_access = access_map.get(method.access_specifier, "public")
        method_is_static: bool = method.is_static_method()
        method_is_virtual: bool = method.is_virtual_method()
        method_is_const_method = method.is_const_method()
        method_is_pure_virtual = method.is_pure_virtual_method()
        ctp_method: CTPClassMethod = CTPClassMethod(
            name = method_name,
            result_type = method_result_type,
            access = method_access,
            is_static = method_is_static,
            is_virtual = method_is_virtual,
            is_pure_virtual = method_is_pure_virtual,
            is_const_method = method_is_const_method,
            comment = method_comment
            )
        arg: cindex.Cursor
        for arg in method.get_arguments():
            if arg.kind != cindex.CursorKind.PARM_DECL:
                continue
            param_name: str = arg.spelling
            param_type: cindex.Type = arg.type
            type_info: str | tuple(str, int) = get_field_type(param_type)
            param_is_pointer: bool = param_type.kind == cindex.TypeKind.POINTER
            param_is_reference: bool = param_type.kind in (
                cindex.TypeKind.LVALUEREFERENCE,
                cindex.TypeKind.RVALUEREFERENCE)
            param_is_const: bool = param_type.is_const_qualified()
            param_c_type: str = param_type.spelling
            param_is_array: bool = False
            param_array_length: int = 0
            if isinstance(type_info, tuple):
                param_c_type = type_info[0]
                param_is_array = True
                param_array_length = type_info[1]
            else:
                if param_is_pointer:
                    param_c_type = param_type.get_pointee().spelling
            param_default = get_default_value(arg)
            ctp_method.params.append(CTPClassMethodParam(
                name = param_name,
                c_type = param_c_type,
                is_const = param_is_const,
                is_pointer = param_is_pointer,
                is_reference = param_is_reference,
                is_array = param_is_array,
                array_length = param_array_length,
                default = param_default
                ))
        return ctp_method if ctp_method.name else None

    cpp_files: dict[str, str]
    cpp_tu: cindex.TranslationUnit
    cpp_files, cpp_tu = cpp_parse_data
    classes: list[CTPClass] = []
    target_filenames = set(cpp_files.keys())
    child: cindex.Cursor
    for child in cpp_tu.cursor.get_children():
        if child.kind != cindex.CursorKind.CLASS_DECL:
            continue
        if child.location.file.name not in target_filenames:
            continue
        class_name: str = child.spelling
        class_comment: list[str] | None = None
        if child.raw_comment and isinstance(child.raw_comment, str):
            class_comment = child.raw_comment.splitlines()
        class_comment = class_comment or extract_raw_comment(
            cpp_files, child.location)
        class_comment = class_comment or None
        ctp_class: CTPClass = CTPClass(
            name = class_name, comment = class_comment)
        node: cindex.Cursor
        for node in child.get_children():
            method:CTPClassMethod = parse_method(cpp_files, node)
            if method:
                ctp_class.methods.append(method)
        classes.append(ctp_class)
    return classes

def collect_files_by_suffix(
        search_dir: str,
        include_suffixes: tuple[str, ...] = ('.h',),
        exclude_suffixes: tuple[str, ...] = ('SMCertApi.h',)
        ) -> list[str]:
    """Collect all files by the specified suffixes and directory.

    Parameters
    ----------
    search_dir: str
        Path to the foloder to search.
    include_suffixes: tuple[str, ...], optional
        Set of filename suffixes to include.
    exclude_suffixes: tuple[str, ...], optional
        Set of filename suffixes to exclude

    Returns
    -------
    list[str]
        List of full file paths.
    """
    matching_files: list[str] = []
    dirpath: str
    filenames: list[str]
    for dirpath, _, filenames in os.walk(search_dir):
        for filename in filenames:
            if (filename.endswith(include_suffixes) and
                not filename.endswith(exclude_suffixes)):
                matching_files.append(os.path.join(dirpath, filename))
    return matching_files

def ctp_symbol_parse(
        cpp_parsed_data: tuple[dict[str, str], cindex.TranslationUnit]):
    """Parse all ctp symbols.

    Parameters
    ----------
    cpp_parsed_data: tuple[dict[str, str], cindex.TranslationUnit]
        A tuple containing:
            - A list of (filename, source_code) pairs for
              the parsed CTP headers.
            - The Clang translation unit (AST) used for
              extracting macro definitions.

    Returns
    -------
    dict[str, list[Any]]
        A categorized dictionary of parsed symbols. Keys include:
            - 'enums': List of parsed enumeration definitions.
            - 'defines': List of parsed macro (#define) definitions.
            - 'structs': List of parsed struct definitions.
            - 'classes': List of parsed class definitions.
    """
    symbol_table: dict[
        str, list[CTPEnum | CTPDefine | CTPStruct | CTPClass]
        ] = {
            'enums': ctp_symbol_enum_parse(cpp_parsed_data),
            'defines': ctp_symbol_defined_parse(cpp_parsed_data),
            'structs': ctp_symbol_struct_parse(cpp_parsed_data),
            'classes': ctp_symbol_class_parse(cpp_parsed_data),
            }
    return symbol_table

def struct_contexts(
        symbols: dict[str, list[CTPEnum | CTPDefine | CTPStruct | CTPClass]]
        ) -> Iterator[dict[str,
                           list[CTPEnum | CTPDefine | CTPStruct | CTPClass] |
                           CTPStruct]]:
    """Generate template contexts for the all of CTPStruct.

    Parameters
    ----------
    symbols : dict[str, list[CTPEnum | CTPDefine | CTPStruct | CTPClass]]
        Looks up the all of CTPStruct in the symbol table and yields
        one context per CTPStruct pair, each containing the full symbol table
        plus the injected keys ``struct``.

    Yields
    ------
    dict[str, list[CTPEnum | CTPDefine | CTPStruct | CTPClass] | CTPStruct]
        Rendering context for ``PyType.h.tmpl`` / ``PyType.cpp.tmpl``. Yields:
        once for the all of CTPstruct
    """
    ctp_struct: CTPStruct
    for ctp_struct in symbols['structs']:
        yield symbols | {'struct': ctp_struct}

def api_contexts(
        symbols: dict[str, list[CTPEnum | CTPDefine | CTPStruct | CTPClass]]
        ) -> Iterator[dict[str,
                           list[CTPEnum | CTPDefine | CTPStruct | CTPClass] |
                           CTPClass]]:
    """Generate template contexts for MdApi and TraderApi.

    Looks up the four CTP API/SPI classes in the symbol table and yields
    one context per API pair, each containing the full symbol table plus
    the injected keys ``api_class`` and ``spi_class``.

    Parameters
    ----------
    symbols : dict[str, list[CTPEnum | CTPDefine | CTPStruct | CTPClass]]
        Parsed CTP symbol table. The ``classes`` key holds all CTP classes.

    Yields
    ------
    dict[str, list[CTPEnum | CTPDefine | CTPStruct | CTPClass] | CTPClass]
        Rendering context for ``PyApi.h`` / ``PyApi.cpp``. Yields twice:
        once for MdApi, once for TraderApi.
    """
    md_api: CTPClass = next(
        (c for c in symbols['classes'] if c.name == 'CThostFtdcMdApi'),
        None)
    md_spi: CTPClass = next(
        (c for c in symbols['classes'] if c.name == 'CThostFtdcMdSpi'),
        None)
    trader_api: CTPClass = next(
        (c for c in symbols['classes'] if c.name == 'CThostFtdcTraderApi'),
        None)
    trader_spi: CTPClass = next(
        (c for c in symbols['classes'] if c.name == 'CThostFtdcTraderSpi'),
        None)
    yield symbols | {'api_class': md_api, 'spi_class': md_spi}
    yield symbols | {'api_class': trader_api, 'spi_class': trader_spi}

def generate_pyctp_code(ctp_headers_dir: str, pyctp_src_dir: str) -> None:
    """Scan ctp header files and generate corresponding pyctp code.

    Parameters
    ----------
    ctp_headers_dir: str
        Path to the CTP header folder
    pyctp_src_dir: str
        Paht to the PyCTP source code. The generated content will overwrite
        files in this path.
    """
    CTPSymbol: TypeAlias = CTPEnum | CTPDefine | CTPStruct | CTPClass
    CTPSymbolTable: TypeAlias = dict[str, list[CTPSymbol] | CTPSymbol]
    CTPContextGen: TypeAlias = Callable[[CTPSymbolTable],
                                        Iterator[CTPSymbolTable]]
    CTPTemplateSpec: TypeAlias = tuple[str, str, CTPContextGen | None]
    ctp_header_files: list[str] = collect_files_by_suffix(ctp_headers_dir)
    cpp_parsed_data: tuple[dict[str, str], cindex.TranslationUnit]
    cpp_parsed_data = cpp_file_parse(ctp_header_files)
    ctp_symbol_table: CTPSymbolTable = ctp_symbol_parse(cpp_parsed_data)
    template_mapping: list[CTPTemplateSpec] = [
        ('PyConstants.cpp.tmpl', 'PyConstants.cpp', None),
        ('PyTypes.h.tmpl', 'PyTypes.h', None),
        ('PyTypes.cpp.tmpl', 'PyTypes.cpp', None),
        ('PyType.h.tmpl', 'Types/Py{{ struct.name }}.h', struct_contexts),
        ('PyType.cpp.tmpl', 'Types/Py{{ struct.name }}.cpp', struct_contexts),
        ('PyApi.h.tmpl', 'Py{{ api_class.name[10:] }}.h', api_contexts),
        ('PyApi.cpp.tmpl', 'Py{{ api_class.name[10:] }}.cpp', api_contexts),
        ]
    env: jinja2.Environment = jinja2.Environment()
    for tmpl_pat, out_pat, context_gen in template_mapping:
        if context_gen:
            for context in context_gen(ctp_symbol_table):
                tmpl_name = env.from_string(tmpl_pat).render(**context)
                out_name   = env.from_string(out_pat).render(**context)
                tmpl_path = os.path.join(pyctp_src_dir, tmpl_name)
                out_path   = os.path.join(pyctp_src_dir, out_name)
                gencode_from_template(tmpl_path, context, out_path)
        else:
            tmpl_path = os.path.join(pyctp_src_dir, tmpl_pat)
            out_path = os.path.join(pyctp_src_dir, out_pat)
            gencode_from_template(tmpl_path, ctp_symbol_table, out_path)


###############################################################################
ctp_cpp_path: str = 'ctp/v6.7.13_20260225_trader'
ctp_cpp_path: str = os.environ.get('PYCTP_CTP_ROOT', ctp_cpp_path)
###############################################################################
ctp_cpython_path: str = 'src'  # pylint: disable=invalid-name
generate_pyctp_code(ctp_cpp_path, ctp_cpython_path)
