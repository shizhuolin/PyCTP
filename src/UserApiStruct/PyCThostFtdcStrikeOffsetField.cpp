
#include "PyCThostFtdcStrikeOffsetField.h"

///当前期权合约执行偏移值的详细内容

static PyObject *PyCThostFtdcStrikeOffsetField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcStrikeOffsetField *self = (PyCThostFtdcStrikeOffsetField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcStrikeOffsetField_init(PyCThostFtdcStrikeOffsetField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "Offset", "OffsetType", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *StrikeOffsetField_reserve1 = NULL;
    Py_ssize_t StrikeOffsetField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char StrikeOffsetField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *StrikeOffsetField_BrokerID = NULL;
    Py_ssize_t StrikeOffsetField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *StrikeOffsetField_InvestorID = NULL;
    Py_ssize_t StrikeOffsetField_InvestorID_len = 0;
            
    ///执行偏移值
    // TThostFtdcMoneyType double
    double StrikeOffsetField_Offset = 0.0;
        
    ///执行偏移类型
    // TThostFtdcStrikeOffsetTypeType char
    char StrikeOffsetField_OffsetType = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *StrikeOffsetField_InstrumentID = NULL;
    Py_ssize_t StrikeOffsetField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#dcy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dcs#", (char **)kwlist
#endif

        , &StrikeOffsetField_reserve1, &StrikeOffsetField_reserve1_len 
        , &StrikeOffsetField_InvestorRange 
        , &StrikeOffsetField_BrokerID, &StrikeOffsetField_BrokerID_len 
        , &StrikeOffsetField_InvestorID, &StrikeOffsetField_InvestorID_len 
        , &StrikeOffsetField_Offset 
        , &StrikeOffsetField_OffsetType 
        , &StrikeOffsetField_InstrumentID, &StrikeOffsetField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( StrikeOffsetField_reserve1 != NULL ) {
        if(StrikeOffsetField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", StrikeOffsetField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, StrikeOffsetField_reserve1, StrikeOffsetField_reserve1_len);        
        strncpy(self->data.reserve1, StrikeOffsetField_reserve1, sizeof(self->data.reserve1) );
        StrikeOffsetField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = StrikeOffsetField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( StrikeOffsetField_BrokerID != NULL ) {
        if(StrikeOffsetField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", StrikeOffsetField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, StrikeOffsetField_BrokerID, StrikeOffsetField_BrokerID_len);        
        strncpy(self->data.BrokerID, StrikeOffsetField_BrokerID, sizeof(self->data.BrokerID) );
        StrikeOffsetField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( StrikeOffsetField_InvestorID != NULL ) {
        if(StrikeOffsetField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", StrikeOffsetField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, StrikeOffsetField_InvestorID, StrikeOffsetField_InvestorID_len);        
        strncpy(self->data.InvestorID, StrikeOffsetField_InvestorID, sizeof(self->data.InvestorID) );
        StrikeOffsetField_InvestorID = NULL;
    }
            
    ///执行偏移值
    // TThostFtdcMoneyType double
    self->data.Offset = StrikeOffsetField_Offset;
        
    ///执行偏移类型
    // TThostFtdcStrikeOffsetTypeType char
    self->data.OffsetType = StrikeOffsetField_OffsetType;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( StrikeOffsetField_InstrumentID != NULL ) {
        if(StrikeOffsetField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", StrikeOffsetField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, StrikeOffsetField_InstrumentID, StrikeOffsetField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, StrikeOffsetField_InstrumentID, sizeof(self->data.InstrumentID) );
        StrikeOffsetField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcStrikeOffsetField_dealloc(PyCThostFtdcStrikeOffsetField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcStrikeOffsetField_repr(PyCThostFtdcStrikeOffsetField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:c,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"Offset", self->data.Offset 
        ,"OffsetType", self->data.OffsetType 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcStrikeOffsetField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcStrikeOffsetField_get_reserve1(PyCThostFtdcStrikeOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcStrikeOffsetField_set_reserve1(PyCThostFtdcStrikeOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcStrikeOffsetField_get_InvestorRange(PyCThostFtdcStrikeOffsetField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcStrikeOffsetField_set_InvestorRange(PyCThostFtdcStrikeOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcStrikeOffsetField_get_BrokerID(PyCThostFtdcStrikeOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcStrikeOffsetField_set_BrokerID(PyCThostFtdcStrikeOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcStrikeOffsetField_get_InvestorID(PyCThostFtdcStrikeOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcStrikeOffsetField_set_InvestorID(PyCThostFtdcStrikeOffsetField *self, PyObject* val, void *closure) {
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
            
///执行偏移值
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcStrikeOffsetField_get_Offset(PyCThostFtdcStrikeOffsetField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Offset);
}

///执行偏移值
// TThostFtdcMoneyType double
static int PyCThostFtdcStrikeOffsetField_set_Offset(PyCThostFtdcStrikeOffsetField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Offset Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Offset = buf;
    return 0;
}
        
///执行偏移类型
// TThostFtdcStrikeOffsetTypeType char
static PyObject *PyCThostFtdcStrikeOffsetField_get_OffsetType(PyCThostFtdcStrikeOffsetField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

///执行偏移类型
// TThostFtdcStrikeOffsetTypeType char
static int PyCThostFtdcStrikeOffsetField_set_OffsetType(PyCThostFtdcStrikeOffsetField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetType = *buf;
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcStrikeOffsetField_get_InstrumentID(PyCThostFtdcStrikeOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcStrikeOffsetField_set_InstrumentID(PyCThostFtdcStrikeOffsetField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcStrikeOffsetField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcStrikeOffsetField_get_reserve1, (setter)PyCThostFtdcStrikeOffsetField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcStrikeOffsetField_get_InvestorRange, (setter)PyCThostFtdcStrikeOffsetField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcStrikeOffsetField_get_BrokerID, (setter)PyCThostFtdcStrikeOffsetField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcStrikeOffsetField_get_InvestorID, (setter)PyCThostFtdcStrikeOffsetField_set_InvestorID, (char *)"InvestorID", NULL},
    ///执行偏移值 
    {(char *)"Offset", (getter)PyCThostFtdcStrikeOffsetField_get_Offset, (setter)PyCThostFtdcStrikeOffsetField_set_Offset, (char *)"Offset", NULL},
    ///执行偏移类型 
    {(char *)"OffsetType", (getter)PyCThostFtdcStrikeOffsetField_get_OffsetType, (setter)PyCThostFtdcStrikeOffsetField_set_OffsetType, (char *)"OffsetType", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcStrikeOffsetField_get_InstrumentID, (setter)PyCThostFtdcStrikeOffsetField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcStrikeOffsetFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcStrikeOffsetField",	/* tp_name */
	sizeof(PyCThostFtdcStrikeOffsetField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcStrikeOffsetField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcStrikeOffsetField_repr,   /* tp_repr */
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
	"CThostFtdcStrikeOffsetField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcStrikeOffsetField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcStrikeOffsetField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcStrikeOffsetField_new,       /* tp_new */
};

int PyCThostFtdcStrikeOffsetFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcStrikeOffsetField  */
	if (PyType_Ready(&PyCThostFtdcStrikeOffsetFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcStrikeOffsetField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcStrikeOffsetFieldType);
    if( PyModule_AddObject(module, "CThostFtdcStrikeOffsetField", (PyObject *)&PyCThostFtdcStrikeOffsetFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcStrikeOffsetField to module");
        Py_DECREF(&PyCThostFtdcStrikeOffsetFieldType);
		return -1;
    }

    return 0;
}
