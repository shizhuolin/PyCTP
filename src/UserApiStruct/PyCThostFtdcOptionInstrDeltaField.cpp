
#include "PyCThostFtdcOptionInstrDeltaField.h"

///期权合约delta值

static PyObject *PyCThostFtdcOptionInstrDeltaField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionInstrDeltaField *self = (PyCThostFtdcOptionInstrDeltaField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOptionInstrDeltaField_init(PyCThostFtdcOptionInstrDeltaField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "Delta", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *OptionInstrDeltaField_reserve1 = NULL;
    Py_ssize_t OptionInstrDeltaField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char OptionInstrDeltaField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OptionInstrDeltaField_BrokerID = NULL;
    Py_ssize_t OptionInstrDeltaField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OptionInstrDeltaField_InvestorID = NULL;
    Py_ssize_t OptionInstrDeltaField_InvestorID_len = 0;
            
    ///Delta值
    // TThostFtdcRatioType double
    double OptionInstrDeltaField_Delta = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OptionInstrDeltaField_InstrumentID = NULL;
    Py_ssize_t OptionInstrDeltaField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ds#", (char **)kwlist
#endif

        , &OptionInstrDeltaField_reserve1, &OptionInstrDeltaField_reserve1_len 
        , &OptionInstrDeltaField_InvestorRange 
        , &OptionInstrDeltaField_BrokerID, &OptionInstrDeltaField_BrokerID_len 
        , &OptionInstrDeltaField_InvestorID, &OptionInstrDeltaField_InvestorID_len 
        , &OptionInstrDeltaField_Delta 
        , &OptionInstrDeltaField_InstrumentID, &OptionInstrDeltaField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( OptionInstrDeltaField_reserve1 != NULL ) {
        if(OptionInstrDeltaField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", OptionInstrDeltaField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, OptionInstrDeltaField_reserve1, OptionInstrDeltaField_reserve1_len);        
        strncpy(self->data.reserve1, OptionInstrDeltaField_reserve1, sizeof(self->data.reserve1) );
        OptionInstrDeltaField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = OptionInstrDeltaField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OptionInstrDeltaField_BrokerID != NULL ) {
        if(OptionInstrDeltaField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OptionInstrDeltaField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OptionInstrDeltaField_BrokerID, OptionInstrDeltaField_BrokerID_len);        
        strncpy(self->data.BrokerID, OptionInstrDeltaField_BrokerID, sizeof(self->data.BrokerID) );
        OptionInstrDeltaField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OptionInstrDeltaField_InvestorID != NULL ) {
        if(OptionInstrDeltaField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OptionInstrDeltaField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OptionInstrDeltaField_InvestorID, OptionInstrDeltaField_InvestorID_len);        
        strncpy(self->data.InvestorID, OptionInstrDeltaField_InvestorID, sizeof(self->data.InvestorID) );
        OptionInstrDeltaField_InvestorID = NULL;
    }
            
    ///Delta值
    // TThostFtdcRatioType double
    self->data.Delta = OptionInstrDeltaField_Delta;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OptionInstrDeltaField_InstrumentID != NULL ) {
        if(OptionInstrDeltaField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OptionInstrDeltaField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OptionInstrDeltaField_InstrumentID, OptionInstrDeltaField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OptionInstrDeltaField_InstrumentID, sizeof(self->data.InstrumentID) );
        OptionInstrDeltaField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcOptionInstrDeltaField_dealloc(PyCThostFtdcOptionInstrDeltaField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionInstrDeltaField_repr(PyCThostFtdcOptionInstrDeltaField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"Delta", self->data.Delta 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrDeltaField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcOptionInstrDeltaField_get_reserve1(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcOptionInstrDeltaField_set_reserve1(PyCThostFtdcOptionInstrDeltaField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcOptionInstrDeltaField_get_InvestorRange(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcOptionInstrDeltaField_set_InvestorRange(PyCThostFtdcOptionInstrDeltaField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    self->data.InvestorRange = *buf;
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcOptionInstrDeltaField_get_BrokerID(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOptionInstrDeltaField_set_BrokerID(PyCThostFtdcOptionInstrDeltaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrDeltaField_get_InvestorID(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOptionInstrDeltaField_set_InvestorID(PyCThostFtdcOptionInstrDeltaField *self, PyObject* val, void *closure) {
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
            
///Delta值
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcOptionInstrDeltaField_get_Delta(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Delta);
}

///Delta值
// TThostFtdcRatioType double
static int PyCThostFtdcOptionInstrDeltaField_set_Delta(PyCThostFtdcOptionInstrDeltaField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Delta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Delta = buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcOptionInstrDeltaField_get_InstrumentID(PyCThostFtdcOptionInstrDeltaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOptionInstrDeltaField_set_InstrumentID(PyCThostFtdcOptionInstrDeltaField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcOptionInstrDeltaField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcOptionInstrDeltaField_get_reserve1, (setter)PyCThostFtdcOptionInstrDeltaField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcOptionInstrDeltaField_get_InvestorRange, (setter)PyCThostFtdcOptionInstrDeltaField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOptionInstrDeltaField_get_BrokerID, (setter)PyCThostFtdcOptionInstrDeltaField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOptionInstrDeltaField_get_InvestorID, (setter)PyCThostFtdcOptionInstrDeltaField_set_InvestorID, (char *)"InvestorID", NULL},
    ///Delta值 
    {(char *)"Delta", (getter)PyCThostFtdcOptionInstrDeltaField_get_Delta, (setter)PyCThostFtdcOptionInstrDeltaField_set_Delta, (char *)"Delta", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOptionInstrDeltaField_get_InstrumentID, (setter)PyCThostFtdcOptionInstrDeltaField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionInstrDeltaFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionInstrDeltaField",	/* tp_name */
	sizeof(PyCThostFtdcOptionInstrDeltaField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionInstrDeltaField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionInstrDeltaField_repr,   /* tp_repr */
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
	"CThostFtdcOptionInstrDeltaField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionInstrDeltaField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionInstrDeltaField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionInstrDeltaField_new,       /* tp_new */
};

int PyCThostFtdcOptionInstrDeltaFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionInstrDeltaField  */
	if (PyType_Ready(&PyCThostFtdcOptionInstrDeltaFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionInstrDeltaField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionInstrDeltaFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionInstrDeltaField", (PyObject *)&PyCThostFtdcOptionInstrDeltaFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrDeltaField to module");
        Py_DECREF(&PyCThostFtdcOptionInstrDeltaFieldType);
		return -1;
    }

    return 0;
}
