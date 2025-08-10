
#include "PyCThostFtdcSecAgentCheckModeField.h"

///二级代理商资金校验模式

static PyObject *PyCThostFtdcSecAgentCheckModeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSecAgentCheckModeField *self = (PyCThostFtdcSecAgentCheckModeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSecAgentCheckModeField_init(PyCThostFtdcSecAgentCheckModeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "CurrencyID", "BrokerSecAgentID", "CheckSelfAccount",  NULL};


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SecAgentCheckModeField_InvestorID = NULL;
    Py_ssize_t SecAgentCheckModeField_InvestorID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SecAgentCheckModeField_BrokerID = NULL;
    Py_ssize_t SecAgentCheckModeField_BrokerID_len = 0;
            
    ///币种
    // TThostFtdcCurrencyIDType char[4]
    const char *SecAgentCheckModeField_CurrencyID = NULL;
    Py_ssize_t SecAgentCheckModeField_CurrencyID_len = 0;
            
    ///境外中介机构资金帐号
    // TThostFtdcAccountIDType char[13]
    const char *SecAgentCheckModeField_BrokerSecAgentID = NULL;
    Py_ssize_t SecAgentCheckModeField_BrokerSecAgentID_len = 0;
            
    ///是否需要校验自己的资金账户
    // TThostFtdcBoolType int
    int SecAgentCheckModeField_CheckSelfAccount = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#i", (char **)kwlist
#endif

        , &SecAgentCheckModeField_InvestorID, &SecAgentCheckModeField_InvestorID_len 
        , &SecAgentCheckModeField_BrokerID, &SecAgentCheckModeField_BrokerID_len 
        , &SecAgentCheckModeField_CurrencyID, &SecAgentCheckModeField_CurrencyID_len 
        , &SecAgentCheckModeField_BrokerSecAgentID, &SecAgentCheckModeField_BrokerSecAgentID_len 
        , &SecAgentCheckModeField_CheckSelfAccount 


    )) {
        return -1;
    }


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SecAgentCheckModeField_InvestorID != NULL ) {
        if(SecAgentCheckModeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SecAgentCheckModeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SecAgentCheckModeField_InvestorID, SecAgentCheckModeField_InvestorID_len);        
        strncpy(self->data.InvestorID, SecAgentCheckModeField_InvestorID, sizeof(self->data.InvestorID) );
        SecAgentCheckModeField_InvestorID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SecAgentCheckModeField_BrokerID != NULL ) {
        if(SecAgentCheckModeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SecAgentCheckModeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SecAgentCheckModeField_BrokerID, SecAgentCheckModeField_BrokerID_len);        
        strncpy(self->data.BrokerID, SecAgentCheckModeField_BrokerID, sizeof(self->data.BrokerID) );
        SecAgentCheckModeField_BrokerID = NULL;
    }
            
    ///币种
    // TThostFtdcCurrencyIDType char[4]
    if( SecAgentCheckModeField_CurrencyID != NULL ) {
        if(SecAgentCheckModeField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", SecAgentCheckModeField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, SecAgentCheckModeField_CurrencyID, SecAgentCheckModeField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, SecAgentCheckModeField_CurrencyID, sizeof(self->data.CurrencyID) );
        SecAgentCheckModeField_CurrencyID = NULL;
    }
            
    ///境外中介机构资金帐号
    // TThostFtdcAccountIDType char[13]
    if( SecAgentCheckModeField_BrokerSecAgentID != NULL ) {
        if(SecAgentCheckModeField_BrokerSecAgentID_len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
            PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is %zd)", SecAgentCheckModeField_BrokerSecAgentID_len, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
            return -1;
        }
        // memset(self->data.BrokerSecAgentID, 0, sizeof(self->data.BrokerSecAgentID));
        // memcpy(self->data.BrokerSecAgentID, SecAgentCheckModeField_BrokerSecAgentID, SecAgentCheckModeField_BrokerSecAgentID_len);        
        strncpy(self->data.BrokerSecAgentID, SecAgentCheckModeField_BrokerSecAgentID, sizeof(self->data.BrokerSecAgentID) );
        SecAgentCheckModeField_BrokerSecAgentID = NULL;
    }
            
    ///是否需要校验自己的资金账户
    // TThostFtdcBoolType int
    self->data.CheckSelfAccount = SecAgentCheckModeField_CheckSelfAccount;
        

    return 0;
}

static void PyCThostFtdcSecAgentCheckModeField_dealloc(PyCThostFtdcSecAgentCheckModeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSecAgentCheckModeField_repr(PyCThostFtdcSecAgentCheckModeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i}"
#endif

        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"BrokerSecAgentID", self->data.BrokerSecAgentID//, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID) 
        ,"CheckSelfAccount", self->data.CheckSelfAccount 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentCheckModeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSecAgentCheckModeField_get_InvestorID(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSecAgentCheckModeField_set_InvestorID(PyCThostFtdcSecAgentCheckModeField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSecAgentCheckModeField_get_BrokerID(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSecAgentCheckModeField_set_BrokerID(PyCThostFtdcSecAgentCheckModeField *self, PyObject* val, void *closure) {
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
            
///币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSecAgentCheckModeField_get_CurrencyID(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSecAgentCheckModeField_set_CurrencyID(PyCThostFtdcSecAgentCheckModeField *self, PyObject* val, void *closure) {
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
            
///境外中介机构资金帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcSecAgentCheckModeField_get_BrokerSecAgentID(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerSecAgentID, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
    return PyBytes_FromString(self->data.BrokerSecAgentID);
}

///境外中介机构资金帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcSecAgentCheckModeField_set_BrokerSecAgentID(PyCThostFtdcSecAgentCheckModeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BrokerSecAgentID, 0, sizeof(self->data.BrokerSecAgentID));
    // memcpy(self->data.BrokerSecAgentID, buf, len);
    strncpy(self->data.BrokerSecAgentID, buf, sizeof(self->data.BrokerSecAgentID));
    return 0;
}
            
///是否需要校验自己的资金账户
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSecAgentCheckModeField_get_CheckSelfAccount(PyCThostFtdcSecAgentCheckModeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CheckSelfAccount);
#else
    return PyInt_FromLong(self->data.CheckSelfAccount);
#endif
}

///是否需要校验自己的资金账户
// TThostFtdcBoolType int
static int PyCThostFtdcSecAgentCheckModeField_set_CheckSelfAccount(PyCThostFtdcSecAgentCheckModeField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CheckSelfAccount Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CheckSelfAccount Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the CheckSelfAccount value out of range for C int");
        return -1;
    }
    self->data.CheckSelfAccount = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSecAgentCheckModeField_getset[] = {
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSecAgentCheckModeField_get_InvestorID, (setter)PyCThostFtdcSecAgentCheckModeField_set_InvestorID, (char *)"InvestorID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSecAgentCheckModeField_get_BrokerID, (setter)PyCThostFtdcSecAgentCheckModeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///币种 
    {(char *)"CurrencyID", (getter)PyCThostFtdcSecAgentCheckModeField_get_CurrencyID, (setter)PyCThostFtdcSecAgentCheckModeField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///境外中介机构资金帐号 
    {(char *)"BrokerSecAgentID", (getter)PyCThostFtdcSecAgentCheckModeField_get_BrokerSecAgentID, (setter)PyCThostFtdcSecAgentCheckModeField_set_BrokerSecAgentID, (char *)"BrokerSecAgentID", NULL},
    ///是否需要校验自己的资金账户 
    {(char *)"CheckSelfAccount", (getter)PyCThostFtdcSecAgentCheckModeField_get_CheckSelfAccount, (setter)PyCThostFtdcSecAgentCheckModeField_set_CheckSelfAccount, (char *)"CheckSelfAccount", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSecAgentCheckModeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSecAgentCheckModeField",	/* tp_name */
	sizeof(PyCThostFtdcSecAgentCheckModeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSecAgentCheckModeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSecAgentCheckModeField_repr,   /* tp_repr */
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
	"CThostFtdcSecAgentCheckModeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSecAgentCheckModeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSecAgentCheckModeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSecAgentCheckModeField_new,       /* tp_new */
};

int PyCThostFtdcSecAgentCheckModeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSecAgentCheckModeField  */
	if (PyType_Ready(&PyCThostFtdcSecAgentCheckModeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSecAgentCheckModeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSecAgentCheckModeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSecAgentCheckModeField", (PyObject *)&PyCThostFtdcSecAgentCheckModeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSecAgentCheckModeField to module");
        Py_DECREF(&PyCThostFtdcSecAgentCheckModeFieldType);
		return -1;
    }

    return 0;
}
