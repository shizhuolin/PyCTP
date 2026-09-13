#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGNOTICEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户事件通知

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingNoticeField data;
} PyCThostFtdcTradingNoticeFieldData;

extern PyTypeObject *PyCThostFtdcTradingNoticeFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingNoticeFieldType_exec(PyObject *module);

#endif