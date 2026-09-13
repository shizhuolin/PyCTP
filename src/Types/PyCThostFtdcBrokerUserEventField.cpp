
#include "PyCThostFtdcBrokerUserEventField.h"

///查询经纪公司用户事件

static int PyCThostFtdcBrokerUserEventFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "UserID", "UserEventType", "EventSequenceNo", "EventDate", "EventTime", "UserEventInfo", "InvestorID", "reserve1", "InstrumentID", "DRIdentityID", "TradingDay", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcBrokerUserEventField_BrokerID = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcBrokerUserEventField_UserID = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_UserID_length = 0;

    /// 用户事件类型
    /// typedef char TThostFtdcUserEventTypeType
    char CThostFtdcBrokerUserEventField_UserEventType = 0;

    /// 用户事件序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcBrokerUserEventField_EventSequenceNo = 0;

    /// 事件发生日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcBrokerUserEventField_EventDate = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_EventDate_length = 0;

    /// 事件发生时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcBrokerUserEventField_EventTime = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_EventTime_length = 0;

    /// 用户事件信息
    /// typedef char TThostFtdcUserEventInfoType[1025]
    char *CThostFtdcBrokerUserEventField_UserEventInfo = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_UserEventInfo_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcBrokerUserEventField_InvestorID = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcBrokerUserEventField_reserve1 = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_reserve1_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcBrokerUserEventField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_InstrumentID_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcBrokerUserEventField_DRIdentityID = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcBrokerUserEventField_TradingDay = NULL;
    Py_ssize_t CThostFtdcBrokerUserEventField_TradingDay_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ciy#y#y#y#y#y#iy#", (char **)kwlist
        , &CThostFtdcBrokerUserEventField_BrokerID, &CThostFtdcBrokerUserEventField_BrokerID_length
        , &CThostFtdcBrokerUserEventField_UserID, &CThostFtdcBrokerUserEventField_UserID_length
        , &CThostFtdcBrokerUserEventField_UserEventType
        , &CThostFtdcBrokerUserEventField_EventSequenceNo
        , &CThostFtdcBrokerUserEventField_EventDate, &CThostFtdcBrokerUserEventField_EventDate_length
        , &CThostFtdcBrokerUserEventField_EventTime, &CThostFtdcBrokerUserEventField_EventTime_length
        , &CThostFtdcBrokerUserEventField_UserEventInfo, &CThostFtdcBrokerUserEventField_UserEventInfo_length
        , &CThostFtdcBrokerUserEventField_InvestorID, &CThostFtdcBrokerUserEventField_InvestorID_length
        , &CThostFtdcBrokerUserEventField_reserve1, &CThostFtdcBrokerUserEventField_reserve1_length
        , &CThostFtdcBrokerUserEventField_InstrumentID, &CThostFtdcBrokerUserEventField_InstrumentID_length
        , &CThostFtdcBrokerUserEventField_DRIdentityID
        , &CThostFtdcBrokerUserEventField_TradingDay, &CThostFtdcBrokerUserEventField_TradingDay_length
    )) {
        return -1;
    }

    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcBrokerUserEventField_BrokerID != NULL ) {
        if(CThostFtdcBrokerUserEventField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcBrokerUserEventField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcBrokerUserEventField_BrokerID, CThostFtdcBrokerUserEventField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcBrokerUserEventField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcBrokerUserEventField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcBrokerUserEventField_UserID != NULL ) {
        if(CThostFtdcBrokerUserEventField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcBrokerUserEventField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcBrokerUserEventField_UserID, CThostFtdcBrokerUserEventField_UserID_length);
        strncpy(data->UserID, CThostFtdcBrokerUserEventField_UserID, sizeof(data->UserID));
        CThostFtdcBrokerUserEventField_UserID = NULL;
    }

    /// 用户事件类型
    /// typedef char TThostFtdcUserEventTypeType
    data->UserEventType = CThostFtdcBrokerUserEventField_UserEventType;

    /// 用户事件序号
    /// typedef int TThostFtdcSequenceNoType
    data->EventSequenceNo = CThostFtdcBrokerUserEventField_EventSequenceNo;

    /// 事件发生日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcBrokerUserEventField_EventDate != NULL ) {
        if(CThostFtdcBrokerUserEventField_EventDate_length >= (Py_ssize_t)sizeof(data->EventDate)) {
            PyErr_Format(PyExc_ValueError, "EventDate too long: length=%zd (max allowed is 8)", CThostFtdcBrokerUserEventField_EventDate_length);
            return -1;
        }
        // memset(data->EventDate, 0, sizeof(data->EventDate));
        // memcpy(data->EventDate, CThostFtdcBrokerUserEventField_EventDate, CThostFtdcBrokerUserEventField_EventDate_length);
        strncpy(data->EventDate, CThostFtdcBrokerUserEventField_EventDate, sizeof(data->EventDate));
        CThostFtdcBrokerUserEventField_EventDate = NULL;
    }

    /// 事件发生时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcBrokerUserEventField_EventTime != NULL ) {
        if(CThostFtdcBrokerUserEventField_EventTime_length >= (Py_ssize_t)sizeof(data->EventTime)) {
            PyErr_Format(PyExc_ValueError, "EventTime too long: length=%zd (max allowed is 8)", CThostFtdcBrokerUserEventField_EventTime_length);
            return -1;
        }
        // memset(data->EventTime, 0, sizeof(data->EventTime));
        // memcpy(data->EventTime, CThostFtdcBrokerUserEventField_EventTime, CThostFtdcBrokerUserEventField_EventTime_length);
        strncpy(data->EventTime, CThostFtdcBrokerUserEventField_EventTime, sizeof(data->EventTime));
        CThostFtdcBrokerUserEventField_EventTime = NULL;
    }

    /// 用户事件信息
    /// typedef char TThostFtdcUserEventInfoType[1025]
    if( CThostFtdcBrokerUserEventField_UserEventInfo != NULL ) {
        if(CThostFtdcBrokerUserEventField_UserEventInfo_length >= (Py_ssize_t)sizeof(data->UserEventInfo)) {
            PyErr_Format(PyExc_ValueError, "UserEventInfo too long: length=%zd (max allowed is 1024)", CThostFtdcBrokerUserEventField_UserEventInfo_length);
            return -1;
        }
        // memset(data->UserEventInfo, 0, sizeof(data->UserEventInfo));
        // memcpy(data->UserEventInfo, CThostFtdcBrokerUserEventField_UserEventInfo, CThostFtdcBrokerUserEventField_UserEventInfo_length);
        strncpy(data->UserEventInfo, CThostFtdcBrokerUserEventField_UserEventInfo, sizeof(data->UserEventInfo));
        CThostFtdcBrokerUserEventField_UserEventInfo = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcBrokerUserEventField_InvestorID != NULL ) {
        if(CThostFtdcBrokerUserEventField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcBrokerUserEventField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcBrokerUserEventField_InvestorID, CThostFtdcBrokerUserEventField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcBrokerUserEventField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcBrokerUserEventField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcBrokerUserEventField_reserve1 != NULL ) {
        if(CThostFtdcBrokerUserEventField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcBrokerUserEventField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcBrokerUserEventField_reserve1, CThostFtdcBrokerUserEventField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcBrokerUserEventField_reserve1, sizeof(data->reserve1));
        CThostFtdcBrokerUserEventField_reserve1 = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcBrokerUserEventField_InstrumentID != NULL ) {
        if(CThostFtdcBrokerUserEventField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcBrokerUserEventField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcBrokerUserEventField_InstrumentID, CThostFtdcBrokerUserEventField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcBrokerUserEventField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcBrokerUserEventField_InstrumentID = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcBrokerUserEventField_DRIdentityID;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcBrokerUserEventField_TradingDay != NULL ) {
        if(CThostFtdcBrokerUserEventField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcBrokerUserEventField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcBrokerUserEventField_TradingDay, CThostFtdcBrokerUserEventField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcBrokerUserEventField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcBrokerUserEventField_TradingDay = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcBrokerUserEventFieldType_repr(PyObject *self) {

    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "UserEventType", data->UserEventType
        , "EventSequenceNo", data->EventSequenceNo
        , "EventDate", data->EventDate//, (Py_ssize_t)sizeof(data->EventDate)
        , "EventTime", data->EventTime//, (Py_ssize_t)sizeof(data->EventTime)
        , "UserEventInfo", data->UserEventInfo//, (Py_ssize_t)sizeof(data->UserEventInfo)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "DRIdentityID", data->DRIdentityID
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserEventField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserEventField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户事件类型
/// typedef char TThostFtdcUserEventTypeType
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_UserEventType(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->UserEventType), 1);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_UserEventType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserEventType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::UserEventType)) {
        PyErr_SetString(PyExc_ValueError, "UserEventType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    data->UserEventType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 事件发生日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_EventDate(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EventDate, (Py_ssize_t)sizeof(data->EventDate));
    return PyBytes_FromString(data->EventDate);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_EventDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EventDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::EventDate)) {
        PyErr_SetString(PyExc_ValueError, "EventDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->EventDate, 0, sizeof(data->EventDate));
    // memcpy(data->EventDate, buf, len);
    strncpy(data->EventDate, buf, sizeof(data->EventDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 事件发生时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_EventTime(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EventTime, (Py_ssize_t)sizeof(data->EventTime));
    return PyBytes_FromString(data->EventTime);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_EventTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EventTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::EventTime)) {
        PyErr_SetString(PyExc_ValueError, "EventTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->EventTime, 0, sizeof(data->EventTime));
    // memcpy(data->EventTime, buf, len);
    strncpy(data->EventTime, buf, sizeof(data->EventTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户事件信息
/// typedef char TThostFtdcUserEventInfoType[1025]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_UserEventInfo(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserEventInfo, (Py_ssize_t)sizeof(data->UserEventInfo));
    return PyBytes_FromString(data->UserEventInfo);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_UserEventInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserEventInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::UserEventInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserEventInfo must be less than 1024 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->UserEventInfo, 0, sizeof(data->UserEventInfo));
    // memcpy(data->UserEventInfo, buf, len);
    strncpy(data->UserEventInfo, buf, sizeof(data->UserEventInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcBrokerUserEventFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcBrokerUserEventFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcBrokerUserEventField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcBrokerUserEventFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcBrokerUserEventFieldData>(self);
    CThostFtdcBrokerUserEventField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcBrokerUserEventFieldType_members[] = {
    /// 用户事件序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "EventSequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserEventFieldData, data.EventSequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("用户事件序号")
    },
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcBrokerUserEventFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcBrokerUserEventFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_BrokerID,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_UserID,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 用户事件类型
    /// typedef char TThostFtdcUserEventTypeType
    {
    .name = "UserEventType",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_UserEventType,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_UserEventType,
    .doc = PyDoc_STR("用户事件类型"),
    },
    /// 事件发生日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "EventDate",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_EventDate,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_EventDate,
    .doc = PyDoc_STR("事件发生日期"),
    },
    /// 事件发生时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "EventTime",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_EventTime,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_EventTime,
    .doc = PyDoc_STR("事件发生时间"),
    },
    /// 用户事件信息
    /// typedef char TThostFtdcUserEventInfoType[1025]
    {
    .name = "UserEventInfo",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_UserEventInfo,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_UserEventInfo,
    .doc = PyDoc_STR("用户事件信息"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_InvestorID,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_reserve1,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_InstrumentID,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcBrokerUserEventFieldType_get_TradingDay,
    .set = PyCThostFtdcBrokerUserEventFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcBrokerUserEventFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcBrokerUserEventField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询经纪公司用户事件")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcBrokerUserEventFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcBrokerUserEventFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcBrokerUserEventFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcBrokerUserEventFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcBrokerUserEventFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcBrokerUserEventFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询经纪公司用户事件")},
    {Py_tp_members, PyCThostFtdcBrokerUserEventFieldType_members},
    {Py_tp_getset, PyCThostFtdcBrokerUserEventFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcBrokerUserEventFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcBrokerUserEventFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcBrokerUserEventFieldType_spec = {
    .name = "PyCTP.CThostFtdcBrokerUserEventField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcBrokerUserEventFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcBrokerUserEventFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcBrokerUserEventFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcBrokerUserEventFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcBrokerUserEventFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcBrokerUserEventFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcBrokerUserEventFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcBrokerUserEventFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcBrokerUserEventField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserEventField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}