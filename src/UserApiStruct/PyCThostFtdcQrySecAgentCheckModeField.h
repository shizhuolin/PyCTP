#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTCHECKMODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTCHECKMODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySecAgentCheckModeField {
    PyObject_HEAD
    CThostFtdcQrySecAgentCheckModeField data;
} PyCThostFtdcQrySecAgentCheckModeField;

extern PyTypeObject PyCThostFtdcQrySecAgentCheckModeFieldType;

extern int PyCThostFtdcQrySecAgentCheckModeFieldType_init(PyObject *module);

#endif
