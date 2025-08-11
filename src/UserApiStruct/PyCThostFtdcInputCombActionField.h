#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTCOMBACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTCOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInputCombActionField {
    PyObject_HEAD
    CThostFtdcInputCombActionField data;
} PyCThostFtdcInputCombActionField;

extern PyTypeObject PyCThostFtdcInputCombActionFieldType;

extern int PyCThostFtdcInputCombActionFieldType_init(PyObject *module);

#endif
