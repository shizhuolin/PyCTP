
#include "PyCThostFtdcTradingAccountPasswordUpdateV1Field.h"

///资金账户口令变更域

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountPasswordUpdateV1Field *self = (PyCThostFtdcTradingAccountPasswordUpdateV1Field *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_init(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OldPassword", "NewPassword",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingAccountPasswordUpdateV1Field_BrokerID = NULL;
    Py_ssize_t TradingAccountPasswordUpdateV1Field_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *TradingAccountPasswordUpdateV1Field_InvestorID = NULL;
    Py_ssize_t TradingAccountPasswordUpdateV1Field_InvestorID_len = 0;
            
    ///原来的口令
    // TThostFtdcPasswordType char[41]
    const char *TradingAccountPasswordUpdateV1Field_OldPassword = NULL;
    Py_ssize_t TradingAccountPasswordUpdateV1Field_OldPassword_len = 0;
            
    ///新的口令
    // TThostFtdcPasswordType char[41]
    const char *TradingAccountPasswordUpdateV1Field_NewPassword = NULL;
    Py_ssize_t TradingAccountPasswordUpdateV1Field_NewPassword_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &TradingAccountPasswordUpdateV1Field_BrokerID, &TradingAccountPasswordUpdateV1Field_BrokerID_len 
        , &TradingAccountPasswordUpdateV1Field_InvestorID, &TradingAccountPasswordUpdateV1Field_InvestorID_len 
        , &TradingAccountPasswordUpdateV1Field_OldPassword, &TradingAccountPasswordUpdateV1Field_OldPassword_len 
        , &TradingAccountPasswordUpdateV1Field_NewPassword, &TradingAccountPasswordUpdateV1Field_NewPassword_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingAccountPasswordUpdateV1Field_BrokerID != NULL ) {
        if(TradingAccountPasswordUpdateV1Field_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateV1Field_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingAccountPasswordUpdateV1Field_BrokerID, TradingAccountPasswordUpdateV1Field_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingAccountPasswordUpdateV1Field_BrokerID, sizeof(self->data.BrokerID) );
        TradingAccountPasswordUpdateV1Field_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( TradingAccountPasswordUpdateV1Field_InvestorID != NULL ) {
        if(TradingAccountPasswordUpdateV1Field_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateV1Field_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, TradingAccountPasswordUpdateV1Field_InvestorID, TradingAccountPasswordUpdateV1Field_InvestorID_len);        
        strncpy(self->data.InvestorID, TradingAccountPasswordUpdateV1Field_InvestorID, sizeof(self->data.InvestorID) );
        TradingAccountPasswordUpdateV1Field_InvestorID = NULL;
    }
            
    ///原来的口令
    // TThostFtdcPasswordType char[41]
    if( TradingAccountPasswordUpdateV1Field_OldPassword != NULL ) {
        if(TradingAccountPasswordUpdateV1Field_OldPassword_len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateV1Field_OldPassword_len, (Py_ssize_t)sizeof(self->data.OldPassword));
            return -1;
        }
        // memset(self->data.OldPassword, 0, sizeof(self->data.OldPassword));
        // memcpy(self->data.OldPassword, TradingAccountPasswordUpdateV1Field_OldPassword, TradingAccountPasswordUpdateV1Field_OldPassword_len);        
        strncpy(self->data.OldPassword, TradingAccountPasswordUpdateV1Field_OldPassword, sizeof(self->data.OldPassword) );
        TradingAccountPasswordUpdateV1Field_OldPassword = NULL;
    }
            
    ///新的口令
    // TThostFtdcPasswordType char[41]
    if( TradingAccountPasswordUpdateV1Field_NewPassword != NULL ) {
        if(TradingAccountPasswordUpdateV1Field_NewPassword_len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateV1Field_NewPassword_len, (Py_ssize_t)sizeof(self->data.NewPassword));
            return -1;
        }
        // memset(self->data.NewPassword, 0, sizeof(self->data.NewPassword));
        // memcpy(self->data.NewPassword, TradingAccountPasswordUpdateV1Field_NewPassword, TradingAccountPasswordUpdateV1Field_NewPassword_len);        
        strncpy(self->data.NewPassword, TradingAccountPasswordUpdateV1Field_NewPassword, sizeof(self->data.NewPassword) );
        TradingAccountPasswordUpdateV1Field_NewPassword = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradingAccountPasswordUpdateV1Field_dealloc(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_repr(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OldPassword", self->data.OldPassword//, (Py_ssize_t)sizeof(self->data.OldPassword) 
        ,"NewPassword", self->data.NewPassword//, (Py_ssize_t)sizeof(self->data.NewPassword) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateV1Field representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_InvestorID(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_InvestorID(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, PyObject* val, void *closure) {
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
            
///原来的口令
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OldPassword, (Py_ssize_t)sizeof(self->data.OldPassword));
    return PyBytes_FromString(self->data.OldPassword);
}

///原来的口令
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
        PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.OldPassword, 0, sizeof(self->data.OldPassword));
    // memcpy(self->data.OldPassword, buf, len);
    strncpy(self->data.OldPassword, buf, sizeof(self->data.OldPassword));
    return 0;
}
            
///新的口令
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NewPassword, (Py_ssize_t)sizeof(self->data.NewPassword));
    return PyBytes_FromString(self->data.NewPassword);
}

///新的口令
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
        PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.NewPassword, 0, sizeof(self->data.NewPassword));
    // memcpy(self->data.NewPassword, buf, len);
    strncpy(self->data.NewPassword, buf, sizeof(self->data.NewPassword));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateV1Field_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_BrokerID, (setter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_InvestorID, (setter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_InvestorID, (char *)"InvestorID", NULL},
    ///原来的口令 
    {(char *)"OldPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_OldPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_OldPassword, (char *)"OldPassword", NULL},
    ///新的口令 
    {(char *)"NewPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_NewPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_NewPassword, (char *)"NewPassword", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountPasswordUpdateV1FieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountPasswordUpdateV1Field",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountPasswordUpdateV1Field),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountPasswordUpdateV1Field_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountPasswordUpdateV1Field_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountPasswordUpdateV1Field",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountPasswordUpdateV1Field_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountPasswordUpdateV1Field_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountPasswordUpdateV1Field_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountPasswordUpdateV1Field  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountPasswordUpdateV1Field");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordUpdateV1Field", (PyObject *)&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordUpdateV1Field to module");
        Py_DECREF(&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType);
		return -1;
    }

    return 0;
}
