
#include "PyCThostFtdcSyncDeltaSPBMIntraParameterField.h"



static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMIntraParameterField *self = (PyCThostFtdcSyncDeltaSPBMIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_init(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdFamilyCode", "IntraRateY", "AddOnIntraRateY2", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaSPBMIntraParameterField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaSPBMIntraParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaSPBMIntraParameterField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaSPBMIntraParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPBMIntraParameterField_ProdFamilyCode = NULL;
	Py_ssize_t pSyncDeltaSPBMIntraParameterField_ProdFamilyCode_len = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaSPBMIntraParameterField_IntraRateY = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaSPBMIntraParameterField_AddOnIntraRateY2 = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaSPBMIntraParameterField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ddci", (char **)kwlist
#endif

		, &pSyncDeltaSPBMIntraParameterField_TradingDay, &pSyncDeltaSPBMIntraParameterField_TradingDay_len
		, &pSyncDeltaSPBMIntraParameterField_ExchangeID, &pSyncDeltaSPBMIntraParameterField_ExchangeID_len
		, &pSyncDeltaSPBMIntraParameterField_ProdFamilyCode, &pSyncDeltaSPBMIntraParameterField_ProdFamilyCode_len
		, &pSyncDeltaSPBMIntraParameterField_IntraRateY
		, &pSyncDeltaSPBMIntraParameterField_AddOnIntraRateY2
		, &pSyncDeltaSPBMIntraParameterField_ActionDirection
		, &pSyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaSPBMIntraParameterField_TradingDay != NULL) {
		if(pSyncDeltaSPBMIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaSPBMIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaSPBMIntraParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaSPBMIntraParameterField_ExchangeID != NULL) {
		if(pSyncDeltaSPBMIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaSPBMIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaSPBMIntraParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPBMIntraParameterField_ProdFamilyCode != NULL) {
		if(pSyncDeltaSPBMIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pSyncDeltaSPBMIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pSyncDeltaSPBMIntraParameterField_ProdFamilyCode = NULL;
	}

	//TThostFtdcRatioType double
	self->data.IntraRateY = pSyncDeltaSPBMIntraParameterField_IntraRateY;
	//TThostFtdcRatioType double
	self->data.AddOnIntraRateY2 = pSyncDeltaSPBMIntraParameterField_AddOnIntraRateY2;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaSPBMIntraParameterField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMIntraParameterField_dealloc(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_repr(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "IntraRateY", self->data.IntraRateY
		, "AddOnIntraRateY2", self->data.AddOnIntraRateY2
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_TradingDay(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_IntraRateY(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraRateY);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_AddOnIntraRateY2(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnIntraRateY2);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_TradingDay(PyCThostFtdcSyncDeltaSPBMIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMIntraParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_IntraRateY(PyCThostFtdcSyncDeltaSPBMIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraRateY Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraRateY = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_AddOnIntraRateY2(PyCThostFtdcSyncDeltaSPBMIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnIntraRateY2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnIntraRateY2 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMIntraParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
		PyErr_SetString(PyExc_ValueError, "ActionDirection must be less than 1 bytes");
		return -1;
	}
	self->data.ActionDirection = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMIntraParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int"); 
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
    self->data.SyncDeltaSequenceNo = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDeltaSPBMIntraParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"IntraRateY", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_IntraRateY, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_IntraRateY, (char *)"IntraRateY", NULL},
	 {(char *)"AddOnIntraRateY2", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_AddOnIntraRateY2, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_AddOnIntraRateY2, (char *)"AddOnIntraRateY2", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMIntraParameterField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType);
		return -1;
    }

    return 0;
}
