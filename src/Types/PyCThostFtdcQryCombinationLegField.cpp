
#include "PyCThostFtdcQryCombinationLegField.h"

///查询组合合约分腿

static int PyCThostFtdcQryCombinationLegFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "LegID", "reserve2", "CombInstrumentID", "LegInstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryCombinationLegField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryCombinationLegField_reserve1_length = 0;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    int CThostFtdcQryCombinationLegField_LegID = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQryCombinationLegField_reserve2 = NULL;
    Py_ssize_t CThostFtdcQryCombinationLegField_reserve2_length = 0;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryCombinationLegField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcQryCombinationLegField_CombInstrumentID_length = 0;

    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQryCombinationLegField_LegInstrumentID = NULL;
    Py_ssize_t CThostFtdcQryCombinationLegField_LegInstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#y#y#", (char **)kwlist
        , &CThostFtdcQryCombinationLegField_reserve1, &CThostFtdcQryCombinationLegField_reserve1_length
        , &CThostFtdcQryCombinationLegField_LegID
        , &CThostFtdcQryCombinationLegField_reserve2, &CThostFtdcQryCombinationLegField_reserve2_length
        , &CThostFtdcQryCombinationLegField_CombInstrumentID, &CThostFtdcQryCombinationLegField_CombInstrumentID_length
        , &CThostFtdcQryCombinationLegField_LegInstrumentID, &CThostFtdcQryCombinationLegField_LegInstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryCombinationLegField_reserve1 != NULL ) {
        if(CThostFtdcQryCombinationLegField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryCombinationLegField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryCombinationLegField_reserve1, CThostFtdcQryCombinationLegField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryCombinationLegField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryCombinationLegField_reserve1 = NULL;
    }

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    data->LegID = CThostFtdcQryCombinationLegField_LegID;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQryCombinationLegField_reserve2 != NULL ) {
        if(CThostFtdcQryCombinationLegField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcQryCombinationLegField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcQryCombinationLegField_reserve2, CThostFtdcQryCombinationLegField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcQryCombinationLegField_reserve2, sizeof(data->reserve2));
        CThostFtdcQryCombinationLegField_reserve2 = NULL;
    }

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryCombinationLegField_CombInstrumentID != NULL ) {
        if(CThostFtdcQryCombinationLegField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryCombinationLegField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcQryCombinationLegField_CombInstrumentID, CThostFtdcQryCombinationLegField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcQryCombinationLegField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcQryCombinationLegField_CombInstrumentID = NULL;
    }

    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQryCombinationLegField_LegInstrumentID != NULL ) {
        if(CThostFtdcQryCombinationLegField_LegInstrumentID_length >= (Py_ssize_t)sizeof(data->LegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQryCombinationLegField_LegInstrumentID_length);
            return -1;
        }
        // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
        // memcpy(data->LegInstrumentID, CThostFtdcQryCombinationLegField_LegInstrumentID, CThostFtdcQryCombinationLegField_LegInstrumentID_length);
        strncpy(data->LegInstrumentID, CThostFtdcQryCombinationLegField_LegInstrumentID, sizeof(data->LegInstrumentID));
        CThostFtdcQryCombinationLegField_LegInstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryCombinationLegFieldType_repr(PyObject *self) {

    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:y,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "LegID", data->LegID
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
        , "LegInstrumentID", data->LegInstrumentID//, (Py_ssize_t)sizeof(data->LegInstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombinationLegField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombinationLegField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryCombinationLegFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryCombinationLegFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCombinationLegField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQryCombinationLegFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcQryCombinationLegFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCombinationLegField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryCombinationLegFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcQryCombinationLegFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCombinationLegField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 单腿合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQryCombinationLegFieldType_get_LegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LegInstrumentID, (Py_ssize_t)sizeof(data->LegInstrumentID));
    return PyBytes_FromString(data->LegInstrumentID);
}

static int PyCThostFtdcQryCombinationLegFieldType_set_LegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryCombinationLegField::LegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryCombinationLegFieldData>(self);
    CThostFtdcQryCombinationLegField *data = &(extra->data);
    // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
    // memcpy(data->LegInstrumentID, buf, len);
    strncpy(data->LegInstrumentID, buf, sizeof(data->LegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryCombinationLegFieldType_members[] = {
    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    {
        .name = "LegID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryCombinationLegFieldData, data.LegID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryCombinationLegFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryCombinationLegFieldType_get_reserve1,
    .set = PyCThostFtdcQryCombinationLegFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcQryCombinationLegFieldType_get_reserve2,
    .set = PyCThostFtdcQryCombinationLegFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcQryCombinationLegFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcQryCombinationLegFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合合约代码"),
    },
    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "LegInstrumentID",
    .get = PyCThostFtdcQryCombinationLegFieldType_get_LegInstrumentID,
    .set = PyCThostFtdcQryCombinationLegFieldType_set_LegInstrumentID,
    .doc = PyDoc_STR("单腿合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryCombinationLegFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryCombinationLegField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询组合合约分腿")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryCombinationLegFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryCombinationLegFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryCombinationLegFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryCombinationLegFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryCombinationLegFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryCombinationLegFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询组合合约分腿")},
    {Py_tp_members, PyCThostFtdcQryCombinationLegFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryCombinationLegFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryCombinationLegFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryCombinationLegFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryCombinationLegFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryCombinationLegField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryCombinationLegFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryCombinationLegFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryCombinationLegFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryCombinationLegFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryCombinationLegFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryCombinationLegFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryCombinationLegFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryCombinationLegFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryCombinationLegField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCombinationLegField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}