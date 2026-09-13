
#include "PyCThostFtdcQryInvestorInfoCommRecField.h"

///投资者申报费阶梯收取记录查询

static int PyCThostFtdcQryInvestorInfoCommRecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InvestorID", "InstrumentID", "BrokerID", NULL };


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQryInvestorInfoCommRecField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQryInvestorInfoCommRecField_InvestorID_length = 0;

    /// 商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryInvestorInfoCommRecField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQryInvestorInfoCommRecField_InstrumentID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryInvestorInfoCommRecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryInvestorInfoCommRecField_BrokerID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryInvestorInfoCommRecField_InvestorID, &CThostFtdcQryInvestorInfoCommRecField_InvestorID_length
        , &CThostFtdcQryInvestorInfoCommRecField_InstrumentID, &CThostFtdcQryInvestorInfoCommRecField_InstrumentID_length
        , &CThostFtdcQryInvestorInfoCommRecField_BrokerID, &CThostFtdcQryInvestorInfoCommRecField_BrokerID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(self);
    CThostFtdcQryInvestorInfoCommRecField *data = &(extra->data);


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQryInvestorInfoCommRecField_InvestorID != NULL ) {
        if(CThostFtdcQryInvestorInfoCommRecField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQryInvestorInfoCommRecField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQryInvestorInfoCommRecField_InvestorID, CThostFtdcQryInvestorInfoCommRecField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQryInvestorInfoCommRecField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQryInvestorInfoCommRecField_InvestorID = NULL;
    }

    /// 商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryInvestorInfoCommRecField_InstrumentID != NULL ) {
        if(CThostFtdcQryInvestorInfoCommRecField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryInvestorInfoCommRecField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQryInvestorInfoCommRecField_InstrumentID, CThostFtdcQryInvestorInfoCommRecField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQryInvestorInfoCommRecField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQryInvestorInfoCommRecField_InstrumentID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryInvestorInfoCommRecField_BrokerID != NULL ) {
        if(CThostFtdcQryInvestorInfoCommRecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryInvestorInfoCommRecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryInvestorInfoCommRecField_BrokerID, CThostFtdcQryInvestorInfoCommRecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryInvestorInfoCommRecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryInvestorInfoCommRecField_BrokerID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryInvestorInfoCommRecFieldType_repr(PyObject *self) {

    PyCThostFtdcQryInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(self);
    CThostFtdcQryInvestorInfoCommRecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorInfoCommRecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorInfoCommRecField repr");
        return NULL;
    }

    return repr;
}


/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQryInvestorInfoCommRecFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(self);
    CThostFtdcQryInvestorInfoCommRecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQryInvestorInfoCommRecFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorInfoCommRecField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(self);
    CThostFtdcQryInvestorInfoCommRecField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryInvestorInfoCommRecFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(self);
    CThostFtdcQryInvestorInfoCommRecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQryInvestorInfoCommRecFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorInfoCommRecField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(self);
    CThostFtdcQryInvestorInfoCommRecField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryInvestorInfoCommRecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(self);
    CThostFtdcQryInvestorInfoCommRecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryInvestorInfoCommRecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryInvestorInfoCommRecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryInvestorInfoCommRecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(self);
    CThostFtdcQryInvestorInfoCommRecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryInvestorInfoCommRecFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryInvestorInfoCommRecFieldType_getsets[] = {
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQryInvestorInfoCommRecFieldType_get_InvestorID,
    .set = PyCThostFtdcQryInvestorInfoCommRecFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 商品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQryInvestorInfoCommRecFieldType_get_InstrumentID,
    .set = PyCThostFtdcQryInvestorInfoCommRecFieldType_set_InstrumentID,
    .doc = PyDoc_STR("商品代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryInvestorInfoCommRecFieldType_get_BrokerID,
    .set = PyCThostFtdcQryInvestorInfoCommRecFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryInvestorInfoCommRecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryInvestorInfoCommRecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者申报费阶梯收取记录查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryInvestorInfoCommRecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryInvestorInfoCommRecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryInvestorInfoCommRecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryInvestorInfoCommRecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryInvestorInfoCommRecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryInvestorInfoCommRecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者申报费阶梯收取记录查询")},
    {Py_tp_members, PyCThostFtdcQryInvestorInfoCommRecFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryInvestorInfoCommRecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryInvestorInfoCommRecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryInvestorInfoCommRecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryInvestorInfoCommRecFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryInvestorInfoCommRecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryInvestorInfoCommRecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryInvestorInfoCommRecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryInvestorInfoCommRecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryInvestorInfoCommRecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryInvestorInfoCommRecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryInvestorInfoCommRecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryInvestorInfoCommRecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryInvestorInfoCommRecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryInvestorInfoCommRecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorInfoCommRecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}