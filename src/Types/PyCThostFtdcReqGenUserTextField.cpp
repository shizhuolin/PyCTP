
#include "PyCThostFtdcReqGenUserTextField.h"

///用户发出获取安全安全登陆方法请求

static int PyCThostFtdcReqGenUserTextFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "UserID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcReqGenUserTextField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqGenUserTextField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqGenUserTextField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqGenUserTextField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqGenUserTextField_UserID = NULL;
    Py_ssize_t CThostFtdcReqGenUserTextField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcReqGenUserTextField_TradingDay, &CThostFtdcReqGenUserTextField_TradingDay_length
        , &CThostFtdcReqGenUserTextField_BrokerID, &CThostFtdcReqGenUserTextField_BrokerID_length
        , &CThostFtdcReqGenUserTextField_UserID, &CThostFtdcReqGenUserTextField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcReqGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(self);
    CThostFtdcReqGenUserTextField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcReqGenUserTextField_TradingDay != NULL ) {
        if(CThostFtdcReqGenUserTextField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqGenUserTextField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqGenUserTextField_TradingDay, CThostFtdcReqGenUserTextField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqGenUserTextField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqGenUserTextField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqGenUserTextField_BrokerID != NULL ) {
        if(CThostFtdcReqGenUserTextField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqGenUserTextField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqGenUserTextField_BrokerID, CThostFtdcReqGenUserTextField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqGenUserTextField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqGenUserTextField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqGenUserTextField_UserID != NULL ) {
        if(CThostFtdcReqGenUserTextField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqGenUserTextField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqGenUserTextField_UserID, CThostFtdcReqGenUserTextField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqGenUserTextField_UserID, sizeof(data->UserID));
        CThostFtdcReqGenUserTextField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqGenUserTextFieldType_repr(PyObject *self) {

    PyCThostFtdcReqGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(self);
    CThostFtdcReqGenUserTextField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenUserTextField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenUserTextField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcReqGenUserTextFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(self);
    CThostFtdcReqGenUserTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqGenUserTextFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenUserTextField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(self);
    CThostFtdcReqGenUserTextField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqGenUserTextFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(self);
    CThostFtdcReqGenUserTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqGenUserTextFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenUserTextField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(self);
    CThostFtdcReqGenUserTextField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqGenUserTextFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(self);
    CThostFtdcReqGenUserTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqGenUserTextFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenUserTextField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenUserTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(self);
    CThostFtdcReqGenUserTextField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqGenUserTextFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqGenUserTextFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqGenUserTextFieldType_get_TradingDay,
    .set = PyCThostFtdcReqGenUserTextFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqGenUserTextFieldType_get_BrokerID,
    .set = PyCThostFtdcReqGenUserTextFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqGenUserTextFieldType_get_UserID,
    .set = PyCThostFtdcReqGenUserTextFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqGenUserTextFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqGenUserTextField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户发出获取安全安全登陆方法请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqGenUserTextFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqGenUserTextFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqGenUserTextFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqGenUserTextFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqGenUserTextFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqGenUserTextFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户发出获取安全安全登陆方法请求")},
    {Py_tp_members, PyCThostFtdcReqGenUserTextFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqGenUserTextFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqGenUserTextFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqGenUserTextFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqGenUserTextFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqGenUserTextField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqGenUserTextFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqGenUserTextFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqGenUserTextFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqGenUserTextFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqGenUserTextFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqGenUserTextFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqGenUserTextFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqGenUserTextFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqGenUserTextField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqGenUserTextField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}