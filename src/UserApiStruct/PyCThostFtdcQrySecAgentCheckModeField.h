#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTCHECKMODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTCHECKMODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询二级代理商资金校验模式

typedef struct PyCThostFtdcQrySecAgentCheckModeField {
    PyObject_HEAD
    CThostFtdcQrySecAgentCheckModeField data;
} PyCThostFtdcQrySecAgentCheckModeField;

extern PyTypeObject PyCThostFtdcQrySecAgentCheckModeFieldType;

extern int PyCThostFtdcQrySecAgentCheckModeFieldType_init(PyObject *module);

#endif
