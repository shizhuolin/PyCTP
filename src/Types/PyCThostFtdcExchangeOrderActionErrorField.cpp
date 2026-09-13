
#include "PyCThostFtdcExchangeOrderActionErrorField.h"

///交易所报单操作失败

static int PyCThostFtdcExchangeOrderActionErrorFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "OrderSysID", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ErrorID", "ErrorMsg", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeOrderActionErrorField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionErrorField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeOrderActionErrorField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionErrorField_OrderSysID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeOrderActionErrorField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionErrorField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeOrderActionErrorField_InstallID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOrderActionErrorField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionErrorField_OrderLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOrderActionErrorField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionErrorField_ActionLocalID_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcExchangeOrderActionErrorField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcExchangeOrderActionErrorField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionErrorField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#iy#", (char **)kwlist
        , &CThostFtdcExchangeOrderActionErrorField_ExchangeID, &CThostFtdcExchangeOrderActionErrorField_ExchangeID_length
        , &CThostFtdcExchangeOrderActionErrorField_OrderSysID, &CThostFtdcExchangeOrderActionErrorField_OrderSysID_length
        , &CThostFtdcExchangeOrderActionErrorField_TraderID, &CThostFtdcExchangeOrderActionErrorField_TraderID_length
        , &CThostFtdcExchangeOrderActionErrorField_InstallID
        , &CThostFtdcExchangeOrderActionErrorField_OrderLocalID, &CThostFtdcExchangeOrderActionErrorField_OrderLocalID_length
        , &CThostFtdcExchangeOrderActionErrorField_ActionLocalID, &CThostFtdcExchangeOrderActionErrorField_ActionLocalID_length
        , &CThostFtdcExchangeOrderActionErrorField_ErrorID
        , &CThostFtdcExchangeOrderActionErrorField_ErrorMsg, &CThostFtdcExchangeOrderActionErrorField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeOrderActionErrorField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeOrderActionErrorField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderActionErrorField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeOrderActionErrorField_ExchangeID, CThostFtdcExchangeOrderActionErrorField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeOrderActionErrorField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeOrderActionErrorField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeOrderActionErrorField_OrderSysID != NULL ) {
        if(CThostFtdcExchangeOrderActionErrorField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderActionErrorField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcExchangeOrderActionErrorField_OrderSysID, CThostFtdcExchangeOrderActionErrorField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcExchangeOrderActionErrorField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcExchangeOrderActionErrorField_OrderSysID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeOrderActionErrorField_TraderID != NULL ) {
        if(CThostFtdcExchangeOrderActionErrorField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderActionErrorField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeOrderActionErrorField_TraderID, CThostFtdcExchangeOrderActionErrorField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeOrderActionErrorField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeOrderActionErrorField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeOrderActionErrorField_InstallID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOrderActionErrorField_OrderLocalID != NULL ) {
        if(CThostFtdcExchangeOrderActionErrorField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOrderActionErrorField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcExchangeOrderActionErrorField_OrderLocalID, CThostFtdcExchangeOrderActionErrorField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcExchangeOrderActionErrorField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcExchangeOrderActionErrorField_OrderLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOrderActionErrorField_ActionLocalID != NULL ) {
        if(CThostFtdcExchangeOrderActionErrorField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOrderActionErrorField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcExchangeOrderActionErrorField_ActionLocalID, CThostFtdcExchangeOrderActionErrorField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcExchangeOrderActionErrorField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcExchangeOrderActionErrorField_ActionLocalID = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcExchangeOrderActionErrorField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcExchangeOrderActionErrorField_ErrorMsg != NULL ) {
        if(CThostFtdcExchangeOrderActionErrorField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcExchangeOrderActionErrorField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcExchangeOrderActionErrorField_ErrorMsg, CThostFtdcExchangeOrderActionErrorField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcExchangeOrderActionErrorField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcExchangeOrderActionErrorField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeOrderActionErrorFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:i,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderActionErrorField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderActionErrorField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeOrderActionErrorFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeOrderActionErrorFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionErrorField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeOrderActionErrorFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcExchangeOrderActionErrorFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionErrorField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeOrderActionErrorFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeOrderActionErrorFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionErrorField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOrderActionErrorFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcExchangeOrderActionErrorFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionErrorField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOrderActionErrorFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcExchangeOrderActionErrorFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionErrorField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcExchangeOrderActionErrorFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcExchangeOrderActionErrorFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionErrorField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionErrorFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionErrorFieldData>(self);
    CThostFtdcExchangeOrderActionErrorField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeOrderActionErrorFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderActionErrorFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    {
        .name = "ErrorID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderActionErrorFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeOrderActionErrorFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeOrderActionErrorFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeOrderActionErrorFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcExchangeOrderActionErrorFieldType_get_OrderSysID,
    .set = PyCThostFtdcExchangeOrderActionErrorFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeOrderActionErrorFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeOrderActionErrorFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcExchangeOrderActionErrorFieldType_get_OrderLocalID,
    .set = PyCThostFtdcExchangeOrderActionErrorFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcExchangeOrderActionErrorFieldType_get_ActionLocalID,
    .set = PyCThostFtdcExchangeOrderActionErrorFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcExchangeOrderActionErrorFieldType_get_ErrorMsg,
    .set = PyCThostFtdcExchangeOrderActionErrorFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeOrderActionErrorFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeOrderActionErrorField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所报单操作失败")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeOrderActionErrorFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeOrderActionErrorFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeOrderActionErrorFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeOrderActionErrorFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeOrderActionErrorFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeOrderActionErrorFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所报单操作失败")},
    {Py_tp_members, PyCThostFtdcExchangeOrderActionErrorFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeOrderActionErrorFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeOrderActionErrorFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeOrderActionErrorFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeOrderActionErrorFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeOrderActionErrorField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeOrderActionErrorFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeOrderActionErrorFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeOrderActionErrorFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeOrderActionErrorFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeOrderActionErrorFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeOrderActionErrorFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeOrderActionErrorFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeOrderActionErrorFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderActionErrorField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderActionErrorField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}