
#include "PyCThostFtdcQryInvestorProdRCAMSMarginField.h"

///投资者品种RCAMS保证金查询

static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorProdRCAMSMarginField *self = (PyCThostFtdcQryInvestorProdRCAMSMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorProdRCAMSMarginField_init(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "CombProductID", "ProductGroupID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorProdRCAMSMarginField_BrokerID = NULL;
    Py_ssize_t QryInvestorProdRCAMSMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorProdRCAMSMarginField_InvestorID = NULL;
    Py_ssize_t QryInvestorProdRCAMSMarginField_InvestorID_len = 0;
            
    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    const char *QryInvestorProdRCAMSMarginField_CombProductID = NULL;
    Py_ssize_t QryInvestorProdRCAMSMarginField_CombProductID_len = 0;
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    const char *QryInvestorProdRCAMSMarginField_ProductGroupID = NULL;
    Py_ssize_t QryInvestorProdRCAMSMarginField_ProductGroupID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryInvestorProdRCAMSMarginField_BrokerID, &QryInvestorProdRCAMSMarginField_BrokerID_len 
        , &QryInvestorProdRCAMSMarginField_InvestorID, &QryInvestorProdRCAMSMarginField_InvestorID_len 
        , &QryInvestorProdRCAMSMarginField_CombProductID, &QryInvestorProdRCAMSMarginField_CombProductID_len 
        , &QryInvestorProdRCAMSMarginField_ProductGroupID, &QryInvestorProdRCAMSMarginField_ProductGroupID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorProdRCAMSMarginField_BrokerID != NULL ) {
        if(QryInvestorProdRCAMSMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorProdRCAMSMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorProdRCAMSMarginField_BrokerID, QryInvestorProdRCAMSMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorProdRCAMSMarginField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorProdRCAMSMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorProdRCAMSMarginField_InvestorID != NULL ) {
        if(QryInvestorProdRCAMSMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorProdRCAMSMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorProdRCAMSMarginField_InvestorID, QryInvestorProdRCAMSMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorProdRCAMSMarginField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorProdRCAMSMarginField_InvestorID = NULL;
    }
            
    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    if( QryInvestorProdRCAMSMarginField_CombProductID != NULL ) {
        if(QryInvestorProdRCAMSMarginField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", QryInvestorProdRCAMSMarginField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
            return -1;
        }
        // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
        // memcpy(self->data.CombProductID, QryInvestorProdRCAMSMarginField_CombProductID, QryInvestorProdRCAMSMarginField_CombProductID_len);        
        strncpy(self->data.CombProductID, QryInvestorProdRCAMSMarginField_CombProductID, sizeof(self->data.CombProductID) );
        QryInvestorProdRCAMSMarginField_CombProductID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    if( QryInvestorProdRCAMSMarginField_ProductGroupID != NULL ) {
        if(QryInvestorProdRCAMSMarginField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", QryInvestorProdRCAMSMarginField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, QryInvestorProdRCAMSMarginField_ProductGroupID, QryInvestorProdRCAMSMarginField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, QryInvestorProdRCAMSMarginField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        QryInvestorProdRCAMSMarginField_ProductGroupID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInvestorProdRCAMSMarginField_dealloc(PyCThostFtdcQryInvestorProdRCAMSMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginField_repr(PyCThostFtdcQryInvestorProdRCAMSMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"CombProductID", self->data.CombProductID//, (Py_ssize_t)sizeof(self->data.CombProductID) 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdRCAMSMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginField_get_BrokerID(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorProdRCAMSMarginField_set_BrokerID(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginField_get_InvestorID(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorProdRCAMSMarginField_set_InvestorID(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
            
///产品组合代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginField_get_CombProductID(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProductID, (Py_ssize_t)sizeof(self->data.CombProductID));
    return PyBytes_FromString(self->data.CombProductID);
}

///产品组合代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryInvestorProdRCAMSMarginField_set_CombProductID(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
    // memcpy(self->data.CombProductID, buf, len);
    strncpy(self->data.CombProductID, buf, sizeof(self->data.CombProductID));
    return 0;
}
            
///商品群代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcQryInvestorProdRCAMSMarginField_get_ProductGroupID(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///商品群代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryInvestorProdRCAMSMarginField_set_ProductGroupID(PyCThostFtdcQryInvestorProdRCAMSMarginField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryInvestorProdRCAMSMarginField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorProdRCAMSMarginField_get_BrokerID, (setter)PyCThostFtdcQryInvestorProdRCAMSMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorProdRCAMSMarginField_get_InvestorID, (setter)PyCThostFtdcQryInvestorProdRCAMSMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///产品组合代码 
    {(char *)"CombProductID", (getter)PyCThostFtdcQryInvestorProdRCAMSMarginField_get_CombProductID, (setter)PyCThostFtdcQryInvestorProdRCAMSMarginField_set_CombProductID, (char *)"CombProductID", NULL},
    ///商品群代码 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcQryInvestorProdRCAMSMarginField_get_ProductGroupID, (setter)PyCThostFtdcQryInvestorProdRCAMSMarginField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorProdRCAMSMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorProdRCAMSMarginField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorProdRCAMSMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorProdRCAMSMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorProdRCAMSMarginField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorProdRCAMSMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorProdRCAMSMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorProdRCAMSMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorProdRCAMSMarginField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorProdRCAMSMarginField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorProdRCAMSMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorProdRCAMSMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorProdRCAMSMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProdRCAMSMarginField", (PyObject *)&PyCThostFtdcQryInvestorProdRCAMSMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProdRCAMSMarginField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorProdRCAMSMarginFieldType);
		return -1;
    }

    return 0;
}
