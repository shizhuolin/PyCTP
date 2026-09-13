#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELAYSWAPFROZENFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELAYSWAPFROZENFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///换汇可提冻结

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDelaySwapFrozenField data;
} PyCThostFtdcSyncDelaySwapFrozenFieldData;

extern PyTypeObject *PyCThostFtdcSyncDelaySwapFrozenFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDelaySwapFrozenFieldType_exec(PyObject *module);

#endif