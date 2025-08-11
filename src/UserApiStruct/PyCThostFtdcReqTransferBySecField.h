#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQTRANSFERBYSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQTRANSFERBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqTransferBySecField {
    PyObject_HEAD
    CThostFtdcReqTransferBySecField data;
} PyCThostFtdcReqTransferBySecField;

extern PyTypeObject PyCThostFtdcReqTransferBySecFieldType;

extern int PyCThostFtdcReqTransferBySecFieldType_init(PyObject *module);

#endif
