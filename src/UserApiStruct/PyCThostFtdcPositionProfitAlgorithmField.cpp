
#include "PyCThostFtdcPositionProfitAlgorithmField.h"

///浮动盈亏算法

static PyObject *PyCThostFtdcPositionProfitAlgorithmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcPositionProfitAlgorithmField *self = (PyCThostFtdcPositionProfitAlgorithmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcPositionProfitAlgorithmField_init(PyCThostFtdcPositionProfitAlgorithmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "Algorithm", "Memo", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *PositionProfitAlgorithmField_BrokerID = NULL;
    Py_ssize_t PositionProfitAlgorithmField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *PositionProfitAlgorithmField_AccountID = NULL;
    Py_ssize_t PositionProfitAlgorithmField_AccountID_len = 0;
            
    ///盈亏算法
    // TThostFtdcAlgorithmType char
    char PositionProfitAlgorithmField_Algorithm = 0;
            
    ///备注
    // TThostFtdcMemoType char[161]
    const char *PositionProfitAlgorithmField_Memo = NULL;
    Py_ssize_t PositionProfitAlgorithmField_Memo_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *PositionProfitAlgorithmField_CurrencyID = NULL;
    Py_ssize_t PositionProfitAlgorithmField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#", (char **)kwlist
#endif

        , &PositionProfitAlgorithmField_BrokerID, &PositionProfitAlgorithmField_BrokerID_len 
        , &PositionProfitAlgorithmField_AccountID, &PositionProfitAlgorithmField_AccountID_len 
        , &PositionProfitAlgorithmField_Algorithm 
        , &PositionProfitAlgorithmField_Memo, &PositionProfitAlgorithmField_Memo_len 
        , &PositionProfitAlgorithmField_CurrencyID, &PositionProfitAlgorithmField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( PositionProfitAlgorithmField_BrokerID != NULL ) {
        if(PositionProfitAlgorithmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", PositionProfitAlgorithmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, PositionProfitAlgorithmField_BrokerID, PositionProfitAlgorithmField_BrokerID_len);        
        strncpy(self->data.BrokerID, PositionProfitAlgorithmField_BrokerID, sizeof(self->data.BrokerID) );
        PositionProfitAlgorithmField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( PositionProfitAlgorithmField_AccountID != NULL ) {
        if(PositionProfitAlgorithmField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", PositionProfitAlgorithmField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, PositionProfitAlgorithmField_AccountID, PositionProfitAlgorithmField_AccountID_len);        
        strncpy(self->data.AccountID, PositionProfitAlgorithmField_AccountID, sizeof(self->data.AccountID) );
        PositionProfitAlgorithmField_AccountID = NULL;
    }
            
    ///盈亏算法
    // TThostFtdcAlgorithmType char
    self->data.Algorithm = PositionProfitAlgorithmField_Algorithm;
            
    ///备注
    // TThostFtdcMemoType char[161]
    if( PositionProfitAlgorithmField_Memo != NULL ) {
        if(PositionProfitAlgorithmField_Memo_len > (Py_ssize_t)sizeof(self->data.Memo)) {
            PyErr_Format(PyExc_ValueError, "Memo too long: length=%zd (max allowed is %zd)", PositionProfitAlgorithmField_Memo_len, (Py_ssize_t)sizeof(self->data.Memo));
            return -1;
        }
        // memset(self->data.Memo, 0, sizeof(self->data.Memo));
        // memcpy(self->data.Memo, PositionProfitAlgorithmField_Memo, PositionProfitAlgorithmField_Memo_len);        
        strncpy(self->data.Memo, PositionProfitAlgorithmField_Memo, sizeof(self->data.Memo) );
        PositionProfitAlgorithmField_Memo = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( PositionProfitAlgorithmField_CurrencyID != NULL ) {
        if(PositionProfitAlgorithmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", PositionProfitAlgorithmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, PositionProfitAlgorithmField_CurrencyID, PositionProfitAlgorithmField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, PositionProfitAlgorithmField_CurrencyID, sizeof(self->data.CurrencyID) );
        PositionProfitAlgorithmField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcPositionProfitAlgorithmField_dealloc(PyCThostFtdcPositionProfitAlgorithmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcPositionProfitAlgorithmField_repr(PyCThostFtdcPositionProfitAlgorithmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Algorithm", self->data.Algorithm 
        ,"Memo", self->data.Memo//, (Py_ssize_t)sizeof(self->data.Memo) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPositionProfitAlgorithmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcPositionProfitAlgorithmField_get_BrokerID(PyCThostFtdcPositionProfitAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcPositionProfitAlgorithmField_set_BrokerID(PyCThostFtdcPositionProfitAlgorithmField *self, PyObject* val, void *closure) {
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
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcPositionProfitAlgorithmField_get_AccountID(PyCThostFtdcPositionProfitAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcPositionProfitAlgorithmField_set_AccountID(PyCThostFtdcPositionProfitAlgorithmField *self, PyObject* val, void *closure) {
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
            
///盈亏算法
// TThostFtdcAlgorithmType char
static PyObject *PyCThostFtdcPositionProfitAlgorithmField_get_Algorithm(PyCThostFtdcPositionProfitAlgorithmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Algorithm), 1);
}

///盈亏算法
// TThostFtdcAlgorithmType char
static int PyCThostFtdcPositionProfitAlgorithmField_set_Algorithm(PyCThostFtdcPositionProfitAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Algorithm Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Algorithm)) {
        PyErr_SetString(PyExc_ValueError, "Algorithm must be equal 1 bytes");
        return -1;
    }
    self->data.Algorithm = *buf;
    return 0;
}
            
///备注
// TThostFtdcMemoType char[161]
static PyObject *PyCThostFtdcPositionProfitAlgorithmField_get_Memo(PyCThostFtdcPositionProfitAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Memo, (Py_ssize_t)sizeof(self->data.Memo));
    return PyBytes_FromString(self->data.Memo);
}

///备注
// TThostFtdcMemoType char[161]
static int PyCThostFtdcPositionProfitAlgorithmField_set_Memo(PyCThostFtdcPositionProfitAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Memo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Memo)) {
        PyErr_SetString(PyExc_ValueError, "Memo must be less than 161 bytes");
        return -1;
    }
    // memset(self->data.Memo, 0, sizeof(self->data.Memo));
    // memcpy(self->data.Memo, buf, len);
    strncpy(self->data.Memo, buf, sizeof(self->data.Memo));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcPositionProfitAlgorithmField_get_CurrencyID(PyCThostFtdcPositionProfitAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcPositionProfitAlgorithmField_set_CurrencyID(PyCThostFtdcPositionProfitAlgorithmField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcPositionProfitAlgorithmField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcPositionProfitAlgorithmField_get_BrokerID, (setter)PyCThostFtdcPositionProfitAlgorithmField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcPositionProfitAlgorithmField_get_AccountID, (setter)PyCThostFtdcPositionProfitAlgorithmField_set_AccountID, (char *)"AccountID", NULL},
    ///盈亏算法 
    {(char *)"Algorithm", (getter)PyCThostFtdcPositionProfitAlgorithmField_get_Algorithm, (setter)PyCThostFtdcPositionProfitAlgorithmField_set_Algorithm, (char *)"Algorithm", NULL},
    ///备注 
    {(char *)"Memo", (getter)PyCThostFtdcPositionProfitAlgorithmField_get_Memo, (setter)PyCThostFtdcPositionProfitAlgorithmField_set_Memo, (char *)"Memo", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcPositionProfitAlgorithmField_get_CurrencyID, (setter)PyCThostFtdcPositionProfitAlgorithmField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcPositionProfitAlgorithmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcPositionProfitAlgorithmField",	/* tp_name */
	sizeof(PyCThostFtdcPositionProfitAlgorithmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcPositionProfitAlgorithmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcPositionProfitAlgorithmField_repr,   /* tp_repr */
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
	"CThostFtdcPositionProfitAlgorithmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcPositionProfitAlgorithmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcPositionProfitAlgorithmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcPositionProfitAlgorithmField_new,       /* tp_new */
};

int PyCThostFtdcPositionProfitAlgorithmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcPositionProfitAlgorithmField  */
	if (PyType_Ready(&PyCThostFtdcPositionProfitAlgorithmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcPositionProfitAlgorithmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcPositionProfitAlgorithmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcPositionProfitAlgorithmField", (PyObject *)&PyCThostFtdcPositionProfitAlgorithmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcPositionProfitAlgorithmField to module");
        Py_DECREF(&PyCThostFtdcPositionProfitAlgorithmFieldType);
		return -1;
    }

    return 0;
}
