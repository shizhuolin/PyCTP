#ifndef PYCTP_TYPES_PYCTHOSTFTDCCOMBPROMOTIONPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCOMBPROMOTIONPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合优惠比例

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCombPromotionParamField data;
} PyCThostFtdcCombPromotionParamFieldData;

extern PyTypeObject *PyCThostFtdcCombPromotionParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcCombPromotionParamFieldType_exec(PyObject *module);

#endif