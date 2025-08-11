#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUERYBROKERDEPOSITFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUERYBROKERDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQueryBrokerDepositField {
    PyObject_HEAD
    CThostFtdcQueryBrokerDepositField data;
} PyCThostFtdcQueryBrokerDepositField;

extern PyTypeObject PyCThostFtdcQueryBrokerDepositFieldType;

extern int PyCThostFtdcQueryBrokerDepositFieldType_init(PyObject *module);

#endif
