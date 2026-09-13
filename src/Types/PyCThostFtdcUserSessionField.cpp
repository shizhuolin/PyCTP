
#include "PyCThostFtdcUserSessionField.h"

///用户会话

static int PyCThostFtdcUserSessionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FrontID", "SessionID", "BrokerID", "UserID", "LoginDate", "LoginTime", "reserve1", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "LoginRemark", "IPAddress", NULL };


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcUserSessionField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcUserSessionField_SessionID = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserSessionField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserSessionField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserSessionField_UserID = NULL;
    Py_ssize_t CThostFtdcUserSessionField_UserID_length = 0;

    /// 登录日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcUserSessionField_LoginDate = NULL;
    Py_ssize_t CThostFtdcUserSessionField_LoginDate_length = 0;

    /// 登录时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcUserSessionField_LoginTime = NULL;
    Py_ssize_t CThostFtdcUserSessionField_LoginTime_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcUserSessionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcUserSessionField_reserve1_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcUserSessionField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcUserSessionField_UserProductInfo_length = 0;

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcUserSessionField_InterfaceProductInfo = NULL;
    Py_ssize_t CThostFtdcUserSessionField_InterfaceProductInfo_length = 0;

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    char *CThostFtdcUserSessionField_ProtocolInfo = NULL;
    Py_ssize_t CThostFtdcUserSessionField_ProtocolInfo_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcUserSessionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcUserSessionField_MacAddress_length = 0;

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    char *CThostFtdcUserSessionField_LoginRemark = NULL;
    Py_ssize_t CThostFtdcUserSessionField_LoginRemark_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcUserSessionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcUserSessionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#y#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcUserSessionField_FrontID
        , &CThostFtdcUserSessionField_SessionID
        , &CThostFtdcUserSessionField_BrokerID, &CThostFtdcUserSessionField_BrokerID_length
        , &CThostFtdcUserSessionField_UserID, &CThostFtdcUserSessionField_UserID_length
        , &CThostFtdcUserSessionField_LoginDate, &CThostFtdcUserSessionField_LoginDate_length
        , &CThostFtdcUserSessionField_LoginTime, &CThostFtdcUserSessionField_LoginTime_length
        , &CThostFtdcUserSessionField_reserve1, &CThostFtdcUserSessionField_reserve1_length
        , &CThostFtdcUserSessionField_UserProductInfo, &CThostFtdcUserSessionField_UserProductInfo_length
        , &CThostFtdcUserSessionField_InterfaceProductInfo, &CThostFtdcUserSessionField_InterfaceProductInfo_length
        , &CThostFtdcUserSessionField_ProtocolInfo, &CThostFtdcUserSessionField_ProtocolInfo_length
        , &CThostFtdcUserSessionField_MacAddress, &CThostFtdcUserSessionField_MacAddress_length
        , &CThostFtdcUserSessionField_LoginRemark, &CThostFtdcUserSessionField_LoginRemark_length
        , &CThostFtdcUserSessionField_IPAddress, &CThostFtdcUserSessionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcUserSessionField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcUserSessionField_SessionID;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserSessionField_BrokerID != NULL ) {
        if(CThostFtdcUserSessionField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserSessionField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserSessionField_BrokerID, CThostFtdcUserSessionField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserSessionField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserSessionField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserSessionField_UserID != NULL ) {
        if(CThostFtdcUserSessionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserSessionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserSessionField_UserID, CThostFtdcUserSessionField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserSessionField_UserID, sizeof(data->UserID));
        CThostFtdcUserSessionField_UserID = NULL;
    }

    /// 登录日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcUserSessionField_LoginDate != NULL ) {
        if(CThostFtdcUserSessionField_LoginDate_length >= (Py_ssize_t)sizeof(data->LoginDate)) {
            PyErr_Format(PyExc_ValueError, "LoginDate too long: length=%zd (max allowed is 8)", CThostFtdcUserSessionField_LoginDate_length);
            return -1;
        }
        // memset(data->LoginDate, 0, sizeof(data->LoginDate));
        // memcpy(data->LoginDate, CThostFtdcUserSessionField_LoginDate, CThostFtdcUserSessionField_LoginDate_length);
        strncpy(data->LoginDate, CThostFtdcUserSessionField_LoginDate, sizeof(data->LoginDate));
        CThostFtdcUserSessionField_LoginDate = NULL;
    }

    /// 登录时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcUserSessionField_LoginTime != NULL ) {
        if(CThostFtdcUserSessionField_LoginTime_length >= (Py_ssize_t)sizeof(data->LoginTime)) {
            PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is 8)", CThostFtdcUserSessionField_LoginTime_length);
            return -1;
        }
        // memset(data->LoginTime, 0, sizeof(data->LoginTime));
        // memcpy(data->LoginTime, CThostFtdcUserSessionField_LoginTime, CThostFtdcUserSessionField_LoginTime_length);
        strncpy(data->LoginTime, CThostFtdcUserSessionField_LoginTime, sizeof(data->LoginTime));
        CThostFtdcUserSessionField_LoginTime = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcUserSessionField_reserve1 != NULL ) {
        if(CThostFtdcUserSessionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcUserSessionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcUserSessionField_reserve1, CThostFtdcUserSessionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcUserSessionField_reserve1, sizeof(data->reserve1));
        CThostFtdcUserSessionField_reserve1 = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcUserSessionField_UserProductInfo != NULL ) {
        if(CThostFtdcUserSessionField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcUserSessionField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcUserSessionField_UserProductInfo, CThostFtdcUserSessionField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcUserSessionField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcUserSessionField_UserProductInfo = NULL;
    }

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcUserSessionField_InterfaceProductInfo != NULL ) {
        if(CThostFtdcUserSessionField_InterfaceProductInfo_length >= (Py_ssize_t)sizeof(data->InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcUserSessionField_InterfaceProductInfo_length);
            return -1;
        }
        // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
        // memcpy(data->InterfaceProductInfo, CThostFtdcUserSessionField_InterfaceProductInfo, CThostFtdcUserSessionField_InterfaceProductInfo_length);
        strncpy(data->InterfaceProductInfo, CThostFtdcUserSessionField_InterfaceProductInfo, sizeof(data->InterfaceProductInfo));
        CThostFtdcUserSessionField_InterfaceProductInfo = NULL;
    }

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    if( CThostFtdcUserSessionField_ProtocolInfo != NULL ) {
        if(CThostFtdcUserSessionField_ProtocolInfo_length >= (Py_ssize_t)sizeof(data->ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is 10)", CThostFtdcUserSessionField_ProtocolInfo_length);
            return -1;
        }
        // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
        // memcpy(data->ProtocolInfo, CThostFtdcUserSessionField_ProtocolInfo, CThostFtdcUserSessionField_ProtocolInfo_length);
        strncpy(data->ProtocolInfo, CThostFtdcUserSessionField_ProtocolInfo, sizeof(data->ProtocolInfo));
        CThostFtdcUserSessionField_ProtocolInfo = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcUserSessionField_MacAddress != NULL ) {
        if(CThostFtdcUserSessionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcUserSessionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcUserSessionField_MacAddress, CThostFtdcUserSessionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcUserSessionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcUserSessionField_MacAddress = NULL;
    }

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    if( CThostFtdcUserSessionField_LoginRemark != NULL ) {
        if(CThostFtdcUserSessionField_LoginRemark_length >= (Py_ssize_t)sizeof(data->LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is 35)", CThostFtdcUserSessionField_LoginRemark_length);
            return -1;
        }
        // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
        // memcpy(data->LoginRemark, CThostFtdcUserSessionField_LoginRemark, CThostFtdcUserSessionField_LoginRemark_length);
        strncpy(data->LoginRemark, CThostFtdcUserSessionField_LoginRemark, sizeof(data->LoginRemark));
        CThostFtdcUserSessionField_LoginRemark = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcUserSessionField_IPAddress != NULL ) {
        if(CThostFtdcUserSessionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcUserSessionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcUserSessionField_IPAddress, CThostFtdcUserSessionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcUserSessionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcUserSessionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserSessionFieldType_repr(PyObject *self) {

    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "LoginDate", data->LoginDate//, (Py_ssize_t)sizeof(data->LoginDate)
        , "LoginTime", data->LoginTime//, (Py_ssize_t)sizeof(data->LoginTime)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "InterfaceProductInfo", data->InterfaceProductInfo//, (Py_ssize_t)sizeof(data->InterfaceProductInfo)
        , "ProtocolInfo", data->ProtocolInfo//, (Py_ssize_t)sizeof(data->ProtocolInfo)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "LoginRemark", data->LoginRemark//, (Py_ssize_t)sizeof(data->LoginRemark)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserSessionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserSessionField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserSessionFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserSessionFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserSessionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserSessionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcUserSessionFieldType_get_LoginDate(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginDate, (Py_ssize_t)sizeof(data->LoginDate));
    return PyBytes_FromString(data->LoginDate);
}

static int PyCThostFtdcUserSessionFieldType_set_LoginDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::LoginDate)) {
        PyErr_SetString(PyExc_ValueError, "LoginDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->LoginDate, 0, sizeof(data->LoginDate));
    // memcpy(data->LoginDate, buf, len);
    strncpy(data->LoginDate, buf, sizeof(data->LoginDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcUserSessionFieldType_get_LoginTime(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginTime, (Py_ssize_t)sizeof(data->LoginTime));
    return PyBytes_FromString(data->LoginTime);
}

static int PyCThostFtdcUserSessionFieldType_set_LoginTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::LoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LoginTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->LoginTime, 0, sizeof(data->LoginTime));
    // memcpy(data->LoginTime, buf, len);
    strncpy(data->LoginTime, buf, sizeof(data->LoginTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcUserSessionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcUserSessionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcUserSessionFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcUserSessionFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 接口端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcUserSessionFieldType_get_InterfaceProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InterfaceProductInfo, (Py_ssize_t)sizeof(data->InterfaceProductInfo));
    return PyBytes_FromString(data->InterfaceProductInfo);
}

static int PyCThostFtdcUserSessionFieldType_set_InterfaceProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::InterfaceProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
    // memcpy(data->InterfaceProductInfo, buf, len);
    strncpy(data->InterfaceProductInfo, buf, sizeof(data->InterfaceProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 协议信息
/// typedef char TThostFtdcProtocolInfoType[11]
static PyObject *PyCThostFtdcUserSessionFieldType_get_ProtocolInfo(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProtocolInfo, (Py_ssize_t)sizeof(data->ProtocolInfo));
    return PyBytes_FromString(data->ProtocolInfo);
}

static int PyCThostFtdcUserSessionFieldType_set_ProtocolInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::ProtocolInfo)) {
        PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
    // memcpy(data->ProtocolInfo, buf, len);
    strncpy(data->ProtocolInfo, buf, sizeof(data->ProtocolInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcUserSessionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcUserSessionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录备注
/// typedef char TThostFtdcLoginRemarkType[36]
static PyObject *PyCThostFtdcUserSessionFieldType_get_LoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginRemark, (Py_ssize_t)sizeof(data->LoginRemark));
    return PyBytes_FromString(data->LoginRemark);
}

static int PyCThostFtdcUserSessionFieldType_set_LoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::LoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
    // memcpy(data->LoginRemark, buf, len);
    strncpy(data->LoginRemark, buf, sizeof(data->LoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcUserSessionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcUserSessionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSessionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSessionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(self);
    CThostFtdcUserSessionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserSessionFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcUserSessionFieldData, data.FrontID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("前置编号")
    },
    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcUserSessionFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserSessionFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserSessionFieldType_get_BrokerID,
    .set = PyCThostFtdcUserSessionFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserSessionFieldType_get_UserID,
    .set = PyCThostFtdcUserSessionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 登录日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "LoginDate",
    .get = PyCThostFtdcUserSessionFieldType_get_LoginDate,
    .set = PyCThostFtdcUserSessionFieldType_set_LoginDate,
    .doc = PyDoc_STR("登录日期"),
    },
    /// 登录时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "LoginTime",
    .get = PyCThostFtdcUserSessionFieldType_get_LoginTime,
    .set = PyCThostFtdcUserSessionFieldType_set_LoginTime,
    .doc = PyDoc_STR("登录时间"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcUserSessionFieldType_get_reserve1,
    .set = PyCThostFtdcUserSessionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcUserSessionFieldType_get_UserProductInfo,
    .set = PyCThostFtdcUserSessionFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "InterfaceProductInfo",
    .get = PyCThostFtdcUserSessionFieldType_get_InterfaceProductInfo,
    .set = PyCThostFtdcUserSessionFieldType_set_InterfaceProductInfo,
    .doc = PyDoc_STR("接口端产品信息"),
    },
    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    {
    .name = "ProtocolInfo",
    .get = PyCThostFtdcUserSessionFieldType_get_ProtocolInfo,
    .set = PyCThostFtdcUserSessionFieldType_set_ProtocolInfo,
    .doc = PyDoc_STR("协议信息"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcUserSessionFieldType_get_MacAddress,
    .set = PyCThostFtdcUserSessionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    {
    .name = "LoginRemark",
    .get = PyCThostFtdcUserSessionFieldType_get_LoginRemark,
    .set = PyCThostFtdcUserSessionFieldType_set_LoginRemark,
    .doc = PyDoc_STR("登录备注"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcUserSessionFieldType_get_IPAddress,
    .set = PyCThostFtdcUserSessionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserSessionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserSessionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户会话")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserSessionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserSessionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserSessionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserSessionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserSessionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserSessionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户会话")},
    {Py_tp_members, PyCThostFtdcUserSessionFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserSessionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserSessionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserSessionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserSessionFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserSessionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserSessionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserSessionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserSessionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserSessionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserSessionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserSessionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserSessionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserSessionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserSessionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserSessionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}