#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORINFOCNTSETTINGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORINFOCNTSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者申报费阶梯收取设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorInfoCntSettingField data;
} PyCThostFtdcInvestorInfoCntSettingFieldData;

extern PyTypeObject *PyCThostFtdcInvestorInfoCntSettingFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorInfoCntSettingFieldType_exec(PyObject *module);

#endif