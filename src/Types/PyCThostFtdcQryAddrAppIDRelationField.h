#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYADDRAPPIDRELATIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYADDRAPPIDRELATIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址和AppID的关系查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryAddrAppIDRelationField data;
} PyCThostFtdcQryAddrAppIDRelationFieldData;

extern PyTypeObject *PyCThostFtdcQryAddrAppIDRelationFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryAddrAppIDRelationFieldType_exec(PyObject *module);

#endif