
#include "PyCThostFtdcQryBulletinField.h"

///查询交易所公告

static PyObject *PyCThostFtdcQryBulletinField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryBulletinField *self = (PyCThostFtdcQryBulletinField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryBulletinField_init(PyCThostFtdcQryBulletinField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BulletinID", "SequenceNo", "NewsType", "NewsUrgency",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryBulletinField_ExchangeID = NULL;
    Py_ssize_t QryBulletinField_ExchangeID_len = 0;
            
    ///公告编号
    // TThostFtdcBulletinIDType int
    int QryBulletinField_BulletinID = 0;
        
    ///序列号
    // TThostFtdcSequenceNoType int
    int QryBulletinField_SequenceNo = 0;
        
    ///公告类型
    // TThostFtdcNewsTypeType char[3]
    const char *QryBulletinField_NewsType = NULL;
    Py_ssize_t QryBulletinField_NewsType_len = 0;
            
    ///紧急程度
    // TThostFtdcNewsUrgencyType char
    char QryBulletinField_NewsUrgency = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iiy#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#iis#c", (char **)kwlist
#endif

        , &QryBulletinField_ExchangeID, &QryBulletinField_ExchangeID_len 
        , &QryBulletinField_BulletinID 
        , &QryBulletinField_SequenceNo 
        , &QryBulletinField_NewsType, &QryBulletinField_NewsType_len 
        , &QryBulletinField_NewsUrgency 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryBulletinField_ExchangeID != NULL ) {
        if(QryBulletinField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryBulletinField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryBulletinField_ExchangeID, QryBulletinField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryBulletinField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryBulletinField_ExchangeID = NULL;
    }
            
    ///公告编号
    // TThostFtdcBulletinIDType int
    self->data.BulletinID = QryBulletinField_BulletinID;
        
    ///序列号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = QryBulletinField_SequenceNo;
        
    ///公告类型
    // TThostFtdcNewsTypeType char[3]
    if( QryBulletinField_NewsType != NULL ) {
        if(QryBulletinField_NewsType_len > (Py_ssize_t)sizeof(self->data.NewsType)) {
            PyErr_Format(PyExc_ValueError, "NewsType too long: length=%zd (max allowed is %zd)", QryBulletinField_NewsType_len, (Py_ssize_t)sizeof(self->data.NewsType));
            return -1;
        }
        // memset(self->data.NewsType, 0, sizeof(self->data.NewsType));
        // memcpy(self->data.NewsType, QryBulletinField_NewsType, QryBulletinField_NewsType_len);        
        strncpy(self->data.NewsType, QryBulletinField_NewsType, sizeof(self->data.NewsType) );
        QryBulletinField_NewsType = NULL;
    }
            
    ///紧急程度
    // TThostFtdcNewsUrgencyType char
    self->data.NewsUrgency = QryBulletinField_NewsUrgency;
            

    return 0;
}

static void PyCThostFtdcQryBulletinField_dealloc(PyCThostFtdcQryBulletinField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryBulletinField_repr(PyCThostFtdcQryBulletinField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:i,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:i,s:s,s:c}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BulletinID", self->data.BulletinID 
        ,"SequenceNo", self->data.SequenceNo 
        ,"NewsType", self->data.NewsType//, (Py_ssize_t)sizeof(self->data.NewsType) 
        ,"NewsUrgency", self->data.NewsUrgency 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBulletinField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryBulletinField_get_ExchangeID(PyCThostFtdcQryBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryBulletinField_set_ExchangeID(PyCThostFtdcQryBulletinField *self, PyObject* val, void *closure) {
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
            
///公告编号
// TThostFtdcBulletinIDType int
static PyObject *PyCThostFtdcQryBulletinField_get_BulletinID(PyCThostFtdcQryBulletinField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BulletinID);
#else
    return PyInt_FromLong(self->data.BulletinID);
#endif
}

///公告编号
// TThostFtdcBulletinIDType int
static int PyCThostFtdcQryBulletinField_set_BulletinID(PyCThostFtdcQryBulletinField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BulletinID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BulletinID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the BulletinID value out of range for C int");
        return -1;
    }
    self->data.BulletinID = (int)buf;
    return 0;
}
        
///序列号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcQryBulletinField_get_SequenceNo(PyCThostFtdcQryBulletinField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序列号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcQryBulletinField_set_SequenceNo(PyCThostFtdcQryBulletinField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SequenceNo value out of range for C int");
        return -1;
    }
    self->data.SequenceNo = (int)buf;
    return 0;
}
        
///公告类型
// TThostFtdcNewsTypeType char[3]
static PyObject *PyCThostFtdcQryBulletinField_get_NewsType(PyCThostFtdcQryBulletinField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NewsType, (Py_ssize_t)sizeof(self->data.NewsType));
    return PyBytes_FromString(self->data.NewsType);
}

///公告类型
// TThostFtdcNewsTypeType char[3]
static int PyCThostFtdcQryBulletinField_set_NewsType(PyCThostFtdcQryBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NewsType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NewsType)) {
        PyErr_SetString(PyExc_ValueError, "NewsType must be less than 3 bytes");
        return -1;
    }
    // memset(self->data.NewsType, 0, sizeof(self->data.NewsType));
    // memcpy(self->data.NewsType, buf, len);
    strncpy(self->data.NewsType, buf, sizeof(self->data.NewsType));
    return 0;
}
            
///紧急程度
// TThostFtdcNewsUrgencyType char
static PyObject *PyCThostFtdcQryBulletinField_get_NewsUrgency(PyCThostFtdcQryBulletinField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.NewsUrgency), 1);
}

///紧急程度
// TThostFtdcNewsUrgencyType char
static int PyCThostFtdcQryBulletinField_set_NewsUrgency(PyCThostFtdcQryBulletinField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NewsUrgency Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NewsUrgency)) {
        PyErr_SetString(PyExc_ValueError, "NewsUrgency must be equal 1 bytes");
        return -1;
    }
    self->data.NewsUrgency = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryBulletinField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryBulletinField_get_ExchangeID, (setter)PyCThostFtdcQryBulletinField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///公告编号 
    {(char *)"BulletinID", (getter)PyCThostFtdcQryBulletinField_get_BulletinID, (setter)PyCThostFtdcQryBulletinField_set_BulletinID, (char *)"BulletinID", NULL},
    ///序列号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcQryBulletinField_get_SequenceNo, (setter)PyCThostFtdcQryBulletinField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///公告类型 
    {(char *)"NewsType", (getter)PyCThostFtdcQryBulletinField_get_NewsType, (setter)PyCThostFtdcQryBulletinField_set_NewsType, (char *)"NewsType", NULL},
    ///紧急程度 
    {(char *)"NewsUrgency", (getter)PyCThostFtdcQryBulletinField_get_NewsUrgency, (setter)PyCThostFtdcQryBulletinField_set_NewsUrgency, (char *)"NewsUrgency", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryBulletinFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryBulletinField",	/* tp_name */
	sizeof(PyCThostFtdcQryBulletinField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryBulletinField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryBulletinField_repr,   /* tp_repr */
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
	"CThostFtdcQryBulletinField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryBulletinField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryBulletinField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryBulletinField_new,       /* tp_new */
};

int PyCThostFtdcQryBulletinFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryBulletinField  */
	if (PyType_Ready(&PyCThostFtdcQryBulletinFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryBulletinField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryBulletinFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryBulletinField", (PyObject *)&PyCThostFtdcQryBulletinFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBulletinField to module");
        Py_DECREF(&PyCThostFtdcQryBulletinFieldType);
		return -1;
    }

    return 0;
}
