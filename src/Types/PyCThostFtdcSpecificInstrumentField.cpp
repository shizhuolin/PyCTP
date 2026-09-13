
#include "PyCThostFtdcSpecificInstrumentField.h"

///指定的合约

static int PyCThostFtdcSpecificInstrumentFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "reserve1", "InstrumentID", NULL };


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcSpecificInstrumentField_reserve1 = NULL;
    Py_ssize_t CThostFtdcSpecificInstrumentField_reserve1_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcSpecificInstrumentField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcSpecificInstrumentField_InstrumentID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
        , &CThostFtdcSpecificInstrumentField_reserve1, &CThostFtdcSpecificInstrumentField_reserve1_length
        , &CThostFtdcSpecificInstrumentField_InstrumentID, &CThostFtdcSpecificInstrumentField_InstrumentID_length
    )) {
        return -1;
    }

    PyCThostFtdcSpecificInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(self);
    CThostFtdcSpecificInstrumentField *data = &(extra->data);


    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcSpecificInstrumentField_reserve1 != NULL ) {
        if(CThostFtdcSpecificInstrumentField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcSpecificInstrumentField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcSpecificInstrumentField_reserve1, CThostFtdcSpecificInstrumentField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcSpecificInstrumentField_reserve1, sizeof(data->reserve1));
        CThostFtdcSpecificInstrumentField_reserve1 = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcSpecificInstrumentField_InstrumentID != NULL ) {
        if(CThostFtdcSpecificInstrumentField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcSpecificInstrumentField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcSpecificInstrumentField_InstrumentID, CThostFtdcSpecificInstrumentField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcSpecificInstrumentField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcSpecificInstrumentField_InstrumentID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSpecificInstrumentFieldType_repr(PyObject *self) {

    PyCThostFtdcSpecificInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(self);
    CThostFtdcSpecificInstrumentField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y}"
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpecificInstrumentField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpecificInstrumentField repr");
        return NULL;
    }

    return repr;
}


/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcSpecificInstrumentFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcSpecificInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(self);
    CThostFtdcSpecificInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcSpecificInstrumentFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpecificInstrumentField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpecificInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(self);
    CThostFtdcSpecificInstrumentField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcSpecificInstrumentFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcSpecificInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(self);
    CThostFtdcSpecificInstrumentField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcSpecificInstrumentFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSpecificInstrumentField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSpecificInstrumentFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(self);
    CThostFtdcSpecificInstrumentField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSpecificInstrumentFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSpecificInstrumentFieldType_getsets[] = {
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcSpecificInstrumentFieldType_get_reserve1,
    .set = PyCThostFtdcSpecificInstrumentFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcSpecificInstrumentFieldType_get_InstrumentID,
    .set = PyCThostFtdcSpecificInstrumentFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSpecificInstrumentFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSpecificInstrumentField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("指定的合约")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSpecificInstrumentFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSpecificInstrumentFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSpecificInstrumentFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSpecificInstrumentFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSpecificInstrumentFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSpecificInstrumentFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("指定的合约")},
    {Py_tp_members, PyCThostFtdcSpecificInstrumentFieldType_members},
    {Py_tp_getset, PyCThostFtdcSpecificInstrumentFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSpecificInstrumentFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSpecificInstrumentFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSpecificInstrumentFieldType_spec = {
    .name = "PyCTP.CThostFtdcSpecificInstrumentField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSpecificInstrumentFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSpecificInstrumentFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSpecificInstrumentFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSpecificInstrumentFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSpecificInstrumentFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSpecificInstrumentFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSpecificInstrumentFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSpecificInstrumentFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSpecificInstrumentField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSpecificInstrumentField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}