
#include "PyCThostFtdcQryRCAMSInvestorCombPositionField.h"

///RCAMS策略组合持仓查询

static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRCAMSInvestorCombPositionField *self = (PyCThostFtdcQryRCAMSInvestorCombPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryRCAMSInvestorCombPositionField_init(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "CombInstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryRCAMSInvestorCombPositionField_BrokerID = NULL;
    Py_ssize_t QryRCAMSInvestorCombPositionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryRCAMSInvestorCombPositionField_InvestorID = NULL;
    Py_ssize_t QryRCAMSInvestorCombPositionField_InvestorID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryRCAMSInvestorCombPositionField_InstrumentID = NULL;
    Py_ssize_t QryRCAMSInvestorCombPositionField_InstrumentID_len = 0;
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryRCAMSInvestorCombPositionField_CombInstrumentID = NULL;
    Py_ssize_t QryRCAMSInvestorCombPositionField_CombInstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryRCAMSInvestorCombPositionField_BrokerID, &QryRCAMSInvestorCombPositionField_BrokerID_len 
        , &QryRCAMSInvestorCombPositionField_InvestorID, &QryRCAMSInvestorCombPositionField_InvestorID_len 
        , &QryRCAMSInvestorCombPositionField_InstrumentID, &QryRCAMSInvestorCombPositionField_InstrumentID_len 
        , &QryRCAMSInvestorCombPositionField_CombInstrumentID, &QryRCAMSInvestorCombPositionField_CombInstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryRCAMSInvestorCombPositionField_BrokerID != NULL ) {
        if(QryRCAMSInvestorCombPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryRCAMSInvestorCombPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryRCAMSInvestorCombPositionField_BrokerID, QryRCAMSInvestorCombPositionField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryRCAMSInvestorCombPositionField_BrokerID, sizeof(self->data.BrokerID) );
        QryRCAMSInvestorCombPositionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryRCAMSInvestorCombPositionField_InvestorID != NULL ) {
        if(QryRCAMSInvestorCombPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryRCAMSInvestorCombPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryRCAMSInvestorCombPositionField_InvestorID, QryRCAMSInvestorCombPositionField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryRCAMSInvestorCombPositionField_InvestorID, sizeof(self->data.InvestorID) );
        QryRCAMSInvestorCombPositionField_InvestorID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryRCAMSInvestorCombPositionField_InstrumentID != NULL ) {
        if(QryRCAMSInvestorCombPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryRCAMSInvestorCombPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryRCAMSInvestorCombPositionField_InstrumentID, QryRCAMSInvestorCombPositionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryRCAMSInvestorCombPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryRCAMSInvestorCombPositionField_InstrumentID = NULL;
    }
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryRCAMSInvestorCombPositionField_CombInstrumentID != NULL ) {
        if(QryRCAMSInvestorCombPositionField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", QryRCAMSInvestorCombPositionField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, QryRCAMSInvestorCombPositionField_CombInstrumentID, QryRCAMSInvestorCombPositionField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, QryRCAMSInvestorCombPositionField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        QryRCAMSInvestorCombPositionField_CombInstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryRCAMSInvestorCombPositionField_dealloc(PyCThostFtdcQryRCAMSInvestorCombPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionField_repr(PyCThostFtdcQryRCAMSInvestorCombPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"CombInstrumentID", self->data.CombInstrumentID//, (Py_ssize_t)sizeof(self->data.CombInstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSInvestorCombPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionField_get_BrokerID(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryRCAMSInvestorCombPositionField_set_BrokerID(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionField_get_InvestorID(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryRCAMSInvestorCombPositionField_set_InvestorID(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionField_get_InstrumentID(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryRCAMSInvestorCombPositionField_set_InstrumentID(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryRCAMSInvestorCombPositionField_get_CombInstrumentID(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryRCAMSInvestorCombPositionField_set_CombInstrumentID(PyCThostFtdcQryRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
    // memcpy(self->data.CombInstrumentID, buf, len);
    strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryRCAMSInvestorCombPositionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryRCAMSInvestorCombPositionField_get_BrokerID, (setter)PyCThostFtdcQryRCAMSInvestorCombPositionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryRCAMSInvestorCombPositionField_get_InvestorID, (setter)PyCThostFtdcQryRCAMSInvestorCombPositionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryRCAMSInvestorCombPositionField_get_InstrumentID, (setter)PyCThostFtdcQryRCAMSInvestorCombPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///组合合约代码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcQryRCAMSInvestorCombPositionField_get_CombInstrumentID, (setter)PyCThostFtdcQryRCAMSInvestorCombPositionField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRCAMSInvestorCombPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRCAMSInvestorCombPositionField",	/* tp_name */
	sizeof(PyCThostFtdcQryRCAMSInvestorCombPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRCAMSInvestorCombPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRCAMSInvestorCombPositionField_repr,   /* tp_repr */
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
	"CThostFtdcQryRCAMSInvestorCombPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRCAMSInvestorCombPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRCAMSInvestorCombPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRCAMSInvestorCombPositionField_new,       /* tp_new */
};

int PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRCAMSInvestorCombPositionField  */
	if (PyType_Ready(&PyCThostFtdcQryRCAMSInvestorCombPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRCAMSInvestorCombPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRCAMSInvestorCombPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSInvestorCombPositionField", (PyObject *)&PyCThostFtdcQryRCAMSInvestorCombPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSInvestorCombPositionField to module");
        Py_DECREF(&PyCThostFtdcQryRCAMSInvestorCombPositionFieldType);
		return -1;
    }

    return 0;
}
