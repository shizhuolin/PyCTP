
#include "PyCThostFtdcRiskForbiddenRightField.h"

///风控禁止的合约交易权限

static PyObject *PyCThostFtdcRiskForbiddenRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRiskForbiddenRightField *self = (PyCThostFtdcRiskForbiddenRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRiskForbiddenRightField_init(PyCThostFtdcRiskForbiddenRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UserID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RiskForbiddenRightField_BrokerID = NULL;
    Py_ssize_t RiskForbiddenRightField_BrokerID_len = 0;
            
    ///投资者编号
    // TThostFtdcInvestorIDType char[13]
    const char *RiskForbiddenRightField_InvestorID = NULL;
    Py_ssize_t RiskForbiddenRightField_InvestorID_len = 0;
            
    ///合约/产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *RiskForbiddenRightField_InstrumentID = NULL;
    Py_ssize_t RiskForbiddenRightField_InstrumentID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *RiskForbiddenRightField_UserID = NULL;
    Py_ssize_t RiskForbiddenRightField_UserID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &RiskForbiddenRightField_BrokerID, &RiskForbiddenRightField_BrokerID_len 
        , &RiskForbiddenRightField_InvestorID, &RiskForbiddenRightField_InvestorID_len 
        , &RiskForbiddenRightField_InstrumentID, &RiskForbiddenRightField_InstrumentID_len 
        , &RiskForbiddenRightField_UserID, &RiskForbiddenRightField_UserID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RiskForbiddenRightField_BrokerID != NULL ) {
        if(RiskForbiddenRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RiskForbiddenRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RiskForbiddenRightField_BrokerID, RiskForbiddenRightField_BrokerID_len);        
        strncpy(self->data.BrokerID, RiskForbiddenRightField_BrokerID, sizeof(self->data.BrokerID) );
        RiskForbiddenRightField_BrokerID = NULL;
    }
            
    ///投资者编号
    // TThostFtdcInvestorIDType char[13]
    if( RiskForbiddenRightField_InvestorID != NULL ) {
        if(RiskForbiddenRightField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", RiskForbiddenRightField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, RiskForbiddenRightField_InvestorID, RiskForbiddenRightField_InvestorID_len);        
        strncpy(self->data.InvestorID, RiskForbiddenRightField_InvestorID, sizeof(self->data.InvestorID) );
        RiskForbiddenRightField_InvestorID = NULL;
    }
            
    ///合约/产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( RiskForbiddenRightField_InstrumentID != NULL ) {
        if(RiskForbiddenRightField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", RiskForbiddenRightField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, RiskForbiddenRightField_InstrumentID, RiskForbiddenRightField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, RiskForbiddenRightField_InstrumentID, sizeof(self->data.InstrumentID) );
        RiskForbiddenRightField_InstrumentID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( RiskForbiddenRightField_UserID != NULL ) {
        if(RiskForbiddenRightField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RiskForbiddenRightField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RiskForbiddenRightField_UserID, RiskForbiddenRightField_UserID_len);        
        strncpy(self->data.UserID, RiskForbiddenRightField_UserID, sizeof(self->data.UserID) );
        RiskForbiddenRightField_UserID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRiskForbiddenRightField_dealloc(PyCThostFtdcRiskForbiddenRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRiskForbiddenRightField_repr(PyCThostFtdcRiskForbiddenRightField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskForbiddenRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcRiskForbiddenRightField_get_BrokerID(PyCThostFtdcRiskForbiddenRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRiskForbiddenRightField_set_BrokerID(PyCThostFtdcRiskForbiddenRightField *self, PyObject* val, void *closure) {
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
            
///投资者编号
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcRiskForbiddenRightField_get_InvestorID(PyCThostFtdcRiskForbiddenRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者编号
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcRiskForbiddenRightField_set_InvestorID(PyCThostFtdcRiskForbiddenRightField *self, PyObject* val, void *closure) {
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
            
///合约/产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcRiskForbiddenRightField_get_InstrumentID(PyCThostFtdcRiskForbiddenRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约/产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRiskForbiddenRightField_set_InstrumentID(PyCThostFtdcRiskForbiddenRightField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcRiskForbiddenRightField_get_UserID(PyCThostFtdcRiskForbiddenRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRiskForbiddenRightField_set_UserID(PyCThostFtdcRiskForbiddenRightField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcRiskForbiddenRightField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRiskForbiddenRightField_get_BrokerID, (setter)PyCThostFtdcRiskForbiddenRightField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者编号 
    {(char *)"InvestorID", (getter)PyCThostFtdcRiskForbiddenRightField_get_InvestorID, (setter)PyCThostFtdcRiskForbiddenRightField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约/产品代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcRiskForbiddenRightField_get_InstrumentID, (setter)PyCThostFtdcRiskForbiddenRightField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcRiskForbiddenRightField_get_UserID, (setter)PyCThostFtdcRiskForbiddenRightField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRiskForbiddenRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRiskForbiddenRightField",	/* tp_name */
	sizeof(PyCThostFtdcRiskForbiddenRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRiskForbiddenRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRiskForbiddenRightField_repr,   /* tp_repr */
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
	"CThostFtdcRiskForbiddenRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRiskForbiddenRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRiskForbiddenRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRiskForbiddenRightField_new,       /* tp_new */
};

int PyCThostFtdcRiskForbiddenRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRiskForbiddenRightField  */
	if (PyType_Ready(&PyCThostFtdcRiskForbiddenRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRiskForbiddenRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRiskForbiddenRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRiskForbiddenRightField", (PyObject *)&PyCThostFtdcRiskForbiddenRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRiskForbiddenRightField to module");
        Py_DECREF(&PyCThostFtdcRiskForbiddenRightFieldType);
		return -1;
    }

    return 0;
}
