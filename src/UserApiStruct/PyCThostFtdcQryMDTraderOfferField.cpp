
#include "PyCThostFtdcQryMDTraderOfferField.h"



static PyObject *PyCThostFtdcQryMDTraderOfferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMDTraderOfferField *self = (PyCThostFtdcQryMDTraderOfferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryMDTraderOfferField_init(PyCThostFtdcQryMDTraderOfferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ParticipantID", "TraderID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryMDTraderOfferField_ExchangeID = NULL;
	Py_ssize_t pQryMDTraderOfferField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pQryMDTraderOfferField_ParticipantID = NULL;
	Py_ssize_t pQryMDTraderOfferField_ParticipantID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryMDTraderOfferField_TraderID = NULL;
	Py_ssize_t pQryMDTraderOfferField_TraderID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryMDTraderOfferField_ExchangeID, &pQryMDTraderOfferField_ExchangeID_len
		, &pQryMDTraderOfferField_ParticipantID, &pQryMDTraderOfferField_ParticipantID_len
		, &pQryMDTraderOfferField_TraderID, &pQryMDTraderOfferField_TraderID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryMDTraderOfferField_ExchangeID != NULL) {
		if(pQryMDTraderOfferField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryMDTraderOfferField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryMDTraderOfferField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryMDTraderOfferField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pQryMDTraderOfferField_ParticipantID != NULL) {
		if(pQryMDTraderOfferField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryMDTraderOfferField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryMDTraderOfferField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryMDTraderOfferField_ParticipantID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryMDTraderOfferField_TraderID != NULL) {
		if(pQryMDTraderOfferField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryMDTraderOfferField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryMDTraderOfferField_TraderID, sizeof(self->data.TraderID) );
		pQryMDTraderOfferField_TraderID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryMDTraderOfferField_dealloc(PyCThostFtdcQryMDTraderOfferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMDTraderOfferField_repr(PyCThostFtdcQryMDTraderOfferField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "TraderID", self->data.TraderID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMDTraderOfferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryMDTraderOfferField_get_ExchangeID(PyCThostFtdcQryMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryMDTraderOfferField_get_ParticipantID(PyCThostFtdcQryMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryMDTraderOfferField_get_TraderID(PyCThostFtdcQryMDTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static int PyCThostFtdcQryMDTraderOfferField_set_ExchangeID(PyCThostFtdcQryMDTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMDTraderOfferField_set_ParticipantID(PyCThostFtdcQryMDTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
		PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
	return 0;
}

static int PyCThostFtdcQryMDTraderOfferField_set_TraderID(PyCThostFtdcQryMDTraderOfferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
		PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryMDTraderOfferField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryMDTraderOfferField_get_ExchangeID, (setter)PyCThostFtdcQryMDTraderOfferField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryMDTraderOfferField_get_ParticipantID, (setter)PyCThostFtdcQryMDTraderOfferField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryMDTraderOfferField_get_TraderID, (setter)PyCThostFtdcQryMDTraderOfferField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMDTraderOfferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMDTraderOfferField",	/* tp_name */
	sizeof(PyCThostFtdcQryMDTraderOfferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMDTraderOfferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMDTraderOfferField_repr,   /* tp_repr */
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
	"CThostFtdcQryMDTraderOfferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMDTraderOfferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMDTraderOfferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMDTraderOfferField_new,       /* tp_new */
};

int PyCThostFtdcQryMDTraderOfferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMDTraderOfferField  */
	if (PyType_Ready(&PyCThostFtdcQryMDTraderOfferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMDTraderOfferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMDTraderOfferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMDTraderOfferField", (PyObject *)&PyCThostFtdcQryMDTraderOfferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMDTraderOfferField to module");
        Py_DECREF(&PyCThostFtdcQryMDTraderOfferFieldType);
		return -1;
    }

    return 0;
}
