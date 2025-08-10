
#include "PyCThostFtdcQrySPBMAddOnInterParameterField.h"

///SPBM附加跨品种抵扣参数查询

static PyObject *PyCThostFtdcQrySPBMAddOnInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPBMAddOnInterParameterField *self = (PyCThostFtdcQrySPBMAddOnInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPBMAddOnInterParameterField_init(PyCThostFtdcQrySPBMAddOnInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QrySPBMAddOnInterParameterField_ExchangeID = NULL;
    Py_ssize_t QrySPBMAddOnInterParameterField_ExchangeID_len = 0;
            
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode_len = 0;
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QrySPBMAddOnInterParameterField_ExchangeID, &QrySPBMAddOnInterParameterField_ExchangeID_len 
        , &QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode, &QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode_len 
        , &QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode, &QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QrySPBMAddOnInterParameterField_ExchangeID != NULL ) {
        if(QrySPBMAddOnInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QrySPBMAddOnInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QrySPBMAddOnInterParameterField_ExchangeID, QrySPBMAddOnInterParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QrySPBMAddOnInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        QrySPBMAddOnInterParameterField_ExchangeID = NULL;
    }
            
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
        // memcpy(self->data.Leg1ProdFamilyCode, QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode, QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode_len);        
        strncpy(self->data.Leg1ProdFamilyCode, QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
        QrySPBMAddOnInterParameterField_Leg1ProdFamilyCode = NULL;
    }
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
        // memcpy(self->data.Leg2ProdFamilyCode, QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode, QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode_len);        
        strncpy(self->data.Leg2ProdFamilyCode, QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
        QrySPBMAddOnInterParameterField_Leg2ProdFamilyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySPBMAddOnInterParameterField_dealloc(PyCThostFtdcQrySPBMAddOnInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPBMAddOnInterParameterField_repr(PyCThostFtdcQrySPBMAddOnInterParameterField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMAddOnInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQrySPBMAddOnInterParameterField_get_ExchangeID(PyCThostFtdcQrySPBMAddOnInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQrySPBMAddOnInterParameterField_set_ExchangeID(PyCThostFtdcQrySPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQrySPBMAddOnInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcQrySPBMAddOnInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg1ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQrySPBMAddOnInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcQrySPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQrySPBMAddOnInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcQrySPBMAddOnInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg2ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQrySPBMAddOnInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcQrySPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQrySPBMAddOnInterParameterField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQrySPBMAddOnInterParameterField_get_ExchangeID, (setter)PyCThostFtdcQrySPBMAddOnInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///第一腿构成品种 
    {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcQrySPBMAddOnInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcQrySPBMAddOnInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
    ///第二腿构成品种 
    {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcQrySPBMAddOnInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcQrySPBMAddOnInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPBMAddOnInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPBMAddOnInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPBMAddOnInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPBMAddOnInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPBMAddOnInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPBMAddOnInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPBMAddOnInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPBMAddOnInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPBMAddOnInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcQrySPBMAddOnInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPBMAddOnInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcQrySPBMAddOnInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPBMAddOnInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPBMAddOnInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPBMAddOnInterParameterField", (PyObject *)&PyCThostFtdcQrySPBMAddOnInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMAddOnInterParameterField to module");
        Py_DECREF(&PyCThostFtdcQrySPBMAddOnInterParameterFieldType);
		return -1;
    }

    return 0;
}
