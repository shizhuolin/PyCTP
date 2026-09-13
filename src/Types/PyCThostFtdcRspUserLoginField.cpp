
#include "PyCThostFtdcRspUserLoginField.h"

///用户登录应答

static int PyCThostFtdcRspUserLoginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "LoginTime", "BrokerID", "UserID", "SystemName", "FrontID", "SessionID", "MaxOrderRef", "SHFETime", "DCETime", "CZCETime", "FFEXTime", "INETime", "SysVersion", "GFEXTime", "LoginDRIdentityID", "UserDRIdentityID", "LastLoginTime", "ReserveInfo", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcRspUserLoginField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_TradingDay_length = 0;

    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLoginField_LoginTime = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_LoginTime_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspUserLoginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspUserLoginField_UserID = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_UserID_length = 0;

    /// 交易系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    char *CThostFtdcRspUserLoginField_SystemName = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_SystemName_length = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcRspUserLoginField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspUserLoginField_SessionID = 0;

    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcRspUserLoginField_MaxOrderRef = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_MaxOrderRef_length = 0;

    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLoginField_SHFETime = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_SHFETime_length = 0;

    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLoginField_DCETime = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_DCETime_length = 0;

    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLoginField_CZCETime = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_CZCETime_length = 0;

    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLoginField_FFEXTime = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_FFEXTime_length = 0;

    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLoginField_INETime = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_INETime_length = 0;

    /// 后台版本信息
    /// typedef char TThostFtdcSysVersionType[41]
    char *CThostFtdcRspUserLoginField_SysVersion = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_SysVersion_length = 0;

    /// 广期所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcRspUserLoginField_GFEXTime = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_GFEXTime_length = 0;

    /// 当前登录中心号
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcRspUserLoginField_LoginDRIdentityID = 0;

    /// 用户所属中心号
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcRspUserLoginField_UserDRIdentityID = 0;

    /// 上次登陆时间
    /// typedef char TThostFtdcDateTimeType[17]
    char *CThostFtdcRspUserLoginField_LastLoginTime = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_LastLoginTime_length = 0;

    /// 预留信息
    /// typedef char TThostFtdcReserveInfoType[65]
    char *CThostFtdcRspUserLoginField_ReserveInfo = NULL;
    Py_ssize_t CThostFtdcRspUserLoginField_ReserveInfo_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#y#y#y#y#y#y#y#iiy#y#", (char **)kwlist
        , &CThostFtdcRspUserLoginField_TradingDay, &CThostFtdcRspUserLoginField_TradingDay_length
        , &CThostFtdcRspUserLoginField_LoginTime, &CThostFtdcRspUserLoginField_LoginTime_length
        , &CThostFtdcRspUserLoginField_BrokerID, &CThostFtdcRspUserLoginField_BrokerID_length
        , &CThostFtdcRspUserLoginField_UserID, &CThostFtdcRspUserLoginField_UserID_length
        , &CThostFtdcRspUserLoginField_SystemName, &CThostFtdcRspUserLoginField_SystemName_length
        , &CThostFtdcRspUserLoginField_FrontID
        , &CThostFtdcRspUserLoginField_SessionID
        , &CThostFtdcRspUserLoginField_MaxOrderRef, &CThostFtdcRspUserLoginField_MaxOrderRef_length
        , &CThostFtdcRspUserLoginField_SHFETime, &CThostFtdcRspUserLoginField_SHFETime_length
        , &CThostFtdcRspUserLoginField_DCETime, &CThostFtdcRspUserLoginField_DCETime_length
        , &CThostFtdcRspUserLoginField_CZCETime, &CThostFtdcRspUserLoginField_CZCETime_length
        , &CThostFtdcRspUserLoginField_FFEXTime, &CThostFtdcRspUserLoginField_FFEXTime_length
        , &CThostFtdcRspUserLoginField_INETime, &CThostFtdcRspUserLoginField_INETime_length
        , &CThostFtdcRspUserLoginField_SysVersion, &CThostFtdcRspUserLoginField_SysVersion_length
        , &CThostFtdcRspUserLoginField_GFEXTime, &CThostFtdcRspUserLoginField_GFEXTime_length
        , &CThostFtdcRspUserLoginField_LoginDRIdentityID
        , &CThostFtdcRspUserLoginField_UserDRIdentityID
        , &CThostFtdcRspUserLoginField_LastLoginTime, &CThostFtdcRspUserLoginField_LastLoginTime_length
        , &CThostFtdcRspUserLoginField_ReserveInfo, &CThostFtdcRspUserLoginField_ReserveInfo_length
    )) {
        return -1;
    }

    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcRspUserLoginField_TradingDay != NULL ) {
        if(CThostFtdcRspUserLoginField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLoginField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspUserLoginField_TradingDay, CThostFtdcRspUserLoginField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspUserLoginField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspUserLoginField_TradingDay = NULL;
    }

    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLoginField_LoginTime != NULL ) {
        if(CThostFtdcRspUserLoginField_LoginTime_length >= (Py_ssize_t)sizeof(data->LoginTime)) {
            PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLoginField_LoginTime_length);
            return -1;
        }
        // memset(data->LoginTime, 0, sizeof(data->LoginTime));
        // memcpy(data->LoginTime, CThostFtdcRspUserLoginField_LoginTime, CThostFtdcRspUserLoginField_LoginTime_length);
        strncpy(data->LoginTime, CThostFtdcRspUserLoginField_LoginTime, sizeof(data->LoginTime));
        CThostFtdcRspUserLoginField_LoginTime = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspUserLoginField_BrokerID != NULL ) {
        if(CThostFtdcRspUserLoginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspUserLoginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspUserLoginField_BrokerID, CThostFtdcRspUserLoginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspUserLoginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspUserLoginField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspUserLoginField_UserID != NULL ) {
        if(CThostFtdcRspUserLoginField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspUserLoginField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspUserLoginField_UserID, CThostFtdcRspUserLoginField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspUserLoginField_UserID, sizeof(data->UserID));
        CThostFtdcRspUserLoginField_UserID = NULL;
    }

    /// 交易系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    if( CThostFtdcRspUserLoginField_SystemName != NULL ) {
        if(CThostFtdcRspUserLoginField_SystemName_length >= (Py_ssize_t)sizeof(data->SystemName)) {
            PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is 40)", CThostFtdcRspUserLoginField_SystemName_length);
            return -1;
        }
        // memset(data->SystemName, 0, sizeof(data->SystemName));
        // memcpy(data->SystemName, CThostFtdcRspUserLoginField_SystemName, CThostFtdcRspUserLoginField_SystemName_length);
        strncpy(data->SystemName, CThostFtdcRspUserLoginField_SystemName, sizeof(data->SystemName));
        CThostFtdcRspUserLoginField_SystemName = NULL;
    }

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcRspUserLoginField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspUserLoginField_SessionID;

    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcRspUserLoginField_MaxOrderRef != NULL ) {
        if(CThostFtdcRspUserLoginField_MaxOrderRef_length >= (Py_ssize_t)sizeof(data->MaxOrderRef)) {
            PyErr_Format(PyExc_ValueError, "MaxOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcRspUserLoginField_MaxOrderRef_length);
            return -1;
        }
        // memset(data->MaxOrderRef, 0, sizeof(data->MaxOrderRef));
        // memcpy(data->MaxOrderRef, CThostFtdcRspUserLoginField_MaxOrderRef, CThostFtdcRspUserLoginField_MaxOrderRef_length);
        strncpy(data->MaxOrderRef, CThostFtdcRspUserLoginField_MaxOrderRef, sizeof(data->MaxOrderRef));
        CThostFtdcRspUserLoginField_MaxOrderRef = NULL;
    }

    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLoginField_SHFETime != NULL ) {
        if(CThostFtdcRspUserLoginField_SHFETime_length >= (Py_ssize_t)sizeof(data->SHFETime)) {
            PyErr_Format(PyExc_ValueError, "SHFETime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLoginField_SHFETime_length);
            return -1;
        }
        // memset(data->SHFETime, 0, sizeof(data->SHFETime));
        // memcpy(data->SHFETime, CThostFtdcRspUserLoginField_SHFETime, CThostFtdcRspUserLoginField_SHFETime_length);
        strncpy(data->SHFETime, CThostFtdcRspUserLoginField_SHFETime, sizeof(data->SHFETime));
        CThostFtdcRspUserLoginField_SHFETime = NULL;
    }

    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLoginField_DCETime != NULL ) {
        if(CThostFtdcRspUserLoginField_DCETime_length >= (Py_ssize_t)sizeof(data->DCETime)) {
            PyErr_Format(PyExc_ValueError, "DCETime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLoginField_DCETime_length);
            return -1;
        }
        // memset(data->DCETime, 0, sizeof(data->DCETime));
        // memcpy(data->DCETime, CThostFtdcRspUserLoginField_DCETime, CThostFtdcRspUserLoginField_DCETime_length);
        strncpy(data->DCETime, CThostFtdcRspUserLoginField_DCETime, sizeof(data->DCETime));
        CThostFtdcRspUserLoginField_DCETime = NULL;
    }

    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLoginField_CZCETime != NULL ) {
        if(CThostFtdcRspUserLoginField_CZCETime_length >= (Py_ssize_t)sizeof(data->CZCETime)) {
            PyErr_Format(PyExc_ValueError, "CZCETime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLoginField_CZCETime_length);
            return -1;
        }
        // memset(data->CZCETime, 0, sizeof(data->CZCETime));
        // memcpy(data->CZCETime, CThostFtdcRspUserLoginField_CZCETime, CThostFtdcRspUserLoginField_CZCETime_length);
        strncpy(data->CZCETime, CThostFtdcRspUserLoginField_CZCETime, sizeof(data->CZCETime));
        CThostFtdcRspUserLoginField_CZCETime = NULL;
    }

    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLoginField_FFEXTime != NULL ) {
        if(CThostFtdcRspUserLoginField_FFEXTime_length >= (Py_ssize_t)sizeof(data->FFEXTime)) {
            PyErr_Format(PyExc_ValueError, "FFEXTime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLoginField_FFEXTime_length);
            return -1;
        }
        // memset(data->FFEXTime, 0, sizeof(data->FFEXTime));
        // memcpy(data->FFEXTime, CThostFtdcRspUserLoginField_FFEXTime, CThostFtdcRspUserLoginField_FFEXTime_length);
        strncpy(data->FFEXTime, CThostFtdcRspUserLoginField_FFEXTime, sizeof(data->FFEXTime));
        CThostFtdcRspUserLoginField_FFEXTime = NULL;
    }

    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLoginField_INETime != NULL ) {
        if(CThostFtdcRspUserLoginField_INETime_length >= (Py_ssize_t)sizeof(data->INETime)) {
            PyErr_Format(PyExc_ValueError, "INETime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLoginField_INETime_length);
            return -1;
        }
        // memset(data->INETime, 0, sizeof(data->INETime));
        // memcpy(data->INETime, CThostFtdcRspUserLoginField_INETime, CThostFtdcRspUserLoginField_INETime_length);
        strncpy(data->INETime, CThostFtdcRspUserLoginField_INETime, sizeof(data->INETime));
        CThostFtdcRspUserLoginField_INETime = NULL;
    }

    /// 后台版本信息
    /// typedef char TThostFtdcSysVersionType[41]
    if( CThostFtdcRspUserLoginField_SysVersion != NULL ) {
        if(CThostFtdcRspUserLoginField_SysVersion_length >= (Py_ssize_t)sizeof(data->SysVersion)) {
            PyErr_Format(PyExc_ValueError, "SysVersion too long: length=%zd (max allowed is 40)", CThostFtdcRspUserLoginField_SysVersion_length);
            return -1;
        }
        // memset(data->SysVersion, 0, sizeof(data->SysVersion));
        // memcpy(data->SysVersion, CThostFtdcRspUserLoginField_SysVersion, CThostFtdcRspUserLoginField_SysVersion_length);
        strncpy(data->SysVersion, CThostFtdcRspUserLoginField_SysVersion, sizeof(data->SysVersion));
        CThostFtdcRspUserLoginField_SysVersion = NULL;
    }

    /// 广期所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcRspUserLoginField_GFEXTime != NULL ) {
        if(CThostFtdcRspUserLoginField_GFEXTime_length >= (Py_ssize_t)sizeof(data->GFEXTime)) {
            PyErr_Format(PyExc_ValueError, "GFEXTime too long: length=%zd (max allowed is 8)", CThostFtdcRspUserLoginField_GFEXTime_length);
            return -1;
        }
        // memset(data->GFEXTime, 0, sizeof(data->GFEXTime));
        // memcpy(data->GFEXTime, CThostFtdcRspUserLoginField_GFEXTime, CThostFtdcRspUserLoginField_GFEXTime_length);
        strncpy(data->GFEXTime, CThostFtdcRspUserLoginField_GFEXTime, sizeof(data->GFEXTime));
        CThostFtdcRspUserLoginField_GFEXTime = NULL;
    }

    /// 当前登录中心号
    /// typedef int TThostFtdcDRIdentityIDType
    data->LoginDRIdentityID = CThostFtdcRspUserLoginField_LoginDRIdentityID;

    /// 用户所属中心号
    /// typedef int TThostFtdcDRIdentityIDType
    data->UserDRIdentityID = CThostFtdcRspUserLoginField_UserDRIdentityID;

    /// 上次登陆时间
    /// typedef char TThostFtdcDateTimeType[17]
    if( CThostFtdcRspUserLoginField_LastLoginTime != NULL ) {
        if(CThostFtdcRspUserLoginField_LastLoginTime_length >= (Py_ssize_t)sizeof(data->LastLoginTime)) {
            PyErr_Format(PyExc_ValueError, "LastLoginTime too long: length=%zd (max allowed is 16)", CThostFtdcRspUserLoginField_LastLoginTime_length);
            return -1;
        }
        // memset(data->LastLoginTime, 0, sizeof(data->LastLoginTime));
        // memcpy(data->LastLoginTime, CThostFtdcRspUserLoginField_LastLoginTime, CThostFtdcRspUserLoginField_LastLoginTime_length);
        strncpy(data->LastLoginTime, CThostFtdcRspUserLoginField_LastLoginTime, sizeof(data->LastLoginTime));
        CThostFtdcRspUserLoginField_LastLoginTime = NULL;
    }

    /// 预留信息
    /// typedef char TThostFtdcReserveInfoType[65]
    if( CThostFtdcRspUserLoginField_ReserveInfo != NULL ) {
        if(CThostFtdcRspUserLoginField_ReserveInfo_length >= (Py_ssize_t)sizeof(data->ReserveInfo)) {
            PyErr_Format(PyExc_ValueError, "ReserveInfo too long: length=%zd (max allowed is 64)", CThostFtdcRspUserLoginField_ReserveInfo_length);
            return -1;
        }
        // memset(data->ReserveInfo, 0, sizeof(data->ReserveInfo));
        // memcpy(data->ReserveInfo, CThostFtdcRspUserLoginField_ReserveInfo, CThostFtdcRspUserLoginField_ReserveInfo_length);
        strncpy(data->ReserveInfo, CThostFtdcRspUserLoginField_ReserveInfo, sizeof(data->ReserveInfo));
        CThostFtdcRspUserLoginField_ReserveInfo = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspUserLoginFieldType_repr(PyObject *self) {

    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y}"
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
        , "SysVersion", data->SysVersion//, (Py_ssize_t)sizeof(data->SysVersion)
        , "GFEXTime", data->GFEXTime//, (Py_ssize_t)sizeof(data->GFEXTime)
        , "LoginDRIdentityID", data->LoginDRIdentityID
        , "UserDRIdentityID", data->UserDRIdentityID
        , "LastLoginTime", data->LastLoginTime//, (Py_ssize_t)sizeof(data->LastLoginTime)
        , "ReserveInfo", data->ReserveInfo//, (Py_ssize_t)sizeof(data->ReserveInfo)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserLoginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserLoginField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspUserLoginFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录成功时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_LoginTime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginTime, (Py_ssize_t)sizeof(data->LoginTime));
    return PyBytes_FromString(data->LoginTime);
}

static int PyCThostFtdcRspUserLoginFieldType_set_LoginTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::LoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LoginTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->LoginTime, 0, sizeof(data->LoginTime));
    // memcpy(data->LoginTime, buf, len);
    strncpy(data->LoginTime, buf, sizeof(data->LoginTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspUserLoginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspUserLoginFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统名称
/// typedef char TThostFtdcSystemNameType[41]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_SystemName(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SystemName, (Py_ssize_t)sizeof(data->SystemName));
    return PyBytes_FromString(data->SystemName);
}

static int PyCThostFtdcRspUserLoginFieldType_set_SystemName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SystemName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::SystemName)) {
        PyErr_SetString(PyExc_ValueError, "SystemName must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->SystemName, 0, sizeof(data->SystemName));
    // memcpy(data->SystemName, buf, len);
    strncpy(data->SystemName, buf, sizeof(data->SystemName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最大报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_MaxOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MaxOrderRef, (Py_ssize_t)sizeof(data->MaxOrderRef));
    return PyBytes_FromString(data->MaxOrderRef);
}

static int PyCThostFtdcRspUserLoginFieldType_set_MaxOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MaxOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::MaxOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "MaxOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->MaxOrderRef, 0, sizeof(data->MaxOrderRef));
    // memcpy(data->MaxOrderRef, buf, len);
    strncpy(data->MaxOrderRef, buf, sizeof(data->MaxOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上期所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_SHFETime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SHFETime, (Py_ssize_t)sizeof(data->SHFETime));
    return PyBytes_FromString(data->SHFETime);
}

static int PyCThostFtdcRspUserLoginFieldType_set_SHFETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SHFETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::SHFETime)) {
        PyErr_SetString(PyExc_ValueError, "SHFETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->SHFETime, 0, sizeof(data->SHFETime));
    // memcpy(data->SHFETime, buf, len);
    strncpy(data->SHFETime, buf, sizeof(data->SHFETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 大商所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_DCETime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DCETime, (Py_ssize_t)sizeof(data->DCETime));
    return PyBytes_FromString(data->DCETime);
}

static int PyCThostFtdcRspUserLoginFieldType_set_DCETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DCETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::DCETime)) {
        PyErr_SetString(PyExc_ValueError, "DCETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->DCETime, 0, sizeof(data->DCETime));
    // memcpy(data->DCETime, buf, len);
    strncpy(data->DCETime, buf, sizeof(data->DCETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 郑商所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_CZCETime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CZCETime, (Py_ssize_t)sizeof(data->CZCETime));
    return PyBytes_FromString(data->CZCETime);
}

static int PyCThostFtdcRspUserLoginFieldType_set_CZCETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CZCETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::CZCETime)) {
        PyErr_SetString(PyExc_ValueError, "CZCETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->CZCETime, 0, sizeof(data->CZCETime));
    // memcpy(data->CZCETime, buf, len);
    strncpy(data->CZCETime, buf, sizeof(data->CZCETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 中金所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_FFEXTime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FFEXTime, (Py_ssize_t)sizeof(data->FFEXTime));
    return PyBytes_FromString(data->FFEXTime);
}

static int PyCThostFtdcRspUserLoginFieldType_set_FFEXTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FFEXTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::FFEXTime)) {
        PyErr_SetString(PyExc_ValueError, "FFEXTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->FFEXTime, 0, sizeof(data->FFEXTime));
    // memcpy(data->FFEXTime, buf, len);
    strncpy(data->FFEXTime, buf, sizeof(data->FFEXTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 能源中心时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_INETime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->INETime, (Py_ssize_t)sizeof(data->INETime));
    return PyBytes_FromString(data->INETime);
}

static int PyCThostFtdcRspUserLoginFieldType_set_INETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "INETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::INETime)) {
        PyErr_SetString(PyExc_ValueError, "INETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->INETime, 0, sizeof(data->INETime));
    // memcpy(data->INETime, buf, len);
    strncpy(data->INETime, buf, sizeof(data->INETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 后台版本信息
/// typedef char TThostFtdcSysVersionType[41]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_SysVersion(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SysVersion, (Py_ssize_t)sizeof(data->SysVersion));
    return PyBytes_FromString(data->SysVersion);
}

static int PyCThostFtdcRspUserLoginFieldType_set_SysVersion(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SysVersion Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::SysVersion)) {
        PyErr_SetString(PyExc_ValueError, "SysVersion must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->SysVersion, 0, sizeof(data->SysVersion));
    // memcpy(data->SysVersion, buf, len);
    strncpy(data->SysVersion, buf, sizeof(data->SysVersion));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 广期所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_GFEXTime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->GFEXTime, (Py_ssize_t)sizeof(data->GFEXTime));
    return PyBytes_FromString(data->GFEXTime);
}

static int PyCThostFtdcRspUserLoginFieldType_set_GFEXTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "GFEXTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::GFEXTime)) {
        PyErr_SetString(PyExc_ValueError, "GFEXTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->GFEXTime, 0, sizeof(data->GFEXTime));
    // memcpy(data->GFEXTime, buf, len);
    strncpy(data->GFEXTime, buf, sizeof(data->GFEXTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上次登陆时间
/// typedef char TThostFtdcDateTimeType[17]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_LastLoginTime(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LastLoginTime, (Py_ssize_t)sizeof(data->LastLoginTime));
    return PyBytes_FromString(data->LastLoginTime);
}

static int PyCThostFtdcRspUserLoginFieldType_set_LastLoginTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastLoginTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::LastLoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LastLoginTime must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->LastLoginTime, 0, sizeof(data->LastLoginTime));
    // memcpy(data->LastLoginTime, buf, len);
    strncpy(data->LastLoginTime, buf, sizeof(data->LastLoginTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 预留信息
/// typedef char TThostFtdcReserveInfoType[65]
static PyObject *PyCThostFtdcRspUserLoginFieldType_get_ReserveInfo(PyObject *self, void *closure) {
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ReserveInfo, (Py_ssize_t)sizeof(data->ReserveInfo));
    return PyBytes_FromString(data->ReserveInfo);
}

static int PyCThostFtdcRspUserLoginFieldType_set_ReserveInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReserveInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspUserLoginField::ReserveInfo)) {
        PyErr_SetString(PyExc_ValueError, "ReserveInfo must be less than 64 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(self);
    CThostFtdcRspUserLoginField *data = &(extra->data);
    // memset(data->ReserveInfo, 0, sizeof(data->ReserveInfo));
    // memcpy(data->ReserveInfo, buf, len);
    strncpy(data->ReserveInfo, buf, sizeof(data->ReserveInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspUserLoginFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspUserLoginFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcRspUserLoginFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 当前登录中心号
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "LoginDRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspUserLoginFieldData, data.LoginDRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("当前登录中心号")
    },
    /// 用户所属中心号
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "UserDRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspUserLoginFieldData, data.UserDRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("用户所属中心号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspUserLoginFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspUserLoginFieldType_get_TradingDay,
    .set = PyCThostFtdcRspUserLoginFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 登录成功时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "LoginTime",
    .get = PyCThostFtdcRspUserLoginFieldType_get_LoginTime,
    .set = PyCThostFtdcRspUserLoginFieldType_set_LoginTime,
    .doc = PyDoc_STR("登录成功时间"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspUserLoginFieldType_get_BrokerID,
    .set = PyCThostFtdcRspUserLoginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspUserLoginFieldType_get_UserID,
    .set = PyCThostFtdcRspUserLoginFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 交易系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    {
    .name = "SystemName",
    .get = PyCThostFtdcRspUserLoginFieldType_get_SystemName,
    .set = PyCThostFtdcRspUserLoginFieldType_set_SystemName,
    .doc = PyDoc_STR("交易系统名称"),
    },
    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "MaxOrderRef",
    .get = PyCThostFtdcRspUserLoginFieldType_get_MaxOrderRef,
    .set = PyCThostFtdcRspUserLoginFieldType_set_MaxOrderRef,
    .doc = PyDoc_STR("最大报单引用"),
    },
    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SHFETime",
    .get = PyCThostFtdcRspUserLoginFieldType_get_SHFETime,
    .set = PyCThostFtdcRspUserLoginFieldType_set_SHFETime,
    .doc = PyDoc_STR("上期所时间"),
    },
    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "DCETime",
    .get = PyCThostFtdcRspUserLoginFieldType_get_DCETime,
    .set = PyCThostFtdcRspUserLoginFieldType_set_DCETime,
    .doc = PyDoc_STR("大商所时间"),
    },
    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CZCETime",
    .get = PyCThostFtdcRspUserLoginFieldType_get_CZCETime,
    .set = PyCThostFtdcRspUserLoginFieldType_set_CZCETime,
    .doc = PyDoc_STR("郑商所时间"),
    },
    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "FFEXTime",
    .get = PyCThostFtdcRspUserLoginFieldType_get_FFEXTime,
    .set = PyCThostFtdcRspUserLoginFieldType_set_FFEXTime,
    .doc = PyDoc_STR("中金所时间"),
    },
    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "INETime",
    .get = PyCThostFtdcRspUserLoginFieldType_get_INETime,
    .set = PyCThostFtdcRspUserLoginFieldType_set_INETime,
    .doc = PyDoc_STR("能源中心时间"),
    },
    /// 后台版本信息
    /// typedef char TThostFtdcSysVersionType[41]
    {
    .name = "SysVersion",
    .get = PyCThostFtdcRspUserLoginFieldType_get_SysVersion,
    .set = PyCThostFtdcRspUserLoginFieldType_set_SysVersion,
    .doc = PyDoc_STR("后台版本信息"),
    },
    /// 广期所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "GFEXTime",
    .get = PyCThostFtdcRspUserLoginFieldType_get_GFEXTime,
    .set = PyCThostFtdcRspUserLoginFieldType_set_GFEXTime,
    .doc = PyDoc_STR("广期所时间"),
    },
    /// 上次登陆时间
    /// typedef char TThostFtdcDateTimeType[17]
    {
    .name = "LastLoginTime",
    .get = PyCThostFtdcRspUserLoginFieldType_get_LastLoginTime,
    .set = PyCThostFtdcRspUserLoginFieldType_set_LastLoginTime,
    .doc = PyDoc_STR("上次登陆时间"),
    },
    /// 预留信息
    /// typedef char TThostFtdcReserveInfoType[65]
    {
    .name = "ReserveInfo",
    .get = PyCThostFtdcRspUserLoginFieldType_get_ReserveInfo,
    .set = PyCThostFtdcRspUserLoginFieldType_set_ReserveInfo,
    .doc = PyDoc_STR("预留信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspUserLoginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspUserLoginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户登录应答")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspUserLoginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspUserLoginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspUserLoginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspUserLoginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspUserLoginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspUserLoginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户登录应答")},
    {Py_tp_members, PyCThostFtdcRspUserLoginFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspUserLoginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspUserLoginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspUserLoginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspUserLoginFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspUserLoginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspUserLoginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspUserLoginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspUserLoginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspUserLoginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspUserLoginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspUserLoginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspUserLoginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspUserLoginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspUserLoginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspUserLoginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}