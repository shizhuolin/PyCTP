#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSTRIKEOFFSETFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSTRIKEOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryStrikeOffsetField {
    PyObject_HEAD
    CThostFtdcQryStrikeOffsetField data;
} PyCThostFtdcQryStrikeOffsetField;

extern PyTypeObject PyCThostFtdcQryStrikeOffsetFieldType;

extern int PyCThostFtdcQryStrikeOffsetFieldType_init(PyObject *module);

#endif
