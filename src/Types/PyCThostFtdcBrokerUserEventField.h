#ifndef PYCTP_TYPES_PYCTHOSTFTDCBROKERUSEREVENTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBROKERUSEREVENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司用户事件

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBrokerUserEventField data;
} PyCThostFtdcBrokerUserEventFieldData;

extern PyTypeObject *PyCThostFtdcBrokerUserEventFieldType;
extern int PyCTP_module_add_PyCThostFtdcBrokerUserEventFieldType_exec(PyObject *module);

#endif