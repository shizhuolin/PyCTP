
#include "PyCThostFtdcQryInvestorProdRULEMarginField.h"

///投资者产品RULE保证金查询

static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorProdRULEMarginField *self = (PyCThostFtdcQryInvestorProdRULEMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorProdRULEMarginField_init(PyCThostFtdcQryInvestorProdRULEMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "CommodityGroupID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryInvestorProdRULEMarginField_ExchangeID = NULL;
    Py_ssize_t QryInvestorProdRULEMarginField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorProdRULEMarginField_BrokerID = NULL;
    Py_ssize_t QryInvestorProdRULEMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorProdRULEMarginField_InvestorID = NULL;
    Py_ssize_t QryInvestorProdRULEMarginField_InvestorID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInvestorProdRULEMarginField_ProdFamilyCode = NULL;
    Py_ssize_t QryInvestorProdRULEMarginField_ProdFamilyCode_len = 0;
            
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    int QryInvestorProdRULEMarginField_CommodityGroupID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#i", (char **)kwlist
#endif

        , &QryInvestorProdRULEMarginField_ExchangeID, &QryInvestorProdRULEMarginField_ExchangeID_len 
        , &QryInvestorProdRULEMarginField_BrokerID, &QryInvestorProdRULEMarginField_BrokerID_len 
        , &QryInvestorProdRULEMarginField_InvestorID, &QryInvestorProdRULEMarginField_InvestorID_len 
        , &QryInvestorProdRULEMarginField_ProdFamilyCode, &QryInvestorProdRULEMarginField_ProdFamilyCode_len 
        , &QryInvestorProdRULEMarginField_CommodityGroupID 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryInvestorProdRULEMarginField_ExchangeID != NULL ) {
        if(QryInvestorProdRULEMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryInvestorProdRULEMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryInvestorProdRULEMarginField_ExchangeID, QryInvestorProdRULEMarginField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryInvestorProdRULEMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryInvestorProdRULEMarginField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorProdRULEMarginField_BrokerID != NULL ) {
        if(QryInvestorProdRULEMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorProdRULEMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorProdRULEMarginField_BrokerID, QryInvestorProdRULEMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorProdRULEMarginField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorProdRULEMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorProdRULEMarginField_InvestorID != NULL ) {
        if(QryInvestorProdRULEMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorProdRULEMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorProdRULEMarginField_InvestorID, QryInvestorProdRULEMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorProdRULEMarginField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorProdRULEMarginField_InvestorID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryInvestorProdRULEMarginField_ProdFamilyCode != NULL ) {
        if(QryInvestorProdRULEMarginField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", QryInvestorProdRULEMarginField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, QryInvestorProdRULEMarginField_ProdFamilyCode, QryInvestorProdRULEMarginField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, QryInvestorProdRULEMarginField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        QryInvestorProdRULEMarginField_ProdFamilyCode = NULL;
    }
            
    ///商品群号
    // TThostFtdcCommodityGroupIDType int
    self->data.CommodityGroupID = QryInvestorProdRULEMarginField_CommodityGroupID;
        

    return 0;
}

static void PyCThostFtdcQryInvestorProdRULEMarginField_dealloc(PyCThostFtdcQryInvestorProdRULEMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_repr(PyCThostFtdcQryInvestorProdRULEMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"CommodityGroupID", self->data.CommodityGroupID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdRULEMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_ExchangeID(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryInvestorProdRULEMarginField_set_ExchangeID(PyCThostFtdcQryInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_BrokerID(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorProdRULEMarginField_set_BrokerID(PyCThostFtdcQryInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_InvestorID(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorProdRULEMarginField_set_InvestorID(PyCThostFtdcQryInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
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
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_ProdFamilyCode(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInvestorProdRULEMarginField_set_ProdFamilyCode(PyCThostFtdcQryInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
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
            
///商品群号
// TThostFtdcCommodityGroupIDType int
static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_CommodityGroupID(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CommodityGroupID);
#else
    return PyInt_FromLong(self->data.CommodityGroupID);
#endif
}

///商品群号
// TThostFtdcCommodityGroupIDType int
static int PyCThostFtdcQryInvestorProdRULEMarginField_set_CommodityGroupID(PyCThostFtdcQryInvestorProdRULEMarginField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the CommodityGroupID value out of range for C int");
        return -1;
    }
    self->data.CommodityGroupID = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcQryInvestorProdRULEMarginField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_BrokerID, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_InvestorID, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_ProdFamilyCode, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///商品群号 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_CommodityGroupID, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorProdRULEMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorProdRULEMarginField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorProdRULEMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorProdRULEMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorProdRULEMarginField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorProdRULEMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorProdRULEMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorProdRULEMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorProdRULEMarginField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorProdRULEMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorProdRULEMarginField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorProdRULEMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorProdRULEMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorProdRULEMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProdRULEMarginField", (PyObject *)&PyCThostFtdcQryInvestorProdRULEMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProdRULEMarginField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorProdRULEMarginFieldType);
		return -1;
    }

    return 0;
}
