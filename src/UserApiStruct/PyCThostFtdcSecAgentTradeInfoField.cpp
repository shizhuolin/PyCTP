
#include "PyCThostFtdcSecAgentTradeInfoField.h"

///二级代理商信息

static PyObject *PyCThostFtdcSecAgentTradeInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSecAgentTradeInfoField *self = (PyCThostFtdcSecAgentTradeInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSecAgentTradeInfoField_init(PyCThostFtdcSecAgentTradeInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BrokerSecAgentID", "InvestorID", "LongCustomerName",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SecAgentTradeInfoField_BrokerID = NULL;
    Py_ssize_t SecAgentTradeInfoField_BrokerID_len = 0;
            
    ///境外中介机构资金帐号
    // TThostFtdcAccountIDType char[13]
    const char *SecAgentTradeInfoField_BrokerSecAgentID = NULL;
    Py_ssize_t SecAgentTradeInfoField_BrokerSecAgentID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SecAgentTradeInfoField_InvestorID = NULL;
    Py_ssize_t SecAgentTradeInfoField_InvestorID_len = 0;
            
    ///二级代理商姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *SecAgentTradeInfoField_LongCustomerName = NULL;
    Py_ssize_t SecAgentTradeInfoField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &SecAgentTradeInfoField_BrokerID, &SecAgentTradeInfoField_BrokerID_len 
        , &SecAgentTradeInfoField_BrokerSecAgentID, &SecAgentTradeInfoField_BrokerSecAgentID_len 
        , &SecAgentTradeInfoField_InvestorID, &SecAgentTradeInfoField_InvestorID_len 
        , &SecAgentTradeInfoField_LongCustomerName, &SecAgentTradeInfoField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SecAgentTradeInfoField_BrokerID != NULL ) {
        if(SecAgentTradeInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SecAgentTradeInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SecAgentTradeInfoField_BrokerID, SecAgentTradeInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, SecAgentTradeInfoField_BrokerID, sizeof(self->data.BrokerID) );
        SecAgentTradeInfoField_BrokerID = NULL;
    }
            
    ///境外中介机构资金帐号
    // TThostFtdcAccountIDType char[13]
    if( SecAgentTradeInfoField_BrokerSecAgentID != NULL ) {
        if(SecAgentTradeInfoField_BrokerSecAgentID_len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
            PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is %zd)", SecAgentTradeInfoField_BrokerSecAgentID_len, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
            return -1;
        }
        // memset(self->data.BrokerSecAgentID, 0, sizeof(self->data.BrokerSecAgentID));
        // memcpy(self->data.BrokerSecAgentID, SecAgentTradeInfoField_BrokerSecAgentID, SecAgentTradeInfoField_BrokerSecAgentID_len);        
        strncpy(self->data.BrokerSecAgentID, SecAgentTradeInfoField_BrokerSecAgentID, sizeof(self->data.BrokerSecAgentID) );
        SecAgentTradeInfoField_BrokerSecAgentID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SecAgentTradeInfoField_InvestorID != NULL ) {
        if(SecAgentTradeInfoField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SecAgentTradeInfoField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SecAgentTradeInfoField_InvestorID, SecAgentTradeInfoField_InvestorID_len);        
        strncpy(self->data.InvestorID, SecAgentTradeInfoField_InvestorID, sizeof(self->data.InvestorID) );
        SecAgentTradeInfoField_InvestorID = NULL;
    }
            
    ///二级代理商姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( SecAgentTradeInfoField_LongCustomerName != NULL ) {
        if(SecAgentTradeInfoField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", SecAgentTradeInfoField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, SecAgentTradeInfoField_LongCustomerName, SecAgentTradeInfoField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, SecAgentTradeInfoField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        SecAgentTradeInfoField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSecAgentTradeInfoField_dealloc(PyCThostFtdcSecAgentTradeInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSecAgentTradeInfoField_repr(PyCThostFtdcSecAgentTradeInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BrokerSecAgentID", self->data.BrokerSecAgentID//, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentTradeInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSecAgentTradeInfoField_get_BrokerID(PyCThostFtdcSecAgentTradeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSecAgentTradeInfoField_set_BrokerID(PyCThostFtdcSecAgentTradeInfoField *self, PyObject* val, void *closure) {
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
            
///境外中介机构资金帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcSecAgentTradeInfoField_get_BrokerSecAgentID(PyCThostFtdcSecAgentTradeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerSecAgentID, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
    return PyBytes_FromString(self->data.BrokerSecAgentID);
}

///境外中介机构资金帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcSecAgentTradeInfoField_set_BrokerSecAgentID(PyCThostFtdcSecAgentTradeInfoField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSecAgentTradeInfoField_get_InvestorID(PyCThostFtdcSecAgentTradeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSecAgentTradeInfoField_set_InvestorID(PyCThostFtdcSecAgentTradeInfoField *self, PyObject* val, void *closure) {
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
            
///二级代理商姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcSecAgentTradeInfoField_get_LongCustomerName(PyCThostFtdcSecAgentTradeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///二级代理商姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcSecAgentTradeInfoField_set_LongCustomerName(PyCThostFtdcSecAgentTradeInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 161 bytes");
        return -1;
    }
    // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
    // memcpy(self->data.LongCustomerName, buf, len);
    strncpy(self->data.LongCustomerName, buf, sizeof(self->data.LongCustomerName));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSecAgentTradeInfoField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSecAgentTradeInfoField_get_BrokerID, (setter)PyCThostFtdcSecAgentTradeInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///境外中介机构资金帐号 
    {(char *)"BrokerSecAgentID", (getter)PyCThostFtdcSecAgentTradeInfoField_get_BrokerSecAgentID, (setter)PyCThostFtdcSecAgentTradeInfoField_set_BrokerSecAgentID, (char *)"BrokerSecAgentID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSecAgentTradeInfoField_get_InvestorID, (setter)PyCThostFtdcSecAgentTradeInfoField_set_InvestorID, (char *)"InvestorID", NULL},
    ///二级代理商姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcSecAgentTradeInfoField_get_LongCustomerName, (setter)PyCThostFtdcSecAgentTradeInfoField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSecAgentTradeInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSecAgentTradeInfoField",	/* tp_name */
	sizeof(PyCThostFtdcSecAgentTradeInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSecAgentTradeInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSecAgentTradeInfoField_repr,   /* tp_repr */
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
	"CThostFtdcSecAgentTradeInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSecAgentTradeInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSecAgentTradeInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSecAgentTradeInfoField_new,       /* tp_new */
};

int PyCThostFtdcSecAgentTradeInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSecAgentTradeInfoField  */
	if (PyType_Ready(&PyCThostFtdcSecAgentTradeInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSecAgentTradeInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSecAgentTradeInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSecAgentTradeInfoField", (PyObject *)&PyCThostFtdcSecAgentTradeInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSecAgentTradeInfoField to module");
        Py_DECREF(&PyCThostFtdcSecAgentTradeInfoFieldType);
		return -1;
    }

    return 0;
}
