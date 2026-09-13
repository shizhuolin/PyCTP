
#include "PyCThostFtdcBrokerUserOTPParamField.h"

///用户动态令牌参数

static int PyCThostFtdcBrokerUserOTPParamFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "OTPVendorsID", "SerialNumber", "AuthKey", "LastDrift", "LastSuccess", "OTPType", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerUserOTPParamField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerUserOTPParamField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcBrokerUserOTPParamField_UserID = NULL;
    Py_ssize_t CThostFtdcBrokerUserOTPParamField_UserID_length = 0;

    /// 动态令牌提供商
    /// typedef char TThostFtdcOTPVendorsIDType[2]
    char *CThostFtdcBrokerUserOTPParamField_OTPVendorsID = NULL;
    Py_ssize_t CThostFtdcBrokerUserOTPParamField_OTPVendorsID_length = 0;

    /// 动态令牌序列号
    /// typedef char TThostFtdcSerialNumberType[17]
    char *CThostFtdcBrokerUserOTPParamField_SerialNumber = NULL;
    Py_ssize_t CThostFtdcBrokerUserOTPParamField_SerialNumber_length = 0;

    /// 令牌密钥
    /// typedef char TThostFtdcAuthKeyType[41]
    char *CThostFtdcBrokerUserOTPParamField_AuthKey = NULL;
    Py_ssize_t CThostFtdcBrokerUserOTPParamField_AuthKey_length = 0;

    /// 漂移值
    /// typedef int TThostFtdcLastDriftType
    int CThostFtdcBrokerUserOTPParamField_LastDrift = 0;

    /// 成功值
    /// typedef int TThostFtdcLastSuccessType
    int CThostFtdcBrokerUserOTPParamField_LastSuccess = 0;

    /// 动态令牌类型
    /// typedef char TThostFtdcOTPTypeType
    char CThostFtdcBrokerUserOTPParamField_OTPType = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iic", (char **)kwlist
        , &CThostFtdcBrokerUserOTPParamField_BrokerID, &CThostFtdcBrokerUserOTPParamField_BrokerID_length
        , &CThostFtdcBrokerUserOTPParamField_UserID, &CThostFtdcBrokerUserOTPParamField_UserID_length
        , &CThostFtdcBrokerUserOTPParamField_OTPVendorsID, &CThostFtdcBrokerUserOTPParamField_OTPVendorsID_length
        , &CThostFtdcBrokerUserOTPParamField_SerialNumber, &CThostFtdcBrokerUserOTPParamField_SerialNumber_length
        , &CThostFtdcBrokerUserOTPParamField_AuthKey, &CThostFtdcBrokerUserOTPParamField_AuthKey_length
        , &CThostFtdcBrokerUserOTPParamField_LastDrift
        , &CThostFtdcBrokerUserOTPParamField_LastSuccess
        , &CThostFtdcBrokerUserOTPParamField_OTPType
    )) {
        return -1;
    }

    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerUserOTPParamField_BrokerID != NULL ) {
        if(CThostFtdcBrokerUserOTPParamField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerUserOTPParamField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerUserOTPParamField_BrokerID, CThostFtdcBrokerUserOTPParamField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerUserOTPParamField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerUserOTPParamField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcBrokerUserOTPParamField_UserID != NULL ) {
        if(CThostFtdcBrokerUserOTPParamField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcBrokerUserOTPParamField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcBrokerUserOTPParamField_UserID, CThostFtdcBrokerUserOTPParamField_UserID_length);
        strncpy(data->UserID, CThostFtdcBrokerUserOTPParamField_UserID, sizeof(data->UserID));
        CThostFtdcBrokerUserOTPParamField_UserID = NULL;
    }

    /// 动态令牌提供商
    /// typedef char TThostFtdcOTPVendorsIDType[2]
    if( CThostFtdcBrokerUserOTPParamField_OTPVendorsID != NULL ) {
        if(CThostFtdcBrokerUserOTPParamField_OTPVendorsID_length >= (Py_ssize_t)sizeof(data->OTPVendorsID)) {
            PyErr_Format(PyExc_ValueError, "OTPVendorsID too long: length=%zd (max allowed is 1)", CThostFtdcBrokerUserOTPParamField_OTPVendorsID_length);
            return -1;
        }
        // memset(data->OTPVendorsID, 0, sizeof(data->OTPVendorsID));
        // memcpy(data->OTPVendorsID, CThostFtdcBrokerUserOTPParamField_OTPVendorsID, CThostFtdcBrokerUserOTPParamField_OTPVendorsID_length);
        strncpy(data->OTPVendorsID, CThostFtdcBrokerUserOTPParamField_OTPVendorsID, sizeof(data->OTPVendorsID));
        CThostFtdcBrokerUserOTPParamField_OTPVendorsID = NULL;
    }

    /// 动态令牌序列号
    /// typedef char TThostFtdcSerialNumberType[17]
    if( CThostFtdcBrokerUserOTPParamField_SerialNumber != NULL ) {
        if(CThostFtdcBrokerUserOTPParamField_SerialNumber_length >= (Py_ssize_t)sizeof(data->SerialNumber)) {
            PyErr_Format(PyExc_ValueError, "SerialNumber too long: length=%zd (max allowed is 16)", CThostFtdcBrokerUserOTPParamField_SerialNumber_length);
            return -1;
        }
        // memset(data->SerialNumber, 0, sizeof(data->SerialNumber));
        // memcpy(data->SerialNumber, CThostFtdcBrokerUserOTPParamField_SerialNumber, CThostFtdcBrokerUserOTPParamField_SerialNumber_length);
        strncpy(data->SerialNumber, CThostFtdcBrokerUserOTPParamField_SerialNumber, sizeof(data->SerialNumber));
        CThostFtdcBrokerUserOTPParamField_SerialNumber = NULL;
    }

    /// 令牌密钥
    /// typedef char TThostFtdcAuthKeyType[41]
    if( CThostFtdcBrokerUserOTPParamField_AuthKey != NULL ) {
        if(CThostFtdcBrokerUserOTPParamField_AuthKey_length >= (Py_ssize_t)sizeof(data->AuthKey)) {
            PyErr_Format(PyExc_ValueError, "AuthKey too long: length=%zd (max allowed is 40)", CThostFtdcBrokerUserOTPParamField_AuthKey_length);
            return -1;
        }
        // memset(data->AuthKey, 0, sizeof(data->AuthKey));
        // memcpy(data->AuthKey, CThostFtdcBrokerUserOTPParamField_AuthKey, CThostFtdcBrokerUserOTPParamField_AuthKey_length);
        strncpy(data->AuthKey, CThostFtdcBrokerUserOTPParamField_AuthKey, sizeof(data->AuthKey));
        CThostFtdcBrokerUserOTPParamField_AuthKey = NULL;
    }

    /// 漂移值
    /// typedef int TThostFtdcLastDriftType
    data->LastDrift = CThostFtdcBrokerUserOTPParamField_LastDrift;

    /// 成功值
    /// typedef int TThostFtdcLastSuccessType
    data->LastSuccess = CThostFtdcBrokerUserOTPParamField_LastSuccess;

    /// 动态令牌类型
    /// typedef char TThostFtdcOTPTypeType
    data->OTPType = CThostFtdcBrokerUserOTPParamField_OTPType;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerUserOTPParamFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "OTPVendorsID", data->OTPVendorsID//, (Py_ssize_t)sizeof(data->OTPVendorsID)
        , "SerialNumber", data->SerialNumber//, (Py_ssize_t)sizeof(data->SerialNumber)
        , "AuthKey", data->AuthKey//, (Py_ssize_t)sizeof(data->AuthKey)
        , "LastDrift", data->LastDrift
        , "LastSuccess", data->LastSuccess
        , "OTPType", data->OTPType
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserOTPParamField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserOTPParamField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerUserOTPParamFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerUserOTPParamFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserOTPParamField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcBrokerUserOTPParamFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcBrokerUserOTPParamFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserOTPParamField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态令牌提供商
/// typedef char TThostFtdcOTPVendorsIDType[2]
static PyObject *PyCThostFtdcBrokerUserOTPParamFieldType_get_OTPVendorsID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OTPVendorsID, (Py_ssize_t)sizeof(data->OTPVendorsID));
    return PyBytes_FromString(data->OTPVendorsID);
}

static int PyCThostFtdcBrokerUserOTPParamFieldType_set_OTPVendorsID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OTPVendorsID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserOTPParamField::OTPVendorsID)) {
        PyErr_SetString(PyExc_ValueError, "OTPVendorsID must be less than 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // memset(data->OTPVendorsID, 0, sizeof(data->OTPVendorsID));
    // memcpy(data->OTPVendorsID, buf, len);
    strncpy(data->OTPVendorsID, buf, sizeof(data->OTPVendorsID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态令牌序列号
/// typedef char TThostFtdcSerialNumberType[17]
static PyObject *PyCThostFtdcBrokerUserOTPParamFieldType_get_SerialNumber(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SerialNumber, (Py_ssize_t)sizeof(data->SerialNumber));
    return PyBytes_FromString(data->SerialNumber);
}

static int PyCThostFtdcBrokerUserOTPParamFieldType_set_SerialNumber(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SerialNumber Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserOTPParamField::SerialNumber)) {
        PyErr_SetString(PyExc_ValueError, "SerialNumber must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // memset(data->SerialNumber, 0, sizeof(data->SerialNumber));
    // memcpy(data->SerialNumber, buf, len);
    strncpy(data->SerialNumber, buf, sizeof(data->SerialNumber));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 令牌密钥
/// typedef char TThostFtdcAuthKeyType[41]
static PyObject *PyCThostFtdcBrokerUserOTPParamFieldType_get_AuthKey(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AuthKey, (Py_ssize_t)sizeof(data->AuthKey));
    return PyBytes_FromString(data->AuthKey);
}

static int PyCThostFtdcBrokerUserOTPParamFieldType_set_AuthKey(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AuthKey Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserOTPParamField::AuthKey)) {
        PyErr_SetString(PyExc_ValueError, "AuthKey must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    // memset(data->AuthKey, 0, sizeof(data->AuthKey));
    // memcpy(data->AuthKey, buf, len);
    strncpy(data->AuthKey, buf, sizeof(data->AuthKey));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态令牌类型
/// typedef char TThostFtdcOTPTypeType
static PyObject *PyCThostFtdcBrokerUserOTPParamFieldType_get_OTPType(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OTPType), 1);
}

static int PyCThostFtdcBrokerUserOTPParamFieldType_set_OTPType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OTPType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerUserOTPParamField::OTPType)) {
        PyErr_SetString(PyExc_ValueError, "OTPType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserOTPParamFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserOTPParamFieldData>(self);
    CThostFtdcBrokerUserOTPParamField *data = &(extra->data);
    data->OTPType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerUserOTPParamFieldType_members[] = {
    /// 漂移值
    /// typedef int TThostFtdcLastDriftType
    {
        .name = "LastDrift",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserOTPParamFieldData, data.LastDrift),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("漂移值")
    },
    /// 成功值
    /// typedef int TThostFtdcLastSuccessType
    {
        .name = "LastSuccess",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserOTPParamFieldData, data.LastSuccess),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("成功值")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerUserOTPParamFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerUserOTPParamFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerUserOTPParamFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcBrokerUserOTPParamFieldType_get_UserID,
    .set = PyCThostFtdcBrokerUserOTPParamFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 动态令牌提供商
    /// typedef char TThostFtdcOTPVendorsIDType[2]
    {
    .name = "OTPVendorsID",
    .get = PyCThostFtdcBrokerUserOTPParamFieldType_get_OTPVendorsID,
    .set = PyCThostFtdcBrokerUserOTPParamFieldType_set_OTPVendorsID,
    .doc = PyDoc_STR("动态令牌提供商"),
    },
    /// 动态令牌序列号
    /// typedef char TThostFtdcSerialNumberType[17]
    {
    .name = "SerialNumber",
    .get = PyCThostFtdcBrokerUserOTPParamFieldType_get_SerialNumber,
    .set = PyCThostFtdcBrokerUserOTPParamFieldType_set_SerialNumber,
    .doc = PyDoc_STR("动态令牌序列号"),
    },
    /// 令牌密钥
    /// typedef char TThostFtdcAuthKeyType[41]
    {
    .name = "AuthKey",
    .get = PyCThostFtdcBrokerUserOTPParamFieldType_get_AuthKey,
    .set = PyCThostFtdcBrokerUserOTPParamFieldType_set_AuthKey,
    .doc = PyDoc_STR("令牌密钥"),
    },
    /// 动态令牌类型
    /// typedef char TThostFtdcOTPTypeType
    {
    .name = "OTPType",
    .get = PyCThostFtdcBrokerUserOTPParamFieldType_get_OTPType,
    .set = PyCThostFtdcBrokerUserOTPParamFieldType_set_OTPType,
    .doc = PyDoc_STR("动态令牌类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerUserOTPParamFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerUserOTPParamField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户动态令牌参数")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerUserOTPParamFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerUserOTPParamFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerUserOTPParamFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerUserOTPParamFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerUserOTPParamFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerUserOTPParamFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户动态令牌参数")},
    {Py_tp_members, PyCThostFtdcBrokerUserOTPParamFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerUserOTPParamFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerUserOTPParamFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerUserOTPParamFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerUserOTPParamFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerUserOTPParamField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerUserOTPParamFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerUserOTPParamFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerUserOTPParamFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerUserOTPParamFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerUserOTPParamFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerUserOTPParamFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerUserOTPParamFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerUserOTPParamFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerUserOTPParamField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserOTPParamField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}