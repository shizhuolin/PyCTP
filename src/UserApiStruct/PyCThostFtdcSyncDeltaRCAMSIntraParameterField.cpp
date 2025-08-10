
#include "PyCThostFtdcSyncDeltaRCAMSIntraParameterField.h"

///风险结算追平RCAMS品种内风险对冲参数

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self = (PyCThostFtdcSyncDeltaRCAMSIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_init(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "CombProductID", "HedgeRate", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaRCAMSIntraParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaRCAMSIntraParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRCAMSIntraParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRCAMSIntraParameterField_ExchangeID_len = 0;
            
    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSIntraParameterField_CombProductID = NULL;
    Py_ssize_t SyncDeltaRCAMSIntraParameterField_CombProductID_len = 0;
            
    ///品种内对冲比率
    // TThostFtdcHedgeRateType double
    double SyncDeltaRCAMSIntraParameterField_HedgeRate = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRCAMSIntraParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dci", (char **)kwlist
#endif

        , &SyncDeltaRCAMSIntraParameterField_TradingDay, &SyncDeltaRCAMSIntraParameterField_TradingDay_len 
        , &SyncDeltaRCAMSIntraParameterField_ExchangeID, &SyncDeltaRCAMSIntraParameterField_ExchangeID_len 
        , &SyncDeltaRCAMSIntraParameterField_CombProductID, &SyncDeltaRCAMSIntraParameterField_CombProductID_len 
        , &SyncDeltaRCAMSIntraParameterField_HedgeRate 
        , &SyncDeltaRCAMSIntraParameterField_ActionDirection 
        , &SyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaRCAMSIntraParameterField_TradingDay != NULL ) {
        if(SyncDeltaRCAMSIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaRCAMSIntraParameterField_TradingDay, SyncDeltaRCAMSIntraParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaRCAMSIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaRCAMSIntraParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRCAMSIntraParameterField_ExchangeID != NULL ) {
        if(SyncDeltaRCAMSIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRCAMSIntraParameterField_ExchangeID, SyncDeltaRCAMSIntraParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRCAMSIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRCAMSIntraParameterField_ExchangeID = NULL;
    }
            
    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSIntraParameterField_CombProductID != NULL ) {
        if(SyncDeltaRCAMSIntraParameterField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSIntraParameterField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
            return -1;
        }
        // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
        // memcpy(self->data.CombProductID, SyncDeltaRCAMSIntraParameterField_CombProductID, SyncDeltaRCAMSIntraParameterField_CombProductID_len);        
        strncpy(self->data.CombProductID, SyncDeltaRCAMSIntraParameterField_CombProductID, sizeof(self->data.CombProductID) );
        SyncDeltaRCAMSIntraParameterField_CombProductID = NULL;
    }
            
    ///品种内对冲比率
    // TThostFtdcHedgeRateType double
    self->data.HedgeRate = SyncDeltaRCAMSIntraParameterField_HedgeRate;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRCAMSIntraParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSIntraParameterField_dealloc(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_repr(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"CombProductID", self->data.CombProductID//, (Py_ssize_t)sizeof(self->data.CombProductID) 
        ,"HedgeRate", self->data.HedgeRate 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, PyObject* val, void *closure) {
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
            
///产品组合代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_CombProductID(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProductID, (Py_ssize_t)sizeof(self->data.CombProductID));
    return PyBytes_FromString(self->data.CombProductID);
}

///产品组合代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_CombProductID(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, PyObject* val, void *closure) {
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
            
///品种内对冲比率
// TThostFtdcHedgeRateType double
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_HedgeRate(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HedgeRate);
}

///品种内对冲比率
// TThostFtdcHedgeRateType double
static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_HedgeRate(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HedgeRate = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    self->data.ActionDirection = *buf;
    return 0;
}
            
///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SyncDeltaSequenceNo value out of range for C int");
        return -1;
    }
    self->data.SyncDeltaSequenceNo = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSIntraParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品组合代码 
    {(char *)"CombProductID", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_CombProductID, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_CombProductID, (char *)"CombProductID", NULL},
    ///品种内对冲比率 
    {(char *)"HedgeRate", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_HedgeRate, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_HedgeRate, (char *)"HedgeRate", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSIntraParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType);
		return -1;
    }

    return 0;
}
