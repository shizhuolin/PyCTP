
#include "PyCThostFtdcAuthenticationInfoField.h"

///客户端认证信息

static int PyCThostFtdcAuthenticationInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "UserProductInfo", "AuthInfo", "IsResult", "AppID", "AppType", "reserve1", "ClientIPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcAuthenticationInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcAuthenticationInfoField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcAuthenticationInfoField_UserID = NULL;
    Py_ssize_t CThostFtdcAuthenticationInfoField_UserID_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcAuthenticationInfoField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcAuthenticationInfoField_UserProductInfo_length = 0;

    /// 认证信息
    /// typedef char TThostFtdcAuthInfoType[129]
    char *CThostFtdcAuthenticationInfoField_AuthInfo = NULL;
    Py_ssize_t CThostFtdcAuthenticationInfoField_AuthInfo_length = 0;

    /// 是否为认证结果
    /// typedef int TThostFtdcBoolType
    int CThostFtdcAuthenticationInfoField_IsResult = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcAuthenticationInfoField_AppID = NULL;
    Py_ssize_t CThostFtdcAuthenticationInfoField_AppID_length = 0;

    /// App类型
    /// typedef char TThostFtdcAppTypeType
    char CThostFtdcAuthenticationInfoField_AppType = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcAuthenticationInfoField_reserve1 = NULL;
    Py_ssize_t CThostFtdcAuthenticationInfoField_reserve1_length = 0;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcAuthenticationInfoField_ClientIPAddress = NULL;
    Py_ssize_t CThostFtdcAuthenticationInfoField_ClientIPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cy#y#", (char **)kwlist
        , &CThostFtdcAuthenticationInfoField_BrokerID, &CThostFtdcAuthenticationInfoField_BrokerID_length
        , &CThostFtdcAuthenticationInfoField_UserID, &CThostFtdcAuthenticationInfoField_UserID_length
        , &CThostFtdcAuthenticationInfoField_UserProductInfo, &CThostFtdcAuthenticationInfoField_UserProductInfo_length
        , &CThostFtdcAuthenticationInfoField_AuthInfo, &CThostFtdcAuthenticationInfoField_AuthInfo_length
        , &CThostFtdcAuthenticationInfoField_IsResult
        , &CThostFtdcAuthenticationInfoField_AppID, &CThostFtdcAuthenticationInfoField_AppID_length
        , &CThostFtdcAuthenticationInfoField_AppType
        , &CThostFtdcAuthenticationInfoField_reserve1, &CThostFtdcAuthenticationInfoField_reserve1_length
        , &CThostFtdcAuthenticationInfoField_ClientIPAddress, &CThostFtdcAuthenticationInfoField_ClientIPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcAuthenticationInfoField_BrokerID != NULL ) {
        if(CThostFtdcAuthenticationInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcAuthenticationInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcAuthenticationInfoField_BrokerID, CThostFtdcAuthenticationInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcAuthenticationInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcAuthenticationInfoField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcAuthenticationInfoField_UserID != NULL ) {
        if(CThostFtdcAuthenticationInfoField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcAuthenticationInfoField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcAuthenticationInfoField_UserID, CThostFtdcAuthenticationInfoField_UserID_length);
        strncpy(data->UserID, CThostFtdcAuthenticationInfoField_UserID, sizeof(data->UserID));
        CThostFtdcAuthenticationInfoField_UserID = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcAuthenticationInfoField_UserProductInfo != NULL ) {
        if(CThostFtdcAuthenticationInfoField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcAuthenticationInfoField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcAuthenticationInfoField_UserProductInfo, CThostFtdcAuthenticationInfoField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcAuthenticationInfoField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcAuthenticationInfoField_UserProductInfo = NULL;
    }

    /// 认证信息
    /// typedef char TThostFtdcAuthInfoType[129]
    if( CThostFtdcAuthenticationInfoField_AuthInfo != NULL ) {
        if(CThostFtdcAuthenticationInfoField_AuthInfo_length >= (Py_ssize_t)sizeof(data->AuthInfo)) {
            PyErr_Format(PyExc_ValueError, "AuthInfo too long: length=%zd (max allowed is 128)", CThostFtdcAuthenticationInfoField_AuthInfo_length);
            return -1;
        }
        // memset(data->AuthInfo, 0, sizeof(data->AuthInfo));
        // memcpy(data->AuthInfo, CThostFtdcAuthenticationInfoField_AuthInfo, CThostFtdcAuthenticationInfoField_AuthInfo_length);
        strncpy(data->AuthInfo, CThostFtdcAuthenticationInfoField_AuthInfo, sizeof(data->AuthInfo));
        CThostFtdcAuthenticationInfoField_AuthInfo = NULL;
    }

    /// 是否为认证结果
    /// typedef int TThostFtdcBoolType
    data->IsResult = CThostFtdcAuthenticationInfoField_IsResult;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcAuthenticationInfoField_AppID != NULL ) {
        if(CThostFtdcAuthenticationInfoField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcAuthenticationInfoField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcAuthenticationInfoField_AppID, CThostFtdcAuthenticationInfoField_AppID_length);
        strncpy(data->AppID, CThostFtdcAuthenticationInfoField_AppID, sizeof(data->AppID));
        CThostFtdcAuthenticationInfoField_AppID = NULL;
    }

    /// App类型
    /// typedef char TThostFtdcAppTypeType
    data->AppType = CThostFtdcAuthenticationInfoField_AppType;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcAuthenticationInfoField_reserve1 != NULL ) {
        if(CThostFtdcAuthenticationInfoField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcAuthenticationInfoField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcAuthenticationInfoField_reserve1, CThostFtdcAuthenticationInfoField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcAuthenticationInfoField_reserve1, sizeof(data->reserve1));
        CThostFtdcAuthenticationInfoField_reserve1 = NULL;
    }

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcAuthenticationInfoField_ClientIPAddress != NULL ) {
        if(CThostFtdcAuthenticationInfoField_ClientIPAddress_length >= (Py_ssize_t)sizeof(data->ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is 32)", CThostFtdcAuthenticationInfoField_ClientIPAddress_length);
            return -1;
        }
        // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
        // memcpy(data->ClientIPAddress, CThostFtdcAuthenticationInfoField_ClientIPAddress, CThostFtdcAuthenticationInfoField_ClientIPAddress_length);
        strncpy(data->ClientIPAddress, CThostFtdcAuthenticationInfoField_ClientIPAddress, sizeof(data->ClientIPAddress));
        CThostFtdcAuthenticationInfoField_ClientIPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcAuthenticationInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "AuthInfo", data->AuthInfo//, (Py_ssize_t)sizeof(data->AuthInfo)
        , "IsResult", data->IsResult
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
        , "AppType", data->AppType
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ClientIPAddress", data->ClientIPAddress//, (Py_ssize_t)sizeof(data->ClientIPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthenticationInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthenticationInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcAuthenticationInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcAuthenticationInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthenticationInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcAuthenticationInfoFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcAuthenticationInfoFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthenticationInfoField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcAuthenticationInfoFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcAuthenticationInfoFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthenticationInfoField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 认证信息
/// typedef char TThostFtdcAuthInfoType[129]
static PyObject *PyCThostFtdcAuthenticationInfoFieldType_get_AuthInfo(PyObject *self, void *closure) {
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AuthInfo, (Py_ssize_t)sizeof(data->AuthInfo));
    return PyBytes_FromString(data->AuthInfo);
}

static int PyCThostFtdcAuthenticationInfoFieldType_set_AuthInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AuthInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthenticationInfoField::AuthInfo)) {
        PyErr_SetString(PyExc_ValueError, "AuthInfo must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // memset(data->AuthInfo, 0, sizeof(data->AuthInfo));
    // memcpy(data->AuthInfo, buf, len);
    strncpy(data->AuthInfo, buf, sizeof(data->AuthInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcAuthenticationInfoFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcAuthenticationInfoFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthenticationInfoField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App类型
/// typedef char TThostFtdcAppTypeType
static PyObject *PyCThostFtdcAuthenticationInfoFieldType_get_AppType(PyObject *self, void *closure) {
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AppType), 1);
}

static int PyCThostFtdcAuthenticationInfoFieldType_set_AppType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcAuthenticationInfoField::AppType)) {
        PyErr_SetString(PyExc_ValueError, "AppType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    data->AppType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcAuthenticationInfoFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcAuthenticationInfoFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthenticationInfoField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 终端IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcAuthenticationInfoFieldType_get_ClientIPAddress(PyObject *self, void *closure) {
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientIPAddress, (Py_ssize_t)sizeof(data->ClientIPAddress));
    return PyBytes_FromString(data->ClientIPAddress);
}

static int PyCThostFtdcAuthenticationInfoFieldType_set_ClientIPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcAuthenticationInfoField::ClientIPAddress)) {
        PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcAuthenticationInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcAuthenticationInfoFieldData>(self);
    CThostFtdcAuthenticationInfoField *data = &(extra->data);
    // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
    // memcpy(data->ClientIPAddress, buf, len);
    strncpy(data->ClientIPAddress, buf, sizeof(data->ClientIPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcAuthenticationInfoFieldType_members[] = {
    /// 是否为认证结果
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsResult",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcAuthenticationInfoFieldData, data.IsResult),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("是否为认证结果")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcAuthenticationInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcAuthenticationInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcAuthenticationInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcAuthenticationInfoFieldType_get_UserID,
    .set = PyCThostFtdcAuthenticationInfoFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcAuthenticationInfoFieldType_get_UserProductInfo,
    .set = PyCThostFtdcAuthenticationInfoFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 认证信息
    /// typedef char TThostFtdcAuthInfoType[129]
    {
    .name = "AuthInfo",
    .get = PyCThostFtdcAuthenticationInfoFieldType_get_AuthInfo,
    .set = PyCThostFtdcAuthenticationInfoFieldType_set_AuthInfo,
    .doc = PyDoc_STR("认证信息"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcAuthenticationInfoFieldType_get_AppID,
    .set = PyCThostFtdcAuthenticationInfoFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    /// App类型
    /// typedef char TThostFtdcAppTypeType
    {
    .name = "AppType",
    .get = PyCThostFtdcAuthenticationInfoFieldType_get_AppType,
    .set = PyCThostFtdcAuthenticationInfoFieldType_set_AppType,
    .doc = PyDoc_STR("App类型"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcAuthenticationInfoFieldType_get_reserve1,
    .set = PyCThostFtdcAuthenticationInfoFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "ClientIPAddress",
    .get = PyCThostFtdcAuthenticationInfoFieldType_get_ClientIPAddress,
    .set = PyCThostFtdcAuthenticationInfoFieldType_set_ClientIPAddress,
    .doc = PyDoc_STR("终端IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcAuthenticationInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcAuthenticationInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("客户端认证信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcAuthenticationInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcAuthenticationInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcAuthenticationInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcAuthenticationInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcAuthenticationInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcAuthenticationInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("客户端认证信息")},
    {Py_tp_members, PyCThostFtdcAuthenticationInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcAuthenticationInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcAuthenticationInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcAuthenticationInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcAuthenticationInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcAuthenticationInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcAuthenticationInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcAuthenticationInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcAuthenticationInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcAuthenticationInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcAuthenticationInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcAuthenticationInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcAuthenticationInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcAuthenticationInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcAuthenticationInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthenticationInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}