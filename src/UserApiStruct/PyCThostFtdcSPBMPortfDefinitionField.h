#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMPORTFDEFINITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMPORTFDEFINITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSPBMPortfDefinitionField {
    PyObject_HEAD
    CThostFtdcSPBMPortfDefinitionField data;
} PyCThostFtdcSPBMPortfDefinitionField;

extern PyTypeObject PyCThostFtdcSPBMPortfDefinitionFieldType;

extern int PyCThostFtdcSPBMPortfDefinitionFieldType_init(PyObject *module);

#endif
