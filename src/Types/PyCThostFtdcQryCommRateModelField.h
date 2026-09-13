#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCOMMRATEMODELFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCOMMRATEMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询投资者手续费率模板

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryCommRateModelField data;
} PyCThostFtdcQryCommRateModelFieldData;

extern PyTypeObject *PyCThostFtdcQryCommRateModelFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryCommRateModelFieldType_exec(PyObject *module);

#endif