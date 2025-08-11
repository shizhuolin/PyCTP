#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPTRANSFERBYSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPTRANSFERBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspTransferBySecField {
    PyObject_HEAD
    CThostFtdcRspTransferBySecField data;
} PyCThostFtdcRspTransferBySecField;

extern PyTypeObject PyCThostFtdcRspTransferBySecFieldType;

extern int PyCThostFtdcRspTransferBySecFieldType_init(PyObject *module);

#endif
