#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYBULLETINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYBULLETINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所公告

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryBulletinField data;
} PyCThostFtdcQryBulletinFieldData;

extern PyTypeObject *PyCThostFtdcQryBulletinFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryBulletinFieldType_exec(PyObject *module);

#endif