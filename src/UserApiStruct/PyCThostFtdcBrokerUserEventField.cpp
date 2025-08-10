
#include "PyCThostFtdcBrokerUserEventField.h"

///查询经纪公司用户事件

static PyObject *PyCThostFtdcBrokerUserEventField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserEventField *self = (PyCThostFtdcBrokerUserEventField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserEventField_init(PyCThostFtdcBrokerUserEventField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "UserEventType", "EventSequenceNo", "EventDate", "EventTime", "UserEventInfo", "InvestorID", "reserve1", "InstrumentID", "DRIdentityID", "TradingDay",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerUserEventField_BrokerID = NULL;
    Py_ssize_t BrokerUserEventField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *BrokerUserEventField_UserID = NULL;
    Py_ssize_t BrokerUserEventField_UserID_len = 0;
            
    ///用户事件类型
    // TThostFtdcUserEventTypeType char
    char BrokerUserEventField_UserEventType = 0;
            
    ///用户事件序号
    // TThostFtdcSequenceNoType int
    int BrokerUserEventField_EventSequenceNo = 0;
        
    ///事件发生日期
    // TThostFtdcDateType char[9]
    const char *BrokerUserEventField_EventDate = NULL;
    Py_ssize_t BrokerUserEventField_EventDate_len = 0;
            
    ///事件发生时间
    // TThostFtdcTimeType char[9]
    const char *BrokerUserEventField_EventTime = NULL;
    Py_ssize_t BrokerUserEventField_EventTime_len = 0;
            
    ///用户事件信息
    // TThostFtdcUserEventInfoType char[1025]
    const char *BrokerUserEventField_UserEventInfo = NULL;
    Py_ssize_t BrokerUserEventField_UserEventInfo_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *BrokerUserEventField_InvestorID = NULL;
    Py_ssize_t BrokerUserEventField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *BrokerUserEventField_reserve1 = NULL;
    Py_ssize_t BrokerUserEventField_reserve1_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *BrokerUserEventField_InstrumentID = NULL;
    Py_ssize_t BrokerUserEventField_InstrumentID_len = 0;
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int BrokerUserEventField_DRIdentityID = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *BrokerUserEventField_TradingDay = NULL;
    Py_ssize_t BrokerUserEventField_TradingDay_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ciy#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cis#s#s#s#s#s#is#", (char **)kwlist
#endif

        , &BrokerUserEventField_BrokerID, &BrokerUserEventField_BrokerID_len 
        , &BrokerUserEventField_UserID, &BrokerUserEventField_UserID_len 
        , &BrokerUserEventField_UserEventType 
        , &BrokerUserEventField_EventSequenceNo 
        , &BrokerUserEventField_EventDate, &BrokerUserEventField_EventDate_len 
        , &BrokerUserEventField_EventTime, &BrokerUserEventField_EventTime_len 
        , &BrokerUserEventField_UserEventInfo, &BrokerUserEventField_UserEventInfo_len 
        , &BrokerUserEventField_InvestorID, &BrokerUserEventField_InvestorID_len 
        , &BrokerUserEventField_reserve1, &BrokerUserEventField_reserve1_len 
        , &BrokerUserEventField_InstrumentID, &BrokerUserEventField_InstrumentID_len 
        , &BrokerUserEventField_DRIdentityID 
        , &BrokerUserEventField_TradingDay, &BrokerUserEventField_TradingDay_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerUserEventField_BrokerID != NULL ) {
        if(BrokerUserEventField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerUserEventField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerUserEventField_BrokerID, BrokerUserEventField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerUserEventField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerUserEventField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( BrokerUserEventField_UserID != NULL ) {
        if(BrokerUserEventField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", BrokerUserEventField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, BrokerUserEventField_UserID, BrokerUserEventField_UserID_len);        
        strncpy(self->data.UserID, BrokerUserEventField_UserID, sizeof(self->data.UserID) );
        BrokerUserEventField_UserID = NULL;
    }
            
    ///用户事件类型
    // TThostFtdcUserEventTypeType char
    self->data.UserEventType = BrokerUserEventField_UserEventType;
            
    ///用户事件序号
    // TThostFtdcSequenceNoType int
    self->data.EventSequenceNo = BrokerUserEventField_EventSequenceNo;
        
    ///事件发生日期
    // TThostFtdcDateType char[9]
    if( BrokerUserEventField_EventDate != NULL ) {
        if(BrokerUserEventField_EventDate_len > (Py_ssize_t)sizeof(self->data.EventDate)) {
            PyErr_Format(PyExc_ValueError, "EventDate too long: length=%zd (max allowed is %zd)", BrokerUserEventField_EventDate_len, (Py_ssize_t)sizeof(self->data.EventDate));
            return -1;
        }
        // memset(self->data.EventDate, 0, sizeof(self->data.EventDate));
        // memcpy(self->data.EventDate, BrokerUserEventField_EventDate, BrokerUserEventField_EventDate_len);        
        strncpy(self->data.EventDate, BrokerUserEventField_EventDate, sizeof(self->data.EventDate) );
        BrokerUserEventField_EventDate = NULL;
    }
            
    ///事件发生时间
    // TThostFtdcTimeType char[9]
    if( BrokerUserEventField_EventTime != NULL ) {
        if(BrokerUserEventField_EventTime_len > (Py_ssize_t)sizeof(self->data.EventTime)) {
            PyErr_Format(PyExc_ValueError, "EventTime too long: length=%zd (max allowed is %zd)", BrokerUserEventField_EventTime_len, (Py_ssize_t)sizeof(self->data.EventTime));
            return -1;
        }
        // memset(self->data.EventTime, 0, sizeof(self->data.EventTime));
        // memcpy(self->data.EventTime, BrokerUserEventField_EventTime, BrokerUserEventField_EventTime_len);        
        strncpy(self->data.EventTime, BrokerUserEventField_EventTime, sizeof(self->data.EventTime) );
        BrokerUserEventField_EventTime = NULL;
    }
            
    ///用户事件信息
    // TThostFtdcUserEventInfoType char[1025]
    if( BrokerUserEventField_UserEventInfo != NULL ) {
        if(BrokerUserEventField_UserEventInfo_len > (Py_ssize_t)sizeof(self->data.UserEventInfo)) {
            PyErr_Format(PyExc_ValueError, "UserEventInfo too long: length=%zd (max allowed is %zd)", BrokerUserEventField_UserEventInfo_len, (Py_ssize_t)sizeof(self->data.UserEventInfo));
            return -1;
        }
        // memset(self->data.UserEventInfo, 0, sizeof(self->data.UserEventInfo));
        // memcpy(self->data.UserEventInfo, BrokerUserEventField_UserEventInfo, BrokerUserEventField_UserEventInfo_len);        
        strncpy(self->data.UserEventInfo, BrokerUserEventField_UserEventInfo, sizeof(self->data.UserEventInfo) );
        BrokerUserEventField_UserEventInfo = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( BrokerUserEventField_InvestorID != NULL ) {
        if(BrokerUserEventField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", BrokerUserEventField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, BrokerUserEventField_InvestorID, BrokerUserEventField_InvestorID_len);        
        strncpy(self->data.InvestorID, BrokerUserEventField_InvestorID, sizeof(self->data.InvestorID) );
        BrokerUserEventField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( BrokerUserEventField_reserve1 != NULL ) {
        if(BrokerUserEventField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", BrokerUserEventField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, BrokerUserEventField_reserve1, BrokerUserEventField_reserve1_len);        
        strncpy(self->data.reserve1, BrokerUserEventField_reserve1, sizeof(self->data.reserve1) );
        BrokerUserEventField_reserve1 = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( BrokerUserEventField_InstrumentID != NULL ) {
        if(BrokerUserEventField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", BrokerUserEventField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, BrokerUserEventField_InstrumentID, BrokerUserEventField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, BrokerUserEventField_InstrumentID, sizeof(self->data.InstrumentID) );
        BrokerUserEventField_InstrumentID = NULL;
    }
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = BrokerUserEventField_DRIdentityID;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( BrokerUserEventField_TradingDay != NULL ) {
        if(BrokerUserEventField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", BrokerUserEventField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, BrokerUserEventField_TradingDay, BrokerUserEventField_TradingDay_len);        
        strncpy(self->data.TradingDay, BrokerUserEventField_TradingDay, sizeof(self->data.TradingDay) );
        BrokerUserEventField_TradingDay = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcBrokerUserEventField_dealloc(PyCThostFtdcBrokerUserEventField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserEventField_repr(PyCThostFtdcBrokerUserEventField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"UserEventType", self->data.UserEventType 
        ,"EventSequenceNo", self->data.EventSequenceNo 
        ,"EventDate", self->data.EventDate//, (Py_ssize_t)sizeof(self->data.EventDate) 
        ,"EventTime", self->data.EventTime//, (Py_ssize_t)sizeof(self->data.EventTime) 
        ,"UserEventInfo", self->data.UserEventInfo//, (Py_ssize_t)sizeof(self->data.UserEventInfo) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"DRIdentityID", self->data.DRIdentityID 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserEventField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerUserEventField_get_BrokerID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerUserEventField_set_BrokerID(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcBrokerUserEventField_get_UserID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcBrokerUserEventField_set_UserID(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///用户事件类型
// TThostFtdcUserEventTypeType char
static PyObject *PyCThostFtdcBrokerUserEventField_get_UserEventType(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.UserEventType), 1);
}

///用户事件类型
// TThostFtdcUserEventTypeType char
static int PyCThostFtdcBrokerUserEventField_set_UserEventType(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserEventType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserEventType)) {
        PyErr_SetString(PyExc_ValueError, "UserEventType must be equal 1 bytes");
        return -1;
    }
    self->data.UserEventType = *buf;
    return 0;
}
            
///用户事件序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcBrokerUserEventField_get_EventSequenceNo(PyCThostFtdcBrokerUserEventField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.EventSequenceNo);
#else
    return PyInt_FromLong(self->data.EventSequenceNo);
#endif
}

///用户事件序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcBrokerUserEventField_set_EventSequenceNo(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EventSequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EventSequenceNo Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the EventSequenceNo value out of range for C int");
        return -1;
    }
    self->data.EventSequenceNo = (int)buf;
    return 0;
}
        
///事件发生日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcBrokerUserEventField_get_EventDate(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EventDate, (Py_ssize_t)sizeof(self->data.EventDate));
    return PyBytes_FromString(self->data.EventDate);
}

///事件发生日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcBrokerUserEventField_set_EventDate(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EventDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.EventDate)) {
        PyErr_SetString(PyExc_ValueError, "EventDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.EventDate, 0, sizeof(self->data.EventDate));
    // memcpy(self->data.EventDate, buf, len);
    strncpy(self->data.EventDate, buf, sizeof(self->data.EventDate));
    return 0;
}
            
///事件发生时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcBrokerUserEventField_get_EventTime(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EventTime, (Py_ssize_t)sizeof(self->data.EventTime));
    return PyBytes_FromString(self->data.EventTime);
}

///事件发生时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcBrokerUserEventField_set_EventTime(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EventTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.EventTime)) {
        PyErr_SetString(PyExc_ValueError, "EventTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.EventTime, 0, sizeof(self->data.EventTime));
    // memcpy(self->data.EventTime, buf, len);
    strncpy(self->data.EventTime, buf, sizeof(self->data.EventTime));
    return 0;
}
            
///用户事件信息
// TThostFtdcUserEventInfoType char[1025]
static PyObject *PyCThostFtdcBrokerUserEventField_get_UserEventInfo(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserEventInfo, (Py_ssize_t)sizeof(self->data.UserEventInfo));
    return PyBytes_FromString(self->data.UserEventInfo);
}

///用户事件信息
// TThostFtdcUserEventInfoType char[1025]
static int PyCThostFtdcBrokerUserEventField_set_UserEventInfo(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserEventInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserEventInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserEventInfo must be less than 1025 bytes");
        return -1;
    }
    // memset(self->data.UserEventInfo, 0, sizeof(self->data.UserEventInfo));
    // memcpy(self->data.UserEventInfo, buf, len);
    strncpy(self->data.UserEventInfo, buf, sizeof(self->data.UserEventInfo));
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcBrokerUserEventField_get_InvestorID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcBrokerUserEventField_set_InvestorID(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcBrokerUserEventField_get_reserve1(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcBrokerUserEventField_set_reserve1(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcBrokerUserEventField_get_InstrumentID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcBrokerUserEventField_set_InstrumentID(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcBrokerUserEventField_get_DRIdentityID(PyCThostFtdcBrokerUserEventField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcBrokerUserEventField_set_DRIdentityID(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the DRIdentityID value out of range for C int");
        return -1;
    }
    self->data.DRIdentityID = (int)buf;
    return 0;
}
        
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcBrokerUserEventField_get_TradingDay(PyCThostFtdcBrokerUserEventField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcBrokerUserEventField_set_TradingDay(PyCThostFtdcBrokerUserEventField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcBrokerUserEventField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserEventField_get_BrokerID, (setter)PyCThostFtdcBrokerUserEventField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcBrokerUserEventField_get_UserID, (setter)PyCThostFtdcBrokerUserEventField_set_UserID, (char *)"UserID", NULL},
    ///用户事件类型 
    {(char *)"UserEventType", (getter)PyCThostFtdcBrokerUserEventField_get_UserEventType, (setter)PyCThostFtdcBrokerUserEventField_set_UserEventType, (char *)"UserEventType", NULL},
    ///用户事件序号 
    {(char *)"EventSequenceNo", (getter)PyCThostFtdcBrokerUserEventField_get_EventSequenceNo, (setter)PyCThostFtdcBrokerUserEventField_set_EventSequenceNo, (char *)"EventSequenceNo", NULL},
    ///事件发生日期 
    {(char *)"EventDate", (getter)PyCThostFtdcBrokerUserEventField_get_EventDate, (setter)PyCThostFtdcBrokerUserEventField_set_EventDate, (char *)"EventDate", NULL},
    ///事件发生时间 
    {(char *)"EventTime", (getter)PyCThostFtdcBrokerUserEventField_get_EventTime, (setter)PyCThostFtdcBrokerUserEventField_set_EventTime, (char *)"EventTime", NULL},
    ///用户事件信息 
    {(char *)"UserEventInfo", (getter)PyCThostFtdcBrokerUserEventField_get_UserEventInfo, (setter)PyCThostFtdcBrokerUserEventField_set_UserEventInfo, (char *)"UserEventInfo", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcBrokerUserEventField_get_InvestorID, (setter)PyCThostFtdcBrokerUserEventField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcBrokerUserEventField_get_reserve1, (setter)PyCThostFtdcBrokerUserEventField_set_reserve1, (char *)"reserve1", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcBrokerUserEventField_get_InstrumentID, (setter)PyCThostFtdcBrokerUserEventField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcBrokerUserEventField_get_DRIdentityID, (setter)PyCThostFtdcBrokerUserEventField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcBrokerUserEventField_get_TradingDay, (setter)PyCThostFtdcBrokerUserEventField_set_TradingDay, (char *)"TradingDay", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserEventFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserEventField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserEventField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserEventField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserEventField_repr,   /* tp_repr */
	0,                          /* tp_as_number */
	0,                          /* tp_as_sequence */
	0,                          /* tp_as_mapping */
	0,                          /* tp_hash  */
	0,                          /* tp_call */
	0,                          /* tp_str */
	0,                          /* tp_getattro */
	0,                          /* tp_setattro */
	0,                          /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT,         /* tp_flags */
	"CThostFtdcBrokerUserEventField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserEventField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserEventField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserEventField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserEventFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserEventField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserEventFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserEventField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserEventFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserEventField", (PyObject *)&PyCThostFtdcBrokerUserEventFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserEventField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserEventFieldType);
		return -1;
    }

    return 0;
}
