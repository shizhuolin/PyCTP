
#include "PyCThostFtdcTraderOfferField.h"

///交易所交易员报盘机

static PyObject *PyCThostFtdcTraderOfferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTraderOfferField *self = (PyCThostFtdcTraderOfferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTraderOfferField_init(PyCThostFtdcTraderOfferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TraderID", "ParticipantID", "Password", "InstallID", "OrderLocalID", "TraderConnectStatus", "ConnectRequestDate", "ConnectRequestTime", "LastReportDate", "LastReportTime", "ConnectDate", "ConnectTime", "StartDate", "StartTime", "TradingDay", "BrokerID", "MaxTradeID", "MaxOrderMessageReference", "OrderCancelAlg",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *TraderOfferField_ExchangeID = NULL;
    Py_ssize_t TraderOfferField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *TraderOfferField_TraderID = NULL;
    Py_ssize_t TraderOfferField_TraderID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *TraderOfferField_ParticipantID = NULL;
    Py_ssize_t TraderOfferField_ParticipantID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *TraderOfferField_Password = NULL;
    Py_ssize_t TraderOfferField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int TraderOfferField_InstallID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *TraderOfferField_OrderLocalID = NULL;
    Py_ssize_t TraderOfferField_OrderLocalID_len = 0;
            
    ///交易所交易员连接状态
    // TThostFtdcTraderConnectStatusType char
    char TraderOfferField_TraderConnectStatus = 0;
            
    ///发出连接请求的日期
    // TThostFtdcDateType char[9]
    const char *TraderOfferField_ConnectRequestDate = NULL;
    Py_ssize_t TraderOfferField_ConnectRequestDate_len = 0;
            
    ///发出连接请求的时间
    // TThostFtdcTimeType char[9]
    const char *TraderOfferField_ConnectRequestTime = NULL;
    Py_ssize_t TraderOfferField_ConnectRequestTime_len = 0;
            
    ///上次报告日期
    // TThostFtdcDateType char[9]
    const char *TraderOfferField_LastReportDate = NULL;
    Py_ssize_t TraderOfferField_LastReportDate_len = 0;
            
    ///上次报告时间
    // TThostFtdcTimeType char[9]
    const char *TraderOfferField_LastReportTime = NULL;
    Py_ssize_t TraderOfferField_LastReportTime_len = 0;
            
    ///完成连接日期
    // TThostFtdcDateType char[9]
    const char *TraderOfferField_ConnectDate = NULL;
    Py_ssize_t TraderOfferField_ConnectDate_len = 0;
            
    ///完成连接时间
    // TThostFtdcTimeType char[9]
    const char *TraderOfferField_ConnectTime = NULL;
    Py_ssize_t TraderOfferField_ConnectTime_len = 0;
            
    ///启动日期
    // TThostFtdcDateType char[9]
    const char *TraderOfferField_StartDate = NULL;
    Py_ssize_t TraderOfferField_StartDate_len = 0;
            
    ///启动时间
    // TThostFtdcTimeType char[9]
    const char *TraderOfferField_StartTime = NULL;
    Py_ssize_t TraderOfferField_StartTime_len = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *TraderOfferField_TradingDay = NULL;
    Py_ssize_t TraderOfferField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TraderOfferField_BrokerID = NULL;
    Py_ssize_t TraderOfferField_BrokerID_len = 0;
            
    ///本席位最大成交编号
    // TThostFtdcTradeIDType char[21]
    const char *TraderOfferField_MaxTradeID = NULL;
    Py_ssize_t TraderOfferField_MaxTradeID_len = 0;
            
    ///本席位最大报单备拷
    // TThostFtdcReturnCodeType char[7]
    const char *TraderOfferField_MaxOrderMessageReference = NULL;
    Py_ssize_t TraderOfferField_MaxOrderMessageReference_len = 0;
            
    ///撤单时选择席位算法
    // TThostFtdcOrderCancelAlgType char
    char TraderOfferField_OrderCancelAlg = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cy#y#y#y#y#y#y#y#y#y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#cs#s#s#s#s#s#s#s#s#s#s#s#c", (char **)kwlist
#endif

        , &TraderOfferField_ExchangeID, &TraderOfferField_ExchangeID_len 
        , &TraderOfferField_TraderID, &TraderOfferField_TraderID_len 
        , &TraderOfferField_ParticipantID, &TraderOfferField_ParticipantID_len 
        , &TraderOfferField_Password, &TraderOfferField_Password_len 
        , &TraderOfferField_InstallID 
        , &TraderOfferField_OrderLocalID, &TraderOfferField_OrderLocalID_len 
        , &TraderOfferField_TraderConnectStatus 
        , &TraderOfferField_ConnectRequestDate, &TraderOfferField_ConnectRequestDate_len 
        , &TraderOfferField_ConnectRequestTime, &TraderOfferField_ConnectRequestTime_len 
        , &TraderOfferField_LastReportDate, &TraderOfferField_LastReportDate_len 
        , &TraderOfferField_LastReportTime, &TraderOfferField_LastReportTime_len 
        , &TraderOfferField_ConnectDate, &TraderOfferField_ConnectDate_len 
        , &TraderOfferField_ConnectTime, &TraderOfferField_ConnectTime_len 
        , &TraderOfferField_StartDate, &TraderOfferField_StartDate_len 
        , &TraderOfferField_StartTime, &TraderOfferField_StartTime_len 
        , &TraderOfferField_TradingDay, &TraderOfferField_TradingDay_len 
        , &TraderOfferField_BrokerID, &TraderOfferField_BrokerID_len 
        , &TraderOfferField_MaxTradeID, &TraderOfferField_MaxTradeID_len 
        , &TraderOfferField_MaxOrderMessageReference, &TraderOfferField_MaxOrderMessageReference_len 
        , &TraderOfferField_OrderCancelAlg 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( TraderOfferField_ExchangeID != NULL ) {
        if(TraderOfferField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", TraderOfferField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, TraderOfferField_ExchangeID, TraderOfferField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, TraderOfferField_ExchangeID, sizeof(self->data.ExchangeID) );
        TraderOfferField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( TraderOfferField_TraderID != NULL ) {
        if(TraderOfferField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", TraderOfferField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, TraderOfferField_TraderID, TraderOfferField_TraderID_len);        
        strncpy(self->data.TraderID, TraderOfferField_TraderID, sizeof(self->data.TraderID) );
        TraderOfferField_TraderID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( TraderOfferField_ParticipantID != NULL ) {
        if(TraderOfferField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", TraderOfferField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, TraderOfferField_ParticipantID, TraderOfferField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, TraderOfferField_ParticipantID, sizeof(self->data.ParticipantID) );
        TraderOfferField_ParticipantID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( TraderOfferField_Password != NULL ) {
        if(TraderOfferField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", TraderOfferField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, TraderOfferField_Password, TraderOfferField_Password_len);        
        strncpy(self->data.Password, TraderOfferField_Password, sizeof(self->data.Password) );
        TraderOfferField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = TraderOfferField_InstallID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( TraderOfferField_OrderLocalID != NULL ) {
        if(TraderOfferField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", TraderOfferField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, TraderOfferField_OrderLocalID, TraderOfferField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, TraderOfferField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        TraderOfferField_OrderLocalID = NULL;
    }
            
    ///交易所交易员连接状态
    // TThostFtdcTraderConnectStatusType char
    self->data.TraderConnectStatus = TraderOfferField_TraderConnectStatus;
            
    ///发出连接请求的日期
    // TThostFtdcDateType char[9]
    if( TraderOfferField_ConnectRequestDate != NULL ) {
        if(TraderOfferField_ConnectRequestDate_len > (Py_ssize_t)sizeof(self->data.ConnectRequestDate)) {
            PyErr_Format(PyExc_ValueError, "ConnectRequestDate too long: length=%zd (max allowed is %zd)", TraderOfferField_ConnectRequestDate_len, (Py_ssize_t)sizeof(self->data.ConnectRequestDate));
            return -1;
        }
        // memset(self->data.ConnectRequestDate, 0, sizeof(self->data.ConnectRequestDate));
        // memcpy(self->data.ConnectRequestDate, TraderOfferField_ConnectRequestDate, TraderOfferField_ConnectRequestDate_len);        
        strncpy(self->data.ConnectRequestDate, TraderOfferField_ConnectRequestDate, sizeof(self->data.ConnectRequestDate) );
        TraderOfferField_ConnectRequestDate = NULL;
    }
            
    ///发出连接请求的时间
    // TThostFtdcTimeType char[9]
    if( TraderOfferField_ConnectRequestTime != NULL ) {
        if(TraderOfferField_ConnectRequestTime_len > (Py_ssize_t)sizeof(self->data.ConnectRequestTime)) {
            PyErr_Format(PyExc_ValueError, "ConnectRequestTime too long: length=%zd (max allowed is %zd)", TraderOfferField_ConnectRequestTime_len, (Py_ssize_t)sizeof(self->data.ConnectRequestTime));
            return -1;
        }
        // memset(self->data.ConnectRequestTime, 0, sizeof(self->data.ConnectRequestTime));
        // memcpy(self->data.ConnectRequestTime, TraderOfferField_ConnectRequestTime, TraderOfferField_ConnectRequestTime_len);        
        strncpy(self->data.ConnectRequestTime, TraderOfferField_ConnectRequestTime, sizeof(self->data.ConnectRequestTime) );
        TraderOfferField_ConnectRequestTime = NULL;
    }
            
    ///上次报告日期
    // TThostFtdcDateType char[9]
    if( TraderOfferField_LastReportDate != NULL ) {
        if(TraderOfferField_LastReportDate_len > (Py_ssize_t)sizeof(self->data.LastReportDate)) {
            PyErr_Format(PyExc_ValueError, "LastReportDate too long: length=%zd (max allowed is %zd)", TraderOfferField_LastReportDate_len, (Py_ssize_t)sizeof(self->data.LastReportDate));
            return -1;
        }
        // memset(self->data.LastReportDate, 0, sizeof(self->data.LastReportDate));
        // memcpy(self->data.LastReportDate, TraderOfferField_LastReportDate, TraderOfferField_LastReportDate_len);        
        strncpy(self->data.LastReportDate, TraderOfferField_LastReportDate, sizeof(self->data.LastReportDate) );
        TraderOfferField_LastReportDate = NULL;
    }
            
    ///上次报告时间
    // TThostFtdcTimeType char[9]
    if( TraderOfferField_LastReportTime != NULL ) {
        if(TraderOfferField_LastReportTime_len > (Py_ssize_t)sizeof(self->data.LastReportTime)) {
            PyErr_Format(PyExc_ValueError, "LastReportTime too long: length=%zd (max allowed is %zd)", TraderOfferField_LastReportTime_len, (Py_ssize_t)sizeof(self->data.LastReportTime));
            return -1;
        }
        // memset(self->data.LastReportTime, 0, sizeof(self->data.LastReportTime));
        // memcpy(self->data.LastReportTime, TraderOfferField_LastReportTime, TraderOfferField_LastReportTime_len);        
        strncpy(self->data.LastReportTime, TraderOfferField_LastReportTime, sizeof(self->data.LastReportTime) );
        TraderOfferField_LastReportTime = NULL;
    }
            
    ///完成连接日期
    // TThostFtdcDateType char[9]
    if( TraderOfferField_ConnectDate != NULL ) {
        if(TraderOfferField_ConnectDate_len > (Py_ssize_t)sizeof(self->data.ConnectDate)) {
            PyErr_Format(PyExc_ValueError, "ConnectDate too long: length=%zd (max allowed is %zd)", TraderOfferField_ConnectDate_len, (Py_ssize_t)sizeof(self->data.ConnectDate));
            return -1;
        }
        // memset(self->data.ConnectDate, 0, sizeof(self->data.ConnectDate));
        // memcpy(self->data.ConnectDate, TraderOfferField_ConnectDate, TraderOfferField_ConnectDate_len);        
        strncpy(self->data.ConnectDate, TraderOfferField_ConnectDate, sizeof(self->data.ConnectDate) );
        TraderOfferField_ConnectDate = NULL;
    }
            
    ///完成连接时间
    // TThostFtdcTimeType char[9]
    if( TraderOfferField_ConnectTime != NULL ) {
        if(TraderOfferField_ConnectTime_len > (Py_ssize_t)sizeof(self->data.ConnectTime)) {
            PyErr_Format(PyExc_ValueError, "ConnectTime too long: length=%zd (max allowed is %zd)", TraderOfferField_ConnectTime_len, (Py_ssize_t)sizeof(self->data.ConnectTime));
            return -1;
        }
        // memset(self->data.ConnectTime, 0, sizeof(self->data.ConnectTime));
        // memcpy(self->data.ConnectTime, TraderOfferField_ConnectTime, TraderOfferField_ConnectTime_len);        
        strncpy(self->data.ConnectTime, TraderOfferField_ConnectTime, sizeof(self->data.ConnectTime) );
        TraderOfferField_ConnectTime = NULL;
    }
            
    ///启动日期
    // TThostFtdcDateType char[9]
    if( TraderOfferField_StartDate != NULL ) {
        if(TraderOfferField_StartDate_len > (Py_ssize_t)sizeof(self->data.StartDate)) {
            PyErr_Format(PyExc_ValueError, "StartDate too long: length=%zd (max allowed is %zd)", TraderOfferField_StartDate_len, (Py_ssize_t)sizeof(self->data.StartDate));
            return -1;
        }
        // memset(self->data.StartDate, 0, sizeof(self->data.StartDate));
        // memcpy(self->data.StartDate, TraderOfferField_StartDate, TraderOfferField_StartDate_len);        
        strncpy(self->data.StartDate, TraderOfferField_StartDate, sizeof(self->data.StartDate) );
        TraderOfferField_StartDate = NULL;
    }
            
    ///启动时间
    // TThostFtdcTimeType char[9]
    if( TraderOfferField_StartTime != NULL ) {
        if(TraderOfferField_StartTime_len > (Py_ssize_t)sizeof(self->data.StartTime)) {
            PyErr_Format(PyExc_ValueError, "StartTime too long: length=%zd (max allowed is %zd)", TraderOfferField_StartTime_len, (Py_ssize_t)sizeof(self->data.StartTime));
            return -1;
        }
        // memset(self->data.StartTime, 0, sizeof(self->data.StartTime));
        // memcpy(self->data.StartTime, TraderOfferField_StartTime, TraderOfferField_StartTime_len);        
        strncpy(self->data.StartTime, TraderOfferField_StartTime, sizeof(self->data.StartTime) );
        TraderOfferField_StartTime = NULL;
    }
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( TraderOfferField_TradingDay != NULL ) {
        if(TraderOfferField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", TraderOfferField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, TraderOfferField_TradingDay, TraderOfferField_TradingDay_len);        
        strncpy(self->data.TradingDay, TraderOfferField_TradingDay, sizeof(self->data.TradingDay) );
        TraderOfferField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TraderOfferField_BrokerID != NULL ) {
        if(TraderOfferField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TraderOfferField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TraderOfferField_BrokerID, TraderOfferField_BrokerID_len);        
        strncpy(self->data.BrokerID, TraderOfferField_BrokerID, sizeof(self->data.BrokerID) );
        TraderOfferField_BrokerID = NULL;
    }
            
    ///本席位最大成交编号
    // TThostFtdcTradeIDType char[21]
    if( TraderOfferField_MaxTradeID != NULL ) {
        if(TraderOfferField_MaxTradeID_len > (Py_ssize_t)sizeof(self->data.MaxTradeID)) {
            PyErr_Format(PyExc_ValueError, "MaxTradeID too long: length=%zd (max allowed is %zd)", TraderOfferField_MaxTradeID_len, (Py_ssize_t)sizeof(self->data.MaxTradeID));
            return -1;
        }
        // memset(self->data.MaxTradeID, 0, sizeof(self->data.MaxTradeID));
        // memcpy(self->data.MaxTradeID, TraderOfferField_MaxTradeID, TraderOfferField_MaxTradeID_len);        
        strncpy(self->data.MaxTradeID, TraderOfferField_MaxTradeID, sizeof(self->data.MaxTradeID) );
        TraderOfferField_MaxTradeID = NULL;
    }
            
    ///本席位最大报单备拷
    // TThostFtdcReturnCodeType char[7]
    if( TraderOfferField_MaxOrderMessageReference != NULL ) {
        if(TraderOfferField_MaxOrderMessageReference_len > (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference)) {
            PyErr_Format(PyExc_ValueError, "MaxOrderMessageReference too long: length=%zd (max allowed is %zd)", TraderOfferField_MaxOrderMessageReference_len, (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference));
            return -1;
        }
        // memset(self->data.MaxOrderMessageReference, 0, sizeof(self->data.MaxOrderMessageReference));
        // memcpy(self->data.MaxOrderMessageReference, TraderOfferField_MaxOrderMessageReference, TraderOfferField_MaxOrderMessageReference_len);        
        strncpy(self->data.MaxOrderMessageReference, TraderOfferField_MaxOrderMessageReference, sizeof(self->data.MaxOrderMessageReference) );
        TraderOfferField_MaxOrderMessageReference = NULL;
    }
            
    ///撤单时选择席位算法
    // TThostFtdcOrderCancelAlgType char
    self->data.OrderCancelAlg = TraderOfferField_OrderCancelAlg;
            

    return 0;
}

static void PyCThostFtdcTraderOfferField_dealloc(PyCThostFtdcTraderOfferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTraderOfferField_repr(PyCThostFtdcTraderOfferField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"InstallID", self->data.InstallID 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
        ,"TraderConnectStatus", self->data.TraderConnectStatus 
        ,"ConnectRequestDate", self->data.ConnectRequestDate//, (Py_ssize_t)sizeof(self->data.ConnectRequestDate) 
        ,"ConnectRequestTime", self->data.ConnectRequestTime//, (Py_ssize_t)sizeof(self->data.ConnectRequestTime) 
        ,"LastReportDate", self->data.LastReportDate//, (Py_ssize_t)sizeof(self->data.LastReportDate) 
        ,"LastReportTime", self->data.LastReportTime//, (Py_ssize_t)sizeof(self->data.LastReportTime) 
        ,"ConnectDate", self->data.ConnectDate//, (Py_ssize_t)sizeof(self->data.ConnectDate) 
        ,"ConnectTime", self->data.ConnectTime//, (Py_ssize_t)sizeof(self->data.ConnectTime) 
        ,"StartDate", self->data.StartDate//, (Py_ssize_t)sizeof(self->data.StartDate) 
        ,"StartTime", self->data.StartTime//, (Py_ssize_t)sizeof(self->data.StartTime) 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"MaxTradeID", self->data.MaxTradeID//, (Py_ssize_t)sizeof(self->data.MaxTradeID) 
        ,"MaxOrderMessageReference", self->data.MaxOrderMessageReference//, (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference) 
        ,"OrderCancelAlg", self->data.OrderCancelAlg 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTraderOfferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_ExchangeID(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcTraderOfferField_set_ExchangeID(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcTraderOfferField_get_TraderID(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcTraderOfferField_set_TraderID(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
    // memcpy(self->data.TraderID, buf, len);
    strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
    return 0;
}
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcTraderOfferField_get_ParticipantID(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcTraderOfferField_set_ParticipantID(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
    // memcpy(self->data.ParticipantID, buf, len);
    strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
    return 0;
}
            
///密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcTraderOfferField_get_Password(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTraderOfferField_set_Password(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Password, 0, sizeof(self->data.Password));
    // memcpy(self->data.Password, buf, len);
    strncpy(self->data.Password, buf, sizeof(self->data.Password));
    return 0;
}
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcTraderOfferField_get_InstallID(PyCThostFtdcTraderOfferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcTraderOfferField_set_InstallID(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the InstallID value out of range for C int");
        return -1;
    }
    self->data.InstallID = (int)buf;
    return 0;
}
        
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcTraderOfferField_get_OrderLocalID(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcTraderOfferField_set_OrderLocalID(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
    // memcpy(self->data.OrderLocalID, buf, len);
    strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
    return 0;
}
            
///交易所交易员连接状态
// TThostFtdcTraderConnectStatusType char
static PyObject *PyCThostFtdcTraderOfferField_get_TraderConnectStatus(PyCThostFtdcTraderOfferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TraderConnectStatus), 1);
}

///交易所交易员连接状态
// TThostFtdcTraderConnectStatusType char
static int PyCThostFtdcTraderOfferField_set_TraderConnectStatus(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderConnectStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TraderConnectStatus)) {
        PyErr_SetString(PyExc_ValueError, "TraderConnectStatus must be equal 1 bytes");
        return -1;
    }
    self->data.TraderConnectStatus = *buf;
    return 0;
}
            
///发出连接请求的日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_ConnectRequestDate(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConnectRequestDate, (Py_ssize_t)sizeof(self->data.ConnectRequestDate));
    return PyBytes_FromString(self->data.ConnectRequestDate);
}

///发出连接请求的日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcTraderOfferField_set_ConnectRequestDate(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ConnectRequestDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ConnectRequestDate)) {
        PyErr_SetString(PyExc_ValueError, "ConnectRequestDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ConnectRequestDate, 0, sizeof(self->data.ConnectRequestDate));
    // memcpy(self->data.ConnectRequestDate, buf, len);
    strncpy(self->data.ConnectRequestDate, buf, sizeof(self->data.ConnectRequestDate));
    return 0;
}
            
///发出连接请求的时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_ConnectRequestTime(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConnectRequestTime, (Py_ssize_t)sizeof(self->data.ConnectRequestTime));
    return PyBytes_FromString(self->data.ConnectRequestTime);
}

///发出连接请求的时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcTraderOfferField_set_ConnectRequestTime(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ConnectRequestTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ConnectRequestTime)) {
        PyErr_SetString(PyExc_ValueError, "ConnectRequestTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ConnectRequestTime, 0, sizeof(self->data.ConnectRequestTime));
    // memcpy(self->data.ConnectRequestTime, buf, len);
    strncpy(self->data.ConnectRequestTime, buf, sizeof(self->data.ConnectRequestTime));
    return 0;
}
            
///上次报告日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_LastReportDate(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LastReportDate, (Py_ssize_t)sizeof(self->data.LastReportDate));
    return PyBytes_FromString(self->data.LastReportDate);
}

///上次报告日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcTraderOfferField_set_LastReportDate(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastReportDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LastReportDate)) {
        PyErr_SetString(PyExc_ValueError, "LastReportDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.LastReportDate, 0, sizeof(self->data.LastReportDate));
    // memcpy(self->data.LastReportDate, buf, len);
    strncpy(self->data.LastReportDate, buf, sizeof(self->data.LastReportDate));
    return 0;
}
            
///上次报告时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_LastReportTime(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LastReportTime, (Py_ssize_t)sizeof(self->data.LastReportTime));
    return PyBytes_FromString(self->data.LastReportTime);
}

///上次报告时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcTraderOfferField_set_LastReportTime(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastReportTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LastReportTime)) {
        PyErr_SetString(PyExc_ValueError, "LastReportTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.LastReportTime, 0, sizeof(self->data.LastReportTime));
    // memcpy(self->data.LastReportTime, buf, len);
    strncpy(self->data.LastReportTime, buf, sizeof(self->data.LastReportTime));
    return 0;
}
            
///完成连接日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_ConnectDate(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConnectDate, (Py_ssize_t)sizeof(self->data.ConnectDate));
    return PyBytes_FromString(self->data.ConnectDate);
}

///完成连接日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcTraderOfferField_set_ConnectDate(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ConnectDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ConnectDate)) {
        PyErr_SetString(PyExc_ValueError, "ConnectDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ConnectDate, 0, sizeof(self->data.ConnectDate));
    // memcpy(self->data.ConnectDate, buf, len);
    strncpy(self->data.ConnectDate, buf, sizeof(self->data.ConnectDate));
    return 0;
}
            
///完成连接时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_ConnectTime(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConnectTime, (Py_ssize_t)sizeof(self->data.ConnectTime));
    return PyBytes_FromString(self->data.ConnectTime);
}

///完成连接时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcTraderOfferField_set_ConnectTime(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ConnectTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ConnectTime)) {
        PyErr_SetString(PyExc_ValueError, "ConnectTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ConnectTime, 0, sizeof(self->data.ConnectTime));
    // memcpy(self->data.ConnectTime, buf, len);
    strncpy(self->data.ConnectTime, buf, sizeof(self->data.ConnectTime));
    return 0;
}
            
///启动日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_StartDate(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StartDate, (Py_ssize_t)sizeof(self->data.StartDate));
    return PyBytes_FromString(self->data.StartDate);
}

///启动日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcTraderOfferField_set_StartDate(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StartDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StartDate)) {
        PyErr_SetString(PyExc_ValueError, "StartDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.StartDate, 0, sizeof(self->data.StartDate));
    // memcpy(self->data.StartDate, buf, len);
    strncpy(self->data.StartDate, buf, sizeof(self->data.StartDate));
    return 0;
}
            
///启动时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_StartTime(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StartTime, (Py_ssize_t)sizeof(self->data.StartTime));
    return PyBytes_FromString(self->data.StartTime);
}

///启动时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcTraderOfferField_set_StartTime(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StartTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StartTime)) {
        PyErr_SetString(PyExc_ValueError, "StartTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.StartTime, 0, sizeof(self->data.StartTime));
    // memcpy(self->data.StartTime, buf, len);
    strncpy(self->data.StartTime, buf, sizeof(self->data.StartTime));
    return 0;
}
            
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcTraderOfferField_get_TradingDay(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcTraderOfferField_set_TradingDay(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTraderOfferField_get_BrokerID(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTraderOfferField_set_BrokerID(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
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
            
///本席位最大成交编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcTraderOfferField_get_MaxTradeID(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MaxTradeID, (Py_ssize_t)sizeof(self->data.MaxTradeID));
    return PyBytes_FromString(self->data.MaxTradeID);
}

///本席位最大成交编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcTraderOfferField_set_MaxTradeID(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxTradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MaxTradeID)) {
        PyErr_SetString(PyExc_ValueError, "MaxTradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MaxTradeID, 0, sizeof(self->data.MaxTradeID));
    // memcpy(self->data.MaxTradeID, buf, len);
    strncpy(self->data.MaxTradeID, buf, sizeof(self->data.MaxTradeID));
    return 0;
}
            
///本席位最大报单备拷
// TThostFtdcReturnCodeType char[7]
static PyObject *PyCThostFtdcTraderOfferField_get_MaxOrderMessageReference(PyCThostFtdcTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MaxOrderMessageReference, (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference));
    return PyBytes_FromString(self->data.MaxOrderMessageReference);
}

///本席位最大报单备拷
// TThostFtdcReturnCodeType char[7]
static int PyCThostFtdcTraderOfferField_set_MaxOrderMessageReference(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxOrderMessageReference Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference)) {
        PyErr_SetString(PyExc_ValueError, "MaxOrderMessageReference must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.MaxOrderMessageReference, 0, sizeof(self->data.MaxOrderMessageReference));
    // memcpy(self->data.MaxOrderMessageReference, buf, len);
    strncpy(self->data.MaxOrderMessageReference, buf, sizeof(self->data.MaxOrderMessageReference));
    return 0;
}
            
///撤单时选择席位算法
// TThostFtdcOrderCancelAlgType char
static PyObject *PyCThostFtdcTraderOfferField_get_OrderCancelAlg(PyCThostFtdcTraderOfferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderCancelAlg), 1);
}

///撤单时选择席位算法
// TThostFtdcOrderCancelAlgType char
static int PyCThostFtdcTraderOfferField_set_OrderCancelAlg(PyCThostFtdcTraderOfferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCancelAlg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderCancelAlg)) {
        PyErr_SetString(PyExc_ValueError, "OrderCancelAlg must be equal 1 bytes");
        return -1;
    }
    self->data.OrderCancelAlg = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTraderOfferField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcTraderOfferField_get_ExchangeID, (setter)PyCThostFtdcTraderOfferField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcTraderOfferField_get_TraderID, (setter)PyCThostFtdcTraderOfferField_set_TraderID, (char *)"TraderID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcTraderOfferField_get_ParticipantID, (setter)PyCThostFtdcTraderOfferField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcTraderOfferField_get_Password, (setter)PyCThostFtdcTraderOfferField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcTraderOfferField_get_InstallID, (setter)PyCThostFtdcTraderOfferField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcTraderOfferField_get_OrderLocalID, (setter)PyCThostFtdcTraderOfferField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///交易所交易员连接状态 
    {(char *)"TraderConnectStatus", (getter)PyCThostFtdcTraderOfferField_get_TraderConnectStatus, (setter)PyCThostFtdcTraderOfferField_set_TraderConnectStatus, (char *)"TraderConnectStatus", NULL},
    ///发出连接请求的日期 
    {(char *)"ConnectRequestDate", (getter)PyCThostFtdcTraderOfferField_get_ConnectRequestDate, (setter)PyCThostFtdcTraderOfferField_set_ConnectRequestDate, (char *)"ConnectRequestDate", NULL},
    ///发出连接请求的时间 
    {(char *)"ConnectRequestTime", (getter)PyCThostFtdcTraderOfferField_get_ConnectRequestTime, (setter)PyCThostFtdcTraderOfferField_set_ConnectRequestTime, (char *)"ConnectRequestTime", NULL},
    ///上次报告日期 
    {(char *)"LastReportDate", (getter)PyCThostFtdcTraderOfferField_get_LastReportDate, (setter)PyCThostFtdcTraderOfferField_set_LastReportDate, (char *)"LastReportDate", NULL},
    ///上次报告时间 
    {(char *)"LastReportTime", (getter)PyCThostFtdcTraderOfferField_get_LastReportTime, (setter)PyCThostFtdcTraderOfferField_set_LastReportTime, (char *)"LastReportTime", NULL},
    ///完成连接日期 
    {(char *)"ConnectDate", (getter)PyCThostFtdcTraderOfferField_get_ConnectDate, (setter)PyCThostFtdcTraderOfferField_set_ConnectDate, (char *)"ConnectDate", NULL},
    ///完成连接时间 
    {(char *)"ConnectTime", (getter)PyCThostFtdcTraderOfferField_get_ConnectTime, (setter)PyCThostFtdcTraderOfferField_set_ConnectTime, (char *)"ConnectTime", NULL},
    ///启动日期 
    {(char *)"StartDate", (getter)PyCThostFtdcTraderOfferField_get_StartDate, (setter)PyCThostFtdcTraderOfferField_set_StartDate, (char *)"StartDate", NULL},
    ///启动时间 
    {(char *)"StartTime", (getter)PyCThostFtdcTraderOfferField_get_StartTime, (setter)PyCThostFtdcTraderOfferField_set_StartTime, (char *)"StartTime", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcTraderOfferField_get_TradingDay, (setter)PyCThostFtdcTraderOfferField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTraderOfferField_get_BrokerID, (setter)PyCThostFtdcTraderOfferField_set_BrokerID, (char *)"BrokerID", NULL},
    ///本席位最大成交编号 
    {(char *)"MaxTradeID", (getter)PyCThostFtdcTraderOfferField_get_MaxTradeID, (setter)PyCThostFtdcTraderOfferField_set_MaxTradeID, (char *)"MaxTradeID", NULL},
    ///本席位最大报单备拷 
    {(char *)"MaxOrderMessageReference", (getter)PyCThostFtdcTraderOfferField_get_MaxOrderMessageReference, (setter)PyCThostFtdcTraderOfferField_set_MaxOrderMessageReference, (char *)"MaxOrderMessageReference", NULL},
    ///撤单时选择席位算法 
    {(char *)"OrderCancelAlg", (getter)PyCThostFtdcTraderOfferField_get_OrderCancelAlg, (setter)PyCThostFtdcTraderOfferField_set_OrderCancelAlg, (char *)"OrderCancelAlg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTraderOfferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTraderOfferField",	/* tp_name */
	sizeof(PyCThostFtdcTraderOfferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTraderOfferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTraderOfferField_repr,   /* tp_repr */
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
	"CThostFtdcTraderOfferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTraderOfferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTraderOfferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTraderOfferField_new,       /* tp_new */
};

int PyCThostFtdcTraderOfferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTraderOfferField  */
	if (PyType_Ready(&PyCThostFtdcTraderOfferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTraderOfferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTraderOfferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTraderOfferField", (PyObject *)&PyCThostFtdcTraderOfferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTraderOfferField to module");
        Py_DECREF(&PyCThostFtdcTraderOfferFieldType);
		return -1;
    }

    return 0;
}
