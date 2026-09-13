#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQDAYENDFILEREADYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQDAYENDFILEREADYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///日终文件就绪请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqDayEndFileReadyField data;
} PyCThostFtdcReqDayEndFileReadyFieldData;

extern PyTypeObject *PyCThostFtdcReqDayEndFileReadyFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqDayEndFileReadyFieldType_exec(PyObject *module);

#endif