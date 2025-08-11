#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCWECHATUSERSYSTEMINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCWECHATUSERSYSTEMINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcWechatUserSystemInfoField {
    PyObject_HEAD
    CThostFtdcWechatUserSystemInfoField data;
} PyCThostFtdcWechatUserSystemInfoField;

extern PyTypeObject PyCThostFtdcWechatUserSystemInfoFieldType;

extern int PyCThostFtdcWechatUserSystemInfoFieldType_init(PyObject *module);

#endif
