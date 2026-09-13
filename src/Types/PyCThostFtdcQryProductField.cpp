
#include "PyCThostFtdcQryProductField.h"

///查询产品

static int PyCThostFtdcQryProductFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "ProductClass", "ExchangeID", "ProductID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryProductField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryProductField_reserve1_length = 0;

    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    char CThostFtdcQryProductField_ProductClass = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryProductField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryProductField_ExchangeID_length = 0;

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryProductField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryProductField_ProductID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#", (char **)kwlist
        , &CThostFtdcQryProductField_reserve1, &CThostFtdcQryProductField_reserve1_length
        , &CThostFtdcQryProductField_ProductClass
        , &CThostFtdcQryProductField_ExchangeID, &CThostFtdcQryProductField_ExchangeID_length
        , &CThostFtdcQryProductField_ProductID, &CThostFtdcQryProductField_ProductID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryProductField_reserve1 != NULL ) {
        if(CThostFtdcQryProductField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryProductField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryProductField_reserve1, CThostFtdcQryProductField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryProductField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryProductField_reserve1 = NULL;
    }

    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    data->ProductClass = CThostFtdcQryProductField_ProductClass;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryProductField_ExchangeID != NULL ) {
        if(CThostFtdcQryProductField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryProductField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryProductField_ExchangeID, CThostFtdcQryProductField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryProductField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryProductField_ExchangeID = NULL;
    }

    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryProductField_ProductID != NULL ) {
        if(CThostFtdcQryProductField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 80)", CThostFtdcQryProductField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryProductField_ProductID, CThostFtdcQryProductField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryProductField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryProductField_ProductID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryProductFieldType_repr(PyObject *self) {

    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:c,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ProductClass", data->ProductClass
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryProductFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryProductFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品类型
/// typedef char TThostFtdcProductClassType
static PyObject *PyCThostFtdcQryProductFieldType_get_ProductClass(PyObject *self, void *closure) {
    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ProductClass), 1);
}

static int PyCThostFtdcQryProductFieldType_set_ProductClass(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductClass Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryProductField::ProductClass)) {
        PyErr_SetString(PyExc_ValueError, "ProductClass must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);
    data->ProductClass = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryProductFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryProductFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryProductFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryProductFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryProductField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryProductFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(self);
    CThostFtdcQryProductField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryProductFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryProductFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryProductFieldType_get_reserve1,
    .set = PyCThostFtdcQryProductFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 产品类型
    /// typedef char TThostFtdcProductClassType
    {
    .name = "ProductClass",
    .get = PyCThostFtdcQryProductFieldType_get_ProductClass,
    .set = PyCThostFtdcQryProductFieldType_set_ProductClass,
    .doc = PyDoc_STR("产品类型"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryProductFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryProductFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 产品代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryProductFieldType_get_ProductID,
    .set = PyCThostFtdcQryProductFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryProductFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryProductField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询产品")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryProductFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryProductFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryProductFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryProductFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryProductFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryProductFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询产品")},
    {Py_tp_members, PyCThostFtdcQryProductFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryProductFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryProductFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryProductFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryProductFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryProductField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryProductFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryProductFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryProductFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryProductFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryProductFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryProductFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryProductFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryProductFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryProductField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryProductField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}