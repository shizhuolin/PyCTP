#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATALASTMATCHFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATALASTMATCHFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情最新成交属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataLastMatchField data;
} PyCThostFtdcMarketDataLastMatchFieldData;

extern PyTypeObject *PyCThostFtdcMarketDataLastMatchFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataLastMatchFieldType_exec(PyObject *module);

#endif