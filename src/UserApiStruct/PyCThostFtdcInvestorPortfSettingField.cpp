
#include "PyCThostFtdcInvestorPortfSettingField.h"

///投资者新组保设置

static PyObject *PyCThostFtdcInvestorPortfSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPortfSettingField *self = (PyCThostFtdcInvestorPortfSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPortfSettingField_init(PyCThostFtdcInvestorPortfSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "HedgeFlag", "UsePortf",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InvestorPortfSettingField_ExchangeID = NULL;
    Py_ssize_t InvestorPortfSettingField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorPortfSettingField_BrokerID = NULL;
    Py_ssize_t InvestorPortfSettingField_BrokerID_len = 0;
            
    ///投资者编号
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorPortfSettingField_InvestorID = NULL;
    Py_ssize_t InvestorPortfSettingField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InvestorPortfSettingField_HedgeFlag = 0;
            
    ///是否开启新组保
    // TThostFtdcBoolType int
    int InvestorPortfSettingField_UsePortf = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ci", (char **)kwlist
#endif

        , &InvestorPortfSettingField_ExchangeID, &InvestorPortfSettingField_ExchangeID_len 
        , &InvestorPortfSettingField_BrokerID, &InvestorPortfSettingField_BrokerID_len 
        , &InvestorPortfSettingField_InvestorID, &InvestorPortfSettingField_InvestorID_len 
        , &InvestorPortfSettingField_HedgeFlag 
        , &InvestorPortfSettingField_UsePortf 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InvestorPortfSettingField_ExchangeID != NULL ) {
        if(InvestorPortfSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InvestorPortfSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InvestorPortfSettingField_ExchangeID, InvestorPortfSettingField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InvestorPortfSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
        InvestorPortfSettingField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorPortfSettingField_BrokerID != NULL ) {
        if(InvestorPortfSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorPortfSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorPortfSettingField_BrokerID, InvestorPortfSettingField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorPortfSettingField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorPortfSettingField_BrokerID = NULL;
    }
            
    ///投资者编号
    // TThostFtdcInvestorIDType char[13]
    if( InvestorPortfSettingField_InvestorID != NULL ) {
        if(InvestorPortfSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorPortfSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorPortfSettingField_InvestorID, InvestorPortfSettingField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorPortfSettingField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorPortfSettingField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InvestorPortfSettingField_HedgeFlag;
            
    ///是否开启新组保
    // TThostFtdcBoolType int
    self->data.UsePortf = InvestorPortfSettingField_UsePortf;
        

    return 0;
}

static void PyCThostFtdcInvestorPortfSettingField_dealloc(PyCThostFtdcInvestorPortfSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPortfSettingField_repr(PyCThostFtdcInvestorPortfSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"UsePortf", self->data.UsePortf 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInvestorPortfSettingField_get_ExchangeID(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInvestorPortfSettingField_set_ExchangeID(PyCThostFtdcInvestorPortfSettingField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPortfSettingField_get_BrokerID(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorPortfSettingField_set_BrokerID(PyCThostFtdcInvestorPortfSettingField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPortfSettingField_get_InvestorID(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者编号
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorPortfSettingField_set_InvestorID(PyCThostFtdcInvestorPortfSettingField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcInvestorPortfSettingField_get_HedgeFlag(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInvestorPortfSettingField_set_HedgeFlag(PyCThostFtdcInvestorPortfSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///是否开启新组保
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcInvestorPortfSettingField_get_UsePortf(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UsePortf);
#else
    return PyInt_FromLong(self->data.UsePortf);
#endif
}

///是否开启新组保
// TThostFtdcBoolType int
static int PyCThostFtdcInvestorPortfSettingField_set_UsePortf(PyCThostFtdcInvestorPortfSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsePortf Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsePortf Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the UsePortf value out of range for C int");
        return -1;
    }
    self->data.UsePortf = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcInvestorPortfSettingField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPortfSettingField_get_ExchangeID, (setter)PyCThostFtdcInvestorPortfSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPortfSettingField_get_BrokerID, (setter)PyCThostFtdcInvestorPortfSettingField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者编号 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPortfSettingField_get_InvestorID, (setter)PyCThostFtdcInvestorPortfSettingField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorPortfSettingField_get_HedgeFlag, (setter)PyCThostFtdcInvestorPortfSettingField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///是否开启新组保 
    {(char *)"UsePortf", (getter)PyCThostFtdcInvestorPortfSettingField_get_UsePortf, (setter)PyCThostFtdcInvestorPortfSettingField_set_UsePortf, (char *)"UsePortf", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPortfSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPortfSettingField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPortfSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPortfSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPortfSettingField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPortfSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPortfSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPortfSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPortfSettingField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPortfSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPortfSettingField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPortfSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPortfSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPortfSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPortfSettingField", (PyObject *)&PyCThostFtdcInvestorPortfSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPortfSettingField to module");
        Py_DECREF(&PyCThostFtdcInvestorPortfSettingFieldType);
		return -1;
    }

    return 0;
}
