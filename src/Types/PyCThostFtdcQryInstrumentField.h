#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询合约

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInstrumentField data;
} PyCThostFtdcQryInstrumentFieldData;

extern PyTypeObject *PyCThostFtdcQryInstrumentFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInstrumentFieldType_exec(PyObject *module);

#endif