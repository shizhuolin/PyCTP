#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYOFFSETSETTINGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询对冲设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryOffsetSettingField data;
} PyCThostFtdcQryOffsetSettingFieldData;

extern PyTypeObject *PyCThostFtdcQryOffsetSettingFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryOffsetSettingFieldType_exec(PyObject *module);

#endif