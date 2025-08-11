
#include "PyCThostFtdcBrokerUserRightAssignField.h"



static PyObject *PyCThostFtdcBrokerUserRightAssignField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserRightAssignField *self = (PyCThostFtdcBrokerUserRightAssignField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserRightAssignField_init(PyCThostFtdcBrokerUserRightAssignField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "DRIdentityID", "Tradeable",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerUserRightAssignField_BrokerID = NULL;
	Py_ssize_t pBrokerUserRightAssignField_BrokerID_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pBrokerUserRightAssignField_DRIdentityID = 0;

	//TThostFtdcBoolType int
	int pBrokerUserRightAssignField_Tradeable = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#ii", (char **)kwlist
#endif

		, &pBrokerUserRightAssignField_BrokerID, &pBrokerUserRightAssignField_BrokerID_len
		, &pBrokerUserRightAssignField_DRIdentityID
		, &pBrokerUserRightAssignField_Tradeable


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerUserRightAssignField_BrokerID != NULL) {
		if(pBrokerUserRightAssignField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerUserRightAssignField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerUserRightAssignField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerUserRightAssignField_BrokerID = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pBrokerUserRightAssignField_DRIdentityID;

	//TThostFtdcBoolType int
	self->data.Tradeable = pBrokerUserRightAssignField_Tradeable;



    return 0;
}

static void PyCThostFtdcBrokerUserRightAssignField_dealloc(PyCThostFtdcBrokerUserRightAssignField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserRightAssignField_repr(PyCThostFtdcBrokerUserRightAssignField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "DRIdentityID", self->data.DRIdentityID
		, "Tradeable", self->data.Tradeable


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserRightAssignField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerUserRightAssignField_get_BrokerID(PyCThostFtdcBrokerUserRightAssignField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerUserRightAssignField_get_DRIdentityID(PyCThostFtdcBrokerUserRightAssignField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcBrokerUserRightAssignField_get_Tradeable(PyCThostFtdcBrokerUserRightAssignField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Tradeable);
#else 
	return PyInt_FromLong(self->data.Tradeable);
#endif 
}

static int PyCThostFtdcBrokerUserRightAssignField_set_BrokerID(PyCThostFtdcBrokerUserRightAssignField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserRightAssignField_set_DRIdentityID(PyCThostFtdcBrokerUserRightAssignField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserRightAssignField_set_Tradeable(PyCThostFtdcBrokerUserRightAssignField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Tradeable Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Tradeable Expected int"); 
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
    self->data.Tradeable = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcBrokerUserRightAssignField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserRightAssignField_get_BrokerID, (setter)PyCThostFtdcBrokerUserRightAssignField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcBrokerUserRightAssignField_get_DRIdentityID, (setter)PyCThostFtdcBrokerUserRightAssignField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"Tradeable", (getter)PyCThostFtdcBrokerUserRightAssignField_get_Tradeable, (setter)PyCThostFtdcBrokerUserRightAssignField_set_Tradeable, (char *)"Tradeable", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserRightAssignFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserRightAssignField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserRightAssignField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserRightAssignField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserRightAssignField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerUserRightAssignField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserRightAssignField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserRightAssignField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserRightAssignField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserRightAssignFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserRightAssignField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserRightAssignFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserRightAssignField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserRightAssignFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserRightAssignField", (PyObject *)&PyCThostFtdcBrokerUserRightAssignFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserRightAssignField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserRightAssignFieldType);
		return -1;
    }

    return 0;
}
