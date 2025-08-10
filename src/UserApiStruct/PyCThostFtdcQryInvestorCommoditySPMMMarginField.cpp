
#include "PyCThostFtdcQryInvestorCommoditySPMMMarginField.h"

///投资者商品组SPMM记录查询

static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorCommoditySPMMMarginField *self = (PyCThostFtdcQryInvestorCommoditySPMMMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorCommoditySPMMMarginField_init(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "CommodityID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorCommoditySPMMMarginField_BrokerID = NULL;
    Py_ssize_t QryInvestorCommoditySPMMMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorCommoditySPMMMarginField_InvestorID = NULL;
    Py_ssize_t QryInvestorCommoditySPMMMarginField_InvestorID_len = 0;
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *QryInvestorCommoditySPMMMarginField_CommodityID = NULL;
    Py_ssize_t QryInvestorCommoditySPMMMarginField_CommodityID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryInvestorCommoditySPMMMarginField_BrokerID, &QryInvestorCommoditySPMMMarginField_BrokerID_len 
        , &QryInvestorCommoditySPMMMarginField_InvestorID, &QryInvestorCommoditySPMMMarginField_InvestorID_len 
        , &QryInvestorCommoditySPMMMarginField_CommodityID, &QryInvestorCommoditySPMMMarginField_CommodityID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorCommoditySPMMMarginField_BrokerID != NULL ) {
        if(QryInvestorCommoditySPMMMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorCommoditySPMMMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorCommoditySPMMMarginField_BrokerID, QryInvestorCommoditySPMMMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorCommoditySPMMMarginField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorCommoditySPMMMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorCommoditySPMMMarginField_InvestorID != NULL ) {
        if(QryInvestorCommoditySPMMMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorCommoditySPMMMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorCommoditySPMMMarginField_InvestorID, QryInvestorCommoditySPMMMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorCommoditySPMMMarginField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorCommoditySPMMMarginField_InvestorID = NULL;
    }
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    if( QryInvestorCommoditySPMMMarginField_CommodityID != NULL ) {
        if(QryInvestorCommoditySPMMMarginField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", QryInvestorCommoditySPMMMarginField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
            return -1;
        }
        // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
        // memcpy(self->data.CommodityID, QryInvestorCommoditySPMMMarginField_CommodityID, QryInvestorCommoditySPMMMarginField_CommodityID_len);        
        strncpy(self->data.CommodityID, QryInvestorCommoditySPMMMarginField_CommodityID, sizeof(self->data.CommodityID) );
        QryInvestorCommoditySPMMMarginField_CommodityID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInvestorCommoditySPMMMarginField_dealloc(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_repr(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"CommodityID", self->data.CommodityID//, (Py_ssize_t)sizeof(self->data.CommodityID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorCommoditySPMMMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_BrokerID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_BrokerID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_InvestorID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_InvestorID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
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
            
///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_CommodityID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityID, (Py_ssize_t)sizeof(self->data.CommodityID));
    return PyBytes_FromString(self->data.CommodityID);
}

///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_CommodityID(PyCThostFtdcQryInvestorCommoditySPMMMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
    // memcpy(self->data.CommodityID, buf, len);
    strncpy(self->data.CommodityID, buf, sizeof(self->data.CommodityID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryInvestorCommoditySPMMMarginField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_BrokerID, (setter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_InvestorID, (setter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///商品组代码 
    {(char *)"CommodityID", (getter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_get_CommodityID, (setter)PyCThostFtdcQryInvestorCommoditySPMMMarginField_set_CommodityID, (char *)"CommodityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorCommoditySPMMMarginField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorCommoditySPMMMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorCommoditySPMMMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorCommoditySPMMMarginField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorCommoditySPMMMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorCommoditySPMMMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorCommoditySPMMMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorCommoditySPMMMarginField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorCommoditySPMMMarginField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorCommoditySPMMMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorCommoditySPMMMarginField", (PyObject *)&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorCommoditySPMMMarginField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType);
		return -1;
    }

    return 0;
}
