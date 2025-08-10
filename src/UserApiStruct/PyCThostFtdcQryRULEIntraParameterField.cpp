
#include "PyCThostFtdcQryRULEIntraParameterField.h"

///RULE品种内对锁仓折扣参数查询

static PyObject *PyCThostFtdcQryRULEIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRULEIntraParameterField *self = (PyCThostFtdcQryRULEIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryRULEIntraParameterField_init(PyCThostFtdcQryRULEIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ProdFamilyCode",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryRULEIntraParameterField_ExchangeID = NULL;
    Py_ssize_t QryRULEIntraParameterField_ExchangeID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryRULEIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t QryRULEIntraParameterField_ProdFamilyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QryRULEIntraParameterField_ExchangeID, &QryRULEIntraParameterField_ExchangeID_len 
        , &QryRULEIntraParameterField_ProdFamilyCode, &QryRULEIntraParameterField_ProdFamilyCode_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryRULEIntraParameterField_ExchangeID != NULL ) {
        if(QryRULEIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryRULEIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryRULEIntraParameterField_ExchangeID, QryRULEIntraParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryRULEIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryRULEIntraParameterField_ExchangeID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryRULEIntraParameterField_ProdFamilyCode != NULL ) {
        if(QryRULEIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", QryRULEIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, QryRULEIntraParameterField_ProdFamilyCode, QryRULEIntraParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, QryRULEIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        QryRULEIntraParameterField_ProdFamilyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryRULEIntraParameterField_dealloc(PyCThostFtdcQryRULEIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRULEIntraParameterField_repr(PyCThostFtdcQryRULEIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryRULEIntraParameterField_get_ExchangeID(PyCThostFtdcQryRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryRULEIntraParameterField_set_ExchangeID(PyCThostFtdcQryRULEIntraParameterField *self, PyObject* val, void *closure) {
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
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryRULEIntraParameterField_get_ProdFamilyCode(PyCThostFtdcQryRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryRULEIntraParameterField_set_ProdFamilyCode(PyCThostFtdcQryRULEIntraParameterField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryRULEIntraParameterField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryRULEIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcQryRULEIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQryRULEIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcQryRULEIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRULEIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRULEIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQryRULEIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRULEIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRULEIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQryRULEIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRULEIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRULEIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRULEIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcQryRULEIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRULEIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcQryRULEIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRULEIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRULEIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRULEIntraParameterField", (PyObject *)&PyCThostFtdcQryRULEIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRULEIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcQryRULEIntraParameterFieldType);
		return -1;
    }

    return 0;
}
