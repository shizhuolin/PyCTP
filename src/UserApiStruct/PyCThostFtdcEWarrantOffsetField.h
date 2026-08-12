#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEWARRANTOFFSETFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEWARRANTOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///仓单折抵信息

typedef struct PyCThostFtdcEWarrantOffsetField {
    PyObject_HEAD
    CThostFtdcEWarrantOffsetField data;
} PyCThostFtdcEWarrantOffsetField;

extern PyTypeObject PyCThostFtdcEWarrantOffsetFieldType;

extern int PyCThostFtdcEWarrantOffsetFieldType_init(PyObject *module);

#endif
