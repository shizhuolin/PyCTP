#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYMAXORDERVOLUMEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYMAXORDERVOLUMEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询最大报单数量

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryMaxOrderVolumeField data;
} PyCThostFtdcQryMaxOrderVolumeFieldData;

extern PyTypeObject *PyCThostFtdcQryMaxOrderVolumeFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryMaxOrderVolumeFieldType_exec(PyObject *module);

#endif