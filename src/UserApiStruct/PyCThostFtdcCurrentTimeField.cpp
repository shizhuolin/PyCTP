
#include "PyCThostFtdcCurrentTimeField.h"



static PyObject *PyCThostFtdcCurrentTimeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCurrentTimeField *self = (PyCThostFtdcCurrentTimeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCurrentTimeField_init(PyCThostFtdcCurrentTimeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CurrDate", "CurrTime", "CurrMillisec", "ActionDay",  NULL};

	//TThostFtdcDateType char[9]
	const char *pCurrentTimeField_CurrDate = NULL;
	Py_ssize_t pCurrentTimeField_CurrDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pCurrentTimeField_CurrTime = NULL;
	Py_ssize_t pCurrentTimeField_CurrTime_len = 0;

	//TThostFtdcMillisecType int
	int pCurrentTimeField_CurrMillisec = 0;

	//TThostFtdcDateType char[9]
	const char *pCurrentTimeField_ActionDay = NULL;
	Py_ssize_t pCurrentTimeField_ActionDay_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#", (char **)kwlist
#endif

		, &pCurrentTimeField_CurrDate, &pCurrentTimeField_CurrDate_len
		, &pCurrentTimeField_CurrTime, &pCurrentTimeField_CurrTime_len
		, &pCurrentTimeField_CurrMillisec
		, &pCurrentTimeField_ActionDay, &pCurrentTimeField_ActionDay_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pCurrentTimeField_CurrDate != NULL) {
		if(pCurrentTimeField_CurrDate_len > (Py_ssize_t)sizeof(self->data.CurrDate)) {
			PyErr_Format(PyExc_ValueError, "CurrDate too long: length=%zd (max allowed is %zd)", pCurrentTimeField_CurrDate_len, (Py_ssize_t)sizeof(self->data.CurrDate));
			return -1;
		}
		strncpy(self->data.CurrDate, pCurrentTimeField_CurrDate, sizeof(self->data.CurrDate) );
		pCurrentTimeField_CurrDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pCurrentTimeField_CurrTime != NULL) {
		if(pCurrentTimeField_CurrTime_len > (Py_ssize_t)sizeof(self->data.CurrTime)) {
			PyErr_Format(PyExc_ValueError, "CurrTime too long: length=%zd (max allowed is %zd)", pCurrentTimeField_CurrTime_len, (Py_ssize_t)sizeof(self->data.CurrTime));
			return -1;
		}
		strncpy(self->data.CurrTime, pCurrentTimeField_CurrTime, sizeof(self->data.CurrTime) );
		pCurrentTimeField_CurrTime = NULL;
	}

	//TThostFtdcMillisecType int
	self->data.CurrMillisec = pCurrentTimeField_CurrMillisec;

	//TThostFtdcDateType char[9]
	if(pCurrentTimeField_ActionDay != NULL) {
		if(pCurrentTimeField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
			PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", pCurrentTimeField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
			return -1;
		}
		strncpy(self->data.ActionDay, pCurrentTimeField_ActionDay, sizeof(self->data.ActionDay) );
		pCurrentTimeField_ActionDay = NULL;
	}



    return 0;
}

static void PyCThostFtdcCurrentTimeField_dealloc(PyCThostFtdcCurrentTimeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCurrentTimeField_repr(PyCThostFtdcCurrentTimeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s}"
#endif

		, "CurrDate", self->data.CurrDate 
		, "CurrTime", self->data.CurrTime 
		, "CurrMillisec", self->data.CurrMillisec
		, "ActionDay", self->data.ActionDay 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrentTimeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCurrentTimeField_get_CurrDate(PyCThostFtdcCurrentTimeField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrDate);
}

static PyObject *PyCThostFtdcCurrentTimeField_get_CurrTime(PyCThostFtdcCurrentTimeField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrTime);
}

static PyObject *PyCThostFtdcCurrentTimeField_get_CurrMillisec(PyCThostFtdcCurrentTimeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CurrMillisec);
#else 
	return PyInt_FromLong(self->data.CurrMillisec);
#endif 
}

static PyObject *PyCThostFtdcCurrentTimeField_get_ActionDay(PyCThostFtdcCurrentTimeField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDay);
}

static int PyCThostFtdcCurrentTimeField_set_CurrDate(PyCThostFtdcCurrentTimeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrDate)) {
		PyErr_SetString(PyExc_ValueError, "CurrDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CurrDate, buf, sizeof(self->data.CurrDate));
	return 0;
}

static int PyCThostFtdcCurrentTimeField_set_CurrTime(PyCThostFtdcCurrentTimeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrTime)) {
		PyErr_SetString(PyExc_ValueError, "CurrTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CurrTime, buf, sizeof(self->data.CurrTime));
	return 0;
}

static int PyCThostFtdcCurrentTimeField_set_CurrMillisec(PyCThostFtdcCurrentTimeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrMillisec Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CurrMillisec Expected int"); 
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
    self->data.CurrMillisec = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCurrentTimeField_set_ActionDay(PyCThostFtdcCurrentTimeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
		PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActionDay, buf, sizeof(self->data.ActionDay));
	return 0;
}



static PyGetSetDef PyCThostFtdcCurrentTimeField_getset[] = {
	 {(char *)"CurrDate", (getter)PyCThostFtdcCurrentTimeField_get_CurrDate, (setter)PyCThostFtdcCurrentTimeField_set_CurrDate, (char *)"CurrDate", NULL},
	 {(char *)"CurrTime", (getter)PyCThostFtdcCurrentTimeField_get_CurrTime, (setter)PyCThostFtdcCurrentTimeField_set_CurrTime, (char *)"CurrTime", NULL},
	 {(char *)"CurrMillisec", (getter)PyCThostFtdcCurrentTimeField_get_CurrMillisec, (setter)PyCThostFtdcCurrentTimeField_set_CurrMillisec, (char *)"CurrMillisec", NULL},
	 {(char *)"ActionDay", (getter)PyCThostFtdcCurrentTimeField_get_ActionDay, (setter)PyCThostFtdcCurrentTimeField_set_ActionDay, (char *)"ActionDay", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCurrentTimeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCurrentTimeField",	/* tp_name */
	sizeof(PyCThostFtdcCurrentTimeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCurrentTimeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCurrentTimeField_repr,   /* tp_repr */
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
	"CThostFtdcCurrentTimeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCurrentTimeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCurrentTimeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCurrentTimeField_new,       /* tp_new */
};

int PyCThostFtdcCurrentTimeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCurrentTimeField  */
	if (PyType_Ready(&PyCThostFtdcCurrentTimeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCurrentTimeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCurrentTimeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCurrentTimeField", (PyObject *)&PyCThostFtdcCurrentTimeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCurrentTimeField to module");
        Py_DECREF(&PyCThostFtdcCurrentTimeFieldType);
		return -1;
    }

    return 0;
}
