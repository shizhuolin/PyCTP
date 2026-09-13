
#include "PyCThostFtdcVerifyInvestorPasswordField.h"

///校验投资者密码

static int PyCThostFtdcVerifyInvestorPasswordFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "Password", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcVerifyInvestorPasswordField_BrokerID = NULL;
    Py_ssize_t CThostFtdcVerifyInvestorPasswordField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcVerifyInvestorPasswordField_InvestorID = NULL;
    Py_ssize_t CThostFtdcVerifyInvestorPasswordField_InvestorID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcVerifyInvestorPasswordField_Password = NULL;
    Py_ssize_t CThostFtdcVerifyInvestorPasswordField_Password_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcVerifyInvestorPasswordField_BrokerID, &CThostFtdcVerifyInvestorPasswordField_BrokerID_length
        , &CThostFtdcVerifyInvestorPasswordField_InvestorID, &CThostFtdcVerifyInvestorPasswordField_InvestorID_length
        , &CThostFtdcVerifyInvestorPasswordField_Password, &CThostFtdcVerifyInvestorPasswordField_Password_length
    )) {
        return -1;
    }

    PyCThostFtdcVerifyInvestorPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyInvestorPasswordFieldData>(self);
    CThostFtdcVerifyInvestorPasswordField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcVerifyInvestorPasswordField_BrokerID != NULL ) {
        if(CThostFtdcVerifyInvestorPasswordField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcVerifyInvestorPasswordField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcVerifyInvestorPasswordField_BrokerID, CThostFtdcVerifyInvestorPasswordField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcVerifyInvestorPasswordField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcVerifyInvestorPasswordField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcVerifyInvestorPasswordField_InvestorID != NULL ) {
        if(CThostFtdcVerifyInvestorPasswordField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcVerifyInvestorPasswordField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcVerifyInvestorPasswordField_InvestorID, CThostFtdcVerifyInvestorPasswordField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcVerifyInvestorPasswordField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcVerifyInvestorPasswordField_InvestorID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcVerifyInvestorPasswordField_Password != NULL ) {
        if(CThostFtdcVerifyInvestorPasswordField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcVerifyInvestorPasswordField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcVerifyInvestorPasswordField_Password, CThostFtdcVerifyInvestorPasswordField_Password_length);
        strncpy(data->Password, CThostFtdcVerifyInvestorPasswordField_Password, sizeof(data->Password));
        CThostFtdcVerifyInvestorPasswordField_Password = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcVerifyInvestorPasswordFieldType_repr(PyObject *self) {

    PyCThostFtdcVerifyInvestorPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyInvestorPasswordFieldData>(self);
    CThostFtdcVerifyInvestorPasswordField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyInvestorPasswordField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyInvestorPasswordField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcVerifyInvestorPasswordFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyInvestorPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyInvestorPasswordFieldData>(self);
    CThostFtdcVerifyInvestorPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcVerifyInvestorPasswordFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyInvestorPasswordField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyInvestorPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyInvestorPasswordFieldData>(self);
    CThostFtdcVerifyInvestorPasswordField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcVerifyInvestorPasswordFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcVerifyInvestorPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyInvestorPasswordFieldData>(self);
    CThostFtdcVerifyInvestorPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcVerifyInvestorPasswordFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyInvestorPasswordField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyInvestorPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyInvestorPasswordFieldData>(self);
    CThostFtdcVerifyInvestorPasswordField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcVerifyInvestorPasswordFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcVerifyInvestorPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyInvestorPasswordFieldData>(self);
    CThostFtdcVerifyInvestorPasswordField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcVerifyInvestorPasswordFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcVerifyInvestorPasswordField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcVerifyInvestorPasswordFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcVerifyInvestorPasswordFieldData>(self);
    CThostFtdcVerifyInvestorPasswordField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcVerifyInvestorPasswordFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcVerifyInvestorPasswordFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcVerifyInvestorPasswordFieldType_get_BrokerID,
    .set = PyCThostFtdcVerifyInvestorPasswordFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcVerifyInvestorPasswordFieldType_get_InvestorID,
    .set = PyCThostFtdcVerifyInvestorPasswordFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcVerifyInvestorPasswordFieldType_get_Password,
    .set = PyCThostFtdcVerifyInvestorPasswordFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcVerifyInvestorPasswordFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcVerifyInvestorPasswordField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("校验投资者密码")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcVerifyInvestorPasswordFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcVerifyInvestorPasswordFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcVerifyInvestorPasswordFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcVerifyInvestorPasswordFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcVerifyInvestorPasswordFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcVerifyInvestorPasswordFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("校验投资者密码")},
    {Py_tp_members, PyCThostFtdcVerifyInvestorPasswordFieldType_members},
    {Py_tp_getset, PyCThostFtdcVerifyInvestorPasswordFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcVerifyInvestorPasswordFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcVerifyInvestorPasswordFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcVerifyInvestorPasswordFieldType_spec = {
    .name = "PyCTP.CThostFtdcVerifyInvestorPasswordField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcVerifyInvestorPasswordFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcVerifyInvestorPasswordFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcVerifyInvestorPasswordFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcVerifyInvestorPasswordFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcVerifyInvestorPasswordFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcVerifyInvestorPasswordFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcVerifyInvestorPasswordFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcVerifyInvestorPasswordFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcVerifyInvestorPasswordField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyInvestorPasswordField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}