
#include "PyCThostFtdcQryInvestorInfoCommRecField.h"

///投资者申报费阶梯收取记录查询

static PyObject *PyCThostFtdcQryInvestorInfoCommRecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorInfoCommRecField *self = (PyCThostFtdcQryInvestorInfoCommRecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorInfoCommRecField_init(PyCThostFtdcQryInvestorInfoCommRecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "InstrumentID", "BrokerID",  NULL};


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorInfoCommRecField_InvestorID = NULL;
    Py_ssize_t QryInvestorInfoCommRecField_InvestorID_len = 0;
            
    ///商品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInvestorInfoCommRecField_InstrumentID = NULL;
    Py_ssize_t QryInvestorInfoCommRecField_InstrumentID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorInfoCommRecField_BrokerID = NULL;
    Py_ssize_t QryInvestorInfoCommRecField_BrokerID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryInvestorInfoCommRecField_InvestorID, &QryInvestorInfoCommRecField_InvestorID_len 
        , &QryInvestorInfoCommRecField_InstrumentID, &QryInvestorInfoCommRecField_InstrumentID_len 
        , &QryInvestorInfoCommRecField_BrokerID, &QryInvestorInfoCommRecField_BrokerID_len 


    )) {
        return -1;
    }


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorInfoCommRecField_InvestorID != NULL ) {
        if(QryInvestorInfoCommRecField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorInfoCommRecField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorInfoCommRecField_InvestorID, QryInvestorInfoCommRecField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorInfoCommRecField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorInfoCommRecField_InvestorID = NULL;
    }
            
    ///商品代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryInvestorInfoCommRecField_InstrumentID != NULL ) {
        if(QryInvestorInfoCommRecField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryInvestorInfoCommRecField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryInvestorInfoCommRecField_InstrumentID, QryInvestorInfoCommRecField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryInvestorInfoCommRecField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryInvestorInfoCommRecField_InstrumentID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorInfoCommRecField_BrokerID != NULL ) {
        if(QryInvestorInfoCommRecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorInfoCommRecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorInfoCommRecField_BrokerID, QryInvestorInfoCommRecField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorInfoCommRecField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorInfoCommRecField_BrokerID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInvestorInfoCommRecField_dealloc(PyCThostFtdcQryInvestorInfoCommRecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorInfoCommRecField_repr(PyCThostFtdcQryInvestorInfoCommRecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorInfoCommRecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcQryInvestorInfoCommRecField_get_InvestorID(PyCThostFtdcQryInvestorInfoCommRecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorInfoCommRecField_set_InvestorID(PyCThostFtdcQryInvestorInfoCommRecField *self, PyObject* val, void *closure) {
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
            
///商品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryInvestorInfoCommRecField_get_InstrumentID(PyCThostFtdcQryInvestorInfoCommRecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///商品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInvestorInfoCommRecField_set_InstrumentID(PyCThostFtdcQryInvestorInfoCommRecField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInvestorInfoCommRecField_get_BrokerID(PyCThostFtdcQryInvestorInfoCommRecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorInfoCommRecField_set_BrokerID(PyCThostFtdcQryInvestorInfoCommRecField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryInvestorInfoCommRecField_getset[] = {
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorInfoCommRecField_get_InvestorID, (setter)PyCThostFtdcQryInvestorInfoCommRecField_set_InvestorID, (char *)"InvestorID", NULL},
    ///商品代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryInvestorInfoCommRecField_get_InstrumentID, (setter)PyCThostFtdcQryInvestorInfoCommRecField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorInfoCommRecField_get_BrokerID, (setter)PyCThostFtdcQryInvestorInfoCommRecField_set_BrokerID, (char *)"BrokerID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorInfoCommRecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorInfoCommRecField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorInfoCommRecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorInfoCommRecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorInfoCommRecField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorInfoCommRecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorInfoCommRecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorInfoCommRecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorInfoCommRecField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorInfoCommRecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorInfoCommRecField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorInfoCommRecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorInfoCommRecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorInfoCommRecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorInfoCommRecField", (PyObject *)&PyCThostFtdcQryInvestorInfoCommRecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorInfoCommRecField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorInfoCommRecFieldType);
		return -1;
    }

    return 0;
}
