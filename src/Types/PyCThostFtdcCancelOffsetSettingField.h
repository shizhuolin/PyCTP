#ifndef PYCTP_TYPES_PYCTHOSTFTDCCANCELOFFSETSETTINGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCANCELOFFSETSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///撤销对冲设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCancelOffsetSettingField data;
} PyCThostFtdcCancelOffsetSettingFieldData;

extern PyTypeObject *PyCThostFtdcCancelOffsetSettingFieldType;
extern int PyCTP_module_add_PyCThostFtdcCancelOffsetSettingFieldType_exec(PyObject *module);

#endif