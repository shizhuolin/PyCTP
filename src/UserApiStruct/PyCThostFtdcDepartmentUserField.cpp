
#include "PyCThostFtdcDepartmentUserField.h"



static PyObject *PyCThostFtdcDepartmentUserField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDepartmentUserField *self = (PyCThostFtdcDepartmentUserField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcDepartmentUserField_init(PyCThostFtdcDepartmentUserField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "InvestorRange", "InvestorID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pDepartmentUserField_BrokerID = NULL;
	Py_ssize_t pDepartmentUserField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pDepartmentUserField_UserID = NULL;
	Py_ssize_t pDepartmentUserField_UserID_len = 0;

	//TThostFtdcDepartmentRangeType char
	char pDepartmentUserField_InvestorRange = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pDepartmentUserField_InvestorID = NULL;
	Py_ssize_t pDepartmentUserField_InvestorID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#", (char **)kwlist
#endif

		, &pDepartmentUserField_BrokerID, &pDepartmentUserField_BrokerID_len
		, &pDepartmentUserField_UserID, &pDepartmentUserField_UserID_len
		, &pDepartmentUserField_InvestorRange
		, &pDepartmentUserField_InvestorID, &pDepartmentUserField_InvestorID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pDepartmentUserField_BrokerID != NULL) {
		if(pDepartmentUserField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pDepartmentUserField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pDepartmentUserField_BrokerID, sizeof(self->data.BrokerID) );
		pDepartmentUserField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pDepartmentUserField_UserID != NULL) {
		if(pDepartmentUserField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pDepartmentUserField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pDepartmentUserField_UserID, sizeof(self->data.UserID) );
		pDepartmentUserField_UserID = NULL;
	}

	//TThostFtdcDepartmentRangeType char
	self->data.InvestorRange = pDepartmentUserField_InvestorRange;

	//TThostFtdcInvestorIDType char[13]
	if(pDepartmentUserField_InvestorID != NULL) {
		if(pDepartmentUserField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pDepartmentUserField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pDepartmentUserField_InvestorID, sizeof(self->data.InvestorID) );
		pDepartmentUserField_InvestorID = NULL;
	}



    return 0;
}

static void PyCThostFtdcDepartmentUserField_dealloc(PyCThostFtdcDepartmentUserField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDepartmentUserField_repr(PyCThostFtdcDepartmentUserField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "InvestorRange", self->data.InvestorRange
		, "InvestorID", self->data.InvestorID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepartmentUserField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcDepartmentUserField_get_BrokerID(PyCThostFtdcDepartmentUserField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcDepartmentUserField_get_UserID(PyCThostFtdcDepartmentUserField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcDepartmentUserField_get_InvestorRange(PyCThostFtdcDepartmentUserField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcDepartmentUserField_get_InvestorID(PyCThostFtdcDepartmentUserField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static int PyCThostFtdcDepartmentUserField_set_BrokerID(PyCThostFtdcDepartmentUserField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepartmentUserField_set_UserID(PyCThostFtdcDepartmentUserField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepartmentUserField_set_InvestorRange(PyCThostFtdcDepartmentUserField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
		PyErr_SetString(PyExc_ValueError, "InvestorRange must be less than 1 bytes");
		return -1;
	}
	self->data.InvestorRange = *buf;
	return 0;
}

static int PyCThostFtdcDepartmentUserField_set_InvestorID(PyCThostFtdcDepartmentUserField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}



static PyGetSetDef PyCThostFtdcDepartmentUserField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcDepartmentUserField_get_BrokerID, (setter)PyCThostFtdcDepartmentUserField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcDepartmentUserField_get_UserID, (setter)PyCThostFtdcDepartmentUserField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcDepartmentUserField_get_InvestorRange, (setter)PyCThostFtdcDepartmentUserField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcDepartmentUserField_get_InvestorID, (setter)PyCThostFtdcDepartmentUserField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDepartmentUserFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDepartmentUserField",	/* tp_name */
	sizeof(PyCThostFtdcDepartmentUserField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDepartmentUserField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDepartmentUserField_repr,   /* tp_repr */
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
	"CThostFtdcDepartmentUserField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDepartmentUserField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDepartmentUserField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDepartmentUserField_new,       /* tp_new */
};

int PyCThostFtdcDepartmentUserFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDepartmentUserField  */
	if (PyType_Ready(&PyCThostFtdcDepartmentUserFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDepartmentUserField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDepartmentUserFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDepartmentUserField", (PyObject *)&PyCThostFtdcDepartmentUserFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDepartmentUserField to module");
        Py_DECREF(&PyCThostFtdcDepartmentUserFieldType);
		return -1;
    }

    return 0;
}
