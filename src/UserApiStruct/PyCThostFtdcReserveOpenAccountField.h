#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRESERVEOPENACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRESERVEOPENACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期预约开户

typedef struct PyCThostFtdcReserveOpenAccountField {
    PyObject_HEAD
    CThostFtdcReserveOpenAccountField data;
} PyCThostFtdcReserveOpenAccountField;

extern PyTypeObject PyCThostFtdcReserveOpenAccountFieldType;

extern int PyCThostFtdcReserveOpenAccountFieldType_init(PyObject *module);

#endif
