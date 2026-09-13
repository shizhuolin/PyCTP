#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///响应信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspInfoField data;
} PyCThostFtdcRspInfoFieldData;

extern PyTypeObject *PyCThostFtdcRspInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspInfoFieldType_exec(PyObject *module);

#endif