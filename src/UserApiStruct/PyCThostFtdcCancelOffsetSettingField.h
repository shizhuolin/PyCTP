#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCANCELOFFSETSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCANCELOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///撤销对冲设置

typedef struct PyCThostFtdcCancelOffsetSettingField {
    PyObject_HEAD
    CThostFtdcCancelOffsetSettingField data;
} PyCThostFtdcCancelOffsetSettingField;

extern PyTypeObject PyCThostFtdcCancelOffsetSettingFieldType;

extern int PyCThostFtdcCancelOffsetSettingFieldType_init(PyObject *module);

#endif
