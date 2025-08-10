
#include "PyCThostFtdcQryTraderOfferField.h"

///查询交易员报盘机

static PyObject *PyCThostFtdcQryTraderOfferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTraderOfferField *self = (PyCThostFtdcQryTraderOfferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryTraderOfferField_init(PyCThostFtdcQryTraderOfferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ParticipantID", "TraderID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryTraderOfferField_ExchangeID = NULL;
    Py_ssize_t QryTraderOfferField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QryTraderOfferField_ParticipantID = NULL;
    Py_ssize_t QryTraderOfferField_ParticipantID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QryTraderOfferField_TraderID = NULL;
    Py_ssize_t QryTraderOfferField_TraderID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryTraderOfferField_ExchangeID, &QryTraderOfferField_ExchangeID_len 
        , &QryTraderOfferField_ParticipantID, &QryTraderOfferField_ParticipantID_len 
        , &QryTraderOfferField_TraderID, &QryTraderOfferField_TraderID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryTraderOfferField_ExchangeID != NULL ) {
        if(QryTraderOfferField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryTraderOfferField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryTraderOfferField_ExchangeID, QryTraderOfferField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryTraderOfferField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryTraderOfferField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QryTraderOfferField_ParticipantID != NULL ) {
        if(QryTraderOfferField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QryTraderOfferField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QryTraderOfferField_ParticipantID, QryTraderOfferField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QryTraderOfferField_ParticipantID, sizeof(self->data.ParticipantID) );
        QryTraderOfferField_ParticipantID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QryTraderOfferField_TraderID != NULL ) {
        if(QryTraderOfferField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QryTraderOfferField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QryTraderOfferField_TraderID, QryTraderOfferField_TraderID_len);        
        strncpy(self->data.TraderID, QryTraderOfferField_TraderID, sizeof(self->data.TraderID) );
        QryTraderOfferField_TraderID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryTraderOfferField_dealloc(PyCThostFtdcQryTraderOfferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTraderOfferField_repr(PyCThostFtdcQryTraderOfferField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderOfferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryTraderOfferField_get_ExchangeID(PyCThostFtdcQryTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryTraderOfferField_set_ExchangeID(PyCThostFtdcQryTraderOfferField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryTraderOfferField_get_ParticipantID(PyCThostFtdcQryTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQryTraderOfferField_set_ParticipantID(PyCThostFtdcQryTraderOfferField *self, PyObject* val, void *closure) {
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
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcQryTraderOfferField_get_TraderID(PyCThostFtdcQryTraderOfferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQryTraderOfferField_set_TraderID(PyCThostFtdcQryTraderOfferField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryTraderOfferField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryTraderOfferField_get_ExchangeID, (setter)PyCThostFtdcQryTraderOfferField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQryTraderOfferField_get_ParticipantID, (setter)PyCThostFtdcQryTraderOfferField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQryTraderOfferField_get_TraderID, (setter)PyCThostFtdcQryTraderOfferField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTraderOfferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTraderOfferField",	/* tp_name */
	sizeof(PyCThostFtdcQryTraderOfferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTraderOfferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTraderOfferField_repr,   /* tp_repr */
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
	"CThostFtdcQryTraderOfferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTraderOfferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTraderOfferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTraderOfferField_new,       /* tp_new */
};

int PyCThostFtdcQryTraderOfferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTraderOfferField  */
	if (PyType_Ready(&PyCThostFtdcQryTraderOfferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTraderOfferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTraderOfferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTraderOfferField", (PyObject *)&PyCThostFtdcQryTraderOfferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTraderOfferField to module");
        Py_DECREF(&PyCThostFtdcQryTraderOfferFieldType);
		return -1;
    }

    return 0;
}
