#ifndef PYCTP_TYPES_PYCTHOSTFTDCCOMMRATEMODELFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCOMMRATEMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者手续费率模板

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCommRateModelField data;
} PyCThostFtdcCommRateModelFieldData;

extern PyTypeObject *PyCThostFtdcCommRateModelFieldType;
extern int PyCTP_module_add_PyCThostFtdcCommRateModelFieldType_exec(PyObject *module);

#endif