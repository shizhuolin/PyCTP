
#include "PyCThostFtdcRspUserLogin2Field.h"

///用户登录应答2

static int PyCThostFtdcRspUserLogin2FieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "LoginTime", "BrokerID", "UserID", "SystemName", "FrontID", "SessionID", "MaxOrderRef", "SHFETime", "DCETime", "CZCETime", "FFEXTime", "INETime", "RandomString", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRspUserLogin2Field_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_TradingDay_length = 0;

    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLogin2Field_LoginTime = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_LoginTime_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspUserLogin2Field_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspUserLogin2Field_UserID = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_UserID_length = 0;

    /// 交易系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    char *CThostFtdcRspUserLogin2Field_SystemName = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_SystemName_length = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcRspUserLogin2Field_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspUserLogin2Field_SessionID = 0;

    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcRspUserLogin2Field_MaxOrderRef = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_MaxOrderRef_length = 0;

    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLogin2Field_SHFETime = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_SHFETime_length = 0;

    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLogin2Field_DCETime = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_DCETime_length = 0;

    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLogin2Field_CZCETime = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_CZCETime_length = 0;

    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLogin2Field_FFEXTime = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_FFEXTime_length = 0;

    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLogin2Field_INETime = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_INETime_length = 0;

    /// 随机串
    /// typedef char TThostFtdcRandomStringType[17]
    char *CThostFtdcRspUserLogin2Field_RandomString = NULL;
    Py_ssize_t CThostFtdcRspUserLogin2Field_RandomString_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcRspUserLogin2Field_TradingDay, &CThostFtdcRspUserLogin2Field_TradingDay_length
        , &CThostFtdcRspUserLogin2Field_LoginTime, &CThostFtdcRspUserLogin2Field_LoginTime_length
        , &CThostFtdcRspUserLogin2Field_BrokerID, &CThostFtdcRspUserLogin2Field_BrokerID_length
        , &CThostFtdcRspUserLogin2Field_UserID, &CThostFtdcRspUserLogin2Field_UserID_length
        , &CThostFtdcRspUserLogin2Field_SystemName, &CThostFtdcRspUserLogin2Field_SystemName_length
        , &CThostFtdcRspUserLogin2Field_FrontID
        , &CThostFtdcRspUserLogin2Field_SessionID
        , &CThostFtdcRspUserLogin2Field_MaxOrderRef, &CThostFtdcRspUserLogin2Field_MaxOrderRef_length
        , &CThostFtdcRspUserLogin2Field_SHFETime, &CThostFtdcRspUserLogin2Field_SHFETime_length
        , &CThostFtdcRspUserLogin2Field_DCETime, &CThostFtdcRspUserLogin2Field_DCETime_length
        , &CThostFtdcRspUserLogin2Field_CZCETime, &CThostFtdcRspUserLogin2Field_CZCETime_length
        , &CThostFtdcRspUserLogin2Field_FFEXTime, &CThostFtdcRspUserLogin2Field_FFEXTime_length
        , &CThostFtdcRspUserLogin2Field_INETime, &CThostFtdcRspUserLogin2Field_INETime_length
        , &CThostFtdcRspUserLogin2Field_RandomString, &CThostFtdcRspUserLogin2Field_RandomString_length
    )) {
        return -1;
    }

    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRspUserLogin2Field_TradingDay != NULL ) {
        if(CThostFtdcRspUserLogin2Field_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLogin2Field_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspUserLogin2Field_TradingDay, CThostFtdcRspUserLogin2Field_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspUserLogin2Field_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspUserLogin2Field_TradingDay = NULL;
    }

    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLogin2Field_LoginTime != NULL ) {
        if(CThostFtdcRspUserLogin2Field_LoginTime_length >= (Py_ssize_t)sizeof(data->LoginTime)) {
            PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLogin2Field_LoginTime_length);
            return -1;
        }
        // memset(data->LoginTime, 0, sizeof(data->LoginTime));
        // memcpy(data->LoginTime, CThostFtdcRspUserLogin2Field_LoginTime, CThostFtdcRspUserLogin2Field_LoginTime_length);
        strncpy(data->LoginTime, CThostFtdcRspUserLogin2Field_LoginTime, sizeof(data->LoginTime));
        CThostFtdcRspUserLogin2Field_LoginTime = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspUserLogin2Field_BrokerID != NULL ) {
        if(CThostFtdcRspUserLogin2Field_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspUserLogin2Field_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspUserLogin2Field_BrokerID, CThostFtdcRspUserLogin2Field_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspUserLogin2Field_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspUserLogin2Field_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspUserLogin2Field_UserID != NULL ) {
        if(CThostFtdcRspUserLogin2Field_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspUserLogin2Field_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspUserLogin2Field_UserID, CThostFtdcRspUserLogin2Field_UserID_length);
        strncpy(data->UserID, CThostFtdcRspUserLogin2Field_UserID, sizeof(data->UserID));
        CThostFtdcRspUserLogin2Field_UserID = NULL;
    }

    /// 交易系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    if( CThostFtdcRspUserLogin2Field_SystemName != NULL ) {
        if(CThostFtdcRspUserLogin2Field_SystemName_length >= (Py_ssize_t)sizeof(data->SystemName)) {
            PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is 40)", CThostFtdcRspUserLogin2Field_SystemName_length);
            return -1;
        }
        // memset(data->SystemName, 0, sizeof(data->SystemName));
        // memcpy(data->SystemName, CThostFtdcRspUserLogin2Field_SystemName, CThostFtdcRspUserLogin2Field_SystemName_length);
        strncpy(data->SystemName, CThostFtdcRspUserLogin2Field_SystemName, sizeof(data->SystemName));
        CThostFtdcRspUserLogin2Field_SystemName = NULL;
    }

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcRspUserLogin2Field_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspUserLogin2Field_SessionID;

    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcRspUserLogin2Field_MaxOrderRef != NULL ) {
        if(CThostFtdcRspUserLogin2Field_MaxOrderRef_length >= (Py_ssize_t)sizeof(data->MaxOrderRef)) {
            PyErr_Format(PyExc_ValueError, "MaxOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcRspUserLogin2Field_MaxOrderRef_length);
            return -1;
        }
        // memset(data->MaxOrderRef, 0, sizeof(data->MaxOrderRef));
        // memcpy(data->MaxOrderRef, CThostFtdcRspUserLogin2Field_MaxOrderRef, CThostFtdcRspUserLogin2Field_MaxOrderRef_length);
        strncpy(data->MaxOrderRef, CThostFtdcRspUserLogin2Field_MaxOrderRef, sizeof(data->MaxOrderRef));
        CThostFtdcRspUserLogin2Field_MaxOrderRef = NULL;
    }

    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLogin2Field_SHFETime != NULL ) {
        if(CThostFtdcRspUserLogin2Field_SHFETime_length >= (Py_ssize_t)sizeof(data->SHFETime)) {
            PyErr_Format(PyExc_ValueError, "SHFETime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLogin2Field_SHFETime_length);
            return -1;
        }
        // memset(data->SHFETime, 0, sizeof(data->SHFETime));
        // memcpy(data->SHFETime, CThostFtdcRspUserLogin2Field_SHFETime, CThostFtdcRspUserLogin2Field_SHFETime_length);
        strncpy(data->SHFETime, CThostFtdcRspUserLogin2Field_SHFETime, sizeof(data->SHFETime));
        CThostFtdcRspUserLogin2Field_SHFETime = NULL;
    }

    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLogin2Field_DCETime != NULL ) {
        if(CThostFtdcRspUserLogin2Field_DCETime_length >= (Py_ssize_t)sizeof(data->DCETime)) {
            PyErr_Format(PyExc_ValueError, "DCETime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLogin2Field_DCETime_length);
            return -1;
        }
        // memset(data->DCETime, 0, sizeof(data->DCETime));
        // memcpy(data->DCETime, CThostFtdcRspUserLogin2Field_DCETime, CThostFtdcRspUserLogin2Field_DCETime_length);
        strncpy(data->DCETime, CThostFtdcRspUserLogin2Field_DCETime, sizeof(data->DCETime));
        CThostFtdcRspUserLogin2Field_DCETime = NULL;
    }

    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLogin2Field_CZCETime != NULL ) {
        if(CThostFtdcRspUserLogin2Field_CZCETime_length >= (Py_ssize_t)sizeof(data->CZCETime)) {
            PyErr_Format(PyExc_ValueError, "CZCETime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLogin2Field_CZCETime_length);
            return -1;
        }
        // memset(data->CZCETime, 0, sizeof(data->CZCETime));
        // memcpy(data->CZCETime, CThostFtdcRspUserLogin2Field_CZCETime, CThostFtdcRspUserLogin2Field_CZCETime_length);
        strncpy(data->CZCETime, CThostFtdcRspUserLogin2Field_CZCETime, sizeof(data->CZCETime));
        CThostFtdcRspUserLogin2Field_CZCETime = NULL;
    }

    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLogin2Field_FFEXTime != NULL ) {
        if(CThostFtdcRspUserLogin2Field_FFEXTime_length >= (Py_ssize_t)sizeof(data->FFEXTime)) {
            PyErr_Format(PyExc_ValueError, "FFEXTime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLogin2Field_FFEXTime_length);
            return -1;
        }
        // memset(data->FFEXTime, 0, sizeof(data->FFEXTime));
        // memcpy(data->FFEXTime, CThostFtdcRspUserLogin2Field_FFEXTime, CThostFtdcRspUserLogin2Field_FFEXTime_length);
        strncpy(data->FFEXTime, CThostFtdcRspUserLogin2Field_FFEXTime, sizeof(data->FFEXTime));
        CThostFtdcRspUserLogin2Field_FFEXTime = NULL;
    }

    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLogin2Field_INETime != NULL ) {
        if(CThostFtdcRspUserLogin2Field_INETime_length >= (Py_ssize_t)sizeof(data->INETime)) {
            PyErr_Format(PyExc_ValueError, "INETime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLogin2Field_INETime_length);
            return -1;
        }
        // memset(data->INETime, 0, sizeof(data->INETime));
        // memcpy(data->INETime, CThostFtdcRspUserLogin2Field_INETime, CThostFtdcRspUserLogin2Field_INETime_length);
        strncpy(data->INETime, CThostFtdcRspUserLogin2Field_INETime, sizeof(data->INETime));
        CThostFtdcRspUserLogin2Field_INETime = NULL;
    }

    /// 随机串
    /// typedef char TThostFtdcRandomStringType[17]
    if( CThostFtdcRspUserLogin2Field_RandomString != NULL ) {
        if(CThostFtdcRspUserLogin2Field_RandomString_length >= (Py_ssize_t)sizeof(data->RandomString)) {
            PyErr_Format(PyExc_ValueError, "RandomString too long: length=%zd (max allowed is 16)", CThostFtdcRspUserLogin2Field_RandomString_length);
            return -1;
        }
        // memset(data->RandomString, 0, sizeof(data->RandomString));
        // memcpy(data->RandomString, CThostFtdcRspUserLogin2Field_RandomString, CThostFtdcRspUserLogin2Field_RandomString_length);
        strncpy(data->RandomString, CThostFtdcRspUserLogin2Field_RandomString, sizeof(data->RandomString));
        CThostFtdcRspUserLogin2Field_RandomString = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspUserLogin2FieldType_repr(PyObject *self) {

    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "LoginTime", data->LoginTime//, (Py_ssize_t)sizeof(data->LoginTime)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "SystemName", data->SystemName//, (Py_ssize_t)sizeof(data->SystemName)
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "MaxOrderRef", data->MaxOrderRef//, (Py_ssize_t)sizeof(data->MaxOrderRef)
        , "SHFETime", data->SHFETime//, (Py_ssize_t)sizeof(data->SHFETime)
        , "DCETime", data->DCETime//, (Py_ssize_t)sizeof(data->DCETime)
        , "CZCETime", data->CZCETime//, (Py_ssize_t)sizeof(data->CZCETime)
        , "FFEXTime", data->FFEXTime//, (Py_ssize_t)sizeof(data->FFEXTime)
        , "INETime", data->INETime//, (Py_ssize_t)sizeof(data->INETime)
        , "RandomString", data->RandomString//, (Py_ssize_t)sizeof(data->RandomString)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserLogin2Field repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserLogin2Field repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录成功时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_LoginTime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginTime, (Py_ssize_t)sizeof(data->LoginTime));
    return PyBytes_FromString(data->LoginTime);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_LoginTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::LoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LoginTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->LoginTime, 0, sizeof(data->LoginTime));
    // memcpy(data->LoginTime, buf, len);
    strncpy(data->LoginTime, buf, sizeof(data->LoginTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统名称
/// typedef char TThostFtdcSystemNameType[41]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_SystemName(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SystemName, (Py_ssize_t)sizeof(data->SystemName));
    return PyBytes_FromString(data->SystemName);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_SystemName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SystemName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::SystemName)) {
        PyErr_SetString(PyExc_ValueError, "SystemName must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->SystemName, 0, sizeof(data->SystemName));
    // memcpy(data->SystemName, buf, len);
    strncpy(data->SystemName, buf, sizeof(data->SystemName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最大报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_MaxOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MaxOrderRef, (Py_ssize_t)sizeof(data->MaxOrderRef));
    return PyBytes_FromString(data->MaxOrderRef);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_MaxOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MaxOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::MaxOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "MaxOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->MaxOrderRef, 0, sizeof(data->MaxOrderRef));
    // memcpy(data->MaxOrderRef, buf, len);
    strncpy(data->MaxOrderRef, buf, sizeof(data->MaxOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上期所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_SHFETime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SHFETime, (Py_ssize_t)sizeof(data->SHFETime));
    return PyBytes_FromString(data->SHFETime);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_SHFETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SHFETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::SHFETime)) {
        PyErr_SetString(PyExc_ValueError, "SHFETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->SHFETime, 0, sizeof(data->SHFETime));
    // memcpy(data->SHFETime, buf, len);
    strncpy(data->SHFETime, buf, sizeof(data->SHFETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 大商所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_DCETime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DCETime, (Py_ssize_t)sizeof(data->DCETime));
    return PyBytes_FromString(data->DCETime);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_DCETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DCETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::DCETime)) {
        PyErr_SetString(PyExc_ValueError, "DCETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->DCETime, 0, sizeof(data->DCETime));
    // memcpy(data->DCETime, buf, len);
    strncpy(data->DCETime, buf, sizeof(data->DCETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 郑商所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_CZCETime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CZCETime, (Py_ssize_t)sizeof(data->CZCETime));
    return PyBytes_FromString(data->CZCETime);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_CZCETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CZCETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::CZCETime)) {
        PyErr_SetString(PyExc_ValueError, "CZCETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->CZCETime, 0, sizeof(data->CZCETime));
    // memcpy(data->CZCETime, buf, len);
    strncpy(data->CZCETime, buf, sizeof(data->CZCETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 中金所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_FFEXTime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FFEXTime, (Py_ssize_t)sizeof(data->FFEXTime));
    return PyBytes_FromString(data->FFEXTime);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_FFEXTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FFEXTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::FFEXTime)) {
        PyErr_SetString(PyExc_ValueError, "FFEXTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->FFEXTime, 0, sizeof(data->FFEXTime));
    // memcpy(data->FFEXTime, buf, len);
    strncpy(data->FFEXTime, buf, sizeof(data->FFEXTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 能源中心时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_INETime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->INETime, (Py_ssize_t)sizeof(data->INETime));
    return PyBytes_FromString(data->INETime);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_INETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "INETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::INETime)) {
        PyErr_SetString(PyExc_ValueError, "INETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->INETime, 0, sizeof(data->INETime));
    // memcpy(data->INETime, buf, len);
    strncpy(data->INETime, buf, sizeof(data->INETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 随机串
/// typedef char TThostFtdcRandomStringType[17]
static PyObject *PyCThostFtdcRspUserLogin2FieldType_get_RandomString(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RandomString, (Py_ssize_t)sizeof(data->RandomString));
    return PyBytes_FromString(data->RandomString);
}

static int PyCThostFtdcRspUserLogin2FieldType_set_RandomString(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RandomString Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLogin2Field::RandomString)) {
        PyErr_SetString(PyExc_ValueError, "RandomString must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLogin2FieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLogin2FieldData>(self);
    CThostFtdcRspUserLogin2Field *data = &(extra->data);
    // memset(data->RandomString, 0, sizeof(data->RandomString));
    // memcpy(data->RandomString, buf, len);
    strncpy(data->RandomString, buf, sizeof(data->RandomString));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspUserLogin2FieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspUserLogin2FieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcRspUserLogin2FieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspUserLogin2FieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_TradingDay,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "LoginTime",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_LoginTime,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_LoginTime,
    .doc = PyDoc_STR("登录成功时间"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_BrokerID,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_UserID,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    {
    .name = "SystemName",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_SystemName,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_SystemName,
    .doc = PyDoc_STR("交易系统名称"),
    },
    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "MaxOrderRef",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_MaxOrderRef,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_MaxOrderRef,
    .doc = PyDoc_STR("最大报单引用"),
    },
    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SHFETime",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_SHFETime,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_SHFETime,
    .doc = PyDoc_STR("上期所时间"),
    },
    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "DCETime",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_DCETime,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_DCETime,
    .doc = PyDoc_STR("大商所时间"),
    },
    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CZCETime",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_CZCETime,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_CZCETime,
    .doc = PyDoc_STR("郑商所时间"),
    },
    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "FFEXTime",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_FFEXTime,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_FFEXTime,
    .doc = PyDoc_STR("中金所时间"),
    },
    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "INETime",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_INETime,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_INETime,
    .doc = PyDoc_STR("能源中心时间"),
    },
    /// 随机串
    /// typedef char TThostFtdcRandomStringType[17]
    {
    .name = "RandomString",
    .get = PyCThostFtdcRspUserLogin2FieldType_get_RandomString,
    .set = PyCThostFtdcRspUserLogin2FieldType_set_RandomString,
    .doc = PyDoc_STR("随机串"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspUserLogin2FieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspUserLogin2Field"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户登录应答2")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspUserLogin2FieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspUserLogin2FieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspUserLogin2FieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspUserLogin2FieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspUserLogin2FieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspUserLogin2FieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户登录应答2")},
    {Py_tp_members, PyCThostFtdcRspUserLogin2FieldType_members},
    {Py_tp_getset, PyCThostFtdcRspUserLogin2FieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspUserLogin2FieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspUserLogin2FieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspUserLogin2FieldType_spec = {
    .name = "PyCTP.CThostFtdcRspUserLogin2Field",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspUserLogin2FieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspUserLogin2FieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspUserLogin2FieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspUserLogin2FieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspUserLogin2FieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspUserLogin2FieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspUserLogin2FieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspUserLogin2FieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspUserLogin2Field", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspUserLogin2Field to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}