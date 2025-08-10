#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLOCALADDRCONFIGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLOCALADDRCONFIGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///内网地址配置查询

typedef struct PyCThostFtdcQryLocalAddrConfigField {
    PyObject_HEAD
    CThostFtdcQryLocalAddrConfigField data;
} PyCThostFtdcQryLocalAddrConfigField;

extern PyTypeObject PyCThostFtdcQryLocalAddrConfigFieldType;

extern int PyCThostFtdcQryLocalAddrConfigFieldType_init(PyObject *module);

#endif
