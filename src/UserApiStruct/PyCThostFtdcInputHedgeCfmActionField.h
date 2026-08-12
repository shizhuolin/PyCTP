#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTHEDGECFMACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTHEDGECFMACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套保申请撤销

typedef struct PyCThostFtdcInputHedgeCfmActionField {
    PyObject_HEAD
    CThostFtdcInputHedgeCfmActionField data;
} PyCThostFtdcInputHedgeCfmActionField;

extern PyTypeObject PyCThostFtdcInputHedgeCfmActionFieldType;

extern int PyCThostFtdcInputHedgeCfmActionFieldType_init(PyObject *module);

#endif
