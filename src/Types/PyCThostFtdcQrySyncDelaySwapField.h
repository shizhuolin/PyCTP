#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSYNCDELAYSWAPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSYNCDELAYSWAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询延时换汇同步

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySyncDelaySwapField data;
} PyCThostFtdcQrySyncDelaySwapFieldData;

extern PyTypeObject *PyCThostFtdcQrySyncDelaySwapFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySyncDelaySwapFieldType_exec(PyObject *module);

#endif