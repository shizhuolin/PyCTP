#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTBATCHORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入批量报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputBatchOrderActionField data;
} PyCThostFtdcInputBatchOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcInputBatchOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputBatchOrderActionFieldType_exec(PyObject *module);

#endif