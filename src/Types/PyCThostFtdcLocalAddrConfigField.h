#ifndef PYCTP_TYPES_PYCTHOSTFTDCLOCALADDRCONFIGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCLOCALADDRCONFIGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///内网地址配置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcLocalAddrConfigField data;
} PyCThostFtdcLocalAddrConfigFieldData;

extern PyTypeObject *PyCThostFtdcLocalAddrConfigFieldType;
extern int PyCTP_module_add_PyCThostFtdcLocalAddrConfigFieldType_exec(PyObject *module);

#endif