
#include "PyCThostFtdcSPMMInstParamField.h"



static PyObject *PyCThostFtdcSPMMInstParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPMMInstParamField *self = (PyCThostFtdcSPMMInstParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSPMMInstParamField_init(PyCThostFtdcSPMMInstParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID", "InstMarginCalID", "CommodityID", "CommodityGroupID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSPMMInstParamField_ExchangeID = NULL;
	Py_ssize_t pSPMMInstParamField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPMMInstParamField_InstrumentID = NULL;
	Py_ssize_t pSPMMInstParamField_InstrumentID_len = 0;

	//TThostFtdcInstMarginCalIDType char
	char pSPMMInstParamField_InstMarginCalID = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSPMMInstParamField_CommodityID = NULL;
	Py_ssize_t pSPMMInstParamField_CommodityID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSPMMInstParamField_CommodityGroupID = NULL;
	Py_ssize_t pSPMMInstParamField_CommodityGroupID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#", (char **)kwlist
#endif

		, &pSPMMInstParamField_ExchangeID, &pSPMMInstParamField_ExchangeID_len
		, &pSPMMInstParamField_InstrumentID, &pSPMMInstParamField_InstrumentID_len
		, &pSPMMInstParamField_InstMarginCalID
		, &pSPMMInstParamField_CommodityID, &pSPMMInstParamField_CommodityID_len
		, &pSPMMInstParamField_CommodityGroupID, &pSPMMInstParamField_CommodityGroupID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSPMMInstParamField_ExchangeID != NULL) {
		if(pSPMMInstParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSPMMInstParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSPMMInstParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSPMMInstParamField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSPMMInstParamField_InstrumentID != NULL) {
		if(pSPMMInstParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSPMMInstParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSPMMInstParamField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSPMMInstParamField_InstrumentID = NULL;
	}

	//TThostFtdcInstMarginCalIDType char
	self->data.InstMarginCalID = pSPMMInstParamField_InstMarginCalID;

	//TThostFtdcSPMMProductIDType char[41]
	if(pSPMMInstParamField_CommodityID != NULL) {
		if(pSPMMInstParamField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
			PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", pSPMMInstParamField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
			return -1;
		}
		strncpy(self->data.CommodityID, pSPMMInstParamField_CommodityID, sizeof(self->data.CommodityID) );
		pSPMMInstParamField_CommodityID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSPMMInstParamField_CommodityGroupID != NULL) {
		if(pSPMMInstParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
			PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", pSPMMInstParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
			return -1;
		}
		strncpy(self->data.CommodityGroupID, pSPMMInstParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
		pSPMMInstParamField_CommodityGroupID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSPMMInstParamField_dealloc(PyCThostFtdcSPMMInstParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPMMInstParamField_repr(PyCThostFtdcSPMMInstParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "InstMarginCalID", self->data.InstMarginCalID
		, "CommodityID", self->data.CommodityID 
		, "CommodityGroupID", self->data.CommodityGroupID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPMMInstParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSPMMInstParamField_get_ExchangeID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSPMMInstParamField_get_InstrumentID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSPMMInstParamField_get_InstMarginCalID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InstMarginCalID), 1);
}

static PyObject *PyCThostFtdcSPMMInstParamField_get_CommodityID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityID);
}

static PyObject *PyCThostFtdcSPMMInstParamField_get_CommodityGroupID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityGroupID);
}

static int PyCThostFtdcSPMMInstParamField_set_ExchangeID(PyCThostFtdcSPMMInstParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPMMInstParamField_set_InstrumentID(PyCThostFtdcSPMMInstParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPMMInstParamField_set_InstMarginCalID(PyCThostFtdcSPMMInstParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstMarginCalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstMarginCalID)) {
		PyErr_SetString(PyExc_ValueError, "InstMarginCalID must be less than 1 bytes");
		return -1;
	}
	self->data.InstMarginCalID = *buf;
	return 0;
}

static int PyCThostFtdcSPMMInstParamField_set_CommodityID(PyCThostFtdcSPMMInstParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
		PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CommodityID, buf, sizeof(self->data.CommodityID));
	return 0;
}

static int PyCThostFtdcSPMMInstParamField_set_CommodityGroupID(PyCThostFtdcSPMMInstParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
		PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CommodityGroupID, buf, sizeof(self->data.CommodityGroupID));
	return 0;
}



static PyGetSetDef PyCThostFtdcSPMMInstParamField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSPMMInstParamField_get_ExchangeID, (setter)PyCThostFtdcSPMMInstParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSPMMInstParamField_get_InstrumentID, (setter)PyCThostFtdcSPMMInstParamField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InstMarginCalID", (getter)PyCThostFtdcSPMMInstParamField_get_InstMarginCalID, (setter)PyCThostFtdcSPMMInstParamField_set_InstMarginCalID, (char *)"InstMarginCalID", NULL},
	 {(char *)"CommodityID", (getter)PyCThostFtdcSPMMInstParamField_get_CommodityID, (setter)PyCThostFtdcSPMMInstParamField_set_CommodityID, (char *)"CommodityID", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcSPMMInstParamField_get_CommodityGroupID, (setter)PyCThostFtdcSPMMInstParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPMMInstParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPMMInstParamField",	/* tp_name */
	sizeof(PyCThostFtdcSPMMInstParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPMMInstParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPMMInstParamField_repr,   /* tp_repr */
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
	"CThostFtdcSPMMInstParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPMMInstParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPMMInstParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPMMInstParamField_new,       /* tp_new */
};

int PyCThostFtdcSPMMInstParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPMMInstParamField  */
	if (PyType_Ready(&PyCThostFtdcSPMMInstParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPMMInstParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPMMInstParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPMMInstParamField", (PyObject *)&PyCThostFtdcSPMMInstParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPMMInstParamField to module");
        Py_DECREF(&PyCThostFtdcSPMMInstParamFieldType);
		return -1;
    }

    return 0;
}
