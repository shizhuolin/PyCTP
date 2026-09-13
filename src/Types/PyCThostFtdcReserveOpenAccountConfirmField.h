#ifndef PYCTP_TYPES_PYCTHOSTFTDCRESERVEOPENACCOUNTCONFIRMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRESERVEOPENACCOUNTCONFIRMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期预约开户确认请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReserveOpenAccountConfirmField data;
} PyCThostFtdcReserveOpenAccountConfirmFieldData;

extern PyTypeObject *PyCThostFtdcReserveOpenAccountConfirmFieldType;
extern int PyCTP_module_add_PyCThostFtdcReserveOpenAccountConfirmFieldType_exec(PyObject *module);

#endif