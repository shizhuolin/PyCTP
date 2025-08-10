
#include "PyCThostFtdcBulletinField.h"

///交易所公告

static PyObject *PyCThostFtdcBulletinField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBulletinField *self = (PyCThostFtdcBulletinField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBulletinField_init(PyCThostFtdcBulletinField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TradingDay", "BulletinID", "SequenceNo", "NewsType", "NewsUrgency", "SendTime", "Abstract", "ComeFrom", "Content", "URLLink", "MarketID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *BulletinField_ExchangeID = NULL;
    Py_ssize_t BulletinField_ExchangeID_len = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *BulletinField_TradingDay = NULL;
    Py_ssize_t BulletinField_TradingDay_len = 0;
            
    ///公告编号
    // TThostFtdcBulletinIDType int
    int BulletinField_BulletinID = 0;
        
    ///序列号
    // TThostFtdcSequenceNoType int
    int BulletinField_SequenceNo = 0;
        
    ///公告类型
    // TThostFtdcNewsTypeType char[3]
    const char *BulletinField_NewsType = NULL;
    Py_ssize_t BulletinField_NewsType_len = 0;
            
    ///紧急程度
    // TThostFtdcNewsUrgencyType char
    char BulletinField_NewsUrgency = 0;
            
    ///发送时间
    // TThostFtdcTimeType char[9]
    const char *BulletinField_SendTime = NULL;
    Py_ssize_t BulletinField_SendTime_len = 0;
            
    ///消息摘要
    // TThostFtdcAbstractType char[81]
    const char *BulletinField_Abstract = NULL;
    Py_ssize_t BulletinField_Abstract_len = 0;
            
    ///消息来源
    // TThostFtdcComeFromType char[21]
    const char *BulletinField_ComeFrom = NULL;
    Py_ssize_t BulletinField_ComeFrom_len = 0;
            
    ///消息正文
    // TThostFtdcContentType char[501]
    const char *BulletinField_Content = NULL;
    Py_ssize_t BulletinField_Content_len = 0;
            
    ///WEB地址
    // TThostFtdcURLLinkType char[201]
    const char *BulletinField_URLLink = NULL;
    Py_ssize_t BulletinField_URLLink_len = 0;
            
    ///市场代码
    // TThostFtdcMarketIDType char[31]
    const char *BulletinField_MarketID = NULL;
    Py_ssize_t BulletinField_MarketID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiy#cy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#iis#cs#s#s#s#s#s#", (char **)kwlist
#endif

        , &BulletinField_ExchangeID, &BulletinField_ExchangeID_len 
        , &BulletinField_TradingDay, &BulletinField_TradingDay_len 
        , &BulletinField_BulletinID 
        , &BulletinField_SequenceNo 
        , &BulletinField_NewsType, &BulletinField_NewsType_len 
        , &BulletinField_NewsUrgency 
        , &BulletinField_SendTime, &BulletinField_SendTime_len 
        , &BulletinField_Abstract, &BulletinField_Abstract_len 
        , &BulletinField_ComeFrom, &BulletinField_ComeFrom_len 
        , &BulletinField_Content, &BulletinField_Content_len 
        , &BulletinField_URLLink, &BulletinField_URLLink_len 
        , &BulletinField_MarketID, &BulletinField_MarketID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( BulletinField_ExchangeID != NULL ) {
        if(BulletinField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", BulletinField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, BulletinField_ExchangeID, BulletinField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, BulletinField_ExchangeID, sizeof(self->data.ExchangeID) );
        BulletinField_ExchangeID = NULL;
    }
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( BulletinField_TradingDay != NULL ) {
        if(BulletinField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", BulletinField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, BulletinField_TradingDay, BulletinField_TradingDay_len);        
        strncpy(self->data.TradingDay, BulletinField_TradingDay, sizeof(self->data.TradingDay) );
        BulletinField_TradingDay = NULL;
    }
            
    ///公告编号
    // TThostFtdcBulletinIDType int
    self->data.BulletinID = BulletinField_BulletinID;
        
    ///序列号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = BulletinField_SequenceNo;
        
    ///公告类型
    // TThostFtdcNewsTypeType char[3]
    if( BulletinField_NewsType != NULL ) {
        if(BulletinField_NewsType_len > (Py_ssize_t)sizeof(self->data.NewsType)) {
            PyErr_Format(PyExc_ValueError, "NewsType too long: length=%zd (max allowed is %zd)", BulletinField_NewsType_len, (Py_ssize_t)sizeof(self->data.NewsType));
            return -1;
        }
        // memset(self->data.NewsType, 0, sizeof(self->data.NewsType));
        // memcpy(self->data.NewsType, BulletinField_NewsType, BulletinField_NewsType_len);        
        strncpy(self->data.NewsType, BulletinField_NewsType, sizeof(self->data.NewsType) );
        BulletinField_NewsType = NULL;
    }
            
    ///紧急程度
    // TThostFtdcNewsUrgencyType char
    self->data.NewsUrgency = BulletinField_NewsUrgency;
            
    ///发送时间
    // TThostFtdcTimeType char[9]
    if( BulletinField_SendTime != NULL ) {
        if(BulletinField_SendTime_len > (Py_ssize_t)sizeof(self->data.SendTime)) {
            PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is %zd)", BulletinField_SendTime_len, (Py_ssize_t)sizeof(self->data.SendTime));
            return -1;
        }
        // memset(self->data.SendTime, 0, sizeof(self->data.SendTime));
        // memcpy(self->data.SendTime, BulletinField_SendTime, BulletinField_SendTime_len);        
        strncpy(self->data.SendTime, BulletinField_SendTime, sizeof(self->data.SendTime) );
        BulletinField_SendTime = NULL;
    }
            
    ///消息摘要
    // TThostFtdcAbstractType char[81]
    if( BulletinField_Abstract != NULL ) {
        if(BulletinField_Abstract_len > (Py_ssize_t)sizeof(self->data.Abstract)) {
            PyErr_Format(PyExc_ValueError, "Abstract too long: length=%zd (max allowed is %zd)", BulletinField_Abstract_len, (Py_ssize_t)sizeof(self->data.Abstract));
            return -1;
        }
        // memset(self->data.Abstract, 0, sizeof(self->data.Abstract));
        // memcpy(self->data.Abstract, BulletinField_Abstract, BulletinField_Abstract_len);        
        strncpy(self->data.Abstract, BulletinField_Abstract, sizeof(self->data.Abstract) );
        BulletinField_Abstract = NULL;
    }
            
    ///消息来源
    // TThostFtdcComeFromType char[21]
    if( BulletinField_ComeFrom != NULL ) {
        if(BulletinField_ComeFrom_len > (Py_ssize_t)sizeof(self->data.ComeFrom)) {
            PyErr_Format(PyExc_ValueError, "ComeFrom too long: length=%zd (max allowed is %zd)", BulletinField_ComeFrom_len, (Py_ssize_t)sizeof(self->data.ComeFrom));
            return -1;
        }
        // memset(self->data.ComeFrom, 0, sizeof(self->data.ComeFrom));
        // memcpy(self->data.ComeFrom, BulletinField_ComeFrom, BulletinField_ComeFrom_len);        
        strncpy(self->data.ComeFrom, BulletinField_ComeFrom, sizeof(self->data.ComeFrom) );
        BulletinField_ComeFrom = NULL;
    }
            
    ///消息正文
    // TThostFtdcContentType char[501]
    if( BulletinField_Content != NULL ) {
        if(BulletinField_Content_len > (Py_ssize_t)sizeof(self->data.Content)) {
            PyErr_Format(PyExc_ValueError, "Content too long: length=%zd (max allowed is %zd)", BulletinField_Content_len, (Py_ssize_t)sizeof(self->data.Content));
            return -1;
        }
        // memset(self->data.Content, 0, sizeof(self->data.Content));
        // memcpy(self->data.Content, BulletinField_Content, BulletinField_Content_len);        
        strncpy(self->data.Content, BulletinField_Content, sizeof(self->data.Content) );
        BulletinField_Content = NULL;
    }
            
    ///WEB地址
    // TThostFtdcURLLinkType char[201]
    if( BulletinField_URLLink != NULL ) {
        if(BulletinField_URLLink_len > (Py_ssize_t)sizeof(self->data.URLLink)) {
            PyErr_Format(PyExc_ValueError, "URLLink too long: length=%zd (max allowed is %zd)", BulletinField_URLLink_len, (Py_ssize_t)sizeof(self->data.URLLink));
            return -1;
        }
        // memset(self->data.URLLink, 0, sizeof(self->data.URLLink));
        // memcpy(self->data.URLLink, BulletinField_URLLink, BulletinField_URLLink_len);        
        strncpy(self->data.URLLink, BulletinField_URLLink, sizeof(self->data.URLLink) );
        BulletinField_URLLink = NULL;
    }
            
    ///市场代码
    // TThostFtdcMarketIDType char[31]
    if( BulletinField_MarketID != NULL ) {
        if(BulletinField_MarketID_len > (Py_ssize_t)sizeof(self->data.MarketID)) {
            PyErr_Format(PyExc_ValueError, "MarketID too long: length=%zd (max allowed is %zd)", BulletinField_MarketID_len, (Py_ssize_t)sizeof(self->data.MarketID));
            return -1;
        }
        // memset(self->data.MarketID, 0, sizeof(self->data.MarketID));
        // memcpy(self->data.MarketID, BulletinField_MarketID, BulletinField_MarketID_len);        
        strncpy(self->data.MarketID, BulletinField_MarketID, sizeof(self->data.MarketID) );
        BulletinField_MarketID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcBulletinField_dealloc(PyCThostFtdcBulletinField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBulletinField_repr(PyCThostFtdcBulletinField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"BulletinID", self->data.BulletinID 
        ,"SequenceNo", self->data.SequenceNo 
        ,"NewsType", self->data.NewsType//, (Py_ssize_t)sizeof(self->data.NewsType) 
        ,"NewsUrgency", self->data.NewsUrgency 
        ,"SendTime", self->data.SendTime//, (Py_ssize_t)sizeof(self->data.SendTime) 
        ,"Abstract", self->data.Abstract//, (Py_ssize_t)sizeof(self->data.Abstract) 
        ,"ComeFrom", self->data.ComeFrom//, (Py_ssize_t)sizeof(self->data.ComeFrom) 
        ,"Content", self->data.Content//, (Py_ssize_t)sizeof(self->data.Content) 
        ,"URLLink", self->data.URLLink//, (Py_ssize_t)sizeof(self->data.URLLink) 
        ,"MarketID", self->data.MarketID//, (Py_ssize_t)sizeof(self->data.MarketID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBulletinField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcBulletinField_get_ExchangeID(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcBulletinField_set_ExchangeID(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
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
            
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcBulletinField_get_TradingDay(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcBulletinField_set_TradingDay(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
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
            
///公告编号
// TThostFtdcBulletinIDType int
static PyObject *PyCThostFtdcBulletinField_get_BulletinID(PyCThostFtdcBulletinField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BulletinID);
#else
    return PyInt_FromLong(self->data.BulletinID);
#endif
}

///公告编号
// TThostFtdcBulletinIDType int
static int PyCThostFtdcBulletinField_set_BulletinID(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BulletinID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BulletinID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BulletinID value out of range for C int");
        return -1;
    }
    self->data.BulletinID = (int)buf;
    return 0;
}
        
///序列号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcBulletinField_get_SequenceNo(PyCThostFtdcBulletinField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序列号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcBulletinField_set_SequenceNo(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
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
        
///公告类型
// TThostFtdcNewsTypeType char[3]
static PyObject *PyCThostFtdcBulletinField_get_NewsType(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NewsType, (Py_ssize_t)sizeof(self->data.NewsType));
    return PyBytes_FromString(self->data.NewsType);
}

///公告类型
// TThostFtdcNewsTypeType char[3]
static int PyCThostFtdcBulletinField_set_NewsType(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NewsType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NewsType)) {
        PyErr_SetString(PyExc_ValueError, "NewsType must be less than 3 bytes");
        return -1;
    }
    // memset(self->data.NewsType, 0, sizeof(self->data.NewsType));
    // memcpy(self->data.NewsType, buf, len);
    strncpy(self->data.NewsType, buf, sizeof(self->data.NewsType));
    return 0;
}
            
///紧急程度
// TThostFtdcNewsUrgencyType char
static PyObject *PyCThostFtdcBulletinField_get_NewsUrgency(PyCThostFtdcBulletinField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.NewsUrgency), 1);
}

///紧急程度
// TThostFtdcNewsUrgencyType char
static int PyCThostFtdcBulletinField_set_NewsUrgency(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NewsUrgency Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NewsUrgency)) {
        PyErr_SetString(PyExc_ValueError, "NewsUrgency must be equal 1 bytes");
        return -1;
    }
    self->data.NewsUrgency = *buf;
    return 0;
}
            
///发送时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcBulletinField_get_SendTime(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SendTime, (Py_ssize_t)sizeof(self->data.SendTime));
    return PyBytes_FromString(self->data.SendTime);
}

///发送时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcBulletinField_set_SendTime(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
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
            
///消息摘要
// TThostFtdcAbstractType char[81]
static PyObject *PyCThostFtdcBulletinField_get_Abstract(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Abstract, (Py_ssize_t)sizeof(self->data.Abstract));
    return PyBytes_FromString(self->data.Abstract);
}

///消息摘要
// TThostFtdcAbstractType char[81]
static int PyCThostFtdcBulletinField_set_Abstract(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Abstract Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Abstract)) {
        PyErr_SetString(PyExc_ValueError, "Abstract must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.Abstract, 0, sizeof(self->data.Abstract));
    // memcpy(self->data.Abstract, buf, len);
    strncpy(self->data.Abstract, buf, sizeof(self->data.Abstract));
    return 0;
}
            
///消息来源
// TThostFtdcComeFromType char[21]
static PyObject *PyCThostFtdcBulletinField_get_ComeFrom(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ComeFrom, (Py_ssize_t)sizeof(self->data.ComeFrom));
    return PyBytes_FromString(self->data.ComeFrom);
}

///消息来源
// TThostFtdcComeFromType char[21]
static int PyCThostFtdcBulletinField_set_ComeFrom(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ComeFrom Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ComeFrom)) {
        PyErr_SetString(PyExc_ValueError, "ComeFrom must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ComeFrom, 0, sizeof(self->data.ComeFrom));
    // memcpy(self->data.ComeFrom, buf, len);
    strncpy(self->data.ComeFrom, buf, sizeof(self->data.ComeFrom));
    return 0;
}
            
///消息正文
// TThostFtdcContentType char[501]
static PyObject *PyCThostFtdcBulletinField_get_Content(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Content, (Py_ssize_t)sizeof(self->data.Content));
    return PyBytes_FromString(self->data.Content);
}

///消息正文
// TThostFtdcContentType char[501]
static int PyCThostFtdcBulletinField_set_Content(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Content Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Content)) {
        PyErr_SetString(PyExc_ValueError, "Content must be less than 501 bytes");
        return -1;
    }
    // memset(self->data.Content, 0, sizeof(self->data.Content));
    // memcpy(self->data.Content, buf, len);
    strncpy(self->data.Content, buf, sizeof(self->data.Content));
    return 0;
}
            
///WEB地址
// TThostFtdcURLLinkType char[201]
static PyObject *PyCThostFtdcBulletinField_get_URLLink(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.URLLink, (Py_ssize_t)sizeof(self->data.URLLink));
    return PyBytes_FromString(self->data.URLLink);
}

///WEB地址
// TThostFtdcURLLinkType char[201]
static int PyCThostFtdcBulletinField_set_URLLink(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "URLLink Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.URLLink)) {
        PyErr_SetString(PyExc_ValueError, "URLLink must be less than 201 bytes");
        return -1;
    }
    // memset(self->data.URLLink, 0, sizeof(self->data.URLLink));
    // memcpy(self->data.URLLink, buf, len);
    strncpy(self->data.URLLink, buf, sizeof(self->data.URLLink));
    return 0;
}
            
///市场代码
// TThostFtdcMarketIDType char[31]
static PyObject *PyCThostFtdcBulletinField_get_MarketID(PyCThostFtdcBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MarketID, (Py_ssize_t)sizeof(self->data.MarketID));
    return PyBytes_FromString(self->data.MarketID);
}

///市场代码
// TThostFtdcMarketIDType char[31]
static int PyCThostFtdcBulletinField_set_MarketID(PyCThostFtdcBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarketID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MarketID)) {
        PyErr_SetString(PyExc_ValueError, "MarketID must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.MarketID, 0, sizeof(self->data.MarketID));
    // memcpy(self->data.MarketID, buf, len);
    strncpy(self->data.MarketID, buf, sizeof(self->data.MarketID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcBulletinField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcBulletinField_get_ExchangeID, (setter)PyCThostFtdcBulletinField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcBulletinField_get_TradingDay, (setter)PyCThostFtdcBulletinField_set_TradingDay, (char *)"TradingDay", NULL},
    ///公告编号 
    {(char *)"BulletinID", (getter)PyCThostFtdcBulletinField_get_BulletinID, (setter)PyCThostFtdcBulletinField_set_BulletinID, (char *)"BulletinID", NULL},
    ///序列号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcBulletinField_get_SequenceNo, (setter)PyCThostFtdcBulletinField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///公告类型 
    {(char *)"NewsType", (getter)PyCThostFtdcBulletinField_get_NewsType, (setter)PyCThostFtdcBulletinField_set_NewsType, (char *)"NewsType", NULL},
    ///紧急程度 
    {(char *)"NewsUrgency", (getter)PyCThostFtdcBulletinField_get_NewsUrgency, (setter)PyCThostFtdcBulletinField_set_NewsUrgency, (char *)"NewsUrgency", NULL},
    ///发送时间 
    {(char *)"SendTime", (getter)PyCThostFtdcBulletinField_get_SendTime, (setter)PyCThostFtdcBulletinField_set_SendTime, (char *)"SendTime", NULL},
    ///消息摘要 
    {(char *)"Abstract", (getter)PyCThostFtdcBulletinField_get_Abstract, (setter)PyCThostFtdcBulletinField_set_Abstract, (char *)"Abstract", NULL},
    ///消息来源 
    {(char *)"ComeFrom", (getter)PyCThostFtdcBulletinField_get_ComeFrom, (setter)PyCThostFtdcBulletinField_set_ComeFrom, (char *)"ComeFrom", NULL},
    ///消息正文 
    {(char *)"Content", (getter)PyCThostFtdcBulletinField_get_Content, (setter)PyCThostFtdcBulletinField_set_Content, (char *)"Content", NULL},
    ///WEB地址 
    {(char *)"URLLink", (getter)PyCThostFtdcBulletinField_get_URLLink, (setter)PyCThostFtdcBulletinField_set_URLLink, (char *)"URLLink", NULL},
    ///市场代码 
    {(char *)"MarketID", (getter)PyCThostFtdcBulletinField_get_MarketID, (setter)PyCThostFtdcBulletinField_set_MarketID, (char *)"MarketID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBulletinFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBulletinField",	/* tp_name */
	sizeof(PyCThostFtdcBulletinField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBulletinField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBulletinField_repr,   /* tp_repr */
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
	"CThostFtdcBulletinField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBulletinField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBulletinField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBulletinField_new,       /* tp_new */
};

int PyCThostFtdcBulletinFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBulletinField  */
	if (PyType_Ready(&PyCThostFtdcBulletinFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBulletinField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBulletinFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBulletinField", (PyObject *)&PyCThostFtdcBulletinFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBulletinField to module");
        Py_DECREF(&PyCThostFtdcBulletinFieldType);
		return -1;
    }

    return 0;
}
