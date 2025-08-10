
#include "PyCThostFtdcQrySPBMOptionParameterField.h"

///SPBM期权合约保证金参数查询

static PyObject *PyCThostFtdcQrySPBMOptionParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPBMOptionParameterField *self = (PyCThostFtdcQrySPBMOptionParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPBMOptionParameterField_init(PyCThostFtdcQrySPBMOptionParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID", "ProdFamilyCode",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QrySPBMOptionParameterField_ExchangeID = NULL;
    Py_ssize_t QrySPBMOptionParameterField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QrySPBMOptionParameterField_InstrumentID = NULL;
    Py_ssize_t QrySPBMOptionParameterField_InstrumentID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QrySPBMOptionParameterField_ProdFamilyCode = NULL;
    Py_ssize_t QrySPBMOptionParameterField_ProdFamilyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QrySPBMOptionParameterField_ExchangeID, &QrySPBMOptionParameterField_ExchangeID_len 
        , &QrySPBMOptionParameterField_InstrumentID, &QrySPBMOptionParameterField_InstrumentID_len 
        , &QrySPBMOptionParameterField_ProdFamilyCode, &QrySPBMOptionParameterField_ProdFamilyCode_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QrySPBMOptionParameterField_ExchangeID != NULL ) {
        if(QrySPBMOptionParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QrySPBMOptionParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QrySPBMOptionParameterField_ExchangeID, QrySPBMOptionParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QrySPBMOptionParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        QrySPBMOptionParameterField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QrySPBMOptionParameterField_InstrumentID != NULL ) {
        if(QrySPBMOptionParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QrySPBMOptionParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QrySPBMOptionParameterField_InstrumentID, QrySPBMOptionParameterField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QrySPBMOptionParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
        QrySPBMOptionParameterField_InstrumentID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( QrySPBMOptionParameterField_ProdFamilyCode != NULL ) {
        if(QrySPBMOptionParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", QrySPBMOptionParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, QrySPBMOptionParameterField_ProdFamilyCode, QrySPBMOptionParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, QrySPBMOptionParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        QrySPBMOptionParameterField_ProdFamilyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySPBMOptionParameterField_dealloc(PyCThostFtdcQrySPBMOptionParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPBMOptionParameterField_repr(PyCThostFtdcQrySPBMOptionParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMOptionParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQrySPBMOptionParameterField_get_ExchangeID(PyCThostFtdcQrySPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQrySPBMOptionParameterField_set_ExchangeID(PyCThostFtdcQrySPBMOptionParameterField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQrySPBMOptionParameterField_get_InstrumentID(PyCThostFtdcQrySPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQrySPBMOptionParameterField_set_InstrumentID(PyCThostFtdcQrySPBMOptionParameterField *self, PyObject* val, void *closure) {
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
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQrySPBMOptionParameterField_get_ProdFamilyCode(PyCThostFtdcQrySPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQrySPBMOptionParameterField_set_ProdFamilyCode(PyCThostFtdcQrySPBMOptionParameterField *self, PyObject* val, void *closure) {
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
    // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
    // memcpy(self->data.ProdFamilyCode, buf, len);
    strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQrySPBMOptionParameterField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQrySPBMOptionParameterField_get_ExchangeID, (setter)PyCThostFtdcQrySPBMOptionParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQrySPBMOptionParameterField_get_InstrumentID, (setter)PyCThostFtdcQrySPBMOptionParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQrySPBMOptionParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcQrySPBMOptionParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPBMOptionParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPBMOptionParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPBMOptionParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPBMOptionParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPBMOptionParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPBMOptionParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPBMOptionParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPBMOptionParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPBMOptionParameterField_new,       /* tp_new */
};

int PyCThostFtdcQrySPBMOptionParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPBMOptionParameterField  */
	if (PyType_Ready(&PyCThostFtdcQrySPBMOptionParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPBMOptionParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPBMOptionParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPBMOptionParameterField", (PyObject *)&PyCThostFtdcQrySPBMOptionParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMOptionParameterField to module");
        Py_DECREF(&PyCThostFtdcQrySPBMOptionParameterFieldType);
		return -1;
    }

    return 0;
}
