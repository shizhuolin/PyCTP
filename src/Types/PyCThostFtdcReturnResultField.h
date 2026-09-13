#ifndef PYCTP_TYPES_PYCTHOSTFTDCRETURNRESULTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRETURNRESULTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///返回结果

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReturnResultField data;
} PyCThostFtdcReturnResultFieldData;

extern PyTypeObject *PyCThostFtdcReturnResultFieldType;
extern int PyCTP_module_add_PyCThostFtdcReturnResultFieldType_exec(PyObject *module);

#endif