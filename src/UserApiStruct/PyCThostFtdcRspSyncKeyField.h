#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPSYNCKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspSyncKeyField {
    PyObject_HEAD
    CThostFtdcRspSyncKeyField data;
} PyCThostFtdcRspSyncKeyField;

extern PyTypeObject PyCThostFtdcRspSyncKeyFieldType;

extern int PyCThostFtdcRspSyncKeyFieldType_init(PyObject *module);

#endif
