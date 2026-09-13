#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTOFFSETSETTINGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的对冲设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputOffsetSettingField data;
} PyCThostFtdcInputOffsetSettingFieldData;

extern PyTypeObject *PyCThostFtdcInputOffsetSettingFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputOffsetSettingFieldType_exec(PyObject *module);

#endif