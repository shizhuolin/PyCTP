
#include "PyCThostFtdcWechatUserSystemInfoField.h"

///微信小程序等用户系统信息

static int PyCThostFtdcWechatUserSystemInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "WechatCltSysInfoLen", "WechatCltSysInfo", "ClientIPPort", "ClientLoginTime", "ClientAppID", "ClientPublicIP", "ClientLoginRemark", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcWechatUserSystemInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcWechatUserSystemInfoField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcWechatUserSystemInfoField_UserID = NULL;
    Py_ssize_t CThostFtdcWechatUserSystemInfoField_UserID_length = 0;

    /// 微信小程序等用户端系统内部信息长度
    /// typedef int TThostFtdcSystemInfoLenType
    int CThostFtdcWechatUserSystemInfoField_WechatCltSysInfoLen = 0;

    /// 微信小程序等用户端系统内部信息
    /// typedef char TThostFtdcClientSystemInfoType[273]
    char *CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo = NULL;
    Py_ssize_t CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo_length = 0;

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    int CThostFtdcWechatUserSystemInfoField_ClientIPPort = 0;

    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcWechatUserSystemInfoField_ClientLoginTime = NULL;
    Py_ssize_t CThostFtdcWechatUserSystemInfoField_ClientLoginTime_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcWechatUserSystemInfoField_ClientAppID = NULL;
    Py_ssize_t CThostFtdcWechatUserSystemInfoField_ClientAppID_length = 0;

    /// 用户公网IP
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcWechatUserSystemInfoField_ClientPublicIP = NULL;
    Py_ssize_t CThostFtdcWechatUserSystemInfoField_ClientPublicIP_length = 0;

    /// 客户登录备注2
    /// typedef char TThostFtdcClientLoginRemarkType[151]
    char *CThostFtdcWechatUserSystemInfoField_ClientLoginRemark = NULL;
    Py_ssize_t CThostFtdcWechatUserSystemInfoField_ClientLoginRemark_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iy#y#y#y#", (char **)kwlist
        , &CThostFtdcWechatUserSystemInfoField_BrokerID, &CThostFtdcWechatUserSystemInfoField_BrokerID_length
        , &CThostFtdcWechatUserSystemInfoField_UserID, &CThostFtdcWechatUserSystemInfoField_UserID_length
        , &CThostFtdcWechatUserSystemInfoField_WechatCltSysInfoLen
        , &CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo, &CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo_length
        , &CThostFtdcWechatUserSystemInfoField_ClientIPPort
        , &CThostFtdcWechatUserSystemInfoField_ClientLoginTime, &CThostFtdcWechatUserSystemInfoField_ClientLoginTime_length
        , &CThostFtdcWechatUserSystemInfoField_ClientAppID, &CThostFtdcWechatUserSystemInfoField_ClientAppID_length
        , &CThostFtdcWechatUserSystemInfoField_ClientPublicIP, &CThostFtdcWechatUserSystemInfoField_ClientPublicIP_length
        , &CThostFtdcWechatUserSystemInfoField_ClientLoginRemark, &CThostFtdcWechatUserSystemInfoField_ClientLoginRemark_length
    )) {
        return -1;
    }

    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcWechatUserSystemInfoField_BrokerID != NULL ) {
        if(CThostFtdcWechatUserSystemInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcWechatUserSystemInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcWechatUserSystemInfoField_BrokerID, CThostFtdcWechatUserSystemInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcWechatUserSystemInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcWechatUserSystemInfoField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcWechatUserSystemInfoField_UserID != NULL ) {
        if(CThostFtdcWechatUserSystemInfoField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcWechatUserSystemInfoField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcWechatUserSystemInfoField_UserID, CThostFtdcWechatUserSystemInfoField_UserID_length);
        strncpy(data->UserID, CThostFtdcWechatUserSystemInfoField_UserID, sizeof(data->UserID));
        CThostFtdcWechatUserSystemInfoField_UserID = NULL;
    }

    /// 微信小程序等用户端系统内部信息长度
    /// typedef int TThostFtdcSystemInfoLenType
    data->WechatCltSysInfoLen = CThostFtdcWechatUserSystemInfoField_WechatCltSysInfoLen;

    /// 微信小程序等用户端系统内部信息
    /// typedef char TThostFtdcClientSystemInfoType[273]
    if( CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo != NULL ) {
        if(CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo_length >= (Py_ssize_t)sizeof(data->WechatCltSysInfo)) {
            PyErr_Format(PyExc_ValueError, "WechatCltSysInfo too long: length=%zd (max allowed is 272)", CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo_length);
            return -1;
        }
        // memset(data->WechatCltSysInfo, 0, sizeof(data->WechatCltSysInfo));
        // memcpy(data->WechatCltSysInfo, CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo, CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo_length);
        strncpy(data->WechatCltSysInfo, CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo, sizeof(data->WechatCltSysInfo));
        CThostFtdcWechatUserSystemInfoField_WechatCltSysInfo = NULL;
    }

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    data->ClientIPPort = CThostFtdcWechatUserSystemInfoField_ClientIPPort;

    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcWechatUserSystemInfoField_ClientLoginTime != NULL ) {
        if(CThostFtdcWechatUserSystemInfoField_ClientLoginTime_length >= (Py_ssize_t)sizeof(data->ClientLoginTime)) {
            PyErr_Format(PyExc_ValueError, "ClientLoginTime too long: length=%zd (max allowed is 8)", CThostFtdcWechatUserSystemInfoField_ClientLoginTime_length);
            return -1;
        }
        // memset(data->ClientLoginTime, 0, sizeof(data->ClientLoginTime));
        // memcpy(data->ClientLoginTime, CThostFtdcWechatUserSystemInfoField_ClientLoginTime, CThostFtdcWechatUserSystemInfoField_ClientLoginTime_length);
        strncpy(data->ClientLoginTime, CThostFtdcWechatUserSystemInfoField_ClientLoginTime, sizeof(data->ClientLoginTime));
        CThostFtdcWechatUserSystemInfoField_ClientLoginTime = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcWechatUserSystemInfoField_ClientAppID != NULL ) {
        if(CThostFtdcWechatUserSystemInfoField_ClientAppID_length >= (Py_ssize_t)sizeof(data->ClientAppID)) {
            PyErr_Format(PyExc_ValueError, "ClientAppID too long: length=%zd (max allowed is 32)", CThostFtdcWechatUserSystemInfoField_ClientAppID_length);
            return -1;
        }
        // memset(data->ClientAppID, 0, sizeof(data->ClientAppID));
        // memcpy(data->ClientAppID, CThostFtdcWechatUserSystemInfoField_ClientAppID, CThostFtdcWechatUserSystemInfoField_ClientAppID_length);
        strncpy(data->ClientAppID, CThostFtdcWechatUserSystemInfoField_ClientAppID, sizeof(data->ClientAppID));
        CThostFtdcWechatUserSystemInfoField_ClientAppID = NULL;
    }

    /// 用户公网IP
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcWechatUserSystemInfoField_ClientPublicIP != NULL ) {
        if(CThostFtdcWechatUserSystemInfoField_ClientPublicIP_length >= (Py_ssize_t)sizeof(data->ClientPublicIP)) {
            PyErr_Format(PyExc_ValueError, "ClientPublicIP too long: length=%zd (max allowed is 32)", CThostFtdcWechatUserSystemInfoField_ClientPublicIP_length);
            return -1;
        }
        // memset(data->ClientPublicIP, 0, sizeof(data->ClientPublicIP));
        // memcpy(data->ClientPublicIP, CThostFtdcWechatUserSystemInfoField_ClientPublicIP, CThostFtdcWechatUserSystemInfoField_ClientPublicIP_length);
        strncpy(data->ClientPublicIP, CThostFtdcWechatUserSystemInfoField_ClientPublicIP, sizeof(data->ClientPublicIP));
        CThostFtdcWechatUserSystemInfoField_ClientPublicIP = NULL;
    }

    /// 客户登录备注2
    /// typedef char TThostFtdcClientLoginRemarkType[151]
    if( CThostFtdcWechatUserSystemInfoField_ClientLoginRemark != NULL ) {
        if(CThostFtdcWechatUserSystemInfoField_ClientLoginRemark_length >= (Py_ssize_t)sizeof(data->ClientLoginRemark)) {
            PyErr_Format(PyExc_ValueError, "ClientLoginRemark too long: length=%zd (max allowed is 150)", CThostFtdcWechatUserSystemInfoField_ClientLoginRemark_length);
            return -1;
        }
        // memset(data->ClientLoginRemark, 0, sizeof(data->ClientLoginRemark));
        // memcpy(data->ClientLoginRemark, CThostFtdcWechatUserSystemInfoField_ClientLoginRemark, CThostFtdcWechatUserSystemInfoField_ClientLoginRemark_length);
        strncpy(data->ClientLoginRemark, CThostFtdcWechatUserSystemInfoField_ClientLoginRemark, sizeof(data->ClientLoginRemark));
        CThostFtdcWechatUserSystemInfoField_ClientLoginRemark = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcWechatUserSystemInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "WechatCltSysInfoLen", data->WechatCltSysInfoLen
        , "WechatCltSysInfo", data->WechatCltSysInfo//, (Py_ssize_t)sizeof(data->WechatCltSysInfo)
        , "ClientIPPort", data->ClientIPPort
        , "ClientLoginTime", data->ClientLoginTime//, (Py_ssize_t)sizeof(data->ClientLoginTime)
        , "ClientAppID", data->ClientAppID//, (Py_ssize_t)sizeof(data->ClientAppID)
        , "ClientPublicIP", data->ClientPublicIP//, (Py_ssize_t)sizeof(data->ClientPublicIP)
        , "ClientLoginRemark", data->ClientLoginRemark//, (Py_ssize_t)sizeof(data->ClientLoginRemark)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcWechatUserSystemInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcWechatUserSystemInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcWechatUserSystemInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcWechatUserSystemInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWechatUserSystemInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcWechatUserSystemInfoFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcWechatUserSystemInfoFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWechatUserSystemInfoField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 微信小程序等用户端系统内部信息
/// typedef char TThostFtdcClientSystemInfoType[273]
static PyObject *PyCThostFtdcWechatUserSystemInfoFieldType_get_WechatCltSysInfo(PyObject *self, void *closure) {
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->WechatCltSysInfo, (Py_ssize_t)sizeof(data->WechatCltSysInfo));
    return PyBytes_FromString(data->WechatCltSysInfo);
}

static int PyCThostFtdcWechatUserSystemInfoFieldType_set_WechatCltSysInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "WechatCltSysInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWechatUserSystemInfoField::WechatCltSysInfo)) {
        PyErr_SetString(PyExc_ValueError, "WechatCltSysInfo must be less than 272 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // memset(data->WechatCltSysInfo, 0, sizeof(data->WechatCltSysInfo));
    // memcpy(data->WechatCltSysInfo, buf, len);
    strncpy(data->WechatCltSysInfo, buf, sizeof(data->WechatCltSysInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录成功时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcWechatUserSystemInfoFieldType_get_ClientLoginTime(PyObject *self, void *closure) {
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientLoginTime, (Py_ssize_t)sizeof(data->ClientLoginTime));
    return PyBytes_FromString(data->ClientLoginTime);
}

static int PyCThostFtdcWechatUserSystemInfoFieldType_set_ClientLoginTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientLoginTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWechatUserSystemInfoField::ClientLoginTime)) {
        PyErr_SetString(PyExc_ValueError, "ClientLoginTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientLoginTime, 0, sizeof(data->ClientLoginTime));
    // memcpy(data->ClientLoginTime, buf, len);
    strncpy(data->ClientLoginTime, buf, sizeof(data->ClientLoginTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcWechatUserSystemInfoFieldType_get_ClientAppID(PyObject *self, void *closure) {
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientAppID, (Py_ssize_t)sizeof(data->ClientAppID));
    return PyBytes_FromString(data->ClientAppID);
}

static int PyCThostFtdcWechatUserSystemInfoFieldType_set_ClientAppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientAppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWechatUserSystemInfoField::ClientAppID)) {
        PyErr_SetString(PyExc_ValueError, "ClientAppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientAppID, 0, sizeof(data->ClientAppID));
    // memcpy(data->ClientAppID, buf, len);
    strncpy(data->ClientAppID, buf, sizeof(data->ClientAppID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户公网IP
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcWechatUserSystemInfoFieldType_get_ClientPublicIP(PyObject *self, void *closure) {
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientPublicIP, (Py_ssize_t)sizeof(data->ClientPublicIP));
    return PyBytes_FromString(data->ClientPublicIP);
}

static int PyCThostFtdcWechatUserSystemInfoFieldType_set_ClientPublicIP(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientPublicIP Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWechatUserSystemInfoField::ClientPublicIP)) {
        PyErr_SetString(PyExc_ValueError, "ClientPublicIP must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientPublicIP, 0, sizeof(data->ClientPublicIP));
    // memcpy(data->ClientPublicIP, buf, len);
    strncpy(data->ClientPublicIP, buf, sizeof(data->ClientPublicIP));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户登录备注2
/// typedef char TThostFtdcClientLoginRemarkType[151]
static PyObject *PyCThostFtdcWechatUserSystemInfoFieldType_get_ClientLoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientLoginRemark, (Py_ssize_t)sizeof(data->ClientLoginRemark));
    return PyBytes_FromString(data->ClientLoginRemark);
}

static int PyCThostFtdcWechatUserSystemInfoFieldType_set_ClientLoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientLoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcWechatUserSystemInfoField::ClientLoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "ClientLoginRemark must be less than 150 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcWechatUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(self);
    CThostFtdcWechatUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientLoginRemark, 0, sizeof(data->ClientLoginRemark));
    // memcpy(data->ClientLoginRemark, buf, len);
    strncpy(data->ClientLoginRemark, buf, sizeof(data->ClientLoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcWechatUserSystemInfoFieldType_members[] = {
    /// 微信小程序等用户端系统内部信息长度
    /// typedef int TThostFtdcSystemInfoLenType
    {
        .name = "WechatCltSysInfoLen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcWechatUserSystemInfoFieldData, data.WechatCltSysInfoLen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("微信小程序等用户端系统内部信息长度")
    },
    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    {
        .name = "ClientIPPort",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcWechatUserSystemInfoFieldData, data.ClientIPPort),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("终端IP端口")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcWechatUserSystemInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcWechatUserSystemInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcWechatUserSystemInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcWechatUserSystemInfoFieldType_get_UserID,
    .set = PyCThostFtdcWechatUserSystemInfoFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 微信小程序等用户端系统内部信息
    /// typedef char TThostFtdcClientSystemInfoType[273]
    {
    .name = "WechatCltSysInfo",
    .get = PyCThostFtdcWechatUserSystemInfoFieldType_get_WechatCltSysInfo,
    .set = PyCThostFtdcWechatUserSystemInfoFieldType_set_WechatCltSysInfo,
    .doc = PyDoc_STR("微信小程序等用户端系统内部信息"),
    },
    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ClientLoginTime",
    .get = PyCThostFtdcWechatUserSystemInfoFieldType_get_ClientLoginTime,
    .set = PyCThostFtdcWechatUserSystemInfoFieldType_set_ClientLoginTime,
    .doc = PyDoc_STR("登录成功时间"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "ClientAppID",
    .get = PyCThostFtdcWechatUserSystemInfoFieldType_get_ClientAppID,
    .set = PyCThostFtdcWechatUserSystemInfoFieldType_set_ClientAppID,
    .doc = PyDoc_STR("App代码"),
    },
    /// 用户公网IP
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "ClientPublicIP",
    .get = PyCThostFtdcWechatUserSystemInfoFieldType_get_ClientPublicIP,
    .set = PyCThostFtdcWechatUserSystemInfoFieldType_set_ClientPublicIP,
    .doc = PyDoc_STR("用户公网IP"),
    },
    /// 客户登录备注2
    /// typedef char TThostFtdcClientLoginRemarkType[151]
    {
    .name = "ClientLoginRemark",
    .get = PyCThostFtdcWechatUserSystemInfoFieldType_get_ClientLoginRemark,
    .set = PyCThostFtdcWechatUserSystemInfoFieldType_set_ClientLoginRemark,
    .doc = PyDoc_STR("客户登录备注2"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcWechatUserSystemInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcWechatUserSystemInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("微信小程序等用户系统信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcWechatUserSystemInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcWechatUserSystemInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcWechatUserSystemInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcWechatUserSystemInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcWechatUserSystemInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcWechatUserSystemInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("微信小程序等用户系统信息")},
    {Py_tp_members, PyCThostFtdcWechatUserSystemInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcWechatUserSystemInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcWechatUserSystemInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcWechatUserSystemInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcWechatUserSystemInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcWechatUserSystemInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcWechatUserSystemInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcWechatUserSystemInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcWechatUserSystemInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcWechatUserSystemInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcWechatUserSystemInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcWechatUserSystemInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcWechatUserSystemInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcWechatUserSystemInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcWechatUserSystemInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcWechatUserSystemInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}