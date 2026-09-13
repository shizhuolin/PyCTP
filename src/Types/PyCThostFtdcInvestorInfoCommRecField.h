#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORINFOCOMMRECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORINFOCOMMRECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者申报费阶梯收取记录

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorInfoCommRecField data;
} PyCThostFtdcInvestorInfoCommRecFieldData;

extern PyTypeObject *PyCThostFtdcInvestorInfoCommRecFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorInfoCommRecFieldType_exec(PyObject *module);

#endif