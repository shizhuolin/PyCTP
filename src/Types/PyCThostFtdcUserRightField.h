#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERRIGHTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserRightField data;
} PyCThostFtdcUserRightFieldData;

extern PyTypeObject *PyCThostFtdcUserRightFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserRightFieldType_exec(PyObject *module);

#endif