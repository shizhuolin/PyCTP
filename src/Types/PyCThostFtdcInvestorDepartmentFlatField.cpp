
#include "PyCThostFtdcInvestorDepartmentFlatField.h"

///组织架构投资者对应关系

static int PyCThostFtdcInvestorDepartmentFlatFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "DepartmentID", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcInvestorDepartmentFlatField_BrokerID = NULL;
    Py_ssize_t CThostFtdcInvestorDepartmentFlatField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorDepartmentFlatField_InvestorID = NULL;
    Py_ssize_t CThostFtdcInvestorDepartmentFlatField_InvestorID_length = 0;

    /// 组织架构代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcInvestorDepartmentFlatField_DepartmentID = NULL;
    Py_ssize_t CThostFtdcInvestorDepartmentFlatField_DepartmentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcInvestorDepartmentFlatField_BrokerID, &CThostFtdcInvestorDepartmentFlatField_BrokerID_length
        , &CThostFtdcInvestorDepartmentFlatField_InvestorID, &CThostFtdcInvestorDepartmentFlatField_InvestorID_length
        , &CThostFtdcInvestorDepartmentFlatField_DepartmentID, &CThostFtdcInvestorDepartmentFlatField_DepartmentID_length
    )) {
        return -1;
    }

    PyCThostFtdcInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorDepartmentFlatFieldData>(self);
    CThostFtdcInvestorDepartmentFlatField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcInvestorDepartmentFlatField_BrokerID != NULL ) {
        if(CThostFtdcInvestorDepartmentFlatField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcInvestorDepartmentFlatField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcInvestorDepartmentFlatField_BrokerID, CThostFtdcInvestorDepartmentFlatField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcInvestorDepartmentFlatField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcInvestorDepartmentFlatField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorDepartmentFlatField_InvestorID != NULL ) {
        if(CThostFtdcInvestorDepartmentFlatField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorDepartmentFlatField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcInvestorDepartmentFlatField_InvestorID, CThostFtdcInvestorDepartmentFlatField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcInvestorDepartmentFlatField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcInvestorDepartmentFlatField_InvestorID = NULL;
    }

    /// 组织架构代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcInvestorDepartmentFlatField_DepartmentID != NULL ) {
        if(CThostFtdcInvestorDepartmentFlatField_DepartmentID_length >= (Py_ssize_t)sizeof(data->DepartmentID)) {
            PyErr_Format(PyExc_ValueError, "DepartmentID too long: length=%zd (max allowed is 12)", CThostFtdcInvestorDepartmentFlatField_DepartmentID_length);
            return -1;
        }
        // memset(data->DepartmentID, 0, sizeof(data->DepartmentID));
        // memcpy(data->DepartmentID, CThostFtdcInvestorDepartmentFlatField_DepartmentID, CThostFtdcInvestorDepartmentFlatField_DepartmentID_length);
        strncpy(data->DepartmentID, CThostFtdcInvestorDepartmentFlatField_DepartmentID, sizeof(data->DepartmentID));
        CThostFtdcInvestorDepartmentFlatField_DepartmentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcInvestorDepartmentFlatFieldType_repr(PyObject *self) {

    PyCThostFtdcInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorDepartmentFlatFieldData>(self);
    CThostFtdcInvestorDepartmentFlatField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "DepartmentID", data->DepartmentID//, (Py_ssize_t)sizeof(data->DepartmentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorDepartmentFlatField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorDepartmentFlatField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcInvestorDepartmentFlatFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorDepartmentFlatFieldData>(self);
    CThostFtdcInvestorDepartmentFlatField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcInvestorDepartmentFlatFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorDepartmentFlatField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorDepartmentFlatFieldData>(self);
    CThostFtdcInvestorDepartmentFlatField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorDepartmentFlatFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorDepartmentFlatFieldData>(self);
    CThostFtdcInvestorDepartmentFlatField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcInvestorDepartmentFlatFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorDepartmentFlatField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorDepartmentFlatFieldData>(self);
    CThostFtdcInvestorDepartmentFlatField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组织架构代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcInvestorDepartmentFlatFieldType_get_DepartmentID(PyObject *self, void *closure) {
    PyCThostFtdcInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorDepartmentFlatFieldData>(self);
    CThostFtdcInvestorDepartmentFlatField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DepartmentID, (Py_ssize_t)sizeof(data->DepartmentID));
    return PyBytes_FromString(data->DepartmentID);
}

static int PyCThostFtdcInvestorDepartmentFlatFieldType_set_DepartmentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DepartmentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcInvestorDepartmentFlatField::DepartmentID)) {
        PyErr_SetString(PyExc_ValueError, "DepartmentID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcInvestorDepartmentFlatFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcInvestorDepartmentFlatFieldData>(self);
    CThostFtdcInvestorDepartmentFlatField *data = &(extra->data);
    // memset(data->DepartmentID, 0, sizeof(data->DepartmentID));
    // memcpy(data->DepartmentID, buf, len);
    strncpy(data->DepartmentID, buf, sizeof(data->DepartmentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcInvestorDepartmentFlatFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcInvestorDepartmentFlatFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcInvestorDepartmentFlatFieldType_get_BrokerID,
    .set = PyCThostFtdcInvestorDepartmentFlatFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcInvestorDepartmentFlatFieldType_get_InvestorID,
    .set = PyCThostFtdcInvestorDepartmentFlatFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 组织架构代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "DepartmentID",
    .get = PyCThostFtdcInvestorDepartmentFlatFieldType_get_DepartmentID,
    .set = PyCThostFtdcInvestorDepartmentFlatFieldType_set_DepartmentID,
    .doc = PyDoc_STR("组织架构代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcInvestorDepartmentFlatFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcInvestorDepartmentFlatField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组织架构投资者对应关系")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcInvestorDepartmentFlatFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcInvestorDepartmentFlatFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcInvestorDepartmentFlatFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcInvestorDepartmentFlatFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcInvestorDepartmentFlatFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcInvestorDepartmentFlatFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组织架构投资者对应关系")},
    {Py_tp_members, PyCThostFtdcInvestorDepartmentFlatFieldType_members},
    {Py_tp_getset, PyCThostFtdcInvestorDepartmentFlatFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcInvestorDepartmentFlatFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcInvestorDepartmentFlatFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcInvestorDepartmentFlatFieldType_spec = {
    .name = "PyCTP.CThostFtdcInvestorDepartmentFlatField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcInvestorDepartmentFlatFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcInvestorDepartmentFlatFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcInvestorDepartmentFlatFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcInvestorDepartmentFlatFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcInvestorDepartmentFlatFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcInvestorDepartmentFlatFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcInvestorDepartmentFlatFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcInvestorDepartmentFlatFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcInvestorDepartmentFlatField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorDepartmentFlatField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}