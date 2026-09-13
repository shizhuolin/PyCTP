#ifndef PYCTP_TYPES_PYCTHOSTFTDCERRORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCERRORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///错误报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcErrOrderActionField data;
} PyCThostFtdcErrOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcErrOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcErrOrderActionFieldType_exec(PyObject *module);

#endif