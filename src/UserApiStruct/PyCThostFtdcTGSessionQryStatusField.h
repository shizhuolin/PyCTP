#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTGSESSIONQRYSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTGSESSIONQRYSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTGSessionQryStatusField {
    PyObject_HEAD
    CThostFtdcTGSessionQryStatusField data;
} PyCThostFtdcTGSessionQryStatusField;

extern PyTypeObject PyCThostFtdcTGSessionQryStatusFieldType;

extern int PyCThostFtdcTGSessionQryStatusFieldType_init(PyObject *module);

#endif
