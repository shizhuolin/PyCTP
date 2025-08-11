#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONSELFCLOSEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONSELFCLOSEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryOptionSelfCloseActionField {
    PyObject_HEAD
    CThostFtdcQryOptionSelfCloseActionField data;
} PyCThostFtdcQryOptionSelfCloseActionField;

extern PyTypeObject PyCThostFtdcQryOptionSelfCloseActionFieldType;

extern int PyCThostFtdcQryOptionSelfCloseActionFieldType_init(PyObject *module);

#endif
