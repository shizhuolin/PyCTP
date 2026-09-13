
#include "PyCThostFtdcCombLegField.h"

///组合腿信息

static int PyCThostFtdcCombLegFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "CombInstrumentID", "LegID", "LegInstrumentID", "Direction", "LegMultiple", "ImplyLevel", NULL };


    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCombLegField_CombInstrumentID = NULL;
    Py_ssize_t CThostFtdcCombLegField_CombInstrumentID_length = 0;

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    int CThostFtdcCombLegField_LegID = 0;

    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcCombLegField_LegInstrumentID = NULL;
    Py_ssize_t CThostFtdcCombLegField_LegInstrumentID_length = 0;

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    char CThostFtdcCombLegField_Direction = 0;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    int CThostFtdcCombLegField_LegMultiple = 0;

    /// 派生层数
    /// typedef int TThostFtdcImplyLevelType
    int CThostFtdcCombLegField_ImplyLevel = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#cii", (char **)kwlist
        , &CThostFtdcCombLegField_CombInstrumentID, &CThostFtdcCombLegField_CombInstrumentID_length
        , &CThostFtdcCombLegField_LegID
        , &CThostFtdcCombLegField_LegInstrumentID, &CThostFtdcCombLegField_LegInstrumentID_length
        , &CThostFtdcCombLegField_Direction
        , &CThostFtdcCombLegField_LegMultiple
        , &CThostFtdcCombLegField_ImplyLevel
    )) {
        return -1;
    }

    PyCThostFtdcCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(self);
    CThostFtdcCombLegField *data = &(extra->data);


    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCombLegField_CombInstrumentID != NULL ) {
        if(CThostFtdcCombLegField_CombInstrumentID_length >= (Py_ssize_t)sizeof(data->CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcCombLegField_CombInstrumentID_length);
            return -1;
        }
        // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
        // memcpy(data->CombInstrumentID, CThostFtdcCombLegField_CombInstrumentID, CThostFtdcCombLegField_CombInstrumentID_length);
        strncpy(data->CombInstrumentID, CThostFtdcCombLegField_CombInstrumentID, sizeof(data->CombInstrumentID));
        CThostFtdcCombLegField_CombInstrumentID = NULL;
    }

    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    data->LegID = CThostFtdcCombLegField_LegID;

    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcCombLegField_LegInstrumentID != NULL ) {
        if(CThostFtdcCombLegField_LegInstrumentID_length >= (Py_ssize_t)sizeof(data->LegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcCombLegField_LegInstrumentID_length);
            return -1;
        }
        // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
        // memcpy(data->LegInstrumentID, CThostFtdcCombLegField_LegInstrumentID, CThostFtdcCombLegField_LegInstrumentID_length);
        strncpy(data->LegInstrumentID, CThostFtdcCombLegField_LegInstrumentID, sizeof(data->LegInstrumentID));
        CThostFtdcCombLegField_LegInstrumentID = NULL;
    }

    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    data->Direction = CThostFtdcCombLegField_Direction;

    /// 单腿乘数
    /// typedef int TThostFtdcLegMultipleType
    data->LegMultiple = CThostFtdcCombLegField_LegMultiple;

    /// 派生层数
    /// typedef int TThostFtdcImplyLevelType
    data->ImplyLevel = CThostFtdcCombLegField_ImplyLevel;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCombLegFieldType_repr(PyObject *self) {

    PyCThostFtdcCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(self);
    CThostFtdcCombLegField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:y,s:c,s:i,s:i}"
        , "CombInstrumentID", data->CombInstrumentID//, (Py_ssize_t)sizeof(data->CombInstrumentID)
        , "LegID", data->LegID
        , "LegInstrumentID", data->LegInstrumentID//, (Py_ssize_t)sizeof(data->LegInstrumentID)
        , "Direction", data->Direction
        , "LegMultiple", data->LegMultiple
        , "ImplyLevel", data->ImplyLevel
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombLegField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombLegField repr");
        return NULL;
    }

    return repr;
}


/// 组合合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCombLegFieldType_get_CombInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(self);
    CThostFtdcCombLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CombInstrumentID, (Py_ssize_t)sizeof(data->CombInstrumentID));
    return PyBytes_FromString(data->CombInstrumentID);
}

static int PyCThostFtdcCombLegFieldType_set_CombInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombLegField::CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(self);
    CThostFtdcCombLegField *data = &(extra->data);
    // memset(data->CombInstrumentID, 0, sizeof(data->CombInstrumentID));
    // memcpy(data->CombInstrumentID, buf, len);
    strncpy(data->CombInstrumentID, buf, sizeof(data->CombInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 单腿合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcCombLegFieldType_get_LegInstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(self);
    CThostFtdcCombLegField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LegInstrumentID, (Py_ssize_t)sizeof(data->LegInstrumentID));
    return PyBytes_FromString(data->LegInstrumentID);
}

static int PyCThostFtdcCombLegFieldType_set_LegInstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCombLegField::LegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(self);
    CThostFtdcCombLegField *data = &(extra->data);
    // memset(data->LegInstrumentID, 0, sizeof(data->LegInstrumentID));
    // memcpy(data->LegInstrumentID, buf, len);
    strncpy(data->LegInstrumentID, buf, sizeof(data->LegInstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买卖方向
/// typedef char TThostFtdcDirectionType
static PyObject *PyCThostFtdcCombLegFieldType_get_Direction(PyObject *self, void *closure) {
    PyCThostFtdcCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(self);
    CThostFtdcCombLegField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Direction), 1);
}

static int PyCThostFtdcCombLegFieldType_set_Direction(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCombLegField::Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCombLegFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(self);
    CThostFtdcCombLegField *data = &(extra->data);
    data->Direction = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCombLegFieldType_members[] = {
    /// 单腿编号
    /// typedef int TThostFtdcLegIDType
    {
        .name = "LegID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCombLegFieldData, data.LegID),
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
        .offset = offsetof(PyCThostFtdcCombLegFieldData, data.LegMultiple),
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
        .offset = offsetof(PyCThostFtdcCombLegFieldData, data.ImplyLevel),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("派生层数")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCombLegFieldType_getsets[] = {
    /// 组合合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "CombInstrumentID",
    .get = PyCThostFtdcCombLegFieldType_get_CombInstrumentID,
    .set = PyCThostFtdcCombLegFieldType_set_CombInstrumentID,
    .doc = PyDoc_STR("组合合约代码"),
    },
    /// 单腿合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "LegInstrumentID",
    .get = PyCThostFtdcCombLegFieldType_get_LegInstrumentID,
    .set = PyCThostFtdcCombLegFieldType_set_LegInstrumentID,
    .doc = PyDoc_STR("单腿合约代码"),
    },
    /// 买卖方向
    /// typedef char TThostFtdcDirectionType
    {
    .name = "Direction",
    .get = PyCThostFtdcCombLegFieldType_get_Direction,
    .set = PyCThostFtdcCombLegFieldType_set_Direction,
    .doc = PyDoc_STR("买卖方向"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCombLegFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCombLegField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("组合腿信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCombLegFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCombLegFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCombLegFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCombLegFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCombLegFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCombLegFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("组合腿信息")},
    {Py_tp_members, PyCThostFtdcCombLegFieldType_members},
    {Py_tp_getset, PyCThostFtdcCombLegFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCombLegFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCombLegFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCombLegFieldType_spec = {
    .name = "PyCTP.CThostFtdcCombLegField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCombLegFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCombLegFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCombLegFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCombLegFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCombLegFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCombLegFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCombLegFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCombLegFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCombLegField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombLegField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}