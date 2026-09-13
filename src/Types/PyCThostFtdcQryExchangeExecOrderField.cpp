
#include "PyCThostFtdcQryExchangeExecOrderField.h"

///交易所执行宣告查询

static int PyCThostFtdcQryExchangeExecOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID", NULL };


    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQryExchangeExecOrderField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcQryExchangeExecOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcQryExchangeExecOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderField_reserve1_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQryExchangeExecOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderField_ExchangeID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQryExchangeExecOrderField_TraderID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderField_TraderID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcQryExchangeExecOrderField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcQryExchangeExecOrderField_ExchangeInstID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcQryExchangeExecOrderField_ParticipantID, &CThostFtdcQryExchangeExecOrderField_ParticipantID_length
        , &CThostFtdcQryExchangeExecOrderField_ClientID, &CThostFtdcQryExchangeExecOrderField_ClientID_length
        , &CThostFtdcQryExchangeExecOrderField_reserve1, &CThostFtdcQryExchangeExecOrderField_reserve1_length
        , &CThostFtdcQryExchangeExecOrderField_ExchangeID, &CThostFtdcQryExchangeExecOrderField_ExchangeID_length
        , &CThostFtdcQryExchangeExecOrderField_TraderID, &CThostFtdcQryExchangeExecOrderField_TraderID_length
        , &CThostFtdcQryExchangeExecOrderField_ExchangeInstID, &CThostFtdcQryExchangeExecOrderField_ExchangeInstID_length
    )) {
        return -1;
    }

    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);


    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQryExchangeExecOrderField_ParticipantID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeExecOrderField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQryExchangeExecOrderField_ParticipantID, CThostFtdcQryExchangeExecOrderField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQryExchangeExecOrderField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQryExchangeExecOrderField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcQryExchangeExecOrderField_ClientID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcQryExchangeExecOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcQryExchangeExecOrderField_ClientID, CThostFtdcQryExchangeExecOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcQryExchangeExecOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcQryExchangeExecOrderField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcQryExchangeExecOrderField_reserve1 != NULL ) {
        if(CThostFtdcQryExchangeExecOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQryExchangeExecOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQryExchangeExecOrderField_reserve1, CThostFtdcQryExchangeExecOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQryExchangeExecOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcQryExchangeExecOrderField_reserve1 = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQryExchangeExecOrderField_ExchangeID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQryExchangeExecOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQryExchangeExecOrderField_ExchangeID, CThostFtdcQryExchangeExecOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQryExchangeExecOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQryExchangeExecOrderField_ExchangeID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQryExchangeExecOrderField_TraderID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQryExchangeExecOrderField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQryExchangeExecOrderField_TraderID, CThostFtdcQryExchangeExecOrderField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQryExchangeExecOrderField_TraderID, sizeof(data->TraderID));
        CThostFtdcQryExchangeExecOrderField_TraderID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcQryExchangeExecOrderField_ExchangeInstID != NULL ) {
        if(CThostFtdcQryExchangeExecOrderField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcQryExchangeExecOrderField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcQryExchangeExecOrderField_ExchangeInstID, CThostFtdcQryExchangeExecOrderField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcQryExchangeExecOrderField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcQryExchangeExecOrderField_ExchangeInstID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQryExchangeExecOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeExecOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeExecOrderField repr");
        return NULL;
    }

    return repr;
}


/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQryExchangeExecOrderFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQryExchangeExecOrderFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcQryExchangeExecOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcQryExchangeExecOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcQryExchangeExecOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQryExchangeExecOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQryExchangeExecOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQryExchangeExecOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQryExchangeExecOrderFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQryExchangeExecOrderFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcQryExchangeExecOrderFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcQryExchangeExecOrderFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQryExchangeExecOrderField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQryExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeExecOrderFieldData>(self);
    CThostFtdcQryExchangeExecOrderField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQryExchangeExecOrderFieldType_members[] = {
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQryExchangeExecOrderFieldType_getsets[] = {
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQryExchangeExecOrderFieldType_get_ParticipantID,
    .set = PyCThostFtdcQryExchangeExecOrderFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcQryExchangeExecOrderFieldType_get_ClientID,
    .set = PyCThostFtdcQryExchangeExecOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQryExchangeExecOrderFieldType_get_reserve1,
    .set = PyCThostFtdcQryExchangeExecOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQryExchangeExecOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcQryExchangeExecOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQryExchangeExecOrderFieldType_get_TraderID,
    .set = PyCThostFtdcQryExchangeExecOrderFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcQryExchangeExecOrderFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcQryExchangeExecOrderFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQryExchangeExecOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQryExchangeExecOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所执行宣告查询")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQryExchangeExecOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQryExchangeExecOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQryExchangeExecOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQryExchangeExecOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQryExchangeExecOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQryExchangeExecOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所执行宣告查询")},
    {Py_tp_members, PyCThostFtdcQryExchangeExecOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcQryExchangeExecOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQryExchangeExecOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQryExchangeExecOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQryExchangeExecOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcQryExchangeExecOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQryExchangeExecOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQryExchangeExecOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQryExchangeExecOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQryExchangeExecOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQryExchangeExecOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQryExchangeExecOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQryExchangeExecOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQryExchangeExecOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQryExchangeExecOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeExecOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}