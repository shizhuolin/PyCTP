
#include "PyCThostFtdcQryInvestorPortfMarginRatioField.h"

///投资者新型组合保证金系数查询

static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorPortfMarginRatioField *self = (PyCThostFtdcQryInvestorPortfMarginRatioField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorPortfMarginRatioField_init(PyCThostFtdcQryInvestorPortfMarginRatioField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID", "ProductGroupID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorPortfMarginRatioField_BrokerID = NULL;
    Py_ssize_t QryInvestorPortfMarginRatioField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorPortfMarginRatioField_InvestorID = NULL;
    Py_ssize_t QryInvestorPortfMarginRatioField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryInvestorPortfMarginRatioField_ExchangeID = NULL;
    Py_ssize_t QryInvestorPortfMarginRatioField_ExchangeID_len = 0;
            
    ///产品群代码
    // TThostFtdcProductIDType char[41]
    const char *QryInvestorPortfMarginRatioField_ProductGroupID = NULL;
    Py_ssize_t QryInvestorPortfMarginRatioField_ProductGroupID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryInvestorPortfMarginRatioField_BrokerID, &QryInvestorPortfMarginRatioField_BrokerID_len 
        , &QryInvestorPortfMarginRatioField_InvestorID, &QryInvestorPortfMarginRatioField_InvestorID_len 
        , &QryInvestorPortfMarginRatioField_ExchangeID, &QryInvestorPortfMarginRatioField_ExchangeID_len 
        , &QryInvestorPortfMarginRatioField_ProductGroupID, &QryInvestorPortfMarginRatioField_ProductGroupID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorPortfMarginRatioField_BrokerID != NULL ) {
        if(QryInvestorPortfMarginRatioField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorPortfMarginRatioField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorPortfMarginRatioField_BrokerID, QryInvestorPortfMarginRatioField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorPortfMarginRatioField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorPortfMarginRatioField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorPortfMarginRatioField_InvestorID != NULL ) {
        if(QryInvestorPortfMarginRatioField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorPortfMarginRatioField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorPortfMarginRatioField_InvestorID, QryInvestorPortfMarginRatioField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorPortfMarginRatioField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorPortfMarginRatioField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryInvestorPortfMarginRatioField_ExchangeID != NULL ) {
        if(QryInvestorPortfMarginRatioField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryInvestorPortfMarginRatioField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryInvestorPortfMarginRatioField_ExchangeID, QryInvestorPortfMarginRatioField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryInvestorPortfMarginRatioField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryInvestorPortfMarginRatioField_ExchangeID = NULL;
    }
            
    ///产品群代码
    // TThostFtdcProductIDType char[41]
    if( QryInvestorPortfMarginRatioField_ProductGroupID != NULL ) {
        if(QryInvestorPortfMarginRatioField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", QryInvestorPortfMarginRatioField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, QryInvestorPortfMarginRatioField_ProductGroupID, QryInvestorPortfMarginRatioField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, QryInvestorPortfMarginRatioField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        QryInvestorPortfMarginRatioField_ProductGroupID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInvestorPortfMarginRatioField_dealloc(PyCThostFtdcQryInvestorPortfMarginRatioField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioField_repr(PyCThostFtdcQryInvestorPortfMarginRatioField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPortfMarginRatioField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioField_get_BrokerID(PyCThostFtdcQryInvestorPortfMarginRatioField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorPortfMarginRatioField_set_BrokerID(PyCThostFtdcQryInvestorPortfMarginRatioField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioField_get_InvestorID(PyCThostFtdcQryInvestorPortfMarginRatioField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorPortfMarginRatioField_set_InvestorID(PyCThostFtdcQryInvestorPortfMarginRatioField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioField_get_ExchangeID(PyCThostFtdcQryInvestorPortfMarginRatioField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryInvestorPortfMarginRatioField_set_ExchangeID(PyCThostFtdcQryInvestorPortfMarginRatioField *self, PyObject* val, void *closure) {
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
            
///产品群代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcQryInvestorPortfMarginRatioField_get_ProductGroupID(PyCThostFtdcQryInvestorPortfMarginRatioField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///产品群代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryInvestorPortfMarginRatioField_set_ProductGroupID(PyCThostFtdcQryInvestorPortfMarginRatioField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
    // memcpy(self->data.ProductGroupID, buf, len);
    strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryInvestorPortfMarginRatioField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorPortfMarginRatioField_get_BrokerID, (setter)PyCThostFtdcQryInvestorPortfMarginRatioField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorPortfMarginRatioField_get_InvestorID, (setter)PyCThostFtdcQryInvestorPortfMarginRatioField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorPortfMarginRatioField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorPortfMarginRatioField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品群代码 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcQryInvestorPortfMarginRatioField_get_ProductGroupID, (setter)PyCThostFtdcQryInvestorPortfMarginRatioField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorPortfMarginRatioFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorPortfMarginRatioField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorPortfMarginRatioField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorPortfMarginRatioField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorPortfMarginRatioField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorPortfMarginRatioField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorPortfMarginRatioField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorPortfMarginRatioField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorPortfMarginRatioField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorPortfMarginRatioFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorPortfMarginRatioField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorPortfMarginRatioFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorPortfMarginRatioField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorPortfMarginRatioFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPortfMarginRatioField", (PyObject *)&PyCThostFtdcQryInvestorPortfMarginRatioFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPortfMarginRatioField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorPortfMarginRatioFieldType);
		return -1;
    }

    return 0;
}
