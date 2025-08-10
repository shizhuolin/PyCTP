#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMMPHASEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMMPHASEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///通讯阶段

typedef struct PyCThostFtdcCommPhaseField {
    PyObject_HEAD
    CThostFtdcCommPhaseField data;
} PyCThostFtdcCommPhaseField;

extern PyTypeObject PyCThostFtdcCommPhaseFieldType;

extern int PyCThostFtdcCommPhaseFieldType_init(PyObject *module);

#endif
