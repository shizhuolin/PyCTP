
#include "PyCThostFtdcReqUserLoginWithTextField.h"

///用户发出带短信验证码的登录请求请求

static int PyCThostFtdcReqUserLoginWithTextFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "reserve1", "LoginRemark", "Text", "ClientIPPort", "ClientIPAddress", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcReqUserLoginWithTextField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqUserLoginWithTextField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqUserLoginWithTextField_UserID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_UserID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginWithTextField_Password = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_Password_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginWithTextField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_UserProductInfo_length = 0;

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo_length = 0;

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    char *CThostFtdcReqUserLoginWithTextField_ProtocolInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_ProtocolInfo_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcReqUserLoginWithTextField_MacAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_MacAddress_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcReqUserLoginWithTextField_reserve1 = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_reserve1_length = 0;

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    char *CThostFtdcReqUserLoginWithTextField_LoginRemark = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_LoginRemark_length = 0;

    /// 短信验证码文字内容
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginWithTextField_Text = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_Text_length = 0;

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    int CThostFtdcReqUserLoginWithTextField_ClientIPPort = 0;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcReqUserLoginWithTextField_ClientIPAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithTextField_ClientIPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
        , &CThostFtdcReqUserLoginWithTextField_TradingDay, &CThostFtdcReqUserLoginWithTextField_TradingDay_length
        , &CThostFtdcReqUserLoginWithTextField_BrokerID, &CThostFtdcReqUserLoginWithTextField_BrokerID_length
        , &CThostFtdcReqUserLoginWithTextField_UserID, &CThostFtdcReqUserLoginWithTextField_UserID_length
        , &CThostFtdcReqUserLoginWithTextField_Password, &CThostFtdcReqUserLoginWithTextField_Password_length
        , &CThostFtdcReqUserLoginWithTextField_UserProductInfo, &CThostFtdcReqUserLoginWithTextField_UserProductInfo_length
        , &CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo, &CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo_length
        , &CThostFtdcReqUserLoginWithTextField_ProtocolInfo, &CThostFtdcReqUserLoginWithTextField_ProtocolInfo_length
        , &CThostFtdcReqUserLoginWithTextField_MacAddress, &CThostFtdcReqUserLoginWithTextField_MacAddress_length
        , &CThostFtdcReqUserLoginWithTextField_reserve1, &CThostFtdcReqUserLoginWithTextField_reserve1_length
        , &CThostFtdcReqUserLoginWithTextField_LoginRemark, &CThostFtdcReqUserLoginWithTextField_LoginRemark_length
        , &CThostFtdcReqUserLoginWithTextField_Text, &CThostFtdcReqUserLoginWithTextField_Text_length
        , &CThostFtdcReqUserLoginWithTextField_ClientIPPort
        , &CThostFtdcReqUserLoginWithTextField_ClientIPAddress, &CThostFtdcReqUserLoginWithTextField_ClientIPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcReqUserLoginWithTextField_TradingDay != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqUserLoginWithTextField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqUserLoginWithTextField_TradingDay, CThostFtdcReqUserLoginWithTextField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqUserLoginWithTextField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqUserLoginWithTextField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqUserLoginWithTextField_BrokerID != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithTextField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqUserLoginWithTextField_BrokerID, CThostFtdcReqUserLoginWithTextField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqUserLoginWithTextField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqUserLoginWithTextField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqUserLoginWithTextField_UserID != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginWithTextField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqUserLoginWithTextField_UserID, CThostFtdcReqUserLoginWithTextField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqUserLoginWithTextField_UserID, sizeof(data->UserID));
        CThostFtdcReqUserLoginWithTextField_UserID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginWithTextField_Password != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginWithTextField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqUserLoginWithTextField_Password, CThostFtdcReqUserLoginWithTextField_Password_length);
        strncpy(data->Password, CThostFtdcReqUserLoginWithTextField_Password, sizeof(data->Password));
        CThostFtdcReqUserLoginWithTextField_Password = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginWithTextField_UserProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithTextField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcReqUserLoginWithTextField_UserProductInfo, CThostFtdcReqUserLoginWithTextField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcReqUserLoginWithTextField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcReqUserLoginWithTextField_UserProductInfo = NULL;
    }

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo_length >= (Py_ssize_t)sizeof(data->InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo_length);
            return -1;
        }
        // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
        // memcpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo, CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo_length);
        strncpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo, sizeof(data->InterfaceProductInfo));
        CThostFtdcReqUserLoginWithTextField_InterfaceProductInfo = NULL;
    }

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    if( CThostFtdcReqUserLoginWithTextField_ProtocolInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_ProtocolInfo_length >= (Py_ssize_t)sizeof(data->ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithTextField_ProtocolInfo_length);
            return -1;
        }
        // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
        // memcpy(data->ProtocolInfo, CThostFtdcReqUserLoginWithTextField_ProtocolInfo, CThostFtdcReqUserLoginWithTextField_ProtocolInfo_length);
        strncpy(data->ProtocolInfo, CThostFtdcReqUserLoginWithTextField_ProtocolInfo, sizeof(data->ProtocolInfo));
        CThostFtdcReqUserLoginWithTextField_ProtocolInfo = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcReqUserLoginWithTextField_MacAddress != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcReqUserLoginWithTextField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcReqUserLoginWithTextField_MacAddress, CThostFtdcReqUserLoginWithTextField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcReqUserLoginWithTextField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcReqUserLoginWithTextField_MacAddress = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcReqUserLoginWithTextField_reserve1 != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginWithTextField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcReqUserLoginWithTextField_reserve1, CThostFtdcReqUserLoginWithTextField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcReqUserLoginWithTextField_reserve1, sizeof(data->reserve1));
        CThostFtdcReqUserLoginWithTextField_reserve1 = NULL;
    }

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    if( CThostFtdcReqUserLoginWithTextField_LoginRemark != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_LoginRemark_length >= (Py_ssize_t)sizeof(data->LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is 35)", CThostFtdcReqUserLoginWithTextField_LoginRemark_length);
            return -1;
        }
        // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
        // memcpy(data->LoginRemark, CThostFtdcReqUserLoginWithTextField_LoginRemark, CThostFtdcReqUserLoginWithTextField_LoginRemark_length);
        strncpy(data->LoginRemark, CThostFtdcReqUserLoginWithTextField_LoginRemark, sizeof(data->LoginRemark));
        CThostFtdcReqUserLoginWithTextField_LoginRemark = NULL;
    }

    /// 短信验证码文字内容
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginWithTextField_Text != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_Text_length >= (Py_ssize_t)sizeof(data->Text)) {
            PyErr_Format(PyExc_ValueError, "Text too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginWithTextField_Text_length);
            return -1;
        }
        // memset(data->Text, 0, sizeof(data->Text));
        // memcpy(data->Text, CThostFtdcReqUserLoginWithTextField_Text, CThostFtdcReqUserLoginWithTextField_Text_length);
        strncpy(data->Text, CThostFtdcReqUserLoginWithTextField_Text, sizeof(data->Text));
        CThostFtdcReqUserLoginWithTextField_Text = NULL;
    }

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    data->ClientIPPort = CThostFtdcReqUserLoginWithTextField_ClientIPPort;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcReqUserLoginWithTextField_ClientIPAddress != NULL ) {
        if(CThostFtdcReqUserLoginWithTextField_ClientIPAddress_length >= (Py_ssize_t)sizeof(data->ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is 32)", CThostFtdcReqUserLoginWithTextField_ClientIPAddress_length);
            return -1;
        }
        // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
        // memcpy(data->ClientIPAddress, CThostFtdcReqUserLoginWithTextField_ClientIPAddress, CThostFtdcReqUserLoginWithTextField_ClientIPAddress_length);
        strncpy(data->ClientIPAddress, CThostFtdcReqUserLoginWithTextField_ClientIPAddress, sizeof(data->ClientIPAddress));
        CThostFtdcReqUserLoginWithTextField_ClientIPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_repr(PyObject *self) {

    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);

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
        , "Text", data->Text//, (Py_ssize_t)sizeof(data->Text)
        , "ClientIPPort", data->ClientIPPort
        , "ClientIPAddress", data->ClientIPAddress//, (Py_ssize_t)sizeof(data->ClientIPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithTextField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithTextField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 接口端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_InterfaceProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InterfaceProductInfo, (Py_ssize_t)sizeof(data->InterfaceProductInfo));
    return PyBytes_FromString(data->InterfaceProductInfo);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_InterfaceProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::InterfaceProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
    // memcpy(data->InterfaceProductInfo, buf, len);
    strncpy(data->InterfaceProductInfo, buf, sizeof(data->InterfaceProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 协议信息
/// typedef char TThostFtdcProtocolInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_ProtocolInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProtocolInfo, (Py_ssize_t)sizeof(data->ProtocolInfo));
    return PyBytes_FromString(data->ProtocolInfo);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_ProtocolInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::ProtocolInfo)) {
        PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
    // memcpy(data->ProtocolInfo, buf, len);
    strncpy(data->ProtocolInfo, buf, sizeof(data->ProtocolInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录备注
/// typedef char TThostFtdcLoginRemarkType[36]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_LoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginRemark, (Py_ssize_t)sizeof(data->LoginRemark));
    return PyBytes_FromString(data->LoginRemark);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_LoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::LoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
    // memcpy(data->LoginRemark, buf, len);
    strncpy(data->LoginRemark, buf, sizeof(data->LoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 短信验证码文字内容
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_Text(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Text, (Py_ssize_t)sizeof(data->Text));
    return PyBytes_FromString(data->Text);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_Text(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Text Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::Text)) {
        PyErr_SetString(PyExc_ValueError, "Text must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->Text, 0, sizeof(data->Text));
    // memcpy(data->Text, buf, len);
    strncpy(data->Text, buf, sizeof(data->Text));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 终端IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcReqUserLoginWithTextFieldType_get_ClientIPAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientIPAddress, (Py_ssize_t)sizeof(data->ClientIPAddress));
    return PyBytes_FromString(data->ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginWithTextFieldType_set_ClientIPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithTextField::ClientIPAddress)) {
        PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithTextFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(self);
    CThostFtdcReqUserLoginWithTextField *data = &(extra->data);
    // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
    // memcpy(data->ClientIPAddress, buf, len);
    strncpy(data->ClientIPAddress, buf, sizeof(data->ClientIPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqUserLoginWithTextFieldType_members[] = {
    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    {
        .name = "ClientIPPort",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqUserLoginWithTextFieldData, data.ClientIPPort),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("终端IP端口")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqUserLoginWithTextFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_TradingDay,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_BrokerID,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_UserID,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_Password,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_UserProductInfo,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "InterfaceProductInfo",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_InterfaceProductInfo,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_InterfaceProductInfo,
    .doc = PyDoc_STR("接口端产品信息"),
    },
    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    {
    .name = "ProtocolInfo",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_ProtocolInfo,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_ProtocolInfo,
    .doc = PyDoc_STR("协议信息"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_MacAddress,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_reserve1,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    {
    .name = "LoginRemark",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_LoginRemark,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_LoginRemark,
    .doc = PyDoc_STR("登录备注"),
    },
    /// 短信验证码文字内容
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Text",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_Text,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_Text,
    .doc = PyDoc_STR("短信验证码文字内容"),
    },
    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "ClientIPAddress",
    .get = PyCThostFtdcReqUserLoginWithTextFieldType_get_ClientIPAddress,
    .set = PyCThostFtdcReqUserLoginWithTextFieldType_set_ClientIPAddress,
    .doc = PyDoc_STR("终端IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqUserLoginWithTextFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqUserLoginWithTextField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户发出带短信验证码的登录请求请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqUserLoginWithTextFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqUserLoginWithTextFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqUserLoginWithTextFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqUserLoginWithTextFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqUserLoginWithTextFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqUserLoginWithTextFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户发出带短信验证码的登录请求请求")},
    {Py_tp_members, PyCThostFtdcReqUserLoginWithTextFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqUserLoginWithTextFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqUserLoginWithTextFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqUserLoginWithTextFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqUserLoginWithTextFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqUserLoginWithTextField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginWithTextFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginWithTextFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqUserLoginWithTextFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqUserLoginWithTextFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqUserLoginWithTextFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqUserLoginWithTextFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqUserLoginWithTextFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqUserLoginWithTextFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginWithTextField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginWithTextField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}