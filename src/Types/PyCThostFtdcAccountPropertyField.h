#ifndef PYCTP_TYPES_PYCTHOSTFTDCACCOUNTPROPERTYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCACCOUNTPROPERTYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银行账户属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAccountPropertyField data;
} PyCThostFtdcAccountPropertyFieldData;

extern PyTypeObject *PyCThostFtdcAccountPropertyFieldType;
extern int PyCTP_module_add_PyCThostFtdcAccountPropertyFieldType_exec(PyObject *module);

#endif