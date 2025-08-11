#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSTRIKEOFFSETFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSTRIKEOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcStrikeOffsetField {
    PyObject_HEAD
    CThostFtdcStrikeOffsetField data;
} PyCThostFtdcStrikeOffsetField;

extern PyTypeObject PyCThostFtdcStrikeOffsetFieldType;

extern int PyCThostFtdcStrikeOffsetFieldType_init(PyObject *module);

#endif
