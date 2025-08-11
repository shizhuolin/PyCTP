
#include "PyCThostFtdcRULEInstrParameterField.h"



static PyObject *PyCThostFtdcRULEInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRULEInstrParameterField *self = (PyCThostFtdcRULEInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRULEInstrParameterField_init(PyCThostFtdcRULEInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "InstrumentClass", "StdInstrumentID", "BSpecRatio", "SSpecRatio", "BHedgeRatio", "SHedgeRatio", "BAddOnMargin", "SAddOnMargin", "CommodityGroupID",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRULEInstrParameterField_TradingDay = NULL;
	Py_ssize_t pRULEInstrParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pRULEInstrParameterField_ExchangeID = NULL;
	Py_ssize_t pRULEInstrParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRULEInstrParameterField_InstrumentID = NULL;
	Py_ssize_t pRULEInstrParameterField_InstrumentID_len = 0;

	//TThostFtdcInstrumentClassType char
	char pRULEInstrParameterField_InstrumentClass = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRULEInstrParameterField_StdInstrumentID = NULL;
	Py_ssize_t pRULEInstrParameterField_StdInstrumentID_len = 0;

	//TThostFtdcRatioType double
	double pRULEInstrParameterField_BSpecRatio = 0.0;

	//TThostFtdcRatioType double
	double pRULEInstrParameterField_SSpecRatio = 0.0;

	//TThostFtdcRatioType double
	double pRULEInstrParameterField_BHedgeRatio = 0.0;

	//TThostFtdcRatioType double
	double pRULEInstrParameterField_SHedgeRatio = 0.0;

	//TThostFtdcMoneyType double
	double pRULEInstrParameterField_BAddOnMargin = 0.0;

	//TThostFtdcMoneyType double
	double pRULEInstrParameterField_SAddOnMargin = 0.0;

	//TThostFtdcCommodityGroupIDType int
	int pRULEInstrParameterField_CommodityGroupID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#ddddddi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#ddddddi", (char **)kwlist
#endif

		, &pRULEInstrParameterField_TradingDay, &pRULEInstrParameterField_TradingDay_len
		, &pRULEInstrParameterField_ExchangeID, &pRULEInstrParameterField_ExchangeID_len
		, &pRULEInstrParameterField_InstrumentID, &pRULEInstrParameterField_InstrumentID_len
		, &pRULEInstrParameterField_InstrumentClass
		, &pRULEInstrParameterField_StdInstrumentID, &pRULEInstrParameterField_StdInstrumentID_len
		, &pRULEInstrParameterField_BSpecRatio
		, &pRULEInstrParameterField_SSpecRatio
		, &pRULEInstrParameterField_BHedgeRatio
		, &pRULEInstrParameterField_SHedgeRatio
		, &pRULEInstrParameterField_BAddOnMargin
		, &pRULEInstrParameterField_SAddOnMargin
		, &pRULEInstrParameterField_CommodityGroupID


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRULEInstrParameterField_TradingDay != NULL) {
		if(pRULEInstrParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRULEInstrParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRULEInstrParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pRULEInstrParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pRULEInstrParameterField_ExchangeID != NULL) {
		if(pRULEInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRULEInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRULEInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRULEInstrParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pRULEInstrParameterField_InstrumentID != NULL) {
		if(pRULEInstrParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pRULEInstrParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pRULEInstrParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
		pRULEInstrParameterField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentClassType char
	self->data.InstrumentClass = pRULEInstrParameterField_InstrumentClass;

	//TThostFtdcInstrumentIDType char[81]
	if(pRULEInstrParameterField_StdInstrumentID != NULL) {
		if(pRULEInstrParameterField_StdInstrumentID_len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is %zd)", pRULEInstrParameterField_StdInstrumentID_len, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
			return -1;
		}
		strncpy(self->data.StdInstrumentID, pRULEInstrParameterField_StdInstrumentID, sizeof(self->data.StdInstrumentID) );
		pRULEInstrParameterField_StdInstrumentID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.BSpecRatio = pRULEInstrParameterField_BSpecRatio;
	//TThostFtdcRatioType double
	self->data.SSpecRatio = pRULEInstrParameterField_SSpecRatio;
	//TThostFtdcRatioType double
	self->data.BHedgeRatio = pRULEInstrParameterField_BHedgeRatio;
	//TThostFtdcRatioType double
	self->data.SHedgeRatio = pRULEInstrParameterField_SHedgeRatio;
	//TThostFtdcMoneyType double
	self->data.BAddOnMargin = pRULEInstrParameterField_BAddOnMargin;
	//TThostFtdcMoneyType double
	self->data.SAddOnMargin = pRULEInstrParameterField_SAddOnMargin;
	//TThostFtdcCommodityGroupIDType int
	self->data.CommodityGroupID = pRULEInstrParameterField_CommodityGroupID;



    return 0;
}

static void PyCThostFtdcRULEInstrParameterField_dealloc(PyCThostFtdcRULEInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_repr(PyCThostFtdcRULEInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "InstrumentClass", self->data.InstrumentClass
		, "StdInstrumentID", self->data.StdInstrumentID 
		, "BSpecRatio", self->data.BSpecRatio
		, "SSpecRatio", self->data.SSpecRatio
		, "BHedgeRatio", self->data.BHedgeRatio
		, "SHedgeRatio", self->data.SHedgeRatio
		, "BAddOnMargin", self->data.BAddOnMargin
		, "SAddOnMargin", self->data.SAddOnMargin
		, "CommodityGroupID", self->data.CommodityGroupID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_TradingDay(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_ExchangeID(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_InstrumentID(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_InstrumentClass(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InstrumentClass), 1);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_StdInstrumentID(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.StdInstrumentID);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_BSpecRatio(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BSpecRatio);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_SSpecRatio(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SSpecRatio);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_BHedgeRatio(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BHedgeRatio);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_SHedgeRatio(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SHedgeRatio);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_BAddOnMargin(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BAddOnMargin);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_SAddOnMargin(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SAddOnMargin);
}

static PyObject *PyCThostFtdcRULEInstrParameterField_get_CommodityGroupID(PyCThostFtdcRULEInstrParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CommodityGroupID);
#else 
	return PyInt_FromLong(self->data.CommodityGroupID);
#endif 
}

static int PyCThostFtdcRULEInstrParameterField_set_TradingDay(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
		PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
	return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_ExchangeID(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRULEInstrParameterField_set_InstrumentID(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRULEInstrParameterField_set_InstrumentClass(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentClass Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentClass)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentClass must be less than 1 bytes");
		return -1;
	}
	self->data.InstrumentClass = *buf;
	return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_StdInstrumentID(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.StdInstrumentID, buf, sizeof(self->data.StdInstrumentID));
	return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_BSpecRatio(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BSpecRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BSpecRatio = buf;
    return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_SSpecRatio(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SSpecRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SSpecRatio = buf;
    return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_BHedgeRatio(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BHedgeRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BHedgeRatio = buf;
    return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_SHedgeRatio(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SHedgeRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SHedgeRatio = buf;
    return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_BAddOnMargin(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BAddOnMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BAddOnMargin = buf;
    return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_SAddOnMargin(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SAddOnMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SAddOnMargin = buf;
    return 0;
}

static int PyCThostFtdcRULEInstrParameterField_set_CommodityGroupID(PyCThostFtdcRULEInstrParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected int"); 
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
    self->data.CommodityGroupID = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcRULEInstrParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRULEInstrParameterField_get_TradingDay, (setter)PyCThostFtdcRULEInstrParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRULEInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcRULEInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcRULEInstrParameterField_get_InstrumentID, (setter)PyCThostFtdcRULEInstrParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InstrumentClass", (getter)PyCThostFtdcRULEInstrParameterField_get_InstrumentClass, (setter)PyCThostFtdcRULEInstrParameterField_set_InstrumentClass, (char *)"InstrumentClass", NULL},
	 {(char *)"StdInstrumentID", (getter)PyCThostFtdcRULEInstrParameterField_get_StdInstrumentID, (setter)PyCThostFtdcRULEInstrParameterField_set_StdInstrumentID, (char *)"StdInstrumentID", NULL},
	 {(char *)"BSpecRatio", (getter)PyCThostFtdcRULEInstrParameterField_get_BSpecRatio, (setter)PyCThostFtdcRULEInstrParameterField_set_BSpecRatio, (char *)"BSpecRatio", NULL},
	 {(char *)"SSpecRatio", (getter)PyCThostFtdcRULEInstrParameterField_get_SSpecRatio, (setter)PyCThostFtdcRULEInstrParameterField_set_SSpecRatio, (char *)"SSpecRatio", NULL},
	 {(char *)"BHedgeRatio", (getter)PyCThostFtdcRULEInstrParameterField_get_BHedgeRatio, (setter)PyCThostFtdcRULEInstrParameterField_set_BHedgeRatio, (char *)"BHedgeRatio", NULL},
	 {(char *)"SHedgeRatio", (getter)PyCThostFtdcRULEInstrParameterField_get_SHedgeRatio, (setter)PyCThostFtdcRULEInstrParameterField_set_SHedgeRatio, (char *)"SHedgeRatio", NULL},
	 {(char *)"BAddOnMargin", (getter)PyCThostFtdcRULEInstrParameterField_get_BAddOnMargin, (setter)PyCThostFtdcRULEInstrParameterField_set_BAddOnMargin, (char *)"BAddOnMargin", NULL},
	 {(char *)"SAddOnMargin", (getter)PyCThostFtdcRULEInstrParameterField_get_SAddOnMargin, (setter)PyCThostFtdcRULEInstrParameterField_set_SAddOnMargin, (char *)"SAddOnMargin", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcRULEInstrParameterField_get_CommodityGroupID, (setter)PyCThostFtdcRULEInstrParameterField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRULEInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRULEInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRULEInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRULEInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRULEInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRULEInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRULEInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRULEInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRULEInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcRULEInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRULEInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcRULEInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRULEInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRULEInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRULEInstrParameterField", (PyObject *)&PyCThostFtdcRULEInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcRULEInstrParameterFieldType);
		return -1;
    }

    return 0;
}
