
#include "PyCThostFtdcAppIDAuthAssignField.h"



static PyObject *PyCThostFtdcAppIDAuthAssignField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAppIDAuthAssignField *self = (PyCThostFtdcAppIDAuthAssignField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcAppIDAuthAssignField_init(PyCThostFtdcAppIDAuthAssignField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AppID", "DRIdentityID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pAppIDAuthAssignField_BrokerID = NULL;
	Py_ssize_t pAppIDAuthAssignField_BrokerID_len = 0;

	//TThostFtdcAppIDType char[33]
	const char *pAppIDAuthAssignField_AppID = NULL;
	Py_ssize_t pAppIDAuthAssignField_AppID_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pAppIDAuthAssignField_DRIdentityID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#i", (char **)kwlist
#endif

		, &pAppIDAuthAssignField_BrokerID, &pAppIDAuthAssignField_BrokerID_len
		, &pAppIDAuthAssignField_AppID, &pAppIDAuthAssignField_AppID_len
		, &pAppIDAuthAssignField_DRIdentityID


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pAppIDAuthAssignField_BrokerID != NULL) {
		if(pAppIDAuthAssignField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pAppIDAuthAssignField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pAppIDAuthAssignField_BrokerID, sizeof(self->data.BrokerID) );
		pAppIDAuthAssignField_BrokerID = NULL;
	}

	//TThostFtdcAppIDType char[33]
	if(pAppIDAuthAssignField_AppID != NULL) {
		if(pAppIDAuthAssignField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
			PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", pAppIDAuthAssignField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
			return -1;
		}
		strncpy(self->data.AppID, pAppIDAuthAssignField_AppID, sizeof(self->data.AppID) );
		pAppIDAuthAssignField_AppID = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pAppIDAuthAssignField_DRIdentityID;



    return 0;
}

static void PyCThostFtdcAppIDAuthAssignField_dealloc(PyCThostFtdcAppIDAuthAssignField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAppIDAuthAssignField_repr(PyCThostFtdcAppIDAuthAssignField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AppID", self->data.AppID 
		, "DRIdentityID", self->data.DRIdentityID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAppIDAuthAssignField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcAppIDAuthAssignField_get_BrokerID(PyCThostFtdcAppIDAuthAssignField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcAppIDAuthAssignField_get_AppID(PyCThostFtdcAppIDAuthAssignField *self, void *closure) {
	return PyBytes_FromString(self->data.AppID);
}

static PyObject *PyCThostFtdcAppIDAuthAssignField_get_DRIdentityID(PyCThostFtdcAppIDAuthAssignField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static int PyCThostFtdcAppIDAuthAssignField_set_BrokerID(PyCThostFtdcAppIDAuthAssignField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAppIDAuthAssignField_set_AppID(PyCThostFtdcAppIDAuthAssignField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAppIDAuthAssignField_set_DRIdentityID(PyCThostFtdcAppIDAuthAssignField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int"); 
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
    self->data.DRIdentityID = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcAppIDAuthAssignField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcAppIDAuthAssignField_get_BrokerID, (setter)PyCThostFtdcAppIDAuthAssignField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AppID", (getter)PyCThostFtdcAppIDAuthAssignField_get_AppID, (setter)PyCThostFtdcAppIDAuthAssignField_set_AppID, (char *)"AppID", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcAppIDAuthAssignField_get_DRIdentityID, (setter)PyCThostFtdcAppIDAuthAssignField_set_DRIdentityID, (char *)"DRIdentityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAppIDAuthAssignFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAppIDAuthAssignField",	/* tp_name */
	sizeof(PyCThostFtdcAppIDAuthAssignField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAppIDAuthAssignField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAppIDAuthAssignField_repr,   /* tp_repr */
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
	"CThostFtdcAppIDAuthAssignField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAppIDAuthAssignField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAppIDAuthAssignField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAppIDAuthAssignField_new,       /* tp_new */
};

int PyCThostFtdcAppIDAuthAssignFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAppIDAuthAssignField  */
	if (PyType_Ready(&PyCThostFtdcAppIDAuthAssignFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAppIDAuthAssignField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAppIDAuthAssignFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAppIDAuthAssignField", (PyObject *)&PyCThostFtdcAppIDAuthAssignFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAppIDAuthAssignField to module");
        Py_DECREF(&PyCThostFtdcAppIDAuthAssignFieldType);
		return -1;
    }

    return 0;
}
