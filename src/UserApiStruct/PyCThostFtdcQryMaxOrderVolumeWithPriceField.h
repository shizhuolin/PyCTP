#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMAXORDERVOLUMEWITHPRICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMAXORDERVOLUMEWITHPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///根据价格查询最大报单数量

typedef struct PyCThostFtdcQryMaxOrderVolumeWithPriceField {
    PyObject_HEAD
    CThostFtdcQryMaxOrderVolumeWithPriceField data;
} PyCThostFtdcQryMaxOrderVolumeWithPriceField;

extern PyTypeObject PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType;

extern int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_init(PyObject *module);

#endif
