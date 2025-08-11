#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCANCELOFFSETSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCANCELOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCancelOffsetSettingField {
    PyObject_HEAD
    CThostFtdcCancelOffsetSettingField data;
} PyCThostFtdcCancelOffsetSettingField;

extern PyTypeObject PyCThostFtdcCancelOffsetSettingFieldType;

extern int PyCThostFtdcCancelOffsetSettingFieldType_init(PyObject *module);

#endif
