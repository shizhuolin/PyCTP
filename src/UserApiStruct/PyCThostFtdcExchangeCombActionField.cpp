
#include "PyCThostFtdcExchangeCombActionField.h"

///交易所申请组合信息

static PyObject *PyCThostFtdcExchangeCombActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeCombActionField *self = (PyCThostFtdcExchangeCombActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeCombActionField_init(PyCThostFtdcExchangeCombActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"Direction", "Volume", "CombDirection", "HedgeFlag", "ActionLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "ActionStatus", "NotifySequence", "TradingDay", "SettlementID", "SequenceNo", "reserve2", "MacAddress", "ComTradeID", "BranchID", "ExchangeInstID", "IPAddress",  NULL};


    ///买卖方向
    // TThostFtdcDirectionType char
    char ExchangeCombActionField_Direction = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int ExchangeCombActionField_Volume = 0;
        
    ///组合指令方向
    // TThostFtdcCombDirectionType char
    char ExchangeCombActionField_CombDirection = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char ExchangeCombActionField_HedgeFlag = 0;
            
    ///本地申请组合编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeCombActionField_ActionLocalID = NULL;
    Py_ssize_t ExchangeCombActionField_ActionLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeCombActionField_ExchangeID = NULL;
    Py_ssize_t ExchangeCombActionField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeCombActionField_ParticipantID = NULL;
    Py_ssize_t ExchangeCombActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeCombActionField_ClientID = NULL;
    Py_ssize_t ExchangeCombActionField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeCombActionField_reserve1 = NULL;
    Py_ssize_t ExchangeCombActionField_reserve1_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeCombActionField_TraderID = NULL;
    Py_ssize_t ExchangeCombActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeCombActionField_InstallID = 0;
        
    ///组合状态
    // TThostFtdcOrderActionStatusType char
    char ExchangeCombActionField_ActionStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int ExchangeCombActionField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *ExchangeCombActionField_TradingDay = NULL;
    Py_ssize_t ExchangeCombActionField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int ExchangeCombActionField_SettlementID = 0;
        
    ///序号
    // TThostFtdcSequenceNoType int
    int ExchangeCombActionField_SequenceNo = 0;
        
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeCombActionField_reserve2 = NULL;
    Py_ssize_t ExchangeCombActionField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeCombActionField_MacAddress = NULL;
    Py_ssize_t ExchangeCombActionField_MacAddress_len = 0;
            
    ///组合编号
    // TThostFtdcTradeIDType char[21]
    const char *ExchangeCombActionField_ComTradeID = NULL;
    Py_ssize_t ExchangeCombActionField_ComTradeID_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExchangeCombActionField_BranchID = NULL;
    Py_ssize_t ExchangeCombActionField_BranchID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeCombActionField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeCombActionField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeCombActionField_IPAddress = NULL;
    Py_ssize_t ExchangeCombActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ciccy#y#y#y#y#y#iciy#iiy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ciccs#s#s#s#s#s#icis#iis#s#s#s#s#s#", (char **)kwlist
#endif

        , &ExchangeCombActionField_Direction 
        , &ExchangeCombActionField_Volume 
        , &ExchangeCombActionField_CombDirection 
        , &ExchangeCombActionField_HedgeFlag 
        , &ExchangeCombActionField_ActionLocalID, &ExchangeCombActionField_ActionLocalID_len 
        , &ExchangeCombActionField_ExchangeID, &ExchangeCombActionField_ExchangeID_len 
        , &ExchangeCombActionField_ParticipantID, &ExchangeCombActionField_ParticipantID_len 
        , &ExchangeCombActionField_ClientID, &ExchangeCombActionField_ClientID_len 
        , &ExchangeCombActionField_reserve1, &ExchangeCombActionField_reserve1_len 
        , &ExchangeCombActionField_TraderID, &ExchangeCombActionField_TraderID_len 
        , &ExchangeCombActionField_InstallID 
        , &ExchangeCombActionField_ActionStatus 
        , &ExchangeCombActionField_NotifySequence 
        , &ExchangeCombActionField_TradingDay, &ExchangeCombActionField_TradingDay_len 
        , &ExchangeCombActionField_SettlementID 
        , &ExchangeCombActionField_SequenceNo 
        , &ExchangeCombActionField_reserve2, &ExchangeCombActionField_reserve2_len 
        , &ExchangeCombActionField_MacAddress, &ExchangeCombActionField_MacAddress_len 
        , &ExchangeCombActionField_ComTradeID, &ExchangeCombActionField_ComTradeID_len 
        , &ExchangeCombActionField_BranchID, &ExchangeCombActionField_BranchID_len 
        , &ExchangeCombActionField_ExchangeInstID, &ExchangeCombActionField_ExchangeInstID_len 
        , &ExchangeCombActionField_IPAddress, &ExchangeCombActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = ExchangeCombActionField_Direction;
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = ExchangeCombActionField_Volume;
        
    ///组合指令方向
    // TThostFtdcCombDirectionType char
    self->data.CombDirection = ExchangeCombActionField_CombDirection;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = ExchangeCombActionField_HedgeFlag;
            
    ///本地申请组合编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeCombActionField_ActionLocalID != NULL ) {
        if(ExchangeCombActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, ExchangeCombActionField_ActionLocalID, ExchangeCombActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, ExchangeCombActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        ExchangeCombActionField_ActionLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeCombActionField_ExchangeID != NULL ) {
        if(ExchangeCombActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeCombActionField_ExchangeID, ExchangeCombActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeCombActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeCombActionField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeCombActionField_ParticipantID != NULL ) {
        if(ExchangeCombActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeCombActionField_ParticipantID, ExchangeCombActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeCombActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeCombActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeCombActionField_ClientID != NULL ) {
        if(ExchangeCombActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeCombActionField_ClientID, ExchangeCombActionField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeCombActionField_ClientID, sizeof(self->data.ClientID) );
        ExchangeCombActionField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeCombActionField_reserve1 != NULL ) {
        if(ExchangeCombActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeCombActionField_reserve1, ExchangeCombActionField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeCombActionField_reserve1, sizeof(self->data.reserve1) );
        ExchangeCombActionField_reserve1 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeCombActionField_TraderID != NULL ) {
        if(ExchangeCombActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeCombActionField_TraderID, ExchangeCombActionField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeCombActionField_TraderID, sizeof(self->data.TraderID) );
        ExchangeCombActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeCombActionField_InstallID;
        
    ///组合状态
    // TThostFtdcOrderActionStatusType char
    self->data.ActionStatus = ExchangeCombActionField_ActionStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = ExchangeCombActionField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( ExchangeCombActionField_TradingDay != NULL ) {
        if(ExchangeCombActionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ExchangeCombActionField_TradingDay, ExchangeCombActionField_TradingDay_len);        
        strncpy(self->data.TradingDay, ExchangeCombActionField_TradingDay, sizeof(self->data.TradingDay) );
        ExchangeCombActionField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = ExchangeCombActionField_SettlementID;
        
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = ExchangeCombActionField_SequenceNo;
        
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeCombActionField_reserve2 != NULL ) {
        if(ExchangeCombActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExchangeCombActionField_reserve2, ExchangeCombActionField_reserve2_len);        
        strncpy(self->data.reserve2, ExchangeCombActionField_reserve2, sizeof(self->data.reserve2) );
        ExchangeCombActionField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeCombActionField_MacAddress != NULL ) {
        if(ExchangeCombActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeCombActionField_MacAddress, ExchangeCombActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeCombActionField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeCombActionField_MacAddress = NULL;
    }
            
    ///组合编号
    // TThostFtdcTradeIDType char[21]
    if( ExchangeCombActionField_ComTradeID != NULL ) {
        if(ExchangeCombActionField_ComTradeID_len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
            PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_ComTradeID_len, (Py_ssize_t)sizeof(self->data.ComTradeID));
            return -1;
        }
        // memset(self->data.ComTradeID, 0, sizeof(self->data.ComTradeID));
        // memcpy(self->data.ComTradeID, ExchangeCombActionField_ComTradeID, ExchangeCombActionField_ComTradeID_len);        
        strncpy(self->data.ComTradeID, ExchangeCombActionField_ComTradeID, sizeof(self->data.ComTradeID) );
        ExchangeCombActionField_ComTradeID = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExchangeCombActionField_BranchID != NULL ) {
        if(ExchangeCombActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExchangeCombActionField_BranchID, ExchangeCombActionField_BranchID_len);        
        strncpy(self->data.BranchID, ExchangeCombActionField_BranchID, sizeof(self->data.BranchID) );
        ExchangeCombActionField_BranchID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeCombActionField_ExchangeInstID != NULL ) {
        if(ExchangeCombActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeCombActionField_ExchangeInstID, ExchangeCombActionField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeCombActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeCombActionField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeCombActionField_IPAddress != NULL ) {
        if(ExchangeCombActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeCombActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeCombActionField_IPAddress, ExchangeCombActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeCombActionField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeCombActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeCombActionField_dealloc(PyCThostFtdcExchangeCombActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeCombActionField_repr(PyCThostFtdcExchangeCombActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:c,s:i,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"Direction", self->data.Direction 
        ,"Volume", self->data.Volume 
        ,"CombDirection", self->data.CombDirection 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"ActionStatus", self->data.ActionStatus 
        ,"NotifySequence", self->data.NotifySequence 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"SequenceNo", self->data.SequenceNo 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"ComTradeID", self->data.ComTradeID//, (Py_ssize_t)sizeof(self->data.ComTradeID) 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeCombActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcExchangeCombActionField_get_Direction(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcExchangeCombActionField_set_Direction(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcExchangeCombActionField_get_Volume(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeCombActionField_set_Volume(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
        
///组合指令方向
// TThostFtdcCombDirectionType char
static PyObject *PyCThostFtdcExchangeCombActionField_get_CombDirection(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CombDirection), 1);
}

///组合指令方向
// TThostFtdcCombDirectionType char
static int PyCThostFtdcExchangeCombActionField_set_CombDirection(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombDirection)) {
        PyErr_SetString(PyExc_ValueError, "CombDirection must be equal 1 bytes");
        return -1;
    }
    self->data.CombDirection = *buf;
    return 0;
}
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcExchangeCombActionField_get_HedgeFlag(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcExchangeCombActionField_set_HedgeFlag(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
            
///本地申请组合编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeCombActionField_get_ActionLocalID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///本地申请组合编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeCombActionField_set_ActionLocalID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
    // memcpy(self->data.ActionLocalID, buf, len);
    strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeCombActionField_get_ExchangeID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeCombActionField_set_ExchangeID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcExchangeCombActionField_get_ParticipantID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeCombActionField_set_ParticipantID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeCombActionField_get_ClientID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeCombActionField_set_ClientID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcExchangeCombActionField_get_reserve1(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeCombActionField_set_reserve1(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcExchangeCombActionField_get_TraderID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeCombActionField_set_TraderID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcExchangeCombActionField_get_InstallID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeCombActionField_set_InstallID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
        
///组合状态
// TThostFtdcOrderActionStatusType char
static PyObject *PyCThostFtdcExchangeCombActionField_get_ActionStatus(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionStatus), 1);
}

///组合状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcExchangeCombActionField_set_ActionStatus(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "ActionStatus must be equal 1 bytes");
        return -1;
    }
    self->data.ActionStatus = *buf;
    return 0;
}
            
///报单提示序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcExchangeCombActionField_get_NotifySequence(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeCombActionField_set_NotifySequence(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the NotifySequence value out of range for C int");
        return -1;
    }
    self->data.NotifySequence = (int)buf;
    return 0;
}
        
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcExchangeCombActionField_get_TradingDay(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeCombActionField_set_TradingDay(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcExchangeCombActionField_get_SettlementID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcExchangeCombActionField_set_SettlementID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SettlementID value out of range for C int");
        return -1;
    }
    self->data.SettlementID = (int)buf;
    return 0;
}
        
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcExchangeCombActionField_get_SequenceNo(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeCombActionField_set_SequenceNo(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
        
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcExchangeCombActionField_get_reserve2(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeCombActionField_set_reserve2(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcExchangeCombActionField_get_MacAddress(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeCombActionField_set_MacAddress(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            
///组合编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcExchangeCombActionField_get_ComTradeID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ComTradeID, (Py_ssize_t)sizeof(self->data.ComTradeID));
    return PyBytes_FromString(self->data.ComTradeID);
}

///组合编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcExchangeCombActionField_set_ComTradeID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
        PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ComTradeID, 0, sizeof(self->data.ComTradeID));
    // memcpy(self->data.ComTradeID, buf, len);
    strncpy(self->data.ComTradeID, buf, sizeof(self->data.ComTradeID));
    return 0;
}
            
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcExchangeCombActionField_get_BranchID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExchangeCombActionField_set_BranchID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
    // memcpy(self->data.BranchID, buf, len);
    strncpy(self->data.BranchID, buf, sizeof(self->data.BranchID));
    return 0;
}
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcExchangeCombActionField_get_ExchangeInstID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeCombActionField_set_ExchangeInstID(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcExchangeCombActionField_get_IPAddress(PyCThostFtdcExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeCombActionField_set_IPAddress(PyCThostFtdcExchangeCombActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcExchangeCombActionField_getset[] = {
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcExchangeCombActionField_get_Direction, (setter)PyCThostFtdcExchangeCombActionField_set_Direction, (char *)"Direction", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcExchangeCombActionField_get_Volume, (setter)PyCThostFtdcExchangeCombActionField_set_Volume, (char *)"Volume", NULL},
    ///组合指令方向 
    {(char *)"CombDirection", (getter)PyCThostFtdcExchangeCombActionField_get_CombDirection, (setter)PyCThostFtdcExchangeCombActionField_set_CombDirection, (char *)"CombDirection", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeCombActionField_get_HedgeFlag, (setter)PyCThostFtdcExchangeCombActionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///本地申请组合编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeCombActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeCombActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeCombActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeCombActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeCombActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeCombActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeCombActionField_get_ClientID, (setter)PyCThostFtdcExchangeCombActionField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeCombActionField_get_reserve1, (setter)PyCThostFtdcExchangeCombActionField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeCombActionField_get_TraderID, (setter)PyCThostFtdcExchangeCombActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeCombActionField_get_InstallID, (setter)PyCThostFtdcExchangeCombActionField_set_InstallID, (char *)"InstallID", NULL},
    ///组合状态 
    {(char *)"ActionStatus", (getter)PyCThostFtdcExchangeCombActionField_get_ActionStatus, (setter)PyCThostFtdcExchangeCombActionField_set_ActionStatus, (char *)"ActionStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeCombActionField_get_NotifySequence, (setter)PyCThostFtdcExchangeCombActionField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcExchangeCombActionField_get_TradingDay, (setter)PyCThostFtdcExchangeCombActionField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcExchangeCombActionField_get_SettlementID, (setter)PyCThostFtdcExchangeCombActionField_set_SettlementID, (char *)"SettlementID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeCombActionField_get_SequenceNo, (setter)PyCThostFtdcExchangeCombActionField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExchangeCombActionField_get_reserve2, (setter)PyCThostFtdcExchangeCombActionField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeCombActionField_get_MacAddress, (setter)PyCThostFtdcExchangeCombActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///组合编号 
    {(char *)"ComTradeID", (getter)PyCThostFtdcExchangeCombActionField_get_ComTradeID, (setter)PyCThostFtdcExchangeCombActionField_set_ComTradeID, (char *)"ComTradeID", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExchangeCombActionField_get_BranchID, (setter)PyCThostFtdcExchangeCombActionField_set_BranchID, (char *)"BranchID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeCombActionField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeCombActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeCombActionField_get_IPAddress, (setter)PyCThostFtdcExchangeCombActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeCombActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeCombActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeCombActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeCombActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeCombActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeCombActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeCombActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeCombActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeCombActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeCombActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeCombActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeCombActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeCombActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeCombActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeCombActionField", (PyObject *)&PyCThostFtdcExchangeCombActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeCombActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeCombActionFieldType);
		return -1;
    }

    return 0;
}
