#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTHEDGECFMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTHEDGECFMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套保确认输入基本信息

typedef struct PyCThostFtdcInputHedgeCfmField {
    PyObject_HEAD
    CThostFtdcInputHedgeCfmField data;
} PyCThostFtdcInputHedgeCfmField;

extern PyTypeObject PyCThostFtdcInputHedgeCfmFieldType;

extern int PyCThostFtdcInputHedgeCfmFieldType_init(PyObject *module);

#endif
