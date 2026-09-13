#ifndef PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTMARGINRATEULFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTMARGINRATEULFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约保证金率调整

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInstrumentMarginRateULField data;
} PyCThostFtdcInstrumentMarginRateULFieldData;

extern PyTypeObject *PyCThostFtdcInstrumentMarginRateULFieldType;
extern int PyCTP_module_add_PyCThostFtdcInstrumentMarginRateULFieldType_exec(PyObject *module);

#endif