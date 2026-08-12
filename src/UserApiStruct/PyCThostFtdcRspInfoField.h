#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///响应信息

typedef struct PyCThostFtdcRspInfoField {
    PyObject_HEAD
    CThostFtdcRspInfoField data;
} PyCThostFtdcRspInfoField;

extern PyTypeObject PyCThostFtdcRspInfoFieldType;

extern int PyCThostFtdcRspInfoFieldType_init(PyObject *module);

#endif
