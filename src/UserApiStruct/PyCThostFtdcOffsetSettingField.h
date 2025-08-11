#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOFFSETSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcOffsetSettingField {
    PyObject_HEAD
    CThostFtdcOffsetSettingField data;
} PyCThostFtdcOffsetSettingField;

extern PyTypeObject PyCThostFtdcOffsetSettingFieldType;

extern int PyCThostFtdcOffsetSettingFieldType_init(PyObject *module);

#endif
