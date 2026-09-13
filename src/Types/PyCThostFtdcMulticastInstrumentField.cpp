
#include "PyCThostFtdcMulticastInstrumentField.h"

///MulticastInstrument

static int PyCThostFtdcMulticastInstrumentFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TopicID", "reserve1", "InstrumentNo", "CodePrice", "VolumeMultiple", "PriceTick", "InstrumentID", NULL };


    /// 主题号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcMulticastInstrumentField_TopicID = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcMulticastInstrumentField_reserve1 = NULL;
    Py_ssize_t CThostFtdcMulticastInstrumentField_reserve1_length = 0;

    /// 合约编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcMulticastInstrumentField_InstrumentNo = 0;

    /// 基准价
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMulticastInstrumentField_CodePrice = 0.0;

    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    int CThostFtdcMulticastInstrumentField_VolumeMultiple = 0;

    /// 最小变动价位
    /// typedef double TThostFtdcPriceType
    double CThostFtdcMulticastInstrumentField_PriceTick = 0.0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcMulticastInstrumentField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcMulticastInstrumentField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#ididy#", (char **)kwlist
        , &CThostFtdcMulticastInstrumentField_TopicID
        , &CThostFtdcMulticastInstrumentField_reserve1, &CThostFtdcMulticastInstrumentField_reserve1_length
        , &CThostFtdcMulticastInstrumentField_InstrumentNo
        , &CThostFtdcMulticastInstrumentField_CodePrice
        , &CThostFtdcMulticastInstrumentField_VolumeMultiple
        , &CThostFtdcMulticastInstrumentField_PriceTick
        , &CThostFtdcMulticastInstrumentField_InstrumentID, &CThostFtdcMulticastInstrumentField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMulticastInstrumentFieldData>(self);
    CThostFtdcMulticastInstrumentField *data = &(extra->data);


    /// 主题号
    /// typedef int TThostFtdcInstallIDType
    data->TopicID = CThostFtdcMulticastInstrumentField_TopicID;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcMulticastInstrumentField_reserve1 != NULL ) {
        if(CThostFtdcMulticastInstrumentField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcMulticastInstrumentField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcMulticastInstrumentField_reserve1, CThostFtdcMulticastInstrumentField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcMulticastInstrumentField_reserve1, sizeof(data->reserve1));
        CThostFtdcMulticastInstrumentField_reserve1 = NULL;
    }

    /// 合约编号
    /// typedef int TThostFtdcInstallIDType
    data->InstrumentNo = CThostFtdcMulticastInstrumentField_InstrumentNo;

    /// 基准价
    /// typedef double TThostFtdcPriceType
    data->CodePrice = CThostFtdcMulticastInstrumentField_CodePrice;

    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    data->VolumeMultiple = CThostFtdcMulticastInstrumentField_VolumeMultiple;

    /// 最小变动价位
    /// typedef double TThostFtdcPriceType
    data->PriceTick = CThostFtdcMulticastInstrumentField_PriceTick;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcMulticastInstrumentField_InstrumentID != NULL ) {
        if(CThostFtdcMulticastInstrumentField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcMulticastInstrumentField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcMulticastInstrumentField_InstrumentID, CThostFtdcMulticastInstrumentField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcMulticastInstrumentField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcMulticastInstrumentField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMulticastInstrumentFieldType_repr(PyObject *self) {

    PyCThostFtdcMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMulticastInstrumentFieldData>(self);
    CThostFtdcMulticastInstrumentField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:y,s:i,s:d,s:i,s:d,s:y}"
        , "TopicID", data->TopicID
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InstrumentNo", data->InstrumentNo
        , "CodePrice", data->CodePrice
        , "VolumeMultiple", data->VolumeMultiple
        , "PriceTick", data->PriceTick
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMulticastInstrumentField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMulticastInstrumentField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcMulticastInstrumentFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMulticastInstrumentFieldData>(self);
    CThostFtdcMulticastInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcMulticastInstrumentFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMulticastInstrumentField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMulticastInstrumentFieldData>(self);
    CThostFtdcMulticastInstrumentField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcMulticastInstrumentFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMulticastInstrumentFieldData>(self);
    CThostFtdcMulticastInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcMulticastInstrumentFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMulticastInstrumentField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMulticastInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMulticastInstrumentFieldData>(self);
    CThostFtdcMulticastInstrumentField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMulticastInstrumentFieldType_members[] = {
    /// 主题号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "TopicID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMulticastInstrumentFieldData, data.TopicID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("主题号")
    },
    /// 合约编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstrumentNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMulticastInstrumentFieldData, data.InstrumentNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("合约编号")
    },
    /// 基准价
    /// typedef double TThostFtdcPriceType
    {
        .name = "CodePrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMulticastInstrumentFieldData, data.CodePrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("基准价")
    },
    /// 合约数量乘数
    /// typedef int TThostFtdcVolumeMultipleType
    {
        .name = "VolumeMultiple",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMulticastInstrumentFieldData, data.VolumeMultiple),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("合约数量乘数")
    },
    /// 最小变动价位
    /// typedef double TThostFtdcPriceType
    {
        .name = "PriceTick",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMulticastInstrumentFieldData, data.PriceTick),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("最小变动价位")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMulticastInstrumentFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcMulticastInstrumentFieldType_get_reserve1,
    .set = PyCThostFtdcMulticastInstrumentFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcMulticastInstrumentFieldType_get_InstrumentID,
    .set = PyCThostFtdcMulticastInstrumentFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMulticastInstrumentFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMulticastInstrumentField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("MulticastInstrument")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMulticastInstrumentFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMulticastInstrumentFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMulticastInstrumentFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMulticastInstrumentFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMulticastInstrumentFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMulticastInstrumentFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("MulticastInstrument")},
    {Py_tp_members, PyCThostFtdcMulticastInstrumentFieldType_members},
    {Py_tp_getset, PyCThostFtdcMulticastInstrumentFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMulticastInstrumentFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMulticastInstrumentFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMulticastInstrumentFieldType_spec = {
    .name = "PyCTP.CThostFtdcMulticastInstrumentField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMulticastInstrumentFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMulticastInstrumentFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMulticastInstrumentFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMulticastInstrumentFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMulticastInstrumentFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMulticastInstrumentFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMulticastInstrumentFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMulticastInstrumentFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMulticastInstrumentField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMulticastInstrumentField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}