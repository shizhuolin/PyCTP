
#include "PyCThostFtdcForceUserLogoutField.h"



static PyObject *PyCThostFtdcForceUserLogoutField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcForceUserLogoutField *self = (PyCThostFtdcForceUserLogoutField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcForceUserLogoutField_init(PyCThostFtdcForceUserLogoutField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pForceUserLogoutField_BrokerID = NULL;
	Py_ssize_t pForceUserLogoutField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pForceUserLogoutField_UserID = NULL;
	Py_ssize_t pForceUserLogoutField_UserID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pForceUserLogoutField_BrokerID, &pForceUserLogoutField_BrokerID_len
		, &pForceUserLogoutField_UserID, &pForceUserLogoutField_UserID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pForceUserLogoutField_BrokerID != NULL) {
		if(pForceUserLogoutField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pForceUserLogoutField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pForceUserLogoutField_BrokerID, sizeof(self->data.BrokerID) );
		pForceUserLogoutField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pForceUserLogoutField_UserID != NULL) {
		if(pForceUserLogoutField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pForceUserLogoutField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pForceUserLogoutField_UserID, sizeof(self->data.UserID) );
		pForceUserLogoutField_UserID = NULL;
	}



    return 0;
}

static void PyCThostFtdcForceUserLogoutField_dealloc(PyCThostFtdcForceUserLogoutField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcForceUserLogoutField_repr(PyCThostFtdcForceUserLogoutField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForceUserLogoutField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcForceUserLogoutField_get_BrokerID(PyCThostFtdcForceUserLogoutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcForceUserLogoutField_get_UserID(PyCThostFtdcForceUserLogoutField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static int PyCThostFtdcForceUserLogoutField_set_BrokerID(PyCThostFtdcForceUserLogoutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcForceUserLogoutField_set_UserID(PyCThostFtdcForceUserLogoutField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcForceUserLogoutField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcForceUserLogoutField_get_BrokerID, (setter)PyCThostFtdcForceUserLogoutField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcForceUserLogoutField_get_UserID, (setter)PyCThostFtdcForceUserLogoutField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcForceUserLogoutFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcForceUserLogoutField",	/* tp_name */
	sizeof(PyCThostFtdcForceUserLogoutField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcForceUserLogoutField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcForceUserLogoutField_repr,   /* tp_repr */
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
	"CThostFtdcForceUserLogoutField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcForceUserLogoutField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcForceUserLogoutField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcForceUserLogoutField_new,       /* tp_new */
};

int PyCThostFtdcForceUserLogoutFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcForceUserLogoutField  */
	if (PyType_Ready(&PyCThostFtdcForceUserLogoutFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcForceUserLogoutField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcForceUserLogoutFieldType);
    if( PyModule_AddObject(module, "CThostFtdcForceUserLogoutField", (PyObject *)&PyCThostFtdcForceUserLogoutFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForceUserLogoutField to module");
        Py_DECREF(&PyCThostFtdcForceUserLogoutFieldType);
		return -1;
    }

    return 0;
}
