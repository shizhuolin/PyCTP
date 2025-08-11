
#include "PyCThostFtdcSPMMProductParamField.h"



static PyObject *PyCThostFtdcSPMMProductParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPMMProductParamField *self = (PyCThostFtdcSPMMProductParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSPMMProductParamField_init(PyCThostFtdcSPMMProductParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ProductID", "CommodityID", "CommodityGroupID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSPMMProductParamField_ExchangeID = NULL;
	Py_ssize_t pSPMMProductParamField_ExchangeID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSPMMProductParamField_ProductID = NULL;
	Py_ssize_t pSPMMProductParamField_ProductID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSPMMProductParamField_CommodityID = NULL;
	Py_ssize_t pSPMMProductParamField_CommodityID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSPMMProductParamField_CommodityGroupID = NULL;
	Py_ssize_t pSPMMProductParamField_CommodityGroupID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pSPMMProductParamField_ExchangeID, &pSPMMProductParamField_ExchangeID_len
		, &pSPMMProductParamField_ProductID, &pSPMMProductParamField_ProductID_len
		, &pSPMMProductParamField_CommodityID, &pSPMMProductParamField_CommodityID_len
		, &pSPMMProductParamField_CommodityGroupID, &pSPMMProductParamField_CommodityGroupID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSPMMProductParamField_ExchangeID != NULL) {
		if(pSPMMProductParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSPMMProductParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSPMMProductParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSPMMProductParamField_ExchangeID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSPMMProductParamField_ProductID != NULL) {
		if(pSPMMProductParamField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pSPMMProductParamField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pSPMMProductParamField_ProductID, sizeof(self->data.ProductID) );
		pSPMMProductParamField_ProductID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSPMMProductParamField_CommodityID != NULL) {
		if(pSPMMProductParamField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
			PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", pSPMMProductParamField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
			return -1;
		}
		strncpy(self->data.CommodityID, pSPMMProductParamField_CommodityID, sizeof(self->data.CommodityID) );
		pSPMMProductParamField_CommodityID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSPMMProductParamField_CommodityGroupID != NULL) {
		if(pSPMMProductParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
			PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", pSPMMProductParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
			return -1;
		}
		strncpy(self->data.CommodityGroupID, pSPMMProductParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
		pSPMMProductParamField_CommodityGroupID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSPMMProductParamField_dealloc(PyCThostFtdcSPMMProductParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPMMProductParamField_repr(PyCThostFtdcSPMMProductParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "ProductID", self->data.ProductID 
		, "CommodityID", self->data.CommodityID 
		, "CommodityGroupID", self->data.CommodityGroupID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPMMProductParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSPMMProductParamField_get_ExchangeID(PyCThostFtdcSPMMProductParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSPMMProductParamField_get_ProductID(PyCThostFtdcSPMMProductParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcSPMMProductParamField_get_CommodityID(PyCThostFtdcSPMMProductParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityID);
}

static PyObject *PyCThostFtdcSPMMProductParamField_get_CommodityGroupID(PyCThostFtdcSPMMProductParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityGroupID);
}

static int PyCThostFtdcSPMMProductParamField_set_ExchangeID(PyCThostFtdcSPMMProductParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPMMProductParamField_set_ProductID(PyCThostFtdcSPMMProductParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcSPMMProductParamField_set_CommodityID(PyCThostFtdcSPMMProductParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPMMProductParamField_set_CommodityGroupID(PyCThostFtdcSPMMProductParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSPMMProductParamField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSPMMProductParamField_get_ExchangeID, (setter)PyCThostFtdcSPMMProductParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcSPMMProductParamField_get_ProductID, (setter)PyCThostFtdcSPMMProductParamField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"CommodityID", (getter)PyCThostFtdcSPMMProductParamField_get_CommodityID, (setter)PyCThostFtdcSPMMProductParamField_set_CommodityID, (char *)"CommodityID", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcSPMMProductParamField_get_CommodityGroupID, (setter)PyCThostFtdcSPMMProductParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPMMProductParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPMMProductParamField",	/* tp_name */
	sizeof(PyCThostFtdcSPMMProductParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPMMProductParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPMMProductParamField_repr,   /* tp_repr */
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
	"CThostFtdcSPMMProductParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPMMProductParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPMMProductParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPMMProductParamField_new,       /* tp_new */
};

int PyCThostFtdcSPMMProductParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPMMProductParamField  */
	if (PyType_Ready(&PyCThostFtdcSPMMProductParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPMMProductParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPMMProductParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPMMProductParamField", (PyObject *)&PyCThostFtdcSPMMProductParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPMMProductParamField to module");
        Py_DECREF(&PyCThostFtdcSPMMProductParamFieldType);
		return -1;
    }

    return 0;
}
