
#include "PyCThostFtdcBrokerUserRightAssignField.h"

///经济公司是否有在本标示的交易权限

static int PyCThostFtdcBrokerUserRightAssignFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "DRIdentityID", "Tradeable", NULL };


    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerUserRightAssignField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerUserRightAssignField_BrokerID_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcBrokerUserRightAssignField_DRIdentityID = 0;

    /// 能否交易
    /// typedef int TThostFtdcBoolType
    int CThostFtdcBrokerUserRightAssignField_Tradeable = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#ii", (char **)kwlist
        , &CThostFtdcBrokerUserRightAssignField_BrokerID, &CThostFtdcBrokerUserRightAssignField_BrokerID_length
        , &CThostFtdcBrokerUserRightAssignField_DRIdentityID
        , &CThostFtdcBrokerUserRightAssignField_Tradeable
    )) {
        return -1;
    }

    PyCThostFtdcBrokerUserRightAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserRightAssignFieldData>(self);
    CThostFtdcBrokerUserRightAssignField *data = &(extra->data);


    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerUserRightAssignField_BrokerID != NULL ) {
        if(CThostFtdcBrokerUserRightAssignField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerUserRightAssignField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerUserRightAssignField_BrokerID, CThostFtdcBrokerUserRightAssignField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerUserRightAssignField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerUserRightAssignField_BrokerID = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcBrokerUserRightAssignField_DRIdentityID;

    /// 能否交易
    /// typedef int TThostFtdcBoolType
    data->Tradeable = CThostFtdcBrokerUserRightAssignField_Tradeable;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerUserRightAssignFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerUserRightAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserRightAssignFieldData>(self);
    CThostFtdcBrokerUserRightAssignField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "DRIdentityID", data->DRIdentityID
        , "Tradeable", data->Tradeable
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserRightAssignField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserRightAssignField repr");
        return NULL;
    }

    return repr;
}


/// 应用单元代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerUserRightAssignFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserRightAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserRightAssignFieldData>(self);
    CThostFtdcBrokerUserRightAssignField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerUserRightAssignFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserRightAssignField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserRightAssignFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserRightAssignFieldData>(self);
    CThostFtdcBrokerUserRightAssignField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerUserRightAssignFieldType_members[] = {
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserRightAssignFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    /// 能否交易
    /// typedef int TThostFtdcBoolType
    {
        .name = "Tradeable",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserRightAssignFieldData, data.Tradeable),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("能否交易")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerUserRightAssignFieldType_getsets[] = {
    /// 应用单元代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerUserRightAssignFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerUserRightAssignFieldType_set_BrokerID,
    .doc = PyDoc_STR("应用单元代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerUserRightAssignFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerUserRightAssignField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("经济公司是否有在本标示的交易权限")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerUserRightAssignFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerUserRightAssignFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerUserRightAssignFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerUserRightAssignFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerUserRightAssignFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerUserRightAssignFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("经济公司是否有在本标示的交易权限")},
    {Py_tp_members, PyCThostFtdcBrokerUserRightAssignFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerUserRightAssignFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerUserRightAssignFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerUserRightAssignFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerUserRightAssignFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerUserRightAssignField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerUserRightAssignFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerUserRightAssignFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerUserRightAssignFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerUserRightAssignFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerUserRightAssignFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerUserRightAssignFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerUserRightAssignFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerUserRightAssignFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerUserRightAssignField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserRightAssignField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}