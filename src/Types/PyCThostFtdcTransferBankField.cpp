
#include "PyCThostFtdcTransferBankField.h"

///转帐银行

static int PyCThostFtdcTransferBankFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BankID", "BankBrchID", "BankName", "IsActive", NULL };


    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcTransferBankField_BankID = NULL;
    Py_ssize_t CThostFtdcTransferBankField_BankID_length = 0;

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcTransferBankField_BankBrchID = NULL;
    Py_ssize_t CThostFtdcTransferBankField_BankBrchID_length = 0;

    /// 银行名称
    /// typedef char TThostFtdcBankNameType[101]
    char *CThostFtdcTransferBankField_BankName = NULL;
    Py_ssize_t CThostFtdcTransferBankField_BankName_length = 0;

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    int CThostFtdcTransferBankField_IsActive = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
        , &CThostFtdcTransferBankField_BankID, &CThostFtdcTransferBankField_BankID_length
        , &CThostFtdcTransferBankField_BankBrchID, &CThostFtdcTransferBankField_BankBrchID_length
        , &CThostFtdcTransferBankField_BankName, &CThostFtdcTransferBankField_BankName_length
        , &CThostFtdcTransferBankField_IsActive
    )) {
        return -1;
    }

    PyCThostFtdcTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(self);
    CThostFtdcTransferBankField *data = &(extra->data);


    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcTransferBankField_BankID != NULL ) {
        if(CThostFtdcTransferBankField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcTransferBankField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcTransferBankField_BankID, CThostFtdcTransferBankField_BankID_length);
        strncpy(data->BankID, CThostFtdcTransferBankField_BankID, sizeof(data->BankID));
        CThostFtdcTransferBankField_BankID = NULL;
    }

    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcTransferBankField_BankBrchID != NULL ) {
        if(CThostFtdcTransferBankField_BankBrchID_length >= (Py_ssize_t)sizeof(data->BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is 4)", CThostFtdcTransferBankField_BankBrchID_length);
            return -1;
        }
        // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
        // memcpy(data->BankBrchID, CThostFtdcTransferBankField_BankBrchID, CThostFtdcTransferBankField_BankBrchID_length);
        strncpy(data->BankBrchID, CThostFtdcTransferBankField_BankBrchID, sizeof(data->BankBrchID));
        CThostFtdcTransferBankField_BankBrchID = NULL;
    }

    /// 银行名称
    /// typedef char TThostFtdcBankNameType[101]
    if( CThostFtdcTransferBankField_BankName != NULL ) {
        if(CThostFtdcTransferBankField_BankName_length >= (Py_ssize_t)sizeof(data->BankName)) {
            PyErr_Format(PyExc_ValueError, "BankName too long: length=%zd (max allowed is 100)", CThostFtdcTransferBankField_BankName_length);
            return -1;
        }
        // memset(data->BankName, 0, sizeof(data->BankName));
        // memcpy(data->BankName, CThostFtdcTransferBankField_BankName, CThostFtdcTransferBankField_BankName_length);
        strncpy(data->BankName, CThostFtdcTransferBankField_BankName, sizeof(data->BankName));
        CThostFtdcTransferBankField_BankName = NULL;
    }

    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    data->IsActive = CThostFtdcTransferBankField_IsActive;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferBankFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(self);
    CThostFtdcTransferBankField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i}"
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBrchID", data->BankBrchID//, (Py_ssize_t)sizeof(data->BankBrchID)
        , "BankName", data->BankName//, (Py_ssize_t)sizeof(data->BankName)
        , "IsActive", data->IsActive
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankField repr");
        return NULL;
    }

    return repr;
}


/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcTransferBankFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(self);
    CThostFtdcTransferBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcTransferBankFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(self);
    CThostFtdcTransferBankField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分中心代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcTransferBankFieldType_get_BankBrchID(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(self);
    CThostFtdcTransferBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBrchID, (Py_ssize_t)sizeof(data->BankBrchID));
    return PyBytes_FromString(data->BankBrchID);
}

static int PyCThostFtdcTransferBankFieldType_set_BankBrchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankField::BankBrchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(self);
    CThostFtdcTransferBankField *data = &(extra->data);
    // memset(data->BankBrchID, 0, sizeof(data->BankBrchID));
    // memcpy(data->BankBrchID, buf, len);
    strncpy(data->BankBrchID, buf, sizeof(data->BankBrchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行名称
/// typedef char TThostFtdcBankNameType[101]
static PyObject *PyCThostFtdcTransferBankFieldType_get_BankName(PyObject *self, void *closure) {
    PyCThostFtdcTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(self);
    CThostFtdcTransferBankField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankName, (Py_ssize_t)sizeof(data->BankName));
    return PyBytes_FromString(data->BankName);
}

static int PyCThostFtdcTransferBankFieldType_set_BankName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferBankField::BankName)) {
        PyErr_SetString(PyExc_ValueError, "BankName must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferBankFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(self);
    CThostFtdcTransferBankField *data = &(extra->data);
    // memset(data->BankName, 0, sizeof(data->BankName));
    // memcpy(data->BankName, buf, len);
    strncpy(data->BankName, buf, sizeof(data->BankName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferBankFieldType_members[] = {
    /// 是否活跃
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsActive",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferBankFieldData, data.IsActive),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否活跃")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferBankFieldType_getsets[] = {
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcTransferBankFieldType_get_BankID,
    .set = PyCThostFtdcTransferBankFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分中心代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBrchID",
    .get = PyCThostFtdcTransferBankFieldType_get_BankBrchID,
    .set = PyCThostFtdcTransferBankFieldType_set_BankBrchID,
    .doc = PyDoc_STR("银行分中心代码"),
    },
    /// 银行名称
    /// typedef char TThostFtdcBankNameType[101]
    {
    .name = "BankName",
    .get = PyCThostFtdcTransferBankFieldType_get_BankName,
    .set = PyCThostFtdcTransferBankFieldType_set_BankName,
    .doc = PyDoc_STR("银行名称"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferBankFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferBankField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("转帐银行")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferBankFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferBankFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferBankFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferBankFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferBankFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferBankFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("转帐银行")},
    {Py_tp_members, PyCThostFtdcTransferBankFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferBankFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferBankFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferBankFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferBankFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferBankField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferBankFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferBankFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferBankFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferBankFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferBankFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferBankFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferBankFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferBankFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferBankField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}