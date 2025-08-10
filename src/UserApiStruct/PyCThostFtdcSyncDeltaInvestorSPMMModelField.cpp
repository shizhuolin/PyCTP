
#include "PyCThostFtdcSyncDeltaInvestorSPMMModelField.h"

///风险结算追平投资者SPMM模板选择

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvestorSPMMModelField *self = (PyCThostFtdcSyncDeltaInvestorSPMMModelField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_init(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "SPMMModelID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaInvestorSPMMModelField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaInvestorSPMMModelField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaInvestorSPMMModelField_BrokerID = NULL;
    Py_ssize_t SyncDeltaInvestorSPMMModelField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaInvestorSPMMModelField_InvestorID = NULL;
    Py_ssize_t SyncDeltaInvestorSPMMModelField_InvestorID_len = 0;
            
    ///SPMM模板ID
    // TThostFtdcSPMMModelIDType char[33]
    const char *SyncDeltaInvestorSPMMModelField_SPMMModelID = NULL;
    Py_ssize_t SyncDeltaInvestorSPMMModelField_SPMMModelID_len = 0;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaInvestorSPMMModelField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ci", (char **)kwlist
#endif

        , &SyncDeltaInvestorSPMMModelField_ExchangeID, &SyncDeltaInvestorSPMMModelField_ExchangeID_len 
        , &SyncDeltaInvestorSPMMModelField_BrokerID, &SyncDeltaInvestorSPMMModelField_BrokerID_len 
        , &SyncDeltaInvestorSPMMModelField_InvestorID, &SyncDeltaInvestorSPMMModelField_InvestorID_len 
        , &SyncDeltaInvestorSPMMModelField_SPMMModelID, &SyncDeltaInvestorSPMMModelField_SPMMModelID_len 
        , &SyncDeltaInvestorSPMMModelField_ActionDirection 
        , &SyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaInvestorSPMMModelField_ExchangeID != NULL ) {
        if(SyncDeltaInvestorSPMMModelField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaInvestorSPMMModelField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaInvestorSPMMModelField_ExchangeID, SyncDeltaInvestorSPMMModelField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaInvestorSPMMModelField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaInvestorSPMMModelField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaInvestorSPMMModelField_BrokerID != NULL ) {
        if(SyncDeltaInvestorSPMMModelField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaInvestorSPMMModelField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaInvestorSPMMModelField_BrokerID, SyncDeltaInvestorSPMMModelField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaInvestorSPMMModelField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaInvestorSPMMModelField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaInvestorSPMMModelField_InvestorID != NULL ) {
        if(SyncDeltaInvestorSPMMModelField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaInvestorSPMMModelField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaInvestorSPMMModelField_InvestorID, SyncDeltaInvestorSPMMModelField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaInvestorSPMMModelField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaInvestorSPMMModelField_InvestorID = NULL;
    }
            
    ///SPMM模板ID
    // TThostFtdcSPMMModelIDType char[33]
    if( SyncDeltaInvestorSPMMModelField_SPMMModelID != NULL ) {
        if(SyncDeltaInvestorSPMMModelField_SPMMModelID_len > (Py_ssize_t)sizeof(self->data.SPMMModelID)) {
            PyErr_Format(PyExc_ValueError, "SPMMModelID too long: length=%zd (max allowed is %zd)", SyncDeltaInvestorSPMMModelField_SPMMModelID_len, (Py_ssize_t)sizeof(self->data.SPMMModelID));
            return -1;
        }
        // memset(self->data.SPMMModelID, 0, sizeof(self->data.SPMMModelID));
        // memcpy(self->data.SPMMModelID, SyncDeltaInvestorSPMMModelField_SPMMModelID, SyncDeltaInvestorSPMMModelField_SPMMModelID_len);        
        strncpy(self->data.SPMMModelID, SyncDeltaInvestorSPMMModelField_SPMMModelID, sizeof(self->data.SPMMModelID) );
        SyncDeltaInvestorSPMMModelField_SPMMModelID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaInvestorSPMMModelField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaInvestorSPMMModelField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaInvestorSPMMModelField_dealloc(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_repr(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"SPMMModelID", self->data.SPMMModelID//, (Py_ssize_t)sizeof(self->data.SPMMModelID) 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvestorSPMMModelField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_ExchangeID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_ExchangeID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_BrokerID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_BrokerID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_InvestorID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_InvestorID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, PyObject* val, void *closure) {
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
            
///SPMM模板ID
// TThostFtdcSPMMModelIDType char[33]
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_SPMMModelID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SPMMModelID, (Py_ssize_t)sizeof(self->data.SPMMModelID));
    return PyBytes_FromString(self->data.SPMMModelID);
}

///SPMM模板ID
// TThostFtdcSPMMModelIDType char[33]
static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_SPMMModelID(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SPMMModelID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SPMMModelID)) {
        PyErr_SetString(PyExc_ValueError, "SPMMModelID must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.SPMMModelID, 0, sizeof(self->data.SPMMModelID));
    // memcpy(self->data.SPMMModelID, buf, len);
    strncpy(self->data.SPMMModelID, buf, sizeof(self->data.SPMMModelID));
    return 0;
}
            
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_ActionDirection(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_ActionDirection(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvestorSPMMModelField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaInvestorSPMMModelField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_InvestorID, (char *)"InvestorID", NULL},
    ///SPMM模板ID 
    {(char *)"SPMMModelID", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_SPMMModelID, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_SPMMModelID, (char *)"SPMMModelID", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvestorSPMMModelField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvestorSPMMModelField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvestorSPMMModelField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvestorSPMMModelField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvestorSPMMModelField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvestorSPMMModelField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvestorSPMMModelField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvestorSPMMModelField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvestorSPMMModelField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvestorSPMMModelField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvestorSPMMModelField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvestorSPMMModelField", (PyObject *)&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvestorSPMMModelField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType);
		return -1;
    }

    return 0;
}
