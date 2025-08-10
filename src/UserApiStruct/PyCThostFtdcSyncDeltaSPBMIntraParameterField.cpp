
#include "PyCThostFtdcSyncDeltaSPBMIntraParameterField.h"

///风险结算追平SPBM品种内对锁仓折扣参数

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMIntraParameterField *self = (PyCThostFtdcSyncDeltaSPBMIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_init(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdFamilyCode", "IntraRateY", "AddOnIntraRateY2", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaSPBMIntraParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaSPBMIntraParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPBMIntraParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPBMIntraParameterField_ExchangeID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPBMIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaSPBMIntraParameterField_ProdFamilyCode_len = 0;
            
    ///品种内合约间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    double SyncDeltaSPBMIntraParameterField_IntraRateY = 0.0;
        
    ///品种内合约间对锁仓附加费率折扣比例
    // TThostFtdcRatioType double
    double SyncDeltaSPBMIntraParameterField_AddOnIntraRateY2 = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPBMIntraParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ddci", (char **)kwlist
#endif

        , &SyncDeltaSPBMIntraParameterField_TradingDay, &SyncDeltaSPBMIntraParameterField_TradingDay_len 
        , &SyncDeltaSPBMIntraParameterField_ExchangeID, &SyncDeltaSPBMIntraParameterField_ExchangeID_len 
        , &SyncDeltaSPBMIntraParameterField_ProdFamilyCode, &SyncDeltaSPBMIntraParameterField_ProdFamilyCode_len 
        , &SyncDeltaSPBMIntraParameterField_IntraRateY 
        , &SyncDeltaSPBMIntraParameterField_AddOnIntraRateY2 
        , &SyncDeltaSPBMIntraParameterField_ActionDirection 
        , &SyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaSPBMIntraParameterField_TradingDay != NULL ) {
        if(SyncDeltaSPBMIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaSPBMIntraParameterField_TradingDay, SyncDeltaSPBMIntraParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaSPBMIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaSPBMIntraParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPBMIntraParameterField_ExchangeID != NULL ) {
        if(SyncDeltaSPBMIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPBMIntraParameterField_ExchangeID, SyncDeltaSPBMIntraParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPBMIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPBMIntraParameterField_ExchangeID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPBMIntraParameterField_ProdFamilyCode != NULL ) {
        if(SyncDeltaSPBMIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, SyncDeltaSPBMIntraParameterField_ProdFamilyCode, SyncDeltaSPBMIntraParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, SyncDeltaSPBMIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        SyncDeltaSPBMIntraParameterField_ProdFamilyCode = NULL;
    }
            
    ///品种内合约间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    self->data.IntraRateY = SyncDeltaSPBMIntraParameterField_IntraRateY;
        
    ///品种内合约间对锁仓附加费率折扣比例
    // TThostFtdcRatioType double
    self->data.AddOnIntraRateY2 = SyncDeltaSPBMIntraParameterField_AddOnIntraRateY2;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPBMIntraParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPBMIntraParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMIntraParameterField_dealloc(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_repr(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"IntraRateY", self->data.IntraRateY 
        ,"AddOnIntraRateY2", self->data.AddOnIntraRateY2 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_TradingDay(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_TradingDay(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject* val, void *closure) {
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
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject* val, void *closure) {
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
            
///品种内合约间对锁仓费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_IntraRateY(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraRateY);
}

///品种内合约间对锁仓费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_IntraRateY(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraRateY Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraRateY = buf;
    return 0;
}
        
///品种内合约间对锁仓附加费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_AddOnIntraRateY2(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AddOnIntraRateY2);
}

///品种内合约间对锁仓附加费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_AddOnIntraRateY2(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnIntraRateY2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnIntraRateY2 = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMIntraParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMIntraParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///品种内合约间对锁仓费率折扣比例 
    {(char *)"IntraRateY", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_IntraRateY, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_IntraRateY, (char *)"IntraRateY", NULL},
    ///品种内合约间对锁仓附加费率折扣比例 
    {(char *)"AddOnIntraRateY2", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_AddOnIntraRateY2, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_AddOnIntraRateY2, (char *)"AddOnIntraRateY2", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMIntraParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMIntraParameterField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType);
		return -1;
    }

    return 0;
}
