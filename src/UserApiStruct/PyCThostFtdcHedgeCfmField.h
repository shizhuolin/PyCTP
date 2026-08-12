#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCHEDGECFMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCHEDGECFMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套保申请回报

typedef struct PyCThostFtdcHedgeCfmField {
    PyObject_HEAD
    CThostFtdcHedgeCfmField data;
} PyCThostFtdcHedgeCfmField;

extern PyTypeObject PyCThostFtdcHedgeCfmFieldType;

extern int PyCThostFtdcHedgeCfmFieldType_init(PyObject *module);

#endif
