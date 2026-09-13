#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYNOTICEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询客户通知

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryNoticeField data;
} PyCThostFtdcQryNoticeFieldData;

extern PyTypeObject *PyCThostFtdcQryNoticeFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryNoticeFieldType_exec(PyObject *module);

#endif