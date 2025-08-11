#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELAYSWAPFROZENFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELAYSWAPFROZENFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDelaySwapFrozenField {
    PyObject_HEAD
    CThostFtdcSyncDelaySwapFrozenField data;
} PyCThostFtdcSyncDelaySwapFrozenField;

extern PyTypeObject PyCThostFtdcSyncDelaySwapFrozenFieldType;

extern int PyCThostFtdcSyncDelaySwapFrozenFieldType_init(PyObject *module);

#endif
