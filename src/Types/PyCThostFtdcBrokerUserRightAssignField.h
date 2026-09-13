#ifndef PYCTP_TYPES_PYCTHOSTFTDCBROKERUSERRIGHTASSIGNFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBROKERUSERRIGHTASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经济公司是否有在本标示的交易权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBrokerUserRightAssignField data;
} PyCThostFtdcBrokerUserRightAssignFieldData;

extern PyTypeObject *PyCThostFtdcBrokerUserRightAssignFieldType;
extern int PyCTP_module_add_PyCThostFtdcBrokerUserRightAssignFieldType_exec(PyObject *module);

#endif