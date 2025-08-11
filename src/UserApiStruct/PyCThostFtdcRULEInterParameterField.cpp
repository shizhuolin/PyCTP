
#include "PyCThostFtdcRULEInterParameterField.h"



static PyObject *PyCThostFtdcRULEInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRULEInterParameterField *self = (PyCThostFtdcRULEInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRULEInterParameterField_init(PyCThostFtdcRULEInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "InterRate", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "Leg1PropFactor", "Leg2PropFactor", "CommodityGroupID", "CommodityGroupName",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRULEInterParameterField_TradingDay = NULL;
	Py_ssize_t pRULEInterParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pRULEInterParameterField_ExchangeID = NULL;
	Py_ssize_t pRULEInterParameterField_ExchangeID_len = 0;

	//TThostFtdcSpreadIdType int
	int pRULEInterParameterField_SpreadId = 0;

	//TThostFtdcRatioType double
	double pRULEInterParameterField_InterRate = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRULEInterParameterField_Leg1ProdFamilyCode = NULL;
	Py_ssize_t pRULEInterParameterField_Leg1ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRULEInterParameterField_Leg2ProdFamilyCode = NULL;
	Py_ssize_t pRULEInterParameterField_Leg2ProdFamilyCode_len = 0;

	//TThostFtdcCommonIntType int
	int pRULEInterParameterField_Leg1PropFactor = 0;

	//TThostFtdcCommonIntType int
	int pRULEInterParameterField_Leg2PropFactor = 0;

	//TThostFtdcCommodityGroupIDType int
	int pRULEInterParameterField_CommodityGroupID = 0;

	//TThostFtdcInstrumentNameType char[21]
	const char *pRULEInterParameterField_CommodityGroupName = NULL;
	Py_ssize_t pRULEInterParameterField_CommodityGroupName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#iiis#", (char **)kwlist
#endif

		, &pRULEInterParameterField_TradingDay, &pRULEInterParameterField_TradingDay_len
		, &pRULEInterParameterField_ExchangeID, &pRULEInterParameterField_ExchangeID_len
		, &pRULEInterParameterField_SpreadId
		, &pRULEInterParameterField_InterRate
		, &pRULEInterParameterField_Leg1ProdFamilyCode, &pRULEInterParameterField_Leg1ProdFamilyCode_len
		, &pRULEInterParameterField_Leg2ProdFamilyCode, &pRULEInterParameterField_Leg2ProdFamilyCode_len
		, &pRULEInterParameterField_Leg1PropFactor
		, &pRULEInterParameterField_Leg2PropFactor
		, &pRULEInterParameterField_CommodityGroupID
		, &pRULEInterParameterField_CommodityGroupName, &pRULEInterParameterField_CommodityGroupName_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRULEInterParameterField_TradingDay != NULL) {
		if(pRULEInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRULEInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRULEInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pRULEInterParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pRULEInterParameterField_ExchangeID != NULL) {
		if(pRULEInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRULEInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRULEInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRULEInterParameterField_ExchangeID = NULL;
	}

	//TThostFtdcSpreadIdType int
	self->data.SpreadId = pRULEInterParameterField_SpreadId;

	//TThostFtdcRatioType double
	self->data.InterRate = pRULEInterParameterField_InterRate;
	//TThostFtdcInstrumentIDType char[81]
	if(pRULEInterParameterField_Leg1ProdFamilyCode != NULL) {
		if(pRULEInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", pRULEInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg1ProdFamilyCode, pRULEInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
		pRULEInterParameterField_Leg1ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pRULEInterParameterField_Leg2ProdFamilyCode != NULL) {
		if(pRULEInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", pRULEInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg2ProdFamilyCode, pRULEInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
		pRULEInterParameterField_Leg2ProdFamilyCode = NULL;
	}

	//TThostFtdcCommonIntType int
	self->data.Leg1PropFactor = pRULEInterParameterField_Leg1PropFactor;

	//TThostFtdcCommonIntType int
	self->data.Leg2PropFactor = pRULEInterParameterField_Leg2PropFactor;

	//TThostFtdcCommodityGroupIDType int
	self->data.CommodityGroupID = pRULEInterParameterField_CommodityGroupID;

	//TThostFtdcInstrumentNameType char[21]
	if(pRULEInterParameterField_CommodityGroupName != NULL) {
		if(pRULEInterParameterField_CommodityGroupName_len > (Py_ssize_t)sizeof(self->data.CommodityGroupName)) {
			PyErr_Format(PyExc_ValueError, "CommodityGroupName too long: length=%zd (max allowed is %zd)", pRULEInterParameterField_CommodityGroupName_len, (Py_ssize_t)sizeof(self->data.CommodityGroupName));
			return -1;
		}
		strncpy(self->data.CommodityGroupName, pRULEInterParameterField_CommodityGroupName, sizeof(self->data.CommodityGroupName) );
		pRULEInterParameterField_CommodityGroupName = NULL;
	}



    return 0;
}

static void PyCThostFtdcRULEInterParameterField_dealloc(PyCThostFtdcRULEInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRULEInterParameterField_repr(PyCThostFtdcRULEInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:i,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s,s:i,s:i,s:i,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "SpreadId", self->data.SpreadId
		, "InterRate", self->data.InterRate
		, "Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode 
		, "Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode 
		, "Leg1PropFactor", self->data.Leg1PropFactor
		, "Leg2PropFactor", self->data.Leg2PropFactor
		, "CommodityGroupID", self->data.CommodityGroupID
		, "CommodityGroupName", self->data.CommodityGroupName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_TradingDay(PyCThostFtdcRULEInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_ExchangeID(PyCThostFtdcRULEInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_SpreadId(PyCThostFtdcRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SpreadId);
#else 
	return PyInt_FromLong(self->data.SpreadId);
#endif 
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_InterRate(PyCThostFtdcRULEInterParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterRate);
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcRULEInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcRULEInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_Leg1PropFactor(PyCThostFtdcRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Leg1PropFactor);
#else 
	return PyInt_FromLong(self->data.Leg1PropFactor);
#endif 
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_Leg2PropFactor(PyCThostFtdcRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Leg2PropFactor);
#else 
	return PyInt_FromLong(self->data.Leg2PropFactor);
#endif 
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_CommodityGroupID(PyCThostFtdcRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CommodityGroupID);
#else 
	return PyInt_FromLong(self->data.CommodityGroupID);
#endif 
}

static PyObject *PyCThostFtdcRULEInterParameterField_get_CommodityGroupName(PyCThostFtdcRULEInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityGroupName);
}

static int PyCThostFtdcRULEInterParameterField_set_TradingDay(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRULEInterParameterField_set_ExchangeID(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRULEInterParameterField_set_SpreadId(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected int"); 
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
    self->data.SpreadId = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRULEInterParameterField_set_InterRate(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterRate = buf;
    return 0;
}

static int PyCThostFtdcRULEInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.Leg1ProdFamilyCode, buf, sizeof(self->data.Leg1ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcRULEInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.Leg2ProdFamilyCode, buf, sizeof(self->data.Leg2ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcRULEInterParameterField_set_Leg1PropFactor(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg1PropFactor Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Leg1PropFactor Expected int"); 
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
    self->data.Leg1PropFactor = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRULEInterParameterField_set_Leg2PropFactor(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg2PropFactor Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Leg2PropFactor Expected int"); 
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
    self->data.Leg2PropFactor = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRULEInterParameterField_set_CommodityGroupID(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRULEInterParameterField_set_CommodityGroupName(PyCThostFtdcRULEInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommodityGroupName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupName)) {
		PyErr_SetString(PyExc_ValueError, "CommodityGroupName must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.CommodityGroupName, buf, sizeof(self->data.CommodityGroupName));
	return 0;
}



static PyGetSetDef PyCThostFtdcRULEInterParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRULEInterParameterField_get_TradingDay, (setter)PyCThostFtdcRULEInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRULEInterParameterField_get_ExchangeID, (setter)PyCThostFtdcRULEInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SpreadId", (getter)PyCThostFtdcRULEInterParameterField_get_SpreadId, (setter)PyCThostFtdcRULEInterParameterField_set_SpreadId, (char *)"SpreadId", NULL},
	 {(char *)"InterRate", (getter)PyCThostFtdcRULEInterParameterField_get_InterRate, (setter)PyCThostFtdcRULEInterParameterField_set_InterRate, (char *)"InterRate", NULL},
	 {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcRULEInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcRULEInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
	 {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcRULEInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcRULEInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},
	 {(char *)"Leg1PropFactor", (getter)PyCThostFtdcRULEInterParameterField_get_Leg1PropFactor, (setter)PyCThostFtdcRULEInterParameterField_set_Leg1PropFactor, (char *)"Leg1PropFactor", NULL},
	 {(char *)"Leg2PropFactor", (getter)PyCThostFtdcRULEInterParameterField_get_Leg2PropFactor, (setter)PyCThostFtdcRULEInterParameterField_set_Leg2PropFactor, (char *)"Leg2PropFactor", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcRULEInterParameterField_get_CommodityGroupID, (setter)PyCThostFtdcRULEInterParameterField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
	 {(char *)"CommodityGroupName", (getter)PyCThostFtdcRULEInterParameterField_get_CommodityGroupName, (setter)PyCThostFtdcRULEInterParameterField_set_CommodityGroupName, (char *)"CommodityGroupName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRULEInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRULEInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRULEInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRULEInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRULEInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRULEInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRULEInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRULEInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRULEInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcRULEInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRULEInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcRULEInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRULEInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRULEInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRULEInterParameterField", (PyObject *)&PyCThostFtdcRULEInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEInterParameterField to module");
        Py_DECREF(&PyCThostFtdcRULEInterParameterFieldType);
		return -1;
    }

    return 0;
}
