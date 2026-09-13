#ifndef PYCTP_TYPES_PYCTHOSTFTDCPORTFTRADEPARAMSETTINGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCPORTFTRADEPARAMSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组保交易参数设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcPortfTradeParamSettingField data;
} PyCThostFtdcPortfTradeParamSettingFieldData;

extern PyTypeObject *PyCThostFtdcPortfTradeParamSettingFieldType;
extern int PyCTP_module_add_PyCThostFtdcPortfTradeParamSettingFieldType_exec(PyObject *module);

#endif