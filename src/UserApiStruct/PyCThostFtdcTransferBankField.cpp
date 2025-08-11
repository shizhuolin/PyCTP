
#include "PyCThostFtdcTransferBankField.h"



static PyObject *PyCThostFtdcTransferBankField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferBankField *self = (PyCThostFtdcTransferBankField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTransferBankField_init(PyCThostFtdcTransferBankField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BankID", "BankBrchID", "BankName", "IsActive",  NULL};

	//TThostFtdcBankIDType char[4]
	const char *pTransferBankField_BankID = NULL;
	Py_ssize_t pTransferBankField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pTransferBankField_BankBrchID = NULL;
	Py_ssize_t pTransferBankField_BankBrchID_len = 0;

	//TThostFtdcBankNameType char[101]
	const char *pTransferBankField_BankName = NULL;
	Py_ssize_t pTransferBankField_BankName_len = 0;

	//TThostFtdcBoolType int
	int pTransferBankField_IsActive = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

		, &pTransferBankField_BankID, &pTransferBankField_BankID_len
		, &pTransferBankField_BankBrchID, &pTransferBankField_BankBrchID_len
		, &pTransferBankField_BankName, &pTransferBankField_BankName_len
		, &pTransferBankField_IsActive


    )) {
        return -1;
    }

	//TThostFtdcBankIDType char[4]
	if(pTransferBankField_BankID != NULL) {
		if(pTransferBankField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pTransferBankField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pTransferBankField_BankID, sizeof(self->data.BankID) );
		pTransferBankField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pTransferBankField_BankBrchID != NULL) {
		if(pTransferBankField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
			PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", pTransferBankField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
			return -1;
		}
		strncpy(self->data.BankBrchID, pTransferBankField_BankBrchID, sizeof(self->data.BankBrchID) );
		pTransferBankField_BankBrchID = NULL;
	}

	//TThostFtdcBankNameType char[101]
	if(pTransferBankField_BankName != NULL) {
		if(pTransferBankField_BankName_len > (Py_ssize_t)sizeof(self->data.BankName)) {
			PyErr_Format(PyExc_ValueError, "BankName too long: length=%zd (max allowed is %zd)", pTransferBankField_BankName_len, (Py_ssize_t)sizeof(self->data.BankName));
			return -1;
		}
		strncpy(self->data.BankName, pTransferBankField_BankName, sizeof(self->data.BankName) );
		pTransferBankField_BankName = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pTransferBankField_IsActive;



    return 0;
}

static void PyCThostFtdcTransferBankField_dealloc(PyCThostFtdcTransferBankField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferBankField_repr(PyCThostFtdcTransferBankField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

		, "BankID", self->data.BankID 
		, "BankBrchID", self->data.BankBrchID 
		, "BankName", self->data.BankName 
		, "IsActive", self->data.IsActive


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTransferBankField_get_BankID(PyCThostFtdcTransferBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcTransferBankField_get_BankBrchID(PyCThostFtdcTransferBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBrchID);
}

static PyObject *PyCThostFtdcTransferBankField_get_BankName(PyCThostFtdcTransferBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BankName);
}

static PyObject *PyCThostFtdcTransferBankField_get_IsActive(PyCThostFtdcTransferBankField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static int PyCThostFtdcTransferBankField_set_BankID(PyCThostFtdcTransferBankField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankID)) {
		PyErr_SetString(PyExc_ValueError, "BankID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.BankID, buf, sizeof(self->data.BankID));
	return 0;
}

static int PyCThostFtdcTransferBankField_set_BankBrchID(PyCThostFtdcTransferBankField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
		PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.BankBrchID, buf, sizeof(self->data.BankBrchID));
	return 0;
}

static int PyCThostFtdcTransferBankField_set_BankName(PyCThostFtdcTransferBankField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankName)) {
		PyErr_SetString(PyExc_ValueError, "BankName must be less than 101 bytes");
		return -1;
	}
	strncpy(self->data.BankName, buf, sizeof(self->data.BankName));
	return 0;
}

static int PyCThostFtdcTransferBankField_set_IsActive(PyCThostFtdcTransferBankField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTransferBankField_getset[] = {
	 {(char *)"BankID", (getter)PyCThostFtdcTransferBankField_get_BankID, (setter)PyCThostFtdcTransferBankField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBrchID", (getter)PyCThostFtdcTransferBankField_get_BankBrchID, (setter)PyCThostFtdcTransferBankField_set_BankBrchID, (char *)"BankBrchID", NULL},
	 {(char *)"BankName", (getter)PyCThostFtdcTransferBankField_get_BankName, (setter)PyCThostFtdcTransferBankField_set_BankName, (char *)"BankName", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcTransferBankField_get_IsActive, (setter)PyCThostFtdcTransferBankField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferBankFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferBankField",	/* tp_name */
	sizeof(PyCThostFtdcTransferBankField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferBankField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferBankField_repr,   /* tp_repr */
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
	"CThostFtdcTransferBankField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferBankField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferBankField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferBankField_new,       /* tp_new */
};

int PyCThostFtdcTransferBankFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferBankField  */
	if (PyType_Ready(&PyCThostFtdcTransferBankFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferBankField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferBankFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferBankField", (PyObject *)&PyCThostFtdcTransferBankFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankField to module");
        Py_DECREF(&PyCThostFtdcTransferBankFieldType);
		return -1;
    }

    return 0;
}
