#ifndef PYCTP_TYPES_PYCTHOSTFTDCTGSESSIONQRYSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTGSESSIONQRYSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///TGate会话查询状态

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTGSessionQryStatusField data;
} PyCThostFtdcTGSessionQryStatusFieldData;

extern PyTypeObject *PyCThostFtdcTGSessionQryStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcTGSessionQryStatusFieldType_exec(PyObject *module);

#endif