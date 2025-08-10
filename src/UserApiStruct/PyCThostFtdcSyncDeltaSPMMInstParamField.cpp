
#include "PyCThostFtdcSyncDeltaSPMMInstParamField.h"

///风险结算追平SPMM合约参数

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPMMInstParamField *self = (PyCThostFtdcSyncDeltaSPMMInstParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPMMInstParamField_init(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID", "InstMarginCalID", "CommodityID", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPMMInstParamField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPMMInstParamField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPMMInstParamField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaSPMMInstParamField_InstrumentID_len = 0;
            
    ///SPMM合约保证金算法
    // TThostFtdcInstMarginCalIDType char
    char SyncDeltaSPMMInstParamField_InstMarginCalID = 0;
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SyncDeltaSPMMInstParamField_CommodityID = NULL;
    Py_ssize_t SyncDeltaSPMMInstParamField_CommodityID_len = 0;
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SyncDeltaSPMMInstParamField_CommodityGroupID = NULL;
    Py_ssize_t SyncDeltaSPMMInstParamField_CommodityGroupID_len = 0;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPMMInstParamField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPMMInstParamField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#ci", (char **)kwlist
#endif

        , &SyncDeltaSPMMInstParamField_ExchangeID, &SyncDeltaSPMMInstParamField_ExchangeID_len 
        , &SyncDeltaSPMMInstParamField_InstrumentID, &SyncDeltaSPMMInstParamField_InstrumentID_len 
        , &SyncDeltaSPMMInstParamField_InstMarginCalID 
        , &SyncDeltaSPMMInstParamField_CommodityID, &SyncDeltaSPMMInstParamField_CommodityID_len 
        , &SyncDeltaSPMMInstParamField_CommodityGroupID, &SyncDeltaSPMMInstParamField_CommodityGroupID_len 
        , &SyncDeltaSPMMInstParamField_ActionDirection 
        , &SyncDeltaSPMMInstParamField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPMMInstParamField_ExchangeID != NULL ) {
        if(SyncDeltaSPMMInstParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMInstParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPMMInstParamField_ExchangeID, SyncDeltaSPMMInstParamField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPMMInstParamField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPMMInstParamField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPMMInstParamField_InstrumentID != NULL ) {
        if(SyncDeltaSPMMInstParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMInstParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaSPMMInstParamField_InstrumentID, SyncDeltaSPMMInstParamField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaSPMMInstParamField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaSPMMInstParamField_InstrumentID = NULL;
    }
            
    ///SPMM合约保证金算法
    // TThostFtdcInstMarginCalIDType char
    self->data.InstMarginCalID = SyncDeltaSPMMInstParamField_InstMarginCalID;
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SyncDeltaSPMMInstParamField_CommodityID != NULL ) {
        if(SyncDeltaSPMMInstParamField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMInstParamField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
            return -1;
        }
        // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
        // memcpy(self->data.CommodityID, SyncDeltaSPMMInstParamField_CommodityID, SyncDeltaSPMMInstParamField_CommodityID_len);        
        strncpy(self->data.CommodityID, SyncDeltaSPMMInstParamField_CommodityID, sizeof(self->data.CommodityID) );
        SyncDeltaSPMMInstParamField_CommodityID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SyncDeltaSPMMInstParamField_CommodityGroupID != NULL ) {
        if(SyncDeltaSPMMInstParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMInstParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
            return -1;
        }
        // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
        // memcpy(self->data.CommodityGroupID, SyncDeltaSPMMInstParamField_CommodityGroupID, SyncDeltaSPMMInstParamField_CommodityGroupID_len);        
        strncpy(self->data.CommodityGroupID, SyncDeltaSPMMInstParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
        SyncDeltaSPMMInstParamField_CommodityGroupID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPMMInstParamField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPMMInstParamField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPMMInstParamField_dealloc(PyCThostFtdcSyncDeltaSPMMInstParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_repr(PyCThostFtdcSyncDeltaSPMMInstParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:c,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"InstMarginCalID", self->data.InstMarginCalID 
        ,"CommodityID", self->data.CommodityID//, (Py_ssize_t)sizeof(self->data.CommodityID) 
        ,"CommodityGroupID", self->data.CommodityGroupID//, (Py_ssize_t)sizeof(self->data.CommodityGroupID) 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMInstParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_ExchangeID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_ExchangeID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_InstrumentID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_InstrumentID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject* val, void *closure) {
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
            
///SPMM合约保证金算法
// TThostFtdcInstMarginCalIDType char
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_InstMarginCalID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InstMarginCalID), 1);
}

///SPMM合约保证金算法
// TThostFtdcInstMarginCalIDType char
static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_InstMarginCalID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstMarginCalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstMarginCalID)) {
        PyErr_SetString(PyExc_ValueError, "InstMarginCalID must be equal 1 bytes");
        return -1;
    }
    self->data.InstMarginCalID = *buf;
    return 0;
}
            
///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_CommodityID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityID, (Py_ssize_t)sizeof(self->data.CommodityID));
    return PyBytes_FromString(self->data.CommodityID);
}

///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_CommodityID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
    // memcpy(self->data.CommodityID, buf, len);
    strncpy(self->data.CommodityID, buf, sizeof(self->data.CommodityID));
    return 0;
}
            
///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityGroupID, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
    return PyBytes_FromString(self->data.CommodityGroupID);
}

///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject* val, void *closure) {
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
            
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_ActionDirection(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_ActionDirection(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPMMInstParamField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///SPMM合约保证金算法 
    {(char *)"InstMarginCalID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_InstMarginCalID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_InstMarginCalID, (char *)"InstMarginCalID", NULL},
    ///商品组代码 
    {(char *)"CommodityID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_CommodityID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_CommodityID, (char *)"CommodityID", NULL},
    ///商品群代码 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPMMInstParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPMMInstParamField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPMMInstParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPMMInstParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPMMInstParamField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPMMInstParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPMMInstParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPMMInstParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPMMInstParamField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPMMInstParamField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPMMInstParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPMMInstParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPMMInstParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMInstParamField", (PyObject *)&PyCThostFtdcSyncDeltaSPMMInstParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMInstParamField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPMMInstParamFieldType);
		return -1;
    }

    return 0;
}
