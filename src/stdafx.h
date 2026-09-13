// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#ifndef PYCTP_STDAFX_H
#define PYCTP_STDAFX_H

#define PY_SSIZE_T_CLEAN
#include <Python.h>

#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
#include <structmember.h>
#endif // PY_VERSION_HEX

#include <new>
#include <cstddef>
#include <cstring>

template <typename DataT>
inline DataT *PyCTP_GetTypeData(PyObject *obj) {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    return reinterpret_cast<DataT *>(obj);
#else
    return reinterpret_cast<DataT *>(PyObject_GetTypeData(obj, Py_TYPE(obj)));
#endif  // PY_VERSION_HEX
}

#endif
