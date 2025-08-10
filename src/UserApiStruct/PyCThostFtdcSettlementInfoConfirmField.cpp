
#include "PyCThostFtdcSettlementInfoConfirmField.h"

///投资者结算结果确认信息

static PyObject *PyCThostFtdcSettlementInfoConfirmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSettlementInfoConfirmField *self = (PyCThostFtdcSettlementInfoConfirmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSettlementInfoConfirmField_init(PyCThostFtdcSettlementInfoConfirmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ConfirmDate", "ConfirmTime", "SettlementID", "AccountID", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SettlementInfoConfirmField_BrokerID = NULL;
    Py_ssize_t SettlementInfoConfirmField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SettlementInfoConfirmField_InvestorID = NULL;
    Py_ssize_t SettlementInfoConfirmField_InvestorID_len = 0;
            
    ///确认日期
    // TThostFtdcDateType char[9]
    const char *SettlementInfoConfirmField_ConfirmDate = NULL;
    Py_ssize_t SettlementInfoConfirmField_ConfirmDate_len = 0;
            
    ///确认时间
    // TThostFtdcTimeType char[9]
    const char *SettlementInfoConfirmField_ConfirmTime = NULL;
    Py_ssize_t SettlementInfoConfirmField_ConfirmTime_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SettlementInfoConfirmField_SettlementID = 0;
        
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *SettlementInfoConfirmField_AccountID = NULL;
    Py_ssize_t SettlementInfoConfirmField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *SettlementInfoConfirmField_CurrencyID = NULL;
    Py_ssize_t SettlementInfoConfirmField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#s#", (char **)kwlist
#endif

        , &SettlementInfoConfirmField_BrokerID, &SettlementInfoConfirmField_BrokerID_len 
        , &SettlementInfoConfirmField_InvestorID, &SettlementInfoConfirmField_InvestorID_len 
        , &SettlementInfoConfirmField_ConfirmDate, &SettlementInfoConfirmField_ConfirmDate_len 
        , &SettlementInfoConfirmField_ConfirmTime, &SettlementInfoConfirmField_ConfirmTime_len 
        , &SettlementInfoConfirmField_SettlementID 
        , &SettlementInfoConfirmField_AccountID, &SettlementInfoConfirmField_AccountID_len 
        , &SettlementInfoConfirmField_CurrencyID, &SettlementInfoConfirmField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SettlementInfoConfirmField_BrokerID != NULL ) {
        if(SettlementInfoConfirmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SettlementInfoConfirmField_BrokerID, SettlementInfoConfirmField_BrokerID_len);        
        strncpy(self->data.BrokerID, SettlementInfoConfirmField_BrokerID, sizeof(self->data.BrokerID) );
        SettlementInfoConfirmField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SettlementInfoConfirmField_InvestorID != NULL ) {
        if(SettlementInfoConfirmField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SettlementInfoConfirmField_InvestorID, SettlementInfoConfirmField_InvestorID_len);        
        strncpy(self->data.InvestorID, SettlementInfoConfirmField_InvestorID, sizeof(self->data.InvestorID) );
        SettlementInfoConfirmField_InvestorID = NULL;
    }
            
    ///确认日期
    // TThostFtdcDateType char[9]
    if( SettlementInfoConfirmField_ConfirmDate != NULL ) {
        if(SettlementInfoConfirmField_ConfirmDate_len > (Py_ssize_t)sizeof(self->data.ConfirmDate)) {
            PyErr_Format(PyExc_ValueError, "ConfirmDate too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmField_ConfirmDate_len, (Py_ssize_t)sizeof(self->data.ConfirmDate));
            return -1;
        }
        // memset(self->data.ConfirmDate, 0, sizeof(self->data.ConfirmDate));
        // memcpy(self->data.ConfirmDate, SettlementInfoConfirmField_ConfirmDate, SettlementInfoConfirmField_ConfirmDate_len);        
        strncpy(self->data.ConfirmDate, SettlementInfoConfirmField_ConfirmDate, sizeof(self->data.ConfirmDate) );
        SettlementInfoConfirmField_ConfirmDate = NULL;
    }
            
    ///确认时间
    // TThostFtdcTimeType char[9]
    if( SettlementInfoConfirmField_ConfirmTime != NULL ) {
        if(SettlementInfoConfirmField_ConfirmTime_len > (Py_ssize_t)sizeof(self->data.ConfirmTime)) {
            PyErr_Format(PyExc_ValueError, "ConfirmTime too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmField_ConfirmTime_len, (Py_ssize_t)sizeof(self->data.ConfirmTime));
            return -1;
        }
        // memset(self->data.ConfirmTime, 0, sizeof(self->data.ConfirmTime));
        // memcpy(self->data.ConfirmTime, SettlementInfoConfirmField_ConfirmTime, SettlementInfoConfirmField_ConfirmTime_len);        
        strncpy(self->data.ConfirmTime, SettlementInfoConfirmField_ConfirmTime, sizeof(self->data.ConfirmTime) );
        SettlementInfoConfirmField_ConfirmTime = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SettlementInfoConfirmField_SettlementID;
        
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( SettlementInfoConfirmField_AccountID != NULL ) {
        if(SettlementInfoConfirmField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, SettlementInfoConfirmField_AccountID, SettlementInfoConfirmField_AccountID_len);        
        strncpy(self->data.AccountID, SettlementInfoConfirmField_AccountID, sizeof(self->data.AccountID) );
        SettlementInfoConfirmField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( SettlementInfoConfirmField_CurrencyID != NULL ) {
        if(SettlementInfoConfirmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, SettlementInfoConfirmField_CurrencyID, SettlementInfoConfirmField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, SettlementInfoConfirmField_CurrencyID, sizeof(self->data.CurrencyID) );
        SettlementInfoConfirmField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSettlementInfoConfirmField_dealloc(PyCThostFtdcSettlementInfoConfirmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_repr(PyCThostFtdcSettlementInfoConfirmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ConfirmDate", self->data.ConfirmDate//, (Py_ssize_t)sizeof(self->data.ConfirmDate) 
        ,"ConfirmTime", self->data.ConfirmTime//, (Py_ssize_t)sizeof(self->data.ConfirmTime) 
        ,"SettlementID", self->data.SettlementID 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoConfirmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_BrokerID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSettlementInfoConfirmField_set_BrokerID(PyCThostFtdcSettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_InvestorID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSettlementInfoConfirmField_set_InvestorID(PyCThostFtdcSettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
            
///确认日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_ConfirmDate(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConfirmDate, (Py_ssize_t)sizeof(self->data.ConfirmDate));
    return PyBytes_FromString(self->data.ConfirmDate);
}

///确认日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSettlementInfoConfirmField_set_ConfirmDate(PyCThostFtdcSettlementInfoConfirmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ConfirmDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ConfirmDate)) {
        PyErr_SetString(PyExc_ValueError, "ConfirmDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ConfirmDate, 0, sizeof(self->data.ConfirmDate));
    // memcpy(self->data.ConfirmDate, buf, len);
    strncpy(self->data.ConfirmDate, buf, sizeof(self->data.ConfirmDate));
    return 0;
}
            
///确认时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_ConfirmTime(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConfirmTime, (Py_ssize_t)sizeof(self->data.ConfirmTime));
    return PyBytes_FromString(self->data.ConfirmTime);
}

///确认时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcSettlementInfoConfirmField_set_ConfirmTime(PyCThostFtdcSettlementInfoConfirmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ConfirmTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ConfirmTime)) {
        PyErr_SetString(PyExc_ValueError, "ConfirmTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ConfirmTime, 0, sizeof(self->data.ConfirmTime));
    // memcpy(self->data.ConfirmTime, buf, len);
    strncpy(self->data.ConfirmTime, buf, sizeof(self->data.ConfirmTime));
    return 0;
}
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_SettlementID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSettlementInfoConfirmField_set_SettlementID(PyCThostFtdcSettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
        
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_AccountID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcSettlementInfoConfirmField_set_AccountID(PyCThostFtdcSettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_CurrencyID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSettlementInfoConfirmField_set_CurrencyID(PyCThostFtdcSettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcSettlementInfoConfirmField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_BrokerID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_InvestorID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_InvestorID, (char *)"InvestorID", NULL},
    ///确认日期 
    {(char *)"ConfirmDate", (getter)PyCThostFtdcSettlementInfoConfirmField_get_ConfirmDate, (setter)PyCThostFtdcSettlementInfoConfirmField_set_ConfirmDate, (char *)"ConfirmDate", NULL},
    ///确认时间 
    {(char *)"ConfirmTime", (getter)PyCThostFtdcSettlementInfoConfirmField_get_ConfirmTime, (setter)PyCThostFtdcSettlementInfoConfirmField_set_ConfirmTime, (char *)"ConfirmTime", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_SettlementID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_SettlementID, (char *)"SettlementID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_AccountID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_CurrencyID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSettlementInfoConfirmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSettlementInfoConfirmField",	/* tp_name */
	sizeof(PyCThostFtdcSettlementInfoConfirmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSettlementInfoConfirmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSettlementInfoConfirmField_repr,   /* tp_repr */
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
	"CThostFtdcSettlementInfoConfirmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSettlementInfoConfirmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSettlementInfoConfirmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSettlementInfoConfirmField_new,       /* tp_new */
};

int PyCThostFtdcSettlementInfoConfirmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSettlementInfoConfirmField  */
	if (PyType_Ready(&PyCThostFtdcSettlementInfoConfirmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSettlementInfoConfirmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSettlementInfoConfirmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSettlementInfoConfirmField", (PyObject *)&PyCThostFtdcSettlementInfoConfirmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementInfoConfirmField to module");
        Py_DECREF(&PyCThostFtdcSettlementInfoConfirmFieldType);
		return -1;
    }

    return 0;
}
