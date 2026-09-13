#ifndef PYCTP_TYPES_PYCTHOSTFTDCRESERVEOPENACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRESERVEOPENACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期预约开户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReserveOpenAccountField data;
} PyCThostFtdcReserveOpenAccountFieldData;

extern PyTypeObject *PyCThostFtdcReserveOpenAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcReserveOpenAccountFieldType_exec(PyObject *module);

#endif