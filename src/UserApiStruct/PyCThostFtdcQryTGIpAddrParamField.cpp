
#include "PyCThostFtdcQryTGIpAddrParamField.h"



static PyObject *PyCThostFtdcQryTGIpAddrParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTGIpAddrParamField *self = (PyCThostFtdcQryTGIpAddrParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryTGIpAddrParamField_init(PyCThostFtdcQryTGIpAddrParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "AppID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryTGIpAddrParamField_BrokerID = NULL;
	Py_ssize_t pQryTGIpAddrParamField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQryTGIpAddrParamField_UserID = NULL;
	Py_ssize_t pQryTGIpAddrParamField_UserID_len = 0;

	//TThostFtdcAppIDType char[33]
	const char *pQryTGIpAddrParamField_AppID = NULL;
	Py_ssize_t pQryTGIpAddrParamField_AppID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryTGIpAddrParamField_BrokerID, &pQryTGIpAddrParamField_BrokerID_len
		, &pQryTGIpAddrParamField_UserID, &pQryTGIpAddrParamField_UserID_len
		, &pQryTGIpAddrParamField_AppID, &pQryTGIpAddrParamField_AppID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryTGIpAddrParamField_BrokerID != NULL) {
		if(pQryTGIpAddrParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryTGIpAddrParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryTGIpAddrParamField_BrokerID, sizeof(self->data.BrokerID) );
		pQryTGIpAddrParamField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pQryTGIpAddrParamField_UserID != NULL) {
		if(pQryTGIpAddrParamField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pQryTGIpAddrParamField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pQryTGIpAddrParamField_UserID, sizeof(self->data.UserID) );
		pQryTGIpAddrParamField_UserID = NULL;
	}

	//TThostFtdcAppIDType char[33]
	if(pQryTGIpAddrParamField_AppID != NULL) {
		if(pQryTGIpAddrParamField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
			PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", pQryTGIpAddrParamField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
			return -1;
		}
		strncpy(self->data.AppID, pQryTGIpAddrParamField_AppID, sizeof(self->data.AppID) );
		pQryTGIpAddrParamField_AppID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryTGIpAddrParamField_dealloc(PyCThostFtdcQryTGIpAddrParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTGIpAddrParamField_repr(PyCThostFtdcQryTGIpAddrParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "AppID", self->data.AppID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTGIpAddrParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryTGIpAddrParamField_get_BrokerID(PyCThostFtdcQryTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryTGIpAddrParamField_get_UserID(PyCThostFtdcQryTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcQryTGIpAddrParamField_get_AppID(PyCThostFtdcQryTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.AppID);
}

static int PyCThostFtdcQryTGIpAddrParamField_set_BrokerID(PyCThostFtdcQryTGIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTGIpAddrParamField_set_UserID(PyCThostFtdcQryTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
		PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
	return 0;
}

static int PyCThostFtdcQryTGIpAddrParamField_set_AppID(PyCThostFtdcQryTGIpAddrParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryTGIpAddrParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryTGIpAddrParamField_get_BrokerID, (setter)PyCThostFtdcQryTGIpAddrParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcQryTGIpAddrParamField_get_UserID, (setter)PyCThostFtdcQryTGIpAddrParamField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"AppID", (getter)PyCThostFtdcQryTGIpAddrParamField_get_AppID, (setter)PyCThostFtdcQryTGIpAddrParamField_set_AppID, (char *)"AppID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTGIpAddrParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTGIpAddrParamField",	/* tp_name */
	sizeof(PyCThostFtdcQryTGIpAddrParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTGIpAddrParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTGIpAddrParamField_repr,   /* tp_repr */
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
	"CThostFtdcQryTGIpAddrParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTGIpAddrParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTGIpAddrParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTGIpAddrParamField_new,       /* tp_new */
};

int PyCThostFtdcQryTGIpAddrParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTGIpAddrParamField  */
	if (PyType_Ready(&PyCThostFtdcQryTGIpAddrParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTGIpAddrParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTGIpAddrParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTGIpAddrParamField", (PyObject *)&PyCThostFtdcQryTGIpAddrParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTGIpAddrParamField to module");
        Py_DECREF(&PyCThostFtdcQryTGIpAddrParamFieldType);
		return -1;
    }

    return 0;
}
