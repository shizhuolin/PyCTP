
#include "PyCThostFtdcContractBankField.h"

///查询签约银行响应

static int PyCThostFtdcContractBankFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "BankID", "BankBrchID", "BankName", "csrcBankID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcContractBankField_BrokerID = NULL;
    Py_ssize_t CThostFtdcContractBankField_BrokerID_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcContractBankField_BankID = NULL;
    Py_ssize_t CThostFtdcContractBankField_BankID_length = 0;

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcContractBankField_BankBrchID = NULL;
    Py_ssize_t CThostFtdcContractBankField_BankBrchID_length = 0;

    /// 银行名称
    /// typedef char TThostFtdcBankNameType[101]
    char *CThostFtdcContractBankField_BankName = NULL;
    Py_ssize_t CThostFtdcContractBankField_BankName_length = 0;

    /// 上报csrc的银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcContractBankField_csrcBankID = NULL;
    Py_ssize_t CThostFtdcContractBankField_csrcBankID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcContractBankField_BrokerID, &CThostFtdcContractBankField_BrokerID_length
        , &CThostFtdcContractBankField_BankID, &CThostFtdcContractBankField_BankID_length
        , &CThostFtdcContractBankField_BankBrchID, &CThostFtdcContractBankField_BankBrchID_length
        , &CThostFtdcContractBankField_BankName, &CThostFtdcContractBankField_BankName_length
        , &CThostFtdcContractBankField_csrcBankID, &CThostFtdcContractBankField_csrcBankID_length
    )) {
        return -1;
    }

    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcContractBankField_BrokerID != NULL ) {
        if(CThostFtdcContractBankField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcContractBankField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcContractBankField_BrokerID, CThostFtdcContractBankField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcContractBankField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcContractBankField_BrokerID = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcContractBankField_BankID != NULL ) {
        if(CThostFtdcContractBankField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcContractBankField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcContractBankField_BankID, CThostFtdcContractBankField_BankID_length);
        strncpy(data->BankID, CThostFtdcContractBankField_BankID, sizeof(data->BankID));
        CThostFtdcContractBankField_BankID = NULL;
    }

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcContractBankField_BankBrchID != NULL ) {
        if(CThostFtdcContractBankField_BankBrchID_length >= (Py_ssize_t)sizeof(data->BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is 4)", CThostFtdcContractBankField_BankBrchID_length);
            return -1;
        }
        // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
        // memcpy(data->BankBrchID, CThostFtdcContractBankField_BankBrchID, CThostFtdcContractBankField_BankBrchID_length);
        strncpy(data->BankBrchID, CThostFtdcContractBankField_BankBrchID, sizeof(data->BankBrchID));
        CThostFtdcContractBankField_BankBrchID = NULL;
    }

    /// 银行名称
    /// typedef char TThostFtdcBankNameType[101]
    if( CThostFtdcContractBankField_BankName != NULL ) {
        if(CThostFtdcContractBankField_BankName_length >= (Py_ssize_t)sizeof(data->BankName)) {
            PyErr_Format(PyExc_ValueError, "BankName too long: length=%zd (max allowed is 100)", CThostFtdcContractBankField_BankName_length);
            return -1;
        }
        // memset(data->BankName, 0, sizeof(data->BankName));
        // memcpy(data->BankName, CThostFtdcContractBankField_BankName, CThostFtdcContractBankField_BankName_length);
        strncpy(data->BankName, CThostFtdcContractBankField_BankName, sizeof(data->BankName));
        CThostFtdcContractBankField_BankName = NULL;
    }

    /// 上报csrc的银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcContractBankField_csrcBankID != NULL ) {
        if(CThostFtdcContractBankField_csrcBankID_length >= (Py_ssize_t)sizeof(data->csrcBankID)) {
            PyErr_Format(PyExc_ValueError, "csrcBankID too long: length=%zd (max allowed is 3)", CThostFtdcContractBankField_csrcBankID_length);
            return -1;
        }
        // memset(data->csrcBankID, 0, sizeof(data->csrcBankID));
        // memcpy(data->csrcBankID, CThostFtdcContractBankField_csrcBankID, CThostFtdcContractBankField_csrcBankID_length);
        strncpy(data->csrcBankID, CThostFtdcContractBankField_csrcBankID, sizeof(data->csrcBankID));
        CThostFtdcContractBankField_csrcBankID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcContractBankFieldType_repr(PyObject *self) {

    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBrchID", data->BankBrchID//, (Py_ssize_t)sizeof(data->BankBrchID)
        , "BankName", data->BankName//, (Py_ssize_t)sizeof(data->BankName)
        , "csrcBankID", data->csrcBankID//, (Py_ssize_t)sizeof(data->csrcBankID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcContractBankField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcContractBankField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcContractBankFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcContractBankFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcContractBankField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcContractBankFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcContractBankFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcContractBankField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分中心代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcContractBankFieldType_get_BankBrchID(PyObject *self, void *closure) {
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBrchID, (Py_ssize_t)sizeof(data->BankBrchID));
    return PyBytes_FromString(data->BankBrchID);
}

static int PyCThostFtdcContractBankFieldType_set_BankBrchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcContractBankField::BankBrchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
    // memcpy(data->BankBrchID, buf, len);
    strncpy(data->BankBrchID, buf, sizeof(data->BankBrchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行名称
/// typedef char TThostFtdcBankNameType[101]
static PyObject *PyCThostFtdcContractBankFieldType_get_BankName(PyObject *self, void *closure) {
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankName, (Py_ssize_t)sizeof(data->BankName));
    return PyBytes_FromString(data->BankName);
}

static int PyCThostFtdcContractBankFieldType_set_BankName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcContractBankField::BankName)) {
        PyErr_SetString(PyExc_ValueError, "BankName must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // memset(data->BankName, 0, sizeof(data->BankName));
    // memcpy(data->BankName, buf, len);
    strncpy(data->BankName, buf, sizeof(data->BankName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上报csrc的银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcContractBankFieldType_get_csrcBankID(PyObject *self, void *closure) {
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->csrcBankID, (Py_ssize_t)sizeof(data->csrcBankID));
    return PyBytes_FromString(data->csrcBankID);
}

static int PyCThostFtdcContractBankFieldType_set_csrcBankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "csrcBankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcContractBankField::csrcBankID)) {
        PyErr_SetString(PyExc_ValueError, "csrcBankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcContractBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(self);
    CThostFtdcContractBankField *data = &(extra->data);
    // memset(data->csrcBankID, 0, sizeof(data->csrcBankID));
    // memcpy(data->csrcBankID, buf, len);
    strncpy(data->csrcBankID, buf, sizeof(data->csrcBankID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcContractBankFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcContractBankFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcContractBankFieldType_get_BrokerID,
    .set = PyCThostFtdcContractBankFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcContractBankFieldType_get_BankID,
    .set = PyCThostFtdcContractBankFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBrchID",
    .get = PyCThostFtdcContractBankFieldType_get_BankBrchID,
    .set = PyCThostFtdcContractBankFieldType_set_BankBrchID,
    .doc = PyDoc_STR("银行分中心代码"),
    },
    /// 银行名称
    /// typedef char TThostFtdcBankNameType[101]
    {
    .name = "BankName",
    .get = PyCThostFtdcContractBankFieldType_get_BankName,
    .set = PyCThostFtdcContractBankFieldType_set_BankName,
    .doc = PyDoc_STR("银行名称"),
    },
    /// 上报csrc的银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "csrcBankID",
    .get = PyCThostFtdcContractBankFieldType_get_csrcBankID,
    .set = PyCThostFtdcContractBankFieldType_set_csrcBankID,
    .doc = PyDoc_STR("上报csrc的银行代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcContractBankFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcContractBankField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询签约银行响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcContractBankFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcContractBankFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcContractBankFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcContractBankFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcContractBankFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcContractBankFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询签约银行响应")},
    {Py_tp_members, PyCThostFtdcContractBankFieldType_members},
    {Py_tp_getset, PyCThostFtdcContractBankFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcContractBankFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcContractBankFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcContractBankFieldType_spec = {
    .name = "PyCTP.CThostFtdcContractBankField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcContractBankFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcContractBankFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcContractBankFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcContractBankFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcContractBankFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcContractBankFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcContractBankFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcContractBankFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcContractBankField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcContractBankField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}