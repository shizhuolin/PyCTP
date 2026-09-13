#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYLINKMANFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYLINKMANFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询联系人

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryLinkManField data;
} PyCThostFtdcQryLinkManFieldData;

extern PyTypeObject *PyCThostFtdcQryLinkManFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryLinkManFieldType_exec(PyObject *module);

#endif