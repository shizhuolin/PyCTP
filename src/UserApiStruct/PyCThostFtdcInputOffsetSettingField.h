#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTOFFSETSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的对冲设置

typedef struct PyCThostFtdcInputOffsetSettingField {
    PyObject_HEAD
    CThostFtdcInputOffsetSettingField data;
} PyCThostFtdcInputOffsetSettingField;

extern PyTypeObject PyCThostFtdcInputOffsetSettingFieldType;

extern int PyCThostFtdcInputOffsetSettingFieldType_init(PyObject *module);

#endif
