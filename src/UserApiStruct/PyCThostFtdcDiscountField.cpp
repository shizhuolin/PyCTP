
#include "PyCThostFtdcDiscountField.h"



static PyObject *PyCThostFtdcDiscountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDiscountField *self = (PyCThostFtdcDiscountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcDiscountField_init(PyCThostFtdcDiscountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorRange", "InvestorID", "Discount",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pDiscountField_BrokerID = NULL;
	Py_ssize_t pDiscountField_BrokerID_len = 0;

	//TThostFtdcInvestorRangeType char
	char pDiscountField_InvestorRange = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pDiscountField_InvestorID = NULL;
	Py_ssize_t pDiscountField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pDiscountField_Discount = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#d", (char **)kwlist
#endif

		, &pDiscountField_BrokerID, &pDiscountField_BrokerID_len
		, &pDiscountField_InvestorRange
		, &pDiscountField_InvestorID, &pDiscountField_InvestorID_len
		, &pDiscountField_Discount


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pDiscountField_BrokerID != NULL) {
		if(pDiscountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pDiscountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pDiscountField_BrokerID, sizeof(self->data.BrokerID) );
		pDiscountField_BrokerID = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pDiscountField_InvestorRange;

	//TThostFtdcInvestorIDType char[13]
	if(pDiscountField_InvestorID != NULL) {
		if(pDiscountField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pDiscountField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pDiscountField_InvestorID, sizeof(self->data.InvestorID) );
		pDiscountField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.Discount = pDiscountField_Discount;


    return 0;
}

static void PyCThostFtdcDiscountField_dealloc(PyCThostFtdcDiscountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDiscountField_repr(PyCThostFtdcDiscountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:d}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorRange", self->data.InvestorRange
		, "InvestorID", self->data.InvestorID 
		, "Discount", self->data.Discount


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDiscountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcDiscountField_get_BrokerID(PyCThostFtdcDiscountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcDiscountField_get_InvestorRange(PyCThostFtdcDiscountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcDiscountField_get_InvestorID(PyCThostFtdcDiscountField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcDiscountField_get_Discount(PyCThostFtdcDiscountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Discount);
}

static int PyCThostFtdcDiscountField_set_BrokerID(PyCThostFtdcDiscountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDiscountField_set_InvestorRange(PyCThostFtdcDiscountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
		PyErr_SetString(PyExc_ValueError, "InvestorRange must be less than 1 bytes");
		return -1;
	}
	self->data.InvestorRange = *buf;
	return 0;
}

static int PyCThostFtdcDiscountField_set_InvestorID(PyCThostFtdcDiscountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDiscountField_set_Discount(PyCThostFtdcDiscountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Discount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Discount = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcDiscountField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcDiscountField_get_BrokerID, (setter)PyCThostFtdcDiscountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcDiscountField_get_InvestorRange, (setter)PyCThostFtdcDiscountField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcDiscountField_get_InvestorID, (setter)PyCThostFtdcDiscountField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"Discount", (getter)PyCThostFtdcDiscountField_get_Discount, (setter)PyCThostFtdcDiscountField_set_Discount, (char *)"Discount", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDiscountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDiscountField",	/* tp_name */
	sizeof(PyCThostFtdcDiscountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDiscountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDiscountField_repr,   /* tp_repr */
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
	"CThostFtdcDiscountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDiscountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDiscountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDiscountField_new,       /* tp_new */
};

int PyCThostFtdcDiscountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDiscountField  */
	if (PyType_Ready(&PyCThostFtdcDiscountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDiscountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDiscountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDiscountField", (PyObject *)&PyCThostFtdcDiscountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDiscountField to module");
        Py_DECREF(&PyCThostFtdcDiscountFieldType);
		return -1;
    }

    return 0;
}
