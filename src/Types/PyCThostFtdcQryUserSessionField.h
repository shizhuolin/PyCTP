#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYUSERSESSIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYUSERSESSIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询用户会话

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryUserSessionField data;
} PyCThostFtdcQryUserSessionFieldData;

extern PyTypeObject *PyCThostFtdcQryUserSessionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryUserSessionFieldType_exec(PyObject *module);

#endif