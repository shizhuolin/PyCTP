#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRANSFERSERIALFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRANSFERSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询转帐流水

typedef struct PyCThostFtdcQryTransferSerialField {
    PyObject_HEAD
    CThostFtdcQryTransferSerialField data;
} PyCThostFtdcQryTransferSerialField;

extern PyTypeObject PyCThostFtdcQryTransferSerialFieldType;

extern int PyCThostFtdcQryTransferSerialFieldType_init(PyObject *module);

#endif
