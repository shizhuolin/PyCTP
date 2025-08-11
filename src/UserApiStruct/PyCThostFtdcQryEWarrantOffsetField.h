#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEWARRANTOFFSETFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEWARRANTOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryEWarrantOffsetField {
    PyObject_HEAD
    CThostFtdcQryEWarrantOffsetField data;
} PyCThostFtdcQryEWarrantOffsetField;

extern PyTypeObject PyCThostFtdcQryEWarrantOffsetFieldType;

extern int PyCThostFtdcQryEWarrantOffsetFieldType_init(PyObject *module);

#endif
