
#include "PyCThostFtdcQryRCAMSCombProductInfoField.h"

///RCAMS产品组合信息查询

static int PyCThostFtdcQryRCAMSCombProductInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ProductID", "CombProductID", "ProductGroupID", NULL };


    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSCombProductInfoField_ProductID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSCombProductInfoField_ProductID_length = 0;

    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSCombProductInfoField_CombProductID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSCombProductInfoField_CombProductID_length = 0;

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryRCAMSCombProductInfoField_ProductID, &CThostFtdcQryRCAMSCombProductInfoField_ProductID_length
        , &CThostFtdcQryRCAMSCombProductInfoField_CombProductID, &CThostFtdcQryRCAMSCombProductInfoField_CombProductID_length
        , &CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID, &CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(self);
    CThostFtdcQryRCAMSCombProductInfoField *data = &(extra->data);


    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSCombProductInfoField_ProductID != NULL ) {
        if(CThostFtdcQryRCAMSCombProductInfoField_ProductID_length >= (Py_ssize_t)sizeof(data->ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSCombProductInfoField_ProductID_length);
            return -1;
        }
        // memset(data->ProductID, 0, sizeof(data->ProductID));
        // memcpy(data->ProductID, CThostFtdcQryRCAMSCombProductInfoField_ProductID, CThostFtdcQryRCAMSCombProductInfoField_ProductID_length);
        strncpy(data->ProductID, CThostFtdcQryRCAMSCombProductInfoField_ProductID, sizeof(data->ProductID));
        CThostFtdcQryRCAMSCombProductInfoField_ProductID = NULL;
    }

    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSCombProductInfoField_CombProductID != NULL ) {
        if(CThostFtdcQryRCAMSCombProductInfoField_CombProductID_length >= (Py_ssize_t)sizeof(data->CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSCombProductInfoField_CombProductID_length);
            return -1;
        }
        // memset(data->CombProductID, 0, sizeof(data->CombProductID));
        // memcpy(data->CombProductID, CThostFtdcQryRCAMSCombProductInfoField_CombProductID, CThostFtdcQryRCAMSCombProductInfoField_CombProductID_length);
        strncpy(data->CombProductID, CThostFtdcQryRCAMSCombProductInfoField_CombProductID, sizeof(data->CombProductID));
        CThostFtdcQryRCAMSCombProductInfoField_CombProductID = NULL;
    }

    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID != NULL ) {
        if(CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID, CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcQryRCAMSCombProductInfoField_ProductGroupID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRCAMSCombProductInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(self);
    CThostFtdcQryRCAMSCombProductInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ProductID", data->ProductID//, (Py_ssize_t)sizeof(data->ProductID)
        , "CombProductID", data->CombProductID//, (Py_ssize_t)sizeof(data->CombProductID)
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSCombProductInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSCombProductInfoField repr");
        return NULL;
    }

    return repr;
}


/// 产品代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSCombProductInfoFieldType_get_ProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(self);
    CThostFtdcQryRCAMSCombProductInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductID, (Py_ssize_t)sizeof(data->ProductID));
    return PyBytes_FromString(data->ProductID);
}

static int PyCThostFtdcQryRCAMSCombProductInfoFieldType_set_ProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSCombProductInfoField::ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(self);
    CThostFtdcQryRCAMSCombProductInfoField *data = &(extra->data);
    // memset(data->ProductID, 0, sizeof(data->ProductID));
    // memcpy(data->ProductID, buf, len);
    strncpy(data->ProductID, buf, sizeof(data->ProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品组代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSCombProductInfoFieldType_get_CombProductID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(self);
    CThostFtdcQryRCAMSCombProductInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProductID, (Py_ssize_t)sizeof(data->CombProductID));
    return PyBytes_FromString(data->CombProductID);
}

static int PyCThostFtdcQryRCAMSCombProductInfoFieldType_set_CombProductID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSCombProductInfoField::CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(self);
    CThostFtdcQryRCAMSCombProductInfoField *data = &(extra->data);
    // memset(data->CombProductID, 0, sizeof(data->CombProductID));
    // memcpy(data->CombProductID, buf, len);
    strncpy(data->CombProductID, buf, sizeof(data->CombProductID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 商品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSCombProductInfoFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(self);
    CThostFtdcQryRCAMSCombProductInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcQryRCAMSCombProductInfoFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSCombProductInfoField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSCombProductInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(self);
    CThostFtdcQryRCAMSCombProductInfoField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRCAMSCombProductInfoFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRCAMSCombProductInfoFieldType_getsets[] = {
    /// 产品代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductID",
    .get = PyCThostFtdcQryRCAMSCombProductInfoFieldType_get_ProductID,
    .set = PyCThostFtdcQryRCAMSCombProductInfoFieldType_set_ProductID,
    .doc = PyDoc_STR("产品代码"),
    },
    /// 商品组代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProductID",
    .get = PyCThostFtdcQryRCAMSCombProductInfoFieldType_get_CombProductID,
    .set = PyCThostFtdcQryRCAMSCombProductInfoFieldType_set_CombProductID,
    .doc = PyDoc_STR("商品组代码"),
    },
    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcQryRCAMSCombProductInfoFieldType_get_ProductGroupID,
    .set = PyCThostFtdcQryRCAMSCombProductInfoFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRCAMSCombProductInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRCAMSCombProductInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS产品组合信息查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRCAMSCombProductInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRCAMSCombProductInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRCAMSCombProductInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRCAMSCombProductInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRCAMSCombProductInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRCAMSCombProductInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS产品组合信息查询")},
    {Py_tp_members, PyCThostFtdcQryRCAMSCombProductInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRCAMSCombProductInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRCAMSCombProductInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRCAMSCombProductInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRCAMSCombProductInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRCAMSCombProductInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSCombProductInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSCombProductInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRCAMSCombProductInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRCAMSCombProductInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRCAMSCombProductInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRCAMSCombProductInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRCAMSCombProductInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRCAMSCombProductInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSCombProductInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSCombProductInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}