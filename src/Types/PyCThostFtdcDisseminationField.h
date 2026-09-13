#ifndef PYCTP_TYPES_PYCTHOSTFTDCDISSEMINATIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCDISSEMINATIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///信息分发

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcDisseminationField data;
} PyCThostFtdcDisseminationFieldData;

extern PyTypeObject *PyCThostFtdcDisseminationFieldType;
extern int PyCTP_module_add_PyCThostFtdcDisseminationFieldType_exec(PyObject *module);

#endif