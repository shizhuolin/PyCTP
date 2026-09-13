
#include "PyCThostFtdcSecAgentACIDMapField.h"

///二级代理操作员银期权限

static int PyCThostFtdcSecAgentACIDMapFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "AccountID", "CurrencyID", "BrokerSecAgentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSecAgentACIDMapField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSecAgentACIDMapField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcSecAgentACIDMapField_UserID = NULL;
    Py_ssize_t CThostFtdcSecAgentACIDMapField_UserID_length = 0;

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcSecAgentACIDMapField_AccountID = NULL;
    Py_ssize_t CThostFtdcSecAgentACIDMapField_AccountID_length = 0;

    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcSecAgentACIDMapField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcSecAgentACIDMapField_CurrencyID_length = 0;

    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcSecAgentACIDMapField_BrokerSecAgentID = NULL;
    Py_ssize_t CThostFtdcSecAgentACIDMapField_BrokerSecAgentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcSecAgentACIDMapField_BrokerID, &CThostFtdcSecAgentACIDMapField_BrokerID_length
        , &CThostFtdcSecAgentACIDMapField_UserID, &CThostFtdcSecAgentACIDMapField_UserID_length
        , &CThostFtdcSecAgentACIDMapField_AccountID, &CThostFtdcSecAgentACIDMapField_AccountID_length
        , &CThostFtdcSecAgentACIDMapField_CurrencyID, &CThostFtdcSecAgentACIDMapField_CurrencyID_length
        , &CThostFtdcSecAgentACIDMapField_BrokerSecAgentID, &CThostFtdcSecAgentACIDMapField_BrokerSecAgentID_length
    )) {
        return -1;
    }

    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSecAgentACIDMapField_BrokerID != NULL ) {
        if(CThostFtdcSecAgentACIDMapField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSecAgentACIDMapField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSecAgentACIDMapField_BrokerID, CThostFtdcSecAgentACIDMapField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSecAgentACIDMapField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSecAgentACIDMapField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcSecAgentACIDMapField_UserID != NULL ) {
        if(CThostFtdcSecAgentACIDMapField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcSecAgentACIDMapField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcSecAgentACIDMapField_UserID, CThostFtdcSecAgentACIDMapField_UserID_length);
        strncpy(data->UserID, CThostFtdcSecAgentACIDMapField_UserID, sizeof(data->UserID));
        CThostFtdcSecAgentACIDMapField_UserID = NULL;
    }

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcSecAgentACIDMapField_AccountID != NULL ) {
        if(CThostFtdcSecAgentACIDMapField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcSecAgentACIDMapField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcSecAgentACIDMapField_AccountID, CThostFtdcSecAgentACIDMapField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcSecAgentACIDMapField_AccountID, sizeof(data->AccountID));
        CThostFtdcSecAgentACIDMapField_AccountID = NULL;
    }

    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcSecAgentACIDMapField_CurrencyID != NULL ) {
        if(CThostFtdcSecAgentACIDMapField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcSecAgentACIDMapField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcSecAgentACIDMapField_CurrencyID, CThostFtdcSecAgentACIDMapField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcSecAgentACIDMapField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcSecAgentACIDMapField_CurrencyID = NULL;
    }

    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcSecAgentACIDMapField_BrokerSecAgentID != NULL ) {
        if(CThostFtdcSecAgentACIDMapField_BrokerSecAgentID_length >= (Py_ssize_t)sizeof(data->BrokerSecAgentID)) {
            PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is 12)", CThostFtdcSecAgentACIDMapField_BrokerSecAgentID_length);
            return -1;
        }
        // memset(data->BrokerSecAgentID, 0, sizeof(data->BrokerSecAgentID));
        // memcpy(data->BrokerSecAgentID, CThostFtdcSecAgentACIDMapField_BrokerSecAgentID, CThostFtdcSecAgentACIDMapField_BrokerSecAgentID_length);
        strncpy(data->BrokerSecAgentID, CThostFtdcSecAgentACIDMapField_BrokerSecAgentID, sizeof(data->BrokerSecAgentID));
        CThostFtdcSecAgentACIDMapField_BrokerSecAgentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSecAgentACIDMapFieldType_repr(PyObject *self) {

    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "BrokerSecAgentID", data->BrokerSecAgentID//, (Py_ssize_t)sizeof(data->BrokerSecAgentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentACIDMapField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentACIDMapField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSecAgentACIDMapFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSecAgentACIDMapFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentACIDMapField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcSecAgentACIDMapFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcSecAgentACIDMapFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentACIDMapField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcSecAgentACIDMapFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcSecAgentACIDMapFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentACIDMapField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcSecAgentACIDMapFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcSecAgentACIDMapFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentACIDMapField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 境外中介机构资金帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcSecAgentACIDMapFieldType_get_BrokerSecAgentID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerSecAgentID, (Py_ssize_t)sizeof(data->BrokerSecAgentID));
    return PyBytes_FromString(data->BrokerSecAgentID);
}

static int PyCThostFtdcSecAgentACIDMapFieldType_set_BrokerSecAgentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentACIDMapField::BrokerSecAgentID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(self);
    CThostFtdcSecAgentACIDMapField *data = &(extra->data);
    // memset(data->BrokerSecAgentID, 0, sizeof(data->BrokerSecAgentID));
    // memcpy(data->BrokerSecAgentID, buf, len);
    strncpy(data->BrokerSecAgentID, buf, sizeof(data->BrokerSecAgentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSecAgentACIDMapFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSecAgentACIDMapFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSecAgentACIDMapFieldType_get_BrokerID,
    .set = PyCThostFtdcSecAgentACIDMapFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcSecAgentACIDMapFieldType_get_UserID,
    .set = PyCThostFtdcSecAgentACIDMapFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcSecAgentACIDMapFieldType_get_AccountID,
    .set = PyCThostFtdcSecAgentACIDMapFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账户"),
    },
    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcSecAgentACIDMapFieldType_get_CurrencyID,
    .set = PyCThostFtdcSecAgentACIDMapFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种"),
    },
    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "BrokerSecAgentID",
    .get = PyCThostFtdcSecAgentACIDMapFieldType_get_BrokerSecAgentID,
    .set = PyCThostFtdcSecAgentACIDMapFieldType_set_BrokerSecAgentID,
    .doc = PyDoc_STR("境外中介机构资金帐号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSecAgentACIDMapFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSecAgentACIDMapField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("二级代理操作员银期权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSecAgentACIDMapFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSecAgentACIDMapFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSecAgentACIDMapFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSecAgentACIDMapFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSecAgentACIDMapFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSecAgentACIDMapFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("二级代理操作员银期权限")},
    {Py_tp_members, PyCThostFtdcSecAgentACIDMapFieldType_members},
    {Py_tp_getset, PyCThostFtdcSecAgentACIDMapFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSecAgentACIDMapFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSecAgentACIDMapFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSecAgentACIDMapFieldType_spec = {
    .name = "PyCTP.CThostFtdcSecAgentACIDMapField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSecAgentACIDMapFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSecAgentACIDMapFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSecAgentACIDMapFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSecAgentACIDMapFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSecAgentACIDMapFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSecAgentACIDMapFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSecAgentACIDMapFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSecAgentACIDMapFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSecAgentACIDMapField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSecAgentACIDMapField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}