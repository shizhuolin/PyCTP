#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询合约状态

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInstrumentStatusField data;
} PyCThostFtdcQryInstrumentStatusFieldData;

extern PyTypeObject *PyCThostFtdcQryInstrumentStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInstrumentStatusFieldType_exec(PyObject *module);

#endif