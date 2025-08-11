
#include "PyCThostFtdcQryTraderOfferField.h"



static PyObject *PyCThostFtdcQryTraderOfferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTraderOfferField *self = (PyCThostFtdcQryTraderOfferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryTraderOfferField_init(PyCThostFtdcQryTraderOfferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ParticipantID", "TraderID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryTraderOfferField_ExchangeID = NULL;
	Py_ssize_t pQryTraderOfferField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pQryTraderOfferField_ParticipantID = NULL;
	Py_ssize_t pQryTraderOfferField_ParticipantID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pQryTraderOfferField_TraderID = NULL;
	Py_ssize_t pQryTraderOfferField_TraderID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryTraderOfferField_ExchangeID, &pQryTraderOfferField_ExchangeID_len
		, &pQryTraderOfferField_ParticipantID, &pQryTraderOfferField_ParticipantID_len
		, &pQryTraderOfferField_TraderID, &pQryTraderOfferField_TraderID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryTraderOfferField_ExchangeID != NULL) {
		if(pQryTraderOfferField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryTraderOfferField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryTraderOfferField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryTraderOfferField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pQryTraderOfferField_ParticipantID != NULL) {
		if(pQryTraderOfferField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pQryTraderOfferField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pQryTraderOfferField_ParticipantID, sizeof(self->data.ParticipantID) );
		pQryTraderOfferField_ParticipantID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pQryTraderOfferField_TraderID != NULL) {
		if(pQryTraderOfferField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pQryTraderOfferField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pQryTraderOfferField_TraderID, sizeof(self->data.TraderID) );
		pQryTraderOfferField_TraderID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryTraderOfferField_dealloc(PyCThostFtdcQryTraderOfferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTraderOfferField_repr(PyCThostFtdcQryTraderOfferField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderOfferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryTraderOfferField_get_ExchangeID(PyCThostFtdcQryTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryTraderOfferField_get_ParticipantID(PyCThostFtdcQryTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcQryTraderOfferField_get_TraderID(PyCThostFtdcQryTraderOfferField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static int PyCThostFtdcQryTraderOfferField_set_ExchangeID(PyCThostFtdcQryTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTraderOfferField_set_ParticipantID(PyCThostFtdcQryTraderOfferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTraderOfferField_set_TraderID(PyCThostFtdcQryTraderOfferField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryTraderOfferField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryTraderOfferField_get_ExchangeID, (setter)PyCThostFtdcQryTraderOfferField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcQryTraderOfferField_get_ParticipantID, (setter)PyCThostFtdcQryTraderOfferField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcQryTraderOfferField_get_TraderID, (setter)PyCThostFtdcQryTraderOfferField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTraderOfferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTraderOfferField",	/* tp_name */
	sizeof(PyCThostFtdcQryTraderOfferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTraderOfferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTraderOfferField_repr,   /* tp_repr */
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
	"CThostFtdcQryTraderOfferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTraderOfferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTraderOfferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTraderOfferField_new,       /* tp_new */
};

int PyCThostFtdcQryTraderOfferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTraderOfferField  */
	if (PyType_Ready(&PyCThostFtdcQryTraderOfferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTraderOfferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTraderOfferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTraderOfferField", (PyObject *)&PyCThostFtdcQryTraderOfferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTraderOfferField to module");
        Py_DECREF(&PyCThostFtdcQryTraderOfferFieldType);
		return -1;
    }

    return 0;
}
