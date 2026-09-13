#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBPROMOTIONPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBPROMOTIONPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询组合优惠比例

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryCombPromotionParamField data;
} PyCThostFtdcQryCombPromotionParamFieldData;

extern PyTypeObject *PyCThostFtdcQryCombPromotionParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryCombPromotionParamFieldType_exec(PyObject *module);

#endif