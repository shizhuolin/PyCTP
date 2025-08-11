
#include "PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField.h"



static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField *self = (PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_init(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "CommodityGroupID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
	Py_ssize_t pQryInvestorCommodityGroupSPMMMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
	Py_ssize_t pQryInvestorCommodityGroupSPMMMarginField_InvestorID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
	Py_ssize_t pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryInvestorCommodityGroupSPMMMarginField_BrokerID, &pQryInvestorCommodityGroupSPMMMarginField_BrokerID_len
		, &pQryInvestorCommodityGroupSPMMMarginField_InvestorID, &pQryInvestorCommodityGroupSPMMMarginField_InvestorID_len
		, &pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID, &pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryInvestorCommodityGroupSPMMMarginField_BrokerID != NULL) {
		if(pQryInvestorCommodityGroupSPMMMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInvestorCommodityGroupSPMMMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInvestorCommodityGroupSPMMMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInvestorCommodityGroupSPMMMarginField_InvestorID != NULL) {
		if(pQryInvestorCommodityGroupSPMMMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInvestorCommodityGroupSPMMMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInvestorCommodityGroupSPMMMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID != NULL) {
		if(pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
			PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
			return -1;
		}
		strncpy(self->data.CommodityGroupID, pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
		pQryInvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_dealloc(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_repr(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "CommodityGroupID", self->data.CommodityGroupID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorCommodityGroupSPMMMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_get_BrokerID(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_get_InvestorID(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_get_CommodityGroupID(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityGroupID);
}

static int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_set_BrokerID(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_set_InvestorID(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_set_CommodityGroupID(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_get_BrokerID, (setter)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_get_InvestorID, (setter)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_get_CommodityGroupID, (setter)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorCommodityGroupSPMMMarginField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorCommodityGroupSPMMMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorCommodityGroupSPMMMarginField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorCommodityGroupSPMMMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorCommodityGroupSPMMMarginField", (PyObject *)&PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorCommodityGroupSPMMMarginField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType);
		return -1;
    }

    return 0;
}
