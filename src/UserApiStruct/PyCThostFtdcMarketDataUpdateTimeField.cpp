
#include "PyCThostFtdcMarketDataUpdateTimeField.h"



static PyObject *PyCThostFtdcMarketDataUpdateTimeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataUpdateTimeField *self = (PyCThostFtdcMarketDataUpdateTimeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataUpdateTimeField_init(PyCThostFtdcMarketDataUpdateTimeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "UpdateTime", "UpdateMillisec", "ActionDay", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pMarketDataUpdateTimeField_reserve1 = NULL;
	Py_ssize_t pMarketDataUpdateTimeField_reserve1_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pMarketDataUpdateTimeField_UpdateTime = NULL;
	Py_ssize_t pMarketDataUpdateTimeField_UpdateTime_len = 0;

	//TThostFtdcMillisecType int
	int pMarketDataUpdateTimeField_UpdateMillisec = 0;

	//TThostFtdcDateType char[9]
	const char *pMarketDataUpdateTimeField_ActionDay = NULL;
	Py_ssize_t pMarketDataUpdateTimeField_ActionDay_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pMarketDataUpdateTimeField_InstrumentID = NULL;
	Py_ssize_t pMarketDataUpdateTimeField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#s#", (char **)kwlist
#endif

		, &pMarketDataUpdateTimeField_reserve1, &pMarketDataUpdateTimeField_reserve1_len
		, &pMarketDataUpdateTimeField_UpdateTime, &pMarketDataUpdateTimeField_UpdateTime_len
		, &pMarketDataUpdateTimeField_UpdateMillisec
		, &pMarketDataUpdateTimeField_ActionDay, &pMarketDataUpdateTimeField_ActionDay_len
		, &pMarketDataUpdateTimeField_InstrumentID, &pMarketDataUpdateTimeField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pMarketDataUpdateTimeField_reserve1 != NULL) {
		if(pMarketDataUpdateTimeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pMarketDataUpdateTimeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pMarketDataUpdateTimeField_reserve1, sizeof(self->data.reserve1) );
		pMarketDataUpdateTimeField_reserve1 = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pMarketDataUpdateTimeField_UpdateTime != NULL) {
		if(pMarketDataUpdateTimeField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
			PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", pMarketDataUpdateTimeField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
			return -1;
		}
		strncpy(self->data.UpdateTime, pMarketDataUpdateTimeField_UpdateTime, sizeof(self->data.UpdateTime) );
		pMarketDataUpdateTimeField_UpdateTime = NULL;
	}

	//TThostFtdcMillisecType int
	self->data.UpdateMillisec = pMarketDataUpdateTimeField_UpdateMillisec;

	//TThostFtdcDateType char[9]
	if(pMarketDataUpdateTimeField_ActionDay != NULL) {
		if(pMarketDataUpdateTimeField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
			PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", pMarketDataUpdateTimeField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
			return -1;
		}
		strncpy(self->data.ActionDay, pMarketDataUpdateTimeField_ActionDay, sizeof(self->data.ActionDay) );
		pMarketDataUpdateTimeField_ActionDay = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pMarketDataUpdateTimeField_InstrumentID != NULL) {
		if(pMarketDataUpdateTimeField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pMarketDataUpdateTimeField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pMarketDataUpdateTimeField_InstrumentID, sizeof(self->data.InstrumentID) );
		pMarketDataUpdateTimeField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcMarketDataUpdateTimeField_dealloc(PyCThostFtdcMarketDataUpdateTimeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataUpdateTimeField_repr(PyCThostFtdcMarketDataUpdateTimeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "UpdateTime", self->data.UpdateTime 
		, "UpdateMillisec", self->data.UpdateMillisec
		, "ActionDay", self->data.ActionDay 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataUpdateTimeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMarketDataUpdateTimeField_get_reserve1(PyCThostFtdcMarketDataUpdateTimeField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcMarketDataUpdateTimeField_get_UpdateTime(PyCThostFtdcMarketDataUpdateTimeField *self, void *closure) {
	return PyBytes_FromString(self->data.UpdateTime);
}

static PyObject *PyCThostFtdcMarketDataUpdateTimeField_get_UpdateMillisec(PyCThostFtdcMarketDataUpdateTimeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UpdateMillisec);
#else 
	return PyInt_FromLong(self->data.UpdateMillisec);
#endif 
}

static PyObject *PyCThostFtdcMarketDataUpdateTimeField_get_ActionDay(PyCThostFtdcMarketDataUpdateTimeField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDay);
}

static PyObject *PyCThostFtdcMarketDataUpdateTimeField_get_InstrumentID(PyCThostFtdcMarketDataUpdateTimeField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcMarketDataUpdateTimeField_set_reserve1(PyCThostFtdcMarketDataUpdateTimeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarketDataUpdateTimeField_set_UpdateTime(PyCThostFtdcMarketDataUpdateTimeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
		PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.UpdateTime, buf, sizeof(self->data.UpdateTime));
	return 0;
}

static int PyCThostFtdcMarketDataUpdateTimeField_set_UpdateMillisec(PyCThostFtdcMarketDataUpdateTimeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpdateMillisec Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "UpdateMillisec Expected int"); 
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
    self->data.UpdateMillisec = (int)buf; 
    return 0; 
}

static int PyCThostFtdcMarketDataUpdateTimeField_set_ActionDay(PyCThostFtdcMarketDataUpdateTimeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarketDataUpdateTimeField_set_InstrumentID(PyCThostFtdcMarketDataUpdateTimeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}



static PyGetSetDef PyCThostFtdcMarketDataUpdateTimeField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcMarketDataUpdateTimeField_get_reserve1, (setter)PyCThostFtdcMarketDataUpdateTimeField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"UpdateTime", (getter)PyCThostFtdcMarketDataUpdateTimeField_get_UpdateTime, (setter)PyCThostFtdcMarketDataUpdateTimeField_set_UpdateTime, (char *)"UpdateTime", NULL},
	 {(char *)"UpdateMillisec", (getter)PyCThostFtdcMarketDataUpdateTimeField_get_UpdateMillisec, (setter)PyCThostFtdcMarketDataUpdateTimeField_set_UpdateMillisec, (char *)"UpdateMillisec", NULL},
	 {(char *)"ActionDay", (getter)PyCThostFtdcMarketDataUpdateTimeField_get_ActionDay, (setter)PyCThostFtdcMarketDataUpdateTimeField_set_ActionDay, (char *)"ActionDay", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcMarketDataUpdateTimeField_get_InstrumentID, (setter)PyCThostFtdcMarketDataUpdateTimeField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataUpdateTimeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataUpdateTimeField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataUpdateTimeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataUpdateTimeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataUpdateTimeField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataUpdateTimeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataUpdateTimeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataUpdateTimeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataUpdateTimeField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataUpdateTimeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataUpdateTimeField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataUpdateTimeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataUpdateTimeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataUpdateTimeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataUpdateTimeField", (PyObject *)&PyCThostFtdcMarketDataUpdateTimeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataUpdateTimeField to module");
        Py_DECREF(&PyCThostFtdcMarketDataUpdateTimeFieldType);
		return -1;
    }

    return 0;
}
