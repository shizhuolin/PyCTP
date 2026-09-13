#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORINFOCOMMRECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORINFOCOMMRECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者申报费阶梯收取记录查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorInfoCommRecField data;
} PyCThostFtdcQryInvestorInfoCommRecFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorInfoCommRecFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorInfoCommRecFieldType_exec(PyObject *module);

#endif