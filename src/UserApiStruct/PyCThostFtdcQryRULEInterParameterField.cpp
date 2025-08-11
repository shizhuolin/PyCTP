
#include "PyCThostFtdcQryRULEInterParameterField.h"



static PyObject *PyCThostFtdcQryRULEInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRULEInterParameterField *self = (PyCThostFtdcQryRULEInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryRULEInterParameterField_init(PyCThostFtdcQryRULEInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "CommodityGroupID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryRULEInterParameterField_ExchangeID = NULL;
	Py_ssize_t pQryRULEInterParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryRULEInterParameterField_Leg1ProdFamilyCode = NULL;
	Py_ssize_t pQryRULEInterParameterField_Leg1ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryRULEInterParameterField_Leg2ProdFamilyCode = NULL;
	Py_ssize_t pQryRULEInterParameterField_Leg2ProdFamilyCode_len = 0;

	//TThostFtdcCommodityGroupIDType int
	int pQryRULEInterParameterField_CommodityGroupID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

		, &pQryRULEInterParameterField_ExchangeID, &pQryRULEInterParameterField_ExchangeID_len
		, &pQryRULEInterParameterField_Leg1ProdFamilyCode, &pQryRULEInterParameterField_Leg1ProdFamilyCode_len
		, &pQryRULEInterParameterField_Leg2ProdFamilyCode, &pQryRULEInterParameterField_Leg2ProdFamilyCode_len
		, &pQryRULEInterParameterField_CommodityGroupID


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryRULEInterParameterField_ExchangeID != NULL) {
		if(pQryRULEInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryRULEInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryRULEInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryRULEInterParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryRULEInterParameterField_Leg1ProdFamilyCode != NULL) {
		if(pQryRULEInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", pQryRULEInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg1ProdFamilyCode, pQryRULEInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
		pQryRULEInterParameterField_Leg1ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryRULEInterParameterField_Leg2ProdFamilyCode != NULL) {
		if(pQryRULEInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", pQryRULEInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg2ProdFamilyCode, pQryRULEInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
		pQryRULEInterParameterField_Leg2ProdFamilyCode = NULL;
	}

	//TThostFtdcCommodityGroupIDType int
	self->data.CommodityGroupID = pQryRULEInterParameterField_CommodityGroupID;



    return 0;
}

static void PyCThostFtdcQryRULEInterParameterField_dealloc(PyCThostFtdcQryRULEInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRULEInterParameterField_repr(PyCThostFtdcQryRULEInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode 
		, "Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode 
		, "CommodityGroupID", self->data.CommodityGroupID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryRULEInterParameterField_get_ExchangeID(PyCThostFtdcQryRULEInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryRULEInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcQryRULEInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

static PyObject *PyCThostFtdcQryRULEInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcQryRULEInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

static PyObject *PyCThostFtdcQryRULEInterParameterField_get_CommodityGroupID(PyCThostFtdcQryRULEInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CommodityGroupID);
#else 
	return PyInt_FromLong(self->data.CommodityGroupID);
#endif 
}

static int PyCThostFtdcQryRULEInterParameterField_set_ExchangeID(PyCThostFtdcQryRULEInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryRULEInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcQryRULEInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryRULEInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcQryRULEInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryRULEInterParameterField_set_CommodityGroupID(PyCThostFtdcQryRULEInterParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryRULEInterParameterField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryRULEInterParameterField_get_ExchangeID, (setter)PyCThostFtdcQryRULEInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcQryRULEInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcQryRULEInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
	 {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcQryRULEInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcQryRULEInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcQryRULEInterParameterField_get_CommodityGroupID, (setter)PyCThostFtdcQryRULEInterParameterField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRULEInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRULEInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQryRULEInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRULEInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRULEInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQryRULEInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRULEInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRULEInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRULEInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcQryRULEInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRULEInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcQryRULEInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRULEInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRULEInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRULEInterParameterField", (PyObject *)&PyCThostFtdcQryRULEInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRULEInterParameterField to module");
        Py_DECREF(&PyCThostFtdcQryRULEInterParameterFieldType);
		return -1;
    }

    return 0;
}
