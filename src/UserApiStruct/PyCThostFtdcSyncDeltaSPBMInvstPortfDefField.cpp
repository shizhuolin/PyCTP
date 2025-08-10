
#include "PyCThostFtdcSyncDeltaSPBMInvstPortfDefField.h"

///风险结算追平投资者SPBM套餐选择

static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self = (PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_init(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "PortfolioDefID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPBMInvstPortfDefField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPBMInvstPortfDefField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaSPBMInvstPortfDefField_BrokerID = NULL;
    Py_ssize_t SyncDeltaSPBMInvstPortfDefField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaSPBMInvstPortfDefField_InvestorID = NULL;
    Py_ssize_t SyncDeltaSPBMInvstPortfDefField_InvestorID_len = 0;
            
    ///组合保证金套餐代码
    // TThostFtdcPortfolioDefIDType int
    int SyncDeltaSPBMInvstPortfDefField_PortfolioDefID = 0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPBMInvstPortfDefField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPBMInvstPortfDefField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ici", (char **)kwlist
#endif

        , &SyncDeltaSPBMInvstPortfDefField_ExchangeID, &SyncDeltaSPBMInvstPortfDefField_ExchangeID_len 
        , &SyncDeltaSPBMInvstPortfDefField_BrokerID, &SyncDeltaSPBMInvstPortfDefField_BrokerID_len 
        , &SyncDeltaSPBMInvstPortfDefField_InvestorID, &SyncDeltaSPBMInvstPortfDefField_InvestorID_len 
        , &SyncDeltaSPBMInvstPortfDefField_PortfolioDefID 
        , &SyncDeltaSPBMInvstPortfDefField_ActionDirection 
        , &SyncDeltaSPBMInvstPortfDefField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPBMInvstPortfDefField_ExchangeID != NULL ) {
        if(SyncDeltaSPBMInvstPortfDefField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMInvstPortfDefField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPBMInvstPortfDefField_ExchangeID, SyncDeltaSPBMInvstPortfDefField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPBMInvstPortfDefField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPBMInvstPortfDefField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaSPBMInvstPortfDefField_BrokerID != NULL ) {
        if(SyncDeltaSPBMInvstPortfDefField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMInvstPortfDefField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaSPBMInvstPortfDefField_BrokerID, SyncDeltaSPBMInvstPortfDefField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaSPBMInvstPortfDefField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaSPBMInvstPortfDefField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaSPBMInvstPortfDefField_InvestorID != NULL ) {
        if(SyncDeltaSPBMInvstPortfDefField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMInvstPortfDefField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaSPBMInvstPortfDefField_InvestorID, SyncDeltaSPBMInvstPortfDefField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaSPBMInvstPortfDefField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaSPBMInvstPortfDefField_InvestorID = NULL;
    }
            
    ///组合保证金套餐代码
    // TThostFtdcPortfolioDefIDType int
    self->data.PortfolioDefID = SyncDeltaSPBMInvstPortfDefField_PortfolioDefID;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPBMInvstPortfDefField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPBMInvstPortfDefField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_dealloc(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_repr(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:c,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"PortfolioDefID", self->data.PortfolioDefID 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMInvstPortfDefField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_BrokerID(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_BrokerID(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_InvestorID(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_InvestorID(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, PyObject* val, void *closure) {
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
            
///组合保证金套餐代码
// TThostFtdcPortfolioDefIDType int
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_PortfolioDefID(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PortfolioDefID);
#else
    return PyInt_FromLong(self->data.PortfolioDefID);
#endif
}

///组合保证金套餐代码
// TThostFtdcPortfolioDefIDType int
static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_PortfolioDefID(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PortfolioDefID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PortfolioDefID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the PortfolioDefID value out of range for C int");
        return -1;
    }
    self->data.PortfolioDefID = (int)buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_InvestorID, (char *)"InvestorID", NULL},
    ///组合保证金套餐代码 
    {(char *)"PortfolioDefID", (getter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_PortfolioDefID, (setter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_PortfolioDefID, (char *)"PortfolioDefID", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMInvstPortfDefField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMInvstPortfDefField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMInvstPortfDefField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMInvstPortfDefField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMInvstPortfDefField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMInvstPortfDefField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMInvstPortfDefField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMInvstPortfDefField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType);
		return -1;
    }

    return 0;
}
