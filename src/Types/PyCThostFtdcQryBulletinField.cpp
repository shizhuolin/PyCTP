
#include "PyCThostFtdcQryBulletinField.h"

///查询交易所公告

static int PyCThostFtdcQryBulletinFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "BulletinID", "SequenceNo", "NewsType", "NewsUrgency", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryBulletinField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryBulletinField_ExchangeID_length = 0;

    /// 公告编号
    /// typedef int TThostFtdcBulletinIDType
    int CThostFtdcQryBulletinField_BulletinID = 0;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcQryBulletinField_SequenceNo = 0;

    /// 公告类型
    /// typedef char TThostFtdcNewsTypeType[3]
    char *CThostFtdcQryBulletinField_NewsType = NULL;
    Py_ssize_t CThostFtdcQryBulletinField_NewsType_length = 0;

    /// 紧急程度
    /// typedef char TThostFtdcNewsUrgencyType
    char CThostFtdcQryBulletinField_NewsUrgency = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iiy#c", (char **)kwlist
        , &CThostFtdcQryBulletinField_ExchangeID, &CThostFtdcQryBulletinField_ExchangeID_length
        , &CThostFtdcQryBulletinField_BulletinID
        , &CThostFtdcQryBulletinField_SequenceNo
        , &CThostFtdcQryBulletinField_NewsType, &CThostFtdcQryBulletinField_NewsType_length
        , &CThostFtdcQryBulletinField_NewsUrgency
    )) {
        return -1;
    }

    PyCThostFtdcQryBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBulletinFieldData>(self);
    CThostFtdcQryBulletinField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryBulletinField_ExchangeID != NULL ) {
        if(CThostFtdcQryBulletinField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryBulletinField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryBulletinField_ExchangeID, CThostFtdcQryBulletinField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryBulletinField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryBulletinField_ExchangeID = NULL;
    }

    /// 公告编号
    /// typedef int TThostFtdcBulletinIDType
    data->BulletinID = CThostFtdcQryBulletinField_BulletinID;

    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcQryBulletinField_SequenceNo;

    /// 公告类型
    /// typedef char TThostFtdcNewsTypeType[3]
    if( CThostFtdcQryBulletinField_NewsType != NULL ) {
        if(CThostFtdcQryBulletinField_NewsType_length >= (Py_ssize_t)sizeof(data->NewsType)) {
            PyErr_Format(PyExc_ValueError, "NewsType too long: length=%zd (max allowed is 2)", CThostFtdcQryBulletinField_NewsType_length);
            return -1;
        }
        // memset(data->NewsType, 0, sizeof(data->NewsType));
        // memcpy(data->NewsType, CThostFtdcQryBulletinField_NewsType, CThostFtdcQryBulletinField_NewsType_length);
        strncpy(data->NewsType, CThostFtdcQryBulletinField_NewsType, sizeof(data->NewsType));
        CThostFtdcQryBulletinField_NewsType = NULL;
    }

    /// 紧急程度
    /// typedef char TThostFtdcNewsUrgencyType
    data->NewsUrgency = CThostFtdcQryBulletinField_NewsUrgency;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryBulletinFieldType_repr(PyObject *self) {

    PyCThostFtdcQryBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBulletinFieldData>(self);
    CThostFtdcQryBulletinField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:i,s:i,s:y,s:c}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "BulletinID", data->BulletinID
        , "SequenceNo", data->SequenceNo
        , "NewsType", data->NewsType//, (Py_ssize_t)sizeof(data->NewsType)
        , "NewsUrgency", data->NewsUrgency
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBulletinField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBulletinField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryBulletinFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBulletinFieldData>(self);
    CThostFtdcQryBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryBulletinFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBulletinField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBulletinFieldData>(self);
    CThostFtdcQryBulletinField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 公告类型
/// typedef char TThostFtdcNewsTypeType[3]
static PyObject *PyCThostFtdcQryBulletinFieldType_get_NewsType(PyObject *self, void *closure) {
    PyCThostFtdcQryBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBulletinFieldData>(self);
    CThostFtdcQryBulletinField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->NewsType, (Py_ssize_t)sizeof(data->NewsType));
    return PyBytes_FromString(data->NewsType);
}

static int PyCThostFtdcQryBulletinFieldType_set_NewsType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewsType Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryBulletinField::NewsType)) {
        PyErr_SetString(PyExc_ValueError, "NewsType must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBulletinFieldData>(self);
    CThostFtdcQryBulletinField *data = &(extra->data);
    // memset(data->NewsType, 0, sizeof(data->NewsType));
    // memcpy(data->NewsType, buf, len);
    strncpy(data->NewsType, buf, sizeof(data->NewsType));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 紧急程度
/// typedef char TThostFtdcNewsUrgencyType
static PyObject *PyCThostFtdcQryBulletinFieldType_get_NewsUrgency(PyObject *self, void *closure) {
    PyCThostFtdcQryBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBulletinFieldData>(self);
    CThostFtdcQryBulletinField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->NewsUrgency), 1);
}

static int PyCThostFtdcQryBulletinFieldType_set_NewsUrgency(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "NewsUrgency Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQryBulletinField::NewsUrgency)) {
        PyErr_SetString(PyExc_ValueError, "NewsUrgency must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryBulletinFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryBulletinFieldData>(self);
    CThostFtdcQryBulletinField *data = &(extra->data);
    data->NewsUrgency = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryBulletinFieldType_members[] = {
    /// 公告编号
    /// typedef int TThostFtdcBulletinIDType
    {
        .name = "BulletinID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryBulletinFieldData, data.BulletinID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("公告编号")
    },
    /// 序列号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQryBulletinFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序列号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryBulletinFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryBulletinFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryBulletinFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 公告类型
    /// typedef char TThostFtdcNewsTypeType[3]
    {
    .name = "NewsType",
    .get = PyCThostFtdcQryBulletinFieldType_get_NewsType,
    .set = PyCThostFtdcQryBulletinFieldType_set_NewsType,
    .doc = PyDoc_STR("公告类型"),
    },
    /// 紧急程度
    /// typedef char TThostFtdcNewsUrgencyType
    {
    .name = "NewsUrgency",
    .get = PyCThostFtdcQryBulletinFieldType_get_NewsUrgency,
    .set = PyCThostFtdcQryBulletinFieldType_set_NewsUrgency,
    .doc = PyDoc_STR("紧急程度"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryBulletinFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryBulletinField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询交易所公告")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryBulletinFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryBulletinFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryBulletinFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryBulletinFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryBulletinFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryBulletinFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询交易所公告")},
    {Py_tp_members, PyCThostFtdcQryBulletinFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryBulletinFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryBulletinFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryBulletinFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryBulletinFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryBulletinField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryBulletinFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryBulletinFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryBulletinFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryBulletinFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryBulletinFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryBulletinFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryBulletinFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryBulletinFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryBulletinField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBulletinField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}