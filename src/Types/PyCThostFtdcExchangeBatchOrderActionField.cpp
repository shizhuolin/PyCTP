
#include "PyCThostFtdcExchangeBatchOrderActionField.h"

///交易所批量报单操作

static int PyCThostFtdcExchangeBatchOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ActionDate", "ActionTime", "TraderID", "InstallID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "reserve1", "MacAddress", "IPAddress", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeBatchOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_ExchangeID_length = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeBatchOrderActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeBatchOrderActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeBatchOrderActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeBatchOrderActionField_InstallID = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeBatchOrderActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeBatchOrderActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeBatchOrderActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeBatchOrderActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcExchangeBatchOrderActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcExchangeBatchOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_UserID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeBatchOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_reserve1_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeBatchOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_MacAddress_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeBatchOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeBatchOrderActionField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#y#y#y#cy#y#y#y#", (char **)kwlist
        , &CThostFtdcExchangeBatchOrderActionField_ExchangeID, &CThostFtdcExchangeBatchOrderActionField_ExchangeID_length
        , &CThostFtdcExchangeBatchOrderActionField_ActionDate, &CThostFtdcExchangeBatchOrderActionField_ActionDate_length
        , &CThostFtdcExchangeBatchOrderActionField_ActionTime, &CThostFtdcExchangeBatchOrderActionField_ActionTime_length
        , &CThostFtdcExchangeBatchOrderActionField_TraderID, &CThostFtdcExchangeBatchOrderActionField_TraderID_length
        , &CThostFtdcExchangeBatchOrderActionField_InstallID
        , &CThostFtdcExchangeBatchOrderActionField_ActionLocalID, &CThostFtdcExchangeBatchOrderActionField_ActionLocalID_length
        , &CThostFtdcExchangeBatchOrderActionField_ParticipantID, &CThostFtdcExchangeBatchOrderActionField_ParticipantID_length
        , &CThostFtdcExchangeBatchOrderActionField_ClientID, &CThostFtdcExchangeBatchOrderActionField_ClientID_length
        , &CThostFtdcExchangeBatchOrderActionField_BusinessUnit, &CThostFtdcExchangeBatchOrderActionField_BusinessUnit_length
        , &CThostFtdcExchangeBatchOrderActionField_OrderActionStatus
        , &CThostFtdcExchangeBatchOrderActionField_UserID, &CThostFtdcExchangeBatchOrderActionField_UserID_length
        , &CThostFtdcExchangeBatchOrderActionField_reserve1, &CThostFtdcExchangeBatchOrderActionField_reserve1_length
        , &CThostFtdcExchangeBatchOrderActionField_MacAddress, &CThostFtdcExchangeBatchOrderActionField_MacAddress_length
        , &CThostFtdcExchangeBatchOrderActionField_IPAddress, &CThostFtdcExchangeBatchOrderActionField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeBatchOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeBatchOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeBatchOrderActionField_ExchangeID, CThostFtdcExchangeBatchOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeBatchOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeBatchOrderActionField_ExchangeID = NULL;
    }

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeBatchOrderActionField_ActionDate != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeBatchOrderActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcExchangeBatchOrderActionField_ActionDate, CThostFtdcExchangeBatchOrderActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcExchangeBatchOrderActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcExchangeBatchOrderActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeBatchOrderActionField_ActionTime != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeBatchOrderActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcExchangeBatchOrderActionField_ActionTime, CThostFtdcExchangeBatchOrderActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcExchangeBatchOrderActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcExchangeBatchOrderActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeBatchOrderActionField_TraderID != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeBatchOrderActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeBatchOrderActionField_TraderID, CThostFtdcExchangeBatchOrderActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeBatchOrderActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeBatchOrderActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeBatchOrderActionField_InstallID;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeBatchOrderActionField_ActionLocalID != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeBatchOrderActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcExchangeBatchOrderActionField_ActionLocalID, CThostFtdcExchangeBatchOrderActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcExchangeBatchOrderActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcExchangeBatchOrderActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeBatchOrderActionField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeBatchOrderActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeBatchOrderActionField_ParticipantID, CThostFtdcExchangeBatchOrderActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeBatchOrderActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeBatchOrderActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeBatchOrderActionField_ClientID != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeBatchOrderActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeBatchOrderActionField_ClientID, CThostFtdcExchangeBatchOrderActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeBatchOrderActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeBatchOrderActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeBatchOrderActionField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeBatchOrderActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeBatchOrderActionField_BusinessUnit, CThostFtdcExchangeBatchOrderActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeBatchOrderActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeBatchOrderActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcExchangeBatchOrderActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcExchangeBatchOrderActionField_UserID != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcExchangeBatchOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcExchangeBatchOrderActionField_UserID, CThostFtdcExchangeBatchOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcExchangeBatchOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcExchangeBatchOrderActionField_UserID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeBatchOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeBatchOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeBatchOrderActionField_reserve1, CThostFtdcExchangeBatchOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeBatchOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeBatchOrderActionField_reserve1 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeBatchOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeBatchOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeBatchOrderActionField_MacAddress, CThostFtdcExchangeBatchOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeBatchOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeBatchOrderActionField_MacAddress = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeBatchOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcExchangeBatchOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeBatchOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeBatchOrderActionField_IPAddress, CThostFtdcExchangeBatchOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeBatchOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeBatchOrderActionField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeBatchOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeBatchOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeBatchOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeBatchOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeBatchOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeBatchOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeBatchOrderActionFieldData>(self);
    CThostFtdcExchangeBatchOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeBatchOrderActionFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeBatchOrderActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeBatchOrderActionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_ActionDate,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_ActionTime,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeBatchOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeBatchOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeBatchOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeBatchOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所批量报单操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeBatchOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeBatchOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeBatchOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeBatchOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeBatchOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeBatchOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所批量报单操作")},
    {Py_tp_members, PyCThostFtdcExchangeBatchOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeBatchOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeBatchOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeBatchOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeBatchOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeBatchOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeBatchOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeBatchOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeBatchOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeBatchOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeBatchOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeBatchOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeBatchOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeBatchOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeBatchOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeBatchOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}