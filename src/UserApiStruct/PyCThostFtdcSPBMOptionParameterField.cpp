
#include "PyCThostFtdcSPBMOptionParameterField.h"

///SPBM期权合约保证金参数

static PyObject *PyCThostFtdcSPBMOptionParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMOptionParameterField *self = (PyCThostFtdcSPBMOptionParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMOptionParameterField_init(PyCThostFtdcSPBMOptionParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "DownPrice", "Delta", "SlimiDelta", "PreSettlementPrice",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SPBMOptionParameterField_TradingDay = NULL;
    Py_ssize_t SPBMOptionParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SPBMOptionParameterField_ExchangeID = NULL;
    Py_ssize_t SPBMOptionParameterField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SPBMOptionParameterField_InstrumentID = NULL;
    Py_ssize_t SPBMOptionParameterField_InstrumentID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SPBMOptionParameterField_ProdFamilyCode = NULL;
    Py_ssize_t SPBMOptionParameterField_ProdFamilyCode_len = 0;
            
    ///期权合约因子
    // TThostFtdcVolumeMultipleType int
    int SPBMOptionParameterField_Cvf = 0;
        
    ///期权冲抵价格
    // TThostFtdcPriceType double
    double SPBMOptionParameterField_DownPrice = 0.0;
        
    ///Delta值
    // TThostFtdcDeltaType double
    double SPBMOptionParameterField_Delta = 0.0;
        
    ///卖方期权风险转换最低值
    // TThostFtdcDeltaType double
    double SPBMOptionParameterField_SlimiDelta = 0.0;
        
    ///昨结算价
    // TThostFtdcPriceType double
    double SPBMOptionParameterField_PreSettlementPrice = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#idddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#idddd", (char **)kwlist
#endif

        , &SPBMOptionParameterField_TradingDay, &SPBMOptionParameterField_TradingDay_len 
        , &SPBMOptionParameterField_ExchangeID, &SPBMOptionParameterField_ExchangeID_len 
        , &SPBMOptionParameterField_InstrumentID, &SPBMOptionParameterField_InstrumentID_len 
        , &SPBMOptionParameterField_ProdFamilyCode, &SPBMOptionParameterField_ProdFamilyCode_len 
        , &SPBMOptionParameterField_Cvf 
        , &SPBMOptionParameterField_DownPrice 
        , &SPBMOptionParameterField_Delta 
        , &SPBMOptionParameterField_SlimiDelta 
        , &SPBMOptionParameterField_PreSettlementPrice 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SPBMOptionParameterField_TradingDay != NULL ) {
        if(SPBMOptionParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SPBMOptionParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SPBMOptionParameterField_TradingDay, SPBMOptionParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SPBMOptionParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SPBMOptionParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SPBMOptionParameterField_ExchangeID != NULL ) {
        if(SPBMOptionParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SPBMOptionParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SPBMOptionParameterField_ExchangeID, SPBMOptionParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SPBMOptionParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SPBMOptionParameterField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SPBMOptionParameterField_InstrumentID != NULL ) {
        if(SPBMOptionParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SPBMOptionParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SPBMOptionParameterField_InstrumentID, SPBMOptionParameterField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SPBMOptionParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
        SPBMOptionParameterField_InstrumentID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( SPBMOptionParameterField_ProdFamilyCode != NULL ) {
        if(SPBMOptionParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", SPBMOptionParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, SPBMOptionParameterField_ProdFamilyCode, SPBMOptionParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, SPBMOptionParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        SPBMOptionParameterField_ProdFamilyCode = NULL;
    }
            
    ///期权合约因子
    // TThostFtdcVolumeMultipleType int
    self->data.Cvf = SPBMOptionParameterField_Cvf;
        
    ///期权冲抵价格
    // TThostFtdcPriceType double
    self->data.DownPrice = SPBMOptionParameterField_DownPrice;
        
    ///Delta值
    // TThostFtdcDeltaType double
    self->data.Delta = SPBMOptionParameterField_Delta;
        
    ///卖方期权风险转换最低值
    // TThostFtdcDeltaType double
    self->data.SlimiDelta = SPBMOptionParameterField_SlimiDelta;
        
    ///昨结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = SPBMOptionParameterField_PreSettlementPrice;
        

    return 0;
}

static void PyCThostFtdcSPBMOptionParameterField_dealloc(PyCThostFtdcSPBMOptionParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_repr(PyCThostFtdcSPBMOptionParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:d,s:d,s:d,s:d}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"Cvf", self->data.Cvf 
        ,"DownPrice", self->data.DownPrice 
        ,"Delta", self->data.Delta 
        ,"SlimiDelta", self->data.SlimiDelta 
        ,"PreSettlementPrice", self->data.PreSettlementPrice 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMOptionParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_TradingDay(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSPBMOptionParameterField_set_TradingDay(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_ExchangeID(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSPBMOptionParameterField_set_ExchangeID(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_InstrumentID(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSPBMOptionParameterField_set_InstrumentID(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_ProdFamilyCode(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSPBMOptionParameterField_set_ProdFamilyCode(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
            
///期权合约因子
// TThostFtdcVolumeMultipleType int
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_Cvf(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Cvf);
#else
    return PyInt_FromLong(self->data.Cvf);
#endif
}

///期权合约因子
// TThostFtdcVolumeMultipleType int
static int PyCThostFtdcSPBMOptionParameterField_set_Cvf(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Cvf Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Cvf Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Cvf value out of range for C int");
        return -1;
    }
    self->data.Cvf = (int)buf;
    return 0;
}
        
///期权冲抵价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_DownPrice(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DownPrice);
}

///期权冲抵价格
// TThostFtdcPriceType double
static int PyCThostFtdcSPBMOptionParameterField_set_DownPrice(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DownPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DownPrice = buf;
    return 0;
}
        
///Delta值
// TThostFtdcDeltaType double
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_Delta(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Delta);
}

///Delta值
// TThostFtdcDeltaType double
static int PyCThostFtdcSPBMOptionParameterField_set_Delta(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
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
        
///卖方期权风险转换最低值
// TThostFtdcDeltaType double
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_SlimiDelta(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SlimiDelta);
}

///卖方期权风险转换最低值
// TThostFtdcDeltaType double
static int PyCThostFtdcSPBMOptionParameterField_set_SlimiDelta(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SlimiDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SlimiDelta = buf;
    return 0;
}
        
///昨结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSPBMOptionParameterField_get_PreSettlementPrice(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///昨结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSPBMOptionParameterField_set_PreSettlementPrice(PyCThostFtdcSPBMOptionParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreSettlementPrice = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSPBMOptionParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSPBMOptionParameterField_get_TradingDay, (setter)PyCThostFtdcSPBMOptionParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMOptionParameterField_get_ExchangeID, (setter)PyCThostFtdcSPBMOptionParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSPBMOptionParameterField_get_InstrumentID, (setter)PyCThostFtdcSPBMOptionParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSPBMOptionParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSPBMOptionParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///期权合约因子 
    {(char *)"Cvf", (getter)PyCThostFtdcSPBMOptionParameterField_get_Cvf, (setter)PyCThostFtdcSPBMOptionParameterField_set_Cvf, (char *)"Cvf", NULL},
    ///期权冲抵价格 
    {(char *)"DownPrice", (getter)PyCThostFtdcSPBMOptionParameterField_get_DownPrice, (setter)PyCThostFtdcSPBMOptionParameterField_set_DownPrice, (char *)"DownPrice", NULL},
    ///Delta值 
    {(char *)"Delta", (getter)PyCThostFtdcSPBMOptionParameterField_get_Delta, (setter)PyCThostFtdcSPBMOptionParameterField_set_Delta, (char *)"Delta", NULL},
    ///卖方期权风险转换最低值 
    {(char *)"SlimiDelta", (getter)PyCThostFtdcSPBMOptionParameterField_get_SlimiDelta, (setter)PyCThostFtdcSPBMOptionParameterField_set_SlimiDelta, (char *)"SlimiDelta", NULL},
    ///昨结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSPBMOptionParameterField_get_PreSettlementPrice, (setter)PyCThostFtdcSPBMOptionParameterField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMOptionParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMOptionParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMOptionParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMOptionParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMOptionParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMOptionParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMOptionParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMOptionParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMOptionParameterField_new,       /* tp_new */
};

int PyCThostFtdcSPBMOptionParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMOptionParameterField  */
	if (PyType_Ready(&PyCThostFtdcSPBMOptionParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMOptionParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMOptionParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMOptionParameterField", (PyObject *)&PyCThostFtdcSPBMOptionParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMOptionParameterField to module");
        Py_DECREF(&PyCThostFtdcSPBMOptionParameterFieldType);
		return -1;
    }

    return 0;
}
