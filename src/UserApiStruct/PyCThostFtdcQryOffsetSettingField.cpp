
#include "PyCThostFtdcQryOffsetSettingField.h"



static PyObject *PyCThostFtdcQryOffsetSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOffsetSettingField *self = (PyCThostFtdcQryOffsetSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryOffsetSettingField_init(PyCThostFtdcQryOffsetSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ProductID", "OffsetType",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryOffsetSettingField_BrokerID = NULL;
	Py_ssize_t pQryOffsetSettingField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryOffsetSettingField_InvestorID = NULL;
	Py_ssize_t pQryOffsetSettingField_InvestorID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pQryOffsetSettingField_ProductID = NULL;
	Py_ssize_t pQryOffsetSettingField_ProductID_len = 0;

	//TThostFtdcOffsetTypeType char
	char pQryOffsetSettingField_OffsetType = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#c", (char **)kwlist
#endif

		, &pQryOffsetSettingField_BrokerID, &pQryOffsetSettingField_BrokerID_len
		, &pQryOffsetSettingField_InvestorID, &pQryOffsetSettingField_InvestorID_len
		, &pQryOffsetSettingField_ProductID, &pQryOffsetSettingField_ProductID_len
		, &pQryOffsetSettingField_OffsetType


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryOffsetSettingField_BrokerID != NULL) {
		if(pQryOffsetSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryOffsetSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryOffsetSettingField_BrokerID, sizeof(self->data.BrokerID) );
		pQryOffsetSettingField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryOffsetSettingField_InvestorID != NULL) {
		if(pQryOffsetSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryOffsetSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryOffsetSettingField_InvestorID, sizeof(self->data.InvestorID) );
		pQryOffsetSettingField_InvestorID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pQryOffsetSettingField_ProductID != NULL) {
		if(pQryOffsetSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pQryOffsetSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pQryOffsetSettingField_ProductID, sizeof(self->data.ProductID) );
		pQryOffsetSettingField_ProductID = NULL;
	}

	//TThostFtdcOffsetTypeType char
	self->data.OffsetType = pQryOffsetSettingField_OffsetType;



    return 0;
}

static void PyCThostFtdcQryOffsetSettingField_dealloc(PyCThostFtdcQryOffsetSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOffsetSettingField_repr(PyCThostFtdcQryOffsetSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ProductID", self->data.ProductID 
		, "OffsetType", self->data.OffsetType


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOffsetSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryOffsetSettingField_get_BrokerID(PyCThostFtdcQryOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryOffsetSettingField_get_InvestorID(PyCThostFtdcQryOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryOffsetSettingField_get_ProductID(PyCThostFtdcQryOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcQryOffsetSettingField_get_OffsetType(PyCThostFtdcQryOffsetSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

static int PyCThostFtdcQryOffsetSettingField_set_BrokerID(PyCThostFtdcQryOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOffsetSettingField_set_InvestorID(PyCThostFtdcQryOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOffsetSettingField_set_ProductID(PyCThostFtdcQryOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOffsetSettingField_set_OffsetType(PyCThostFtdcQryOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
		PyErr_SetString(PyExc_ValueError, "OffsetType must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetType = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcQryOffsetSettingField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryOffsetSettingField_get_BrokerID, (setter)PyCThostFtdcQryOffsetSettingField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryOffsetSettingField_get_InvestorID, (setter)PyCThostFtdcQryOffsetSettingField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcQryOffsetSettingField_get_ProductID, (setter)PyCThostFtdcQryOffsetSettingField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"OffsetType", (getter)PyCThostFtdcQryOffsetSettingField_get_OffsetType, (setter)PyCThostFtdcQryOffsetSettingField_set_OffsetType, (char *)"OffsetType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOffsetSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOffsetSettingField",	/* tp_name */
	sizeof(PyCThostFtdcQryOffsetSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOffsetSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOffsetSettingField_repr,   /* tp_repr */
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
	"CThostFtdcQryOffsetSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOffsetSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOffsetSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOffsetSettingField_new,       /* tp_new */
};

int PyCThostFtdcQryOffsetSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOffsetSettingField  */
	if (PyType_Ready(&PyCThostFtdcQryOffsetSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOffsetSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOffsetSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOffsetSettingField", (PyObject *)&PyCThostFtdcQryOffsetSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOffsetSettingField to module");
        Py_DECREF(&PyCThostFtdcQryOffsetSettingFieldType);
		return -1;
    }

    return 0;
}
