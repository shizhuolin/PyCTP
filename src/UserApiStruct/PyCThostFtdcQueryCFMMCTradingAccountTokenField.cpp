
#include "PyCThostFtdcQueryCFMMCTradingAccountTokenField.h"

///查询监控中心用户令牌

static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQueryCFMMCTradingAccountTokenField *self = (PyCThostFtdcQueryCFMMCTradingAccountTokenField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQueryCFMMCTradingAccountTokenField_init(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InvestUnitID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QueryCFMMCTradingAccountTokenField_BrokerID = NULL;
    Py_ssize_t QueryCFMMCTradingAccountTokenField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QueryCFMMCTradingAccountTokenField_InvestorID = NULL;
    Py_ssize_t QueryCFMMCTradingAccountTokenField_InvestorID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QueryCFMMCTradingAccountTokenField_InvestUnitID = NULL;
    Py_ssize_t QueryCFMMCTradingAccountTokenField_InvestUnitID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QueryCFMMCTradingAccountTokenField_BrokerID, &QueryCFMMCTradingAccountTokenField_BrokerID_len 
        , &QueryCFMMCTradingAccountTokenField_InvestorID, &QueryCFMMCTradingAccountTokenField_InvestorID_len 
        , &QueryCFMMCTradingAccountTokenField_InvestUnitID, &QueryCFMMCTradingAccountTokenField_InvestUnitID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QueryCFMMCTradingAccountTokenField_BrokerID != NULL ) {
        if(QueryCFMMCTradingAccountTokenField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QueryCFMMCTradingAccountTokenField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QueryCFMMCTradingAccountTokenField_BrokerID, QueryCFMMCTradingAccountTokenField_BrokerID_len);        
        strncpy(self->data.BrokerID, QueryCFMMCTradingAccountTokenField_BrokerID, sizeof(self->data.BrokerID) );
        QueryCFMMCTradingAccountTokenField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QueryCFMMCTradingAccountTokenField_InvestorID != NULL ) {
        if(QueryCFMMCTradingAccountTokenField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QueryCFMMCTradingAccountTokenField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QueryCFMMCTradingAccountTokenField_InvestorID, QueryCFMMCTradingAccountTokenField_InvestorID_len);        
        strncpy(self->data.InvestorID, QueryCFMMCTradingAccountTokenField_InvestorID, sizeof(self->data.InvestorID) );
        QueryCFMMCTradingAccountTokenField_InvestorID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QueryCFMMCTradingAccountTokenField_InvestUnitID != NULL ) {
        if(QueryCFMMCTradingAccountTokenField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QueryCFMMCTradingAccountTokenField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QueryCFMMCTradingAccountTokenField_InvestUnitID, QueryCFMMCTradingAccountTokenField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QueryCFMMCTradingAccountTokenField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QueryCFMMCTradingAccountTokenField_InvestUnitID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQueryCFMMCTradingAccountTokenField_dealloc(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_repr(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryCFMMCTradingAccountTokenField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_BrokerID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_BrokerID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_InvestorID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_InvestorID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_InvestUnitID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_InvestUnitID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQueryCFMMCTradingAccountTokenField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_BrokerID, (setter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_InvestorID, (setter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_InvestUnitID, (setter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQueryCFMMCTradingAccountTokenField",	/* tp_name */
	sizeof(PyCThostFtdcQueryCFMMCTradingAccountTokenField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQueryCFMMCTradingAccountTokenField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQueryCFMMCTradingAccountTokenField_repr,   /* tp_repr */
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
	"CThostFtdcQueryCFMMCTradingAccountTokenField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQueryCFMMCTradingAccountTokenField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQueryCFMMCTradingAccountTokenField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQueryCFMMCTradingAccountTokenField_new,       /* tp_new */
};

int PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQueryCFMMCTradingAccountTokenField  */
	if (PyType_Ready(&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQueryCFMMCTradingAccountTokenField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQueryCFMMCTradingAccountTokenField", (PyObject *)&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQueryCFMMCTradingAccountTokenField to module");
        Py_DECREF(&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType);
		return -1;
    }

    return 0;
}
