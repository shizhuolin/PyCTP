
#include "PyCThostFtdcQryInstrumentOrderCommRateField.h"

///报单手续费率查询

static PyObject *PyCThostFtdcQryInstrumentOrderCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInstrumentOrderCommRateField *self = (PyCThostFtdcQryInstrumentOrderCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInstrumentOrderCommRateField_init(PyCThostFtdcQryInstrumentOrderCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInstrumentOrderCommRateField_BrokerID = NULL;
    Py_ssize_t QryInstrumentOrderCommRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInstrumentOrderCommRateField_InvestorID = NULL;
    Py_ssize_t QryInstrumentOrderCommRateField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryInstrumentOrderCommRateField_reserve1 = NULL;
    Py_ssize_t QryInstrumentOrderCommRateField_reserve1_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInstrumentOrderCommRateField_InstrumentID = NULL;
    Py_ssize_t QryInstrumentOrderCommRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryInstrumentOrderCommRateField_BrokerID, &QryInstrumentOrderCommRateField_BrokerID_len 
        , &QryInstrumentOrderCommRateField_InvestorID, &QryInstrumentOrderCommRateField_InvestorID_len 
        , &QryInstrumentOrderCommRateField_reserve1, &QryInstrumentOrderCommRateField_reserve1_len 
        , &QryInstrumentOrderCommRateField_InstrumentID, &QryInstrumentOrderCommRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInstrumentOrderCommRateField_BrokerID != NULL ) {
        if(QryInstrumentOrderCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInstrumentOrderCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInstrumentOrderCommRateField_BrokerID, QryInstrumentOrderCommRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInstrumentOrderCommRateField_BrokerID, sizeof(self->data.BrokerID) );
        QryInstrumentOrderCommRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInstrumentOrderCommRateField_InvestorID != NULL ) {
        if(QryInstrumentOrderCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInstrumentOrderCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInstrumentOrderCommRateField_InvestorID, QryInstrumentOrderCommRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInstrumentOrderCommRateField_InvestorID, sizeof(self->data.InvestorID) );
        QryInstrumentOrderCommRateField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryInstrumentOrderCommRateField_reserve1 != NULL ) {
        if(QryInstrumentOrderCommRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryInstrumentOrderCommRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryInstrumentOrderCommRateField_reserve1, QryInstrumentOrderCommRateField_reserve1_len);        
        strncpy(self->data.reserve1, QryInstrumentOrderCommRateField_reserve1, sizeof(self->data.reserve1) );
        QryInstrumentOrderCommRateField_reserve1 = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryInstrumentOrderCommRateField_InstrumentID != NULL ) {
        if(QryInstrumentOrderCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryInstrumentOrderCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryInstrumentOrderCommRateField_InstrumentID, QryInstrumentOrderCommRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryInstrumentOrderCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryInstrumentOrderCommRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInstrumentOrderCommRateField_dealloc(PyCThostFtdcQryInstrumentOrderCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInstrumentOrderCommRateField_repr(PyCThostFtdcQryInstrumentOrderCommRateField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentOrderCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInstrumentOrderCommRateField_get_BrokerID(PyCThostFtdcQryInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInstrumentOrderCommRateField_set_BrokerID(PyCThostFtdcQryInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentOrderCommRateField_get_InvestorID(PyCThostFtdcQryInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInstrumentOrderCommRateField_set_InvestorID(PyCThostFtdcQryInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentOrderCommRateField_get_reserve1(PyCThostFtdcQryInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryInstrumentOrderCommRateField_set_reserve1(PyCThostFtdcQryInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentOrderCommRateField_get_InstrumentID(PyCThostFtdcQryInstrumentOrderCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInstrumentOrderCommRateField_set_InstrumentID(PyCThostFtdcQryInstrumentOrderCommRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryInstrumentOrderCommRateField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInstrumentOrderCommRateField_get_BrokerID, (setter)PyCThostFtdcQryInstrumentOrderCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInstrumentOrderCommRateField_get_InvestorID, (setter)PyCThostFtdcQryInstrumentOrderCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryInstrumentOrderCommRateField_get_reserve1, (setter)PyCThostFtdcQryInstrumentOrderCommRateField_set_reserve1, (char *)"reserve1", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryInstrumentOrderCommRateField_get_InstrumentID, (setter)PyCThostFtdcQryInstrumentOrderCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInstrumentOrderCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInstrumentOrderCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryInstrumentOrderCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInstrumentOrderCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInstrumentOrderCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryInstrumentOrderCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInstrumentOrderCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInstrumentOrderCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInstrumentOrderCommRateField_new,       /* tp_new */
};

int PyCThostFtdcQryInstrumentOrderCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInstrumentOrderCommRateField  */
	if (PyType_Ready(&PyCThostFtdcQryInstrumentOrderCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInstrumentOrderCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInstrumentOrderCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentOrderCommRateField", (PyObject *)&PyCThostFtdcQryInstrumentOrderCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentOrderCommRateField to module");
        Py_DECREF(&PyCThostFtdcQryInstrumentOrderCommRateFieldType);
		return -1;
    }

    return 0;
}
