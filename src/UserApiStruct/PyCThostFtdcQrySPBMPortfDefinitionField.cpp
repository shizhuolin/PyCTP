
#include "PyCThostFtdcQrySPBMPortfDefinitionField.h"

///组合保证金套餐查询

static PyObject *PyCThostFtdcQrySPBMPortfDefinitionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPBMPortfDefinitionField *self = (PyCThostFtdcQrySPBMPortfDefinitionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPBMPortfDefinitionField_init(PyCThostFtdcQrySPBMPortfDefinitionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "PortfolioDefID", "ProdFamilyCode",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QrySPBMPortfDefinitionField_ExchangeID = NULL;
    Py_ssize_t QrySPBMPortfDefinitionField_ExchangeID_len = 0;
            
    ///组合保证金套餐代码
    // TThostFtdcPortfolioDefIDType int
    int QrySPBMPortfDefinitionField_PortfolioDefID = 0;
        
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QrySPBMPortfDefinitionField_ProdFamilyCode = NULL;
    Py_ssize_t QrySPBMPortfDefinitionField_ProdFamilyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#", (char **)kwlist
#endif

        , &QrySPBMPortfDefinitionField_ExchangeID, &QrySPBMPortfDefinitionField_ExchangeID_len 
        , &QrySPBMPortfDefinitionField_PortfolioDefID 
        , &QrySPBMPortfDefinitionField_ProdFamilyCode, &QrySPBMPortfDefinitionField_ProdFamilyCode_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QrySPBMPortfDefinitionField_ExchangeID != NULL ) {
        if(QrySPBMPortfDefinitionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QrySPBMPortfDefinitionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QrySPBMPortfDefinitionField_ExchangeID, QrySPBMPortfDefinitionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QrySPBMPortfDefinitionField_ExchangeID, sizeof(self->data.ExchangeID) );
        QrySPBMPortfDefinitionField_ExchangeID = NULL;
    }
            
    ///组合保证金套餐代码
    // TThostFtdcPortfolioDefIDType int
    self->data.PortfolioDefID = QrySPBMPortfDefinitionField_PortfolioDefID;
        
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( QrySPBMPortfDefinitionField_ProdFamilyCode != NULL ) {
        if(QrySPBMPortfDefinitionField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", QrySPBMPortfDefinitionField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, QrySPBMPortfDefinitionField_ProdFamilyCode, QrySPBMPortfDefinitionField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, QrySPBMPortfDefinitionField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        QrySPBMPortfDefinitionField_ProdFamilyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySPBMPortfDefinitionField_dealloc(PyCThostFtdcQrySPBMPortfDefinitionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPBMPortfDefinitionField_repr(PyCThostFtdcQrySPBMPortfDefinitionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"PortfolioDefID", self->data.PortfolioDefID 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMPortfDefinitionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQrySPBMPortfDefinitionField_get_ExchangeID(PyCThostFtdcQrySPBMPortfDefinitionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQrySPBMPortfDefinitionField_set_ExchangeID(PyCThostFtdcQrySPBMPortfDefinitionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQrySPBMPortfDefinitionField_get_PortfolioDefID(PyCThostFtdcQrySPBMPortfDefinitionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.PortfolioDefID);
#else
    return PyInt_FromLong(self->data.PortfolioDefID);
#endif
}

///组合保证金套餐代码
// TThostFtdcPortfolioDefIDType int
static int PyCThostFtdcQrySPBMPortfDefinitionField_set_PortfolioDefID(PyCThostFtdcQrySPBMPortfDefinitionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQrySPBMPortfDefinitionField_get_ProdFamilyCode(PyCThostFtdcQrySPBMPortfDefinitionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQrySPBMPortfDefinitionField_set_ProdFamilyCode(PyCThostFtdcQrySPBMPortfDefinitionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQrySPBMPortfDefinitionField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQrySPBMPortfDefinitionField_get_ExchangeID, (setter)PyCThostFtdcQrySPBMPortfDefinitionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///组合保证金套餐代码 
    {(char *)"PortfolioDefID", (getter)PyCThostFtdcQrySPBMPortfDefinitionField_get_PortfolioDefID, (setter)PyCThostFtdcQrySPBMPortfDefinitionField_set_PortfolioDefID, (char *)"PortfolioDefID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQrySPBMPortfDefinitionField_get_ProdFamilyCode, (setter)PyCThostFtdcQrySPBMPortfDefinitionField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPBMPortfDefinitionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPBMPortfDefinitionField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPBMPortfDefinitionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPBMPortfDefinitionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPBMPortfDefinitionField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPBMPortfDefinitionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPBMPortfDefinitionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPBMPortfDefinitionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPBMPortfDefinitionField_new,       /* tp_new */
};

int PyCThostFtdcQrySPBMPortfDefinitionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPBMPortfDefinitionField  */
	if (PyType_Ready(&PyCThostFtdcQrySPBMPortfDefinitionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPBMPortfDefinitionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPBMPortfDefinitionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPBMPortfDefinitionField", (PyObject *)&PyCThostFtdcQrySPBMPortfDefinitionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMPortfDefinitionField to module");
        Py_DECREF(&PyCThostFtdcQrySPBMPortfDefinitionFieldType);
		return -1;
    }

    return 0;
}
