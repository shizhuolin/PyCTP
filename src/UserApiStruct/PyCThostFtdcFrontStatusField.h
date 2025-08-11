#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFRONTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFRONTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcFrontStatusField {
    PyObject_HEAD
    CThostFtdcFrontStatusField data;
} PyCThostFtdcFrontStatusField;

extern PyTypeObject PyCThostFtdcFrontStatusFieldType;

extern int PyCThostFtdcFrontStatusFieldType_init(PyObject *module);

#endif
