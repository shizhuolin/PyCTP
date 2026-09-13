#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEWARRANTOFFSETFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEWARRANTOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询仓单折抵信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryEWarrantOffsetField data;
} PyCThostFtdcQryEWarrantOffsetFieldData;

extern PyTypeObject *PyCThostFtdcQryEWarrantOffsetFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryEWarrantOffsetFieldType_exec(PyObject *module);

#endif