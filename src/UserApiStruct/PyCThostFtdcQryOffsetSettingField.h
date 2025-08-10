#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOFFSETSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询对冲设置

typedef struct PyCThostFtdcQryOffsetSettingField {
    PyObject_HEAD
    CThostFtdcQryOffsetSettingField data;
} PyCThostFtdcQryOffsetSettingField;

extern PyTypeObject PyCThostFtdcQryOffsetSettingFieldType;

extern int PyCThostFtdcQryOffsetSettingFieldType_init(PyObject *module);

#endif
