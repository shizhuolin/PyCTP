#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERSYSTEMINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERSYSTEMINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcUserSystemInfoField {
    PyObject_HEAD
    CThostFtdcUserSystemInfoField data;
} PyCThostFtdcUserSystemInfoField;

extern PyTypeObject PyCThostFtdcUserSystemInfoFieldType;

extern int PyCThostFtdcUserSystemInfoFieldType_init(PyObject *module);

#endif
