#ifndef PYCTP_TYPES_PYCTHOSTFTDCBULLETINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBULLETINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所公告

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBulletinField data;
} PyCThostFtdcBulletinFieldData;

extern PyTypeObject *PyCThostFtdcBulletinFieldType;
extern int PyCTP_module_add_PyCThostFtdcBulletinFieldType_exec(PyObject *module);

#endif