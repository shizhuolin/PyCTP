#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCHEDGECFMACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCHEDGECFMACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套保申请撤销回报

typedef struct PyCThostFtdcHedgeCfmActionField {
    PyObject_HEAD
    CThostFtdcHedgeCfmActionField data;
} PyCThostFtdcHedgeCfmActionField;

extern PyTypeObject PyCThostFtdcHedgeCfmActionFieldType;

extern int PyCThostFtdcHedgeCfmActionFieldType_init(PyObject *module);

#endif
