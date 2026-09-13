#ifndef PYCTP_TYPES_PYCTHOSTFTDCNOTICEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户通知

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcNoticeField data;
} PyCThostFtdcNoticeFieldData;

extern PyTypeObject *PyCThostFtdcNoticeFieldType;
extern int PyCTP_module_add_PyCThostFtdcNoticeFieldType_exec(PyObject *module);

#endif