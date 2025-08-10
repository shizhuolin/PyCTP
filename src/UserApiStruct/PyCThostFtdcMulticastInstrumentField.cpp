
#include "PyCThostFtdcMulticastInstrumentField.h"

///MulticastInstrument

static PyObject *PyCThostFtdcMulticastInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMulticastInstrumentField *self = (PyCThostFtdcMulticastInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMulticastInstrumentField_init(PyCThostFtdcMulticastInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TopicID", "reserve1", "InstrumentNo", "CodePrice", "VolumeMultiple", "PriceTick", "InstrumentID",  NULL};


    ///主题号
    // TThostFtdcInstallIDType int
    int MulticastInstrumentField_TopicID = 0;
        
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *MulticastInstrumentField_reserve1 = NULL;
    Py_ssize_t MulticastInstrumentField_reserve1_len = 0;
            
    ///合约编号
    // TThostFtdcInstallIDType int
    int MulticastInstrumentField_InstrumentNo = 0;
        
    ///基准价
    // TThostFtdcPriceType double
    double MulticastInstrumentField_CodePrice = 0.0;
        
    ///合约数量乘数
    // TThostFtdcVolumeMultipleType int
    int MulticastInstrumentField_VolumeMultiple = 0;
        
    ///最小变动价位
    // TThostFtdcPriceType double
    double MulticastInstrumentField_PriceTick = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *MulticastInstrumentField_InstrumentID = NULL;
    Py_ssize_t MulticastInstrumentField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#ididy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#idids#", (char **)kwlist
#endif

        , &MulticastInstrumentField_TopicID 
        , &MulticastInstrumentField_reserve1, &MulticastInstrumentField_reserve1_len 
        , &MulticastInstrumentField_InstrumentNo 
        , &MulticastInstrumentField_CodePrice 
        , &MulticastInstrumentField_VolumeMultiple 
        , &MulticastInstrumentField_PriceTick 
        , &MulticastInstrumentField_InstrumentID, &MulticastInstrumentField_InstrumentID_len 


    )) {
        return -1;
    }


    ///主题号
    // TThostFtdcInstallIDType int
    self->data.TopicID = MulticastInstrumentField_TopicID;
        
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( MulticastInstrumentField_reserve1 != NULL ) {
        if(MulticastInstrumentField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", MulticastInstrumentField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, MulticastInstrumentField_reserve1, MulticastInstrumentField_reserve1_len);        
        strncpy(self->data.reserve1, MulticastInstrumentField_reserve1, sizeof(self->data.reserve1) );
        MulticastInstrumentField_reserve1 = NULL;
    }
            
    ///合约编号
    // TThostFtdcInstallIDType int
    self->data.InstrumentNo = MulticastInstrumentField_InstrumentNo;
        
    ///基准价
    // TThostFtdcPriceType double
    self->data.CodePrice = MulticastInstrumentField_CodePrice;
        
    ///合约数量乘数
    // TThostFtdcVolumeMultipleType int
    self->data.VolumeMultiple = MulticastInstrumentField_VolumeMultiple;
        
    ///最小变动价位
    // TThostFtdcPriceType double
    self->data.PriceTick = MulticastInstrumentField_PriceTick;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( MulticastInstrumentField_InstrumentID != NULL ) {
        if(MulticastInstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", MulticastInstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, MulticastInstrumentField_InstrumentID, MulticastInstrumentField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, MulticastInstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
        MulticastInstrumentField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcMulticastInstrumentField_dealloc(PyCThostFtdcMulticastInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMulticastInstrumentField_repr(PyCThostFtdcMulticastInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y,s:i,s:d,s:i,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s,s:i,s:d,s:i,s:d,s:s}"
#endif

        ,"TopicID", self->data.TopicID 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InstrumentNo", self->data.InstrumentNo 
        ,"CodePrice", self->data.CodePrice 
        ,"VolumeMultiple", self->data.VolumeMultiple 
        ,"PriceTick", self->data.PriceTick 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMulticastInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///主题号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcMulticastInstrumentField_get_TopicID(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TopicID);
#else
    return PyInt_FromLong(self->data.TopicID);
#endif
}

///主题号
// TThostFtdcInstallIDType int
static int PyCThostFtdcMulticastInstrumentField_set_TopicID(PyCThostFtdcMulticastInstrumentField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TopicID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TopicID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TopicID value out of range for C int");
        return -1;
    }
    self->data.TopicID = (int)buf;
    return 0;
}
        
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcMulticastInstrumentField_get_reserve1(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcMulticastInstrumentField_set_reserve1(PyCThostFtdcMulticastInstrumentField *self, PyObject* val, void *closure) {
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
            
///合约编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcMulticastInstrumentField_get_InstrumentNo(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstrumentNo);
#else
    return PyInt_FromLong(self->data.InstrumentNo);
#endif
}

///合约编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcMulticastInstrumentField_set_InstrumentNo(PyCThostFtdcMulticastInstrumentField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the InstrumentNo value out of range for C int");
        return -1;
    }
    self->data.InstrumentNo = (int)buf;
    return 0;
}
        
///基准价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMulticastInstrumentField_get_CodePrice(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CodePrice);
}

///基准价
// TThostFtdcPriceType double
static int PyCThostFtdcMulticastInstrumentField_set_CodePrice(PyCThostFtdcMulticastInstrumentField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CodePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CodePrice = buf;
    return 0;
}
        
///合约数量乘数
// TThostFtdcVolumeMultipleType int
static PyObject *PyCThostFtdcMulticastInstrumentField_get_VolumeMultiple(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeMultiple);
#else
    return PyInt_FromLong(self->data.VolumeMultiple);
#endif
}

///合约数量乘数
// TThostFtdcVolumeMultipleType int
static int PyCThostFtdcMulticastInstrumentField_set_VolumeMultiple(PyCThostFtdcMulticastInstrumentField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeMultiple Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeMultiple Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the VolumeMultiple value out of range for C int");
        return -1;
    }
    self->data.VolumeMultiple = (int)buf;
    return 0;
}
        
///最小变动价位
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMulticastInstrumentField_get_PriceTick(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PriceTick);
}

///最小变动价位
// TThostFtdcPriceType double
static int PyCThostFtdcMulticastInstrumentField_set_PriceTick(PyCThostFtdcMulticastInstrumentField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PriceTick Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PriceTick = buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcMulticastInstrumentField_get_InstrumentID(PyCThostFtdcMulticastInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcMulticastInstrumentField_set_InstrumentID(PyCThostFtdcMulticastInstrumentField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcMulticastInstrumentField_getset[] = {
    ///主题号 
    {(char *)"TopicID", (getter)PyCThostFtdcMulticastInstrumentField_get_TopicID, (setter)PyCThostFtdcMulticastInstrumentField_set_TopicID, (char *)"TopicID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcMulticastInstrumentField_get_reserve1, (setter)PyCThostFtdcMulticastInstrumentField_set_reserve1, (char *)"reserve1", NULL},
    ///合约编号 
    {(char *)"InstrumentNo", (getter)PyCThostFtdcMulticastInstrumentField_get_InstrumentNo, (setter)PyCThostFtdcMulticastInstrumentField_set_InstrumentNo, (char *)"InstrumentNo", NULL},
    ///基准价 
    {(char *)"CodePrice", (getter)PyCThostFtdcMulticastInstrumentField_get_CodePrice, (setter)PyCThostFtdcMulticastInstrumentField_set_CodePrice, (char *)"CodePrice", NULL},
    ///合约数量乘数 
    {(char *)"VolumeMultiple", (getter)PyCThostFtdcMulticastInstrumentField_get_VolumeMultiple, (setter)PyCThostFtdcMulticastInstrumentField_set_VolumeMultiple, (char *)"VolumeMultiple", NULL},
    ///最小变动价位 
    {(char *)"PriceTick", (getter)PyCThostFtdcMulticastInstrumentField_get_PriceTick, (setter)PyCThostFtdcMulticastInstrumentField_set_PriceTick, (char *)"PriceTick", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcMulticastInstrumentField_get_InstrumentID, (setter)PyCThostFtdcMulticastInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMulticastInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMulticastInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcMulticastInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMulticastInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMulticastInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcMulticastInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMulticastInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMulticastInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMulticastInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcMulticastInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMulticastInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcMulticastInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMulticastInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMulticastInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMulticastInstrumentField", (PyObject *)&PyCThostFtdcMulticastInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMulticastInstrumentField to module");
        Py_DECREF(&PyCThostFtdcMulticastInstrumentFieldType);
		return -1;
    }

    return 0;
}
