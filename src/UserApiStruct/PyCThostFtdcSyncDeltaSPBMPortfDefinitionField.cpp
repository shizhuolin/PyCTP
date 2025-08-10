
#include "PyCThostFtdcSyncDeltaSPBMPortfDefinitionField.h"

///风险结算追平SPBM组合保证金套餐

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self = (PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_init(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "PortfolioDefID", "ProdFamilyCode", "IsSPBM", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPBMPortfDefinitionField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPBMPortfDefinitionField_ExchangeID_len = 0;
            
    ///组合保证金套餐代码
    // TThostFtdcPortfolioDefIDType int
    int SyncDeltaSPBMPortfDefinitionField_PortfolioDefID = 0;
        
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode = NULL;
    Py_ssize_t SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len = 0;
            
    ///是否启用SPBM
    // TThostFtdcBoolType int
    int SyncDeltaSPBMPortfDefinitionField_IsSPBM = 0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPBMPortfDefinitionField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#ici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#ici", (char **)kwlist
#endif

        , &SyncDeltaSPBMPortfDefinitionField_ExchangeID, &SyncDeltaSPBMPortfDefinitionField_ExchangeID_len 
        , &SyncDeltaSPBMPortfDefinitionField_PortfolioDefID 
        , &SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode, &SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len 
        , &SyncDeltaSPBMPortfDefinitionField_IsSPBM 
        , &SyncDeltaSPBMPortfDefinitionField_ActionDirection 
        , &SyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPBMPortfDefinitionField_ExchangeID != NULL ) {
        if(SyncDeltaSPBMPortfDefinitionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMPortfDefinitionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPBMPortfDefinitionField_ExchangeID, SyncDeltaSPBMPortfDefinitionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPBMPortfDefinitionField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPBMPortfDefinitionField_ExchangeID = NULL;
    }
            
    ///组合保证金套餐代码
    // TThostFtdcPortfolioDefIDType int
    self->data.PortfolioDefID = SyncDeltaSPBMPortfDefinitionField_PortfolioDefID;
        
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode != NULL ) {
        if(SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode, SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        SyncDeltaSPBMPortfDefinitionField_ProdFamilyCode = NULL;
    }
            
    ///是否启用SPBM
    // TThostFtdcBoolType int
    self->data.IsSPBM = SyncDeltaSPBMPortfDefinitionField_IsSPBM;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPBMPortfDefinitionField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPBMPortfDefinitionField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_dealloc(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_repr(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s,s:i,s:c,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"PortfolioDefID", self->data.PortfolioDefID 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"IsSPBM", self->data.IsSPBM 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMPortfDefinitionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, PyObject* val, void *closure) {
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
            
///组合保证金套餐代码
// TThostFtdcPortfolioDefIDType int
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_PortfolioDefID(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PortfolioDefID);
#else
    return PyInt_FromLong(self->data.PortfolioDefID);
#endif
}

///组合保证金套餐代码
// TThostFtdcPortfolioDefIDType int
static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_PortfolioDefID(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PortfolioDefID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PortfolioDefID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the PortfolioDefID value out of range for C int");
        return -1;
    }
    self->data.PortfolioDefID = (int)buf;
    return 0;
}
        
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, PyObject* val, void *closure) {
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
            
///是否启用SPBM
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_IsSPBM(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsSPBM);
#else
    return PyInt_FromLong(self->data.IsSPBM);
#endif
}

///是否启用SPBM
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_IsSPBM(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSPBM Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSPBM Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsSPBM value out of range for C int");
        return -1;
    }
    self->data.IsSPBM = (int)buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///组合保证金套餐代码 
    {(char *)"PortfolioDefID", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_PortfolioDefID, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_PortfolioDefID, (char *)"PortfolioDefID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///是否启用SPBM 
    {(char *)"IsSPBM", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_IsSPBM, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_IsSPBM, (char *)"IsSPBM", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMPortfDefinitionField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMPortfDefinitionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMPortfDefinitionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMPortfDefinitionField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMPortfDefinitionField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMPortfDefinitionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMPortfDefinitionField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMPortfDefinitionField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType);
		return -1;
    }

    return 0;
}
