#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMPORTFDEFINITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMPORTFDEFINITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合保证金套餐查询

typedef struct PyCThostFtdcQrySPBMPortfDefinitionField {
    PyObject_HEAD
    CThostFtdcQrySPBMPortfDefinitionField data;
} PyCThostFtdcQrySPBMPortfDefinitionField;

extern PyTypeObject PyCThostFtdcQrySPBMPortfDefinitionFieldType;

extern int PyCThostFtdcQrySPBMPortfDefinitionFieldType_init(PyObject *module);

#endif
