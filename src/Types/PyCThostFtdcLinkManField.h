#ifndef PYCTP_TYPES_PYCTHOSTFTDCLINKMANFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCLINKMANFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///联系人

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcLinkManField data;
} PyCThostFtdcLinkManFieldData;

extern PyTypeObject *PyCThostFtdcLinkManFieldType;
extern int PyCTP_module_add_PyCThostFtdcLinkManFieldType_exec(PyObject *module);

#endif