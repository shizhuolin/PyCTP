#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYSYNCKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcNotifySyncKeyField {
    PyObject_HEAD
    CThostFtdcNotifySyncKeyField data;
} PyCThostFtdcNotifySyncKeyField;

extern PyTypeObject PyCThostFtdcNotifySyncKeyFieldType;

extern int PyCThostFtdcNotifySyncKeyFieldType_init(PyObject *module);

#endif
