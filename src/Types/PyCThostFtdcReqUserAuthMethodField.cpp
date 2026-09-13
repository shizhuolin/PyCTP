
#include "PyCThostFtdcReqUserAuthMethodField.h"

///用户发出获取安全安全登陆方法请求

static int PyCThostFtdcReqUserAuthMethodFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "UserID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcReqUserAuthMethodField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqUserAuthMethodField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqUserAuthMethodField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqUserAuthMethodField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqUserAuthMethodField_UserID = NULL;
    Py_ssize_t CThostFtdcReqUserAuthMethodField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcReqUserAuthMethodField_TradingDay, &CThostFtdcReqUserAuthMethodField_TradingDay_length
        , &CThostFtdcReqUserAuthMethodField_BrokerID, &CThostFtdcReqUserAuthMethodField_BrokerID_length
        , &CThostFtdcReqUserAuthMethodField_UserID, &CThostFtdcReqUserAuthMethodField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcReqUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(self);
    CThostFtdcReqUserAuthMethodField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcReqUserAuthMethodField_TradingDay != NULL ) {
        if(CThostFtdcReqUserAuthMethodField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqUserAuthMethodField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqUserAuthMethodField_TradingDay, CThostFtdcReqUserAuthMethodField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqUserAuthMethodField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqUserAuthMethodField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqUserAuthMethodField_BrokerID != NULL ) {
        if(CThostFtdcReqUserAuthMethodField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqUserAuthMethodField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqUserAuthMethodField_BrokerID, CThostFtdcReqUserAuthMethodField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqUserAuthMethodField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqUserAuthMethodField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqUserAuthMethodField_UserID != NULL ) {
        if(CThostFtdcReqUserAuthMethodField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqUserAuthMethodField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqUserAuthMethodField_UserID, CThostFtdcReqUserAuthMethodField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqUserAuthMethodField_UserID, sizeof(data->UserID));
        CThostFtdcReqUserAuthMethodField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqUserAuthMethodFieldType_repr(PyObject *self) {

    PyCThostFtdcReqUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(self);
    CThostFtdcReqUserAuthMethodField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserAuthMethodField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserAuthMethodField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcReqUserAuthMethodFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(self);
    CThostFtdcReqUserAuthMethodField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqUserAuthMethodFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserAuthMethodField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(self);
    CThostFtdcReqUserAuthMethodField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqUserAuthMethodFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(self);
    CThostFtdcReqUserAuthMethodField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqUserAuthMethodFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserAuthMethodField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(self);
    CThostFtdcReqUserAuthMethodField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqUserAuthMethodFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(self);
    CThostFtdcReqUserAuthMethodField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqUserAuthMethodFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserAuthMethodField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserAuthMethodFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(self);
    CThostFtdcReqUserAuthMethodField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqUserAuthMethodFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqUserAuthMethodFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqUserAuthMethodFieldType_get_TradingDay,
    .set = PyCThostFtdcReqUserAuthMethodFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqUserAuthMethodFieldType_get_BrokerID,
    .set = PyCThostFtdcReqUserAuthMethodFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqUserAuthMethodFieldType_get_UserID,
    .set = PyCThostFtdcReqUserAuthMethodFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqUserAuthMethodFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqUserAuthMethodField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户发出获取安全安全登陆方法请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqUserAuthMethodFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqUserAuthMethodFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqUserAuthMethodFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqUserAuthMethodFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqUserAuthMethodFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqUserAuthMethodFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户发出获取安全安全登陆方法请求")},
    {Py_tp_members, PyCThostFtdcReqUserAuthMethodFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqUserAuthMethodFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqUserAuthMethodFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqUserAuthMethodFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqUserAuthMethodFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqUserAuthMethodField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqUserAuthMethodFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqUserAuthMethodFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqUserAuthMethodFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqUserAuthMethodFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqUserAuthMethodFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqUserAuthMethodFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqUserAuthMethodFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqUserAuthMethodFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqUserAuthMethodField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserAuthMethodField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}