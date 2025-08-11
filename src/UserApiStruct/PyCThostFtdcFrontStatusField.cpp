
#include "PyCThostFtdcFrontStatusField.h"



static PyObject *PyCThostFtdcFrontStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcFrontStatusField *self = (PyCThostFtdcFrontStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcFrontStatusField_init(PyCThostFtdcFrontStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontID", "LastReportDate", "LastReportTime", "IsActive",  NULL};

	//TThostFtdcFrontIDType int
	int pFrontStatusField_FrontID = 0;

	//TThostFtdcDateType char[9]
	const char *pFrontStatusField_LastReportDate = NULL;
	Py_ssize_t pFrontStatusField_LastReportDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pFrontStatusField_LastReportTime = NULL;
	Py_ssize_t pFrontStatusField_LastReportTime_len = 0;

	//TThostFtdcBoolType int
	int pFrontStatusField_IsActive = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#s#i", (char **)kwlist
#endif

		, &pFrontStatusField_FrontID
		, &pFrontStatusField_LastReportDate, &pFrontStatusField_LastReportDate_len
		, &pFrontStatusField_LastReportTime, &pFrontStatusField_LastReportTime_len
		, &pFrontStatusField_IsActive


    )) {
        return -1;
    }

	//TThostFtdcFrontIDType int
	self->data.FrontID = pFrontStatusField_FrontID;

	//TThostFtdcDateType char[9]
	if(pFrontStatusField_LastReportDate != NULL) {
		if(pFrontStatusField_LastReportDate_len > (Py_ssize_t)sizeof(self->data.LastReportDate)) {
			PyErr_Format(PyExc_ValueError, "LastReportDate too long: length=%zd (max allowed is %zd)", pFrontStatusField_LastReportDate_len, (Py_ssize_t)sizeof(self->data.LastReportDate));
			return -1;
		}
		strncpy(self->data.LastReportDate, pFrontStatusField_LastReportDate, sizeof(self->data.LastReportDate) );
		pFrontStatusField_LastReportDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pFrontStatusField_LastReportTime != NULL) {
		if(pFrontStatusField_LastReportTime_len > (Py_ssize_t)sizeof(self->data.LastReportTime)) {
			PyErr_Format(PyExc_ValueError, "LastReportTime too long: length=%zd (max allowed is %zd)", pFrontStatusField_LastReportTime_len, (Py_ssize_t)sizeof(self->data.LastReportTime));
			return -1;
		}
		strncpy(self->data.LastReportTime, pFrontStatusField_LastReportTime, sizeof(self->data.LastReportTime) );
		pFrontStatusField_LastReportTime = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pFrontStatusField_IsActive;



    return 0;
}

static void PyCThostFtdcFrontStatusField_dealloc(PyCThostFtdcFrontStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcFrontStatusField_repr(PyCThostFtdcFrontStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s,s:s,s:i}"
#endif

		, "FrontID", self->data.FrontID
		, "LastReportDate", self->data.LastReportDate 
		, "LastReportTime", self->data.LastReportTime 
		, "IsActive", self->data.IsActive


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFrontStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcFrontStatusField_get_FrontID(PyCThostFtdcFrontStatusField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcFrontStatusField_get_LastReportDate(PyCThostFtdcFrontStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.LastReportDate);
}

static PyObject *PyCThostFtdcFrontStatusField_get_LastReportTime(PyCThostFtdcFrontStatusField *self, void *closure) {
	return PyBytes_FromString(self->data.LastReportTime);
}

static PyObject *PyCThostFtdcFrontStatusField_get_IsActive(PyCThostFtdcFrontStatusField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static int PyCThostFtdcFrontStatusField_set_FrontID(PyCThostFtdcFrontStatusField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int"); 
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
    self->data.FrontID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcFrontStatusField_set_LastReportDate(PyCThostFtdcFrontStatusField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LastReportDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LastReportDate)) {
		PyErr_SetString(PyExc_ValueError, "LastReportDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.LastReportDate, buf, sizeof(self->data.LastReportDate));
	return 0;
}

static int PyCThostFtdcFrontStatusField_set_LastReportTime(PyCThostFtdcFrontStatusField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LastReportTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LastReportTime)) {
		PyErr_SetString(PyExc_ValueError, "LastReportTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.LastReportTime, buf, sizeof(self->data.LastReportTime));
	return 0;
}

static int PyCThostFtdcFrontStatusField_set_IsActive(PyCThostFtdcFrontStatusField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcFrontStatusField_getset[] = {
	 {(char *)"FrontID", (getter)PyCThostFtdcFrontStatusField_get_FrontID, (setter)PyCThostFtdcFrontStatusField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"LastReportDate", (getter)PyCThostFtdcFrontStatusField_get_LastReportDate, (setter)PyCThostFtdcFrontStatusField_set_LastReportDate, (char *)"LastReportDate", NULL},
	 {(char *)"LastReportTime", (getter)PyCThostFtdcFrontStatusField_get_LastReportTime, (setter)PyCThostFtdcFrontStatusField_set_LastReportTime, (char *)"LastReportTime", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcFrontStatusField_get_IsActive, (setter)PyCThostFtdcFrontStatusField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcFrontStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcFrontStatusField",	/* tp_name */
	sizeof(PyCThostFtdcFrontStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcFrontStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcFrontStatusField_repr,   /* tp_repr */
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
	"CThostFtdcFrontStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcFrontStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcFrontStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcFrontStatusField_new,       /* tp_new */
};

int PyCThostFtdcFrontStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcFrontStatusField  */
	if (PyType_Ready(&PyCThostFtdcFrontStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcFrontStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcFrontStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcFrontStatusField", (PyObject *)&PyCThostFtdcFrontStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFrontStatusField to module");
        Py_DECREF(&PyCThostFtdcFrontStatusFieldType);
		return -1;
    }

    return 0;
}
