#ifndef PYCTP_TYPES_PYCTHOSTFTDCPOSITIONPROFITALGORITHMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCPOSITIONPROFITALGORITHMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///浮动盈亏算法

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcPositionProfitAlgorithmField data;
} PyCThostFtdcPositionProfitAlgorithmFieldData;

extern PyTypeObject *PyCThostFtdcPositionProfitAlgorithmFieldType;
extern int PyCTP_module_add_PyCThostFtdcPositionProfitAlgorithmFieldType_exec(PyObject *module);

#endif