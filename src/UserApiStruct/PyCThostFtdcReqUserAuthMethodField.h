#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERAUTHMETHODFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERAUTHMETHODFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqUserAuthMethodField {
    PyObject_HEAD
    CThostFtdcReqUserAuthMethodField data;
} PyCThostFtdcReqUserAuthMethodField;

extern PyTypeObject PyCThostFtdcReqUserAuthMethodFieldType;

extern int PyCThostFtdcReqUserAuthMethodFieldType_init(PyObject *module);

#endif
