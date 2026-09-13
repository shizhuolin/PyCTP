#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELAYSWAPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELAYSWAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///延时换汇同步

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDelaySwapField data;
} PyCThostFtdcSyncDelaySwapFieldData;

extern PyTypeObject *PyCThostFtdcSyncDelaySwapFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDelaySwapFieldType_exec(PyObject *module);

#endif