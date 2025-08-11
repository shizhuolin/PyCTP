#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUERYFREQFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUERYFREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQueryFreqField {
    PyObject_HEAD
    CThostFtdcQueryFreqField data;
} PyCThostFtdcQueryFreqField;

extern PyTypeObject PyCThostFtdcQueryFreqFieldType;

extern int PyCThostFtdcQueryFreqFieldType_init(PyObject *module);

#endif
