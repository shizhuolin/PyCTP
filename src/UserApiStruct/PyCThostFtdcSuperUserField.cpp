
#include "PyCThostFtdcSuperUserField.h"



static PyObject *PyCThostFtdcSuperUserField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSuperUserField *self = (PyCThostFtdcSuperUserField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSuperUserField_init(PyCThostFtdcSuperUserField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"UserID", "UserName", "Password", "IsActive",  NULL};

	//TThostFtdcUserIDType char[16]
	const char *pSuperUserField_UserID = NULL;
	Py_ssize_t pSuperUserField_UserID_len = 0;

	//TThostFtdcUserNameType char[81]
	const char *pSuperUserField_UserName = NULL;
	Py_ssize_t pSuperUserField_UserName_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pSuperUserField_Password = NULL;
	Py_ssize_t pSuperUserField_Password_len = 0;

	//TThostFtdcBoolType int
	int pSuperUserField_IsActive = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

		, &pSuperUserField_UserID, &pSuperUserField_UserID_len
		, &pSuperUserField_UserName, &pSuperUserField_UserName_len
		, &pSuperUserField_Password, &pSuperUserField_Password_len
		, &pSuperUserField_IsActive


    )) {
        return -1;
    }

	//TThostFtdcUserIDType char[16]
	if(pSuperUserField_UserID != NULL) {
		if(pSuperUserField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pSuperUserField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pSuperUserField_UserID, sizeof(self->data.UserID) );
		pSuperUserField_UserID = NULL;
	}

	//TThostFtdcUserNameType char[81]
	if(pSuperUserField_UserName != NULL) {
		if(pSuperUserField_UserName_len > (Py_ssize_t)sizeof(self->data.UserName)) {
			PyErr_Format(PyExc_ValueError, "UserName too long: length=%zd (max allowed is %zd)", pSuperUserField_UserName_len, (Py_ssize_t)sizeof(self->data.UserName));
			return -1;
		}
		strncpy(self->data.UserName, pSuperUserField_UserName, sizeof(self->data.UserName) );
		pSuperUserField_UserName = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pSuperUserField_Password != NULL) {
		if(pSuperUserField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pSuperUserField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pSuperUserField_Password, sizeof(self->data.Password) );
		pSuperUserField_Password = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pSuperUserField_IsActive;



    return 0;
}

static void PyCThostFtdcSuperUserField_dealloc(PyCThostFtdcSuperUserField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSuperUserField_repr(PyCThostFtdcSuperUserField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

		, "UserID", self->data.UserID 
		, "UserName", self->data.UserName 
		, "Password", self->data.Password 
		, "IsActive", self->data.IsActive


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSuperUserField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSuperUserField_get_UserID(PyCThostFtdcSuperUserField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcSuperUserField_get_UserName(PyCThostFtdcSuperUserField *self, void *closure) {
	return PyBytes_FromString(self->data.UserName);
}

static PyObject *PyCThostFtdcSuperUserField_get_Password(PyCThostFtdcSuperUserField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcSuperUserField_get_IsActive(PyCThostFtdcSuperUserField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static int PyCThostFtdcSuperUserField_set_UserID(PyCThostFtdcSuperUserField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSuperUserField_set_UserName(PyCThostFtdcSuperUserField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserName)) {
		PyErr_SetString(PyExc_ValueError, "UserName must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.UserName, buf, sizeof(self->data.UserName));
	return 0;
}

static int PyCThostFtdcSuperUserField_set_Password(PyCThostFtdcSuperUserField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Password)) {
		PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Password, buf, sizeof(self->data.Password));
	return 0;
}

static int PyCThostFtdcSuperUserField_set_IsActive(PyCThostFtdcSuperUserField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSuperUserField_getset[] = {
	 {(char *)"UserID", (getter)PyCThostFtdcSuperUserField_get_UserID, (setter)PyCThostFtdcSuperUserField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"UserName", (getter)PyCThostFtdcSuperUserField_get_UserName, (setter)PyCThostFtdcSuperUserField_set_UserName, (char *)"UserName", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcSuperUserField_get_Password, (setter)PyCThostFtdcSuperUserField_set_Password, (char *)"Password", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcSuperUserField_get_IsActive, (setter)PyCThostFtdcSuperUserField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSuperUserFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSuperUserField",	/* tp_name */
	sizeof(PyCThostFtdcSuperUserField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSuperUserField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSuperUserField_repr,   /* tp_repr */
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
	"CThostFtdcSuperUserField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSuperUserField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSuperUserField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSuperUserField_new,       /* tp_new */
};

int PyCThostFtdcSuperUserFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSuperUserField  */
	if (PyType_Ready(&PyCThostFtdcSuperUserFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSuperUserField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSuperUserFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSuperUserField", (PyObject *)&PyCThostFtdcSuperUserFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSuperUserField to module");
        Py_DECREF(&PyCThostFtdcSuperUserFieldType);
		return -1;
    }

    return 0;
}
