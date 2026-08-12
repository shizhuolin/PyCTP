#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUERYFREQFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUERYFREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询频率，每秒查询比数

typedef struct PyCThostFtdcQueryFreqField {
    PyObject_HEAD
    CThostFtdcQueryFreqField data;
} PyCThostFtdcQueryFreqField;

extern PyTypeObject PyCThostFtdcQueryFreqFieldType;

extern int PyCThostFtdcQueryFreqFieldType_init(PyObject *module);

#endif
