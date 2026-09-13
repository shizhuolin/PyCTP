#ifndef PYCTP_TYPES_PYCTHOSTFTDCSTRIKEOFFSETFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSTRIKEOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前期权合约执行偏移值的详细内容

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcStrikeOffsetField data;
} PyCThostFtdcStrikeOffsetFieldData;

extern PyTypeObject *PyCThostFtdcStrikeOffsetFieldType;
extern int PyCTP_module_add_PyCThostFtdcStrikeOffsetFieldType_exec(PyObject *module);

#endif