
#include "PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField.h"

///风险结算追平RCAMS策略组合规则明细

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self = (PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_init(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdGroup", "RuleId", "Priority", "HedgeFlag", "CombMargin", "ExchangeInstID", "LegID", "LegInstrumentID", "Direction", "LegMultiple", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaRCAMSCombRuleDtlField_TradingDay = NULL;
    Py_ssize_t SyncDeltaRCAMSCombRuleDtlField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRCAMSCombRuleDtlField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRCAMSCombRuleDtlField_ExchangeID_len = 0;
            
    ///策略产品
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSCombRuleDtlField_ProdGroup = NULL;
    Py_ssize_t SyncDeltaRCAMSCombRuleDtlField_ProdGroup_len = 0;
            
    ///策略id
    // TThostFtdcRuleIdType char[51]
    const char *SyncDeltaRCAMSCombRuleDtlField_RuleId = NULL;
    Py_ssize_t SyncDeltaRCAMSCombRuleDtlField_RuleId_len = 0;
            
    ///优先级
    // TThostFtdcRCAMSPriorityType int
    int SyncDeltaRCAMSCombRuleDtlField_Priority = 0;
        
    ///投套标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaRCAMSCombRuleDtlField_HedgeFlag = 0;
            
    ///组合保证金标准
    // TThostFtdcMoneyType double
    double SyncDeltaRCAMSCombRuleDtlField_CombMargin = 0.0;
        
    ///交易所组合合约代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID = NULL;
    Py_ssize_t SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len = 0;
            
    ///单腿编号
    // TThostFtdcLegIDType int
    int SyncDeltaRCAMSCombRuleDtlField_LegID = 0;
        
    ///单腿合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID = NULL;
    Py_ssize_t SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char SyncDeltaRCAMSCombRuleDtlField_Direction = 0;
            
    ///单腿乘数
    // TThostFtdcLegMultipleType int
    int SyncDeltaRCAMSCombRuleDtlField_LegMultiple = 0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRCAMSCombRuleDtlField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icdy#iy#cici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#icds#is#cici", (char **)kwlist
#endif

        , &SyncDeltaRCAMSCombRuleDtlField_TradingDay, &SyncDeltaRCAMSCombRuleDtlField_TradingDay_len 
        , &SyncDeltaRCAMSCombRuleDtlField_ExchangeID, &SyncDeltaRCAMSCombRuleDtlField_ExchangeID_len 
        , &SyncDeltaRCAMSCombRuleDtlField_ProdGroup, &SyncDeltaRCAMSCombRuleDtlField_ProdGroup_len 
        , &SyncDeltaRCAMSCombRuleDtlField_RuleId, &SyncDeltaRCAMSCombRuleDtlField_RuleId_len 
        , &SyncDeltaRCAMSCombRuleDtlField_Priority 
        , &SyncDeltaRCAMSCombRuleDtlField_HedgeFlag 
        , &SyncDeltaRCAMSCombRuleDtlField_CombMargin 
        , &SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID, &SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len 
        , &SyncDeltaRCAMSCombRuleDtlField_LegID 
        , &SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID, &SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len 
        , &SyncDeltaRCAMSCombRuleDtlField_Direction 
        , &SyncDeltaRCAMSCombRuleDtlField_LegMultiple 
        , &SyncDeltaRCAMSCombRuleDtlField_ActionDirection 
        , &SyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaRCAMSCombRuleDtlField_TradingDay != NULL ) {
        if(SyncDeltaRCAMSCombRuleDtlField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombRuleDtlField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaRCAMSCombRuleDtlField_TradingDay, SyncDeltaRCAMSCombRuleDtlField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaRCAMSCombRuleDtlField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaRCAMSCombRuleDtlField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRCAMSCombRuleDtlField_ExchangeID != NULL ) {
        if(SyncDeltaRCAMSCombRuleDtlField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombRuleDtlField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRCAMSCombRuleDtlField_ExchangeID, SyncDeltaRCAMSCombRuleDtlField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRCAMSCombRuleDtlField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRCAMSCombRuleDtlField_ExchangeID = NULL;
    }
            
    ///策略产品
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSCombRuleDtlField_ProdGroup != NULL ) {
        if(SyncDeltaRCAMSCombRuleDtlField_ProdGroup_len > (Py_ssize_t)sizeof(self->data.ProdGroup)) {
            PyErr_Format(PyExc_ValueError, "ProdGroup too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombRuleDtlField_ProdGroup_len, (Py_ssize_t)sizeof(self->data.ProdGroup));
            return -1;
        }
        // memset(self->data.ProdGroup, 0, sizeof(self->data.ProdGroup));
        // memcpy(self->data.ProdGroup, SyncDeltaRCAMSCombRuleDtlField_ProdGroup, SyncDeltaRCAMSCombRuleDtlField_ProdGroup_len);        
        strncpy(self->data.ProdGroup, SyncDeltaRCAMSCombRuleDtlField_ProdGroup, sizeof(self->data.ProdGroup) );
        SyncDeltaRCAMSCombRuleDtlField_ProdGroup = NULL;
    }
            
    ///策略id
    // TThostFtdcRuleIdType char[51]
    if( SyncDeltaRCAMSCombRuleDtlField_RuleId != NULL ) {
        if(SyncDeltaRCAMSCombRuleDtlField_RuleId_len > (Py_ssize_t)sizeof(self->data.RuleId)) {
            PyErr_Format(PyExc_ValueError, "RuleId too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombRuleDtlField_RuleId_len, (Py_ssize_t)sizeof(self->data.RuleId));
            return -1;
        }
        // memset(self->data.RuleId, 0, sizeof(self->data.RuleId));
        // memcpy(self->data.RuleId, SyncDeltaRCAMSCombRuleDtlField_RuleId, SyncDeltaRCAMSCombRuleDtlField_RuleId_len);        
        strncpy(self->data.RuleId, SyncDeltaRCAMSCombRuleDtlField_RuleId, sizeof(self->data.RuleId) );
        SyncDeltaRCAMSCombRuleDtlField_RuleId = NULL;
    }
            
    ///优先级
    // TThostFtdcRCAMSPriorityType int
    self->data.Priority = SyncDeltaRCAMSCombRuleDtlField_Priority;
        
    ///投套标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncDeltaRCAMSCombRuleDtlField_HedgeFlag;
            
    ///组合保证金标准
    // TThostFtdcMoneyType double
    self->data.CombMargin = SyncDeltaRCAMSCombRuleDtlField_CombMargin;
        
    ///交易所组合合约代码
    // TThostFtdcExchangeInstIDType char[81]
    if( SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID != NULL ) {
        if(SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID, SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        SyncDeltaRCAMSCombRuleDtlField_ExchangeInstID = NULL;
    }
            
    ///单腿编号
    // TThostFtdcLegIDType int
    self->data.LegID = SyncDeltaRCAMSCombRuleDtlField_LegID;
        
    ///单腿合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID != NULL ) {
        if(SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
            return -1;
        }
        // memset(self->data.LegInstrumentID, 0, sizeof(self->data.LegInstrumentID));
        // memcpy(self->data.LegInstrumentID, SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID, SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len);        
        strncpy(self->data.LegInstrumentID, SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID, sizeof(self->data.LegInstrumentID) );
        SyncDeltaRCAMSCombRuleDtlField_LegInstrumentID = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = SyncDeltaRCAMSCombRuleDtlField_Direction;
            
    ///单腿乘数
    // TThostFtdcLegMultipleType int
    self->data.LegMultiple = SyncDeltaRCAMSCombRuleDtlField_LegMultiple;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRCAMSCombRuleDtlField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_dealloc(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_repr(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:d,s:y,s:i,s:y,s:c,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c,s:d,s:s,s:i,s:s,s:c,s:i,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProdGroup", self->data.ProdGroup//, (Py_ssize_t)sizeof(self->data.ProdGroup) 
        ,"RuleId", self->data.RuleId//, (Py_ssize_t)sizeof(self->data.RuleId) 
        ,"Priority", self->data.Priority 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"CombMargin", self->data.CombMargin 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"LegID", self->data.LegID 
        ,"LegInstrumentID", self->data.LegInstrumentID//, (Py_ssize_t)sizeof(self->data.LegInstrumentID) 
        ,"Direction", self->data.Direction 
        ,"LegMultiple", self->data.LegMultiple 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSCombRuleDtlField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
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
            
///策略产品
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ProdGroup(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdGroup, (Py_ssize_t)sizeof(self->data.ProdGroup));
    return PyBytes_FromString(self->data.ProdGroup);
}

///策略产品
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ProdGroup(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProdGroup Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProdGroup)) {
        PyErr_SetString(PyExc_ValueError, "ProdGroup must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProdGroup, 0, sizeof(self->data.ProdGroup));
    // memcpy(self->data.ProdGroup, buf, len);
    strncpy(self->data.ProdGroup, buf, sizeof(self->data.ProdGroup));
    return 0;
}
            
///策略id
// TThostFtdcRuleIdType char[51]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_RuleId(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RuleId, (Py_ssize_t)sizeof(self->data.RuleId));
    return PyBytes_FromString(self->data.RuleId);
}

///策略id
// TThostFtdcRuleIdType char[51]
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_RuleId(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RuleId Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.RuleId)) {
        PyErr_SetString(PyExc_ValueError, "RuleId must be less than 51 bytes");
        return -1;
    }
    // memset(self->data.RuleId, 0, sizeof(self->data.RuleId));
    // memcpy(self->data.RuleId, buf, len);
    strncpy(self->data.RuleId, buf, sizeof(self->data.RuleId));
    return 0;
}
            
///优先级
// TThostFtdcRCAMSPriorityType int
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_Priority(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Priority);
#else
    return PyInt_FromLong(self->data.Priority);
#endif
}

///优先级
// TThostFtdcRCAMSPriorityType int
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_Priority(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Priority value out of range for C int");
        return -1;
    }
    self->data.Priority = (int)buf;
    return 0;
}
        
///投套标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投套标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
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
            
///组合保证金标准
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_CombMargin(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CombMargin);
}

///组合保证金标准
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_CombMargin(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CombMargin = buf;
    return 0;
}
        
///交易所组合合约代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ExchangeInstID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///交易所组合合约代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ExchangeInstID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
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
            
///单腿编号
// TThostFtdcLegIDType int
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegID);
#else
    return PyInt_FromLong(self->data.LegID);
#endif
}

///单腿编号
// TThostFtdcLegIDType int
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LegID value out of range for C int");
        return -1;
    }
    self->data.LegID = (int)buf;
    return 0;
}
        
///单腿合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegInstrumentID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LegInstrumentID, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
    return PyBytes_FromString(self->data.LegInstrumentID);
}

///单腿合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegInstrumentID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.LegInstrumentID, 0, sizeof(self->data.LegInstrumentID));
    // memcpy(self->data.LegInstrumentID, buf, len);
    strncpy(self->data.LegInstrumentID, buf, sizeof(self->data.LegInstrumentID));
    return 0;
}
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_Direction(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_Direction(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
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
            
///单腿乘数
// TThostFtdcLegMultipleType int
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegMultiple(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegMultiple);
#else
    return PyInt_FromLong(self->data.LegMultiple);
#endif
}

///单腿乘数
// TThostFtdcLegMultipleType int
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegMultiple(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LegMultiple value out of range for C int");
        return -1;
    }
    self->data.LegMultiple = (int)buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    self->data.ActionDirection = *buf;
    return 0;
}
            
///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SyncDeltaSequenceNo value out of range for C int");
        return -1;
    }
    self->data.SyncDeltaSequenceNo = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///策略产品 
    {(char *)"ProdGroup", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ProdGroup, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ProdGroup, (char *)"ProdGroup", NULL},
    ///策略id 
    {(char *)"RuleId", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_RuleId, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_RuleId, (char *)"RuleId", NULL},
    ///优先级 
    {(char *)"Priority", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_Priority, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_Priority, (char *)"Priority", NULL},
    ///投套标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///组合保证金标准 
    {(char *)"CombMargin", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_CombMargin, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_CombMargin, (char *)"CombMargin", NULL},
    ///交易所组合合约代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ExchangeInstID, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///单腿编号 
    {(char *)"LegID", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegID, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegID, (char *)"LegID", NULL},
    ///单腿合约代码 
    {(char *)"LegInstrumentID", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegInstrumentID, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegInstrumentID, (char *)"LegInstrumentID", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_Direction, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_Direction, (char *)"Direction", NULL},
    ///单腿乘数 
    {(char *)"LegMultiple", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegMultiple, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegMultiple, (char *)"LegMultiple", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSCombRuleDtlField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSCombRuleDtlField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSCombRuleDtlField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSCombRuleDtlField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSCombRuleDtlField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSCombRuleDtlField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType);
		return -1;
    }

    return 0;
}
