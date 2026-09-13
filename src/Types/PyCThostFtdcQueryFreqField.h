#ifndef PYCTP_TYPES_PYCTHOSTFTDCQUERYFREQFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQUERYFREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询频率，每秒查询比数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQueryFreqField data;
} PyCThostFtdcQueryFreqFieldData;

extern PyTypeObject *PyCThostFtdcQueryFreqFieldType;
extern int PyCTP_module_add_PyCThostFtdcQueryFreqFieldType_exec(PyObject *module);

#endif