#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPQUERYACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPQUERYACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询账户信息响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspQueryAccountField data;
} PyCThostFtdcRspQueryAccountFieldData;

extern PyTypeObject *PyCThostFtdcRspQueryAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspQueryAccountFieldType_exec(PyObject *module);

#endif