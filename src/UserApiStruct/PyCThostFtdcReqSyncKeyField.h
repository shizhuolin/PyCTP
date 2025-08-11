#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQSYNCKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqSyncKeyField {
    PyObject_HEAD
    CThostFtdcReqSyncKeyField data;
} PyCThostFtdcReqSyncKeyField;

extern PyTypeObject PyCThostFtdcReqSyncKeyFieldType;

extern int PyCThostFtdcReqSyncKeyFieldType_init(PyObject *module);

#endif
