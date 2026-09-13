
#include "PyCThostFtdcExchangeQuoteActionField.h"

///交易所报价操作

static int PyCThostFtdcExchangeQuoteActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "QuoteSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "QuoteLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "reserve1", "MacAddress", "IPAddress", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeQuoteActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_ExchangeID_length = 0;

    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeQuoteActionField_QuoteSysID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_QuoteSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcExchangeQuoteActionField_ActionFlag = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeQuoteActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeQuoteActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeQuoteActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeQuoteActionField_InstallID = 0;

    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeQuoteActionField_QuoteLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_QuoteLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeQuoteActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeQuoteActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeQuoteActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeQuoteActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcExchangeQuoteActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcExchangeQuoteActionField_UserID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeQuoteActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_reserve1_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeQuoteActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_MacAddress_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeQuoteActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#", (char **)kwlist
        , &CThostFtdcExchangeQuoteActionField_ExchangeID, &CThostFtdcExchangeQuoteActionField_ExchangeID_length
        , &CThostFtdcExchangeQuoteActionField_QuoteSysID, &CThostFtdcExchangeQuoteActionField_QuoteSysID_length
        , &CThostFtdcExchangeQuoteActionField_ActionFlag
        , &CThostFtdcExchangeQuoteActionField_ActionDate, &CThostFtdcExchangeQuoteActionField_ActionDate_length
        , &CThostFtdcExchangeQuoteActionField_ActionTime, &CThostFtdcExchangeQuoteActionField_ActionTime_length
        , &CThostFtdcExchangeQuoteActionField_TraderID, &CThostFtdcExchangeQuoteActionField_TraderID_length
        , &CThostFtdcExchangeQuoteActionField_InstallID
        , &CThostFtdcExchangeQuoteActionField_QuoteLocalID, &CThostFtdcExchangeQuoteActionField_QuoteLocalID_length
        , &CThostFtdcExchangeQuoteActionField_ActionLocalID, &CThostFtdcExchangeQuoteActionField_ActionLocalID_length
        , &CThostFtdcExchangeQuoteActionField_ParticipantID, &CThostFtdcExchangeQuoteActionField_ParticipantID_length
        , &CThostFtdcExchangeQuoteActionField_ClientID, &CThostFtdcExchangeQuoteActionField_ClientID_length
        , &CThostFtdcExchangeQuoteActionField_BusinessUnit, &CThostFtdcExchangeQuoteActionField_BusinessUnit_length
        , &CThostFtdcExchangeQuoteActionField_OrderActionStatus
        , &CThostFtdcExchangeQuoteActionField_UserID, &CThostFtdcExchangeQuoteActionField_UserID_length
        , &CThostFtdcExchangeQuoteActionField_reserve1, &CThostFtdcExchangeQuoteActionField_reserve1_length
        , &CThostFtdcExchangeQuoteActionField_MacAddress, &CThostFtdcExchangeQuoteActionField_MacAddress_length
        , &CThostFtdcExchangeQuoteActionField_IPAddress, &CThostFtdcExchangeQuoteActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeQuoteActionField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeQuoteActionField_ExchangeID, CThostFtdcExchangeQuoteActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeQuoteActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeQuoteActionField_ExchangeID = NULL;
    }

    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeQuoteActionField_QuoteSysID != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_QuoteSysID_length >= (Py_ssize_t)sizeof(data->QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteActionField_QuoteSysID_length);
            return -1;
        }
        // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
        // memcpy(data->QuoteSysID, CThostFtdcExchangeQuoteActionField_QuoteSysID, CThostFtdcExchangeQuoteActionField_QuoteSysID_length);
        strncpy(data->QuoteSysID, CThostFtdcExchangeQuoteActionField_QuoteSysID, sizeof(data->QuoteSysID));
        CThostFtdcExchangeQuoteActionField_QuoteSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcExchangeQuoteActionField_ActionFlag;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeQuoteActionField_ActionDate != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcExchangeQuoteActionField_ActionDate, CThostFtdcExchangeQuoteActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcExchangeQuoteActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcExchangeQuoteActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeQuoteActionField_ActionTime != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcExchangeQuoteActionField_ActionTime, CThostFtdcExchangeQuoteActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcExchangeQuoteActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcExchangeQuoteActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeQuoteActionField_TraderID != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeQuoteActionField_TraderID, CThostFtdcExchangeQuoteActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeQuoteActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeQuoteActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeQuoteActionField_InstallID;

    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeQuoteActionField_QuoteLocalID != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_QuoteLocalID_length >= (Py_ssize_t)sizeof(data->QuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeQuoteActionField_QuoteLocalID_length);
            return -1;
        }
        // memset(data->QuoteLocalID, 0, sizeof(data->QuoteLocalID));
        // memcpy(data->QuoteLocalID, CThostFtdcExchangeQuoteActionField_QuoteLocalID, CThostFtdcExchangeQuoteActionField_QuoteLocalID_length);
        strncpy(data->QuoteLocalID, CThostFtdcExchangeQuoteActionField_QuoteLocalID, sizeof(data->QuoteLocalID));
        CThostFtdcExchangeQuoteActionField_QuoteLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeQuoteActionField_ActionLocalID != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeQuoteActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcExchangeQuoteActionField_ActionLocalID, CThostFtdcExchangeQuoteActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcExchangeQuoteActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcExchangeQuoteActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeQuoteActionField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeQuoteActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeQuoteActionField_ParticipantID, CThostFtdcExchangeQuoteActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeQuoteActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeQuoteActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeQuoteActionField_ClientID != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeQuoteActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeQuoteActionField_ClientID, CThostFtdcExchangeQuoteActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeQuoteActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeQuoteActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeQuoteActionField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeQuoteActionField_BusinessUnit, CThostFtdcExchangeQuoteActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeQuoteActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeQuoteActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcExchangeQuoteActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcExchangeQuoteActionField_UserID != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcExchangeQuoteActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcExchangeQuoteActionField_UserID, CThostFtdcExchangeQuoteActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcExchangeQuoteActionField_UserID, sizeof(data->UserID));
        CThostFtdcExchangeQuoteActionField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeQuoteActionField_reserve1 != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeQuoteActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeQuoteActionField_reserve1, CThostFtdcExchangeQuoteActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeQuoteActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeQuoteActionField_reserve1 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeQuoteActionField_MacAddress != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeQuoteActionField_MacAddress, CThostFtdcExchangeQuoteActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeQuoteActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeQuoteActionField_MacAddress = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeQuoteActionField_IPAddress != NULL ) {
        if(CThostFtdcExchangeQuoteActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeQuoteActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeQuoteActionField_IPAddress, CThostFtdcExchangeQuoteActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeQuoteActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeQuoteActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "QuoteSysID", data->QuoteSysID//, (Py_ssize_t)sizeof(data->QuoteSysID)
        , "ActionFlag", data->ActionFlag
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "QuoteLocalID", data->QuoteLocalID//, (Py_ssize_t)sizeof(data->QuoteLocalID)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OrderActionStatus", data->OrderActionStatus
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeQuoteActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeQuoteActionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价操作编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_QuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteSysID, (Py_ssize_t)sizeof(data->QuoteSysID));
    return PyBytes_FromString(data->QuoteSysID);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_QuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::QuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
    // memcpy(data->QuoteSysID, buf, len);
    strncpy(data->QuoteSysID, buf, sizeof(data->QuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报价编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_QuoteLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteLocalID, (Py_ssize_t)sizeof(data->QuoteLocalID));
    return PyBytes_FromString(data->QuoteLocalID);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_QuoteLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::QuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->QuoteLocalID, 0, sizeof(data->QuoteLocalID));
    // memcpy(data->QuoteLocalID, buf, len);
    strncpy(data->QuoteLocalID, buf, sizeof(data->QuoteLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeQuoteActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeQuoteActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteActionFieldData>(self);
    CThostFtdcExchangeQuoteActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeQuoteActionFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeQuoteActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeQuoteActionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 报价操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "QuoteSysID",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_QuoteSysID,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_QuoteSysID,
    .doc = PyDoc_STR("报价操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_ActionDate,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_ActionTime,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "QuoteLocalID",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_QuoteLocalID,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_QuoteLocalID,
    .doc = PyDoc_STR("本地报价编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_UserID,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeQuoteActionFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeQuoteActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeQuoteActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeQuoteActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所报价操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeQuoteActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeQuoteActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeQuoteActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeQuoteActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeQuoteActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeQuoteActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所报价操作")},
    {Py_tp_members, PyCThostFtdcExchangeQuoteActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeQuoteActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeQuoteActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeQuoteActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeQuoteActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeQuoteActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeQuoteActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeQuoteActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeQuoteActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeQuoteActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeQuoteActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeQuoteActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeQuoteActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeQuoteActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeQuoteActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeQuoteActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}