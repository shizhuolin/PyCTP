
#include "PyCThostFtdcBrokerField.h"



static PyObject *PyCThostFtdcBrokerField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerField *self = (PyCThostFtdcBrokerField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerField_init(PyCThostFtdcBrokerField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BrokerAbbr", "BrokerName", "IsActive",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerField_BrokerID = NULL;
	Py_ssize_t pBrokerField_BrokerID_len = 0;

	//TThostFtdcBrokerAbbrType char[9]
	const char *pBrokerField_BrokerAbbr = NULL;
	Py_ssize_t pBrokerField_BrokerAbbr_len = 0;

	//TThostFtdcBrokerNameType char[81]
	const char *pBrokerField_BrokerName = NULL;
	Py_ssize_t pBrokerField_BrokerName_len = 0;

	//TThostFtdcBoolType int
	int pBrokerField_IsActive = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

		, &pBrokerField_BrokerID, &pBrokerField_BrokerID_len
		, &pBrokerField_BrokerAbbr, &pBrokerField_BrokerAbbr_len
		, &pBrokerField_BrokerName, &pBrokerField_BrokerName_len
		, &pBrokerField_IsActive


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerField_BrokerID != NULL) {
		if(pBrokerField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerField_BrokerID = NULL;
	}

	//TThostFtdcBrokerAbbrType char[9]
	if(pBrokerField_BrokerAbbr != NULL) {
		if(pBrokerField_BrokerAbbr_len > (Py_ssize_t)sizeof(self->data.BrokerAbbr)) {
			PyErr_Format(PyExc_ValueError, "BrokerAbbr too long: length=%zd (max allowed is %zd)", pBrokerField_BrokerAbbr_len, (Py_ssize_t)sizeof(self->data.BrokerAbbr));
			return -1;
		}
		strncpy(self->data.BrokerAbbr, pBrokerField_BrokerAbbr, sizeof(self->data.BrokerAbbr) );
		pBrokerField_BrokerAbbr = NULL;
	}

	//TThostFtdcBrokerNameType char[81]
	if(pBrokerField_BrokerName != NULL) {
		if(pBrokerField_BrokerName_len > (Py_ssize_t)sizeof(self->data.BrokerName)) {
			PyErr_Format(PyExc_ValueError, "BrokerName too long: length=%zd (max allowed is %zd)", pBrokerField_BrokerName_len, (Py_ssize_t)sizeof(self->data.BrokerName));
			return -1;
		}
		strncpy(self->data.BrokerName, pBrokerField_BrokerName, sizeof(self->data.BrokerName) );
		pBrokerField_BrokerName = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pBrokerField_IsActive;



    return 0;
}

static void PyCThostFtdcBrokerField_dealloc(PyCThostFtdcBrokerField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerField_repr(PyCThostFtdcBrokerField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "BrokerAbbr", self->data.BrokerAbbr 
		, "BrokerName", self->data.BrokerName 
		, "IsActive", self->data.IsActive


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerField_get_BrokerID(PyCThostFtdcBrokerField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerField_get_BrokerAbbr(PyCThostFtdcBrokerField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerAbbr);
}

static PyObject *PyCThostFtdcBrokerField_get_BrokerName(PyCThostFtdcBrokerField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerName);
}

static PyObject *PyCThostFtdcBrokerField_get_IsActive(PyCThostFtdcBrokerField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static int PyCThostFtdcBrokerField_set_BrokerID(PyCThostFtdcBrokerField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerField_set_BrokerAbbr(PyCThostFtdcBrokerField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerAbbr Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerAbbr)) {
		PyErr_SetString(PyExc_ValueError, "BrokerAbbr must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.BrokerAbbr, buf, sizeof(self->data.BrokerAbbr));
	return 0;
}

static int PyCThostFtdcBrokerField_set_BrokerName(PyCThostFtdcBrokerField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerName)) {
		PyErr_SetString(PyExc_ValueError, "BrokerName must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.BrokerName, buf, sizeof(self->data.BrokerName));
	return 0;
}

static int PyCThostFtdcBrokerField_set_IsActive(PyCThostFtdcBrokerField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int"); 
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
    self->data.IsActive = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcBrokerField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerField_get_BrokerID, (setter)PyCThostFtdcBrokerField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerAbbr", (getter)PyCThostFtdcBrokerField_get_BrokerAbbr, (setter)PyCThostFtdcBrokerField_set_BrokerAbbr, (char *)"BrokerAbbr", NULL},
	 {(char *)"BrokerName", (getter)PyCThostFtdcBrokerField_get_BrokerName, (setter)PyCThostFtdcBrokerField_set_BrokerName, (char *)"BrokerName", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcBrokerField_get_IsActive, (setter)PyCThostFtdcBrokerField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerField_new,       /* tp_new */
};

int PyCThostFtdcBrokerFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerField  */
	if (PyType_Ready(&PyCThostFtdcBrokerFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerField", (PyObject *)&PyCThostFtdcBrokerFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerField to module");
        Py_DECREF(&PyCThostFtdcBrokerFieldType);
		return -1;
    }

    return 0;
}
