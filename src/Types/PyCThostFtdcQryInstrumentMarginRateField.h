#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTMARGINRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询合约保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInstrumentMarginRateField data;
} PyCThostFtdcQryInstrumentMarginRateFieldData;

extern PyTypeObject *PyCThostFtdcQryInstrumentMarginRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInstrumentMarginRateFieldType_exec(PyObject *module);

#endif