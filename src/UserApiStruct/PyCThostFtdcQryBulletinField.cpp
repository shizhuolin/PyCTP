
#include "PyCThostFtdcQryBulletinField.h"



static PyObject *PyCThostFtdcQryBulletinField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryBulletinField *self = (PyCThostFtdcQryBulletinField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryBulletinField_init(PyCThostFtdcQryBulletinField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BulletinID", "SequenceNo", "NewsType", "NewsUrgency",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryBulletinField_ExchangeID = NULL;
	Py_ssize_t pQryBulletinField_ExchangeID_len = 0;

	//TThostFtdcBulletinIDType int
	int pQryBulletinField_BulletinID = 0;

	//TThostFtdcSequenceNoType int
	int pQryBulletinField_SequenceNo = 0;

	//TThostFtdcNewsTypeType char[3]
	const char *pQryBulletinField_NewsType = NULL;
	Py_ssize_t pQryBulletinField_NewsType_len = 0;

	//TThostFtdcNewsUrgencyType char
	char pQryBulletinField_NewsUrgency = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iiy#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#iis#c", (char **)kwlist
#endif

		, &pQryBulletinField_ExchangeID, &pQryBulletinField_ExchangeID_len
		, &pQryBulletinField_BulletinID
		, &pQryBulletinField_SequenceNo
		, &pQryBulletinField_NewsType, &pQryBulletinField_NewsType_len
		, &pQryBulletinField_NewsUrgency


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryBulletinField_ExchangeID != NULL) {
		if(pQryBulletinField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryBulletinField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryBulletinField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryBulletinField_ExchangeID = NULL;
	}

	//TThostFtdcBulletinIDType int
	self->data.BulletinID = pQryBulletinField_BulletinID;

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pQryBulletinField_SequenceNo;

	//TThostFtdcNewsTypeType char[3]
	if(pQryBulletinField_NewsType != NULL) {
		if(pQryBulletinField_NewsType_len > (Py_ssize_t)sizeof(self->data.NewsType)) {
			PyErr_Format(PyExc_ValueError, "NewsType too long: length=%zd (max allowed is %zd)", pQryBulletinField_NewsType_len, (Py_ssize_t)sizeof(self->data.NewsType));
			return -1;
		}
		strncpy(self->data.NewsType, pQryBulletinField_NewsType, sizeof(self->data.NewsType) );
		pQryBulletinField_NewsType = NULL;
	}

	//TThostFtdcNewsUrgencyType char
	self->data.NewsUrgency = pQryBulletinField_NewsUrgency;



    return 0;
}

static void PyCThostFtdcQryBulletinField_dealloc(PyCThostFtdcQryBulletinField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryBulletinField_repr(PyCThostFtdcQryBulletinField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:i,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:i,s:s,s:c}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BulletinID", self->data.BulletinID
		, "SequenceNo", self->data.SequenceNo
		, "NewsType", self->data.NewsType 
		, "NewsUrgency", self->data.NewsUrgency


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBulletinField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryBulletinField_get_ExchangeID(PyCThostFtdcQryBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryBulletinField_get_BulletinID(PyCThostFtdcQryBulletinField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BulletinID);
#else 
	return PyInt_FromLong(self->data.BulletinID);
#endif 
}

static PyObject *PyCThostFtdcQryBulletinField_get_SequenceNo(PyCThostFtdcQryBulletinField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcQryBulletinField_get_NewsType(PyCThostFtdcQryBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.NewsType);
}

static PyObject *PyCThostFtdcQryBulletinField_get_NewsUrgency(PyCThostFtdcQryBulletinField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.NewsUrgency), 1);
}

static int PyCThostFtdcQryBulletinField_set_ExchangeID(PyCThostFtdcQryBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
	return 0;
}

static int PyCThostFtdcQryBulletinField_set_BulletinID(PyCThostFtdcQryBulletinField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BulletinID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BulletinID Expected int"); 
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
    self->data.BulletinID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQryBulletinField_set_SequenceNo(PyCThostFtdcQryBulletinField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQryBulletinField_set_NewsType(PyCThostFtdcQryBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewsType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewsType)) {
		PyErr_SetString(PyExc_ValueError, "NewsType must be less than 3 bytes");
		return -1;
	}
	strncpy(self->data.NewsType, buf, sizeof(self->data.NewsType));
	return 0;
}

static int PyCThostFtdcQryBulletinField_set_NewsUrgency(PyCThostFtdcQryBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewsUrgency Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewsUrgency)) {
		PyErr_SetString(PyExc_ValueError, "NewsUrgency must be less than 1 bytes");
		return -1;
	}
	self->data.NewsUrgency = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcQryBulletinField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryBulletinField_get_ExchangeID, (setter)PyCThostFtdcQryBulletinField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BulletinID", (getter)PyCThostFtdcQryBulletinField_get_BulletinID, (setter)PyCThostFtdcQryBulletinField_set_BulletinID, (char *)"BulletinID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcQryBulletinField_get_SequenceNo, (setter)PyCThostFtdcQryBulletinField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"NewsType", (getter)PyCThostFtdcQryBulletinField_get_NewsType, (setter)PyCThostFtdcQryBulletinField_set_NewsType, (char *)"NewsType", NULL},
	 {(char *)"NewsUrgency", (getter)PyCThostFtdcQryBulletinField_get_NewsUrgency, (setter)PyCThostFtdcQryBulletinField_set_NewsUrgency, (char *)"NewsUrgency", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryBulletinFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryBulletinField",	/* tp_name */
	sizeof(PyCThostFtdcQryBulletinField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryBulletinField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryBulletinField_repr,   /* tp_repr */
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
	"CThostFtdcQryBulletinField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryBulletinField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryBulletinField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryBulletinField_new,       /* tp_new */
};

int PyCThostFtdcQryBulletinFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryBulletinField  */
	if (PyType_Ready(&PyCThostFtdcQryBulletinFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryBulletinField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryBulletinFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryBulletinField", (PyObject *)&PyCThostFtdcQryBulletinFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBulletinField to module");
        Py_DECREF(&PyCThostFtdcQryBulletinFieldType);
		return -1;
    }

    return 0;
}
