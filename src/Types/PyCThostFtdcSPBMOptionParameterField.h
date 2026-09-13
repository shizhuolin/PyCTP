#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPBMOPTIONPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPBMOPTIONPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM期权合约保证金参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSPBMOptionParameterField data;
} PyCThostFtdcSPBMOptionParameterFieldData;

extern PyTypeObject *PyCThostFtdcSPBMOptionParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSPBMOptionParameterFieldType_exec(PyObject *module);

#endif