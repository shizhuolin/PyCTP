#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELAYSWAPFROZENFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELAYSWAPFROZENFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///换汇可提冻结

typedef struct PyCThostFtdcSyncDelaySwapFrozenField {
    PyObject_HEAD
    CThostFtdcSyncDelaySwapFrozenField data;
} PyCThostFtdcSyncDelaySwapFrozenField;

extern PyTypeObject PyCThostFtdcSyncDelaySwapFrozenFieldType;

extern int PyCThostFtdcSyncDelaySwapFrozenFieldType_init(PyObject *module);

#endif
