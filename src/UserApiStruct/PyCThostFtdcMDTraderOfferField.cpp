
#include "PyCThostFtdcMDTraderOfferField.h"

///交易所行情报盘机

static PyObject *PyCThostFtdcMDTraderOfferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMDTraderOfferField *self = (PyCThostFtdcMDTraderOfferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMDTraderOfferField_init(PyCThostFtdcMDTraderOfferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TraderID", "ParticipantID", "Password", "InstallID", "OrderLocalID", "TraderConnectStatus", "ConnectRequestDate", "ConnectRequestTime", "LastReportDate", "LastReportTime", "ConnectDate", "ConnectTime", "StartDate", "StartTime", "TradingDay", "BrokerID", "MaxTradeID", "MaxOrderMessageReference", "OrderCancelAlg",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *MDTraderOfferField_ExchangeID = NULL;
    Py_ssize_t MDTraderOfferField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *MDTraderOfferField_TraderID = NULL;
    Py_ssize_t MDTraderOfferField_TraderID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *MDTraderOfferField_ParticipantID = NULL;
    Py_ssize_t MDTraderOfferField_ParticipantID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *MDTraderOfferField_Password = NULL;
    Py_ssize_t MDTraderOfferField_Password_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int MDTraderOfferField_InstallID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *MDTraderOfferField_OrderLocalID = NULL;
    Py_ssize_t MDTraderOfferField_OrderLocalID_len = 0;
            
    ///交易所交易员连接状态
    // TThostFtdcTraderConnectStatusType char
    char MDTraderOfferField_TraderConnectStatus = 0;
            
    ///发出连接请求的日期
    // TThostFtdcDateType char[9]
    const char *MDTraderOfferField_ConnectRequestDate = NULL;
    Py_ssize_t MDTraderOfferField_ConnectRequestDate_len = 0;
            
    ///发出连接请求的时间
    // TThostFtdcTimeType char[9]
    const char *MDTraderOfferField_ConnectRequestTime = NULL;
    Py_ssize_t MDTraderOfferField_ConnectRequestTime_len = 0;
            
    ///上次报告日期
    // TThostFtdcDateType char[9]
    const char *MDTraderOfferField_LastReportDate = NULL;
    Py_ssize_t MDTraderOfferField_LastReportDate_len = 0;
            
    ///上次报告时间
    // TThostFtdcTimeType char[9]
    const char *MDTraderOfferField_LastReportTime = NULL;
    Py_ssize_t MDTraderOfferField_LastReportTime_len = 0;
            
    ///完成连接日期
    // TThostFtdcDateType char[9]
    const char *MDTraderOfferField_ConnectDate = NULL;
    Py_ssize_t MDTraderOfferField_ConnectDate_len = 0;
            
    ///完成连接时间
    // TThostFtdcTimeType char[9]
    const char *MDTraderOfferField_ConnectTime = NULL;
    Py_ssize_t MDTraderOfferField_ConnectTime_len = 0;
            
    ///启动日期
    // TThostFtdcDateType char[9]
    const char *MDTraderOfferField_StartDate = NULL;
    Py_ssize_t MDTraderOfferField_StartDate_len = 0;
            
    ///启动时间
    // TThostFtdcTimeType char[9]
    const char *MDTraderOfferField_StartTime = NULL;
    Py_ssize_t MDTraderOfferField_StartTime_len = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *MDTraderOfferField_TradingDay = NULL;
    Py_ssize_t MDTraderOfferField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *MDTraderOfferField_BrokerID = NULL;
    Py_ssize_t MDTraderOfferField_BrokerID_len = 0;
            
    ///本席位最大成交编号
    // TThostFtdcTradeIDType char[21]
    const char *MDTraderOfferField_MaxTradeID = NULL;
    Py_ssize_t MDTraderOfferField_MaxTradeID_len = 0;
            
    ///本席位最大报单备拷
    // TThostFtdcReturnCodeType char[7]
    const char *MDTraderOfferField_MaxOrderMessageReference = NULL;
    Py_ssize_t MDTraderOfferField_MaxOrderMessageReference_len = 0;
            
    ///撤单时选择席位算法
    // TThostFtdcOrderCancelAlgType char
    char MDTraderOfferField_OrderCancelAlg = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cy#y#y#y#y#y#y#y#y#y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#cs#s#s#s#s#s#s#s#s#s#s#s#c", (char **)kwlist
#endif

        , &MDTraderOfferField_ExchangeID, &MDTraderOfferField_ExchangeID_len 
        , &MDTraderOfferField_TraderID, &MDTraderOfferField_TraderID_len 
        , &MDTraderOfferField_ParticipantID, &MDTraderOfferField_ParticipantID_len 
        , &MDTraderOfferField_Password, &MDTraderOfferField_Password_len 
        , &MDTraderOfferField_InstallID 
        , &MDTraderOfferField_OrderLocalID, &MDTraderOfferField_OrderLocalID_len 
        , &MDTraderOfferField_TraderConnectStatus 
        , &MDTraderOfferField_ConnectRequestDate, &MDTraderOfferField_ConnectRequestDate_len 
        , &MDTraderOfferField_ConnectRequestTime, &MDTraderOfferField_ConnectRequestTime_len 
        , &MDTraderOfferField_LastReportDate, &MDTraderOfferField_LastReportDate_len 
        , &MDTraderOfferField_LastReportTime, &MDTraderOfferField_LastReportTime_len 
        , &MDTraderOfferField_ConnectDate, &MDTraderOfferField_ConnectDate_len 
        , &MDTraderOfferField_ConnectTime, &MDTraderOfferField_ConnectTime_len 
        , &MDTraderOfferField_StartDate, &MDTraderOfferField_StartDate_len 
        , &MDTraderOfferField_StartTime, &MDTraderOfferField_StartTime_len 
        , &MDTraderOfferField_TradingDay, &MDTraderOfferField_TradingDay_len 
        , &MDTraderOfferField_BrokerID, &MDTraderOfferField_BrokerID_len 
        , &MDTraderOfferField_MaxTradeID, &MDTraderOfferField_MaxTradeID_len 
        , &MDTraderOfferField_MaxOrderMessageReference, &MDTraderOfferField_MaxOrderMessageReference_len 
        , &MDTraderOfferField_OrderCancelAlg 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( MDTraderOfferField_ExchangeID != NULL ) {
        if(MDTraderOfferField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", MDTraderOfferField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, MDTraderOfferField_ExchangeID, MDTraderOfferField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, MDTraderOfferField_ExchangeID, sizeof(self->data.ExchangeID) );
        MDTraderOfferField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( MDTraderOfferField_TraderID != NULL ) {
        if(MDTraderOfferField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", MDTraderOfferField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, MDTraderOfferField_TraderID, MDTraderOfferField_TraderID_len);        
        strncpy(self->data.TraderID, MDTraderOfferField_TraderID, sizeof(self->data.TraderID) );
        MDTraderOfferField_TraderID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( MDTraderOfferField_ParticipantID != NULL ) {
        if(MDTraderOfferField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", MDTraderOfferField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, MDTraderOfferField_ParticipantID, MDTraderOfferField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, MDTraderOfferField_ParticipantID, sizeof(self->data.ParticipantID) );
        MDTraderOfferField_ParticipantID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( MDTraderOfferField_Password != NULL ) {
        if(MDTraderOfferField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", MDTraderOfferField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, MDTraderOfferField_Password, MDTraderOfferField_Password_len);        
        strncpy(self->data.Password, MDTraderOfferField_Password, sizeof(self->data.Password) );
        MDTraderOfferField_Password = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = MDTraderOfferField_InstallID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( MDTraderOfferField_OrderLocalID != NULL ) {
        if(MDTraderOfferField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", MDTraderOfferField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, MDTraderOfferField_OrderLocalID, MDTraderOfferField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, MDTraderOfferField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        MDTraderOfferField_OrderLocalID = NULL;
    }
            
    ///交易所交易员连接状态
    // TThostFtdcTraderConnectStatusType char
    self->data.TraderConnectStatus = MDTraderOfferField_TraderConnectStatus;
            
    ///发出连接请求的日期
    // TThostFtdcDateType char[9]
    if( MDTraderOfferField_ConnectRequestDate != NULL ) {
        if(MDTraderOfferField_ConnectRequestDate_len > (Py_ssize_t)sizeof(self->data.ConnectRequestDate)) {
            PyErr_Format(PyExc_ValueError, "ConnectRequestDate too long: length=%zd (max allowed is %zd)", MDTraderOfferField_ConnectRequestDate_len, (Py_ssize_t)sizeof(self->data.ConnectRequestDate));
            return -1;
        }
        // memset(self->data.ConnectRequestDate, 0, sizeof(self->data.ConnectRequestDate));
        // memcpy(self->data.ConnectRequestDate, MDTraderOfferField_ConnectRequestDate, MDTraderOfferField_ConnectRequestDate_len);        
        strncpy(self->data.ConnectRequestDate, MDTraderOfferField_ConnectRequestDate, sizeof(self->data.ConnectRequestDate) );
        MDTraderOfferField_ConnectRequestDate = NULL;
    }
            
    ///发出连接请求的时间
    // TThostFtdcTimeType char[9]
    if( MDTraderOfferField_ConnectRequestTime != NULL ) {
        if(MDTraderOfferField_ConnectRequestTime_len > (Py_ssize_t)sizeof(self->data.ConnectRequestTime)) {
            PyErr_Format(PyExc_ValueError, "ConnectRequestTime too long: length=%zd (max allowed is %zd)", MDTraderOfferField_ConnectRequestTime_len, (Py_ssize_t)sizeof(self->data.ConnectRequestTime));
            return -1;
        }
        // memset(self->data.ConnectRequestTime, 0, sizeof(self->data.ConnectRequestTime));
        // memcpy(self->data.ConnectRequestTime, MDTraderOfferField_ConnectRequestTime, MDTraderOfferField_ConnectRequestTime_len);        
        strncpy(self->data.ConnectRequestTime, MDTraderOfferField_ConnectRequestTime, sizeof(self->data.ConnectRequestTime) );
        MDTraderOfferField_ConnectRequestTime = NULL;
    }
            
    ///上次报告日期
    // TThostFtdcDateType char[9]
    if( MDTraderOfferField_LastReportDate != NULL ) {
        if(MDTraderOfferField_LastReportDate_len > (Py_ssize_t)sizeof(self->data.LastReportDate)) {
            PyErr_Format(PyExc_ValueError, "LastReportDate too long: length=%zd (max allowed is %zd)", MDTraderOfferField_LastReportDate_len, (Py_ssize_t)sizeof(self->data.LastReportDate));
            return -1;
        }
        // memset(self->data.LastReportDate, 0, sizeof(self->data.LastReportDate));
        // memcpy(self->data.LastReportDate, MDTraderOfferField_LastReportDate, MDTraderOfferField_LastReportDate_len);        
        strncpy(self->data.LastReportDate, MDTraderOfferField_LastReportDate, sizeof(self->data.LastReportDate) );
        MDTraderOfferField_LastReportDate = NULL;
    }
            
    ///上次报告时间
    // TThostFtdcTimeType char[9]
    if( MDTraderOfferField_LastReportTime != NULL ) {
        if(MDTraderOfferField_LastReportTime_len > (Py_ssize_t)sizeof(self->data.LastReportTime)) {
            PyErr_Format(PyExc_ValueError, "LastReportTime too long: length=%zd (max allowed is %zd)", MDTraderOfferField_LastReportTime_len, (Py_ssize_t)sizeof(self->data.LastReportTime));
            return -1;
        }
        // memset(self->data.LastReportTime, 0, sizeof(self->data.LastReportTime));
        // memcpy(self->data.LastReportTime, MDTraderOfferField_LastReportTime, MDTraderOfferField_LastReportTime_len);        
        strncpy(self->data.LastReportTime, MDTraderOfferField_LastReportTime, sizeof(self->data.LastReportTime) );
        MDTraderOfferField_LastReportTime = NULL;
    }
            
    ///完成连接日期
    // TThostFtdcDateType char[9]
    if( MDTraderOfferField_ConnectDate != NULL ) {
        if(MDTraderOfferField_ConnectDate_len > (Py_ssize_t)sizeof(self->data.ConnectDate)) {
            PyErr_Format(PyExc_ValueError, "ConnectDate too long: length=%zd (max allowed is %zd)", MDTraderOfferField_ConnectDate_len, (Py_ssize_t)sizeof(self->data.ConnectDate));
            return -1;
        }
        // memset(self->data.ConnectDate, 0, sizeof(self->data.ConnectDate));
        // memcpy(self->data.ConnectDate, MDTraderOfferField_ConnectDate, MDTraderOfferField_ConnectDate_len);        
        strncpy(self->data.ConnectDate, MDTraderOfferField_ConnectDate, sizeof(self->data.ConnectDate) );
        MDTraderOfferField_ConnectDate = NULL;
    }
            
    ///完成连接时间
    // TThostFtdcTimeType char[9]
    if( MDTraderOfferField_ConnectTime != NULL ) {
        if(MDTraderOfferField_ConnectTime_len > (Py_ssize_t)sizeof(self->data.ConnectTime)) {
            PyErr_Format(PyExc_ValueError, "ConnectTime too long: length=%zd (max allowed is %zd)", MDTraderOfferField_ConnectTime_len, (Py_ssize_t)sizeof(self->data.ConnectTime));
            return -1;
        }
        // memset(self->data.ConnectTime, 0, sizeof(self->data.ConnectTime));
        // memcpy(self->data.ConnectTime, MDTraderOfferField_ConnectTime, MDTraderOfferField_ConnectTime_len);        
        strncpy(self->data.ConnectTime, MDTraderOfferField_ConnectTime, sizeof(self->data.ConnectTime) );
        MDTraderOfferField_ConnectTime = NULL;
    }
            
    ///启动日期
    // TThostFtdcDateType char[9]
    if( MDTraderOfferField_StartDate != NULL ) {
        if(MDTraderOfferField_StartDate_len > (Py_ssize_t)sizeof(self->data.StartDate)) {
            PyErr_Format(PyExc_ValueError, "StartDate too long: length=%zd (max allowed is %zd)", MDTraderOfferField_StartDate_len, (Py_ssize_t)sizeof(self->data.StartDate));
            return -1;
        }
        // memset(self->data.StartDate, 0, sizeof(self->data.StartDate));
        // memcpy(self->data.StartDate, MDTraderOfferField_StartDate, MDTraderOfferField_StartDate_len);        
        strncpy(self->data.StartDate, MDTraderOfferField_StartDate, sizeof(self->data.StartDate) );
        MDTraderOfferField_StartDate = NULL;
    }
            
    ///启动时间
    // TThostFtdcTimeType char[9]
    if( MDTraderOfferField_StartTime != NULL ) {
        if(MDTraderOfferField_StartTime_len > (Py_ssize_t)sizeof(self->data.StartTime)) {
            PyErr_Format(PyExc_ValueError, "StartTime too long: length=%zd (max allowed is %zd)", MDTraderOfferField_StartTime_len, (Py_ssize_t)sizeof(self->data.StartTime));
            return -1;
        }
        // memset(self->data.StartTime, 0, sizeof(self->data.StartTime));
        // memcpy(self->data.StartTime, MDTraderOfferField_StartTime, MDTraderOfferField_StartTime_len);        
        strncpy(self->data.StartTime, MDTraderOfferField_StartTime, sizeof(self->data.StartTime) );
        MDTraderOfferField_StartTime = NULL;
    }
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( MDTraderOfferField_TradingDay != NULL ) {
        if(MDTraderOfferField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", MDTraderOfferField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, MDTraderOfferField_TradingDay, MDTraderOfferField_TradingDay_len);        
        strncpy(self->data.TradingDay, MDTraderOfferField_TradingDay, sizeof(self->data.TradingDay) );
        MDTraderOfferField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( MDTraderOfferField_BrokerID != NULL ) {
        if(MDTraderOfferField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", MDTraderOfferField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, MDTraderOfferField_BrokerID, MDTraderOfferField_BrokerID_len);        
        strncpy(self->data.BrokerID, MDTraderOfferField_BrokerID, sizeof(self->data.BrokerID) );
        MDTraderOfferField_BrokerID = NULL;
    }
            
    ///本席位最大成交编号
    // TThostFtdcTradeIDType char[21]
    if( MDTraderOfferField_MaxTradeID != NULL ) {
        if(MDTraderOfferField_MaxTradeID_len > (Py_ssize_t)sizeof(self->data.MaxTradeID)) {
            PyErr_Format(PyExc_ValueError, "MaxTradeID too long: length=%zd (max allowed is %zd)", MDTraderOfferField_MaxTradeID_len, (Py_ssize_t)sizeof(self->data.MaxTradeID));
            return -1;
        }
        // memset(self->data.MaxTradeID, 0, sizeof(self->data.MaxTradeID));
        // memcpy(self->data.MaxTradeID, MDTraderOfferField_MaxTradeID, MDTraderOfferField_MaxTradeID_len);        
        strncpy(self->data.MaxTradeID, MDTraderOfferField_MaxTradeID, sizeof(self->data.MaxTradeID) );
        MDTraderOfferField_MaxTradeID = NULL;
    }
            
    ///本席位最大报单备拷
    // TThostFtdcReturnCodeType char[7]
    if( MDTraderOfferField_MaxOrderMessageReference != NULL ) {
        if(MDTraderOfferField_MaxOrderMessageReference_len > (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference)) {
            PyErr_Format(PyExc_ValueError, "MaxOrderMessageReference too long: length=%zd (max allowed is %zd)", MDTraderOfferField_MaxOrderMessageReference_len, (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference));
            return -1;
        }
        // memset(self->data.MaxOrderMessageReference, 0, sizeof(self->data.MaxOrderMessageReference));
        // memcpy(self->data.MaxOrderMessageReference, MDTraderOfferField_MaxOrderMessageReference, MDTraderOfferField_MaxOrderMessageReference_len);        
        strncpy(self->data.MaxOrderMessageReference, MDTraderOfferField_MaxOrderMessageReference, sizeof(self->data.MaxOrderMessageReference) );
        MDTraderOfferField_MaxOrderMessageReference = NULL;
    }
            
    ///撤单时选择席位算法
    // TThostFtdcOrderCancelAlgType char
    self->data.OrderCancelAlg = MDTraderOfferField_OrderCancelAlg;
            

    return 0;
}

static void PyCThostFtdcMDTraderOfferField_dealloc(PyCThostFtdcMDTraderOfferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMDTraderOfferField_repr(PyCThostFtdcMDTraderOfferField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMDTraderOfferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcMDTraderOfferField_get_ExchangeID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcMDTraderOfferField_set_ExchangeID(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_TraderID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcMDTraderOfferField_set_TraderID(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_ParticipantID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcMDTraderOfferField_set_ParticipantID(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_Password(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcMDTraderOfferField_set_Password(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_InstallID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcMDTraderOfferField_set_InstallID(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_OrderLocalID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcMDTraderOfferField_set_OrderLocalID(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_TraderConnectStatus(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TraderConnectStatus), 1);
}

///交易所交易员连接状态
// TThostFtdcTraderConnectStatusType char
static int PyCThostFtdcMDTraderOfferField_set_TraderConnectStatus(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_ConnectRequestDate(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConnectRequestDate, (Py_ssize_t)sizeof(self->data.ConnectRequestDate));
    return PyBytes_FromString(self->data.ConnectRequestDate);
}

///发出连接请求的日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcMDTraderOfferField_set_ConnectRequestDate(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_ConnectRequestTime(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConnectRequestTime, (Py_ssize_t)sizeof(self->data.ConnectRequestTime));
    return PyBytes_FromString(self->data.ConnectRequestTime);
}

///发出连接请求的时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcMDTraderOfferField_set_ConnectRequestTime(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_LastReportDate(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LastReportDate, (Py_ssize_t)sizeof(self->data.LastReportDate));
    return PyBytes_FromString(self->data.LastReportDate);
}

///上次报告日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcMDTraderOfferField_set_LastReportDate(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_LastReportTime(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LastReportTime, (Py_ssize_t)sizeof(self->data.LastReportTime));
    return PyBytes_FromString(self->data.LastReportTime);
}

///上次报告时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcMDTraderOfferField_set_LastReportTime(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_ConnectDate(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConnectDate, (Py_ssize_t)sizeof(self->data.ConnectDate));
    return PyBytes_FromString(self->data.ConnectDate);
}

///完成连接日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcMDTraderOfferField_set_ConnectDate(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_ConnectTime(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConnectTime, (Py_ssize_t)sizeof(self->data.ConnectTime));
    return PyBytes_FromString(self->data.ConnectTime);
}

///完成连接时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcMDTraderOfferField_set_ConnectTime(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_StartDate(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StartDate, (Py_ssize_t)sizeof(self->data.StartDate));
    return PyBytes_FromString(self->data.StartDate);
}

///启动日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcMDTraderOfferField_set_StartDate(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_StartTime(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StartTime, (Py_ssize_t)sizeof(self->data.StartTime));
    return PyBytes_FromString(self->data.StartTime);
}

///启动时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcMDTraderOfferField_set_StartTime(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_TradingDay(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcMDTraderOfferField_set_TradingDay(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_BrokerID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcMDTraderOfferField_set_BrokerID(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_MaxTradeID(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MaxTradeID, (Py_ssize_t)sizeof(self->data.MaxTradeID));
    return PyBytes_FromString(self->data.MaxTradeID);
}

///本席位最大成交编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcMDTraderOfferField_set_MaxTradeID(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_MaxOrderMessageReference(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MaxOrderMessageReference, (Py_ssize_t)sizeof(self->data.MaxOrderMessageReference));
    return PyBytes_FromString(self->data.MaxOrderMessageReference);
}

///本席位最大报单备拷
// TThostFtdcReturnCodeType char[7]
static int PyCThostFtdcMDTraderOfferField_set_MaxOrderMessageReference(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMDTraderOfferField_get_OrderCancelAlg(PyCThostFtdcMDTraderOfferField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderCancelAlg), 1);
}

///撤单时选择席位算法
// TThostFtdcOrderCancelAlgType char
static int PyCThostFtdcMDTraderOfferField_set_OrderCancelAlg(PyCThostFtdcMDTraderOfferField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcMDTraderOfferField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcMDTraderOfferField_get_ExchangeID, (setter)PyCThostFtdcMDTraderOfferField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcMDTraderOfferField_get_TraderID, (setter)PyCThostFtdcMDTraderOfferField_set_TraderID, (char *)"TraderID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcMDTraderOfferField_get_ParticipantID, (setter)PyCThostFtdcMDTraderOfferField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcMDTraderOfferField_get_Password, (setter)PyCThostFtdcMDTraderOfferField_set_Password, (char *)"Password", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcMDTraderOfferField_get_InstallID, (setter)PyCThostFtdcMDTraderOfferField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcMDTraderOfferField_get_OrderLocalID, (setter)PyCThostFtdcMDTraderOfferField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///交易所交易员连接状态 
    {(char *)"TraderConnectStatus", (getter)PyCThostFtdcMDTraderOfferField_get_TraderConnectStatus, (setter)PyCThostFtdcMDTraderOfferField_set_TraderConnectStatus, (char *)"TraderConnectStatus", NULL},
    ///发出连接请求的日期 
    {(char *)"ConnectRequestDate", (getter)PyCThostFtdcMDTraderOfferField_get_ConnectRequestDate, (setter)PyCThostFtdcMDTraderOfferField_set_ConnectRequestDate, (char *)"ConnectRequestDate", NULL},
    ///发出连接请求的时间 
    {(char *)"ConnectRequestTime", (getter)PyCThostFtdcMDTraderOfferField_get_ConnectRequestTime, (setter)PyCThostFtdcMDTraderOfferField_set_ConnectRequestTime, (char *)"ConnectRequestTime", NULL},
    ///上次报告日期 
    {(char *)"LastReportDate", (getter)PyCThostFtdcMDTraderOfferField_get_LastReportDate, (setter)PyCThostFtdcMDTraderOfferField_set_LastReportDate, (char *)"LastReportDate", NULL},
    ///上次报告时间 
    {(char *)"LastReportTime", (getter)PyCThostFtdcMDTraderOfferField_get_LastReportTime, (setter)PyCThostFtdcMDTraderOfferField_set_LastReportTime, (char *)"LastReportTime", NULL},
    ///完成连接日期 
    {(char *)"ConnectDate", (getter)PyCThostFtdcMDTraderOfferField_get_ConnectDate, (setter)PyCThostFtdcMDTraderOfferField_set_ConnectDate, (char *)"ConnectDate", NULL},
    ///完成连接时间 
    {(char *)"ConnectTime", (getter)PyCThostFtdcMDTraderOfferField_get_ConnectTime, (setter)PyCThostFtdcMDTraderOfferField_set_ConnectTime, (char *)"ConnectTime", NULL},
    ///启动日期 
    {(char *)"StartDate", (getter)PyCThostFtdcMDTraderOfferField_get_StartDate, (setter)PyCThostFtdcMDTraderOfferField_set_StartDate, (char *)"StartDate", NULL},
    ///启动时间 
    {(char *)"StartTime", (getter)PyCThostFtdcMDTraderOfferField_get_StartTime, (setter)PyCThostFtdcMDTraderOfferField_set_StartTime, (char *)"StartTime", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcMDTraderOfferField_get_TradingDay, (setter)PyCThostFtdcMDTraderOfferField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcMDTraderOfferField_get_BrokerID, (setter)PyCThostFtdcMDTraderOfferField_set_BrokerID, (char *)"BrokerID", NULL},
    ///本席位最大成交编号 
    {(char *)"MaxTradeID", (getter)PyCThostFtdcMDTraderOfferField_get_MaxTradeID, (setter)PyCThostFtdcMDTraderOfferField_set_MaxTradeID, (char *)"MaxTradeID", NULL},
    ///本席位最大报单备拷 
    {(char *)"MaxOrderMessageReference", (getter)PyCThostFtdcMDTraderOfferField_get_MaxOrderMessageReference, (setter)PyCThostFtdcMDTraderOfferField_set_MaxOrderMessageReference, (char *)"MaxOrderMessageReference", NULL},
    ///撤单时选择席位算法 
    {(char *)"OrderCancelAlg", (getter)PyCThostFtdcMDTraderOfferField_get_OrderCancelAlg, (setter)PyCThostFtdcMDTraderOfferField_set_OrderCancelAlg, (char *)"OrderCancelAlg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMDTraderOfferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMDTraderOfferField",	/* tp_name */
	sizeof(PyCThostFtdcMDTraderOfferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMDTraderOfferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMDTraderOfferField_repr,   /* tp_repr */
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
	"CThostFtdcMDTraderOfferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMDTraderOfferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMDTraderOfferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMDTraderOfferField_new,       /* tp_new */
};

int PyCThostFtdcMDTraderOfferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMDTraderOfferField  */
	if (PyType_Ready(&PyCThostFtdcMDTraderOfferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMDTraderOfferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMDTraderOfferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMDTraderOfferField", (PyObject *)&PyCThostFtdcMDTraderOfferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMDTraderOfferField to module");
        Py_DECREF(&PyCThostFtdcMDTraderOfferFieldType);
		return -1;
    }

    return 0;
}
