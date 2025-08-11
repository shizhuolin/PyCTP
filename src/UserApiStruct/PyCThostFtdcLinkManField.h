#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLINKMANFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLINKMANFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcLinkManField {
    PyObject_HEAD
    CThostFtdcLinkManField data;
} PyCThostFtdcLinkManField;

extern PyTypeObject PyCThostFtdcLinkManFieldType;

extern int PyCThostFtdcLinkManFieldType_init(PyObject *module);

#endif
