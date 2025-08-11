
#include "PyCThostFtdcQryUserSessionField.h"



static PyObject *PyCThostFtdcQryUserSessionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryUserSessionField *self = (PyCThostFtdcQryUserSessionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryUserSessionField_init(PyCThostFtdcQryUserSessionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontID", "SessionID", "BrokerID", "UserID",  NULL};

	//TThostFtdcFrontIDType int
	int pQryUserSessionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pQryUserSessionField_SessionID = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pQryUserSessionField_BrokerID = NULL;
	Py_ssize_t pQryUserSessionField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQryUserSessionField_UserID = NULL;
	Py_ssize_t pQryUserSessionField_UserID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#s#", (char **)kwlist
#endif

		, &pQryUserSessionField_FrontID
		, &pQryUserSessionField_SessionID
		, &pQryUserSessionField_BrokerID, &pQryUserSessionField_BrokerID_len
		, &pQryUserSessionField_UserID, &pQryUserSessionField_UserID_len


    )) {
        return -1;
    }

	//TThostFtdcFrontIDType int
	self->data.FrontID = pQryUserSessionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pQryUserSessionField_SessionID;

	//TThostFtdcBrokerIDType char[11]
	if(pQryUserSessionField_BrokerID != NULL) {
		if(pQryUserSessionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryUserSessionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryUserSessionField_BrokerID, sizeof(self->data.BrokerID) );
		pQryUserSessionField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pQryUserSessionField_UserID != NULL) {
		if(pQryUserSessionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pQryUserSessionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pQryUserSessionField_UserID, sizeof(self->data.UserID) );
		pQryUserSessionField_UserID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryUserSessionField_dealloc(PyCThostFtdcQryUserSessionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryUserSessionField_repr(PyCThostFtdcQryUserSessionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:s}"
#endif

		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryUserSessionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryUserSessionField_get_FrontID(PyCThostFtdcQryUserSessionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcQryUserSessionField_get_SessionID(PyCThostFtdcQryUserSessionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcQryUserSessionField_get_BrokerID(PyCThostFtdcQryUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryUserSessionField_get_UserID(PyCThostFtdcQryUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static int PyCThostFtdcQryUserSessionField_set_FrontID(PyCThostFtdcQryUserSessionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.FrontID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQryUserSessionField_set_SessionID(PyCThostFtdcQryUserSessionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.SessionID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQryUserSessionField_set_BrokerID(PyCThostFtdcQryUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryUserSessionField_set_UserID(PyCThostFtdcQryUserSessionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryUserSessionField_getset[] = {
	 {(char *)"FrontID", (getter)PyCThostFtdcQryUserSessionField_get_FrontID, (setter)PyCThostFtdcQryUserSessionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcQryUserSessionField_get_SessionID, (setter)PyCThostFtdcQryUserSessionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryUserSessionField_get_BrokerID, (setter)PyCThostFtdcQryUserSessionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcQryUserSessionField_get_UserID, (setter)PyCThostFtdcQryUserSessionField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryUserSessionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryUserSessionField",	/* tp_name */
	sizeof(PyCThostFtdcQryUserSessionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryUserSessionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryUserSessionField_repr,   /* tp_repr */
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
	"CThostFtdcQryUserSessionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryUserSessionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryUserSessionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryUserSessionField_new,       /* tp_new */
};

int PyCThostFtdcQryUserSessionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryUserSessionField  */
	if (PyType_Ready(&PyCThostFtdcQryUserSessionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryUserSessionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryUserSessionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryUserSessionField", (PyObject *)&PyCThostFtdcQryUserSessionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryUserSessionField to module");
        Py_DECREF(&PyCThostFtdcQryUserSessionFieldType);
		return -1;
    }

    return 0;
}
