
#include "PyCThostFtdcSyncDelaySwapFrozenField.h"

///换汇可提冻结

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDelaySwapFrozenField *self = (PyCThostFtdcSyncDelaySwapFrozenField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDelaySwapFrozenField_init(PyCThostFtdcSyncDelaySwapFrozenField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DelaySwapSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "FromRemainSwap", "IsManualSwap",  NULL};


    ///换汇流水号
    // TThostFtdcDepositSeqNoType char[15]
    const char *SyncDelaySwapFrozenField_DelaySwapSeqNo = NULL;
    Py_ssize_t SyncDelaySwapFrozenField_DelaySwapSeqNo_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDelaySwapFrozenField_BrokerID = NULL;
    Py_ssize_t SyncDelaySwapFrozenField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDelaySwapFrozenField_InvestorID = NULL;
    Py_ssize_t SyncDelaySwapFrozenField_InvestorID_len = 0;
            
    ///源币种
    // TThostFtdcCurrencyIDType char[4]
    const char *SyncDelaySwapFrozenField_FromCurrencyID = NULL;
    Py_ssize_t SyncDelaySwapFrozenField_FromCurrencyID_len = 0;
            
    ///源剩余换汇额度(可提冻结)
    // TThostFtdcMoneyType double
    double SyncDelaySwapFrozenField_FromRemainSwap = 0.0;
        
    ///是否手工换汇
    // TThostFtdcBoolType int
    int SyncDelaySwapFrozenField_IsManualSwap = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#di", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#di", (char **)kwlist
#endif

        , &SyncDelaySwapFrozenField_DelaySwapSeqNo, &SyncDelaySwapFrozenField_DelaySwapSeqNo_len 
        , &SyncDelaySwapFrozenField_BrokerID, &SyncDelaySwapFrozenField_BrokerID_len 
        , &SyncDelaySwapFrozenField_InvestorID, &SyncDelaySwapFrozenField_InvestorID_len 
        , &SyncDelaySwapFrozenField_FromCurrencyID, &SyncDelaySwapFrozenField_FromCurrencyID_len 
        , &SyncDelaySwapFrozenField_FromRemainSwap 
        , &SyncDelaySwapFrozenField_IsManualSwap 


    )) {
        return -1;
    }


    ///换汇流水号
    // TThostFtdcDepositSeqNoType char[15]
    if( SyncDelaySwapFrozenField_DelaySwapSeqNo != NULL ) {
        if(SyncDelaySwapFrozenField_DelaySwapSeqNo_len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DelaySwapSeqNo too long: length=%zd (max allowed is %zd)", SyncDelaySwapFrozenField_DelaySwapSeqNo_len, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo));
            return -1;
        }
        // memset(self->data.DelaySwapSeqNo, 0, sizeof(self->data.DelaySwapSeqNo));
        // memcpy(self->data.DelaySwapSeqNo, SyncDelaySwapFrozenField_DelaySwapSeqNo, SyncDelaySwapFrozenField_DelaySwapSeqNo_len);        
        strncpy(self->data.DelaySwapSeqNo, SyncDelaySwapFrozenField_DelaySwapSeqNo, sizeof(self->data.DelaySwapSeqNo) );
        SyncDelaySwapFrozenField_DelaySwapSeqNo = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDelaySwapFrozenField_BrokerID != NULL ) {
        if(SyncDelaySwapFrozenField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDelaySwapFrozenField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDelaySwapFrozenField_BrokerID, SyncDelaySwapFrozenField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDelaySwapFrozenField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDelaySwapFrozenField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDelaySwapFrozenField_InvestorID != NULL ) {
        if(SyncDelaySwapFrozenField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDelaySwapFrozenField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDelaySwapFrozenField_InvestorID, SyncDelaySwapFrozenField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDelaySwapFrozenField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDelaySwapFrozenField_InvestorID = NULL;
    }
            
    ///源币种
    // TThostFtdcCurrencyIDType char[4]
    if( SyncDelaySwapFrozenField_FromCurrencyID != NULL ) {
        if(SyncDelaySwapFrozenField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", SyncDelaySwapFrozenField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
            return -1;
        }
        // memset(self->data.FromCurrencyID, 0, sizeof(self->data.FromCurrencyID));
        // memcpy(self->data.FromCurrencyID, SyncDelaySwapFrozenField_FromCurrencyID, SyncDelaySwapFrozenField_FromCurrencyID_len);        
        strncpy(self->data.FromCurrencyID, SyncDelaySwapFrozenField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
        SyncDelaySwapFrozenField_FromCurrencyID = NULL;
    }
            
    ///源剩余换汇额度(可提冻结)
    // TThostFtdcMoneyType double
    self->data.FromRemainSwap = SyncDelaySwapFrozenField_FromRemainSwap;
        
    ///是否手工换汇
    // TThostFtdcBoolType int
    self->data.IsManualSwap = SyncDelaySwapFrozenField_IsManualSwap;
        

    return 0;
}

static void PyCThostFtdcSyncDelaySwapFrozenField_dealloc(PyCThostFtdcSyncDelaySwapFrozenField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_repr(PyCThostFtdcSyncDelaySwapFrozenField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:i}"
#endif

        ,"DelaySwapSeqNo", self->data.DelaySwapSeqNo//, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"FromCurrencyID", self->data.FromCurrencyID//, (Py_ssize_t)sizeof(self->data.FromCurrencyID) 
        ,"FromRemainSwap", self->data.FromRemainSwap 
        ,"IsManualSwap", self->data.IsManualSwap 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDelaySwapFrozenField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///换汇流水号
// TThostFtdcDepositSeqNoType char[15]
static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_DelaySwapSeqNo(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DelaySwapSeqNo, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo));
    return PyBytes_FromString(self->data.DelaySwapSeqNo);
}

///换汇流水号
// TThostFtdcDepositSeqNoType char[15]
static int PyCThostFtdcSyncDelaySwapFrozenField_set_DelaySwapSeqNo(PyCThostFtdcSyncDelaySwapFrozenField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DelaySwapSeqNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DelaySwapSeqNo must be less than 15 bytes");
        return -1;
    }
    // memset(self->data.DelaySwapSeqNo, 0, sizeof(self->data.DelaySwapSeqNo));
    // memcpy(self->data.DelaySwapSeqNo, buf, len);
    strncpy(self->data.DelaySwapSeqNo, buf, sizeof(self->data.DelaySwapSeqNo));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_BrokerID(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDelaySwapFrozenField_set_BrokerID(PyCThostFtdcSyncDelaySwapFrozenField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_InvestorID(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDelaySwapFrozenField_set_InvestorID(PyCThostFtdcSyncDelaySwapFrozenField *self, PyObject* val, void *closure) {
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
            
///源币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_FromCurrencyID(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FromCurrencyID, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
    return PyBytes_FromString(self->data.FromCurrencyID);
}

///源币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSyncDelaySwapFrozenField_set_FromCurrencyID(PyCThostFtdcSyncDelaySwapFrozenField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.FromCurrencyID, 0, sizeof(self->data.FromCurrencyID));
    // memcpy(self->data.FromCurrencyID, buf, len);
    strncpy(self->data.FromCurrencyID, buf, sizeof(self->data.FromCurrencyID));
    return 0;
}
            
///源剩余换汇额度(可提冻结)
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_FromRemainSwap(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FromRemainSwap);
}

///源剩余换汇额度(可提冻结)
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDelaySwapFrozenField_set_FromRemainSwap(PyCThostFtdcSyncDelaySwapFrozenField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromRemainSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FromRemainSwap = buf;
    return 0;
}
        
///是否手工换汇
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_IsManualSwap(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsManualSwap);
#else
    return PyInt_FromLong(self->data.IsManualSwap);
#endif
}

///是否手工换汇
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDelaySwapFrozenField_set_IsManualSwap(PyCThostFtdcSyncDelaySwapFrozenField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsManualSwap Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsManualSwap Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsManualSwap value out of range for C int");
        return -1;
    }
    self->data.IsManualSwap = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDelaySwapFrozenField_getset[] = {
    ///换汇流水号 
    {(char *)"DelaySwapSeqNo", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_DelaySwapSeqNo, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_DelaySwapSeqNo, (char *)"DelaySwapSeqNo", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_BrokerID, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_InvestorID, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_InvestorID, (char *)"InvestorID", NULL},
    ///源币种 
    {(char *)"FromCurrencyID", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_FromCurrencyID, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
    ///源剩余换汇额度(可提冻结) 
    {(char *)"FromRemainSwap", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_FromRemainSwap, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_FromRemainSwap, (char *)"FromRemainSwap", NULL},
    ///是否手工换汇 
    {(char *)"IsManualSwap", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_IsManualSwap, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_IsManualSwap, (char *)"IsManualSwap", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDelaySwapFrozenFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDelaySwapFrozenField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDelaySwapFrozenField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDelaySwapFrozenField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDelaySwapFrozenField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDelaySwapFrozenField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDelaySwapFrozenField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDelaySwapFrozenField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDelaySwapFrozenField_new,       /* tp_new */
};

int PyCThostFtdcSyncDelaySwapFrozenFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDelaySwapFrozenField  */
	if (PyType_Ready(&PyCThostFtdcSyncDelaySwapFrozenFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDelaySwapFrozenField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDelaySwapFrozenFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDelaySwapFrozenField", (PyObject *)&PyCThostFtdcSyncDelaySwapFrozenFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDelaySwapFrozenField to module");
        Py_DECREF(&PyCThostFtdcSyncDelaySwapFrozenFieldType);
		return -1;
    }

    return 0;
}
