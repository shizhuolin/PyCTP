
#include "PyCThostFtdcRiskSettleProductStatusField.h"

///风险品种

static PyObject *PyCThostFtdcRiskSettleProductStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRiskSettleProductStatusField *self = (PyCThostFtdcRiskSettleProductStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRiskSettleProductStatusField_init(PyCThostFtdcRiskSettleProductStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ProductID", "ProductStatus",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RiskSettleProductStatusField_ExchangeID = NULL;
    Py_ssize_t RiskSettleProductStatusField_ExchangeID_len = 0;
            
    ///产品编号
    // TThostFtdcInstrumentIDType char[81]
    const char *RiskSettleProductStatusField_ProductID = NULL;
    Py_ssize_t RiskSettleProductStatusField_ProductID_len = 0;
            
    ///产品结算状态
    // TThostFtdcProductStatusType char
    char RiskSettleProductStatusField_ProductStatus = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#c", (char **)kwlist
#endif

        , &RiskSettleProductStatusField_ExchangeID, &RiskSettleProductStatusField_ExchangeID_len 
        , &RiskSettleProductStatusField_ProductID, &RiskSettleProductStatusField_ProductID_len 
        , &RiskSettleProductStatusField_ProductStatus 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RiskSettleProductStatusField_ExchangeID != NULL ) {
        if(RiskSettleProductStatusField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RiskSettleProductStatusField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RiskSettleProductStatusField_ExchangeID, RiskSettleProductStatusField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RiskSettleProductStatusField_ExchangeID, sizeof(self->data.ExchangeID) );
        RiskSettleProductStatusField_ExchangeID = NULL;
    }
            
    ///产品编号
    // TThostFtdcInstrumentIDType char[81]
    if( RiskSettleProductStatusField_ProductID != NULL ) {
        if(RiskSettleProductStatusField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", RiskSettleProductStatusField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, RiskSettleProductStatusField_ProductID, RiskSettleProductStatusField_ProductID_len);        
        strncpy(self->data.ProductID, RiskSettleProductStatusField_ProductID, sizeof(self->data.ProductID) );
        RiskSettleProductStatusField_ProductID = NULL;
    }
            
    ///产品结算状态
    // TThostFtdcProductStatusType char
    self->data.ProductStatus = RiskSettleProductStatusField_ProductStatus;
            

    return 0;
}

static void PyCThostFtdcRiskSettleProductStatusField_dealloc(PyCThostFtdcRiskSettleProductStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRiskSettleProductStatusField_repr(PyCThostFtdcRiskSettleProductStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"ProductStatus", self->data.ProductStatus 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskSettleProductStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcRiskSettleProductStatusField_get_ExchangeID(PyCThostFtdcRiskSettleProductStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRiskSettleProductStatusField_set_ExchangeID(PyCThostFtdcRiskSettleProductStatusField *self, PyObject* val, void *closure) {
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
            
///产品编号
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcRiskSettleProductStatusField_get_ProductID(PyCThostFtdcRiskSettleProductStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品编号
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRiskSettleProductStatusField_set_ProductID(PyCThostFtdcRiskSettleProductStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///产品结算状态
// TThostFtdcProductStatusType char
static PyObject *PyCThostFtdcRiskSettleProductStatusField_get_ProductStatus(PyCThostFtdcRiskSettleProductStatusField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ProductStatus), 1);
}

///产品结算状态
// TThostFtdcProductStatusType char
static int PyCThostFtdcRiskSettleProductStatusField_set_ProductStatus(PyCThostFtdcRiskSettleProductStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductStatus)) {
        PyErr_SetString(PyExc_ValueError, "ProductStatus must be equal 1 bytes");
        return -1;
    }
    self->data.ProductStatus = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcRiskSettleProductStatusField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRiskSettleProductStatusField_get_ExchangeID, (setter)PyCThostFtdcRiskSettleProductStatusField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品编号 
    {(char *)"ProductID", (getter)PyCThostFtdcRiskSettleProductStatusField_get_ProductID, (setter)PyCThostFtdcRiskSettleProductStatusField_set_ProductID, (char *)"ProductID", NULL},
    ///产品结算状态 
    {(char *)"ProductStatus", (getter)PyCThostFtdcRiskSettleProductStatusField_get_ProductStatus, (setter)PyCThostFtdcRiskSettleProductStatusField_set_ProductStatus, (char *)"ProductStatus", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRiskSettleProductStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRiskSettleProductStatusField",	/* tp_name */
	sizeof(PyCThostFtdcRiskSettleProductStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRiskSettleProductStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRiskSettleProductStatusField_repr,   /* tp_repr */
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
	"CThostFtdcRiskSettleProductStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRiskSettleProductStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRiskSettleProductStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRiskSettleProductStatusField_new,       /* tp_new */
};

int PyCThostFtdcRiskSettleProductStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRiskSettleProductStatusField  */
	if (PyType_Ready(&PyCThostFtdcRiskSettleProductStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRiskSettleProductStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRiskSettleProductStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRiskSettleProductStatusField", (PyObject *)&PyCThostFtdcRiskSettleProductStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRiskSettleProductStatusField to module");
        Py_DECREF(&PyCThostFtdcRiskSettleProductStatusFieldType);
		return -1;
    }

    return 0;
}
