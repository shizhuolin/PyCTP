#ifndef PYCTP_TYPES_PYCTHOSTFTDCADDRAPPIDRELATIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCADDRAPPIDRELATIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址和AppID的关系

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAddrAppIDRelationField data;
} PyCThostFtdcAddrAppIDRelationFieldData;

extern PyTypeObject *PyCThostFtdcAddrAppIDRelationFieldType;
extern int PyCTP_module_add_PyCThostFtdcAddrAppIDRelationFieldType_exec(PyObject *module);

#endif