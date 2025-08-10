
#include "PyCThostFtdcPartBrokerField.h"

///会员编码和经纪公司编码对照表

static PyObject *PyCThostFtdcPartBrokerField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcPartBrokerField *self = (PyCThostFtdcPartBrokerField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcPartBrokerField_init(PyCThostFtdcPartBrokerField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ExchangeID", "ParticipantID", "IsActive",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *PartBrokerField_BrokerID = NULL;
    Py_ssize_t PartBrokerField_BrokerID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *PartBrokerField_ExchangeID = NULL;
    Py_ssize_t PartBrokerField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *PartBrokerField_ParticipantID = NULL;
    Py_ssize_t PartBrokerField_ParticipantID_len = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int PartBrokerField_IsActive = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

        , &PartBrokerField_BrokerID, &PartBrokerField_BrokerID_len 
        , &PartBrokerField_ExchangeID, &PartBrokerField_ExchangeID_len 
        , &PartBrokerField_ParticipantID, &PartBrokerField_ParticipantID_len 
        , &PartBrokerField_IsActive 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( PartBrokerField_BrokerID != NULL ) {
        if(PartBrokerField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", PartBrokerField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, PartBrokerField_BrokerID, PartBrokerField_BrokerID_len);        
        strncpy(self->data.BrokerID, PartBrokerField_BrokerID, sizeof(self->data.BrokerID) );
        PartBrokerField_BrokerID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( PartBrokerField_ExchangeID != NULL ) {
        if(PartBrokerField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", PartBrokerField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, PartBrokerField_ExchangeID, PartBrokerField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, PartBrokerField_ExchangeID, sizeof(self->data.ExchangeID) );
        PartBrokerField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( PartBrokerField_ParticipantID != NULL ) {
        if(PartBrokerField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", PartBrokerField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, PartBrokerField_ParticipantID, PartBrokerField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, PartBrokerField_ParticipantID, sizeof(self->data.ParticipantID) );
        PartBrokerField_ParticipantID = NULL;
    }
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = PartBrokerField_IsActive;
        

    return 0;
}

static void PyCThostFtdcPartBrokerField_dealloc(PyCThostFtdcPartBrokerField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcPartBrokerField_repr(PyCThostFtdcPartBrokerField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"IsActive", self->data.IsActive 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPartBrokerField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcPartBrokerField_get_BrokerID(PyCThostFtdcPartBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcPartBrokerField_set_BrokerID(PyCThostFtdcPartBrokerField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcPartBrokerField_get_ExchangeID(PyCThostFtdcPartBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcPartBrokerField_set_ExchangeID(PyCThostFtdcPartBrokerField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcPartBrokerField_get_ParticipantID(PyCThostFtdcPartBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcPartBrokerField_set_ParticipantID(PyCThostFtdcPartBrokerField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
    // memcpy(self->data.ParticipantID, buf, len);
    strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
    return 0;
}
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcPartBrokerField_get_IsActive(PyCThostFtdcPartBrokerField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcPartBrokerField_set_IsActive(PyCThostFtdcPartBrokerField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsActive value out of range for C int");
        return -1;
    }
    self->data.IsActive = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcPartBrokerField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcPartBrokerField_get_BrokerID, (setter)PyCThostFtdcPartBrokerField_set_BrokerID, (char *)"BrokerID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcPartBrokerField_get_ExchangeID, (setter)PyCThostFtdcPartBrokerField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcPartBrokerField_get_ParticipantID, (setter)PyCThostFtdcPartBrokerField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcPartBrokerField_get_IsActive, (setter)PyCThostFtdcPartBrokerField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcPartBrokerFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcPartBrokerField",	/* tp_name */
	sizeof(PyCThostFtdcPartBrokerField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcPartBrokerField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcPartBrokerField_repr,   /* tp_repr */
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
	"CThostFtdcPartBrokerField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcPartBrokerField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcPartBrokerField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcPartBrokerField_new,       /* tp_new */
};

int PyCThostFtdcPartBrokerFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcPartBrokerField  */
	if (PyType_Ready(&PyCThostFtdcPartBrokerFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcPartBrokerField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcPartBrokerFieldType);
    if( PyModule_AddObject(module, "CThostFtdcPartBrokerField", (PyObject *)&PyCThostFtdcPartBrokerFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcPartBrokerField to module");
        Py_DECREF(&PyCThostFtdcPartBrokerFieldType);
		return -1;
    }

    return 0;
}
