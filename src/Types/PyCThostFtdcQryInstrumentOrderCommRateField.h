#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTORDERCOMMRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTORDERCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报单手续费率查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInstrumentOrderCommRateField data;
} PyCThostFtdcQryInstrumentOrderCommRateFieldData;

extern PyTypeObject *PyCThostFtdcQryInstrumentOrderCommRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInstrumentOrderCommRateFieldType_exec(PyObject *module);

#endif