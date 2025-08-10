#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELAYSWAPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELAYSWAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///延时换汇同步

typedef struct PyCThostFtdcSyncDelaySwapField {
    PyObject_HEAD
    CThostFtdcSyncDelaySwapField data;
} PyCThostFtdcSyncDelaySwapField;

extern PyTypeObject PyCThostFtdcSyncDelaySwapFieldType;

extern int PyCThostFtdcSyncDelaySwapFieldType_init(PyObject *module);

#endif
