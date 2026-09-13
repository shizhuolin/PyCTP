#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYMAXORDERVOLUMEWITHPRICEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYMAXORDERVOLUMEWITHPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///根据价格查询最大报单数量

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryMaxOrderVolumeWithPriceField data;
} PyCThostFtdcQryMaxOrderVolumeWithPriceFieldData;

extern PyTypeObject *PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_exec(PyObject *module);

#endif