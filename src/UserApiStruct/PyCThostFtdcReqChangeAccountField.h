#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQCHANGEACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQCHANGEACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqChangeAccountField {
    PyObject_HEAD
    CThostFtdcReqChangeAccountField data;
} PyCThostFtdcReqChangeAccountField;

extern PyTypeObject PyCThostFtdcReqChangeAccountFieldType;

extern int PyCThostFtdcReqChangeAccountFieldType_init(PyObject *module);

#endif
