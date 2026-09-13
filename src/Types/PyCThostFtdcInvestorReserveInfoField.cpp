
#include "PyCThostFtdcInvestorReserveInfoField.h"

///投资者预留信息

static int PyCThostFtdcInvestorReserveInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "ReserveInfo", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorReserveInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorReserveInfoField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcInvestorReserveInfoField_UserID = NULL;
    Py_ssize_t CThostFtdcInvestorReserveInfoField_UserID_length = 0;

    /// 预留信息
    /// typedef char TThostFtdcReserveInfoType[65]
    char *CThostFtdcInvestorReserveInfoField_ReserveInfo = NULL;
    Py_ssize_t CThostFtdcInvestorReserveInfoField_ReserveInfo_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcInvestorReserveInfoField_BrokerID, &CThostFtdcInvestorReserveInfoField_BrokerID_length
        , &CThostFtdcInvestorReserveInfoField_UserID, &CThostFtdcInvestorReserveInfoField_UserID_length
        , &CThostFtdcInvestorReserveInfoField_ReserveInfo, &CThostFtdcInvestorReserveInfoField_ReserveInfo_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorReserveInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorReserveInfoFieldData>(self);
    CThostFtdcInvestorReserveInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorReserveInfoField_BrokerID != NULL ) {
        if(CThostFtdcInvestorReserveInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorReserveInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorReserveInfoField_BrokerID, CThostFtdcInvestorReserveInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorReserveInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorReserveInfoField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcInvestorReserveInfoField_UserID != NULL ) {
        if(CThostFtdcInvestorReserveInfoField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcInvestorReserveInfoField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcInvestorReserveInfoField_UserID, CThostFtdcInvestorReserveInfoField_UserID_length);
        strncpy(data->UserID, CThostFtdcInvestorReserveInfoField_UserID, sizeof(data->UserID));
        CThostFtdcInvestorReserveInfoField_UserID = NULL;
    }

    /// 预留信息
    /// typedef char TThostFtdcReserveInfoType[65]
    if( CThostFtdcInvestorReserveInfoField_ReserveInfo != NULL ) {
        if(CThostFtdcInvestorReserveInfoField_ReserveInfo_length >= (Py_ssize_t)sizeof(data->ReserveInfo)) {
            PyErr_Format(PyExc_ValueError, "ReserveInfo too long: length=%zd (max allowed is 64)", CThostFtdcInvestorReserveInfoField_ReserveInfo_length);
            return -1;
        }
        // memset(data->ReserveInfo, 0, sizeof(data->ReserveInfo));
        // memcpy(data->ReserveInfo, CThostFtdcInvestorReserveInfoField_ReserveInfo, CThostFtdcInvestorReserveInfoField_ReserveInfo_length);
        strncpy(data->ReserveInfo, CThostFtdcInvestorReserveInfoField_ReserveInfo, sizeof(data->ReserveInfo));
        CThostFtdcInvestorReserveInfoField_ReserveInfo = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorReserveInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorReserveInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorReserveInfoFieldData>(self);
    CThostFtdcInvestorReserveInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ReserveInfo", data->ReserveInfo//, (Py_ssize_t)sizeof(data->ReserveInfo)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorReserveInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorReserveInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorReserveInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorReserveInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorReserveInfoFieldData>(self);
    CThostFtdcInvestorReserveInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorReserveInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorReserveInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorReserveInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorReserveInfoFieldData>(self);
    CThostFtdcInvestorReserveInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcInvestorReserveInfoFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorReserveInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorReserveInfoFieldData>(self);
    CThostFtdcInvestorReserveInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcInvestorReserveInfoFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorReserveInfoField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorReserveInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorReserveInfoFieldData>(self);
    CThostFtdcInvestorReserveInfoField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预留信息
/// typedef char TThostFtdcReserveInfoType[65]
static PyObject *PyCThostFtdcInvestorReserveInfoFieldType_get_ReserveInfo(PyObject *self, void *closure) {
    PyCThostFtdcInvestorReserveInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorReserveInfoFieldData>(self);
    CThostFtdcInvestorReserveInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ReserveInfo, (Py_ssize_t)sizeof(data->ReserveInfo));
    return PyBytes_FromString(data->ReserveInfo);
}

static int PyCThostFtdcInvestorReserveInfoFieldType_set_ReserveInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReserveInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorReserveInfoField::ReserveInfo)) {
        PyErr_SetString(PyExc_ValueError, "ReserveInfo must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorReserveInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorReserveInfoFieldData>(self);
    CThostFtdcInvestorReserveInfoField *data = &(extra->data);
    // memset(data->ReserveInfo, 0, sizeof(data->ReserveInfo));
    // memcpy(data->ReserveInfo, buf, len);
    strncpy(data->ReserveInfo, buf, sizeof(data->ReserveInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorReserveInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorReserveInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorReserveInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorReserveInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcInvestorReserveInfoFieldType_get_UserID,
    .set = PyCThostFtdcInvestorReserveInfoFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 预留信息
    /// typedef char TThostFtdcReserveInfoType[65]
    {
    .name = "ReserveInfo",
    .get = PyCThostFtdcInvestorReserveInfoFieldType_get_ReserveInfo,
    .set = PyCThostFtdcInvestorReserveInfoFieldType_set_ReserveInfo,
    .doc = PyDoc_STR("预留信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorReserveInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorReserveInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("投资者预留信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorReserveInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorReserveInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorReserveInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorReserveInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorReserveInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorReserveInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("投资者预留信息")},
    {Py_tp_members, PyCThostFtdcInvestorReserveInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorReserveInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorReserveInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorReserveInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorReserveInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorReserveInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorReserveInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorReserveInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorReserveInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorReserveInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorReserveInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorReserveInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorReserveInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorReserveInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorReserveInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorReserveInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}