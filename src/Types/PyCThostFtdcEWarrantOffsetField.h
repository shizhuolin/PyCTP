#ifndef PYCTP_TYPES_PYCTHOSTFTDCEWARRANTOFFSETFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEWARRANTOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///仓单折抵信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcEWarrantOffsetField data;
} PyCThostFtdcEWarrantOffsetFieldData;

extern PyTypeObject *PyCThostFtdcEWarrantOffsetFieldType;
extern int PyCTP_module_add_PyCThostFtdcEWarrantOffsetFieldType_exec(PyObject *module);

#endif