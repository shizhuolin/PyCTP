
#include "PyCThostFtdcQryMMOptionInstrCommRateField.h"

///做市商期权手续费率查询

static PyObject *PyCThostFtdcQryMMOptionInstrCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMMOptionInstrCommRateField *self = (PyCThostFtdcQryMMOptionInstrCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryMMOptionInstrCommRateField_init(PyCThostFtdcQryMMOptionInstrCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryMMOptionInstrCommRateField_BrokerID = NULL;
    Py_ssize_t QryMMOptionInstrCommRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryMMOptionInstrCommRateField_InvestorID = NULL;
    Py_ssize_t QryMMOptionInstrCommRateField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryMMOptionInstrCommRateField_reserve1 = NULL;
    Py_ssize_t QryMMOptionInstrCommRateField_reserve1_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryMMOptionInstrCommRateField_InstrumentID = NULL;
    Py_ssize_t QryMMOptionInstrCommRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryMMOptionInstrCommRateField_BrokerID, &QryMMOptionInstrCommRateField_BrokerID_len 
        , &QryMMOptionInstrCommRateField_InvestorID, &QryMMOptionInstrCommRateField_InvestorID_len 
        , &QryMMOptionInstrCommRateField_reserve1, &QryMMOptionInstrCommRateField_reserve1_len 
        , &QryMMOptionInstrCommRateField_InstrumentID, &QryMMOptionInstrCommRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryMMOptionInstrCommRateField_BrokerID != NULL ) {
        if(QryMMOptionInstrCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryMMOptionInstrCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryMMOptionInstrCommRateField_BrokerID, QryMMOptionInstrCommRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryMMOptionInstrCommRateField_BrokerID, sizeof(self->data.BrokerID) );
        QryMMOptionInstrCommRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryMMOptionInstrCommRateField_InvestorID != NULL ) {
        if(QryMMOptionInstrCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryMMOptionInstrCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryMMOptionInstrCommRateField_InvestorID, QryMMOptionInstrCommRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryMMOptionInstrCommRateField_InvestorID, sizeof(self->data.InvestorID) );
        QryMMOptionInstrCommRateField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryMMOptionInstrCommRateField_reserve1 != NULL ) {
        if(QryMMOptionInstrCommRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryMMOptionInstrCommRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryMMOptionInstrCommRateField_reserve1, QryMMOptionInstrCommRateField_reserve1_len);        
        strncpy(self->data.reserve1, QryMMOptionInstrCommRateField_reserve1, sizeof(self->data.reserve1) );
        QryMMOptionInstrCommRateField_reserve1 = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryMMOptionInstrCommRateField_InstrumentID != NULL ) {
        if(QryMMOptionInstrCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryMMOptionInstrCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryMMOptionInstrCommRateField_InstrumentID, QryMMOptionInstrCommRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryMMOptionInstrCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryMMOptionInstrCommRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryMMOptionInstrCommRateField_dealloc(PyCThostFtdcQryMMOptionInstrCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMMOptionInstrCommRateField_repr(PyCThostFtdcQryMMOptionInstrCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMMOptionInstrCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryMMOptionInstrCommRateField_get_BrokerID(PyCThostFtdcQryMMOptionInstrCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryMMOptionInstrCommRateField_set_BrokerID(PyCThostFtdcQryMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMMOptionInstrCommRateField_get_InvestorID(PyCThostFtdcQryMMOptionInstrCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryMMOptionInstrCommRateField_set_InvestorID(PyCThostFtdcQryMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcQryMMOptionInstrCommRateField_get_reserve1(PyCThostFtdcQryMMOptionInstrCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryMMOptionInstrCommRateField_set_reserve1(PyCThostFtdcQryMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryMMOptionInstrCommRateField_get_InstrumentID(PyCThostFtdcQryMMOptionInstrCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryMMOptionInstrCommRateField_set_InstrumentID(PyCThostFtdcQryMMOptionInstrCommRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryMMOptionInstrCommRateField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryMMOptionInstrCommRateField_get_BrokerID, (setter)PyCThostFtdcQryMMOptionInstrCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryMMOptionInstrCommRateField_get_InvestorID, (setter)PyCThostFtdcQryMMOptionInstrCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryMMOptionInstrCommRateField_get_reserve1, (setter)PyCThostFtdcQryMMOptionInstrCommRateField_set_reserve1, (char *)"reserve1", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryMMOptionInstrCommRateField_get_InstrumentID, (setter)PyCThostFtdcQryMMOptionInstrCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMMOptionInstrCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMMOptionInstrCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryMMOptionInstrCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMMOptionInstrCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMMOptionInstrCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryMMOptionInstrCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMMOptionInstrCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMMOptionInstrCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMMOptionInstrCommRateField_new,       /* tp_new */
};

int PyCThostFtdcQryMMOptionInstrCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMMOptionInstrCommRateField  */
	if (PyType_Ready(&PyCThostFtdcQryMMOptionInstrCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMMOptionInstrCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMMOptionInstrCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMMOptionInstrCommRateField", (PyObject *)&PyCThostFtdcQryMMOptionInstrCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMMOptionInstrCommRateField to module");
        Py_DECREF(&PyCThostFtdcQryMMOptionInstrCommRateFieldType);
		return -1;
    }

    return 0;
}
