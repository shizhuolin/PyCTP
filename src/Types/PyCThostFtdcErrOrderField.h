#ifndef PYCTP_TYPES_PYCTHOSTFTDCERRORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCERRORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///错误报单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcErrOrderField data;
} PyCThostFtdcErrOrderFieldData;

extern PyTypeObject *PyCThostFtdcErrOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcErrOrderFieldType_exec(PyObject *module);

#endif