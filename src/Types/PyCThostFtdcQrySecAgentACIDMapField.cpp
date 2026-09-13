
#include "PyCThostFtdcQrySecAgentACIDMapField.h"

///二级代理操作员银期权限查询

static int PyCThostFtdcQrySecAgentACIDMapFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "AccountID", "CurrencyID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQrySecAgentACIDMapField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQrySecAgentACIDMapField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQrySecAgentACIDMapField_UserID = NULL;
    Py_ssize_t CThostFtdcQrySecAgentACIDMapField_UserID_length = 0;

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQrySecAgentACIDMapField_AccountID = NULL;
    Py_ssize_t CThostFtdcQrySecAgentACIDMapField_AccountID_length = 0;

    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQrySecAgentACIDMapField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcQrySecAgentACIDMapField_CurrencyID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcQrySecAgentACIDMapField_BrokerID, &CThostFtdcQrySecAgentACIDMapField_BrokerID_length
        , &CThostFtdcQrySecAgentACIDMapField_UserID, &CThostFtdcQrySecAgentACIDMapField_UserID_length
        , &CThostFtdcQrySecAgentACIDMapField_AccountID, &CThostFtdcQrySecAgentACIDMapField_AccountID_length
        , &CThostFtdcQrySecAgentACIDMapField_CurrencyID, &CThostFtdcQrySecAgentACIDMapField_CurrencyID_length
    )) {
        return -1;
    }

    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQrySecAgentACIDMapField_BrokerID != NULL ) {
        if(CThostFtdcQrySecAgentACIDMapField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQrySecAgentACIDMapField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQrySecAgentACIDMapField_BrokerID, CThostFtdcQrySecAgentACIDMapField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQrySecAgentACIDMapField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQrySecAgentACIDMapField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQrySecAgentACIDMapField_UserID != NULL ) {
        if(CThostFtdcQrySecAgentACIDMapField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQrySecAgentACIDMapField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQrySecAgentACIDMapField_UserID, CThostFtdcQrySecAgentACIDMapField_UserID_length);
        strncpy(data->UserID, CThostFtdcQrySecAgentACIDMapField_UserID, sizeof(data->UserID));
        CThostFtdcQrySecAgentACIDMapField_UserID = NULL;
    }

    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQrySecAgentACIDMapField_AccountID != NULL ) {
        if(CThostFtdcQrySecAgentACIDMapField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcQrySecAgentACIDMapField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcQrySecAgentACIDMapField_AccountID, CThostFtdcQrySecAgentACIDMapField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcQrySecAgentACIDMapField_AccountID, sizeof(data->AccountID));
        CThostFtdcQrySecAgentACIDMapField_AccountID = NULL;
    }

    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQrySecAgentACIDMapField_CurrencyID != NULL ) {
        if(CThostFtdcQrySecAgentACIDMapField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQrySecAgentACIDMapField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcQrySecAgentACIDMapField_CurrencyID, CThostFtdcQrySecAgentACIDMapField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcQrySecAgentACIDMapField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcQrySecAgentACIDMapField_CurrencyID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQrySecAgentACIDMapFieldType_repr(PyObject *self) {

    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentACIDMapField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentACIDMapField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQrySecAgentACIDMapFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQrySecAgentACIDMapFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySecAgentACIDMapField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQrySecAgentACIDMapFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQrySecAgentACIDMapFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySecAgentACIDMapField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQrySecAgentACIDMapFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcQrySecAgentACIDMapFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySecAgentACIDMapField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQrySecAgentACIDMapFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcQrySecAgentACIDMapFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQrySecAgentACIDMapField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQrySecAgentACIDMapFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(self);
    CThostFtdcQrySecAgentACIDMapField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQrySecAgentACIDMapFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQrySecAgentACIDMapFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQrySecAgentACIDMapFieldType_get_BrokerID,
    .set = PyCThostFtdcQrySecAgentACIDMapFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQrySecAgentACIDMapFieldType_get_UserID,
    .set = PyCThostFtdcQrySecAgentACIDMapFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 资金账户
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcQrySecAgentACIDMapFieldType_get_AccountID,
    .set = PyCThostFtdcQrySecAgentACIDMapFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账户"),
    },
    /// 币种
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcQrySecAgentACIDMapFieldType_get_CurrencyID,
    .set = PyCThostFtdcQrySecAgentACIDMapFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQrySecAgentACIDMapFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQrySecAgentACIDMapField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("二级代理操作员银期权限查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQrySecAgentACIDMapFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQrySecAgentACIDMapFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQrySecAgentACIDMapFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQrySecAgentACIDMapFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQrySecAgentACIDMapFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQrySecAgentACIDMapFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("二级代理操作员银期权限查询")},
    {Py_tp_members, PyCThostFtdcQrySecAgentACIDMapFieldType_members},
    {Py_tp_getset, PyCThostFtdcQrySecAgentACIDMapFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQrySecAgentACIDMapFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQrySecAgentACIDMapFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQrySecAgentACIDMapFieldType_spec = {
    .name = "PyCTP.CThostFtdcQrySecAgentACIDMapField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQrySecAgentACIDMapFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQrySecAgentACIDMapFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQrySecAgentACIDMapFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQrySecAgentACIDMapFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQrySecAgentACIDMapFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQrySecAgentACIDMapFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQrySecAgentACIDMapFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQrySecAgentACIDMapFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQrySecAgentACIDMapField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySecAgentACIDMapField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}