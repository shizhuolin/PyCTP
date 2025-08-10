
#include "PyCThostFtdcFutureLimitPosiParamField.h"

///期货持仓限制参数

static PyObject *PyCThostFtdcFutureLimitPosiParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcFutureLimitPosiParamField *self = (PyCThostFtdcFutureLimitPosiParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcFutureLimitPosiParamField_init(PyCThostFtdcFutureLimitPosiParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorRange", "BrokerID", "InvestorID", "reserve1", "SpecOpenVolume", "ArbiOpenVolume", "OpenVolume", "ProductID",  NULL};


    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char FutureLimitPosiParamField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *FutureLimitPosiParamField_BrokerID = NULL;
    Py_ssize_t FutureLimitPosiParamField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *FutureLimitPosiParamField_InvestorID = NULL;
    Py_ssize_t FutureLimitPosiParamField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *FutureLimitPosiParamField_reserve1 = NULL;
    Py_ssize_t FutureLimitPosiParamField_reserve1_len = 0;
            
    ///当日投机开仓数量限制
    // TThostFtdcVolumeType int
    int FutureLimitPosiParamField_SpecOpenVolume = 0;
        
    ///当日套利开仓数量限制
    // TThostFtdcVolumeType int
    int FutureLimitPosiParamField_ArbiOpenVolume = 0;
        
    ///当日投机+套利开仓数量限制
    // TThostFtdcVolumeType int
    int FutureLimitPosiParamField_OpenVolume = 0;
        
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *FutureLimitPosiParamField_ProductID = NULL;
    Py_ssize_t FutureLimitPosiParamField_ProductID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|cy#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|cs#s#s#iiis#", (char **)kwlist
#endif

        , &FutureLimitPosiParamField_InvestorRange 
        , &FutureLimitPosiParamField_BrokerID, &FutureLimitPosiParamField_BrokerID_len 
        , &FutureLimitPosiParamField_InvestorID, &FutureLimitPosiParamField_InvestorID_len 
        , &FutureLimitPosiParamField_reserve1, &FutureLimitPosiParamField_reserve1_len 
        , &FutureLimitPosiParamField_SpecOpenVolume 
        , &FutureLimitPosiParamField_ArbiOpenVolume 
        , &FutureLimitPosiParamField_OpenVolume 
        , &FutureLimitPosiParamField_ProductID, &FutureLimitPosiParamField_ProductID_len 


    )) {
        return -1;
    }


    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = FutureLimitPosiParamField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( FutureLimitPosiParamField_BrokerID != NULL ) {
        if(FutureLimitPosiParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", FutureLimitPosiParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, FutureLimitPosiParamField_BrokerID, FutureLimitPosiParamField_BrokerID_len);        
        strncpy(self->data.BrokerID, FutureLimitPosiParamField_BrokerID, sizeof(self->data.BrokerID) );
        FutureLimitPosiParamField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( FutureLimitPosiParamField_InvestorID != NULL ) {
        if(FutureLimitPosiParamField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", FutureLimitPosiParamField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, FutureLimitPosiParamField_InvestorID, FutureLimitPosiParamField_InvestorID_len);        
        strncpy(self->data.InvestorID, FutureLimitPosiParamField_InvestorID, sizeof(self->data.InvestorID) );
        FutureLimitPosiParamField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( FutureLimitPosiParamField_reserve1 != NULL ) {
        if(FutureLimitPosiParamField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", FutureLimitPosiParamField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, FutureLimitPosiParamField_reserve1, FutureLimitPosiParamField_reserve1_len);        
        strncpy(self->data.reserve1, FutureLimitPosiParamField_reserve1, sizeof(self->data.reserve1) );
        FutureLimitPosiParamField_reserve1 = NULL;
    }
            
    ///当日投机开仓数量限制
    // TThostFtdcVolumeType int
    self->data.SpecOpenVolume = FutureLimitPosiParamField_SpecOpenVolume;
        
    ///当日套利开仓数量限制
    // TThostFtdcVolumeType int
    self->data.ArbiOpenVolume = FutureLimitPosiParamField_ArbiOpenVolume;
        
    ///当日投机+套利开仓数量限制
    // TThostFtdcVolumeType int
    self->data.OpenVolume = FutureLimitPosiParamField_OpenVolume;
        
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( FutureLimitPosiParamField_ProductID != NULL ) {
        if(FutureLimitPosiParamField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", FutureLimitPosiParamField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, FutureLimitPosiParamField_ProductID, FutureLimitPosiParamField_ProductID_len);        
        strncpy(self->data.ProductID, FutureLimitPosiParamField_ProductID, sizeof(self->data.ProductID) );
        FutureLimitPosiParamField_ProductID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcFutureLimitPosiParamField_dealloc(PyCThostFtdcFutureLimitPosiParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_repr(PyCThostFtdcFutureLimitPosiParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:c,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:c,s:s,s:s,s:s,s:i,s:i,s:i,s:s}"
#endif

        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"SpecOpenVolume", self->data.SpecOpenVolume 
        ,"ArbiOpenVolume", self->data.ArbiOpenVolume 
        ,"OpenVolume", self->data.OpenVolume 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFutureLimitPosiParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_InvestorRange(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcFutureLimitPosiParamField_set_InvestorRange(PyCThostFtdcFutureLimitPosiParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_BrokerID(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcFutureLimitPosiParamField_set_BrokerID(PyCThostFtdcFutureLimitPosiParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_InvestorID(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcFutureLimitPosiParamField_set_InvestorID(PyCThostFtdcFutureLimitPosiParamField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_reserve1(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcFutureLimitPosiParamField_set_reserve1(PyCThostFtdcFutureLimitPosiParamField *self, PyObject* val, void *closure) {
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
            
///当日投机开仓数量限制
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_SpecOpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SpecOpenVolume);
#else
    return PyInt_FromLong(self->data.SpecOpenVolume);
#endif
}

///当日投机开仓数量限制
// TThostFtdcVolumeType int
static int PyCThostFtdcFutureLimitPosiParamField_set_SpecOpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecOpenVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecOpenVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SpecOpenVolume value out of range for C int");
        return -1;
    }
    self->data.SpecOpenVolume = (int)buf;
    return 0;
}
        
///当日套利开仓数量限制
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_ArbiOpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ArbiOpenVolume);
#else
    return PyInt_FromLong(self->data.ArbiOpenVolume);
#endif
}

///当日套利开仓数量限制
// TThostFtdcVolumeType int
static int PyCThostFtdcFutureLimitPosiParamField_set_ArbiOpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ArbiOpenVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ArbiOpenVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ArbiOpenVolume value out of range for C int");
        return -1;
    }
    self->data.ArbiOpenVolume = (int)buf;
    return 0;
}
        
///当日投机+套利开仓数量限制
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_OpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OpenVolume);
#else
    return PyInt_FromLong(self->data.OpenVolume);
#endif
}

///当日投机+套利开仓数量限制
// TThostFtdcVolumeType int
static int PyCThostFtdcFutureLimitPosiParamField_set_OpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenVolume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenVolume Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OpenVolume value out of range for C int");
        return -1;
    }
    self->data.OpenVolume = (int)buf;
    return 0;
}
        
///产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_ProductID(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcFutureLimitPosiParamField_set_ProductID(PyCThostFtdcFutureLimitPosiParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcFutureLimitPosiParamField_getset[] = {
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcFutureLimitPosiParamField_get_InvestorRange, (setter)PyCThostFtdcFutureLimitPosiParamField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcFutureLimitPosiParamField_get_BrokerID, (setter)PyCThostFtdcFutureLimitPosiParamField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcFutureLimitPosiParamField_get_InvestorID, (setter)PyCThostFtdcFutureLimitPosiParamField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcFutureLimitPosiParamField_get_reserve1, (setter)PyCThostFtdcFutureLimitPosiParamField_set_reserve1, (char *)"reserve1", NULL},
    ///当日投机开仓数量限制 
    {(char *)"SpecOpenVolume", (getter)PyCThostFtdcFutureLimitPosiParamField_get_SpecOpenVolume, (setter)PyCThostFtdcFutureLimitPosiParamField_set_SpecOpenVolume, (char *)"SpecOpenVolume", NULL},
    ///当日套利开仓数量限制 
    {(char *)"ArbiOpenVolume", (getter)PyCThostFtdcFutureLimitPosiParamField_get_ArbiOpenVolume, (setter)PyCThostFtdcFutureLimitPosiParamField_set_ArbiOpenVolume, (char *)"ArbiOpenVolume", NULL},
    ///当日投机+套利开仓数量限制 
    {(char *)"OpenVolume", (getter)PyCThostFtdcFutureLimitPosiParamField_get_OpenVolume, (setter)PyCThostFtdcFutureLimitPosiParamField_set_OpenVolume, (char *)"OpenVolume", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcFutureLimitPosiParamField_get_ProductID, (setter)PyCThostFtdcFutureLimitPosiParamField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcFutureLimitPosiParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcFutureLimitPosiParamField",	/* tp_name */
	sizeof(PyCThostFtdcFutureLimitPosiParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcFutureLimitPosiParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcFutureLimitPosiParamField_repr,   /* tp_repr */
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
	"CThostFtdcFutureLimitPosiParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcFutureLimitPosiParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcFutureLimitPosiParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcFutureLimitPosiParamField_new,       /* tp_new */
};

int PyCThostFtdcFutureLimitPosiParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcFutureLimitPosiParamField  */
	if (PyType_Ready(&PyCThostFtdcFutureLimitPosiParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcFutureLimitPosiParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcFutureLimitPosiParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcFutureLimitPosiParamField", (PyObject *)&PyCThostFtdcFutureLimitPosiParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFutureLimitPosiParamField to module");
        Py_DECREF(&PyCThostFtdcFutureLimitPosiParamFieldType);
		return -1;
    }

    return 0;
}
