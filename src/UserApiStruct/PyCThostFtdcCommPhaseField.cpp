
#include "PyCThostFtdcCommPhaseField.h"



static PyObject *PyCThostFtdcCommPhaseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCommPhaseField *self = (PyCThostFtdcCommPhaseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCommPhaseField_init(PyCThostFtdcCommPhaseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "CommPhaseNo", "SystemID",  NULL};

	//TThostFtdcDateType char[9]
	const char *pCommPhaseField_TradingDay = NULL;
	Py_ssize_t pCommPhaseField_TradingDay_len = 0;

	//TThostFtdcCommPhaseNoType short
	short pCommPhaseField_CommPhaseNo = 0;

	//TThostFtdcSystemIDType char[21]
	const char *pCommPhaseField_SystemID = NULL;
	Py_ssize_t pCommPhaseField_SystemID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#hy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#hs#", (char **)kwlist
#endif

		, &pCommPhaseField_TradingDay, &pCommPhaseField_TradingDay_len
		, &pCommPhaseField_CommPhaseNo
		, &pCommPhaseField_SystemID, &pCommPhaseField_SystemID_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pCommPhaseField_TradingDay != NULL) {
		if(pCommPhaseField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pCommPhaseField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pCommPhaseField_TradingDay, sizeof(self->data.TradingDay) );
		pCommPhaseField_TradingDay = NULL;
	}

	//TThostFtdcCommPhaseNoType short
	self->data.CommPhaseNo = pCommPhaseField_CommPhaseNo;

	//TThostFtdcSystemIDType char[21]
	if(pCommPhaseField_SystemID != NULL) {
		if(pCommPhaseField_SystemID_len > (Py_ssize_t)sizeof(self->data.SystemID)) {
			PyErr_Format(PyExc_ValueError, "SystemID too long: length=%zd (max allowed is %zd)", pCommPhaseField_SystemID_len, (Py_ssize_t)sizeof(self->data.SystemID));
			return -1;
		}
		strncpy(self->data.SystemID, pCommPhaseField_SystemID, sizeof(self->data.SystemID) );
		pCommPhaseField_SystemID = NULL;
	}



    return 0;
}

static void PyCThostFtdcCommPhaseField_dealloc(PyCThostFtdcCommPhaseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCommPhaseField_repr(PyCThostFtdcCommPhaseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:h,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:h,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "CommPhaseNo", self->data.CommPhaseNo
		, "SystemID", self->data.SystemID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCommPhaseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCommPhaseField_get_TradingDay(PyCThostFtdcCommPhaseField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcCommPhaseField_get_CommPhaseNo(PyCThostFtdcCommPhaseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CommPhaseNo);
#else 
	return PyInt_FromLong(self->data.CommPhaseNo);
#endif 
}

static PyObject *PyCThostFtdcCommPhaseField_get_SystemID(PyCThostFtdcCommPhaseField *self, void *closure) {
	return PyBytes_FromString(self->data.SystemID);
}

static int PyCThostFtdcCommPhaseField_set_TradingDay(PyCThostFtdcCommPhaseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
		PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
	return 0;
}

static int PyCThostFtdcCommPhaseField_set_CommPhaseNo(PyCThostFtdcCommPhaseField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommPhaseNo Expected short");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CommPhaseNo Expected short"); 
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
    if (buf < SHRT_MIN || buf > SHRT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C short"); 
        return -1; 
    } 
    self->data.CommPhaseNo = (short)buf; 
    return 0; 
}

static int PyCThostFtdcCommPhaseField_set_SystemID(PyCThostFtdcCommPhaseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SystemID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SystemID)) {
		PyErr_SetString(PyExc_ValueError, "SystemID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.SystemID, buf, sizeof(self->data.SystemID));
	return 0;
}



static PyGetSetDef PyCThostFtdcCommPhaseField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcCommPhaseField_get_TradingDay, (setter)PyCThostFtdcCommPhaseField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"CommPhaseNo", (getter)PyCThostFtdcCommPhaseField_get_CommPhaseNo, (setter)PyCThostFtdcCommPhaseField_set_CommPhaseNo, (char *)"CommPhaseNo", NULL},
	 {(char *)"SystemID", (getter)PyCThostFtdcCommPhaseField_get_SystemID, (setter)PyCThostFtdcCommPhaseField_set_SystemID, (char *)"SystemID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCommPhaseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCommPhaseField",	/* tp_name */
	sizeof(PyCThostFtdcCommPhaseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCommPhaseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCommPhaseField_repr,   /* tp_repr */
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
	"CThostFtdcCommPhaseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCommPhaseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCommPhaseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCommPhaseField_new,       /* tp_new */
};

int PyCThostFtdcCommPhaseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCommPhaseField  */
	if (PyType_Ready(&PyCThostFtdcCommPhaseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCommPhaseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCommPhaseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCommPhaseField", (PyObject *)&PyCThostFtdcCommPhaseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCommPhaseField to module");
        Py_DECREF(&PyCThostFtdcCommPhaseFieldType);
		return -1;
    }

    return 0;
}
