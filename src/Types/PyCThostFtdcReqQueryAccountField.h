#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQQUERYACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQQUERYACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询账户信息请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqQueryAccountField data;
} PyCThostFtdcReqQueryAccountFieldData;

extern PyTypeObject *PyCThostFtdcReqQueryAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqQueryAccountFieldType_exec(PyObject *module);

#endif