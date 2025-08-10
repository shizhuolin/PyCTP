#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLINKMANFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLINKMANFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询联系人

typedef struct PyCThostFtdcQryLinkManField {
    PyObject_HEAD
    CThostFtdcQryLinkManField data;
} PyCThostFtdcQryLinkManField;

extern PyTypeObject PyCThostFtdcQryLinkManFieldType;

extern int PyCThostFtdcQryLinkManFieldType_init(PyObject *module);

#endif
