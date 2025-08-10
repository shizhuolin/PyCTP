
#include "PyCThostFtdcTradingNoticeField.h"

///用户事件通知

static PyObject *PyCThostFtdcTradingNoticeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingNoticeField *self = (PyCThostFtdcTradingNoticeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingNoticeField_init(PyCThostFtdcTradingNoticeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorRange", "InvestorID", "SequenceSeries", "UserID", "SendTime", "SequenceNo", "FieldContent", "InvestUnitID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingNoticeField_BrokerID = NULL;
    Py_ssize_t TradingNoticeField_BrokerID_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char TradingNoticeField_InvestorRange = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *TradingNoticeField_InvestorID = NULL;
    Py_ssize_t TradingNoticeField_InvestorID_len = 0;
            
    ///序列系列号
    // TThostFtdcSequenceSeriesType short
    short TradingNoticeField_SequenceSeries = 0;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *TradingNoticeField_UserID = NULL;
    Py_ssize_t TradingNoticeField_UserID_len = 0;
            
    ///发送时间
    // TThostFtdcTimeType char[9]
    const char *TradingNoticeField_SendTime = NULL;
    Py_ssize_t TradingNoticeField_SendTime_len = 0;
            
    ///序列号
    // TThostFtdcSequenceNoType int
    int TradingNoticeField_SequenceNo = 0;
        
    ///消息正文
    // TThostFtdcContentType char[501]
    const char *TradingNoticeField_FieldContent = NULL;
    Py_ssize_t TradingNoticeField_FieldContent_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *TradingNoticeField_InvestUnitID = NULL;
    Py_ssize_t TradingNoticeField_InvestUnitID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#hy#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#hs#s#is#s#", (char **)kwlist
#endif

        , &TradingNoticeField_BrokerID, &TradingNoticeField_BrokerID_len 
        , &TradingNoticeField_InvestorRange 
        , &TradingNoticeField_InvestorID, &TradingNoticeField_InvestorID_len 
        , &TradingNoticeField_SequenceSeries 
        , &TradingNoticeField_UserID, &TradingNoticeField_UserID_len 
        , &TradingNoticeField_SendTime, &TradingNoticeField_SendTime_len 
        , &TradingNoticeField_SequenceNo 
        , &TradingNoticeField_FieldContent, &TradingNoticeField_FieldContent_len 
        , &TradingNoticeField_InvestUnitID, &TradingNoticeField_InvestUnitID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingNoticeField_BrokerID != NULL ) {
        if(TradingNoticeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingNoticeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingNoticeField_BrokerID, TradingNoticeField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingNoticeField_BrokerID, sizeof(self->data.BrokerID) );
        TradingNoticeField_BrokerID = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = TradingNoticeField_InvestorRange;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( TradingNoticeField_InvestorID != NULL ) {
        if(TradingNoticeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", TradingNoticeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, TradingNoticeField_InvestorID, TradingNoticeField_InvestorID_len);        
        strncpy(self->data.InvestorID, TradingNoticeField_InvestorID, sizeof(self->data.InvestorID) );
        TradingNoticeField_InvestorID = NULL;
    }
            
    ///序列系列号
    // TThostFtdcSequenceSeriesType short
    self->data.SequenceSeries = TradingNoticeField_SequenceSeries;
        
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( TradingNoticeField_UserID != NULL ) {
        if(TradingNoticeField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", TradingNoticeField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, TradingNoticeField_UserID, TradingNoticeField_UserID_len);        
        strncpy(self->data.UserID, TradingNoticeField_UserID, sizeof(self->data.UserID) );
        TradingNoticeField_UserID = NULL;
    }
            
    ///发送时间
    // TThostFtdcTimeType char[9]
    if( TradingNoticeField_SendTime != NULL ) {
        if(TradingNoticeField_SendTime_len > (Py_ssize_t)sizeof(self->data.SendTime)) {
            PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is %zd)", TradingNoticeField_SendTime_len, (Py_ssize_t)sizeof(self->data.SendTime));
            return -1;
        }
        // memset(self->data.SendTime, 0, sizeof(self->data.SendTime));
        // memcpy(self->data.SendTime, TradingNoticeField_SendTime, TradingNoticeField_SendTime_len);        
        strncpy(self->data.SendTime, TradingNoticeField_SendTime, sizeof(self->data.SendTime) );
        TradingNoticeField_SendTime = NULL;
    }
            
    ///序列号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = TradingNoticeField_SequenceNo;
        
    ///消息正文
    // TThostFtdcContentType char[501]
    if( TradingNoticeField_FieldContent != NULL ) {
        if(TradingNoticeField_FieldContent_len > (Py_ssize_t)sizeof(self->data.FieldContent)) {
            PyErr_Format(PyExc_ValueError, "FieldContent too long: length=%zd (max allowed is %zd)", TradingNoticeField_FieldContent_len, (Py_ssize_t)sizeof(self->data.FieldContent));
            return -1;
        }
        // memset(self->data.FieldContent, 0, sizeof(self->data.FieldContent));
        // memcpy(self->data.FieldContent, TradingNoticeField_FieldContent, TradingNoticeField_FieldContent_len);        
        strncpy(self->data.FieldContent, TradingNoticeField_FieldContent, sizeof(self->data.FieldContent) );
        TradingNoticeField_FieldContent = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( TradingNoticeField_InvestUnitID != NULL ) {
        if(TradingNoticeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", TradingNoticeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, TradingNoticeField_InvestUnitID, TradingNoticeField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, TradingNoticeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        TradingNoticeField_InvestUnitID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradingNoticeField_dealloc(PyCThostFtdcTradingNoticeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingNoticeField_repr(PyCThostFtdcTradingNoticeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:h,s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:h,s:s,s:s,s:i,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"SequenceSeries", self->data.SequenceSeries 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"SendTime", self->data.SendTime//, (Py_ssize_t)sizeof(self->data.SendTime) 
        ,"SequenceNo", self->data.SequenceNo 
        ,"FieldContent", self->data.FieldContent//, (Py_ssize_t)sizeof(self->data.FieldContent) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingNoticeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradingNoticeField_get_BrokerID(PyCThostFtdcTradingNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingNoticeField_set_BrokerID(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
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
            
///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcTradingNoticeField_get_InvestorRange(PyCThostFtdcTradingNoticeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcTradingNoticeField_set_InvestorRange(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    self->data.InvestorRange = *buf;
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcTradingNoticeField_get_InvestorID(PyCThostFtdcTradingNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcTradingNoticeField_set_InvestorID(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
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
            
///序列系列号
// TThostFtdcSequenceSeriesType short
static PyObject *PyCThostFtdcTradingNoticeField_get_SequenceSeries(PyCThostFtdcTradingNoticeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceSeries);
#else
    return PyInt_FromLong(self->data.SequenceSeries);
#endif
}

///序列系列号
// TThostFtdcSequenceSeriesType short
static int PyCThostFtdcTradingNoticeField_set_SequenceSeries(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceSeries Expected short");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceSeries Expected short");
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
    if (buf < SHRT_MIN || buf > SHRT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the SequenceSeries value out of range for C short");
        return -1;
    }
    self->data.SequenceSeries = (short)buf;
    return 0;
}
        
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcTradingNoticeField_get_UserID(PyCThostFtdcTradingNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcTradingNoticeField_set_UserID(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
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
            
///发送时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcTradingNoticeField_get_SendTime(PyCThostFtdcTradingNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SendTime, (Py_ssize_t)sizeof(self->data.SendTime));
    return PyBytes_FromString(self->data.SendTime);
}

///发送时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcTradingNoticeField_set_SendTime(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SendTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SendTime)) {
        PyErr_SetString(PyExc_ValueError, "SendTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.SendTime, 0, sizeof(self->data.SendTime));
    // memcpy(self->data.SendTime, buf, len);
    strncpy(self->data.SendTime, buf, sizeof(self->data.SendTime));
    return 0;
}
            
///序列号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcTradingNoticeField_get_SequenceNo(PyCThostFtdcTradingNoticeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序列号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcTradingNoticeField_set_SequenceNo(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
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
        
///消息正文
// TThostFtdcContentType char[501]
static PyObject *PyCThostFtdcTradingNoticeField_get_FieldContent(PyCThostFtdcTradingNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FieldContent, (Py_ssize_t)sizeof(self->data.FieldContent));
    return PyBytes_FromString(self->data.FieldContent);
}

///消息正文
// TThostFtdcContentType char[501]
static int PyCThostFtdcTradingNoticeField_set_FieldContent(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FieldContent Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FieldContent)) {
        PyErr_SetString(PyExc_ValueError, "FieldContent must be less than 501 bytes");
        return -1;
    }
    // memset(self->data.FieldContent, 0, sizeof(self->data.FieldContent));
    // memcpy(self->data.FieldContent, buf, len);
    strncpy(self->data.FieldContent, buf, sizeof(self->data.FieldContent));
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcTradingNoticeField_get_InvestUnitID(PyCThostFtdcTradingNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcTradingNoticeField_set_InvestUnitID(PyCThostFtdcTradingNoticeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTradingNoticeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingNoticeField_get_BrokerID, (setter)PyCThostFtdcTradingNoticeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcTradingNoticeField_get_InvestorRange, (setter)PyCThostFtdcTradingNoticeField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcTradingNoticeField_get_InvestorID, (setter)PyCThostFtdcTradingNoticeField_set_InvestorID, (char *)"InvestorID", NULL},
    ///序列系列号 
    {(char *)"SequenceSeries", (getter)PyCThostFtdcTradingNoticeField_get_SequenceSeries, (setter)PyCThostFtdcTradingNoticeField_set_SequenceSeries, (char *)"SequenceSeries", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcTradingNoticeField_get_UserID, (setter)PyCThostFtdcTradingNoticeField_set_UserID, (char *)"UserID", NULL},
    ///发送时间 
    {(char *)"SendTime", (getter)PyCThostFtdcTradingNoticeField_get_SendTime, (setter)PyCThostFtdcTradingNoticeField_set_SendTime, (char *)"SendTime", NULL},
    ///序列号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcTradingNoticeField_get_SequenceNo, (setter)PyCThostFtdcTradingNoticeField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///消息正文 
    {(char *)"FieldContent", (getter)PyCThostFtdcTradingNoticeField_get_FieldContent, (setter)PyCThostFtdcTradingNoticeField_set_FieldContent, (char *)"FieldContent", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcTradingNoticeField_get_InvestUnitID, (setter)PyCThostFtdcTradingNoticeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingNoticeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingNoticeField",	/* tp_name */
	sizeof(PyCThostFtdcTradingNoticeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingNoticeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingNoticeField_repr,   /* tp_repr */
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
	"CThostFtdcTradingNoticeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingNoticeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingNoticeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingNoticeField_new,       /* tp_new */
};

int PyCThostFtdcTradingNoticeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingNoticeField  */
	if (PyType_Ready(&PyCThostFtdcTradingNoticeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingNoticeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingNoticeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingNoticeField", (PyObject *)&PyCThostFtdcTradingNoticeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingNoticeField to module");
        Py_DECREF(&PyCThostFtdcTradingNoticeFieldType);
		return -1;
    }

    return 0;
}
