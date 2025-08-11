#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRESERVEOPENACCOUNTCONFIRMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRESERVEOPENACCOUNTCONFIRMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReserveOpenAccountConfirmField {
    PyObject_HEAD
    CThostFtdcReserveOpenAccountConfirmField data;
} PyCThostFtdcReserveOpenAccountConfirmField;

extern PyTypeObject PyCThostFtdcReserveOpenAccountConfirmFieldType;

extern int PyCThostFtdcReserveOpenAccountConfirmFieldType_init(PyObject *module);

#endif
