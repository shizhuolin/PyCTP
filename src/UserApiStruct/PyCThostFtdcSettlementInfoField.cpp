
#include "PyCThostFtdcSettlementInfoField.h"

///投资者结算结果

static PyObject *PyCThostFtdcSettlementInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSettlementInfoField *self = (PyCThostFtdcSettlementInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSettlementInfoField_init(PyCThostFtdcSettlementInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "SettlementID", "BrokerID", "InvestorID", "SequenceNo", "Content", "AccountID", "CurrencyID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SettlementInfoField_TradingDay = NULL;
    Py_ssize_t SettlementInfoField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SettlementInfoField_SettlementID = 0;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SettlementInfoField_BrokerID = NULL;
    Py_ssize_t SettlementInfoField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SettlementInfoField_InvestorID = NULL;
    Py_ssize_t SettlementInfoField_InvestorID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int SettlementInfoField_SequenceNo = 0;
        
    ///消息正文
    // TThostFtdcContentType char[501]
    const char *SettlementInfoField_Content = NULL;
    Py_ssize_t SettlementInfoField_Content_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *SettlementInfoField_AccountID = NULL;
    Py_ssize_t SettlementInfoField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *SettlementInfoField_CurrencyID = NULL;
    Py_ssize_t SettlementInfoField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#s#is#s#s#", (char **)kwlist
#endif

        , &SettlementInfoField_TradingDay, &SettlementInfoField_TradingDay_len 
        , &SettlementInfoField_SettlementID 
        , &SettlementInfoField_BrokerID, &SettlementInfoField_BrokerID_len 
        , &SettlementInfoField_InvestorID, &SettlementInfoField_InvestorID_len 
        , &SettlementInfoField_SequenceNo 
        , &SettlementInfoField_Content, &SettlementInfoField_Content_len 
        , &SettlementInfoField_AccountID, &SettlementInfoField_AccountID_len 
        , &SettlementInfoField_CurrencyID, &SettlementInfoField_CurrencyID_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SettlementInfoField_TradingDay != NULL ) {
        if(SettlementInfoField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SettlementInfoField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SettlementInfoField_TradingDay, SettlementInfoField_TradingDay_len);        
        strncpy(self->data.TradingDay, SettlementInfoField_TradingDay, sizeof(self->data.TradingDay) );
        SettlementInfoField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SettlementInfoField_SettlementID;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SettlementInfoField_BrokerID != NULL ) {
        if(SettlementInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SettlementInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SettlementInfoField_BrokerID, SettlementInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, SettlementInfoField_BrokerID, sizeof(self->data.BrokerID) );
        SettlementInfoField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SettlementInfoField_InvestorID != NULL ) {
        if(SettlementInfoField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SettlementInfoField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SettlementInfoField_InvestorID, SettlementInfoField_InvestorID_len);        
        strncpy(self->data.InvestorID, SettlementInfoField_InvestorID, sizeof(self->data.InvestorID) );
        SettlementInfoField_InvestorID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = SettlementInfoField_SequenceNo;
        
    ///消息正文
    // TThostFtdcContentType char[501]
    if( SettlementInfoField_Content != NULL ) {
        if(SettlementInfoField_Content_len > (Py_ssize_t)sizeof(self->data.Content)) {
            PyErr_Format(PyExc_ValueError, "Content too long: length=%zd (max allowed is %zd)", SettlementInfoField_Content_len, (Py_ssize_t)sizeof(self->data.Content));
            return -1;
        }
        // memset(self->data.Content, 0, sizeof(self->data.Content));
        // memcpy(self->data.Content, SettlementInfoField_Content, SettlementInfoField_Content_len);        
        strncpy(self->data.Content, SettlementInfoField_Content, sizeof(self->data.Content) );
        SettlementInfoField_Content = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( SettlementInfoField_AccountID != NULL ) {
        if(SettlementInfoField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", SettlementInfoField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, SettlementInfoField_AccountID, SettlementInfoField_AccountID_len);        
        strncpy(self->data.AccountID, SettlementInfoField_AccountID, sizeof(self->data.AccountID) );
        SettlementInfoField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( SettlementInfoField_CurrencyID != NULL ) {
        if(SettlementInfoField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", SettlementInfoField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, SettlementInfoField_CurrencyID, SettlementInfoField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, SettlementInfoField_CurrencyID, sizeof(self->data.CurrencyID) );
        SettlementInfoField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSettlementInfoField_dealloc(PyCThostFtdcSettlementInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSettlementInfoField_repr(PyCThostFtdcSettlementInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s,s:s,s:i,s:s,s:s,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"SequenceNo", self->data.SequenceNo 
        ,"Content", self->data.Content//, (Py_ssize_t)sizeof(self->data.Content) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSettlementInfoField_get_TradingDay(PyCThostFtdcSettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSettlementInfoField_set_TradingDay(PyCThostFtdcSettlementInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSettlementInfoField_get_SettlementID(PyCThostFtdcSettlementInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSettlementInfoField_set_SettlementID(PyCThostFtdcSettlementInfoField *self, PyObject* val, void *closure) {
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
        
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSettlementInfoField_get_BrokerID(PyCThostFtdcSettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSettlementInfoField_set_BrokerID(PyCThostFtdcSettlementInfoField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSettlementInfoField_get_InvestorID(PyCThostFtdcSettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSettlementInfoField_set_InvestorID(PyCThostFtdcSettlementInfoField *self, PyObject* val, void *closure) {
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
            
///序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSettlementInfoField_get_SequenceNo(PyCThostFtdcSettlementInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSettlementInfoField_set_SequenceNo(PyCThostFtdcSettlementInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSettlementInfoField_get_Content(PyCThostFtdcSettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Content, (Py_ssize_t)sizeof(self->data.Content));
    return PyBytes_FromString(self->data.Content);
}

///消息正文
// TThostFtdcContentType char[501]
static int PyCThostFtdcSettlementInfoField_set_Content(PyCThostFtdcSettlementInfoField *self, PyObject* val, void *closure) {
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
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcSettlementInfoField_get_AccountID(PyCThostFtdcSettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcSettlementInfoField_set_AccountID(PyCThostFtdcSettlementInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSettlementInfoField_get_CurrencyID(PyCThostFtdcSettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSettlementInfoField_set_CurrencyID(PyCThostFtdcSettlementInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
    // memcpy(self->data.CurrencyID, buf, len);
    strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSettlementInfoField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSettlementInfoField_get_TradingDay, (setter)PyCThostFtdcSettlementInfoField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSettlementInfoField_get_SettlementID, (setter)PyCThostFtdcSettlementInfoField_set_SettlementID, (char *)"SettlementID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSettlementInfoField_get_BrokerID, (setter)PyCThostFtdcSettlementInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSettlementInfoField_get_InvestorID, (setter)PyCThostFtdcSettlementInfoField_set_InvestorID, (char *)"InvestorID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcSettlementInfoField_get_SequenceNo, (setter)PyCThostFtdcSettlementInfoField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///消息正文 
    {(char *)"Content", (getter)PyCThostFtdcSettlementInfoField_get_Content, (setter)PyCThostFtdcSettlementInfoField_set_Content, (char *)"Content", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcSettlementInfoField_get_AccountID, (setter)PyCThostFtdcSettlementInfoField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcSettlementInfoField_get_CurrencyID, (setter)PyCThostFtdcSettlementInfoField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSettlementInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSettlementInfoField",	/* tp_name */
	sizeof(PyCThostFtdcSettlementInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSettlementInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSettlementInfoField_repr,   /* tp_repr */
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
	"CThostFtdcSettlementInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSettlementInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSettlementInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSettlementInfoField_new,       /* tp_new */
};

int PyCThostFtdcSettlementInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSettlementInfoField  */
	if (PyType_Ready(&PyCThostFtdcSettlementInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSettlementInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSettlementInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSettlementInfoField", (PyObject *)&PyCThostFtdcSettlementInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementInfoField to module");
        Py_DECREF(&PyCThostFtdcSettlementInfoFieldType);
		return -1;
    }

    return 0;
}
