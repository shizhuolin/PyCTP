
#include "PyCThostFtdcTraderAssignField.h"

///席位与交易中心对应关系

static PyObject *PyCThostFtdcTraderAssignField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTraderAssignField *self = (PyCThostFtdcTraderAssignField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTraderAssignField_init(PyCThostFtdcTraderAssignField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ExchangeID", "TraderID", "ParticipantID", "DRIdentityID",  NULL};


    ///应用单元代码
    // TThostFtdcBrokerIDType char[11]
    const char *TraderAssignField_BrokerID = NULL;
    Py_ssize_t TraderAssignField_BrokerID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *TraderAssignField_ExchangeID = NULL;
    Py_ssize_t TraderAssignField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *TraderAssignField_TraderID = NULL;
    Py_ssize_t TraderAssignField_TraderID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *TraderAssignField_ParticipantID = NULL;
    Py_ssize_t TraderAssignField_ParticipantID_len = 0;
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int TraderAssignField_DRIdentityID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#i", (char **)kwlist
#endif

        , &TraderAssignField_BrokerID, &TraderAssignField_BrokerID_len 
        , &TraderAssignField_ExchangeID, &TraderAssignField_ExchangeID_len 
        , &TraderAssignField_TraderID, &TraderAssignField_TraderID_len 
        , &TraderAssignField_ParticipantID, &TraderAssignField_ParticipantID_len 
        , &TraderAssignField_DRIdentityID 


    )) {
        return -1;
    }


    ///应用单元代码
    // TThostFtdcBrokerIDType char[11]
    if( TraderAssignField_BrokerID != NULL ) {
        if(TraderAssignField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TraderAssignField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TraderAssignField_BrokerID, TraderAssignField_BrokerID_len);        
        strncpy(self->data.BrokerID, TraderAssignField_BrokerID, sizeof(self->data.BrokerID) );
        TraderAssignField_BrokerID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( TraderAssignField_ExchangeID != NULL ) {
        if(TraderAssignField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", TraderAssignField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, TraderAssignField_ExchangeID, TraderAssignField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, TraderAssignField_ExchangeID, sizeof(self->data.ExchangeID) );
        TraderAssignField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( TraderAssignField_TraderID != NULL ) {
        if(TraderAssignField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", TraderAssignField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, TraderAssignField_TraderID, TraderAssignField_TraderID_len);        
        strncpy(self->data.TraderID, TraderAssignField_TraderID, sizeof(self->data.TraderID) );
        TraderAssignField_TraderID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( TraderAssignField_ParticipantID != NULL ) {
        if(TraderAssignField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", TraderAssignField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, TraderAssignField_ParticipantID, TraderAssignField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, TraderAssignField_ParticipantID, sizeof(self->data.ParticipantID) );
        TraderAssignField_ParticipantID = NULL;
    }
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = TraderAssignField_DRIdentityID;
        

    return 0;
}

static void PyCThostFtdcTraderAssignField_dealloc(PyCThostFtdcTraderAssignField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTraderAssignField_repr(PyCThostFtdcTraderAssignField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"DRIdentityID", self->data.DRIdentityID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTraderAssignField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///应用单元代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTraderAssignField_get_BrokerID(PyCThostFtdcTraderAssignField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///应用单元代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTraderAssignField_set_BrokerID(PyCThostFtdcTraderAssignField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTraderAssignField_get_ExchangeID(PyCThostFtdcTraderAssignField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcTraderAssignField_set_ExchangeID(PyCThostFtdcTraderAssignField *self, PyObject* val, void *closure) {
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
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcTraderAssignField_get_TraderID(PyCThostFtdcTraderAssignField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcTraderAssignField_set_TraderID(PyCThostFtdcTraderAssignField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
    // memcpy(self->data.TraderID, buf, len);
    strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
    return 0;
}
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcTraderAssignField_get_ParticipantID(PyCThostFtdcTraderAssignField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcTraderAssignField_set_ParticipantID(PyCThostFtdcTraderAssignField *self, PyObject* val, void *closure) {
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
            
///交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcTraderAssignField_get_DRIdentityID(PyCThostFtdcTraderAssignField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcTraderAssignField_set_DRIdentityID(PyCThostFtdcTraderAssignField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the DRIdentityID value out of range for C int");
        return -1;
    }
    self->data.DRIdentityID = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcTraderAssignField_getset[] = {
    ///应用单元代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTraderAssignField_get_BrokerID, (setter)PyCThostFtdcTraderAssignField_set_BrokerID, (char *)"BrokerID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcTraderAssignField_get_ExchangeID, (setter)PyCThostFtdcTraderAssignField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcTraderAssignField_get_TraderID, (setter)PyCThostFtdcTraderAssignField_set_TraderID, (char *)"TraderID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcTraderAssignField_get_ParticipantID, (setter)PyCThostFtdcTraderAssignField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcTraderAssignField_get_DRIdentityID, (setter)PyCThostFtdcTraderAssignField_set_DRIdentityID, (char *)"DRIdentityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTraderAssignFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTraderAssignField",	/* tp_name */
	sizeof(PyCThostFtdcTraderAssignField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTraderAssignField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTraderAssignField_repr,   /* tp_repr */
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
	"CThostFtdcTraderAssignField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTraderAssignField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTraderAssignField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTraderAssignField_new,       /* tp_new */
};

int PyCThostFtdcTraderAssignFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTraderAssignField  */
	if (PyType_Ready(&PyCThostFtdcTraderAssignFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTraderAssignField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTraderAssignFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTraderAssignField", (PyObject *)&PyCThostFtdcTraderAssignFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTraderAssignField to module");
        Py_DECREF(&PyCThostFtdcTraderAssignFieldType);
		return -1;
    }

    return 0;
}
