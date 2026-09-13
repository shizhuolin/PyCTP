
#include "PyCThostFtdcSecAgentTradeInfoField.h"

///二级代理商信息

static int PyCThostFtdcSecAgentTradeInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "BrokerSecAgentID", "InvestorID", "LongCustomerName", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSecAgentTradeInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSecAgentTradeInfoField_BrokerID_length = 0;

    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID = NULL;
    Py_ssize_t CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSecAgentTradeInfoField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSecAgentTradeInfoField_InvestorID_length = 0;

    /// 二级代理商姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcSecAgentTradeInfoField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcSecAgentTradeInfoField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
        , &CThostFtdcSecAgentTradeInfoField_BrokerID, &CThostFtdcSecAgentTradeInfoField_BrokerID_length
        , &CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID, &CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID_length
        , &CThostFtdcSecAgentTradeInfoField_InvestorID, &CThostFtdcSecAgentTradeInfoField_InvestorID_length
        , &CThostFtdcSecAgentTradeInfoField_LongCustomerName, &CThostFtdcSecAgentTradeInfoField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSecAgentTradeInfoField_BrokerID != NULL ) {
        if(CThostFtdcSecAgentTradeInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSecAgentTradeInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSecAgentTradeInfoField_BrokerID, CThostFtdcSecAgentTradeInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSecAgentTradeInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSecAgentTradeInfoField_BrokerID = NULL;
    }

    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID != NULL ) {
        if(CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID_length >= (Py_ssize_t)sizeof(data->BrokerSecAgentID)) {
            PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is 12)", CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID_length);
            return -1;
        }
        // memset(data->BrokerSecAgentID, 0, sizeof(data->BrokerSecAgentID));
        // memcpy(data->BrokerSecAgentID, CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID, CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID_length);
        strncpy(data->BrokerSecAgentID, CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID, sizeof(data->BrokerSecAgentID));
        CThostFtdcSecAgentTradeInfoField_BrokerSecAgentID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSecAgentTradeInfoField_InvestorID != NULL ) {
        if(CThostFtdcSecAgentTradeInfoField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSecAgentTradeInfoField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSecAgentTradeInfoField_InvestorID, CThostFtdcSecAgentTradeInfoField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSecAgentTradeInfoField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSecAgentTradeInfoField_InvestorID = NULL;
    }

    /// 二级代理商姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcSecAgentTradeInfoField_LongCustomerName != NULL ) {
        if(CThostFtdcSecAgentTradeInfoField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcSecAgentTradeInfoField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcSecAgentTradeInfoField_LongCustomerName, CThostFtdcSecAgentTradeInfoField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcSecAgentTradeInfoField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcSecAgentTradeInfoField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSecAgentTradeInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BrokerSecAgentID", data->BrokerSecAgentID//, (Py_ssize_t)sizeof(data->BrokerSecAgentID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentTradeInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentTradeInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSecAgentTradeInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSecAgentTradeInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentTradeInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 境外中介机构资金帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcSecAgentTradeInfoFieldType_get_BrokerSecAgentID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerSecAgentID, (Py_ssize_t)sizeof(data->BrokerSecAgentID));
    return PyBytes_FromString(data->BrokerSecAgentID);
}

static int PyCThostFtdcSecAgentTradeInfoFieldType_set_BrokerSecAgentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentTradeInfoField::BrokerSecAgentID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);
    // memset(data->BrokerSecAgentID, 0, sizeof(data->BrokerSecAgentID));
    // memcpy(data->BrokerSecAgentID, buf, len);
    strncpy(data->BrokerSecAgentID, buf, sizeof(data->BrokerSecAgentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSecAgentTradeInfoFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSecAgentTradeInfoFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentTradeInfoField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 二级代理商姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcSecAgentTradeInfoFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcSecAgentTradeInfoFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSecAgentTradeInfoField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSecAgentTradeInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(self);
    CThostFtdcSecAgentTradeInfoField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSecAgentTradeInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSecAgentTradeInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSecAgentTradeInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcSecAgentTradeInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 境外中介机构资金帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "BrokerSecAgentID",
    .get = PyCThostFtdcSecAgentTradeInfoFieldType_get_BrokerSecAgentID,
    .set = PyCThostFtdcSecAgentTradeInfoFieldType_set_BrokerSecAgentID,
    .doc = PyDoc_STR("境外中介机构资金帐号"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSecAgentTradeInfoFieldType_get_InvestorID,
    .set = PyCThostFtdcSecAgentTradeInfoFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 二级代理商姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcSecAgentTradeInfoFieldType_get_LongCustomerName,
    .set = PyCThostFtdcSecAgentTradeInfoFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("二级代理商姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSecAgentTradeInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSecAgentTradeInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("二级代理商信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSecAgentTradeInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSecAgentTradeInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSecAgentTradeInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSecAgentTradeInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSecAgentTradeInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSecAgentTradeInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("二级代理商信息")},
    {Py_tp_members, PyCThostFtdcSecAgentTradeInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcSecAgentTradeInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSecAgentTradeInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSecAgentTradeInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSecAgentTradeInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcSecAgentTradeInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSecAgentTradeInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSecAgentTradeInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSecAgentTradeInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSecAgentTradeInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSecAgentTradeInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSecAgentTradeInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSecAgentTradeInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSecAgentTradeInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSecAgentTradeInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSecAgentTradeInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}