
#include "PyCThostFtdcTradingNoticeInfoField.h"

///用户事件通知信息

static PyObject *PyCThostFtdcTradingNoticeInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingNoticeInfoField *self = (PyCThostFtdcTradingNoticeInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingNoticeInfoField_init(PyCThostFtdcTradingNoticeInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "SendTime", "FieldContent", "SequenceSeries", "SequenceNo", "InvestUnitID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingNoticeInfoField_BrokerID = NULL;
    Py_ssize_t TradingNoticeInfoField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *TradingNoticeInfoField_InvestorID = NULL;
    Py_ssize_t TradingNoticeInfoField_InvestorID_len = 0;
            
    ///发送时间
    // TThostFtdcTimeType char[9]
    const char *TradingNoticeInfoField_SendTime = NULL;
    Py_ssize_t TradingNoticeInfoField_SendTime_len = 0;
            
    ///消息正文
    // TThostFtdcContentType char[501]
    const char *TradingNoticeInfoField_FieldContent = NULL;
    Py_ssize_t TradingNoticeInfoField_FieldContent_len = 0;
            
    ///序列系列号
    // TThostFtdcSequenceSeriesType short
    short TradingNoticeInfoField_SequenceSeries = 0;
        
    ///序列号
    // TThostFtdcSequenceNoType int
    int TradingNoticeInfoField_SequenceNo = 0;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *TradingNoticeInfoField_InvestUnitID = NULL;
    Py_ssize_t TradingNoticeInfoField_InvestUnitID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#hiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#his#", (char **)kwlist
#endif

        , &TradingNoticeInfoField_BrokerID, &TradingNoticeInfoField_BrokerID_len 
        , &TradingNoticeInfoField_InvestorID, &TradingNoticeInfoField_InvestorID_len 
        , &TradingNoticeInfoField_SendTime, &TradingNoticeInfoField_SendTime_len 
        , &TradingNoticeInfoField_FieldContent, &TradingNoticeInfoField_FieldContent_len 
        , &TradingNoticeInfoField_SequenceSeries 
        , &TradingNoticeInfoField_SequenceNo 
        , &TradingNoticeInfoField_InvestUnitID, &TradingNoticeInfoField_InvestUnitID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingNoticeInfoField_BrokerID != NULL ) {
        if(TradingNoticeInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingNoticeInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingNoticeInfoField_BrokerID, TradingNoticeInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingNoticeInfoField_BrokerID, sizeof(self->data.BrokerID) );
        TradingNoticeInfoField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( TradingNoticeInfoField_InvestorID != NULL ) {
        if(TradingNoticeInfoField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", TradingNoticeInfoField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, TradingNoticeInfoField_InvestorID, TradingNoticeInfoField_InvestorID_len);        
        strncpy(self->data.InvestorID, TradingNoticeInfoField_InvestorID, sizeof(self->data.InvestorID) );
        TradingNoticeInfoField_InvestorID = NULL;
    }
            
    ///发送时间
    // TThostFtdcTimeType char[9]
    if( TradingNoticeInfoField_SendTime != NULL ) {
        if(TradingNoticeInfoField_SendTime_len > (Py_ssize_t)sizeof(self->data.SendTime)) {
            PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is %zd)", TradingNoticeInfoField_SendTime_len, (Py_ssize_t)sizeof(self->data.SendTime));
            return -1;
        }
        // memset(self->data.SendTime, 0, sizeof(self->data.SendTime));
        // memcpy(self->data.SendTime, TradingNoticeInfoField_SendTime, TradingNoticeInfoField_SendTime_len);        
        strncpy(self->data.SendTime, TradingNoticeInfoField_SendTime, sizeof(self->data.SendTime) );
        TradingNoticeInfoField_SendTime = NULL;
    }
            
    ///消息正文
    // TThostFtdcContentType char[501]
    if( TradingNoticeInfoField_FieldContent != NULL ) {
        if(TradingNoticeInfoField_FieldContent_len > (Py_ssize_t)sizeof(self->data.FieldContent)) {
            PyErr_Format(PyExc_ValueError, "FieldContent too long: length=%zd (max allowed is %zd)", TradingNoticeInfoField_FieldContent_len, (Py_ssize_t)sizeof(self->data.FieldContent));
            return -1;
        }
        // memset(self->data.FieldContent, 0, sizeof(self->data.FieldContent));
        // memcpy(self->data.FieldContent, TradingNoticeInfoField_FieldContent, TradingNoticeInfoField_FieldContent_len);        
        strncpy(self->data.FieldContent, TradingNoticeInfoField_FieldContent, sizeof(self->data.FieldContent) );
        TradingNoticeInfoField_FieldContent = NULL;
    }
            
    ///序列系列号
    // TThostFtdcSequenceSeriesType short
    self->data.SequenceSeries = TradingNoticeInfoField_SequenceSeries;
        
    ///序列号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = TradingNoticeInfoField_SequenceNo;
        
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( TradingNoticeInfoField_InvestUnitID != NULL ) {
        if(TradingNoticeInfoField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", TradingNoticeInfoField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, TradingNoticeInfoField_InvestUnitID, TradingNoticeInfoField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, TradingNoticeInfoField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        TradingNoticeInfoField_InvestUnitID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradingNoticeInfoField_dealloc(PyCThostFtdcTradingNoticeInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_repr(PyCThostFtdcTradingNoticeInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:h,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:h,s:i,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"SendTime", self->data.SendTime//, (Py_ssize_t)sizeof(self->data.SendTime) 
        ,"FieldContent", self->data.FieldContent//, (Py_ssize_t)sizeof(self->data.FieldContent) 
        ,"SequenceSeries", self->data.SequenceSeries 
        ,"SequenceNo", self->data.SequenceNo 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingNoticeInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradingNoticeInfoField_get_BrokerID(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingNoticeInfoField_set_BrokerID(PyCThostFtdcTradingNoticeInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingNoticeInfoField_get_InvestorID(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcTradingNoticeInfoField_set_InvestorID(PyCThostFtdcTradingNoticeInfoField *self, PyObject* val, void *closure) {
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
            
///发送时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcTradingNoticeInfoField_get_SendTime(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SendTime, (Py_ssize_t)sizeof(self->data.SendTime));
    return PyBytes_FromString(self->data.SendTime);
}

///发送时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcTradingNoticeInfoField_set_SendTime(PyCThostFtdcTradingNoticeInfoField *self, PyObject* val, void *closure) {
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
            
///消息正文
// TThostFtdcContentType char[501]
static PyObject *PyCThostFtdcTradingNoticeInfoField_get_FieldContent(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FieldContent, (Py_ssize_t)sizeof(self->data.FieldContent));
    return PyBytes_FromString(self->data.FieldContent);
}

///消息正文
// TThostFtdcContentType char[501]
static int PyCThostFtdcTradingNoticeInfoField_set_FieldContent(PyCThostFtdcTradingNoticeInfoField *self, PyObject* val, void *closure) {
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
            
///序列系列号
// TThostFtdcSequenceSeriesType short
static PyObject *PyCThostFtdcTradingNoticeInfoField_get_SequenceSeries(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceSeries);
#else
    return PyInt_FromLong(self->data.SequenceSeries);
#endif
}

///序列系列号
// TThostFtdcSequenceSeriesType short
static int PyCThostFtdcTradingNoticeInfoField_set_SequenceSeries(PyCThostFtdcTradingNoticeInfoField *self, PyObject* val, void *closure) {
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
        
///序列号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcTradingNoticeInfoField_get_SequenceNo(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序列号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcTradingNoticeInfoField_set_SequenceNo(PyCThostFtdcTradingNoticeInfoField *self, PyObject* val, void *closure) {
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
        
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcTradingNoticeInfoField_get_InvestUnitID(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcTradingNoticeInfoField_set_InvestUnitID(PyCThostFtdcTradingNoticeInfoField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTradingNoticeInfoField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingNoticeInfoField_get_BrokerID, (setter)PyCThostFtdcTradingNoticeInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcTradingNoticeInfoField_get_InvestorID, (setter)PyCThostFtdcTradingNoticeInfoField_set_InvestorID, (char *)"InvestorID", NULL},
    ///发送时间 
    {(char *)"SendTime", (getter)PyCThostFtdcTradingNoticeInfoField_get_SendTime, (setter)PyCThostFtdcTradingNoticeInfoField_set_SendTime, (char *)"SendTime", NULL},
    ///消息正文 
    {(char *)"FieldContent", (getter)PyCThostFtdcTradingNoticeInfoField_get_FieldContent, (setter)PyCThostFtdcTradingNoticeInfoField_set_FieldContent, (char *)"FieldContent", NULL},
    ///序列系列号 
    {(char *)"SequenceSeries", (getter)PyCThostFtdcTradingNoticeInfoField_get_SequenceSeries, (setter)PyCThostFtdcTradingNoticeInfoField_set_SequenceSeries, (char *)"SequenceSeries", NULL},
    ///序列号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcTradingNoticeInfoField_get_SequenceNo, (setter)PyCThostFtdcTradingNoticeInfoField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcTradingNoticeInfoField_get_InvestUnitID, (setter)PyCThostFtdcTradingNoticeInfoField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingNoticeInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingNoticeInfoField",	/* tp_name */
	sizeof(PyCThostFtdcTradingNoticeInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingNoticeInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingNoticeInfoField_repr,   /* tp_repr */
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
	"CThostFtdcTradingNoticeInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingNoticeInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingNoticeInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingNoticeInfoField_new,       /* tp_new */
};

int PyCThostFtdcTradingNoticeInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingNoticeInfoField  */
	if (PyType_Ready(&PyCThostFtdcTradingNoticeInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingNoticeInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingNoticeInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingNoticeInfoField", (PyObject *)&PyCThostFtdcTradingNoticeInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingNoticeInfoField to module");
        Py_DECREF(&PyCThostFtdcTradingNoticeInfoFieldType);
		return -1;
    }

    return 0;
}
