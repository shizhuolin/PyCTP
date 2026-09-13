
#include "PyCThostFtdcReqUserLoginWithCaptchaField.h"

///用户发出带图形验证码的登录请求请求

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "reserve1", "LoginRemark", "Captcha", "ClientIPPort", "ClientIPAddress", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcReqUserLoginWithCaptchaField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqUserLoginWithCaptchaField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqUserLoginWithCaptchaField_UserID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_UserID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginWithCaptchaField_Password = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_Password_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo_length = 0;

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo_length = 0;

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    char *CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcReqUserLoginWithCaptchaField_MacAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_MacAddress_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcReqUserLoginWithCaptchaField_reserve1 = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_reserve1_length = 0;

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    char *CThostFtdcReqUserLoginWithCaptchaField_LoginRemark = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_LoginRemark_length = 0;

    /// 图形验证码的文字内容
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginWithCaptchaField_Captcha = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_Captcha_length = 0;

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    int CThostFtdcReqUserLoginWithCaptchaField_ClientIPPort = 0;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
        , &CThostFtdcReqUserLoginWithCaptchaField_TradingDay, &CThostFtdcReqUserLoginWithCaptchaField_TradingDay_length
        , &CThostFtdcReqUserLoginWithCaptchaField_BrokerID, &CThostFtdcReqUserLoginWithCaptchaField_BrokerID_length
        , &CThostFtdcReqUserLoginWithCaptchaField_UserID, &CThostFtdcReqUserLoginWithCaptchaField_UserID_length
        , &CThostFtdcReqUserLoginWithCaptchaField_Password, &CThostFtdcReqUserLoginWithCaptchaField_Password_length
        , &CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo, &CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo_length
        , &CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo, &CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo_length
        , &CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo, &CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo_length
        , &CThostFtdcReqUserLoginWithCaptchaField_MacAddress, &CThostFtdcReqUserLoginWithCaptchaField_MacAddress_length
        , &CThostFtdcReqUserLoginWithCaptchaField_reserve1, &CThostFtdcReqUserLoginWithCaptchaField_reserve1_length
        , &CThostFtdcReqUserLoginWithCaptchaField_LoginRemark, &CThostFtdcReqUserLoginWithCaptchaField_LoginRemark_length
        , &CThostFtdcReqUserLoginWithCaptchaField_Captcha, &CThostFtdcReqUserLoginWithCaptchaField_Captcha_length
        , &CThostFtdcReqUserLoginWithCaptchaField_ClientIPPort
        , &CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress, &CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcReqUserLoginWithCaptchaField_TradingDay != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqUserLoginWithCaptchaField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqUserLoginWithCaptchaField_TradingDay, CThostFtdcReqUserLoginWithCaptchaField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqUserLoginWithCaptchaField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqUserLoginWithCaptchaField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqUserLoginWithCaptchaField_BrokerID != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithCaptchaField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqUserLoginWithCaptchaField_BrokerID, CThostFtdcReqUserLoginWithCaptchaField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqUserLoginWithCaptchaField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqUserLoginWithCaptchaField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqUserLoginWithCaptchaField_UserID != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginWithCaptchaField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqUserLoginWithCaptchaField_UserID, CThostFtdcReqUserLoginWithCaptchaField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqUserLoginWithCaptchaField_UserID, sizeof(data->UserID));
        CThostFtdcReqUserLoginWithCaptchaField_UserID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginWithCaptchaField_Password != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginWithCaptchaField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqUserLoginWithCaptchaField_Password, CThostFtdcReqUserLoginWithCaptchaField_Password_length);
        strncpy(data->Password, CThostFtdcReqUserLoginWithCaptchaField_Password, sizeof(data->Password));
        CThostFtdcReqUserLoginWithCaptchaField_Password = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo, CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcReqUserLoginWithCaptchaField_UserProductInfo = NULL;
    }

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo_length >= (Py_ssize_t)sizeof(data->InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo_length);
            return -1;
        }
        // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
        // memcpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo, CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo_length);
        strncpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo, sizeof(data->InterfaceProductInfo));
        CThostFtdcReqUserLoginWithCaptchaField_InterfaceProductInfo = NULL;
    }

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    if( CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo_length >= (Py_ssize_t)sizeof(data->ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo_length);
            return -1;
        }
        // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
        // memcpy(data->ProtocolInfo, CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo, CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo_length);
        strncpy(data->ProtocolInfo, CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo, sizeof(data->ProtocolInfo));
        CThostFtdcReqUserLoginWithCaptchaField_ProtocolInfo = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcReqUserLoginWithCaptchaField_MacAddress != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcReqUserLoginWithCaptchaField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcReqUserLoginWithCaptchaField_MacAddress, CThostFtdcReqUserLoginWithCaptchaField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcReqUserLoginWithCaptchaField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcReqUserLoginWithCaptchaField_MacAddress = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcReqUserLoginWithCaptchaField_reserve1 != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginWithCaptchaField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcReqUserLoginWithCaptchaField_reserve1, CThostFtdcReqUserLoginWithCaptchaField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcReqUserLoginWithCaptchaField_reserve1, sizeof(data->reserve1));
        CThostFtdcReqUserLoginWithCaptchaField_reserve1 = NULL;
    }

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    if( CThostFtdcReqUserLoginWithCaptchaField_LoginRemark != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_LoginRemark_length >= (Py_ssize_t)sizeof(data->LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is 35)", CThostFtdcReqUserLoginWithCaptchaField_LoginRemark_length);
            return -1;
        }
        // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
        // memcpy(data->LoginRemark, CThostFtdcReqUserLoginWithCaptchaField_LoginRemark, CThostFtdcReqUserLoginWithCaptchaField_LoginRemark_length);
        strncpy(data->LoginRemark, CThostFtdcReqUserLoginWithCaptchaField_LoginRemark, sizeof(data->LoginRemark));
        CThostFtdcReqUserLoginWithCaptchaField_LoginRemark = NULL;
    }

    /// 图形验证码的文字内容
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginWithCaptchaField_Captcha != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_Captcha_length >= (Py_ssize_t)sizeof(data->Captcha)) {
            PyErr_Format(PyExc_ValueError, "Captcha too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginWithCaptchaField_Captcha_length);
            return -1;
        }
        // memset(data->Captcha, 0, sizeof(data->Captcha));
        // memcpy(data->Captcha, CThostFtdcReqUserLoginWithCaptchaField_Captcha, CThostFtdcReqUserLoginWithCaptchaField_Captcha_length);
        strncpy(data->Captcha, CThostFtdcReqUserLoginWithCaptchaField_Captcha, sizeof(data->Captcha));
        CThostFtdcReqUserLoginWithCaptchaField_Captcha = NULL;
    }

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    data->ClientIPPort = CThostFtdcReqUserLoginWithCaptchaField_ClientIPPort;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress != NULL ) {
        if(CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress_length >= (Py_ssize_t)sizeof(data->ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is 32)", CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress_length);
            return -1;
        }
        // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
        // memcpy(data->ClientIPAddress, CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress, CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress_length);
        strncpy(data->ClientIPAddress, CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress, sizeof(data->ClientIPAddress));
        CThostFtdcReqUserLoginWithCaptchaField_ClientIPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_repr(PyObject *self) {

    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "InterfaceProductInfo", data->InterfaceProductInfo//, (Py_ssize_t)sizeof(data->InterfaceProductInfo)
        , "ProtocolInfo", data->ProtocolInfo//, (Py_ssize_t)sizeof(data->ProtocolInfo)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "LoginRemark", data->LoginRemark//, (Py_ssize_t)sizeof(data->LoginRemark)
        , "Captcha", data->Captcha//, (Py_ssize_t)sizeof(data->Captcha)
        , "ClientIPPort", data->ClientIPPort
        , "ClientIPAddress", data->ClientIPAddress//, (Py_ssize_t)sizeof(data->ClientIPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithCaptchaField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithCaptchaField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 接口端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_InterfaceProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InterfaceProductInfo, (Py_ssize_t)sizeof(data->InterfaceProductInfo));
    return PyBytes_FromString(data->InterfaceProductInfo);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_InterfaceProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::InterfaceProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
    // memcpy(data->InterfaceProductInfo, buf, len);
    strncpy(data->InterfaceProductInfo, buf, sizeof(data->InterfaceProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 协议信息
/// typedef char TThostFtdcProtocolInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_ProtocolInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProtocolInfo, (Py_ssize_t)sizeof(data->ProtocolInfo));
    return PyBytes_FromString(data->ProtocolInfo);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_ProtocolInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::ProtocolInfo)) {
        PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
    // memcpy(data->ProtocolInfo, buf, len);
    strncpy(data->ProtocolInfo, buf, sizeof(data->ProtocolInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录备注
/// typedef char TThostFtdcLoginRemarkType[36]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_LoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginRemark, (Py_ssize_t)sizeof(data->LoginRemark));
    return PyBytes_FromString(data->LoginRemark);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_LoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::LoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
    // memcpy(data->LoginRemark, buf, len);
    strncpy(data->LoginRemark, buf, sizeof(data->LoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 图形验证码的文字内容
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_Captcha(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Captcha, (Py_ssize_t)sizeof(data->Captcha));
    return PyBytes_FromString(data->Captcha);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_Captcha(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Captcha Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::Captcha)) {
        PyErr_SetString(PyExc_ValueError, "Captcha must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->Captcha, 0, sizeof(data->Captcha));
    // memcpy(data->Captcha, buf, len);
    strncpy(data->Captcha, buf, sizeof(data->Captcha));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 终端IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_ClientIPAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientIPAddress, (Py_ssize_t)sizeof(data->ClientIPAddress));
    return PyBytes_FromString(data->ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_ClientIPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithCaptchaField::ClientIPAddress)) {
        PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(self);
    CThostFtdcReqUserLoginWithCaptchaField *data = &(extra->data);
    // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
    // memcpy(data->ClientIPAddress, buf, len);
    strncpy(data->ClientIPAddress, buf, sizeof(data->ClientIPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqUserLoginWithCaptchaFieldType_members[] = {
    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    {
        .name = "ClientIPPort",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqUserLoginWithCaptchaFieldData, data.ClientIPPort),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("终端IP端口")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqUserLoginWithCaptchaFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_TradingDay,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_BrokerID,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_UserID,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_Password,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_UserProductInfo,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "InterfaceProductInfo",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_InterfaceProductInfo,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_InterfaceProductInfo,
    .doc = PyDoc_STR("接口端产品信息"),
    },
    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    {
    .name = "ProtocolInfo",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_ProtocolInfo,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_ProtocolInfo,
    .doc = PyDoc_STR("协议信息"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_MacAddress,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_reserve1,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    {
    .name = "LoginRemark",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_LoginRemark,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_LoginRemark,
    .doc = PyDoc_STR("登录备注"),
    },
    /// 图形验证码的文字内容
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Captcha",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_Captcha,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_Captcha,
    .doc = PyDoc_STR("图形验证码的文字内容"),
    },
    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "ClientIPAddress",
    .get = PyCThostFtdcReqUserLoginWithCaptchaFieldType_get_ClientIPAddress,
    .set = PyCThostFtdcReqUserLoginWithCaptchaFieldType_set_ClientIPAddress,
    .doc = PyDoc_STR("终端IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqUserLoginWithCaptchaFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqUserLoginWithCaptchaField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户发出带图形验证码的登录请求请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqUserLoginWithCaptchaFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqUserLoginWithCaptchaFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqUserLoginWithCaptchaFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqUserLoginWithCaptchaFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqUserLoginWithCaptchaFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqUserLoginWithCaptchaFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户发出带图形验证码的登录请求请求")},
    {Py_tp_members, PyCThostFtdcReqUserLoginWithCaptchaFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqUserLoginWithCaptchaFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqUserLoginWithCaptchaFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqUserLoginWithCaptchaFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqUserLoginWithCaptchaFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqUserLoginWithCaptchaField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginWithCaptchaFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginWithCaptchaFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqUserLoginWithCaptchaFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqUserLoginWithCaptchaFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqUserLoginWithCaptchaFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqUserLoginWithCaptchaFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqUserLoginWithCaptchaFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqUserLoginWithCaptchaFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginWithCaptchaField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginWithCaptchaField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}