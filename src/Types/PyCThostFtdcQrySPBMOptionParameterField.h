#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMOPTIONPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMOPTIONPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM期权合约保证金参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySPBMOptionParameterField data;
} PyCThostFtdcQrySPBMOptionParameterFieldData;

extern PyTypeObject *PyCThostFtdcQrySPBMOptionParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySPBMOptionParameterFieldType_exec(PyObject *module);

#endif