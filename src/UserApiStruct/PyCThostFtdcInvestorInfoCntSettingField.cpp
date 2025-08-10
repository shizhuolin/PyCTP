
#include "PyCThostFtdcInvestorInfoCntSettingField.h"

///投资者申报费阶梯收取设置

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorInfoCntSettingField *self = (PyCThostFtdcInvestorInfoCntSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorInfoCntSettingField_init(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProductID", "IsCalInfoComm", "IsLimitInfoMax", "InfoMaxLimit",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorInfoCntSettingField_ExchangeID = NULL;
    Py_ssize_t InvestorInfoCntSettingField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorInfoCntSettingField_BrokerID = NULL;
    Py_ssize_t InvestorInfoCntSettingField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorInfoCntSettingField_InvestorID = NULL;
    Py_ssize_t InvestorInfoCntSettingField_InvestorID_len = 0;
            
    ///商品代码
    // TThostFtdcProductIDType char[41]
    const char *InvestorInfoCntSettingField_ProductID = NULL;
    Py_ssize_t InvestorInfoCntSettingField_ProductID_len = 0;
            
    ///是否收取申报费
    // TThostFtdcBoolType int
    int InvestorInfoCntSettingField_IsCalInfoComm = 0;
        
    ///是否限制信息量
    // TThostFtdcBoolType int
    int InvestorInfoCntSettingField_IsLimitInfoMax = 0;
        
    ///信息量限制笔数
    // TThostFtdcVolumeType int
    int InvestorInfoCntSettingField_InfoMaxLimit = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#iii", (char **)kwlist
#endif

        , &InvestorInfoCntSettingField_ExchangeID, &InvestorInfoCntSettingField_ExchangeID_len 
        , &InvestorInfoCntSettingField_BrokerID, &InvestorInfoCntSettingField_BrokerID_len 
        , &InvestorInfoCntSettingField_InvestorID, &InvestorInfoCntSettingField_InvestorID_len 
        , &InvestorInfoCntSettingField_ProductID, &InvestorInfoCntSettingField_ProductID_len 
        , &InvestorInfoCntSettingField_IsCalInfoComm 
        , &InvestorInfoCntSettingField_IsLimitInfoMax 
        , &InvestorInfoCntSettingField_InfoMaxLimit 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorInfoCntSettingField_ExchangeID != NULL ) {
        if(InvestorInfoCntSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorInfoCntSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorInfoCntSettingField_ExchangeID, InvestorInfoCntSettingField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorInfoCntSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorInfoCntSettingField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorInfoCntSettingField_BrokerID != NULL ) {
        if(InvestorInfoCntSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorInfoCntSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorInfoCntSettingField_BrokerID, InvestorInfoCntSettingField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorInfoCntSettingField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorInfoCntSettingField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorInfoCntSettingField_InvestorID != NULL ) {
        if(InvestorInfoCntSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorInfoCntSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorInfoCntSettingField_InvestorID, InvestorInfoCntSettingField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorInfoCntSettingField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorInfoCntSettingField_InvestorID = NULL;
    }
            
    ///商品代码
    // TThostFtdcProductIDType char[41]
    if( InvestorInfoCntSettingField_ProductID != NULL ) {
        if(InvestorInfoCntSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", InvestorInfoCntSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, InvestorInfoCntSettingField_ProductID, InvestorInfoCntSettingField_ProductID_len);        
        strncpy(self->data.ProductID, InvestorInfoCntSettingField_ProductID, sizeof(self->data.ProductID) );
        InvestorInfoCntSettingField_ProductID = NULL;
    }
            
    ///是否收取申报费
    // TThostFtdcBoolType int
    self->data.IsCalInfoComm = InvestorInfoCntSettingField_IsCalInfoComm;
        
    ///是否限制信息量
    // TThostFtdcBoolType int
    self->data.IsLimitInfoMax = InvestorInfoCntSettingField_IsLimitInfoMax;
        
    ///信息量限制笔数
    // TThostFtdcVolumeType int
    self->data.InfoMaxLimit = InvestorInfoCntSettingField_InfoMaxLimit;
        

    return 0;
}

static void PyCThostFtdcInvestorInfoCntSettingField_dealloc(PyCThostFtdcInvestorInfoCntSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_repr(PyCThostFtdcInvestorInfoCntSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:i,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"IsCalInfoComm", self->data.IsCalInfoComm 
        ,"IsLimitInfoMax", self->data.IsLimitInfoMax 
        ,"InfoMaxLimit", self->data.InfoMaxLimit 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorInfoCntSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_ExchangeID(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorInfoCntSettingField_set_ExchangeID(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_BrokerID(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorInfoCntSettingField_set_BrokerID(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_InvestorID(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorInfoCntSettingField_set_InvestorID(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject* val, void *closure) {
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
            
///商品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_ProductID(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///商品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcInvestorInfoCntSettingField_set_ProductID(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///是否收取申报费
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_IsCalInfoComm(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsCalInfoComm);
#else
    return PyInt_FromLong(self->data.IsCalInfoComm);
#endif
}

///是否收取申报费
// TThostFtdcBoolType int
static int PyCThostFtdcInvestorInfoCntSettingField_set_IsCalInfoComm(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsCalInfoComm Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsCalInfoComm Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsCalInfoComm value out of range for C int");
        return -1;
    }
    self->data.IsCalInfoComm = (int)buf;
    return 0;
}
        
///是否限制信息量
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_IsLimitInfoMax(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsLimitInfoMax);
#else
    return PyInt_FromLong(self->data.IsLimitInfoMax);
#endif
}

///是否限制信息量
// TThostFtdcBoolType int
static int PyCThostFtdcInvestorInfoCntSettingField_set_IsLimitInfoMax(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsLimitInfoMax Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsLimitInfoMax Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsLimitInfoMax value out of range for C int");
        return -1;
    }
    self->data.IsLimitInfoMax = (int)buf;
    return 0;
}
        
///信息量限制笔数
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_InfoMaxLimit(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InfoMaxLimit);
#else
    return PyInt_FromLong(self->data.InfoMaxLimit);
#endif
}

///信息量限制笔数
// TThostFtdcVolumeType int
static int PyCThostFtdcInvestorInfoCntSettingField_set_InfoMaxLimit(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InfoMaxLimit Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InfoMaxLimit Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the InfoMaxLimit value out of range for C int");
        return -1;
    }
    self->data.InfoMaxLimit = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcInvestorInfoCntSettingField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_ExchangeID, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_BrokerID, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_InvestorID, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_InvestorID, (char *)"InvestorID", NULL},
    ///商品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_ProductID, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_ProductID, (char *)"ProductID", NULL},
    ///是否收取申报费 
    {(char *)"IsCalInfoComm", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_IsCalInfoComm, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_IsCalInfoComm, (char *)"IsCalInfoComm", NULL},
    ///是否限制信息量 
    {(char *)"IsLimitInfoMax", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_IsLimitInfoMax, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_IsLimitInfoMax, (char *)"IsLimitInfoMax", NULL},
    ///信息量限制笔数 
    {(char *)"InfoMaxLimit", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_InfoMaxLimit, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_InfoMaxLimit, (char *)"InfoMaxLimit", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorInfoCntSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorInfoCntSettingField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorInfoCntSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorInfoCntSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorInfoCntSettingField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorInfoCntSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorInfoCntSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorInfoCntSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorInfoCntSettingField_new,       /* tp_new */
};

int PyCThostFtdcInvestorInfoCntSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorInfoCntSettingField  */
	if (PyType_Ready(&PyCThostFtdcInvestorInfoCntSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorInfoCntSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorInfoCntSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorInfoCntSettingField", (PyObject *)&PyCThostFtdcInvestorInfoCntSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorInfoCntSettingField to module");
        Py_DECREF(&PyCThostFtdcInvestorInfoCntSettingFieldType);
		return -1;
    }

    return 0;
}
