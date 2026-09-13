#ifndef PYCTP_TYPES_PYCTHOSTFTDCRCAMSCOMBPRODUCTINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRCAMSCOMBPRODUCTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS产品组合信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRCAMSCombProductInfoField data;
} PyCThostFtdcRCAMSCombProductInfoFieldData;

extern PyTypeObject *PyCThostFtdcRCAMSCombProductInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcRCAMSCombProductInfoFieldType_exec(PyObject *module);

#endif