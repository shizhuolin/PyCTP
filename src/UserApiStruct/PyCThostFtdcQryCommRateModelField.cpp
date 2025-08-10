
#include "PyCThostFtdcQryCommRateModelField.h"

///请求查询投资者手续费率模板

static PyObject *PyCThostFtdcQryCommRateModelField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryCommRateModelField *self = (PyCThostFtdcQryCommRateModelField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryCommRateModelField_init(PyCThostFtdcQryCommRateModelField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "CommModelID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryCommRateModelField_BrokerID = NULL;
    Py_ssize_t QryCommRateModelField_BrokerID_len = 0;
            
    ///手续费率模板代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryCommRateModelField_CommModelID = NULL;
    Py_ssize_t QryCommRateModelField_CommModelID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QryCommRateModelField_BrokerID, &QryCommRateModelField_BrokerID_len 
        , &QryCommRateModelField_CommModelID, &QryCommRateModelField_CommModelID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryCommRateModelField_BrokerID != NULL ) {
        if(QryCommRateModelField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryCommRateModelField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryCommRateModelField_BrokerID, QryCommRateModelField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryCommRateModelField_BrokerID, sizeof(self->data.BrokerID) );
        QryCommRateModelField_BrokerID = NULL;
    }
            
    ///手续费率模板代码
    // TThostFtdcInvestorIDType char[13]
    if( QryCommRateModelField_CommModelID != NULL ) {
        if(QryCommRateModelField_CommModelID_len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
            PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is %zd)", QryCommRateModelField_CommModelID_len, (Py_ssize_t)sizeof(self->data.CommModelID));
            return -1;
        }
        // memset(self->data.CommModelID, 0, sizeof(self->data.CommModelID));
        // memcpy(self->data.CommModelID, QryCommRateModelField_CommModelID, QryCommRateModelField_CommModelID_len);        
        strncpy(self->data.CommModelID, QryCommRateModelField_CommModelID, sizeof(self->data.CommModelID) );
        QryCommRateModelField_CommModelID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryCommRateModelField_dealloc(PyCThostFtdcQryCommRateModelField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryCommRateModelField_repr(PyCThostFtdcQryCommRateModelField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"CommModelID", self->data.CommModelID//, (Py_ssize_t)sizeof(self->data.CommModelID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCommRateModelField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryCommRateModelField_get_BrokerID(PyCThostFtdcQryCommRateModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryCommRateModelField_set_BrokerID(PyCThostFtdcQryCommRateModelField *self, PyObject* val, void *closure) {
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
            
///手续费率模板代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcQryCommRateModelField_get_CommModelID(PyCThostFtdcQryCommRateModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommModelID, (Py_ssize_t)sizeof(self->data.CommModelID));
    return PyBytes_FromString(self->data.CommModelID);
}

///手续费率模板代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryCommRateModelField_set_CommModelID(PyCThostFtdcQryCommRateModelField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
        PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.CommModelID, 0, sizeof(self->data.CommModelID));
    // memcpy(self->data.CommModelID, buf, len);
    strncpy(self->data.CommModelID, buf, sizeof(self->data.CommModelID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryCommRateModelField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryCommRateModelField_get_BrokerID, (setter)PyCThostFtdcQryCommRateModelField_set_BrokerID, (char *)"BrokerID", NULL},
    ///手续费率模板代码 
    {(char *)"CommModelID", (getter)PyCThostFtdcQryCommRateModelField_get_CommModelID, (setter)PyCThostFtdcQryCommRateModelField_set_CommModelID, (char *)"CommModelID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryCommRateModelFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryCommRateModelField",	/* tp_name */
	sizeof(PyCThostFtdcQryCommRateModelField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryCommRateModelField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryCommRateModelField_repr,   /* tp_repr */
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
	"CThostFtdcQryCommRateModelField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryCommRateModelField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryCommRateModelField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryCommRateModelField_new,       /* tp_new */
};

int PyCThostFtdcQryCommRateModelFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryCommRateModelField  */
	if (PyType_Ready(&PyCThostFtdcQryCommRateModelFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryCommRateModelField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryCommRateModelFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryCommRateModelField", (PyObject *)&PyCThostFtdcQryCommRateModelFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCommRateModelField to module");
        Py_DECREF(&PyCThostFtdcQryCommRateModelFieldType);
		return -1;
    }

    return 0;
}
