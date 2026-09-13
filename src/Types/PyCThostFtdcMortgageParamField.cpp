
#include "PyCThostFtdcMortgageParamField.h"

///质押配比参数

static int PyCThostFtdcMortgageParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "AccountID", "MortgageBalance", "CheckMortgageRatio", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcMortgageParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcMortgageParamField_BrokerID_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcMortgageParamField_AccountID = NULL;
    Py_ssize_t CThostFtdcMortgageParamField_AccountID_length = 0;

    /// 质押配比系数
    /// typedef double TThostFtdcRatioType
    double CThostFtdcMortgageParamField_MortgageBalance = 0.0;

    /// 开仓是否验证质押配比
    /// typedef int TThostFtdcBoolType
    int CThostFtdcMortgageParamField_CheckMortgageRatio = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#di", (char **)kwlist
        , &CThostFtdcMortgageParamField_BrokerID, &CThostFtdcMortgageParamField_BrokerID_length
        , &CThostFtdcMortgageParamField_AccountID, &CThostFtdcMortgageParamField_AccountID_length
        , &CThostFtdcMortgageParamField_MortgageBalance
        , &CThostFtdcMortgageParamField_CheckMortgageRatio
    )) {
        return -1;
    }

    PyCThostFtdcMortgageParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMortgageParamFieldData>(self);
    CThostFtdcMortgageParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcMortgageParamField_BrokerID != NULL ) {
        if(CThostFtdcMortgageParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcMortgageParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcMortgageParamField_BrokerID, CThostFtdcMortgageParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcMortgageParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcMortgageParamField_BrokerID = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcMortgageParamField_AccountID != NULL ) {
        if(CThostFtdcMortgageParamField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcMortgageParamField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcMortgageParamField_AccountID, CThostFtdcMortgageParamField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcMortgageParamField_AccountID, sizeof(data->AccountID));
        CThostFtdcMortgageParamField_AccountID = NULL;
    }

    /// 质押配比系数
    /// typedef double TThostFtdcRatioType
    data->MortgageBalance = CThostFtdcMortgageParamField_MortgageBalance;

    /// 开仓是否验证质押配比
    /// typedef int TThostFtdcBoolType
    data->CheckMortgageRatio = CThostFtdcMortgageParamField_CheckMortgageRatio;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMortgageParamFieldType_repr(PyObject *self) {

    PyCThostFtdcMortgageParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMortgageParamFieldData>(self);
    CThostFtdcMortgageParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:d,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "MortgageBalance", data->MortgageBalance
        , "CheckMortgageRatio", data->CheckMortgageRatio
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMortgageParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMortgageParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcMortgageParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcMortgageParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMortgageParamFieldData>(self);
    CThostFtdcMortgageParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcMortgageParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMortgageParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMortgageParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMortgageParamFieldData>(self);
    CThostFtdcMortgageParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcMortgageParamFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcMortgageParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMortgageParamFieldData>(self);
    CThostFtdcMortgageParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcMortgageParamFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMortgageParamField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMortgageParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMortgageParamFieldData>(self);
    CThostFtdcMortgageParamField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMortgageParamFieldType_members[] = {
    /// 质押配比系数
    /// typedef double TThostFtdcRatioType
    {
        .name = "MortgageBalance",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMortgageParamFieldData, data.MortgageBalance),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("质押配比系数")
    },
    /// 开仓是否验证质押配比
    /// typedef int TThostFtdcBoolType
    {
        .name = "CheckMortgageRatio",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMortgageParamFieldData, data.CheckMortgageRatio),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("开仓是否验证质押配比")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMortgageParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcMortgageParamFieldType_get_BrokerID,
    .set = PyCThostFtdcMortgageParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcMortgageParamFieldType_get_AccountID,
    .set = PyCThostFtdcMortgageParamFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMortgageParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMortgageParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("质押配比参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMortgageParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMortgageParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMortgageParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMortgageParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMortgageParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMortgageParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("质押配比参数")},
    {Py_tp_members, PyCThostFtdcMortgageParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcMortgageParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMortgageParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMortgageParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMortgageParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcMortgageParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMortgageParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMortgageParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMortgageParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMortgageParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMortgageParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMortgageParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMortgageParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMortgageParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMortgageParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMortgageParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}