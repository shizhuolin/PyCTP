
#include "PyCThostFtdcUserPasswordUpdateField.h"



static PyObject *PyCThostFtdcUserPasswordUpdateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserPasswordUpdateField *self = (PyCThostFtdcUserPasswordUpdateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcUserPasswordUpdateField_init(PyCThostFtdcUserPasswordUpdateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "OldPassword", "NewPassword",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pUserPasswordUpdateField_BrokerID = NULL;
	Py_ssize_t pUserPasswordUpdateField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pUserPasswordUpdateField_UserID = NULL;
	Py_ssize_t pUserPasswordUpdateField_UserID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pUserPasswordUpdateField_OldPassword = NULL;
	Py_ssize_t pUserPasswordUpdateField_OldPassword_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pUserPasswordUpdateField_NewPassword = NULL;
	Py_ssize_t pUserPasswordUpdateField_NewPassword_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pUserPasswordUpdateField_BrokerID, &pUserPasswordUpdateField_BrokerID_len
		, &pUserPasswordUpdateField_UserID, &pUserPasswordUpdateField_UserID_len
		, &pUserPasswordUpdateField_OldPassword, &pUserPasswordUpdateField_OldPassword_len
		, &pUserPasswordUpdateField_NewPassword, &pUserPasswordUpdateField_NewPassword_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pUserPasswordUpdateField_BrokerID != NULL) {
		if(pUserPasswordUpdateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pUserPasswordUpdateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pUserPasswordUpdateField_BrokerID, sizeof(self->data.BrokerID) );
		pUserPasswordUpdateField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pUserPasswordUpdateField_UserID != NULL) {
		if(pUserPasswordUpdateField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pUserPasswordUpdateField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pUserPasswordUpdateField_UserID, sizeof(self->data.UserID) );
		pUserPasswordUpdateField_UserID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pUserPasswordUpdateField_OldPassword != NULL) {
		if(pUserPasswordUpdateField_OldPassword_len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
			PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is %zd)", pUserPasswordUpdateField_OldPassword_len, (Py_ssize_t)sizeof(self->data.OldPassword));
			return -1;
		}
		strncpy(self->data.OldPassword, pUserPasswordUpdateField_OldPassword, sizeof(self->data.OldPassword) );
		pUserPasswordUpdateField_OldPassword = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pUserPasswordUpdateField_NewPassword != NULL) {
		if(pUserPasswordUpdateField_NewPassword_len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
			PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is %zd)", pUserPasswordUpdateField_NewPassword_len, (Py_ssize_t)sizeof(self->data.NewPassword));
			return -1;
		}
		strncpy(self->data.NewPassword, pUserPasswordUpdateField_NewPassword, sizeof(self->data.NewPassword) );
		pUserPasswordUpdateField_NewPassword = NULL;
	}



    return 0;
}

static void PyCThostFtdcUserPasswordUpdateField_dealloc(PyCThostFtdcUserPasswordUpdateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserPasswordUpdateField_repr(PyCThostFtdcUserPasswordUpdateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "OldPassword", self->data.OldPassword 
		, "NewPassword", self->data.NewPassword 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserPasswordUpdateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcUserPasswordUpdateField_get_BrokerID(PyCThostFtdcUserPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcUserPasswordUpdateField_get_UserID(PyCThostFtdcUserPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcUserPasswordUpdateField_get_OldPassword(PyCThostFtdcUserPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.OldPassword);
}

static PyObject *PyCThostFtdcUserPasswordUpdateField_get_NewPassword(PyCThostFtdcUserPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.NewPassword);
}

static int PyCThostFtdcUserPasswordUpdateField_set_BrokerID(PyCThostFtdcUserPasswordUpdateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserPasswordUpdateField_set_UserID(PyCThostFtdcUserPasswordUpdateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserPasswordUpdateField_set_OldPassword(PyCThostFtdcUserPasswordUpdateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
		PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.OldPassword, buf, sizeof(self->data.OldPassword));
	return 0;
}

static int PyCThostFtdcUserPasswordUpdateField_set_NewPassword(PyCThostFtdcUserPasswordUpdateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
		PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.NewPassword, buf, sizeof(self->data.NewPassword));
	return 0;
}



static PyGetSetDef PyCThostFtdcUserPasswordUpdateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcUserPasswordUpdateField_get_BrokerID, (setter)PyCThostFtdcUserPasswordUpdateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcUserPasswordUpdateField_get_UserID, (setter)PyCThostFtdcUserPasswordUpdateField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"OldPassword", (getter)PyCThostFtdcUserPasswordUpdateField_get_OldPassword, (setter)PyCThostFtdcUserPasswordUpdateField_set_OldPassword, (char *)"OldPassword", NULL},
	 {(char *)"NewPassword", (getter)PyCThostFtdcUserPasswordUpdateField_get_NewPassword, (setter)PyCThostFtdcUserPasswordUpdateField_set_NewPassword, (char *)"NewPassword", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserPasswordUpdateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserPasswordUpdateField",	/* tp_name */
	sizeof(PyCThostFtdcUserPasswordUpdateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserPasswordUpdateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserPasswordUpdateField_repr,   /* tp_repr */
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
	"CThostFtdcUserPasswordUpdateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserPasswordUpdateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserPasswordUpdateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserPasswordUpdateField_new,       /* tp_new */
};

int PyCThostFtdcUserPasswordUpdateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserPasswordUpdateField  */
	if (PyType_Ready(&PyCThostFtdcUserPasswordUpdateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserPasswordUpdateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserPasswordUpdateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserPasswordUpdateField", (PyObject *)&PyCThostFtdcUserPasswordUpdateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserPasswordUpdateField to module");
        Py_DECREF(&PyCThostFtdcUserPasswordUpdateFieldType);
		return -1;
    }

    return 0;
}
