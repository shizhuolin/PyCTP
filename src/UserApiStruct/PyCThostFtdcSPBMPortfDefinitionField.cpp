
#include "PyCThostFtdcSPBMPortfDefinitionField.h"



static PyObject *PyCThostFtdcSPBMPortfDefinitionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMPortfDefinitionField *self = (PyCThostFtdcSPBMPortfDefinitionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMPortfDefinitionField_init(PyCThostFtdcSPBMPortfDefinitionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "PortfolioDefID", "ProdFamilyCode", "IsSPBM",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSPBMPortfDefinitionField_ExchangeID = NULL;
	Py_ssize_t pSPBMPortfDefinitionField_ExchangeID_len = 0;

	//TThostFtdcPortfolioDefIDType int
	int pSPBMPortfDefinitionField_PortfolioDefID = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMPortfDefinitionField_ProdFamilyCode = NULL;
	Py_ssize_t pSPBMPortfDefinitionField_ProdFamilyCode_len = 0;

	//TThostFtdcBoolType int
	int pSPBMPortfDefinitionField_IsSPBM = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#i", (char **)kwlist
#endif

		, &pSPBMPortfDefinitionField_ExchangeID, &pSPBMPortfDefinitionField_ExchangeID_len
		, &pSPBMPortfDefinitionField_PortfolioDefID
		, &pSPBMPortfDefinitionField_ProdFamilyCode, &pSPBMPortfDefinitionField_ProdFamilyCode_len
		, &pSPBMPortfDefinitionField_IsSPBM


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSPBMPortfDefinitionField_ExchangeID != NULL) {
		if(pSPBMPortfDefinitionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSPBMPortfDefinitionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSPBMPortfDefinitionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSPBMPortfDefinitionField_ExchangeID = NULL;
	}

	//TThostFtdcPortfolioDefIDType int
	self->data.PortfolioDefID = pSPBMPortfDefinitionField_PortfolioDefID;

	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMPortfDefinitionField_ProdFamilyCode != NULL) {
		if(pSPBMPortfDefinitionField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSPBMPortfDefinitionField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pSPBMPortfDefinitionField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pSPBMPortfDefinitionField_ProdFamilyCode = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsSPBM = pSPBMPortfDefinitionField_IsSPBM;



    return 0;
}

static void PyCThostFtdcSPBMPortfDefinitionField_dealloc(PyCThostFtdcSPBMPortfDefinitionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMPortfDefinitionField_repr(PyCThostFtdcSPBMPortfDefinitionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "PortfolioDefID", self->data.PortfolioDefID
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "IsSPBM", self->data.IsSPBM


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMPortfDefinitionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSPBMPortfDefinitionField_get_ExchangeID(PyCThostFtdcSPBMPortfDefinitionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSPBMPortfDefinitionField_get_PortfolioDefID(PyCThostFtdcSPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PortfolioDefID);
#else 
	return PyInt_FromLong(self->data.PortfolioDefID);
#endif 
}

static PyObject *PyCThostFtdcSPBMPortfDefinitionField_get_ProdFamilyCode(PyCThostFtdcSPBMPortfDefinitionField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcSPBMPortfDefinitionField_get_IsSPBM(PyCThostFtdcSPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSPBM);
#else 
	return PyInt_FromLong(self->data.IsSPBM);
#endif 
}

static int PyCThostFtdcSPBMPortfDefinitionField_set_ExchangeID(PyCThostFtdcSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMPortfDefinitionField_set_PortfolioDefID(PyCThostFtdcSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMPortfDefinitionField_set_ProdFamilyCode(PyCThostFtdcSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMPortfDefinitionField_set_IsSPBM(PyCThostFtdcSPBMPortfDefinitionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSPBMPortfDefinitionField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMPortfDefinitionField_get_ExchangeID, (setter)PyCThostFtdcSPBMPortfDefinitionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"PortfolioDefID", (getter)PyCThostFtdcSPBMPortfDefinitionField_get_PortfolioDefID, (setter)PyCThostFtdcSPBMPortfDefinitionField_set_PortfolioDefID, (char *)"PortfolioDefID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSPBMPortfDefinitionField_get_ProdFamilyCode, (setter)PyCThostFtdcSPBMPortfDefinitionField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"IsSPBM", (getter)PyCThostFtdcSPBMPortfDefinitionField_get_IsSPBM, (setter)PyCThostFtdcSPBMPortfDefinitionField_set_IsSPBM, (char *)"IsSPBM", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMPortfDefinitionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMPortfDefinitionField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMPortfDefinitionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMPortfDefinitionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMPortfDefinitionField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMPortfDefinitionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMPortfDefinitionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMPortfDefinitionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMPortfDefinitionField_new,       /* tp_new */
};

int PyCThostFtdcSPBMPortfDefinitionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMPortfDefinitionField  */
	if (PyType_Ready(&PyCThostFtdcSPBMPortfDefinitionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMPortfDefinitionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMPortfDefinitionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMPortfDefinitionField", (PyObject *)&PyCThostFtdcSPBMPortfDefinitionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMPortfDefinitionField to module");
        Py_DECREF(&PyCThostFtdcSPBMPortfDefinitionFieldType);
		return -1;
    }

    return 0;
}
