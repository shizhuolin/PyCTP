#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQCANCELACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQCANCELACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///转帐销户请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqCancelAccountField data;
} PyCThostFtdcReqCancelAccountFieldData;

extern PyTypeObject *PyCThostFtdcReqCancelAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqCancelAccountFieldType_exec(PyObject *module);

#endif