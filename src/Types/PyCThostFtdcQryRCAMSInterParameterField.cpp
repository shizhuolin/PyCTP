
#include "PyCThostFtdcQryRCAMSInterParameterField.h"

///RCAMS跨品种风险折抵参数查询

static int PyCThostFtdcQryRCAMSInterParameterFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ProductGroupID", "CombProduct1", "CombProduct2", NULL };


    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSInterParameterField_ProductGroupID = NULL;
    Py_ssize_t CThostFtdcQryRCAMSInterParameterField_ProductGroupID_length = 0;

    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSInterParameterField_CombProduct1 = NULL;
    Py_ssize_t CThostFtdcQryRCAMSInterParameterField_CombProduct1_length = 0;

    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    char *CThostFtdcQryRCAMSInterParameterField_CombProduct2 = NULL;
    Py_ssize_t CThostFtdcQryRCAMSInterParameterField_CombProduct2_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
        , &CThostFtdcQryRCAMSInterParameterField_ProductGroupID, &CThostFtdcQryRCAMSInterParameterField_ProductGroupID_length
        , &CThostFtdcQryRCAMSInterParameterField_CombProduct1, &CThostFtdcQryRCAMSInterParameterField_CombProduct1_length
        , &CThostFtdcQryRCAMSInterParameterField_CombProduct2, &CThostFtdcQryRCAMSInterParameterField_CombProduct2_length
    )) {
        return -1;
    }

    PyCThostFtdcQryRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(self);
    CThostFtdcQryRCAMSInterParameterField *data = &(extra->data);


    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSInterParameterField_ProductGroupID != NULL ) {
        if(CThostFtdcQryRCAMSInterParameterField_ProductGroupID_length >= (Py_ssize_t)sizeof(data->ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSInterParameterField_ProductGroupID_length);
            return -1;
        }
        // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
        // memcpy(data->ProductGroupID, CThostFtdcQryRCAMSInterParameterField_ProductGroupID, CThostFtdcQryRCAMSInterParameterField_ProductGroupID_length);
        strncpy(data->ProductGroupID, CThostFtdcQryRCAMSInterParameterField_ProductGroupID, sizeof(data->ProductGroupID));
        CThostFtdcQryRCAMSInterParameterField_ProductGroupID = NULL;
    }

    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSInterParameterField_CombProduct1 != NULL ) {
        if(CThostFtdcQryRCAMSInterParameterField_CombProduct1_length >= (Py_ssize_t)sizeof(data->CombProduct1)) {
            PyErr_Format(PyExc_ValueError, "CombProduct1 too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSInterParameterField_CombProduct1_length);
            return -1;
        }
        // memset(data->CombProduct1, 0, sizeof(data->CombProduct1));
        // memcpy(data->CombProduct1, CThostFtdcQryRCAMSInterParameterField_CombProduct1, CThostFtdcQryRCAMSInterParameterField_CombProduct1_length);
        strncpy(data->CombProduct1, CThostFtdcQryRCAMSInterParameterField_CombProduct1, sizeof(data->CombProduct1));
        CThostFtdcQryRCAMSInterParameterField_CombProduct1 = NULL;
    }

    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    if( CThostFtdcQryRCAMSInterParameterField_CombProduct2 != NULL ) {
        if(CThostFtdcQryRCAMSInterParameterField_CombProduct2_length >= (Py_ssize_t)sizeof(data->CombProduct2)) {
            PyErr_Format(PyExc_ValueError, "CombProduct2 too long: length=%zd (max allowed is 40)", CThostFtdcQryRCAMSInterParameterField_CombProduct2_length);
            return -1;
        }
        // memset(data->CombProduct2, 0, sizeof(data->CombProduct2));
        // memcpy(data->CombProduct2, CThostFtdcQryRCAMSInterParameterField_CombProduct2, CThostFtdcQryRCAMSInterParameterField_CombProduct2_length);
        strncpy(data->CombProduct2, CThostFtdcQryRCAMSInterParameterField_CombProduct2, sizeof(data->CombProduct2));
        CThostFtdcQryRCAMSInterParameterField_CombProduct2 = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryRCAMSInterParameterFieldType_repr(PyObject *self) {

    PyCThostFtdcQryRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(self);
    CThostFtdcQryRCAMSInterParameterField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y}"
        , "ProductGroupID", data->ProductGroupID//, (Py_ssize_t)sizeof(data->ProductGroupID)
        , "CombProduct1", data->CombProduct1//, (Py_ssize_t)sizeof(data->CombProduct1)
        , "CombProduct2", data->CombProduct2//, (Py_ssize_t)sizeof(data->CombProduct2)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSInterParameterField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSInterParameterField repr");
        return NULL;
    }

    return repr;
}


/// 商品群代码
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSInterParameterFieldType_get_ProductGroupID(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(self);
    CThostFtdcQryRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProductGroupID, (Py_ssize_t)sizeof(data->ProductGroupID));
    return PyBytes_FromString(data->ProductGroupID);
}

static int PyCThostFtdcQryRCAMSInterParameterFieldType_set_ProductGroupID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSInterParameterField::ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(self);
    CThostFtdcQryRCAMSInterParameterField *data = &(extra->data);
    // memset(data->ProductGroupID, 0, sizeof(data->ProductGroupID));
    // memcpy(data->ProductGroupID, buf, len);
    strncpy(data->ProductGroupID, buf, sizeof(data->ProductGroupID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码1
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSInterParameterFieldType_get_CombProduct1(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(self);
    CThostFtdcQryRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProduct1, (Py_ssize_t)sizeof(data->CombProduct1));
    return PyBytes_FromString(data->CombProduct1);
}

static int PyCThostFtdcQryRCAMSInterParameterFieldType_set_CombProduct1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSInterParameterField::CombProduct1)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct1 must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(self);
    CThostFtdcQryRCAMSInterParameterField *data = &(extra->data);
    // memset(data->CombProduct1, 0, sizeof(data->CombProduct1));
    // memcpy(data->CombProduct1, buf, len);
    strncpy(data->CombProduct1, buf, sizeof(data->CombProduct1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 产品组合代码2
/// typedef char TThostFtdcProductIDType[41]
static PyObject *PyCThostFtdcQryRCAMSInterParameterFieldType_get_CombProduct2(PyObject *self, void *closure) {
    PyCThostFtdcQryRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(self);
    CThostFtdcQryRCAMSInterParameterField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombProduct2, (Py_ssize_t)sizeof(data->CombProduct2));
    return PyBytes_FromString(data->CombProduct2);
}

static int PyCThostFtdcQryRCAMSInterParameterFieldType_set_CombProduct2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryRCAMSInterParameterField::CombProduct2)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct2 must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryRCAMSInterParameterFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(self);
    CThostFtdcQryRCAMSInterParameterField *data = &(extra->data);
    // memset(data->CombProduct2, 0, sizeof(data->CombProduct2));
    // memcpy(data->CombProduct2, buf, len);
    strncpy(data->CombProduct2, buf, sizeof(data->CombProduct2));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryRCAMSInterParameterFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryRCAMSInterParameterFieldType_getsets[] = {
    /// 商品群代码
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "ProductGroupID",
    .get = PyCThostFtdcQryRCAMSInterParameterFieldType_get_ProductGroupID,
    .set = PyCThostFtdcQryRCAMSInterParameterFieldType_set_ProductGroupID,
    .doc = PyDoc_STR("商品群代码"),
    },
    /// 产品组合代码1
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProduct1",
    .get = PyCThostFtdcQryRCAMSInterParameterFieldType_get_CombProduct1,
    .set = PyCThostFtdcQryRCAMSInterParameterFieldType_set_CombProduct1,
    .doc = PyDoc_STR("产品组合代码1"),
    },
    /// 产品组合代码2
    /// typedef char TThostFtdcProductIDType[41]
    {
    .name = "CombProduct2",
    .get = PyCThostFtdcQryRCAMSInterParameterFieldType_get_CombProduct2,
    .set = PyCThostFtdcQryRCAMSInterParameterFieldType_set_CombProduct2,
    .doc = PyDoc_STR("产品组合代码2"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryRCAMSInterParameterFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryRCAMSInterParameterField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("RCAMS跨品种风险折抵参数查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryRCAMSInterParameterFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryRCAMSInterParameterFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryRCAMSInterParameterFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryRCAMSInterParameterFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryRCAMSInterParameterFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryRCAMSInterParameterFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("RCAMS跨品种风险折抵参数查询")},
    {Py_tp_members, PyCThostFtdcQryRCAMSInterParameterFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryRCAMSInterParameterFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryRCAMSInterParameterFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryRCAMSInterParameterFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryRCAMSInterParameterFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryRCAMSInterParameterField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSInterParameterFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryRCAMSInterParameterFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryRCAMSInterParameterFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryRCAMSInterParameterFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryRCAMSInterParameterFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryRCAMSInterParameterFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryRCAMSInterParameterFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryRCAMSInterParameterFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSInterParameterField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSInterParameterField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}