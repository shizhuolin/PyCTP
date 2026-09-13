#ifndef PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTORDERCOMMRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTORDERCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前报单手续费的详细内容

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInstrumentOrderCommRateField data;
} PyCThostFtdcInstrumentOrderCommRateFieldData;

extern PyTypeObject *PyCThostFtdcInstrumentOrderCommRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcInstrumentOrderCommRateFieldType_exec(PyObject *module);

#endif