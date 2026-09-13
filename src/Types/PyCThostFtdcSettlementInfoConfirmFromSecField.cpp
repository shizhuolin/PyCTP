
#include "PyCThostFtdcSettlementInfoConfirmFromSecField.h"

///来自次席的结算结果确认

static int PyCThostFtdcSettlementInfoConfirmFromSecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "ConfirmDate", "ConfirmTime", "FromSec", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcSettlementInfoConfirmFromSecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmFromSecField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcSettlementInfoConfirmFromSecField_InvestorID = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmFromSecField_InvestorID_length = 0;

    /// 确认日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate_length = 0;

    /// 确认时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime = NULL;
    Py_ssize_t CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime_length = 0;

    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcSettlementInfoConfirmFromSecField_FromSec = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
        , &CThostFtdcSettlementInfoConfirmFromSecField_BrokerID, &CThostFtdcSettlementInfoConfirmFromSecField_BrokerID_length
        , &CThostFtdcSettlementInfoConfirmFromSecField_InvestorID, &CThostFtdcSettlementInfoConfirmFromSecField_InvestorID_length
        , &CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate, &CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate_length
        , &CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime, &CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime_length
        , &CThostFtdcSettlementInfoConfirmFromSecField_FromSec
    )) {
        return -1;
    }

    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcSettlementInfoConfirmFromSecField_BrokerID != NULL ) {
        if(CThostFtdcSettlementInfoConfirmFromSecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcSettlementInfoConfirmFromSecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcSettlementInfoConfirmFromSecField_BrokerID, CThostFtdcSettlementInfoConfirmFromSecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcSettlementInfoConfirmFromSecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcSettlementInfoConfirmFromSecField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcSettlementInfoConfirmFromSecField_InvestorID != NULL ) {
        if(CThostFtdcSettlementInfoConfirmFromSecField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcSettlementInfoConfirmFromSecField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcSettlementInfoConfirmFromSecField_InvestorID, CThostFtdcSettlementInfoConfirmFromSecField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcSettlementInfoConfirmFromSecField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcSettlementInfoConfirmFromSecField_InvestorID = NULL;
    }

    /// 确认日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate != NULL ) {
        if(CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate_length >= (Py_ssize_t)sizeof(data->ConfirmDate)) {
            PyErr_Format(PyExc_ValueError, "ConfirmDate too long: length=%zd (max allowed is 8)", CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate_length);
            return -1;
        }
        // memset(data->ConfirmDate, 0, sizeof(data->ConfirmDate));
        // memcpy(data->ConfirmDate, CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate, CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate_length);
        strncpy(data->ConfirmDate, CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate, sizeof(data->ConfirmDate));
        CThostFtdcSettlementInfoConfirmFromSecField_ConfirmDate = NULL;
    }

    /// 确认时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime != NULL ) {
        if(CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime_length >= (Py_ssize_t)sizeof(data->ConfirmTime)) {
            PyErr_Format(PyExc_ValueError, "ConfirmTime too long: length=%zd (max allowed is 8)", CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime_length);
            return -1;
        }
        // memset(data->ConfirmTime, 0, sizeof(data->ConfirmTime));
        // memcpy(data->ConfirmTime, CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime, CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime_length);
        strncpy(data->ConfirmTime, CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime, sizeof(data->ConfirmTime));
        CThostFtdcSettlementInfoConfirmFromSecField_ConfirmTime = NULL;
    }

    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->FromSec = CThostFtdcSettlementInfoConfirmFromSecField_FromSec;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecFieldType_repr(PyObject *self) {

    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "ConfirmDate", data->ConfirmDate//, (Py_ssize_t)sizeof(data->ConfirmDate)
        , "ConfirmTime", data->ConfirmTime//, (Py_ssize_t)sizeof(data->ConfirmTime)
        , "FromSec", data->FromSec
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoConfirmFromSecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoConfirmFromSecField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcSettlementInfoConfirmFromSecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmFromSecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcSettlementInfoConfirmFromSecFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmFromSecField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 确认日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecFieldType_get_ConfirmDate(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ConfirmDate, (Py_ssize_t)sizeof(data->ConfirmDate));
    return PyBytes_FromString(data->ConfirmDate);
}

static int PyCThostFtdcSettlementInfoConfirmFromSecFieldType_set_ConfirmDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ConfirmDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmFromSecField::ConfirmDate)) {
        PyErr_SetString(PyExc_ValueError, "ConfirmDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);
    // memset(data->ConfirmDate, 0, sizeof(data->ConfirmDate));
    // memcpy(data->ConfirmDate, buf, len);
    strncpy(data->ConfirmDate, buf, sizeof(data->ConfirmDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 确认时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecFieldType_get_ConfirmTime(PyObject *self, void *closure) {
    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ConfirmTime, (Py_ssize_t)sizeof(data->ConfirmTime));
    return PyBytes_FromString(data->ConfirmTime);
}

static int PyCThostFtdcSettlementInfoConfirmFromSecFieldType_set_ConfirmTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ConfirmTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcSettlementInfoConfirmFromSecField::ConfirmTime)) {
        PyErr_SetString(PyExc_ValueError, "ConfirmTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcSettlementInfoConfirmFromSecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFromSecFieldData>(self);
    CThostFtdcSettlementInfoConfirmFromSecField *data = &(extra->data);
    // memset(data->ConfirmTime, 0, sizeof(data->ConfirmTime));
    // memcpy(data->ConfirmTime, buf, len);
    strncpy(data->ConfirmTime, buf, sizeof(data->ConfirmTime));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcSettlementInfoConfirmFromSecFieldType_members[] = {
    /// 次席的交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "FromSec",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcSettlementInfoConfirmFromSecFieldData, data.FromSec),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次席的交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcSettlementInfoConfirmFromSecFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_get_BrokerID,
    .set = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_get_InvestorID,
    .set = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 确认日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ConfirmDate",
    .get = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_get_ConfirmDate,
    .set = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_set_ConfirmDate,
    .doc = PyDoc_STR("确认日期"),
    },
    /// 确认时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ConfirmTime",
    .get = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_get_ConfirmTime,
    .set = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_set_ConfirmTime,
    .doc = PyDoc_STR("确认时间"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcSettlementInfoConfirmFromSecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcSettlementInfoConfirmFromSecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("来自次席的结算结果确认")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcSettlementInfoConfirmFromSecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcSettlementInfoConfirmFromSecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcSettlementInfoConfirmFromSecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcSettlementInfoConfirmFromSecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcSettlementInfoConfirmFromSecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcSettlementInfoConfirmFromSecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("来自次席的结算结果确认")},
    {Py_tp_members, PyCThostFtdcSettlementInfoConfirmFromSecFieldType_members},
    {Py_tp_getset, PyCThostFtdcSettlementInfoConfirmFromSecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcSettlementInfoConfirmFromSecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcSettlementInfoConfirmFromSecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcSettlementInfoConfirmFromSecFieldType_spec = {
    .name = "PyCTP.CThostFtdcSettlementInfoConfirmFromSecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcSettlementInfoConfirmFromSecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcSettlementInfoConfirmFromSecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcSettlementInfoConfirmFromSecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcSettlementInfoConfirmFromSecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcSettlementInfoConfirmFromSecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcSettlementInfoConfirmFromSecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcSettlementInfoConfirmFromSecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcSettlementInfoConfirmFromSecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcSettlementInfoConfirmFromSecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementInfoConfirmFromSecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}