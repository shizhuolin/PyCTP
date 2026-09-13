#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSTRIKEOFFSETFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSTRIKEOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权执行偏移值查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryStrikeOffsetField data;
} PyCThostFtdcQryStrikeOffsetFieldData;

extern PyTypeObject *PyCThostFtdcQryStrikeOffsetFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryStrikeOffsetFieldType_exec(PyObject *module);

#endif