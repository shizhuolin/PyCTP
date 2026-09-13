#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPORTFSETTINGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPORTFSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者新组保设置查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorPortfSettingField data;
} PyCThostFtdcQryInvestorPortfSettingFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorPortfSettingFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorPortfSettingFieldType_exec(PyObject *module);

#endif