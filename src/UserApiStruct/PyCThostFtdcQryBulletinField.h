#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBULLETINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBULLETINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所公告

typedef struct PyCThostFtdcQryBulletinField {
    PyObject_HEAD
    CThostFtdcQryBulletinField data;
} PyCThostFtdcQryBulletinField;

extern PyTypeObject PyCThostFtdcQryBulletinFieldType;

extern int PyCThostFtdcQryBulletinFieldType_init(PyObject *module);

#endif
