
#include "PyCThostFtdcExchangeForQuoteField.h"

///交易所询价信息

static int PyCThostFtdcExchangeForQuoteFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ForQuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "InsertDate", "InsertTime", "ForQuoteStatus", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress", NULL };


    /// 本地询价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeForQuoteField_ForQuoteLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_ForQuoteLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeForQuoteField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeForQuoteField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeForQuoteField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeForQuoteField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_reserve1_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeForQuoteField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeForQuoteField_InstallID = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeForQuoteField_InsertDate = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeForQuoteField_InsertTime = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_InsertTime_length = 0;

    /// 询价状态
    /// typedef char TThostFtdcForQuoteStatusType
    char CThostFtdcExchangeForQuoteField_ForQuoteStatus = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeForQuoteField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeForQuoteField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_MacAddress_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeForQuoteField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeForQuoteField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeForQuoteField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#iy#y#cy#y#y#y#", (char **)kwlist
        , &CThostFtdcExchangeForQuoteField_ForQuoteLocalID, &CThostFtdcExchangeForQuoteField_ForQuoteLocalID_length
        , &CThostFtdcExchangeForQuoteField_ExchangeID, &CThostFtdcExchangeForQuoteField_ExchangeID_length
        , &CThostFtdcExchangeForQuoteField_ParticipantID, &CThostFtdcExchangeForQuoteField_ParticipantID_length
        , &CThostFtdcExchangeForQuoteField_ClientID, &CThostFtdcExchangeForQuoteField_ClientID_length
        , &CThostFtdcExchangeForQuoteField_reserve1, &CThostFtdcExchangeForQuoteField_reserve1_length
        , &CThostFtdcExchangeForQuoteField_TraderID, &CThostFtdcExchangeForQuoteField_TraderID_length
        , &CThostFtdcExchangeForQuoteField_InstallID
        , &CThostFtdcExchangeForQuoteField_InsertDate, &CThostFtdcExchangeForQuoteField_InsertDate_length
        , &CThostFtdcExchangeForQuoteField_InsertTime, &CThostFtdcExchangeForQuoteField_InsertTime_length
        , &CThostFtdcExchangeForQuoteField_ForQuoteStatus
        , &CThostFtdcExchangeForQuoteField_reserve2, &CThostFtdcExchangeForQuoteField_reserve2_length
        , &CThostFtdcExchangeForQuoteField_MacAddress, &CThostFtdcExchangeForQuoteField_MacAddress_length
        , &CThostFtdcExchangeForQuoteField_ExchangeInstID, &CThostFtdcExchangeForQuoteField_ExchangeInstID_length
        , &CThostFtdcExchangeForQuoteField_IPAddress, &CThostFtdcExchangeForQuoteField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);


    /// 本地询价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeForQuoteField_ForQuoteLocalID != NULL ) {
        if(CThostFtdcExchangeForQuoteField_ForQuoteLocalID_length >= (Py_ssize_t)sizeof(data->ForQuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeForQuoteField_ForQuoteLocalID_length);
            return -1;
        }
        // memset(data->ForQuoteLocalID, 0, sizeof(data->ForQuoteLocalID));
        // memcpy(data->ForQuoteLocalID, CThostFtdcExchangeForQuoteField_ForQuoteLocalID, CThostFtdcExchangeForQuoteField_ForQuoteLocalID_length);
        strncpy(data->ForQuoteLocalID, CThostFtdcExchangeForQuoteField_ForQuoteLocalID, sizeof(data->ForQuoteLocalID));
        CThostFtdcExchangeForQuoteField_ForQuoteLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeForQuoteField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeForQuoteField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeForQuoteField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeForQuoteField_ExchangeID, CThostFtdcExchangeForQuoteField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeForQuoteField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeForQuoteField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeForQuoteField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeForQuoteField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeForQuoteField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeForQuoteField_ParticipantID, CThostFtdcExchangeForQuoteField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeForQuoteField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeForQuoteField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeForQuoteField_ClientID != NULL ) {
        if(CThostFtdcExchangeForQuoteField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeForQuoteField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeForQuoteField_ClientID, CThostFtdcExchangeForQuoteField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeForQuoteField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeForQuoteField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeForQuoteField_reserve1 != NULL ) {
        if(CThostFtdcExchangeForQuoteField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeForQuoteField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeForQuoteField_reserve1, CThostFtdcExchangeForQuoteField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeForQuoteField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeForQuoteField_reserve1 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeForQuoteField_TraderID != NULL ) {
        if(CThostFtdcExchangeForQuoteField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeForQuoteField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeForQuoteField_TraderID, CThostFtdcExchangeForQuoteField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeForQuoteField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeForQuoteField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeForQuoteField_InstallID;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeForQuoteField_InsertDate != NULL ) {
        if(CThostFtdcExchangeForQuoteField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeForQuoteField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcExchangeForQuoteField_InsertDate, CThostFtdcExchangeForQuoteField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcExchangeForQuoteField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcExchangeForQuoteField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeForQuoteField_InsertTime != NULL ) {
        if(CThostFtdcExchangeForQuoteField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeForQuoteField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcExchangeForQuoteField_InsertTime, CThostFtdcExchangeForQuoteField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcExchangeForQuoteField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcExchangeForQuoteField_InsertTime = NULL;
    }

    /// 询价状态
    /// typedef char TThostFtdcForQuoteStatusType
    data->ForQuoteStatus = CThostFtdcExchangeForQuoteField_ForQuoteStatus;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeForQuoteField_reserve2 != NULL ) {
        if(CThostFtdcExchangeForQuoteField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeForQuoteField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExchangeForQuoteField_reserve2, CThostFtdcExchangeForQuoteField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExchangeForQuoteField_reserve2, sizeof(data->reserve2));
        CThostFtdcExchangeForQuoteField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeForQuoteField_MacAddress != NULL ) {
        if(CThostFtdcExchangeForQuoteField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeForQuoteField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeForQuoteField_MacAddress, CThostFtdcExchangeForQuoteField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeForQuoteField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeForQuoteField_MacAddress = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeForQuoteField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeForQuoteField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeForQuoteField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeForQuoteField_ExchangeInstID, CThostFtdcExchangeForQuoteField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeForQuoteField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeForQuoteField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeForQuoteField_IPAddress != NULL ) {
        if(CThostFtdcExchangeForQuoteField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeForQuoteField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeForQuoteField_IPAddress, CThostFtdcExchangeForQuoteField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeForQuoteField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeForQuoteField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeForQuoteFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
        , "ForQuoteLocalID", data->ForQuoteLocalID//, (Py_ssize_t)sizeof(data->ForQuoteLocalID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "InsertDate", data->InsertDate//, (Py_ssize_t)sizeof(data->InsertDate)
        , "InsertTime", data->InsertTime//, (Py_ssize_t)sizeof(data->InsertTime)
        , "ForQuoteStatus", data->ForQuoteStatus
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeForQuoteField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeForQuoteField repr");
        return NULL;
    }

    return repr;
}


/// 本地询价编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_ForQuoteLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteLocalID, (Py_ssize_t)sizeof(data->ForQuoteLocalID));
    return PyBytes_FromString(data->ForQuoteLocalID);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_ForQuoteLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::ForQuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->ForQuoteLocalID, 0, sizeof(data->ForQuoteLocalID));
    // memcpy(data->ForQuoteLocalID, buf, len);
    strncpy(data->ForQuoteLocalID, buf, sizeof(data->ForQuoteLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 询价状态
/// typedef char TThostFtdcForQuoteStatusType
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_ForQuoteStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ForQuoteStatus), 1);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_ForQuoteStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::ForQuoteStatus)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    data->ForQuoteStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeForQuoteFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeForQuoteFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeForQuoteField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeForQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeForQuoteFieldData>(self);
    CThostFtdcExchangeForQuoteField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeForQuoteFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeForQuoteFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeForQuoteFieldType_getsets[] = {
    /// 本地询价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ForQuoteLocalID",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_ForQuoteLocalID,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_ForQuoteLocalID,
    .doc = PyDoc_STR("本地询价编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_InsertDate,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_InsertTime,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 询价状态
    /// typedef char TThostFtdcForQuoteStatusType
    {
    .name = "ForQuoteStatus",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_ForQuoteStatus,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_ForQuoteStatus,
    .doc = PyDoc_STR("询价状态"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_reserve2,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeForQuoteFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeForQuoteFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeForQuoteFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeForQuoteField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所询价信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeForQuoteFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeForQuoteFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeForQuoteFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeForQuoteFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeForQuoteFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeForQuoteFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所询价信息")},
    {Py_tp_members, PyCThostFtdcExchangeForQuoteFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeForQuoteFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeForQuoteFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeForQuoteFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeForQuoteFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeForQuoteField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeForQuoteFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeForQuoteFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeForQuoteFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeForQuoteFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeForQuoteFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeForQuoteFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeForQuoteFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeForQuoteFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeForQuoteField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeForQuoteField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}