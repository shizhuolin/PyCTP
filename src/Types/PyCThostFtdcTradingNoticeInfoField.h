#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGNOTICEINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGNOTICEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户事件通知信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingNoticeInfoField data;
} PyCThostFtdcTradingNoticeInfoFieldData;

extern PyTypeObject *PyCThostFtdcTradingNoticeInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingNoticeInfoFieldType_exec(PyObject *module);

#endif