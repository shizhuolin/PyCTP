
#include "PyCThostFtdcExchangeOrderActionField.h"

///交易所报单操作

static int PyCThostFtdcExchangeOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "BranchID", "reserve1", "MacAddress", "IPAddress", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_ExchangeID_length = 0;

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeOrderActionField_OrderSysID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_OrderSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcExchangeOrderActionField_ActionFlag = 0;

    /// 价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcExchangeOrderActionField_LimitPrice = 0.0;

    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeOrderActionField_VolumeChange = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeOrderActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOrderActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeOrderActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeOrderActionField_InstallID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOrderActionField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_OrderLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOrderActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeOrderActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeOrderActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeOrderActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcExchangeOrderActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcExchangeOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_UserID_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExchangeOrderActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_BranchID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_reserve1_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_MacAddress_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeOrderActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cdiy#y#y#iy#y#y#y#y#cy#y#y#y#y#", (char **)kwlist
        , &CThostFtdcExchangeOrderActionField_ExchangeID, &CThostFtdcExchangeOrderActionField_ExchangeID_length
        , &CThostFtdcExchangeOrderActionField_OrderSysID, &CThostFtdcExchangeOrderActionField_OrderSysID_length
        , &CThostFtdcExchangeOrderActionField_ActionFlag
        , &CThostFtdcExchangeOrderActionField_LimitPrice
        , &CThostFtdcExchangeOrderActionField_VolumeChange
        , &CThostFtdcExchangeOrderActionField_ActionDate, &CThostFtdcExchangeOrderActionField_ActionDate_length
        , &CThostFtdcExchangeOrderActionField_ActionTime, &CThostFtdcExchangeOrderActionField_ActionTime_length
        , &CThostFtdcExchangeOrderActionField_TraderID, &CThostFtdcExchangeOrderActionField_TraderID_length
        , &CThostFtdcExchangeOrderActionField_InstallID
        , &CThostFtdcExchangeOrderActionField_OrderLocalID, &CThostFtdcExchangeOrderActionField_OrderLocalID_length
        , &CThostFtdcExchangeOrderActionField_ActionLocalID, &CThostFtdcExchangeOrderActionField_ActionLocalID_length
        , &CThostFtdcExchangeOrderActionField_ParticipantID, &CThostFtdcExchangeOrderActionField_ParticipantID_length
        , &CThostFtdcExchangeOrderActionField_ClientID, &CThostFtdcExchangeOrderActionField_ClientID_length
        , &CThostFtdcExchangeOrderActionField_BusinessUnit, &CThostFtdcExchangeOrderActionField_BusinessUnit_length
        , &CThostFtdcExchangeOrderActionField_OrderActionStatus
        , &CThostFtdcExchangeOrderActionField_UserID, &CThostFtdcExchangeOrderActionField_UserID_length
        , &CThostFtdcExchangeOrderActionField_BranchID, &CThostFtdcExchangeOrderActionField_BranchID_length
        , &CThostFtdcExchangeOrderActionField_reserve1, &CThostFtdcExchangeOrderActionField_reserve1_length
        , &CThostFtdcExchangeOrderActionField_MacAddress, &CThostFtdcExchangeOrderActionField_MacAddress_length
        , &CThostFtdcExchangeOrderActionField_IPAddress, &CThostFtdcExchangeOrderActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeOrderActionField_ExchangeID, CThostFtdcExchangeOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeOrderActionField_ExchangeID = NULL;
    }

    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeOrderActionField_OrderSysID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_OrderSysID_length >= (Py_ssize_t)sizeof(data->OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderActionField_OrderSysID_length);
            return -1;
        }
        // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
        // memcpy(data->OrderSysID, CThostFtdcExchangeOrderActionField_OrderSysID, CThostFtdcExchangeOrderActionField_OrderSysID_length);
        strncpy(data->OrderSysID, CThostFtdcExchangeOrderActionField_OrderSysID, sizeof(data->OrderSysID));
        CThostFtdcExchangeOrderActionField_OrderSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcExchangeOrderActionField_ActionFlag;

    /// 价格
    /// typedef double TThostFtdcPriceType
    data->LimitPrice = CThostFtdcExchangeOrderActionField_LimitPrice;

    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    data->VolumeChange = CThostFtdcExchangeOrderActionField_VolumeChange;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeOrderActionField_ActionDate != NULL ) {
        if(CThostFtdcExchangeOrderActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcExchangeOrderActionField_ActionDate, CThostFtdcExchangeOrderActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcExchangeOrderActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcExchangeOrderActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOrderActionField_ActionTime != NULL ) {
        if(CThostFtdcExchangeOrderActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcExchangeOrderActionField_ActionTime, CThostFtdcExchangeOrderActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcExchangeOrderActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcExchangeOrderActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeOrderActionField_TraderID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeOrderActionField_TraderID, CThostFtdcExchangeOrderActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeOrderActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeOrderActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeOrderActionField_InstallID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOrderActionField_OrderLocalID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOrderActionField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcExchangeOrderActionField_OrderLocalID, CThostFtdcExchangeOrderActionField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcExchangeOrderActionField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcExchangeOrderActionField_OrderLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOrderActionField_ActionLocalID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOrderActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcExchangeOrderActionField_ActionLocalID, CThostFtdcExchangeOrderActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcExchangeOrderActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcExchangeOrderActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeOrderActionField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOrderActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeOrderActionField_ParticipantID, CThostFtdcExchangeOrderActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeOrderActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeOrderActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeOrderActionField_ClientID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOrderActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeOrderActionField_ClientID, CThostFtdcExchangeOrderActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeOrderActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeOrderActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeOrderActionField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeOrderActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeOrderActionField_BusinessUnit, CThostFtdcExchangeOrderActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeOrderActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeOrderActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcExchangeOrderActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcExchangeOrderActionField_UserID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcExchangeOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcExchangeOrderActionField_UserID, CThostFtdcExchangeOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcExchangeOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcExchangeOrderActionField_UserID = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExchangeOrderActionField_BranchID != NULL ) {
        if(CThostFtdcExchangeOrderActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOrderActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExchangeOrderActionField_BranchID, CThostFtdcExchangeOrderActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExchangeOrderActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcExchangeOrderActionField_BranchID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcExchangeOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeOrderActionField_reserve1, CThostFtdcExchangeOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeOrderActionField_reserve1 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcExchangeOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeOrderActionField_MacAddress, CThostFtdcExchangeOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeOrderActionField_MacAddress = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcExchangeOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeOrderActionField_IPAddress, CThostFtdcExchangeOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeOrderActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OrderSysID", data->OrderSysID//, (Py_ssize_t)sizeof(data->OrderSysID)
        , "ActionFlag", data->ActionFlag
        , "LimitPrice", data->LimitPrice
        , "VolumeChange", data->VolumeChange
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OrderActionStatus", data->OrderActionStatus
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_OrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderSysID, (Py_ssize_t)sizeof(data->OrderSysID));
    return PyBytes_FromString(data->OrderSysID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_OrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->OrderSysID, 0, sizeof(data->OrderSysID));
    // memcpy(data->OrderSysID, buf, len);
    strncpy(data->OrderSysID, buf, sizeof(data->OrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOrderActionFieldData>(self);
    CThostFtdcExchangeOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeOrderActionFieldType_members[] = {
    /// 价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "LimitPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderActionFieldData, data.LimitPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("价格")
    },
    /// 数量变化
    /// typedef int TThostFtdcVolumeType
    {
        .name = "VolumeChange",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderActionFieldData, data.VolumeChange),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量变化")
    },
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOrderActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeOrderActionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OrderSysID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_OrderSysID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_OrderSysID,
    .doc = PyDoc_STR("报单编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_ActionDate,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_ActionTime,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_OrderLocalID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_BranchID,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所报单操作")},
    {Py_tp_members, PyCThostFtdcExchangeOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}