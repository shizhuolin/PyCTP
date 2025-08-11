
#include "PyCThostFtdcQryLocalAddrConfigField.h"



static PyObject *PyCThostFtdcQryLocalAddrConfigField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryLocalAddrConfigField *self = (PyCThostFtdcQryLocalAddrConfigField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryLocalAddrConfigField_init(PyCThostFtdcQryLocalAddrConfigField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryLocalAddrConfigField_BrokerID = NULL;
	Py_ssize_t pQryLocalAddrConfigField_BrokerID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

		, &pQryLocalAddrConfigField_BrokerID, &pQryLocalAddrConfigField_BrokerID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryLocalAddrConfigField_BrokerID != NULL) {
		if(pQryLocalAddrConfigField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryLocalAddrConfigField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryLocalAddrConfigField_BrokerID, sizeof(self->data.BrokerID) );
		pQryLocalAddrConfigField_BrokerID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryLocalAddrConfigField_dealloc(PyCThostFtdcQryLocalAddrConfigField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryLocalAddrConfigField_repr(PyCThostFtdcQryLocalAddrConfigField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

		, "BrokerID", self->data.BrokerID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLocalAddrConfigField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryLocalAddrConfigField_get_BrokerID(PyCThostFtdcQryLocalAddrConfigField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static int PyCThostFtdcQryLocalAddrConfigField_set_BrokerID(PyCThostFtdcQryLocalAddrConfigField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryLocalAddrConfigField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryLocalAddrConfigField_get_BrokerID, (setter)PyCThostFtdcQryLocalAddrConfigField_set_BrokerID, (char *)"BrokerID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryLocalAddrConfigFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryLocalAddrConfigField",	/* tp_name */
	sizeof(PyCThostFtdcQryLocalAddrConfigField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryLocalAddrConfigField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryLocalAddrConfigField_repr,   /* tp_repr */
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
	"CThostFtdcQryLocalAddrConfigField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryLocalAddrConfigField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryLocalAddrConfigField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryLocalAddrConfigField_new,       /* tp_new */
};

int PyCThostFtdcQryLocalAddrConfigFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryLocalAddrConfigField  */
	if (PyType_Ready(&PyCThostFtdcQryLocalAddrConfigFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryLocalAddrConfigField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryLocalAddrConfigFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryLocalAddrConfigField", (PyObject *)&PyCThostFtdcQryLocalAddrConfigFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryLocalAddrConfigField to module");
        Py_DECREF(&PyCThostFtdcQryLocalAddrConfigFieldType);
		return -1;
    }

    return 0;
}
