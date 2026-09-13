
#include "PyCThostFtdcCombinationLegField.h"

///组合交易合约的单腿

static int PyCThostFtdcCombinationLegFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "LegID", "reserve2", "Direction", "LegMultiple", "ImplyLevel", "CombInstrumentID", "LegInstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcCombinationLegField_reserve1 = NULL;
    Py_ssize_t CThostFtdcCombinationLegField_reserve1_length = 0;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    int CThostFtdcCombinationLegField_LegID = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcCombinationLegField_reserve2 = NULL;
    Py_ssize_t CThostFtdcCombinationLegField_reserve2_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcCombinationLegField_Direction = 0;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    int CThostFtdcCombinationLegField_LegMultiple = 0;

    /// 派生层数
    /// typedef int TThostFtdcImplyLevelType
    int CThostFtdcCombinationLegField_ImplyLevel = 0;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCombinationLegField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcCombinationLegField_CombInstrumentID_length = 0;

    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCombinationLegField_LegInstrumentID = NULL;
    Py_ssize_t CThostFtdcCombinationLegField_LegInstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#ciiy#y#", (char **)kwlist
        , &CThostFtdcCombinationLegField_reserve1, &CThostFtdcCombinationLegField_reserve1_length
        , &CThostFtdcCombinationLegField_LegID
        , &CThostFtdcCombinationLegField_reserve2, &CThostFtdcCombinationLegField_reserve2_length
        , &CThostFtdcCombinationLegField_Direction
        , &CThostFtdcCombinationLegField_LegMultiple
        , &CThostFtdcCombinationLegField_ImplyLevel
        , &CThostFtdcCombinationLegField_CombInstrumentID, &CThostFtdcCombinationLegField_CombInstrumentID_length
        , &CThostFtdcCombinationLegField_LegInstrumentID, &CThostFtdcCombinationLegField_LegInstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcCombinationLegField_reserve1 != NULL ) {
        if(CThostFtdcCombinationLegField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcCombinationLegField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcCombinationLegField_reserve1, CThostFtdcCombinationLegField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcCombinationLegField_reserve1, sizeof(data->reserve1));
        CThostFtdcCombinationLegField_reserve1 = NULL;
    }

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    data->LegID = CThostFtdcCombinationLegField_LegID;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcCombinationLegField_reserve2 != NULL ) {
        if(CThostFtdcCombinationLegField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcCombinationLegField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcCombinationLegField_reserve2, CThostFtdcCombinationLegField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcCombinationLegField_reserve2, sizeof(data->reserve2));
        CThostFtdcCombinationLegField_reserve2 = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcCombinationLegField_Direction;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    data->LegMultiple = CThostFtdcCombinationLegField_LegMultiple;

    /// 派生层数
    /// typedef int TThostFtdcImplyLevelType
    data->ImplyLevel = CThostFtdcCombinationLegField_ImplyLevel;

    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCombinationLegField_CombInstrumentID != NULL ) {
        if(CThostFtdcCombinationLegField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcCombinationLegField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcCombinationLegField_CombInstrumentID, CThostFtdcCombinationLegField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcCombinationLegField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcCombinationLegField_CombInstrumentID = NULL;
    }

    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCombinationLegField_LegInstrumentID != NULL ) {
        if(CThostFtdcCombinationLegField_LegInstrumentID_length >= (Py_ssize_t)sizeof(data->LegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcCombinationLegField_LegInstrumentID_length);
            return -1;
        }
        // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
        // memcpy(data->LegInstrumentID, CThostFtdcCombinationLegField_LegInstrumentID, CThostFtdcCombinationLegField_LegInstrumentID_length);
        strncpy(data->LegInstrumentID, CThostFtdcCombinationLegField_LegInstrumentID, sizeof(data->LegInstrumentID));
        CThostFtdcCombinationLegField_LegInstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCombinationLegFieldType_repr(PyObject *self) {

    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:y,s:c,s:i,s:i,s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "LegID", data->LegID
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "Direction", data->Direction
        , "LegMultiple", data->LegMultiple
        , "ImplyLevel", data->ImplyLevel
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
        , "LegInstrumentID", data->LegInstrumentID//, (Py_ssize_t)sizeof(data->LegInstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombinationLegField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombinationLegField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcCombinationLegFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcCombinationLegFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombinationLegField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcCombinationLegFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcCombinationLegFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombinationLegField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcCombinationLegFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcCombinationLegFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCombinationLegField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 组合合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCombinationLegFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcCombinationLegFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombinationLegField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 单腿合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCombinationLegFieldType_get_LegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LegInstrumentID, (Py_ssize_t)sizeof(data->LegInstrumentID));
    return PyBytes_FromString(data->LegInstrumentID);
}

static int PyCThostFtdcCombinationLegFieldType_set_LegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombinationLegField::LegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombinationLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombinationLegFieldData>(self);
    CThostFtdcCombinationLegField *data = &(extra->data);
    // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
    // memcpy(data->LegInstrumentID, buf, len);
    strncpy(data->LegInstrumentID, buf, sizeof(data->LegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCombinationLegFieldType_members[] = {
    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    {
        .name = "LegID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombinationLegFieldData, data.LegID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿编号")
    },
    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    {
        .name = "LegMultiple",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombinationLegFieldData, data.LegMultiple),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("单腿乘数")
    },
    /// 派生层数
    /// typedef int TThostFtdcImplyLevelType
    {
        .name = "ImplyLevel",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombinationLegFieldData, data.ImplyLevel),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("派生层数")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCombinationLegFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcCombinationLegFieldType_get_reserve1,
    .set = PyCThostFtdcCombinationLegFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcCombinationLegFieldType_get_reserve2,
    .set = PyCThostFtdcCombinationLegFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcCombinationLegFieldType_get_Direction,
    .set = PyCThostFtdcCombinationLegFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcCombinationLegFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcCombinationLegFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合合约代码"),
    },
    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "LegInstrumentID",
    .get = PyCThostFtdcCombinationLegFieldType_get_LegInstrumentID,
    .set = PyCThostFtdcCombinationLegFieldType_set_LegInstrumentID,
    .doc = PyDoc_STR("单腿合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCombinationLegFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCombinationLegField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组合交易合约的单腿")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCombinationLegFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCombinationLegFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCombinationLegFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCombinationLegFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCombinationLegFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCombinationLegFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组合交易合约的单腿")},
    {Py_tp_members, PyCThostFtdcCombinationLegFieldType_members},
    {Py_tp_getset, PyCThostFtdcCombinationLegFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCombinationLegFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCombinationLegFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCombinationLegFieldType_spec = {
    .name = "PyCTP.CThostFtdcCombinationLegField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCombinationLegFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCombinationLegFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCombinationLegFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCombinationLegFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCombinationLegFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCombinationLegFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCombinationLegFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCombinationLegFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCombinationLegField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombinationLegField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}