#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCDELAYSWAPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCDELAYSWAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySyncDelaySwapField {
    PyObject_HEAD
    CThostFtdcQrySyncDelaySwapField data;
} PyCThostFtdcQrySyncDelaySwapField;

extern PyTypeObject PyCThostFtdcQrySyncDelaySwapFieldType;

extern int PyCThostFtdcQrySyncDelaySwapFieldType_init(PyObject *module);

#endif
