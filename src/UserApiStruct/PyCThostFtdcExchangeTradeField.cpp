
#include "PyCThostFtdcExchangeTradeField.h"

///交易所成交

static PyObject *PyCThostFtdcExchangeTradeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeTradeField *self = (PyCThostFtdcExchangeTradeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeTradeField_init(PyCThostFtdcExchangeTradeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TradeID", "Direction", "OrderSysID", "ParticipantID", "ClientID", "TradingRole", "reserve1", "OffsetFlag", "HedgeFlag", "Price", "Volume", "TradeDate", "TradeTime", "TradeType", "PriceSource", "TraderID", "OrderLocalID", "ClearingPartID", "BusinessUnit", "SequenceNo", "TradeSource", "ExchangeInstID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeTradeField_ExchangeID = NULL;
    Py_ssize_t ExchangeTradeField_ExchangeID_len = 0;
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    const char *ExchangeTradeField_TradeID = NULL;
    Py_ssize_t ExchangeTradeField_TradeID_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char ExchangeTradeField_Direction = 0;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeTradeField_OrderSysID = NULL;
    Py_ssize_t ExchangeTradeField_OrderSysID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeTradeField_ParticipantID = NULL;
    Py_ssize_t ExchangeTradeField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeTradeField_ClientID = NULL;
    Py_ssize_t ExchangeTradeField_ClientID_len = 0;
            
    ///交易角色
    // TThostFtdcTradingRoleType char
    char ExchangeTradeField_TradingRole = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeTradeField_reserve1 = NULL;
    Py_ssize_t ExchangeTradeField_reserve1_len = 0;
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    char ExchangeTradeField_OffsetFlag = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char ExchangeTradeField_HedgeFlag = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double ExchangeTradeField_Price = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int ExchangeTradeField_Volume = 0;
        
    ///成交时期
    // TThostFtdcDateType char[9]
    const char *ExchangeTradeField_TradeDate = NULL;
    Py_ssize_t ExchangeTradeField_TradeDate_len = 0;
            
    ///成交时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeTradeField_TradeTime = NULL;
    Py_ssize_t ExchangeTradeField_TradeTime_len = 0;
            
    ///成交类型
    // TThostFtdcTradeTypeType char
    char ExchangeTradeField_TradeType = 0;
            
    ///成交价来源
    // TThostFtdcPriceSourceType char
    char ExchangeTradeField_PriceSource = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeTradeField_TraderID = NULL;
    Py_ssize_t ExchangeTradeField_TraderID_len = 0;
            
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeTradeField_OrderLocalID = NULL;
    Py_ssize_t ExchangeTradeField_OrderLocalID_len = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeTradeField_ClearingPartID = NULL;
    Py_ssize_t ExchangeTradeField_ClearingPartID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeTradeField_BusinessUnit = NULL;
    Py_ssize_t ExchangeTradeField_BusinessUnit_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int ExchangeTradeField_SequenceNo = 0;
        
    ///成交来源
    // TThostFtdcTradeSourceType char
    char ExchangeTradeField_TradeSource = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeTradeField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeTradeField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#cy#ccdiy#y#ccy#y#y#y#icy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#s#cs#ccdis#s#ccs#s#s#s#ics#", (char **)kwlist
#endif

        , &ExchangeTradeField_ExchangeID, &ExchangeTradeField_ExchangeID_len 
        , &ExchangeTradeField_TradeID, &ExchangeTradeField_TradeID_len 
        , &ExchangeTradeField_Direction 
        , &ExchangeTradeField_OrderSysID, &ExchangeTradeField_OrderSysID_len 
        , &ExchangeTradeField_ParticipantID, &ExchangeTradeField_ParticipantID_len 
        , &ExchangeTradeField_ClientID, &ExchangeTradeField_ClientID_len 
        , &ExchangeTradeField_TradingRole 
        , &ExchangeTradeField_reserve1, &ExchangeTradeField_reserve1_len 
        , &ExchangeTradeField_OffsetFlag 
        , &ExchangeTradeField_HedgeFlag 
        , &ExchangeTradeField_Price 
        , &ExchangeTradeField_Volume 
        , &ExchangeTradeField_TradeDate, &ExchangeTradeField_TradeDate_len 
        , &ExchangeTradeField_TradeTime, &ExchangeTradeField_TradeTime_len 
        , &ExchangeTradeField_TradeType 
        , &ExchangeTradeField_PriceSource 
        , &ExchangeTradeField_TraderID, &ExchangeTradeField_TraderID_len 
        , &ExchangeTradeField_OrderLocalID, &ExchangeTradeField_OrderLocalID_len 
        , &ExchangeTradeField_ClearingPartID, &ExchangeTradeField_ClearingPartID_len 
        , &ExchangeTradeField_BusinessUnit, &ExchangeTradeField_BusinessUnit_len 
        , &ExchangeTradeField_SequenceNo 
        , &ExchangeTradeField_TradeSource 
        , &ExchangeTradeField_ExchangeInstID, &ExchangeTradeField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeTradeField_ExchangeID != NULL ) {
        if(ExchangeTradeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeTradeField_ExchangeID, ExchangeTradeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeTradeField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeTradeField_ExchangeID = NULL;
    }
            
    ///成交编号
    // TThostFtdcTradeIDType char[21]
    if( ExchangeTradeField_TradeID != NULL ) {
        if(ExchangeTradeField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
            return -1;
        }
        // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
        // memcpy(self->data.TradeID, ExchangeTradeField_TradeID, ExchangeTradeField_TradeID_len);        
        strncpy(self->data.TradeID, ExchangeTradeField_TradeID, sizeof(self->data.TradeID) );
        ExchangeTradeField_TradeID = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = ExchangeTradeField_Direction;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeTradeField_OrderSysID != NULL ) {
        if(ExchangeTradeField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, ExchangeTradeField_OrderSysID, ExchangeTradeField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, ExchangeTradeField_OrderSysID, sizeof(self->data.OrderSysID) );
        ExchangeTradeField_OrderSysID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeTradeField_ParticipantID != NULL ) {
        if(ExchangeTradeField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeTradeField_ParticipantID, ExchangeTradeField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeTradeField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeTradeField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeTradeField_ClientID != NULL ) {
        if(ExchangeTradeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeTradeField_ClientID, ExchangeTradeField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeTradeField_ClientID, sizeof(self->data.ClientID) );
        ExchangeTradeField_ClientID = NULL;
    }
            
    ///交易角色
    // TThostFtdcTradingRoleType char
    self->data.TradingRole = ExchangeTradeField_TradingRole;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeTradeField_reserve1 != NULL ) {
        if(ExchangeTradeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeTradeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeTradeField_reserve1, ExchangeTradeField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeTradeField_reserve1, sizeof(self->data.reserve1) );
        ExchangeTradeField_reserve1 = NULL;
    }
            
    ///开平标志
    // TThostFtdcOffsetFlagType char
    self->data.OffsetFlag = ExchangeTradeField_OffsetFlag;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = ExchangeTradeField_HedgeFlag;
            
    ///价格
    // TThostFtdcPriceType double
    self->data.Price = ExchangeTradeField_Price;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = ExchangeTradeField_Volume;
        
    ///成交时期
    // TThostFtdcDateType char[9]
    if( ExchangeTradeField_TradeDate != NULL ) {
        if(ExchangeTradeField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", ExchangeTradeField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
            return -1;
        }
        // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
        // memcpy(self->data.TradeDate, ExchangeTradeField_TradeDate, ExchangeTradeField_TradeDate_len);        
        strncpy(self->data.TradeDate, ExchangeTradeField_TradeDate, sizeof(self->data.TradeDate) );
        ExchangeTradeField_TradeDate = NULL;
    }
            
    ///成交时间
    // TThostFtdcTimeType char[9]
    if( ExchangeTradeField_TradeTime != NULL ) {
        if(ExchangeTradeField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", ExchangeTradeField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
            return -1;
        }
        // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
        // memcpy(self->data.TradeTime, ExchangeTradeField_TradeTime, ExchangeTradeField_TradeTime_len);        
        strncpy(self->data.TradeTime, ExchangeTradeField_TradeTime, sizeof(self->data.TradeTime) );
        ExchangeTradeField_TradeTime = NULL;
    }
            
    ///成交类型
    // TThostFtdcTradeTypeType char
    self->data.TradeType = ExchangeTradeField_TradeType;
            
    ///成交价来源
    // TThostFtdcPriceSourceType char
    self->data.PriceSource = ExchangeTradeField_PriceSource;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeTradeField_TraderID != NULL ) {
        if(ExchangeTradeField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeTradeField_TraderID, ExchangeTradeField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeTradeField_TraderID, sizeof(self->data.TraderID) );
        ExchangeTradeField_TraderID = NULL;
    }
            
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeTradeField_OrderLocalID != NULL ) {
        if(ExchangeTradeField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, ExchangeTradeField_OrderLocalID, ExchangeTradeField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, ExchangeTradeField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        ExchangeTradeField_OrderLocalID = NULL;
    }
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeTradeField_ClearingPartID != NULL ) {
        if(ExchangeTradeField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, ExchangeTradeField_ClearingPartID, ExchangeTradeField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, ExchangeTradeField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        ExchangeTradeField_ClearingPartID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeTradeField_BusinessUnit != NULL ) {
        if(ExchangeTradeField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeTradeField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeTradeField_BusinessUnit, ExchangeTradeField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeTradeField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeTradeField_BusinessUnit = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = ExchangeTradeField_SequenceNo;
        
    ///成交来源
    // TThostFtdcTradeSourceType char
    self->data.TradeSource = ExchangeTradeField_TradeSource;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeTradeField_ExchangeInstID != NULL ) {
        if(ExchangeTradeField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeTradeField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeTradeField_ExchangeInstID, ExchangeTradeField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeTradeField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeTradeField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeTradeField_dealloc(PyCThostFtdcExchangeTradeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeTradeField_repr(PyCThostFtdcExchangeTradeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:c,s:c,s:d,s:i,s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:s,s:c,s:s,s:c,s:c,s:d,s:i,s:s,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:i,s:c,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TradeID", self->data.TradeID//, (Py_ssize_t)sizeof(self->data.TradeID) 
        ,"Direction", self->data.Direction 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"TradingRole", self->data.TradingRole 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"OffsetFlag", self->data.OffsetFlag 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"Price", self->data.Price 
        ,"Volume", self->data.Volume 
        ,"TradeDate", self->data.TradeDate//, (Py_ssize_t)sizeof(self->data.TradeDate) 
        ,"TradeTime", self->data.TradeTime//, (Py_ssize_t)sizeof(self->data.TradeTime) 
        ,"TradeType", self->data.TradeType 
        ,"PriceSource", self->data.PriceSource 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
        ,"ClearingPartID", self->data.ClearingPartID//, (Py_ssize_t)sizeof(self->data.ClearingPartID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"SequenceNo", self->data.SequenceNo 
        ,"TradeSource", self->data.TradeSource 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeTradeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeTradeField_get_ExchangeID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeTradeField_set_ExchangeID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
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
            
///成交编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcExchangeTradeField_get_TradeID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeID, (Py_ssize_t)sizeof(self->data.TradeID));
    return PyBytes_FromString(self->data.TradeID);
}

///成交编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcExchangeTradeField_set_TradeID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
    // memcpy(self->data.TradeID, buf, len);
    strncpy(self->data.TradeID, buf, sizeof(self->data.TradeID));
    return 0;
}
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcExchangeTradeField_get_Direction(PyCThostFtdcExchangeTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcExchangeTradeField_set_Direction(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcExchangeTradeField_get_OrderSysID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeTradeField_set_OrderSysID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcExchangeTradeField_get_ParticipantID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeTradeField_set_ParticipantID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
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
            
///客户代码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcExchangeTradeField_get_ClientID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeTradeField_set_ClientID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///交易角色
// TThostFtdcTradingRoleType char
static PyObject *PyCThostFtdcExchangeTradeField_get_TradingRole(PyCThostFtdcExchangeTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradingRole), 1);
}

///交易角色
// TThostFtdcTradingRoleType char
static int PyCThostFtdcExchangeTradeField_set_TradingRole(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingRole Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingRole)) {
        PyErr_SetString(PyExc_ValueError, "TradingRole must be equal 1 bytes");
        return -1;
    }
    self->data.TradingRole = *buf;
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcExchangeTradeField_get_reserve1(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeTradeField_set_reserve1(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
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
            
///开平标志
// TThostFtdcOffsetFlagType char
static PyObject *PyCThostFtdcExchangeTradeField_get_OffsetFlag(PyCThostFtdcExchangeTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

///开平标志
// TThostFtdcOffsetFlagType char
static int PyCThostFtdcExchangeTradeField_set_OffsetFlag(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetFlag = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcExchangeTradeField_get_HedgeFlag(PyCThostFtdcExchangeTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcExchangeTradeField_set_HedgeFlag(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcExchangeTradeField_get_Price(PyCThostFtdcExchangeTradeField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Price);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcExchangeTradeField_set_Price(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Price Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Price = buf;
    return 0;
}
        
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcExchangeTradeField_get_Volume(PyCThostFtdcExchangeTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeTradeField_set_Volume(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Volume value out of range for C int");
        return -1;
    }
    self->data.Volume = (int)buf;
    return 0;
}
        
///成交时期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcExchangeTradeField_get_TradeDate(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeDate, (Py_ssize_t)sizeof(self->data.TradeDate));
    return PyBytes_FromString(self->data.TradeDate);
}

///成交时期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeTradeField_set_TradeDate(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeDate, 0, sizeof(self->data.TradeDate));
    // memcpy(self->data.TradeDate, buf, len);
    strncpy(self->data.TradeDate, buf, sizeof(self->data.TradeDate));
    return 0;
}
            
///成交时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcExchangeTradeField_get_TradeTime(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeTime, (Py_ssize_t)sizeof(self->data.TradeTime));
    return PyBytes_FromString(self->data.TradeTime);
}

///成交时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeTradeField_set_TradeTime(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradeTime, 0, sizeof(self->data.TradeTime));
    // memcpy(self->data.TradeTime, buf, len);
    strncpy(self->data.TradeTime, buf, sizeof(self->data.TradeTime));
    return 0;
}
            
///成交类型
// TThostFtdcTradeTypeType char
static PyObject *PyCThostFtdcExchangeTradeField_get_TradeType(PyCThostFtdcExchangeTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradeType), 1);
}

///成交类型
// TThostFtdcTradeTypeType char
static int PyCThostFtdcExchangeTradeField_set_TradeType(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeType)) {
        PyErr_SetString(PyExc_ValueError, "TradeType must be equal 1 bytes");
        return -1;
    }
    self->data.TradeType = *buf;
    return 0;
}
            
///成交价来源
// TThostFtdcPriceSourceType char
static PyObject *PyCThostFtdcExchangeTradeField_get_PriceSource(PyCThostFtdcExchangeTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PriceSource), 1);
}

///成交价来源
// TThostFtdcPriceSourceType char
static int PyCThostFtdcExchangeTradeField_set_PriceSource(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PriceSource Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PriceSource)) {
        PyErr_SetString(PyExc_ValueError, "PriceSource must be equal 1 bytes");
        return -1;
    }
    self->data.PriceSource = *buf;
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcExchangeTradeField_get_TraderID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeTradeField_set_TraderID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
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
            
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeTradeField_get_OrderLocalID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeTradeField_set_OrderLocalID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
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
            
///结算会员编号
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcExchangeTradeField_get_ClearingPartID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeTradeField_set_ClearingPartID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
    // memcpy(self->data.ClearingPartID, buf, len);
    strncpy(self->data.ClearingPartID, buf, sizeof(self->data.ClearingPartID));
    return 0;
}
            
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcExchangeTradeField_get_BusinessUnit(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeTradeField_set_BusinessUnit(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
    // memcpy(self->data.BusinessUnit, buf, len);
    strncpy(self->data.BusinessUnit, buf, sizeof(self->data.BusinessUnit));
    return 0;
}
            
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcExchangeTradeField_get_SequenceNo(PyCThostFtdcExchangeTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeTradeField_set_SequenceNo(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SequenceNo value out of range for C int");
        return -1;
    }
    self->data.SequenceNo = (int)buf;
    return 0;
}
        
///成交来源
// TThostFtdcTradeSourceType char
static PyObject *PyCThostFtdcExchangeTradeField_get_TradeSource(PyCThostFtdcExchangeTradeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradeSource), 1);
}

///成交来源
// TThostFtdcTradeSourceType char
static int PyCThostFtdcExchangeTradeField_set_TradeSource(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeSource Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeSource)) {
        PyErr_SetString(PyExc_ValueError, "TradeSource must be equal 1 bytes");
        return -1;
    }
    self->data.TradeSource = *buf;
    return 0;
}
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcExchangeTradeField_get_ExchangeInstID(PyCThostFtdcExchangeTradeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeTradeField_set_ExchangeInstID(PyCThostFtdcExchangeTradeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcExchangeTradeField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeTradeField_get_ExchangeID, (setter)PyCThostFtdcExchangeTradeField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///成交编号 
    {(char *)"TradeID", (getter)PyCThostFtdcExchangeTradeField_get_TradeID, (setter)PyCThostFtdcExchangeTradeField_set_TradeID, (char *)"TradeID", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcExchangeTradeField_get_Direction, (setter)PyCThostFtdcExchangeTradeField_set_Direction, (char *)"Direction", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcExchangeTradeField_get_OrderSysID, (setter)PyCThostFtdcExchangeTradeField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeTradeField_get_ParticipantID, (setter)PyCThostFtdcExchangeTradeField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeTradeField_get_ClientID, (setter)PyCThostFtdcExchangeTradeField_set_ClientID, (char *)"ClientID", NULL},
    ///交易角色 
    {(char *)"TradingRole", (getter)PyCThostFtdcExchangeTradeField_get_TradingRole, (setter)PyCThostFtdcExchangeTradeField_set_TradingRole, (char *)"TradingRole", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeTradeField_get_reserve1, (setter)PyCThostFtdcExchangeTradeField_set_reserve1, (char *)"reserve1", NULL},
    ///开平标志 
    {(char *)"OffsetFlag", (getter)PyCThostFtdcExchangeTradeField_get_OffsetFlag, (setter)PyCThostFtdcExchangeTradeField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeTradeField_get_HedgeFlag, (setter)PyCThostFtdcExchangeTradeField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///价格 
    {(char *)"Price", (getter)PyCThostFtdcExchangeTradeField_get_Price, (setter)PyCThostFtdcExchangeTradeField_set_Price, (char *)"Price", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcExchangeTradeField_get_Volume, (setter)PyCThostFtdcExchangeTradeField_set_Volume, (char *)"Volume", NULL},
    ///成交时期 
    {(char *)"TradeDate", (getter)PyCThostFtdcExchangeTradeField_get_TradeDate, (setter)PyCThostFtdcExchangeTradeField_set_TradeDate, (char *)"TradeDate", NULL},
    ///成交时间 
    {(char *)"TradeTime", (getter)PyCThostFtdcExchangeTradeField_get_TradeTime, (setter)PyCThostFtdcExchangeTradeField_set_TradeTime, (char *)"TradeTime", NULL},
    ///成交类型 
    {(char *)"TradeType", (getter)PyCThostFtdcExchangeTradeField_get_TradeType, (setter)PyCThostFtdcExchangeTradeField_set_TradeType, (char *)"TradeType", NULL},
    ///成交价来源 
    {(char *)"PriceSource", (getter)PyCThostFtdcExchangeTradeField_get_PriceSource, (setter)PyCThostFtdcExchangeTradeField_set_PriceSource, (char *)"PriceSource", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeTradeField_get_TraderID, (setter)PyCThostFtdcExchangeTradeField_set_TraderID, (char *)"TraderID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcExchangeTradeField_get_OrderLocalID, (setter)PyCThostFtdcExchangeTradeField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeTradeField_get_ClearingPartID, (setter)PyCThostFtdcExchangeTradeField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeTradeField_get_BusinessUnit, (setter)PyCThostFtdcExchangeTradeField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeTradeField_get_SequenceNo, (setter)PyCThostFtdcExchangeTradeField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///成交来源 
    {(char *)"TradeSource", (getter)PyCThostFtdcExchangeTradeField_get_TradeSource, (setter)PyCThostFtdcExchangeTradeField_set_TradeSource, (char *)"TradeSource", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeTradeField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeTradeField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeTradeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeTradeField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeTradeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeTradeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeTradeField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeTradeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeTradeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeTradeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeTradeField_new,       /* tp_new */
};

int PyCThostFtdcExchangeTradeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeTradeField  */
	if (PyType_Ready(&PyCThostFtdcExchangeTradeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeTradeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeTradeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeTradeField", (PyObject *)&PyCThostFtdcExchangeTradeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeTradeField to module");
        Py_DECREF(&PyCThostFtdcExchangeTradeFieldType);
		return -1;
    }

    return 0;
}
