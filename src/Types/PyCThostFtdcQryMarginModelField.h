#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYMARGINMODELFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYMARGINMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询投资者保证金率模板

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryMarginModelField data;
} PyCThostFtdcQryMarginModelFieldData;

extern PyTypeObject *PyCThostFtdcQryMarginModelFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryMarginModelFieldType_exec(PyObject *module);

#endif