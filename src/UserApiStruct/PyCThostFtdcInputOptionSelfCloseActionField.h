#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInputOptionSelfCloseActionField {
    PyObject_HEAD
    CThostFtdcInputOptionSelfCloseActionField data;
} PyCThostFtdcInputOptionSelfCloseActionField;

extern PyTypeObject PyCThostFtdcInputOptionSelfCloseActionFieldType;

extern int PyCThostFtdcInputOptionSelfCloseActionFieldType_init(PyObject *module);

#endif
