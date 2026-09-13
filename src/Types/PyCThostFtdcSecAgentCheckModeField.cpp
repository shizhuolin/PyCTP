
#include "PyCThostFtdcSecAgentCheckModeField.h"

///二级代理商资金校验模式

static int PyCThostFtdcSecAgentCheckModeFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "InvestorID", "BrokerID", "CurrencyID", "BrokerSecAgentID", "CheckSelfAccount", NULL };


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSecAgentCheckModeField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSecAgentCheckModeField_InvestorID_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSecAgentCheckModeField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSecAgentCheckModeField_BrokerID_length = 0;

    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSecAgentCheckModeField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcSecAgentCheckModeField_CurrencyID_length = 0;

    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcSecAgentCheckModeField_BrokerSecAgentID = NULL;
    Py_ssize_t CThostFtdcSecAgentCheckModeField_BrokerSecAgentID_length = 0;

    /// 是否需要校验自己的资金账户
    /// typedef int TThostFtdcBoolType
    int CThostFtdcSecAgentCheckModeField_CheckSelfAccount = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
        , &CThostFtdcSecAgentCheckModeField_InvestorID, &CThostFtdcSecAgentCheckModeField_InvestorID_length
        , &CThostFtdcSecAgentCheckModeField_BrokerID, &CThostFtdcSecAgentCheckModeField_BrokerID_length
        , &CThostFtdcSecAgentCheckModeField_CurrencyID, &CThostFtdcSecAgentCheckModeField_CurrencyID_length
        , &CThostFtdcSecAgentCheckModeField_BrokerSecAgentID, &CThostFtdcSecAgentCheckModeField_BrokerSecAgentID_length
        , &CThostFtdcSecAgentCheckModeField_CheckSelfAccount
    )) {
        return -1;
    }

    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);


    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSecAgentCheckModeField_InvestorID != NULL ) {
        if(CThostFtdcSecAgentCheckModeField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSecAgentCheckModeField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSecAgentCheckModeField_InvestorID, CThostFtdcSecAgentCheckModeField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSecAgentCheckModeField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSecAgentCheckModeField_InvestorID = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSecAgentCheckModeField_BrokerID != NULL ) {
        if(CThostFtdcSecAgentCheckModeField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSecAgentCheckModeField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSecAgentCheckModeField_BrokerID, CThostFtdcSecAgentCheckModeField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSecAgentCheckModeField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSecAgentCheckModeField_BrokerID = NULL;
    }

    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSecAgentCheckModeField_CurrencyID != NULL ) {
        if(CThostFtdcSecAgentCheckModeField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSecAgentCheckModeField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcSecAgentCheckModeField_CurrencyID, CThostFtdcSecAgentCheckModeField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcSecAgentCheckModeField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcSecAgentCheckModeField_CurrencyID = NULL;
    }

    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcSecAgentCheckModeField_BrokerSecAgentID != NULL ) {
        if(CThostFtdcSecAgentCheckModeField_BrokerSecAgentID_length >= (Py_ssize_t)sizeof(data->BrokerSecAgentID)) {
            PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is 12)", CThostFtdcSecAgentCheckModeField_BrokerSecAgentID_length);
            return -1;
        }
        // memset(data->BrokerSecAgentID, 0, sizeof(data->BrokerSecAgentID));
        // memcpy(data->BrokerSecAgentID, CThostFtdcSecAgentCheckModeField_BrokerSecAgentID, CThostFtdcSecAgentCheckModeField_BrokerSecAgentID_length);
        strncpy(data->BrokerSecAgentID, CThostFtdcSecAgentCheckModeField_BrokerSecAgentID, sizeof(data->BrokerSecAgentID));
        CThostFtdcSecAgentCheckModeField_BrokerSecAgentID = NULL;
    }

    /// 是否需要校验自己的资金账户
    /// typedef int TThostFtdcBoolType
    data->CheckSelfAccount = CThostFtdcSecAgentCheckModeField_CheckSelfAccount;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSecAgentCheckModeFieldType_repr(PyObject *self) {

    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "BrokerSecAgentID", data->BrokerSecAgentID//, (Py_ssize_t)sizeof(data->BrokerSecAgentID)
        , "CheckSelfAccount", data->CheckSelfAccount
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentCheckModeField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentCheckModeField repr");
        return NULL;
    }

    return repr;
}


/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSecAgentCheckModeFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSecAgentCheckModeFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentCheckModeField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSecAgentCheckModeFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSecAgentCheckModeFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentCheckModeField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSecAgentCheckModeFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcSecAgentCheckModeFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentCheckModeField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 境外中介机构资金帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcSecAgentCheckModeFieldType_get_BrokerSecAgentID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerSecAgentID, (Py_ssize_t)sizeof(data->BrokerSecAgentID));
    return PyBytes_FromString(data->BrokerSecAgentID);
}

static int PyCThostFtdcSecAgentCheckModeFieldType_set_BrokerSecAgentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentCheckModeField::BrokerSecAgentID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentCheckModeFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(self);
    CThostFtdcSecAgentCheckModeField *data = &(extra->data);
    // memset(data->BrokerSecAgentID, 0, sizeof(data->BrokerSecAgentID));
    // memcpy(data->BrokerSecAgentID, buf, len);
    strncpy(data->BrokerSecAgentID, buf, sizeof(data->BrokerSecAgentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSecAgentCheckModeFieldType_members[] = {
    /// 是否需要校验自己的资金账户
    /// typedef int TThostFtdcBoolType
    {
        .name = "CheckSelfAccount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSecAgentCheckModeFieldData, data.CheckSelfAccount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否需要校验自己的资金账户")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSecAgentCheckModeFieldType_getsets[] = {
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSecAgentCheckModeFieldType_get_InvestorID,
    .set = PyCThostFtdcSecAgentCheckModeFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSecAgentCheckModeFieldType_get_BrokerID,
    .set = PyCThostFtdcSecAgentCheckModeFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcSecAgentCheckModeFieldType_get_CurrencyID,
    .set = PyCThostFtdcSecAgentCheckModeFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种"),
    },
    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "BrokerSecAgentID",
    .get = PyCThostFtdcSecAgentCheckModeFieldType_get_BrokerSecAgentID,
    .set = PyCThostFtdcSecAgentCheckModeFieldType_set_BrokerSecAgentID,
    .doc = PyDoc_STR("境外中介机构资金帐号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSecAgentCheckModeFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSecAgentCheckModeField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("二级代理商资金校验模式")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSecAgentCheckModeFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSecAgentCheckModeFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSecAgentCheckModeFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSecAgentCheckModeFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSecAgentCheckModeFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSecAgentCheckModeFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("二级代理商资金校验模式")},
    {Py_tp_members, PyCThostFtdcSecAgentCheckModeFieldType_members},
    {Py_tp_getset, PyCThostFtdcSecAgentCheckModeFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSecAgentCheckModeFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSecAgentCheckModeFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSecAgentCheckModeFieldType_spec = {
    .name = "PyCTP.CThostFtdcSecAgentCheckModeField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSecAgentCheckModeFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSecAgentCheckModeFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSecAgentCheckModeFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSecAgentCheckModeFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSecAgentCheckModeFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSecAgentCheckModeFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSecAgentCheckModeFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSecAgentCheckModeFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSecAgentCheckModeField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSecAgentCheckModeField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}