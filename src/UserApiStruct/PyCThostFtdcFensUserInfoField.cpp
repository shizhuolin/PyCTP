
#include "PyCThostFtdcFensUserInfoField.h"



static PyObject *PyCThostFtdcFensUserInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcFensUserInfoField *self = (PyCThostFtdcFensUserInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcFensUserInfoField_init(PyCThostFtdcFensUserInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "LoginMode",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pFensUserInfoField_BrokerID = NULL;
	Py_ssize_t pFensUserInfoField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pFensUserInfoField_UserID = NULL;
	Py_ssize_t pFensUserInfoField_UserID_len = 0;

	//TThostFtdcLoginModeType char
	char pFensUserInfoField_LoginMode = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#c", (char **)kwlist
#endif

		, &pFensUserInfoField_BrokerID, &pFensUserInfoField_BrokerID_len
		, &pFensUserInfoField_UserID, &pFensUserInfoField_UserID_len
		, &pFensUserInfoField_LoginMode


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pFensUserInfoField_BrokerID != NULL) {
		if(pFensUserInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pFensUserInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pFensUserInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pFensUserInfoField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pFensUserInfoField_UserID != NULL) {
		if(pFensUserInfoField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pFensUserInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pFensUserInfoField_UserID, sizeof(self->data.UserID) );
		pFensUserInfoField_UserID = NULL;
	}

	//TThostFtdcLoginModeType char
	self->data.LoginMode = pFensUserInfoField_LoginMode;



    return 0;
}

static void PyCThostFtdcFensUserInfoField_dealloc(PyCThostFtdcFensUserInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcFensUserInfoField_repr(PyCThostFtdcFensUserInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "LoginMode", self->data.LoginMode


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFensUserInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcFensUserInfoField_get_BrokerID(PyCThostFtdcFensUserInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcFensUserInfoField_get_UserID(PyCThostFtdcFensUserInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcFensUserInfoField_get_LoginMode(PyCThostFtdcFensUserInfoField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LoginMode), 1);
}

static int PyCThostFtdcFensUserInfoField_set_BrokerID(PyCThostFtdcFensUserInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFensUserInfoField_set_UserID(PyCThostFtdcFensUserInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFensUserInfoField_set_LoginMode(PyCThostFtdcFensUserInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LoginMode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LoginMode)) {
		PyErr_SetString(PyExc_ValueError, "LoginMode must be less than 1 bytes");
		return -1;
	}
	self->data.LoginMode = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcFensUserInfoField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcFensUserInfoField_get_BrokerID, (setter)PyCThostFtdcFensUserInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcFensUserInfoField_get_UserID, (setter)PyCThostFtdcFensUserInfoField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"LoginMode", (getter)PyCThostFtdcFensUserInfoField_get_LoginMode, (setter)PyCThostFtdcFensUserInfoField_set_LoginMode, (char *)"LoginMode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcFensUserInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcFensUserInfoField",	/* tp_name */
	sizeof(PyCThostFtdcFensUserInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcFensUserInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcFensUserInfoField_repr,   /* tp_repr */
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
	"CThostFtdcFensUserInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcFensUserInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcFensUserInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcFensUserInfoField_new,       /* tp_new */
};

int PyCThostFtdcFensUserInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcFensUserInfoField  */
	if (PyType_Ready(&PyCThostFtdcFensUserInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcFensUserInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcFensUserInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcFensUserInfoField", (PyObject *)&PyCThostFtdcFensUserInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFensUserInfoField to module");
        Py_DECREF(&PyCThostFtdcFensUserInfoFieldType);
		return -1;
    }

    return 0;
}
