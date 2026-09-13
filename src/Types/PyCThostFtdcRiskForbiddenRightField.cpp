
#include "PyCThostFtdcRiskForbiddenRightField.h"

///风控禁止的合约交易权限

static int PyCThostFtdcRiskForbiddenRightFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "InstrumentID", "UserID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRiskForbiddenRightField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRiskForbiddenRightField_BrokerID_length = 0;

    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcRiskForbiddenRightField_InvestorID = NULL;
    Py_ssize_t CThostFtdcRiskForbiddenRightField_InvestorID_length = 0;

    /// 合约/产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcRiskForbiddenRightField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcRiskForbiddenRightField_InstrumentID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRiskForbiddenRightField_UserID = NULL;
    Py_ssize_t CThostFtdcRiskForbiddenRightField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcRiskForbiddenRightField_BrokerID, &CThostFtdcRiskForbiddenRightField_BrokerID_length
        , &CThostFtdcRiskForbiddenRightField_InvestorID, &CThostFtdcRiskForbiddenRightField_InvestorID_length
        , &CThostFtdcRiskForbiddenRightField_InstrumentID, &CThostFtdcRiskForbiddenRightField_InstrumentID_length
        , &CThostFtdcRiskForbiddenRightField_UserID, &CThostFtdcRiskForbiddenRightField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRiskForbiddenRightField_BrokerID != NULL ) {
        if(CThostFtdcRiskForbiddenRightField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRiskForbiddenRightField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRiskForbiddenRightField_BrokerID, CThostFtdcRiskForbiddenRightField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRiskForbiddenRightField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRiskForbiddenRightField_BrokerID = NULL;
    }

    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcRiskForbiddenRightField_InvestorID != NULL ) {
        if(CThostFtdcRiskForbiddenRightField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcRiskForbiddenRightField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcRiskForbiddenRightField_InvestorID, CThostFtdcRiskForbiddenRightField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcRiskForbiddenRightField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcRiskForbiddenRightField_InvestorID = NULL;
    }

    /// 合约/产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcRiskForbiddenRightField_InstrumentID != NULL ) {
        if(CThostFtdcRiskForbiddenRightField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcRiskForbiddenRightField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcRiskForbiddenRightField_InstrumentID, CThostFtdcRiskForbiddenRightField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcRiskForbiddenRightField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcRiskForbiddenRightField_InstrumentID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRiskForbiddenRightField_UserID != NULL ) {
        if(CThostFtdcRiskForbiddenRightField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRiskForbiddenRightField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRiskForbiddenRightField_UserID, CThostFtdcRiskForbiddenRightField_UserID_length);
        strncpy(data->UserID, CThostFtdcRiskForbiddenRightField_UserID, sizeof(data->UserID));
        CThostFtdcRiskForbiddenRightField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRiskForbiddenRightFieldType_repr(PyObject *self) {

    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskForbiddenRightField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskForbiddenRightField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRiskForbiddenRightFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRiskForbiddenRightFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskForbiddenRightField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者编号
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcRiskForbiddenRightFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcRiskForbiddenRightFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskForbiddenRightField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约/产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcRiskForbiddenRightFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcRiskForbiddenRightFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskForbiddenRightField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRiskForbiddenRightFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRiskForbiddenRightFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRiskForbiddenRightField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRiskForbiddenRightFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRiskForbiddenRightFieldData>(self);
    CThostFtdcRiskForbiddenRightField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRiskForbiddenRightFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRiskForbiddenRightFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRiskForbiddenRightFieldType_get_BrokerID,
    .set = PyCThostFtdcRiskForbiddenRightFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者编号
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcRiskForbiddenRightFieldType_get_InvestorID,
    .set = PyCThostFtdcRiskForbiddenRightFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者编号"),
    },
    /// 合约/产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcRiskForbiddenRightFieldType_get_InstrumentID,
    .set = PyCThostFtdcRiskForbiddenRightFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约/产品代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRiskForbiddenRightFieldType_get_UserID,
    .set = PyCThostFtdcRiskForbiddenRightFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRiskForbiddenRightFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRiskForbiddenRightField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("风控禁止的合约交易权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRiskForbiddenRightFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRiskForbiddenRightFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRiskForbiddenRightFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRiskForbiddenRightFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRiskForbiddenRightFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRiskForbiddenRightFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("风控禁止的合约交易权限")},
    {Py_tp_members, PyCThostFtdcRiskForbiddenRightFieldType_members},
    {Py_tp_getset, PyCThostFtdcRiskForbiddenRightFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRiskForbiddenRightFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRiskForbiddenRightFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRiskForbiddenRightFieldType_spec = {
    .name = "PyCTP.CThostFtdcRiskForbiddenRightField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRiskForbiddenRightFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRiskForbiddenRightFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRiskForbiddenRightFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRiskForbiddenRightFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRiskForbiddenRightFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRiskForbiddenRightFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRiskForbiddenRightFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRiskForbiddenRightFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRiskForbiddenRightField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRiskForbiddenRightField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}