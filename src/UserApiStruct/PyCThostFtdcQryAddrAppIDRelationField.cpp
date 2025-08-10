
#include "PyCThostFtdcQryAddrAppIDRelationField.h"

///服务地址和AppID的关系查询

static PyObject *PyCThostFtdcQryAddrAppIDRelationField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryAddrAppIDRelationField *self = (PyCThostFtdcQryAddrAppIDRelationField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryAddrAppIDRelationField_init(PyCThostFtdcQryAddrAppIDRelationField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryAddrAppIDRelationField_BrokerID = NULL;
    Py_ssize_t QryAddrAppIDRelationField_BrokerID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QryAddrAppIDRelationField_BrokerID, &QryAddrAppIDRelationField_BrokerID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryAddrAppIDRelationField_BrokerID != NULL ) {
        if(QryAddrAppIDRelationField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryAddrAppIDRelationField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryAddrAppIDRelationField_BrokerID, QryAddrAppIDRelationField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryAddrAppIDRelationField_BrokerID, sizeof(self->data.BrokerID) );
        QryAddrAppIDRelationField_BrokerID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryAddrAppIDRelationField_dealloc(PyCThostFtdcQryAddrAppIDRelationField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryAddrAppIDRelationField_repr(PyCThostFtdcQryAddrAppIDRelationField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAddrAppIDRelationField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryAddrAppIDRelationField_get_BrokerID(PyCThostFtdcQryAddrAppIDRelationField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryAddrAppIDRelationField_set_BrokerID(PyCThostFtdcQryAddrAppIDRelationField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryAddrAppIDRelationField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryAddrAppIDRelationField_get_BrokerID, (setter)PyCThostFtdcQryAddrAppIDRelationField_set_BrokerID, (char *)"BrokerID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryAddrAppIDRelationFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryAddrAppIDRelationField",	/* tp_name */
	sizeof(PyCThostFtdcQryAddrAppIDRelationField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryAddrAppIDRelationField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryAddrAppIDRelationField_repr,   /* tp_repr */
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
	"CThostFtdcQryAddrAppIDRelationField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryAddrAppIDRelationField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryAddrAppIDRelationField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryAddrAppIDRelationField_new,       /* tp_new */
};

int PyCThostFtdcQryAddrAppIDRelationFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryAddrAppIDRelationField  */
	if (PyType_Ready(&PyCThostFtdcQryAddrAppIDRelationFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryAddrAppIDRelationField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryAddrAppIDRelationFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryAddrAppIDRelationField", (PyObject *)&PyCThostFtdcQryAddrAppIDRelationFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryAddrAppIDRelationField to module");
        Py_DECREF(&PyCThostFtdcQryAddrAppIDRelationFieldType);
		return -1;
    }

    return 0;
}
