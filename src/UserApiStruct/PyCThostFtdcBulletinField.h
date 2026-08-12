#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBULLETINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBULLETINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所公告

typedef struct PyCThostFtdcBulletinField {
    PyObject_HEAD
    CThostFtdcBulletinField data;
} PyCThostFtdcBulletinField;

extern PyTypeObject PyCThostFtdcBulletinFieldType;

extern int PyCThostFtdcBulletinFieldType_init(PyObject *module);

#endif
