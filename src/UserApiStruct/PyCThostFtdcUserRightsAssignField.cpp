
#include "PyCThostFtdcUserRightsAssignField.h"



static PyObject *PyCThostFtdcUserRightsAssignField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserRightsAssignField *self = (PyCThostFtdcUserRightsAssignField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcUserRightsAssignField_init(PyCThostFtdcUserRightsAssignField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "DRIdentityID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pUserRightsAssignField_BrokerID = NULL;
	Py_ssize_t pUserRightsAssignField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pUserRightsAssignField_UserID = NULL;
	Py_ssize_t pUserRightsAssignField_UserID_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pUserRightsAssignField_DRIdentityID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#i", (char **)kwlist
#endif

		, &pUserRightsAssignField_BrokerID, &pUserRightsAssignField_BrokerID_len
		, &pUserRightsAssignField_UserID, &pUserRightsAssignField_UserID_len
		, &pUserRightsAssignField_DRIdentityID


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pUserRightsAssignField_BrokerID != NULL) {
		if(pUserRightsAssignField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pUserRightsAssignField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pUserRightsAssignField_BrokerID, sizeof(self->data.BrokerID) );
		pUserRightsAssignField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pUserRightsAssignField_UserID != NULL) {
		if(pUserRightsAssignField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pUserRightsAssignField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pUserRightsAssignField_UserID, sizeof(self->data.UserID) );
		pUserRightsAssignField_UserID = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pUserRightsAssignField_DRIdentityID;



    return 0;
}

static void PyCThostFtdcUserRightsAssignField_dealloc(PyCThostFtdcUserRightsAssignField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserRightsAssignField_repr(PyCThostFtdcUserRightsAssignField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "DRIdentityID", self->data.DRIdentityID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserRightsAssignField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcUserRightsAssignField_get_BrokerID(PyCThostFtdcUserRightsAssignField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcUserRightsAssignField_get_UserID(PyCThostFtdcUserRightsAssignField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcUserRightsAssignField_get_DRIdentityID(PyCThostFtdcUserRightsAssignField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static int PyCThostFtdcUserRightsAssignField_set_BrokerID(PyCThostFtdcUserRightsAssignField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserRightsAssignField_set_UserID(PyCThostFtdcUserRightsAssignField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserRightsAssignField_set_DRIdentityID(PyCThostFtdcUserRightsAssignField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcUserRightsAssignField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcUserRightsAssignField_get_BrokerID, (setter)PyCThostFtdcUserRightsAssignField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcUserRightsAssignField_get_UserID, (setter)PyCThostFtdcUserRightsAssignField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcUserRightsAssignField_get_DRIdentityID, (setter)PyCThostFtdcUserRightsAssignField_set_DRIdentityID, (char *)"DRIdentityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserRightsAssignFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserRightsAssignField",	/* tp_name */
	sizeof(PyCThostFtdcUserRightsAssignField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserRightsAssignField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserRightsAssignField_repr,   /* tp_repr */
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
	"CThostFtdcUserRightsAssignField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserRightsAssignField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserRightsAssignField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserRightsAssignField_new,       /* tp_new */
};

int PyCThostFtdcUserRightsAssignFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserRightsAssignField  */
	if (PyType_Ready(&PyCThostFtdcUserRightsAssignFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserRightsAssignField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserRightsAssignFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserRightsAssignField", (PyObject *)&PyCThostFtdcUserRightsAssignFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserRightsAssignField to module");
        Py_DECREF(&PyCThostFtdcUserRightsAssignFieldType);
		return -1;
    }

    return 0;
}
