#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEWARRANTOFFSETFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEWARRANTOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcEWarrantOffsetField {
    PyObject_HEAD
    CThostFtdcEWarrantOffsetField data;
} PyCThostFtdcEWarrantOffsetField;

extern PyTypeObject PyCThostFtdcEWarrantOffsetFieldType;

extern int PyCThostFtdcEWarrantOffsetFieldType_init(PyObject *module);

#endif
