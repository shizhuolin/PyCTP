
#include "PyCThostFtdcQryInvestorProdSPBMDetailField.h"

///投资者产品SPBM明细查询

static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorProdSPBMDetailField *self = (PyCThostFtdcQryInvestorProdSPBMDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorProdSPBMDetailField_init(PyCThostFtdcQryInvestorProdSPBMDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryInvestorProdSPBMDetailField_ExchangeID = NULL;
    Py_ssize_t QryInvestorProdSPBMDetailField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorProdSPBMDetailField_BrokerID = NULL;
    Py_ssize_t QryInvestorProdSPBMDetailField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorProdSPBMDetailField_InvestorID = NULL;
    Py_ssize_t QryInvestorProdSPBMDetailField_InvestorID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
    Py_ssize_t QryInvestorProdSPBMDetailField_ProdFamilyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryInvestorProdSPBMDetailField_ExchangeID, &QryInvestorProdSPBMDetailField_ExchangeID_len 
        , &QryInvestorProdSPBMDetailField_BrokerID, &QryInvestorProdSPBMDetailField_BrokerID_len 
        , &QryInvestorProdSPBMDetailField_InvestorID, &QryInvestorProdSPBMDetailField_InvestorID_len 
        , &QryInvestorProdSPBMDetailField_ProdFamilyCode, &QryInvestorProdSPBMDetailField_ProdFamilyCode_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryInvestorProdSPBMDetailField_ExchangeID != NULL ) {
        if(QryInvestorProdSPBMDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryInvestorProdSPBMDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryInvestorProdSPBMDetailField_ExchangeID, QryInvestorProdSPBMDetailField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryInvestorProdSPBMDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryInvestorProdSPBMDetailField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorProdSPBMDetailField_BrokerID != NULL ) {
        if(QryInvestorProdSPBMDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorProdSPBMDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorProdSPBMDetailField_BrokerID, QryInvestorProdSPBMDetailField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorProdSPBMDetailField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorProdSPBMDetailField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorProdSPBMDetailField_InvestorID != NULL ) {
        if(QryInvestorProdSPBMDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorProdSPBMDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorProdSPBMDetailField_InvestorID, QryInvestorProdSPBMDetailField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorProdSPBMDetailField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorProdSPBMDetailField_InvestorID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryInvestorProdSPBMDetailField_ProdFamilyCode != NULL ) {
        if(QryInvestorProdSPBMDetailField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", QryInvestorProdSPBMDetailField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, QryInvestorProdSPBMDetailField_ProdFamilyCode, QryInvestorProdSPBMDetailField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, QryInvestorProdSPBMDetailField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        QryInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInvestorProdSPBMDetailField_dealloc(PyCThostFtdcQryInvestorProdSPBMDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_repr(PyCThostFtdcQryInvestorProdSPBMDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdSPBMDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_get_ExchangeID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryInvestorProdSPBMDetailField_set_ExchangeID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_get_BrokerID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorProdSPBMDetailField_set_BrokerID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_get_InvestorID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorProdSPBMDetailField_set_InvestorID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_get_ProdFamilyCode(PyCThostFtdcQryInvestorProdSPBMDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInvestorProdSPBMDetailField_set_ProdFamilyCode(PyCThostFtdcQryInvestorProdSPBMDetailField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryInvestorProdSPBMDetailField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorProdSPBMDetailField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorProdSPBMDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorProdSPBMDetailField_get_BrokerID, (setter)PyCThostFtdcQryInvestorProdSPBMDetailField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorProdSPBMDetailField_get_InvestorID, (setter)PyCThostFtdcQryInvestorProdSPBMDetailField_set_InvestorID, (char *)"InvestorID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQryInvestorProdSPBMDetailField_get_ProdFamilyCode, (setter)PyCThostFtdcQryInvestorProdSPBMDetailField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorProdSPBMDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorProdSPBMDetailField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorProdSPBMDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorProdSPBMDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorProdSPBMDetailField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorProdSPBMDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorProdSPBMDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorProdSPBMDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorProdSPBMDetailField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorProdSPBMDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorProdSPBMDetailField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorProdSPBMDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorProdSPBMDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorProdSPBMDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProdSPBMDetailField", (PyObject *)&PyCThostFtdcQryInvestorProdSPBMDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProdSPBMDetailField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorProdSPBMDetailFieldType);
		return -1;
    }

    return 0;
}
