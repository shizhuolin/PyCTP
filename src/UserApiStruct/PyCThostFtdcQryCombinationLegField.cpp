
#include "PyCThostFtdcQryCombinationLegField.h"



static PyObject *PyCThostFtdcQryCombinationLegField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryCombinationLegField *self = (PyCThostFtdcQryCombinationLegField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryCombinationLegField_init(PyCThostFtdcQryCombinationLegField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "LegID", "reserve2", "CombInstrumentID", "LegInstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryCombinationLegField_reserve1 = NULL;
	Py_ssize_t pQryCombinationLegField_reserve1_len = 0;

	//TThostFtdcLegIDType int
	int pQryCombinationLegField_LegID = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryCombinationLegField_reserve2 = NULL;
	Py_ssize_t pQryCombinationLegField_reserve2_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryCombinationLegField_CombInstrumentID = NULL;
	Py_ssize_t pQryCombinationLegField_CombInstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryCombinationLegField_LegInstrumentID = NULL;
	Py_ssize_t pQryCombinationLegField_LegInstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#s#s#", (char **)kwlist
#endif

		, &pQryCombinationLegField_reserve1, &pQryCombinationLegField_reserve1_len
		, &pQryCombinationLegField_LegID
		, &pQryCombinationLegField_reserve2, &pQryCombinationLegField_reserve2_len
		, &pQryCombinationLegField_CombInstrumentID, &pQryCombinationLegField_CombInstrumentID_len
		, &pQryCombinationLegField_LegInstrumentID, &pQryCombinationLegField_LegInstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryCombinationLegField_reserve1 != NULL) {
		if(pQryCombinationLegField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryCombinationLegField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryCombinationLegField_reserve1, sizeof(self->data.reserve1) );
		pQryCombinationLegField_reserve1 = NULL;
	}

	//TThostFtdcLegIDType int
	self->data.LegID = pQryCombinationLegField_LegID;

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryCombinationLegField_reserve2 != NULL) {
		if(pQryCombinationLegField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pQryCombinationLegField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pQryCombinationLegField_reserve2, sizeof(self->data.reserve2) );
		pQryCombinationLegField_reserve2 = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryCombinationLegField_CombInstrumentID != NULL) {
		if(pQryCombinationLegField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pQryCombinationLegField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pQryCombinationLegField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pQryCombinationLegField_CombInstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryCombinationLegField_LegInstrumentID != NULL) {
		if(pQryCombinationLegField_LegInstrumentID_len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is %zd)", pQryCombinationLegField_LegInstrumentID_len, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
			return -1;
		}
		strncpy(self->data.LegInstrumentID, pQryCombinationLegField_LegInstrumentID, sizeof(self->data.LegInstrumentID) );
		pQryCombinationLegField_LegInstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryCombinationLegField_dealloc(PyCThostFtdcQryCombinationLegField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryCombinationLegField_repr(PyCThostFtdcQryCombinationLegField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "LegID", self->data.LegID
		, "reserve2", self->data.reserve2 
		, "CombInstrumentID", self->data.CombInstrumentID 
		, "LegInstrumentID", self->data.LegInstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombinationLegField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryCombinationLegField_get_reserve1(PyCThostFtdcQryCombinationLegField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryCombinationLegField_get_LegID(PyCThostFtdcQryCombinationLegField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegID);
#else 
	return PyInt_FromLong(self->data.LegID);
#endif 
}

static PyObject *PyCThostFtdcQryCombinationLegField_get_reserve2(PyCThostFtdcQryCombinationLegField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcQryCombinationLegField_get_CombInstrumentID(PyCThostFtdcQryCombinationLegField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static PyObject *PyCThostFtdcQryCombinationLegField_get_LegInstrumentID(PyCThostFtdcQryCombinationLegField *self, void *closure) {
	return PyBytes_FromString(self->data.LegInstrumentID);
}

static int PyCThostFtdcQryCombinationLegField_set_reserve1(PyCThostFtdcQryCombinationLegField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcQryCombinationLegField_set_LegID(PyCThostFtdcQryCombinationLegField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LegID Expected int"); 
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
    self->data.LegID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQryCombinationLegField_set_reserve2(PyCThostFtdcQryCombinationLegField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcQryCombinationLegField_set_CombInstrumentID(PyCThostFtdcQryCombinationLegField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
	return 0;
}

static int PyCThostFtdcQryCombinationLegField_set_LegInstrumentID(PyCThostFtdcQryCombinationLegField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.LegInstrumentID, buf, sizeof(self->data.LegInstrumentID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryCombinationLegField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcQryCombinationLegField_get_reserve1, (setter)PyCThostFtdcQryCombinationLegField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"LegID", (getter)PyCThostFtdcQryCombinationLegField_get_LegID, (setter)PyCThostFtdcQryCombinationLegField_set_LegID, (char *)"LegID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcQryCombinationLegField_get_reserve2, (setter)PyCThostFtdcQryCombinationLegField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcQryCombinationLegField_get_CombInstrumentID, (setter)PyCThostFtdcQryCombinationLegField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
	 {(char *)"LegInstrumentID", (getter)PyCThostFtdcQryCombinationLegField_get_LegInstrumentID, (setter)PyCThostFtdcQryCombinationLegField_set_LegInstrumentID, (char *)"LegInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryCombinationLegFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryCombinationLegField",	/* tp_name */
	sizeof(PyCThostFtdcQryCombinationLegField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryCombinationLegField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryCombinationLegField_repr,   /* tp_repr */
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
	"CThostFtdcQryCombinationLegField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryCombinationLegField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryCombinationLegField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryCombinationLegField_new,       /* tp_new */
};

int PyCThostFtdcQryCombinationLegFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryCombinationLegField  */
	if (PyType_Ready(&PyCThostFtdcQryCombinationLegFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryCombinationLegField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryCombinationLegFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryCombinationLegField", (PyObject *)&PyCThostFtdcQryCombinationLegFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCombinationLegField to module");
        Py_DECREF(&PyCThostFtdcQryCombinationLegFieldType);
		return -1;
    }

    return 0;
}
