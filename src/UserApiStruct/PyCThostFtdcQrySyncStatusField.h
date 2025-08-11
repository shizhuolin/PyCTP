#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySyncStatusField {
    PyObject_HEAD
    CThostFtdcQrySyncStatusField data;
} PyCThostFtdcQrySyncStatusField;

extern PyTypeObject PyCThostFtdcQrySyncStatusFieldType;

extern int PyCThostFtdcQrySyncStatusFieldType_init(PyObject *module);

#endif
