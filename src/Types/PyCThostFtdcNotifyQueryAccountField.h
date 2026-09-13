#ifndef PYCTP_TYPES_PYCTHOSTFTDCNOTIFYQUERYACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCNOTIFYQUERYACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询账户信息通知

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcNotifyQueryAccountField data;
} PyCThostFtdcNotifyQueryAccountFieldData;

extern PyTypeObject *PyCThostFtdcNotifyQueryAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcNotifyQueryAccountFieldType_exec(PyObject *module);

#endif