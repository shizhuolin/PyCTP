
#include "PyCThostFtdcReqGenUserCaptchaField.h"

///用户发出获取安全安全登陆方法请求

static int PyCThostFtdcReqGenUserCaptchaFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "UserID", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcReqGenUserCaptchaField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqGenUserCaptchaField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqGenUserCaptchaField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqGenUserCaptchaField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqGenUserCaptchaField_UserID = NULL;
    Py_ssize_t CThostFtdcReqGenUserCaptchaField_UserID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcReqGenUserCaptchaField_TradingDay, &CThostFtdcReqGenUserCaptchaField_TradingDay_length
        , &CThostFtdcReqGenUserCaptchaField_BrokerID, &CThostFtdcReqGenUserCaptchaField_BrokerID_length
        , &CThostFtdcReqGenUserCaptchaField_UserID, &CThostFtdcReqGenUserCaptchaField_UserID_length
    )) {
        return -1;
    }

    PyCThostFtdcReqGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(self);
    CThostFtdcReqGenUserCaptchaField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcReqGenUserCaptchaField_TradingDay != NULL ) {
        if(CThostFtdcReqGenUserCaptchaField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqGenUserCaptchaField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqGenUserCaptchaField_TradingDay, CThostFtdcReqGenUserCaptchaField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqGenUserCaptchaField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqGenUserCaptchaField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqGenUserCaptchaField_BrokerID != NULL ) {
        if(CThostFtdcReqGenUserCaptchaField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqGenUserCaptchaField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqGenUserCaptchaField_BrokerID, CThostFtdcReqGenUserCaptchaField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqGenUserCaptchaField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqGenUserCaptchaField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqGenUserCaptchaField_UserID != NULL ) {
        if(CThostFtdcReqGenUserCaptchaField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqGenUserCaptchaField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqGenUserCaptchaField_UserID, CThostFtdcReqGenUserCaptchaField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqGenUserCaptchaField_UserID, sizeof(data->UserID));
        CThostFtdcReqGenUserCaptchaField_UserID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqGenUserCaptchaFieldType_repr(PyObject *self) {

    PyCThostFtdcReqGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(self);
    CThostFtdcReqGenUserCaptchaField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenUserCaptchaField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenUserCaptchaField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcReqGenUserCaptchaFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(self);
    CThostFtdcReqGenUserCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqGenUserCaptchaFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenUserCaptchaField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(self);
    CThostFtdcReqGenUserCaptchaField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqGenUserCaptchaFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(self);
    CThostFtdcReqGenUserCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqGenUserCaptchaFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenUserCaptchaField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(self);
    CThostFtdcReqGenUserCaptchaField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqGenUserCaptchaFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(self);
    CThostFtdcReqGenUserCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqGenUserCaptchaFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqGenUserCaptchaField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqGenUserCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(self);
    CThostFtdcReqGenUserCaptchaField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqGenUserCaptchaFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqGenUserCaptchaFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqGenUserCaptchaFieldType_get_TradingDay,
    .set = PyCThostFtdcReqGenUserCaptchaFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqGenUserCaptchaFieldType_get_BrokerID,
    .set = PyCThostFtdcReqGenUserCaptchaFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqGenUserCaptchaFieldType_get_UserID,
    .set = PyCThostFtdcReqGenUserCaptchaFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqGenUserCaptchaFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqGenUserCaptchaField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户发出获取安全安全登陆方法请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqGenUserCaptchaFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqGenUserCaptchaFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqGenUserCaptchaFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqGenUserCaptchaFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqGenUserCaptchaFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqGenUserCaptchaFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户发出获取安全安全登陆方法请求")},
    {Py_tp_members, PyCThostFtdcReqGenUserCaptchaFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqGenUserCaptchaFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqGenUserCaptchaFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqGenUserCaptchaFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqGenUserCaptchaFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqGenUserCaptchaField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqGenUserCaptchaFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqGenUserCaptchaFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqGenUserCaptchaFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqGenUserCaptchaFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqGenUserCaptchaFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqGenUserCaptchaFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqGenUserCaptchaFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqGenUserCaptchaFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqGenUserCaptchaField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqGenUserCaptchaField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}