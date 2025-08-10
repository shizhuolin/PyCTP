
#include "PyCThostFtdcQrySPBMInterParameterField.h"

///SPBM跨品种抵扣参数查询

static PyObject *PyCThostFtdcQrySPBMInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPBMInterParameterField *self = (PyCThostFtdcQrySPBMInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPBMInterParameterField_init(PyCThostFtdcQrySPBMInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QrySPBMInterParameterField_ExchangeID = NULL;
    Py_ssize_t QrySPBMInterParameterField_ExchangeID_len = 0;
            
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *QrySPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t QrySPBMInterParameterField_Leg1ProdFamilyCode_len = 0;
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *QrySPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t QrySPBMInterParameterField_Leg2ProdFamilyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QrySPBMInterParameterField_ExchangeID, &QrySPBMInterParameterField_ExchangeID_len 
        , &QrySPBMInterParameterField_Leg1ProdFamilyCode, &QrySPBMInterParameterField_Leg1ProdFamilyCode_len 
        , &QrySPBMInterParameterField_Leg2ProdFamilyCode, &QrySPBMInterParameterField_Leg2ProdFamilyCode_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QrySPBMInterParameterField_ExchangeID != NULL ) {
        if(QrySPBMInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QrySPBMInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QrySPBMInterParameterField_ExchangeID, QrySPBMInterParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QrySPBMInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        QrySPBMInterParameterField_ExchangeID = NULL;
    }
            
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( QrySPBMInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(QrySPBMInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", QrySPBMInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
        // memcpy(self->data.Leg1ProdFamilyCode, QrySPBMInterParameterField_Leg1ProdFamilyCode, QrySPBMInterParameterField_Leg1ProdFamilyCode_len);        
        strncpy(self->data.Leg1ProdFamilyCode, QrySPBMInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
        QrySPBMInterParameterField_Leg1ProdFamilyCode = NULL;
    }
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( QrySPBMInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(QrySPBMInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", QrySPBMInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
        // memcpy(self->data.Leg2ProdFamilyCode, QrySPBMInterParameterField_Leg2ProdFamilyCode, QrySPBMInterParameterField_Leg2ProdFamilyCode_len);        
        strncpy(self->data.Leg2ProdFamilyCode, QrySPBMInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
        QrySPBMInterParameterField_Leg2ProdFamilyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySPBMInterParameterField_dealloc(PyCThostFtdcQrySPBMInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPBMInterParameterField_repr(PyCThostFtdcQrySPBMInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode) 
        ,"Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQrySPBMInterParameterField_get_ExchangeID(PyCThostFtdcQrySPBMInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQrySPBMInterParameterField_set_ExchangeID(PyCThostFtdcQrySPBMInterParameterField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQrySPBMInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcQrySPBMInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg1ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQrySPBMInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcQrySPBMInterParameterField *self, PyObject* val, void *closure) {
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
    // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
    // memcpy(self->data.Leg1ProdFamilyCode, buf, len);
    strncpy(self->data.Leg1ProdFamilyCode, buf, sizeof(self->data.Leg1ProdFamilyCode));
    return 0;
}
            
///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQrySPBMInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcQrySPBMInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg2ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQrySPBMInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcQrySPBMInterParameterField *self, PyObject* val, void *closure) {
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
    // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
    // memcpy(self->data.Leg2ProdFamilyCode, buf, len);
    strncpy(self->data.Leg2ProdFamilyCode, buf, sizeof(self->data.Leg2ProdFamilyCode));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQrySPBMInterParameterField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQrySPBMInterParameterField_get_ExchangeID, (setter)PyCThostFtdcQrySPBMInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///第一腿构成品种 
    {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcQrySPBMInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcQrySPBMInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
    ///第二腿构成品种 
    {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcQrySPBMInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcQrySPBMInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPBMInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPBMInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPBMInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPBMInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPBMInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPBMInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPBMInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPBMInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPBMInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcQrySPBMInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPBMInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcQrySPBMInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPBMInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPBMInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPBMInterParameterField", (PyObject *)&PyCThostFtdcQrySPBMInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMInterParameterField to module");
        Py_DECREF(&PyCThostFtdcQrySPBMInterParameterFieldType);
		return -1;
    }

    return 0;
}
