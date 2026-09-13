
#include "PyCThostFtdcUserSystemInfoField.h"

///用户系统信息

static int PyCThostFtdcUserSystemInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "ClientSystemInfoLen", "ClientSystemInfo", "reserve1", "ClientIPPort", "ClientLoginTime", "ClientAppID", "ClientPublicIP", "ClientLoginRemark", "MAC", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcUserSystemInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcUserSystemInfoField_UserID = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_UserID_length = 0;

    /// 用户端系统内部信息长度
    /// typedef int TThostFtdcSystemInfoLenType
    int CThostFtdcUserSystemInfoField_ClientSystemInfoLen = 0;

    /// 用户端系统内部信息
    /// typedef char TThostFtdcClientSystemInfoType[273]
    char *CThostFtdcUserSystemInfoField_ClientSystemInfo = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_ClientSystemInfo_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcUserSystemInfoField_reserve1 = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_reserve1_length = 0;

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    int CThostFtdcUserSystemInfoField_ClientIPPort = 0;

    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcUserSystemInfoField_ClientLoginTime = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_ClientLoginTime_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcUserSystemInfoField_ClientAppID = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_ClientAppID_length = 0;

    /// 用户公网IP
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcUserSystemInfoField_ClientPublicIP = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_ClientPublicIP_length = 0;

    /// 客户登录备注2
    /// typedef char TThostFtdcClientLoginRemarkType[151]
    char *CThostFtdcUserSystemInfoField_ClientLoginRemark = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_ClientLoginRemark_length = 0;

    /// 客户终端的MAC等标识
    /// typedef char TThostFtdcDeviceTagType[41]
    char *CThostFtdcUserSystemInfoField_MAC = NULL;
    Py_ssize_t CThostFtdcUserSystemInfoField_MAC_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#y#iy#y#y#y#y#", (char **)kwlist
        , &CThostFtdcUserSystemInfoField_BrokerID, &CThostFtdcUserSystemInfoField_BrokerID_length
        , &CThostFtdcUserSystemInfoField_UserID, &CThostFtdcUserSystemInfoField_UserID_length
        , &CThostFtdcUserSystemInfoField_ClientSystemInfoLen
        , &CThostFtdcUserSystemInfoField_ClientSystemInfo, &CThostFtdcUserSystemInfoField_ClientSystemInfo_length
        , &CThostFtdcUserSystemInfoField_reserve1, &CThostFtdcUserSystemInfoField_reserve1_length
        , &CThostFtdcUserSystemInfoField_ClientIPPort
        , &CThostFtdcUserSystemInfoField_ClientLoginTime, &CThostFtdcUserSystemInfoField_ClientLoginTime_length
        , &CThostFtdcUserSystemInfoField_ClientAppID, &CThostFtdcUserSystemInfoField_ClientAppID_length
        , &CThostFtdcUserSystemInfoField_ClientPublicIP, &CThostFtdcUserSystemInfoField_ClientPublicIP_length
        , &CThostFtdcUserSystemInfoField_ClientLoginRemark, &CThostFtdcUserSystemInfoField_ClientLoginRemark_length
        , &CThostFtdcUserSystemInfoField_MAC, &CThostFtdcUserSystemInfoField_MAC_length
    )) {
        return -1;
    }

    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcUserSystemInfoField_BrokerID != NULL ) {
        if(CThostFtdcUserSystemInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcUserSystemInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcUserSystemInfoField_BrokerID, CThostFtdcUserSystemInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcUserSystemInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcUserSystemInfoField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcUserSystemInfoField_UserID != NULL ) {
        if(CThostFtdcUserSystemInfoField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcUserSystemInfoField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcUserSystemInfoField_UserID, CThostFtdcUserSystemInfoField_UserID_length);
        strncpy(data->UserID, CThostFtdcUserSystemInfoField_UserID, sizeof(data->UserID));
        CThostFtdcUserSystemInfoField_UserID = NULL;
    }

    /// 用户端系统内部信息长度
    /// typedef int TThostFtdcSystemInfoLenType
    data->ClientSystemInfoLen = CThostFtdcUserSystemInfoField_ClientSystemInfoLen;

    /// 用户端系统内部信息
    /// typedef char TThostFtdcClientSystemInfoType[273]
    if( CThostFtdcUserSystemInfoField_ClientSystemInfo != NULL ) {
        if(CThostFtdcUserSystemInfoField_ClientSystemInfo_length >= (Py_ssize_t)sizeof(data->ClientSystemInfo)) {
            PyErr_Format(PyExc_ValueError, "ClientSystemInfo too long: length=%zd (max allowed is 272)", CThostFtdcUserSystemInfoField_ClientSystemInfo_length);
            return -1;
        }
        // memset(data->ClientSystemInfo, 0, sizeof(data->ClientSystemInfo));
        // memcpy(data->ClientSystemInfo, CThostFtdcUserSystemInfoField_ClientSystemInfo, CThostFtdcUserSystemInfoField_ClientSystemInfo_length);
        strncpy(data->ClientSystemInfo, CThostFtdcUserSystemInfoField_ClientSystemInfo, sizeof(data->ClientSystemInfo));
        CThostFtdcUserSystemInfoField_ClientSystemInfo = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcUserSystemInfoField_reserve1 != NULL ) {
        if(CThostFtdcUserSystemInfoField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcUserSystemInfoField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcUserSystemInfoField_reserve1, CThostFtdcUserSystemInfoField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcUserSystemInfoField_reserve1, sizeof(data->reserve1));
        CThostFtdcUserSystemInfoField_reserve1 = NULL;
    }

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    data->ClientIPPort = CThostFtdcUserSystemInfoField_ClientIPPort;

    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcUserSystemInfoField_ClientLoginTime != NULL ) {
        if(CThostFtdcUserSystemInfoField_ClientLoginTime_length >= (Py_ssize_t)sizeof(data->ClientLoginTime)) {
            PyErr_Format(PyExc_ValueError, "ClientLoginTime too long: length=%zd (max allowed is 8)", CThostFtdcUserSystemInfoField_ClientLoginTime_length);
            return -1;
        }
        // memset(data->ClientLoginTime, 0, sizeof(data->ClientLoginTime));
        // memcpy(data->ClientLoginTime, CThostFtdcUserSystemInfoField_ClientLoginTime, CThostFtdcUserSystemInfoField_ClientLoginTime_length);
        strncpy(data->ClientLoginTime, CThostFtdcUserSystemInfoField_ClientLoginTime, sizeof(data->ClientLoginTime));
        CThostFtdcUserSystemInfoField_ClientLoginTime = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcUserSystemInfoField_ClientAppID != NULL ) {
        if(CThostFtdcUserSystemInfoField_ClientAppID_length >= (Py_ssize_t)sizeof(data->ClientAppID)) {
            PyErr_Format(PyExc_ValueError, "ClientAppID too long: length=%zd (max allowed is 32)", CThostFtdcUserSystemInfoField_ClientAppID_length);
            return -1;
        }
        // memset(data->ClientAppID, 0, sizeof(data->ClientAppID));
        // memcpy(data->ClientAppID, CThostFtdcUserSystemInfoField_ClientAppID, CThostFtdcUserSystemInfoField_ClientAppID_length);
        strncpy(data->ClientAppID, CThostFtdcUserSystemInfoField_ClientAppID, sizeof(data->ClientAppID));
        CThostFtdcUserSystemInfoField_ClientAppID = NULL;
    }

    /// 用户公网IP
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcUserSystemInfoField_ClientPublicIP != NULL ) {
        if(CThostFtdcUserSystemInfoField_ClientPublicIP_length >= (Py_ssize_t)sizeof(data->ClientPublicIP)) {
            PyErr_Format(PyExc_ValueError, "ClientPublicIP too long: length=%zd (max allowed is 32)", CThostFtdcUserSystemInfoField_ClientPublicIP_length);
            return -1;
        }
        // memset(data->ClientPublicIP, 0, sizeof(data->ClientPublicIP));
        // memcpy(data->ClientPublicIP, CThostFtdcUserSystemInfoField_ClientPublicIP, CThostFtdcUserSystemInfoField_ClientPublicIP_length);
        strncpy(data->ClientPublicIP, CThostFtdcUserSystemInfoField_ClientPublicIP, sizeof(data->ClientPublicIP));
        CThostFtdcUserSystemInfoField_ClientPublicIP = NULL;
    }

    /// 客户登录备注2
    /// typedef char TThostFtdcClientLoginRemarkType[151]
    if( CThostFtdcUserSystemInfoField_ClientLoginRemark != NULL ) {
        if(CThostFtdcUserSystemInfoField_ClientLoginRemark_length >= (Py_ssize_t)sizeof(data->ClientLoginRemark)) {
            PyErr_Format(PyExc_ValueError, "ClientLoginRemark too long: length=%zd (max allowed is 150)", CThostFtdcUserSystemInfoField_ClientLoginRemark_length);
            return -1;
        }
        // memset(data->ClientLoginRemark, 0, sizeof(data->ClientLoginRemark));
        // memcpy(data->ClientLoginRemark, CThostFtdcUserSystemInfoField_ClientLoginRemark, CThostFtdcUserSystemInfoField_ClientLoginRemark_length);
        strncpy(data->ClientLoginRemark, CThostFtdcUserSystemInfoField_ClientLoginRemark, sizeof(data->ClientLoginRemark));
        CThostFtdcUserSystemInfoField_ClientLoginRemark = NULL;
    }

    /// 客户终端的MAC等标识
    /// typedef char TThostFtdcDeviceTagType[41]
    if( CThostFtdcUserSystemInfoField_MAC != NULL ) {
        if(CThostFtdcUserSystemInfoField_MAC_length >= (Py_ssize_t)sizeof(data->MAC)) {
            PyErr_Format(PyExc_ValueError, "MAC too long: length=%zd (max allowed is 40)", CThostFtdcUserSystemInfoField_MAC_length);
            return -1;
        }
        // memset(data->MAC, 0, sizeof(data->MAC));
        // memcpy(data->MAC, CThostFtdcUserSystemInfoField_MAC, CThostFtdcUserSystemInfoField_MAC_length);
        strncpy(data->MAC, CThostFtdcUserSystemInfoField_MAC, sizeof(data->MAC));
        CThostFtdcUserSystemInfoField_MAC = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcUserSystemInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ClientSystemInfoLen", data->ClientSystemInfoLen
        , "ClientSystemInfo", data->ClientSystemInfo//, (Py_ssize_t)sizeof(data->ClientSystemInfo)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ClientIPPort", data->ClientIPPort
        , "ClientLoginTime", data->ClientLoginTime//, (Py_ssize_t)sizeof(data->ClientLoginTime)
        , "ClientAppID", data->ClientAppID//, (Py_ssize_t)sizeof(data->ClientAppID)
        , "ClientPublicIP", data->ClientPublicIP//, (Py_ssize_t)sizeof(data->ClientPublicIP)
        , "ClientLoginRemark", data->ClientLoginRemark//, (Py_ssize_t)sizeof(data->ClientLoginRemark)
        , "MAC", data->MAC//, (Py_ssize_t)sizeof(data->MAC)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserSystemInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserSystemInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端系统内部信息
/// typedef char TThostFtdcClientSystemInfoType[273]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_ClientSystemInfo(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientSystemInfo, (Py_ssize_t)sizeof(data->ClientSystemInfo));
    return PyBytes_FromString(data->ClientSystemInfo);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_ClientSystemInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientSystemInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::ClientSystemInfo)) {
        PyErr_SetString(PyExc_ValueError, "ClientSystemInfo must be less than 272 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientSystemInfo, 0, sizeof(data->ClientSystemInfo));
    // memcpy(data->ClientSystemInfo, buf, len);
    strncpy(data->ClientSystemInfo, buf, sizeof(data->ClientSystemInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录成功时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_ClientLoginTime(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientLoginTime, (Py_ssize_t)sizeof(data->ClientLoginTime));
    return PyBytes_FromString(data->ClientLoginTime);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_ClientLoginTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientLoginTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::ClientLoginTime)) {
        PyErr_SetString(PyExc_ValueError, "ClientLoginTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientLoginTime, 0, sizeof(data->ClientLoginTime));
    // memcpy(data->ClientLoginTime, buf, len);
    strncpy(data->ClientLoginTime, buf, sizeof(data->ClientLoginTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_ClientAppID(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientAppID, (Py_ssize_t)sizeof(data->ClientAppID));
    return PyBytes_FromString(data->ClientAppID);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_ClientAppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientAppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::ClientAppID)) {
        PyErr_SetString(PyExc_ValueError, "ClientAppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientAppID, 0, sizeof(data->ClientAppID));
    // memcpy(data->ClientAppID, buf, len);
    strncpy(data->ClientAppID, buf, sizeof(data->ClientAppID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户公网IP
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_ClientPublicIP(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientPublicIP, (Py_ssize_t)sizeof(data->ClientPublicIP));
    return PyBytes_FromString(data->ClientPublicIP);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_ClientPublicIP(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientPublicIP Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::ClientPublicIP)) {
        PyErr_SetString(PyExc_ValueError, "ClientPublicIP must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientPublicIP, 0, sizeof(data->ClientPublicIP));
    // memcpy(data->ClientPublicIP, buf, len);
    strncpy(data->ClientPublicIP, buf, sizeof(data->ClientPublicIP));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户登录备注2
/// typedef char TThostFtdcClientLoginRemarkType[151]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_ClientLoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientLoginRemark, (Py_ssize_t)sizeof(data->ClientLoginRemark));
    return PyBytes_FromString(data->ClientLoginRemark);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_ClientLoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientLoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::ClientLoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "ClientLoginRemark must be less than 150 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->ClientLoginRemark, 0, sizeof(data->ClientLoginRemark));
    // memcpy(data->ClientLoginRemark, buf, len);
    strncpy(data->ClientLoginRemark, buf, sizeof(data->ClientLoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户终端的MAC等标识
/// typedef char TThostFtdcDeviceTagType[41]
static PyObject *PyCThostFtdcUserSystemInfoFieldType_get_MAC(PyObject *self, void *closure) {
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MAC, (Py_ssize_t)sizeof(data->MAC));
    return PyBytes_FromString(data->MAC);
}

static int PyCThostFtdcUserSystemInfoFieldType_set_MAC(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MAC Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcUserSystemInfoField::MAC)) {
        PyErr_SetString(PyExc_ValueError, "MAC must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcUserSystemInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(self);
    CThostFtdcUserSystemInfoField *data = &(extra->data);
    // memset(data->MAC, 0, sizeof(data->MAC));
    // memcpy(data->MAC, buf, len);
    strncpy(data->MAC, buf, sizeof(data->MAC));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcUserSystemInfoFieldType_members[] = {
    /// 用户端系统内部信息长度
    /// typedef int TThostFtdcSystemInfoLenType
    {
        .name = "ClientSystemInfoLen",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcUserSystemInfoFieldData, data.ClientSystemInfoLen),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("用户端系统内部信息长度")
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
        .offset = offsetof(PyCThostFtdcUserSystemInfoFieldData, data.ClientIPPort),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("终端IP端口")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcUserSystemInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_UserID,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 用户端系统内部信息
    /// typedef char TThostFtdcClientSystemInfoType[273]
    {
    .name = "ClientSystemInfo",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_ClientSystemInfo,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_ClientSystemInfo,
    .doc = PyDoc_STR("用户端系统内部信息"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_reserve1,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ClientLoginTime",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_ClientLoginTime,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_ClientLoginTime,
    .doc = PyDoc_STR("登录成功时间"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "ClientAppID",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_ClientAppID,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_ClientAppID,
    .doc = PyDoc_STR("App代码"),
    },
    /// 用户公网IP
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "ClientPublicIP",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_ClientPublicIP,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_ClientPublicIP,
    .doc = PyDoc_STR("用户公网IP"),
    },
    /// 客户登录备注2
    /// typedef char TThostFtdcClientLoginRemarkType[151]
    {
    .name = "ClientLoginRemark",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_ClientLoginRemark,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_ClientLoginRemark,
    .doc = PyDoc_STR("客户登录备注2"),
    },
    /// 客户终端的MAC等标识
    /// typedef char TThostFtdcDeviceTagType[41]
    {
    .name = "MAC",
    .get = PyCThostFtdcUserSystemInfoFieldType_get_MAC,
    .set = PyCThostFtdcUserSystemInfoFieldType_set_MAC,
    .doc = PyDoc_STR("客户终端的MAC等标识"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcUserSystemInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcUserSystemInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户系统信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcUserSystemInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcUserSystemInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcUserSystemInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcUserSystemInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcUserSystemInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcUserSystemInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户系统信息")},
    {Py_tp_members, PyCThostFtdcUserSystemInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcUserSystemInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcUserSystemInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcUserSystemInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcUserSystemInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcUserSystemInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcUserSystemInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcUserSystemInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcUserSystemInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcUserSystemInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcUserSystemInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcUserSystemInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcUserSystemInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcUserSystemInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcUserSystemInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserSystemInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}