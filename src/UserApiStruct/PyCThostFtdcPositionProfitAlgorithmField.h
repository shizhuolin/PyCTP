#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPOSITIONPROFITALGORITHMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPOSITIONPROFITALGORITHMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcPositionProfitAlgorithmField {
    PyObject_HEAD
    CThostFtdcPositionProfitAlgorithmField data;
} PyCThostFtdcPositionProfitAlgorithmField;

extern PyTypeObject PyCThostFtdcPositionProfitAlgorithmFieldType;

extern int PyCThostFtdcPositionProfitAlgorithmFieldType_init(PyObject *module);

#endif
