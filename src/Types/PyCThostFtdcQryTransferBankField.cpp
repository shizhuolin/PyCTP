
#include "PyCThostFtdcQryTransferBankField.h"

///查询转帐银行

static int PyCThostFtdcQryTransferBankFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BankID", "BankBrchID", NULL };


    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcQryTransferBankField_BankID = NULL;
    Py_ssize_t CThostFtdcQryTransferBankField_BankID_length = 0;

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcQryTransferBankField_BankBrchID = NULL;
    Py_ssize_t CThostFtdcQryTransferBankField_BankBrchID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcQryTransferBankField_BankID, &CThostFtdcQryTransferBankField_BankID_length
        , &CThostFtdcQryTransferBankField_BankBrchID, &CThostFtdcQryTransferBankField_BankBrchID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferBankFieldData>(self);
    CThostFtdcQryTransferBankField *data = &(extra->data);


    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcQryTransferBankField_BankID != NULL ) {
        if(CThostFtdcQryTransferBankField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcQryTransferBankField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcQryTransferBankField_BankID, CThostFtdcQryTransferBankField_BankID_length);
        strncpy(data->BankID, CThostFtdcQryTransferBankField_BankID, sizeof(data->BankID));
        CThostFtdcQryTransferBankField_BankID = NULL;
    }

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcQryTransferBankField_BankBrchID != NULL ) {
        if(CThostFtdcQryTransferBankField_BankBrchID_length >= (Py_ssize_t)sizeof(data->BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is 4)", CThostFtdcQryTransferBankField_BankBrchID_length);
            return -1;
        }
        // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
        // memcpy(data->BankBrchID, CThostFtdcQryTransferBankField_BankBrchID, CThostFtdcQryTransferBankField_BankBrchID_length);
        strncpy(data->BankBrchID, CThostFtdcQryTransferBankField_BankBrchID, sizeof(data->BankBrchID));
        CThostFtdcQryTransferBankField_BankBrchID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryTransferBankFieldType_repr(PyObject *self) {

    PyCThostFtdcQryTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferBankFieldData>(self);
    CThostFtdcQryTransferBankField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBrchID", data->BankBrchID//, (Py_ssize_t)sizeof(data->BankBrchID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTransferBankField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTransferBankField repr");
        return NULL;
    }

    return repr;
}


/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcQryTransferBankFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcQryTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferBankFieldData>(self);
    CThostFtdcQryTransferBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcQryTransferBankFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTransferBankField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferBankFieldData>(self);
    CThostFtdcQryTransferBankField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分中心代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcQryTransferBankFieldType_get_BankBrchID(PyObject *self, void *closure) {
    PyCThostFtdcQryTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferBankFieldData>(self);
    CThostFtdcQryTransferBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBrchID, (Py_ssize_t)sizeof(data->BankBrchID));
    return PyBytes_FromString(data->BankBrchID);
}

static int PyCThostFtdcQryTransferBankFieldType_set_BankBrchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryTransferBankField::BankBrchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferBankFieldData>(self);
    CThostFtdcQryTransferBankField *data = &(extra->data);
    // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
    // memcpy(data->BankBrchID, buf, len);
    strncpy(data->BankBrchID, buf, sizeof(data->BankBrchID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryTransferBankFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryTransferBankFieldType_getsets[] = {
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcQryTransferBankFieldType_get_BankID,
    .set = PyCThostFtdcQryTransferBankFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBrchID",
    .get = PyCThostFtdcQryTransferBankFieldType_get_BankBrchID,
    .set = PyCThostFtdcQryTransferBankFieldType_set_BankBrchID,
    .doc = PyDoc_STR("银行分中心代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryTransferBankFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryTransferBankField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询转帐银行")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryTransferBankFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryTransferBankFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryTransferBankFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryTransferBankFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryTransferBankFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryTransferBankFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询转帐银行")},
    {Py_tp_members, PyCThostFtdcQryTransferBankFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryTransferBankFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryTransferBankFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryTransferBankFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryTransferBankFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryTransferBankField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryTransferBankFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryTransferBankFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryTransferBankFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryTransferBankFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryTransferBankFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryTransferBankFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryTransferBankFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryTransferBankFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryTransferBankField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTransferBankField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}