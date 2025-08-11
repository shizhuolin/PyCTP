
#include "PyCThostFtdcMulticastInstrumentField.h"



static PyObject *PyCThostFtdcMulticastInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMulticastInstrumentField *self = (PyCThostFtdcMulticastInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMulticastInstrumentField_init(PyCThostFtdcMulticastInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TopicID", "reserve1", "InstrumentNo", "CodePrice", "VolumeMultiple", "PriceTick", "InstrumentID",  NULL};

	//TThostFtdcInstallIDType int
	int pMulticastInstrumentField_TopicID = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pMulticastInstrumentField_reserve1 = NULL;
	Py_ssize_t pMulticastInstrumentField_reserve1_len = 0;

	//TThostFtdcInstallIDType int
	int pMulticastInstrumentField_InstrumentNo = 0;

	//TThostFtdcPriceType double
	double pMulticastInstrumentField_CodePrice = 0.0;

	//TThostFtdcVolumeMultipleType int
	int pMulticastInstrumentField_VolumeMultiple = 0;

	//TThostFtdcPriceType double
	double pMulticastInstrumentField_PriceTick = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pMulticastInstrumentField_InstrumentID = NULL;
	Py_ssize_t pMulticastInstrumentField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#ididy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#idids#", (char **)kwlist
#endif

		, &pMulticastInstrumentField_TopicID
		, &pMulticastInstrumentField_reserve1, &pMulticastInstrumentField_reserve1_len
		, &pMulticastInstrumentField_InstrumentNo
		, &pMulticastInstrumentField_CodePrice
		, &pMulticastInstrumentField_VolumeMultiple
		, &pMulticastInstrumentField_PriceTick
		, &pMulticastInstrumentField_InstrumentID, &pMulticastInstrumentField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcInstallIDType int
	self->data.TopicID = pMulticastInstrumentField_TopicID;

	//TThostFtdcOldInstrumentIDType char[31]
	if(pMulticastInstrumentField_reserve1 != NULL) {
		if(pMulticastInstrumentField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pMulticastInstrumentField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pMulticastInstrumentField_reserve1, sizeof(self->data.reserve1) );
		pMulticastInstrumentField_reserve1 = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstrumentNo = pMulticastInstrumentField_InstrumentNo;

	//TThostFtdcPriceType double
	self->data.CodePrice = pMulticastInstrumentField_CodePrice;
	//TThostFtdcVolumeMultipleType int
	self->data.VolumeMultiple = pMulticastInstrumentField_VolumeMultiple;

	//TThostFtdcPriceType double
	self->data.PriceTick = pMulticastInstrumentField_PriceTick;
	//TThostFtdcInstrumentIDType char[81]
	if(pMulticastInstrumentField_InstrumentID != NULL) {
		if(pMulticastInstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pMulticastInstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pMulticastInstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
		pMulticastInstrumentField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcMulticastInstrumentField_dealloc(PyCThostFtdcMulticastInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMulticastInstrumentField_repr(PyCThostFtdcMulticastInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y,s:i,s:d,s:i,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s,s:i,s:d,s:i,s:d,s:s}"
#endif

		, "TopicID", self->data.TopicID
		, "reserve1", self->data.reserve1 
		, "InstrumentNo", self->data.InstrumentNo
		, "CodePrice", self->data.CodePrice
		, "VolumeMultiple", self->data.VolumeMultiple
		, "PriceTick", self->data.PriceTick
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMulticastInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMulticastInstrumentField_get_TopicID(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TopicID);
#else 
	return PyInt_FromLong(self->data.TopicID);
#endif 
}

static PyObject *PyCThostFtdcMulticastInstrumentField_get_reserve1(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcMulticastInstrumentField_get_InstrumentNo(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstrumentNo);
#else 
	return PyInt_FromLong(self->data.InstrumentNo);
#endif 
}

static PyObject *PyCThostFtdcMulticastInstrumentField_get_CodePrice(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CodePrice);
}

static PyObject *PyCThostFtdcMulticastInstrumentField_get_VolumeMultiple(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeMultiple);
#else 
	return PyInt_FromLong(self->data.VolumeMultiple);
#endif 
}

static PyObject *PyCThostFtdcMulticastInstrumentField_get_PriceTick(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PriceTick);
}

static PyObject *PyCThostFtdcMulticastInstrumentField_get_InstrumentID(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcMulticastInstrumentField_set_TopicID(PyCThostFtdcMulticastInstrumentField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TopicID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TopicID Expected int"); 
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
    self->data.TopicID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcMulticastInstrumentField_set_reserve1(PyCThostFtdcMulticastInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMulticastInstrumentField_set_InstrumentNo(PyCThostFtdcMulticastInstrumentField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "InstrumentNo Expected int"); 
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
    self->data.InstrumentNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcMulticastInstrumentField_set_CodePrice(PyCThostFtdcMulticastInstrumentField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CodePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CodePrice = buf;
    return 0;
}

static int PyCThostFtdcMulticastInstrumentField_set_VolumeMultiple(PyCThostFtdcMulticastInstrumentField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeMultiple Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "VolumeMultiple Expected int"); 
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
    self->data.VolumeMultiple = (int)buf; 
    return 0; 
}

static int PyCThostFtdcMulticastInstrumentField_set_PriceTick(PyCThostFtdcMulticastInstrumentField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PriceTick Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PriceTick = buf;
    return 0;
}

static int PyCThostFtdcMulticastInstrumentField_set_InstrumentID(PyCThostFtdcMulticastInstrumentField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcMulticastInstrumentField_getset[] = {
	 {(char *)"TopicID", (getter)PyCThostFtdcMulticastInstrumentField_get_TopicID, (setter)PyCThostFtdcMulticastInstrumentField_set_TopicID, (char *)"TopicID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcMulticastInstrumentField_get_reserve1, (setter)PyCThostFtdcMulticastInstrumentField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InstrumentNo", (getter)PyCThostFtdcMulticastInstrumentField_get_InstrumentNo, (setter)PyCThostFtdcMulticastInstrumentField_set_InstrumentNo, (char *)"InstrumentNo", NULL},
	 {(char *)"CodePrice", (getter)PyCThostFtdcMulticastInstrumentField_get_CodePrice, (setter)PyCThostFtdcMulticastInstrumentField_set_CodePrice, (char *)"CodePrice", NULL},
	 {(char *)"VolumeMultiple", (getter)PyCThostFtdcMulticastInstrumentField_get_VolumeMultiple, (setter)PyCThostFtdcMulticastInstrumentField_set_VolumeMultiple, (char *)"VolumeMultiple", NULL},
	 {(char *)"PriceTick", (getter)PyCThostFtdcMulticastInstrumentField_get_PriceTick, (setter)PyCThostFtdcMulticastInstrumentField_set_PriceTick, (char *)"PriceTick", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcMulticastInstrumentField_get_InstrumentID, (setter)PyCThostFtdcMulticastInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMulticastInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMulticastInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcMulticastInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMulticastInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMulticastInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcMulticastInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMulticastInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMulticastInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMulticastInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcMulticastInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMulticastInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcMulticastInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMulticastInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMulticastInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMulticastInstrumentField", (PyObject *)&PyCThostFtdcMulticastInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMulticastInstrumentField to module");
        Py_DECREF(&PyCThostFtdcMulticastInstrumentFieldType);
		return -1;
    }

    return 0;
}
