
#include "PyCThostFtdcInvestorPortfMarginModelField.h"

///新组保保证金系数投资者模板对应关系

static int PyCThostFtdcInvestorPortfMarginModelFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "MarginModelID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorPortfMarginModelField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfMarginModelField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorPortfMarginModelField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfMarginModelField_InvestorID_length = 0;

    /// 保证金系数模板
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorPortfMarginModelField_MarginModelID = NULL;
    Py_ssize_t CThostFtdcInvestorPortfMarginModelField_MarginModelID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcInvestorPortfMarginModelField_BrokerID, &CThostFtdcInvestorPortfMarginModelField_BrokerID_length
        , &CThostFtdcInvestorPortfMarginModelField_InvestorID, &CThostFtdcInvestorPortfMarginModelField_InvestorID_length
        , &CThostFtdcInvestorPortfMarginModelField_MarginModelID, &CThostFtdcInvestorPortfMarginModelField_MarginModelID_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorPortfMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginModelFieldData>(self);
    CThostFtdcInvestorPortfMarginModelField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorPortfMarginModelField_BrokerID != NULL ) {
        if(CThostFtdcInvestorPortfMarginModelField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorPortfMarginModelField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorPortfMarginModelField_BrokerID, CThostFtdcInvestorPortfMarginModelField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorPortfMarginModelField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorPortfMarginModelField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorPortfMarginModelField_InvestorID != NULL ) {
        if(CThostFtdcInvestorPortfMarginModelField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorPortfMarginModelField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorPortfMarginModelField_InvestorID, CThostFtdcInvestorPortfMarginModelField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorPortfMarginModelField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorPortfMarginModelField_InvestorID = NULL;
    }

    /// 保证金系数模板
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorPortfMarginModelField_MarginModelID != NULL ) {
        if(CThostFtdcInvestorPortfMarginModelField_MarginModelID_length >= (Py_ssize_t)sizeof(data->MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorPortfMarginModelField_MarginModelID_length);
            return -1;
        }
        // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
        // memcpy(data->MarginModelID, CThostFtdcInvestorPortfMarginModelField_MarginModelID, CThostFtdcInvestorPortfMarginModelField_MarginModelID_length);
        strncpy(data->MarginModelID, CThostFtdcInvestorPortfMarginModelField_MarginModelID, sizeof(data->MarginModelID));
        CThostFtdcInvestorPortfMarginModelField_MarginModelID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorPortfMarginModelFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorPortfMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginModelFieldData>(self);
    CThostFtdcInvestorPortfMarginModelField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "MarginModelID", data->MarginModelID//, (Py_ssize_t)sizeof(data->MarginModelID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfMarginModelField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfMarginModelField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorPortfMarginModelFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginModelFieldData>(self);
    CThostFtdcInvestorPortfMarginModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorPortfMarginModelFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfMarginModelField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginModelFieldData>(self);
    CThostFtdcInvestorPortfMarginModelField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorPortfMarginModelFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginModelFieldData>(self);
    CThostFtdcInvestorPortfMarginModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorPortfMarginModelFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfMarginModelField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginModelFieldData>(self);
    CThostFtdcInvestorPortfMarginModelField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保证金系数模板
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorPortfMarginModelFieldType_get_MarginModelID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorPortfMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginModelFieldData>(self);
    CThostFtdcInvestorPortfMarginModelField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MarginModelID, (Py_ssize_t)sizeof(data->MarginModelID));
    return PyBytes_FromString(data->MarginModelID);
}

static int PyCThostFtdcInvestorPortfMarginModelFieldType_set_MarginModelID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorPortfMarginModelField::MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorPortfMarginModelFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginModelFieldData>(self);
    CThostFtdcInvestorPortfMarginModelField *data = &(extra->data);
    // memset(data->MarginModelID, 0, sizeof(data->MarginModelID));
    // memcpy(data->MarginModelID, buf, len);
    strncpy(data->MarginModelID, buf, sizeof(data->MarginModelID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorPortfMarginModelFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorPortfMarginModelFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorPortfMarginModelFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorPortfMarginModelFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorPortfMarginModelFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorPortfMarginModelFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保证金系数模板
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "MarginModelID",
    .get = PyCThostFtdcInvestorPortfMarginModelFieldType_get_MarginModelID,
    .set = PyCThostFtdcInvestorPortfMarginModelFieldType_set_MarginModelID,
    .doc = PyDoc_STR("保证金系数模板"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorPortfMarginModelFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorPortfMarginModelField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("新组保保证金系数投资者模板对应关系")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorPortfMarginModelFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorPortfMarginModelFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorPortfMarginModelFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorPortfMarginModelFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorPortfMarginModelFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorPortfMarginModelFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("新组保保证金系数投资者模板对应关系")},
    {Py_tp_members, PyCThostFtdcInvestorPortfMarginModelFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorPortfMarginModelFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorPortfMarginModelFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorPortfMarginModelFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorPortfMarginModelFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorPortfMarginModelField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorPortfMarginModelFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorPortfMarginModelFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorPortfMarginModelFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorPortfMarginModelFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorPortfMarginModelFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorPortfMarginModelFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorPortfMarginModelFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorPortfMarginModelFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorPortfMarginModelField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPortfMarginModelField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}