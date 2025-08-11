
#include "PyCThostFtdcSyncDeltaSPBMPortfDefinitionField.h"



static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self = (PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_init(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "PortfolioDefID", "ProdFamilyCode", "IsSPBM", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaSPBMPortfDefinitionField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaSPBMPortfDefinitionField_ExchangeID_len = 0;

	//TThostFtdcPortfolioDefIDType int
	int pSyncDeltaSPBMPortfDefinitionField_PortfolioDefID = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode = NULL;
	Py_ssize_t pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len = 0;

	//TThostFtdcBoolType int
	int pSyncDeltaSPBMPortfDefinitionField_IsSPBM = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaSPBMPortfDefinitionField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#ici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#ici", (char **)kwlist
#endif

		, &pSyncDeltaSPBMPortfDefinitionField_ExchangeID, &pSyncDeltaSPBMPortfDefinitionField_ExchangeID_len
		, &pSyncDeltaSPBMPortfDefinitionField_PortfolioDefID
		, &pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode, &pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len
		, &pSyncDeltaSPBMPortfDefinitionField_IsSPBM
		, &pSyncDeltaSPBMPortfDefinitionField_ActionDirection
		, &pSyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaSPBMPortfDefinitionField_ExchangeID != NULL) {
		if(pSyncDeltaSPBMPortfDefinitionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMPortfDefinitionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaSPBMPortfDefinitionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaSPBMPortfDefinitionField_ExchangeID = NULL;
	}

	//TThostFtdcPortfolioDefIDType int
	self->data.PortfolioDefID = pSyncDeltaSPBMPortfDefinitionField_PortfolioDefID;

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode != NULL) {
		if(pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pSyncDeltaSPBMPortfDefinitionField_ProdFamilyCode = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsSPBM = pSyncDeltaSPBMPortfDefinitionField_IsSPBM;

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaSPBMPortfDefinitionField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_dealloc(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_repr(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s,s:i,s:c,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "PortfolioDefID", self->data.PortfolioDefID
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "IsSPBM", self->data.IsSPBM
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMPortfDefinitionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_PortfolioDefID(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PortfolioDefID);
#else 
	return PyInt_FromLong(self->data.PortfolioDefID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_IsSPBM(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSPBM);
#else 
	return PyInt_FromLong(self->data.IsSPBM);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_PortfolioDefID(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PortfolioDefID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "PortfolioDefID Expected int"); 
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
    self->data.PortfolioDefID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_IsSPBM(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSPBM Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsSPBM Expected int"); 
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
    self->data.IsSPBM = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"PortfolioDefID", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_PortfolioDefID, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_PortfolioDefID, (char *)"PortfolioDefID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"IsSPBM", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_IsSPBM, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_IsSPBM, (char *)"IsSPBM", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMPortfDefinitionField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMPortfDefinitionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMPortfDefinitionField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMPortfDefinitionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMPortfDefinitionField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMPortfDefinitionField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType);
		return -1;
    }

    return 0;
}
