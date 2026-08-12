#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYHEDGECFMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYHEDGECFMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利套保申请查询

typedef struct PyCThostFtdcQryHedgeCfmField {
    PyObject_HEAD
    CThostFtdcQryHedgeCfmField data;
} PyCThostFtdcQryHedgeCfmField;

extern PyTypeObject PyCThostFtdcQryHedgeCfmFieldType;

extern int PyCThostFtdcQryHedgeCfmFieldType_init(PyObject *module);

#endif
