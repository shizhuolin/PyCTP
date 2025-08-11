
#include "PyCThostFtdcAuthIPField.h"



static PyObject *PyCThostFtdcAuthIPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAuthIPField *self = (PyCThostFtdcAuthIPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcAuthIPField_init(PyCThostFtdcAuthIPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AppID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pAuthIPField_BrokerID = NULL;
	Py_ssize_t pAuthIPField_BrokerID_len = 0;

	//TThostFtdcAppIDType char[33]
	const char *pAuthIPField_AppID = NULL;
	Py_ssize_t pAuthIPField_AppID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pAuthIPField_IPAddress = NULL;
	Py_ssize_t pAuthIPField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pAuthIPField_BrokerID, &pAuthIPField_BrokerID_len
		, &pAuthIPField_AppID, &pAuthIPField_AppID_len
		, &pAuthIPField_IPAddress, &pAuthIPField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pAuthIPField_BrokerID != NULL) {
		if(pAuthIPField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pAuthIPField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pAuthIPField_BrokerID, sizeof(self->data.BrokerID) );
		pAuthIPField_BrokerID = NULL;
	}

	//TThostFtdcAppIDType char[33]
	if(pAuthIPField_AppID != NULL) {
		if(pAuthIPField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
			PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", pAuthIPField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
			return -1;
		}
		strncpy(self->data.AppID, pAuthIPField_AppID, sizeof(self->data.AppID) );
		pAuthIPField_AppID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pAuthIPField_IPAddress != NULL) {
		if(pAuthIPField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pAuthIPField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pAuthIPField_IPAddress, sizeof(self->data.IPAddress) );
		pAuthIPField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcAuthIPField_dealloc(PyCThostFtdcAuthIPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAuthIPField_repr(PyCThostFtdcAuthIPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AppID", self->data.AppID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthIPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcAuthIPField_get_BrokerID(PyCThostFtdcAuthIPField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcAuthIPField_get_AppID(PyCThostFtdcAuthIPField *self, void *closure) {
	return PyBytes_FromString(self->data.AppID);
}

static PyObject *PyCThostFtdcAuthIPField_get_IPAddress(PyCThostFtdcAuthIPField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcAuthIPField_set_BrokerID(PyCThostFtdcAuthIPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAuthIPField_set_AppID(PyCThostFtdcAuthIPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AppID)) {
		PyErr_SetString(PyExc_ValueError, "AppID must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.AppID, buf, sizeof(self->data.AppID));
	return 0;
}

static int PyCThostFtdcAuthIPField_set_IPAddress(PyCThostFtdcAuthIPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
		PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcAuthIPField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcAuthIPField_get_BrokerID, (setter)PyCThostFtdcAuthIPField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AppID", (getter)PyCThostFtdcAuthIPField_get_AppID, (setter)PyCThostFtdcAuthIPField_set_AppID, (char *)"AppID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcAuthIPField_get_IPAddress, (setter)PyCThostFtdcAuthIPField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAuthIPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAuthIPField",	/* tp_name */
	sizeof(PyCThostFtdcAuthIPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAuthIPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAuthIPField_repr,   /* tp_repr */
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
	"CThostFtdcAuthIPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAuthIPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAuthIPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAuthIPField_new,       /* tp_new */
};

int PyCThostFtdcAuthIPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAuthIPField  */
	if (PyType_Ready(&PyCThostFtdcAuthIPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAuthIPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAuthIPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAuthIPField", (PyObject *)&PyCThostFtdcAuthIPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthIPField to module");
        Py_DECREF(&PyCThostFtdcAuthIPFieldType);
		return -1;
    }

    return 0;
}
