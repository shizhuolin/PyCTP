#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSECAGENTCHECKMODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSECAGENTCHECKMODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///二级代理商资金校验模式

typedef struct PyCThostFtdcSecAgentCheckModeField {
    PyObject_HEAD
    CThostFtdcSecAgentCheckModeField data;
} PyCThostFtdcSecAgentCheckModeField;

extern PyTypeObject PyCThostFtdcSecAgentCheckModeFieldType;

extern int PyCThostFtdcSecAgentCheckModeFieldType_init(PyObject *module);

#endif
