#ifndef PYCTP_TYPES_PYCTHOSTFTDCOFFSETSETTINGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///对冲设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOffsetSettingField data;
} PyCThostFtdcOffsetSettingFieldData;

extern PyTypeObject *PyCThostFtdcOffsetSettingFieldType;
extern int PyCTP_module_add_PyCThostFtdcOffsetSettingFieldType_exec(PyObject *module);

#endif