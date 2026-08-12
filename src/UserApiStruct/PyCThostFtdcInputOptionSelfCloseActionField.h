#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入期权自对冲操作

typedef struct PyCThostFtdcInputOptionSelfCloseActionField {
    PyObject_HEAD
    CThostFtdcInputOptionSelfCloseActionField data;
} PyCThostFtdcInputOptionSelfCloseActionField;

extern PyTypeObject PyCThostFtdcInputOptionSelfCloseActionFieldType;

extern int PyCThostFtdcInputOptionSelfCloseActionFieldType_init(PyObject *module);

#endif
