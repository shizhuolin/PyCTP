
#include "PyCThostFtdcSyncDeltaSPMMModelParamField.h"

///风险结算追平SPMM模板参数设置

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPMMModelParamField *self = (PyCThostFtdcSyncDeltaSPMMModelParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_init(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "SPMMModelID", "CommodityGroupID", "IntraCommodityRate", "InterCommodityRate", "OptionDiscountRate", "MiniMarginRatio", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPMMModelParamField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPMMModelParamField_ExchangeID_len = 0;
            
    ///SPMM模板ID
    // TThostFtdcSPMMModelIDType char[33]
    const char *SyncDeltaSPMMModelParamField_SPMMModelID = NULL;
    Py_ssize_t SyncDeltaSPMMModelParamField_SPMMModelID_len = 0;
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SyncDeltaSPMMModelParamField_CommodityGroupID = NULL;
    Py_ssize_t SyncDeltaSPMMModelParamField_CommodityGroupID_len = 0;
            
    ///SPMM品种内跨期优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    double SyncDeltaSPMMModelParamField_IntraCommodityRate = 0.0;
        
    ///SPMM品种间优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    double SyncDeltaSPMMModelParamField_InterCommodityRate = 0.0;
        
    ///SPMM期权优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    double SyncDeltaSPMMModelParamField_OptionDiscountRate = 0.0;
        
    ///商品群最小保证金比例
    // TThostFtdcSPMMDiscountRatioType double
    double SyncDeltaSPMMModelParamField_MiniMarginRatio = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPMMModelParamField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPMMModelParamField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ddddci", (char **)kwlist
#endif

        , &SyncDeltaSPMMModelParamField_ExchangeID, &SyncDeltaSPMMModelParamField_ExchangeID_len 
        , &SyncDeltaSPMMModelParamField_SPMMModelID, &SyncDeltaSPMMModelParamField_SPMMModelID_len 
        , &SyncDeltaSPMMModelParamField_CommodityGroupID, &SyncDeltaSPMMModelParamField_CommodityGroupID_len 
        , &SyncDeltaSPMMModelParamField_IntraCommodityRate 
        , &SyncDeltaSPMMModelParamField_InterCommodityRate 
        , &SyncDeltaSPMMModelParamField_OptionDiscountRate 
        , &SyncDeltaSPMMModelParamField_MiniMarginRatio 
        , &SyncDeltaSPMMModelParamField_ActionDirection 
        , &SyncDeltaSPMMModelParamField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPMMModelParamField_ExchangeID != NULL ) {
        if(SyncDeltaSPMMModelParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMModelParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPMMModelParamField_ExchangeID, SyncDeltaSPMMModelParamField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPMMModelParamField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPMMModelParamField_ExchangeID = NULL;
    }
            
    ///SPMM模板ID
    // TThostFtdcSPMMModelIDType char[33]
    if( SyncDeltaSPMMModelParamField_SPMMModelID != NULL ) {
        if(SyncDeltaSPMMModelParamField_SPMMModelID_len > (Py_ssize_t)sizeof(self->data.SPMMModelID)) {
            PyErr_Format(PyExc_ValueError, "SPMMModelID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMModelParamField_SPMMModelID_len, (Py_ssize_t)sizeof(self->data.SPMMModelID));
            return -1;
        }
        // memset(self->data.SPMMModelID, 0, sizeof(self->data.SPMMModelID));
        // memcpy(self->data.SPMMModelID, SyncDeltaSPMMModelParamField_SPMMModelID, SyncDeltaSPMMModelParamField_SPMMModelID_len);        
        strncpy(self->data.SPMMModelID, SyncDeltaSPMMModelParamField_SPMMModelID, sizeof(self->data.SPMMModelID) );
        SyncDeltaSPMMModelParamField_SPMMModelID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SyncDeltaSPMMModelParamField_CommodityGroupID != NULL ) {
        if(SyncDeltaSPMMModelParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMModelParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
            return -1;
        }
        // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
        // memcpy(self->data.CommodityGroupID, SyncDeltaSPMMModelParamField_CommodityGroupID, SyncDeltaSPMMModelParamField_CommodityGroupID_len);        
        strncpy(self->data.CommodityGroupID, SyncDeltaSPMMModelParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
        SyncDeltaSPMMModelParamField_CommodityGroupID = NULL;
    }
            
    ///SPMM品种内跨期优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    self->data.IntraCommodityRate = SyncDeltaSPMMModelParamField_IntraCommodityRate;
        
    ///SPMM品种间优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    self->data.InterCommodityRate = SyncDeltaSPMMModelParamField_InterCommodityRate;
        
    ///SPMM期权优惠系数
    // TThostFtdcSPMMDiscountRatioType double
    self->data.OptionDiscountRate = SyncDeltaSPMMModelParamField_OptionDiscountRate;
        
    ///商品群最小保证金比例
    // TThostFtdcSPMMDiscountRatioType double
    self->data.MiniMarginRatio = SyncDeltaSPMMModelParamField_MiniMarginRatio;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPMMModelParamField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPMMModelParamField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPMMModelParamField_dealloc(PyCThostFtdcSyncDeltaSPMMModelParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_repr(PyCThostFtdcSyncDeltaSPMMModelParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"SPMMModelID", self->data.SPMMModelID//, (Py_ssize_t)sizeof(self->data.SPMMModelID) 
        ,"CommodityGroupID", self->data.CommodityGroupID//, (Py_ssize_t)sizeof(self->data.CommodityGroupID) 
        ,"IntraCommodityRate", self->data.IntraCommodityRate 
        ,"InterCommodityRate", self->data.InterCommodityRate 
        ,"OptionDiscountRate", self->data.OptionDiscountRate 
        ,"MiniMarginRatio", self->data.MiniMarginRatio 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMModelParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_ExchangeID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_ExchangeID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
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
            
///SPMM模板ID
// TThostFtdcSPMMModelIDType char[33]
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_SPMMModelID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SPMMModelID, (Py_ssize_t)sizeof(self->data.SPMMModelID));
    return PyBytes_FromString(self->data.SPMMModelID);
}

///SPMM模板ID
// TThostFtdcSPMMModelIDType char[33]
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_SPMMModelID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SPMMModelID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SPMMModelID)) {
        PyErr_SetString(PyExc_ValueError, "SPMMModelID must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.SPMMModelID, 0, sizeof(self->data.SPMMModelID));
    // memcpy(self->data.SPMMModelID, buf, len);
    strncpy(self->data.SPMMModelID, buf, sizeof(self->data.SPMMModelID));
    return 0;
}
            
///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityGroupID, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
    return PyBytes_FromString(self->data.CommodityGroupID);
}

///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
    // memcpy(self->data.CommodityGroupID, buf, len);
    strncpy(self->data.CommodityGroupID, buf, sizeof(self->data.CommodityGroupID));
    return 0;
}
            
///SPMM品种内跨期优惠系数
// TThostFtdcSPMMDiscountRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_IntraCommodityRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraCommodityRate);
}

///SPMM品种内跨期优惠系数
// TThostFtdcSPMMDiscountRatioType double
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_IntraCommodityRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraCommodityRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraCommodityRate = buf;
    return 0;
}
        
///SPMM品种间优惠系数
// TThostFtdcSPMMDiscountRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_InterCommodityRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
    return PyFloat_FromDouble(self->data.InterCommodityRate);
}

///SPMM品种间优惠系数
// TThostFtdcSPMMDiscountRatioType double
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_InterCommodityRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterCommodityRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterCommodityRate = buf;
    return 0;
}
        
///SPMM期权优惠系数
// TThostFtdcSPMMDiscountRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_OptionDiscountRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OptionDiscountRate);
}

///SPMM期权优惠系数
// TThostFtdcSPMMDiscountRatioType double
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_OptionDiscountRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionDiscountRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionDiscountRate = buf;
    return 0;
}
        
///商品群最小保证金比例
// TThostFtdcSPMMDiscountRatioType double
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_MiniMarginRatio(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MiniMarginRatio);
}

///商品群最小保证金比例
// TThostFtdcSPMMDiscountRatioType double
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_MiniMarginRatio(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MiniMarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MiniMarginRatio = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_ActionDirection(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_ActionDirection(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPMMModelParamField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///SPMM模板ID 
    {(char *)"SPMMModelID", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_SPMMModelID, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_SPMMModelID, (char *)"SPMMModelID", NULL},
    ///商品群代码 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
    ///SPMM品种内跨期优惠系数 
    {(char *)"IntraCommodityRate", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_IntraCommodityRate, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_IntraCommodityRate, (char *)"IntraCommodityRate", NULL},
    ///SPMM品种间优惠系数 
    {(char *)"InterCommodityRate", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_InterCommodityRate, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_InterCommodityRate, (char *)"InterCommodityRate", NULL},
    ///SPMM期权优惠系数 
    {(char *)"OptionDiscountRate", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_OptionDiscountRate, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_OptionDiscountRate, (char *)"OptionDiscountRate", NULL},
    ///商品群最小保证金比例 
    {(char *)"MiniMarginRatio", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_MiniMarginRatio, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_MiniMarginRatio, (char *)"MiniMarginRatio", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPMMModelParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPMMModelParamField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPMMModelParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPMMModelParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPMMModelParamField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPMMModelParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPMMModelParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPMMModelParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPMMModelParamField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPMMModelParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPMMModelParamField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPMMModelParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPMMModelParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPMMModelParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMModelParamField", (PyObject *)&PyCThostFtdcSyncDeltaSPMMModelParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMModelParamField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPMMModelParamFieldType);
		return -1;
    }

    return 0;
}
