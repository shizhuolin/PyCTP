
#include "PyCThostFtdcQryContractBankField.h"

///查询签约银行请求

static int PyCThostFtdcQryContractBankFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "BankID", "BankBrchID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQryContractBankField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQryContractBankField_BrokerID_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcQryContractBankField_BankID = NULL;
    Py_ssize_t CThostFtdcQryContractBankField_BankID_length = 0;

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcQryContractBankField_BankBrchID = NULL;
    Py_ssize_t CThostFtdcQryContractBankField_BankBrchID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryContractBankField_BrokerID, &CThostFtdcQryContractBankField_BrokerID_length
        , &CThostFtdcQryContractBankField_BankID, &CThostFtdcQryContractBankField_BankID_length
        , &CThostFtdcQryContractBankField_BankBrchID, &CThostFtdcQryContractBankField_BankBrchID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(self);
    CThostFtdcQryContractBankField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQryContractBankField_BrokerID != NULL ) {
        if(CThostFtdcQryContractBankField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQryContractBankField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQryContractBankField_BrokerID, CThostFtdcQryContractBankField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQryContractBankField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQryContractBankField_BrokerID = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcQryContractBankField_BankID != NULL ) {
        if(CThostFtdcQryContractBankField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcQryContractBankField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcQryContractBankField_BankID, CThostFtdcQryContractBankField_BankID_length);
        strncpy(data->BankID, CThostFtdcQryContractBankField_BankID, sizeof(data->BankID));
        CThostFtdcQryContractBankField_BankID = NULL;
    }

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcQryContractBankField_BankBrchID != NULL ) {
        if(CThostFtdcQryContractBankField_BankBrchID_length >= (Py_ssize_t)sizeof(data->BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is 4)", CThostFtdcQryContractBankField_BankBrchID_length);
            return -1;
        }
        // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
        // memcpy(data->BankBrchID, CThostFtdcQryContractBankField_BankBrchID, CThostFtdcQryContractBankField_BankBrchID_length);
        strncpy(data->BankBrchID, CThostFtdcQryContractBankField_BankBrchID, sizeof(data->BankBrchID));
        CThostFtdcQryContractBankField_BankBrchID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryContractBankFieldType_repr(PyObject *self) {

    PyCThostFtdcQryContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(self);
    CThostFtdcQryContractBankField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBrchID", data->BankBrchID//, (Py_ssize_t)sizeof(data->BankBrchID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryContractBankField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryContractBankField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQryContractBankFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQryContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(self);
    CThostFtdcQryContractBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQryContractBankFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryContractBankField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(self);
    CThostFtdcQryContractBankField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcQryContractBankFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcQryContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(self);
    CThostFtdcQryContractBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcQryContractBankFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryContractBankField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(self);
    CThostFtdcQryContractBankField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分中心代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcQryContractBankFieldType_get_BankBrchID(PyObject *self, void *closure) {
    PyCThostFtdcQryContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(self);
    CThostFtdcQryContractBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBrchID, (Py_ssize_t)sizeof(data->BankBrchID));
    return PyBytes_FromString(data->BankBrchID);
}

static int PyCThostFtdcQryContractBankFieldType_set_BankBrchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryContractBankField::BankBrchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(self);
    CThostFtdcQryContractBankField *data = &(extra->data);
    // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
    // memcpy(data->BankBrchID, buf, len);
    strncpy(data->BankBrchID, buf, sizeof(data->BankBrchID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryContractBankFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryContractBankFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQryContractBankFieldType_get_BrokerID,
    .set = PyCThostFtdcQryContractBankFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcQryContractBankFieldType_get_BankID,
    .set = PyCThostFtdcQryContractBankFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBrchID",
    .get = PyCThostFtdcQryContractBankFieldType_get_BankBrchID,
    .set = PyCThostFtdcQryContractBankFieldType_set_BankBrchID,
    .doc = PyDoc_STR("银行分中心代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryContractBankFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryContractBankField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询签约银行请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryContractBankFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryContractBankFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryContractBankFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryContractBankFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryContractBankFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryContractBankFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询签约银行请求")},
    {Py_tp_members, PyCThostFtdcQryContractBankFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryContractBankFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryContractBankFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryContractBankFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryContractBankFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryContractBankField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryContractBankFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryContractBankFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryContractBankFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryContractBankFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryContractBankFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryContractBankFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryContractBankFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryContractBankFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryContractBankField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryContractBankField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}