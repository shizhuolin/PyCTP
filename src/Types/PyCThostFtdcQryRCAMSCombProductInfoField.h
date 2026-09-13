#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSCOMBPRODUCTINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSCOMBPRODUCTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS产品组合信息查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRCAMSCombProductInfoField data;
} PyCThostFtdcQryRCAMSCombProductInfoFieldData;

extern PyTypeObject *PyCThostFtdcQryRCAMSCombProductInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRCAMSCombProductInfoFieldType_exec(PyObject *module);

#endif