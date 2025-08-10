
#include "PyCThostFtdcDepositResultInformField.h"

///验证期货资金密码和客户信息

static PyObject *PyCThostFtdcDepositResultInformField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDepositResultInformField *self = (PyCThostFtdcDepositResultInformField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcDepositResultInformField_init(PyCThostFtdcDepositResultInformField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DepositSeqNo", "BrokerID", "InvestorID", "Deposit", "RequestID", "ReturnCode", "DescrInfoForReturnCode",  NULL};


    ///出入金流水号，该流水号为银期报盘返回的流水号
    // TThostFtdcDepositSeqNoType char[15]
    const char *DepositResultInformField_DepositSeqNo = NULL;
    Py_ssize_t DepositResultInformField_DepositSeqNo_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *DepositResultInformField_BrokerID = NULL;
    Py_ssize_t DepositResultInformField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *DepositResultInformField_InvestorID = NULL;
    Py_ssize_t DepositResultInformField_InvestorID_len = 0;
            
    ///入金金额
    // TThostFtdcMoneyType double
    double DepositResultInformField_Deposit = 0.0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int DepositResultInformField_RequestID = 0;
        
    ///返回代码
    // TThostFtdcReturnCodeType char[7]
    const char *DepositResultInformField_ReturnCode = NULL;
    Py_ssize_t DepositResultInformField_ReturnCode_len = 0;
            
    ///返回码描述
    // TThostFtdcDescrInfoForReturnCodeType char[129]
    const char *DepositResultInformField_DescrInfoForReturnCode = NULL;
    Py_ssize_t DepositResultInformField_DescrInfoForReturnCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#diy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dis#s#", (char **)kwlist
#endif

        , &DepositResultInformField_DepositSeqNo, &DepositResultInformField_DepositSeqNo_len 
        , &DepositResultInformField_BrokerID, &DepositResultInformField_BrokerID_len 
        , &DepositResultInformField_InvestorID, &DepositResultInformField_InvestorID_len 
        , &DepositResultInformField_Deposit 
        , &DepositResultInformField_RequestID 
        , &DepositResultInformField_ReturnCode, &DepositResultInformField_ReturnCode_len 
        , &DepositResultInformField_DescrInfoForReturnCode, &DepositResultInformField_DescrInfoForReturnCode_len 


    )) {
        return -1;
    }


    ///出入金流水号，该流水号为银期报盘返回的流水号
    // TThostFtdcDepositSeqNoType char[15]
    if( DepositResultInformField_DepositSeqNo != NULL ) {
        if(DepositResultInformField_DepositSeqNo_len > (Py_ssize_t)sizeof(self->data.DepositSeqNo)) {
            PyErr_Format(PyExc_ValueError, "DepositSeqNo too long: length=%zd (max allowed is %zd)", DepositResultInformField_DepositSeqNo_len, (Py_ssize_t)sizeof(self->data.DepositSeqNo));
            return -1;
        }
        // memset(self->data.DepositSeqNo, 0, sizeof(self->data.DepositSeqNo));
        // memcpy(self->data.DepositSeqNo, DepositResultInformField_DepositSeqNo, DepositResultInformField_DepositSeqNo_len);        
        strncpy(self->data.DepositSeqNo, DepositResultInformField_DepositSeqNo, sizeof(self->data.DepositSeqNo) );
        DepositResultInformField_DepositSeqNo = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( DepositResultInformField_BrokerID != NULL ) {
        if(DepositResultInformField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", DepositResultInformField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, DepositResultInformField_BrokerID, DepositResultInformField_BrokerID_len);        
        strncpy(self->data.BrokerID, DepositResultInformField_BrokerID, sizeof(self->data.BrokerID) );
        DepositResultInformField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( DepositResultInformField_InvestorID != NULL ) {
        if(DepositResultInformField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", DepositResultInformField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, DepositResultInformField_InvestorID, DepositResultInformField_InvestorID_len);        
        strncpy(self->data.InvestorID, DepositResultInformField_InvestorID, sizeof(self->data.InvestorID) );
        DepositResultInformField_InvestorID = NULL;
    }
            
    ///入金金额
    // TThostFtdcMoneyType double
    self->data.Deposit = DepositResultInformField_Deposit;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = DepositResultInformField_RequestID;
        
    ///返回代码
    // TThostFtdcReturnCodeType char[7]
    if( DepositResultInformField_ReturnCode != NULL ) {
        if(DepositResultInformField_ReturnCode_len > (Py_ssize_t)sizeof(self->data.ReturnCode)) {
            PyErr_Format(PyExc_ValueError, "ReturnCode too long: length=%zd (max allowed is %zd)", DepositResultInformField_ReturnCode_len, (Py_ssize_t)sizeof(self->data.ReturnCode));
            return -1;
        }
        // memset(self->data.ReturnCode, 0, sizeof(self->data.ReturnCode));
        // memcpy(self->data.ReturnCode, DepositResultInformField_ReturnCode, DepositResultInformField_ReturnCode_len);        
        strncpy(self->data.ReturnCode, DepositResultInformField_ReturnCode, sizeof(self->data.ReturnCode) );
        DepositResultInformField_ReturnCode = NULL;
    }
            
    ///返回码描述
    // TThostFtdcDescrInfoForReturnCodeType char[129]
    if( DepositResultInformField_DescrInfoForReturnCode != NULL ) {
        if(DepositResultInformField_DescrInfoForReturnCode_len > (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode)) {
            PyErr_Format(PyExc_ValueError, "DescrInfoForReturnCode too long: length=%zd (max allowed is %zd)", DepositResultInformField_DescrInfoForReturnCode_len, (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode));
            return -1;
        }
        // memset(self->data.DescrInfoForReturnCode, 0, sizeof(self->data.DescrInfoForReturnCode));
        // memcpy(self->data.DescrInfoForReturnCode, DepositResultInformField_DescrInfoForReturnCode, DepositResultInformField_DescrInfoForReturnCode_len);        
        strncpy(self->data.DescrInfoForReturnCode, DepositResultInformField_DescrInfoForReturnCode, sizeof(self->data.DescrInfoForReturnCode) );
        DepositResultInformField_DescrInfoForReturnCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcDepositResultInformField_dealloc(PyCThostFtdcDepositResultInformField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDepositResultInformField_repr(PyCThostFtdcDepositResultInformField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:i,s:s,s:s}"
#endif

        ,"DepositSeqNo", self->data.DepositSeqNo//, (Py_ssize_t)sizeof(self->data.DepositSeqNo) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"Deposit", self->data.Deposit 
        ,"RequestID", self->data.RequestID 
        ,"ReturnCode", self->data.ReturnCode//, (Py_ssize_t)sizeof(self->data.ReturnCode) 
        ,"DescrInfoForReturnCode", self->data.DescrInfoForReturnCode//, (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepositResultInformField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///出入金流水号，该流水号为银期报盘返回的流水号
// TThostFtdcDepositSeqNoType char[15]
static PyObject *PyCThostFtdcDepositResultInformField_get_DepositSeqNo(PyCThostFtdcDepositResultInformField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DepositSeqNo, (Py_ssize_t)sizeof(self->data.DepositSeqNo));
    return PyBytes_FromString(self->data.DepositSeqNo);
}

///出入金流水号，该流水号为银期报盘返回的流水号
// TThostFtdcDepositSeqNoType char[15]
static int PyCThostFtdcDepositResultInformField_set_DepositSeqNo(PyCThostFtdcDepositResultInformField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DepositSeqNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DepositSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "DepositSeqNo must be less than 15 bytes");
        return -1;
    }
    // memset(self->data.DepositSeqNo, 0, sizeof(self->data.DepositSeqNo));
    // memcpy(self->data.DepositSeqNo, buf, len);
    strncpy(self->data.DepositSeqNo, buf, sizeof(self->data.DepositSeqNo));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcDepositResultInformField_get_BrokerID(PyCThostFtdcDepositResultInformField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcDepositResultInformField_set_BrokerID(PyCThostFtdcDepositResultInformField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepositResultInformField_get_InvestorID(PyCThostFtdcDepositResultInformField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcDepositResultInformField_set_InvestorID(PyCThostFtdcDepositResultInformField *self, PyObject* val, void *closure) {
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
            
///入金金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcDepositResultInformField_get_Deposit(PyCThostFtdcDepositResultInformField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Deposit);
}

///入金金额
// TThostFtdcMoneyType double
static int PyCThostFtdcDepositResultInformField_set_Deposit(PyCThostFtdcDepositResultInformField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Deposit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Deposit = buf;
    return 0;
}
        
///请求编号
// TThostFtdcRequestIDType int
static PyObject *PyCThostFtdcDepositResultInformField_get_RequestID(PyCThostFtdcDepositResultInformField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcDepositResultInformField_set_RequestID(PyCThostFtdcDepositResultInformField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the RequestID value out of range for C int");
        return -1;
    }
    self->data.RequestID = (int)buf;
    return 0;
}
        
///返回代码
// TThostFtdcReturnCodeType char[7]
static PyObject *PyCThostFtdcDepositResultInformField_get_ReturnCode(PyCThostFtdcDepositResultInformField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ReturnCode, (Py_ssize_t)sizeof(self->data.ReturnCode));
    return PyBytes_FromString(self->data.ReturnCode);
}

///返回代码
// TThostFtdcReturnCodeType char[7]
static int PyCThostFtdcDepositResultInformField_set_ReturnCode(PyCThostFtdcDepositResultInformField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReturnCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "ReturnCode must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.ReturnCode, 0, sizeof(self->data.ReturnCode));
    // memcpy(self->data.ReturnCode, buf, len);
    strncpy(self->data.ReturnCode, buf, sizeof(self->data.ReturnCode));
    return 0;
}
            
///返回码描述
// TThostFtdcDescrInfoForReturnCodeType char[129]
static PyObject *PyCThostFtdcDepositResultInformField_get_DescrInfoForReturnCode(PyCThostFtdcDepositResultInformField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DescrInfoForReturnCode, (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode));
    return PyBytes_FromString(self->data.DescrInfoForReturnCode);
}

///返回码描述
// TThostFtdcDescrInfoForReturnCodeType char[129]
static int PyCThostFtdcDepositResultInformField_set_DescrInfoForReturnCode(PyCThostFtdcDepositResultInformField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DescrInfoForReturnCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "DescrInfoForReturnCode must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.DescrInfoForReturnCode, 0, sizeof(self->data.DescrInfoForReturnCode));
    // memcpy(self->data.DescrInfoForReturnCode, buf, len);
    strncpy(self->data.DescrInfoForReturnCode, buf, sizeof(self->data.DescrInfoForReturnCode));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcDepositResultInformField_getset[] = {
    ///出入金流水号，该流水号为银期报盘返回的流水号 
    {(char *)"DepositSeqNo", (getter)PyCThostFtdcDepositResultInformField_get_DepositSeqNo, (setter)PyCThostFtdcDepositResultInformField_set_DepositSeqNo, (char *)"DepositSeqNo", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcDepositResultInformField_get_BrokerID, (setter)PyCThostFtdcDepositResultInformField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcDepositResultInformField_get_InvestorID, (setter)PyCThostFtdcDepositResultInformField_set_InvestorID, (char *)"InvestorID", NULL},
    ///入金金额 
    {(char *)"Deposit", (getter)PyCThostFtdcDepositResultInformField_get_Deposit, (setter)PyCThostFtdcDepositResultInformField_set_Deposit, (char *)"Deposit", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcDepositResultInformField_get_RequestID, (setter)PyCThostFtdcDepositResultInformField_set_RequestID, (char *)"RequestID", NULL},
    ///返回代码 
    {(char *)"ReturnCode", (getter)PyCThostFtdcDepositResultInformField_get_ReturnCode, (setter)PyCThostFtdcDepositResultInformField_set_ReturnCode, (char *)"ReturnCode", NULL},
    ///返回码描述 
    {(char *)"DescrInfoForReturnCode", (getter)PyCThostFtdcDepositResultInformField_get_DescrInfoForReturnCode, (setter)PyCThostFtdcDepositResultInformField_set_DescrInfoForReturnCode, (char *)"DescrInfoForReturnCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDepositResultInformFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDepositResultInformField",	/* tp_name */
	sizeof(PyCThostFtdcDepositResultInformField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDepositResultInformField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDepositResultInformField_repr,   /* tp_repr */
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
	"CThostFtdcDepositResultInformField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDepositResultInformField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDepositResultInformField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDepositResultInformField_new,       /* tp_new */
};

int PyCThostFtdcDepositResultInformFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDepositResultInformField  */
	if (PyType_Ready(&PyCThostFtdcDepositResultInformFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDepositResultInformField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDepositResultInformFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDepositResultInformField", (PyObject *)&PyCThostFtdcDepositResultInformFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDepositResultInformField to module");
        Py_DECREF(&PyCThostFtdcDepositResultInformFieldType);
		return -1;
    }

    return 0;
}
