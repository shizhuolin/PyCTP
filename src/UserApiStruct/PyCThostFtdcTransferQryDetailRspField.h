#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYDETAILRSPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYDETAILRSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTransferQryDetailRspField {
    PyObject_HEAD
    CThostFtdcTransferQryDetailRspField data;
} PyCThostFtdcTransferQryDetailRspField;

extern PyTypeObject PyCThostFtdcTransferQryDetailRspFieldType;

extern int PyCThostFtdcTransferQryDetailRspFieldType_init(PyObject *module);

#endif
