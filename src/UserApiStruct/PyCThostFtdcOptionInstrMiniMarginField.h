#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRMINIMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRMINIMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcOptionInstrMiniMarginField {
    PyObject_HEAD
    CThostFtdcOptionInstrMiniMarginField data;
} PyCThostFtdcOptionInstrMiniMarginField;

extern PyTypeObject PyCThostFtdcOptionInstrMiniMarginFieldType;

extern int PyCThostFtdcOptionInstrMiniMarginFieldType_init(PyObject *module);

#endif
