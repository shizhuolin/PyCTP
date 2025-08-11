
#include "PyCThostFtdcCombinationLegField.h"



static PyObject *PyCThostFtdcCombinationLegField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCombinationLegField *self = (PyCThostFtdcCombinationLegField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCombinationLegField_init(PyCThostFtdcCombinationLegField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "LegID", "reserve2", "Direction", "LegMultiple", "ImplyLevel", "CombInstrumentID", "LegInstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pCombinationLegField_reserve1 = NULL;
	Py_ssize_t pCombinationLegField_reserve1_len = 0;

	//TThostFtdcLegIDType int
	int pCombinationLegField_LegID = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pCombinationLegField_reserve2 = NULL;
	Py_ssize_t pCombinationLegField_reserve2_len = 0;

	//TThostFtdcDirectionType char
	char pCombinationLegField_Direction = 0;

	//TThostFtdcLegMultipleType int
	int pCombinationLegField_LegMultiple = 0;

	//TThostFtdcImplyLevelType int
	int pCombinationLegField_ImplyLevel = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pCombinationLegField_CombInstrumentID = NULL;
	Py_ssize_t pCombinationLegField_CombInstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pCombinationLegField_LegInstrumentID = NULL;
	Py_ssize_t pCombinationLegField_LegInstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#ciiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#ciis#s#", (char **)kwlist
#endif

		, &pCombinationLegField_reserve1, &pCombinationLegField_reserve1_len
		, &pCombinationLegField_LegID
		, &pCombinationLegField_reserve2, &pCombinationLegField_reserve2_len
		, &pCombinationLegField_Direction
		, &pCombinationLegField_LegMultiple
		, &pCombinationLegField_ImplyLevel
		, &pCombinationLegField_CombInstrumentID, &pCombinationLegField_CombInstrumentID_len
		, &pCombinationLegField_LegInstrumentID, &pCombinationLegField_LegInstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pCombinationLegField_reserve1 != NULL) {
		if(pCombinationLegField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pCombinationLegField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pCombinationLegField_reserve1, sizeof(self->data.reserve1) );
		pCombinationLegField_reserve1 = NULL;
	}

	//TThostFtdcLegIDType int
	self->data.LegID = pCombinationLegField_LegID;

	//TThostFtdcOldInstrumentIDType char[31]
	if(pCombinationLegField_reserve2 != NULL) {
		if(pCombinationLegField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pCombinationLegField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pCombinationLegField_reserve2, sizeof(self->data.reserve2) );
		pCombinationLegField_reserve2 = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pCombinationLegField_Direction;

	//TThostFtdcLegMultipleType int
	self->data.LegMultiple = pCombinationLegField_LegMultiple;

	//TThostFtdcImplyLevelType int
	self->data.ImplyLevel = pCombinationLegField_ImplyLevel;

	//TThostFtdcInstrumentIDType char[81]
	if(pCombinationLegField_CombInstrumentID != NULL) {
		if(pCombinationLegField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pCombinationLegField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pCombinationLegField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pCombinationLegField_CombInstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pCombinationLegField_LegInstrumentID != NULL) {
		if(pCombinationLegField_LegInstrumentID_len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is %zd)", pCombinationLegField_LegInstrumentID_len, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
			return -1;
		}
		strncpy(self->data.LegInstrumentID, pCombinationLegField_LegInstrumentID, sizeof(self->data.LegInstrumentID) );
		pCombinationLegField_LegInstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcCombinationLegField_dealloc(PyCThostFtdcCombinationLegField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCombinationLegField_repr(PyCThostFtdcCombinationLegField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y,s:c,s:i,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s,s:c,s:i,s:i,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "LegID", self->data.LegID
		, "reserve2", self->data.reserve2 
		, "Direction", self->data.Direction
		, "LegMultiple", self->data.LegMultiple
		, "ImplyLevel", self->data.ImplyLevel
		, "CombInstrumentID", self->data.CombInstrumentID 
		, "LegInstrumentID", self->data.LegInstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombinationLegField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCombinationLegField_get_reserve1(PyCThostFtdcCombinationLegField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcCombinationLegField_get_LegID(PyCThostFtdcCombinationLegField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegID);
#else 
	return PyInt_FromLong(self->data.LegID);
#endif 
}

static PyObject *PyCThostFtdcCombinationLegField_get_reserve2(PyCThostFtdcCombinationLegField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcCombinationLegField_get_Direction(PyCThostFtdcCombinationLegField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcCombinationLegField_get_LegMultiple(PyCThostFtdcCombinationLegField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegMultiple);
#else 
	return PyInt_FromLong(self->data.LegMultiple);
#endif 
}

static PyObject *PyCThostFtdcCombinationLegField_get_ImplyLevel(PyCThostFtdcCombinationLegField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ImplyLevel);
#else 
	return PyInt_FromLong(self->data.ImplyLevel);
#endif 
}

static PyObject *PyCThostFtdcCombinationLegField_get_CombInstrumentID(PyCThostFtdcCombinationLegField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static PyObject *PyCThostFtdcCombinationLegField_get_LegInstrumentID(PyCThostFtdcCombinationLegField *self, void *closure) {
	return PyBytes_FromString(self->data.LegInstrumentID);
}

static int PyCThostFtdcCombinationLegField_set_reserve1(PyCThostFtdcCombinationLegField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombinationLegField_set_LegID(PyCThostFtdcCombinationLegField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombinationLegField_set_reserve2(PyCThostFtdcCombinationLegField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombinationLegField_set_Direction(PyCThostFtdcCombinationLegField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
		PyErr_SetString(PyExc_ValueError, "Direction must be less than 1 bytes");
		return -1;
	}
	self->data.Direction = *buf;
	return 0;
}

static int PyCThostFtdcCombinationLegField_set_LegMultiple(PyCThostFtdcCombinationLegField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected int"); 
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
    self->data.LegMultiple = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCombinationLegField_set_ImplyLevel(PyCThostFtdcCombinationLegField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ImplyLevel Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ImplyLevel Expected int"); 
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
    self->data.ImplyLevel = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCombinationLegField_set_CombInstrumentID(PyCThostFtdcCombinationLegField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombinationLegField_set_LegInstrumentID(PyCThostFtdcCombinationLegField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcCombinationLegField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcCombinationLegField_get_reserve1, (setter)PyCThostFtdcCombinationLegField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"LegID", (getter)PyCThostFtdcCombinationLegField_get_LegID, (setter)PyCThostFtdcCombinationLegField_set_LegID, (char *)"LegID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcCombinationLegField_get_reserve2, (setter)PyCThostFtdcCombinationLegField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcCombinationLegField_get_Direction, (setter)PyCThostFtdcCombinationLegField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"LegMultiple", (getter)PyCThostFtdcCombinationLegField_get_LegMultiple, (setter)PyCThostFtdcCombinationLegField_set_LegMultiple, (char *)"LegMultiple", NULL},
	 {(char *)"ImplyLevel", (getter)PyCThostFtdcCombinationLegField_get_ImplyLevel, (setter)PyCThostFtdcCombinationLegField_set_ImplyLevel, (char *)"ImplyLevel", NULL},
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcCombinationLegField_get_CombInstrumentID, (setter)PyCThostFtdcCombinationLegField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
	 {(char *)"LegInstrumentID", (getter)PyCThostFtdcCombinationLegField_get_LegInstrumentID, (setter)PyCThostFtdcCombinationLegField_set_LegInstrumentID, (char *)"LegInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCombinationLegFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCombinationLegField",	/* tp_name */
	sizeof(PyCThostFtdcCombinationLegField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCombinationLegField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCombinationLegField_repr,   /* tp_repr */
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
	"CThostFtdcCombinationLegField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCombinationLegField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCombinationLegField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCombinationLegField_new,       /* tp_new */
};

int PyCThostFtdcCombinationLegFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCombinationLegField  */
	if (PyType_Ready(&PyCThostFtdcCombinationLegFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCombinationLegField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCombinationLegFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCombinationLegField", (PyObject *)&PyCThostFtdcCombinationLegFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombinationLegField to module");
        Py_DECREF(&PyCThostFtdcCombinationLegFieldType);
		return -1;
    }

    return 0;
}
