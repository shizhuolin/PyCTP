#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBULLETINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBULLETINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBulletinField {
    PyObject_HEAD
    CThostFtdcBulletinField data;
} PyCThostFtdcBulletinField;

extern PyTypeObject PyCThostFtdcBulletinFieldType;

extern int PyCThostFtdcBulletinFieldType_init(PyObject *module);

#endif
