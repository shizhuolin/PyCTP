
#include "PyCThostFtdcQryInvestorCommoditySPMMMarginField.h"



static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorCommoditySPMMMarginField *self = (PyCThostFtdcQryInvestorCommoditySPMMMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorCommoditySPMMMarginField_init(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "CommodityID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInvestorCommoditySPMMMarginField_BrokerID = NULL;
	Py_ssize_t pQryInvestorCommoditySPMMMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInvestorCommoditySPMMMarginField_InvestorID = NULL;
	Py_ssize_t pQryInvestorCommoditySPMMMarginField_InvestorID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pQryInvestorCommoditySPMMMarginField_CommodityID = NULL;
	Py_ssize_t pQryInvestorCommoditySPMMMarginField_CommodityID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryInvestorCommoditySPMMMarginField_BrokerID, &pQryInvestorCommoditySPMMMarginField_BrokerID_len
		, &pQryInvestorCommoditySPMMMarginField_InvestorID, &pQryInvestorCommoditySPMMMarginField_InvestorID_len
		, &pQryInvestorCommoditySPMMMarginField_CommodityID, &pQryInvestorCommoditySPMMMarginField_CommodityID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryInvestorCommoditySPMMMarginField_BrokerID != NULL) {
		if(pQryInvestorCommoditySPMMMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInvestorCommoditySPMMMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInvestorCommoditySPMMMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInvestorCommoditySPMMMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInvestorCommoditySPMMMarginField_InvestorID != NULL) {
		if(pQryInvestorCommoditySPMMMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInvestorCommoditySPMMMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInvestorCommoditySPMMMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInvestorCommoditySPMMMarginField_InvestorID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pQryInvestorCommoditySPMMMarginField_CommodityID != NULL) {
		if(pQryInvestorCommoditySPMMMarginField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
			PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", pQryInvestorCommoditySPMMMarginField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
			return -1;
		}
		strncpy(self->data.CommodityID, pQryInvestorCommoditySPMMMarginField_CommodityID, sizeof(self->data.CommodityID) );
		pQryInvestorCommoditySPMMMarginField_CommodityID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInvestorCommoditySPMMMarginField_dealloc(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_repr(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "CommodityID", self->data.CommodityID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorCommoditySPMMMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_BrokerID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_InvestorID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_CommodityID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityID);
}

static int PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_BrokerID(PyCThostFtdcQryInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
		PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
	return 0;
}

static int PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_InvestorID(PyCThostFtdcQryInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_CommodityID(PyCThostFtdcQryInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryInvestorCommoditySPMMMarginField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_BrokerID, (setter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_InvestorID, (setter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"CommodityID", (getter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_CommodityID, (setter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_CommodityID, (char *)"CommodityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorCommoditySPMMMarginField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorCommoditySPMMMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorCommoditySPMMMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorCommoditySPMMMarginField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorCommoditySPMMMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorCommoditySPMMMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorCommoditySPMMMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorCommoditySPMMMarginField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorCommoditySPMMMarginField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorCommoditySPMMMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorCommoditySPMMMarginField", (PyObject *)&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorCommoditySPMMMarginField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType);
		return -1;
    }

    return 0;
}
