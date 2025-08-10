#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERRORCONDITIONALORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERRORCONDITIONALORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询错误报单操作

typedef struct PyCThostFtdcErrorConditionalOrderField {
    PyObject_HEAD
    CThostFtdcErrorConditionalOrderField data;
} PyCThostFtdcErrorConditionalOrderField;

extern PyTypeObject PyCThostFtdcErrorConditionalOrderFieldType;

extern int PyCThostFtdcErrorConditionalOrderFieldType_init(PyObject *module);

#endif
