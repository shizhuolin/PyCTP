#ifndef PYCTP_TYPES_PYCTHOSTFTDCBATCHORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///批量报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBatchOrderActionField data;
} PyCThostFtdcBatchOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcBatchOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcBatchOrderActionFieldType_exec(PyObject *module);

#endif