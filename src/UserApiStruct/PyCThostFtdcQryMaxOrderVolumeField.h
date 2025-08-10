#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMAXORDERVOLUMEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMAXORDERVOLUMEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询最大报单数量

typedef struct PyCThostFtdcQryMaxOrderVolumeField {
    PyObject_HEAD
    CThostFtdcQryMaxOrderVolumeField data;
} PyCThostFtdcQryMaxOrderVolumeField;

extern PyTypeObject PyCThostFtdcQryMaxOrderVolumeFieldType;

extern int PyCThostFtdcQryMaxOrderVolumeFieldType_init(PyObject *module);

#endif
