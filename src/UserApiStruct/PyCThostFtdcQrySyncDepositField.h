#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCDEPOSITFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询出入金流水

typedef struct PyCThostFtdcQrySyncDepositField {
    PyObject_HEAD
    CThostFtdcQrySyncDepositField data;
} PyCThostFtdcQrySyncDepositField;

extern PyTypeObject PyCThostFtdcQrySyncDepositFieldType;

extern int PyCThostFtdcQrySyncDepositFieldType_init(PyObject *module);

#endif
