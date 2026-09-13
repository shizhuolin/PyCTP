#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCLASSIFIEDINSTRUMENTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCLASSIFIEDINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询分类合约

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryClassifiedInstrumentField data;
} PyCThostFtdcQryClassifiedInstrumentFieldData;

extern PyTypeObject *PyCThostFtdcQryClassifiedInstrumentFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryClassifiedInstrumentFieldType_exec(PyObject *module);

#endif