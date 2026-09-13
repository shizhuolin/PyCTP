#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERSESSIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERSESSIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户会话

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserSessionField data;
} PyCThostFtdcUserSessionFieldData;

extern PyTypeObject *PyCThostFtdcUserSessionFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserSessionFieldType_exec(PyObject *module);

#endif