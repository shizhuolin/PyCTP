
#include "PyCThostFtdcExchangeOrderInsertErrorField.h"

///交易所报单插入失败

static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOrderInsertErrorField *self = (PyCThostFtdcExchangeOrderInsertErrorField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOrderInsertErrorField_init(PyCThostFtdcExchangeOrderInsertErrorField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ParticipantID", "TraderID", "InstallID", "OrderLocalID", "ErrorID", "ErrorMsg",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeOrderInsertErrorField_ExchangeID = NULL;
    Py_ssize_t ExchangeOrderInsertErrorField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeOrderInsertErrorField_ParticipantID = NULL;
    Py_ssize_t ExchangeOrderInsertErrorField_ParticipantID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeOrderInsertErrorField_TraderID = NULL;
    Py_ssize_t ExchangeOrderInsertErrorField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeOrderInsertErrorField_InstallID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeOrderInsertErrorField_OrderLocalID = NULL;
    Py_ssize_t ExchangeOrderInsertErrorField_OrderLocalID_len = 0;
            
    ///错误代码
    // TThostFtdcErrorIDType int
    int ExchangeOrderInsertErrorField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *ExchangeOrderInsertErrorField_ErrorMsg = NULL;
    Py_ssize_t ExchangeOrderInsertErrorField_ErrorMsg_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#is#", (char **)kwlist
#endif

        , &ExchangeOrderInsertErrorField_ExchangeID, &ExchangeOrderInsertErrorField_ExchangeID_len 
        , &ExchangeOrderInsertErrorField_ParticipantID, &ExchangeOrderInsertErrorField_ParticipantID_len 
        , &ExchangeOrderInsertErrorField_TraderID, &ExchangeOrderInsertErrorField_TraderID_len 
        , &ExchangeOrderInsertErrorField_InstallID 
        , &ExchangeOrderInsertErrorField_OrderLocalID, &ExchangeOrderInsertErrorField_OrderLocalID_len 
        , &ExchangeOrderInsertErrorField_ErrorID 
        , &ExchangeOrderInsertErrorField_ErrorMsg, &ExchangeOrderInsertErrorField_ErrorMsg_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeOrderInsertErrorField_ExchangeID != NULL ) {
        if(ExchangeOrderInsertErrorField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeOrderInsertErrorField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeOrderInsertErrorField_ExchangeID, ExchangeOrderInsertErrorField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeOrderInsertErrorField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeOrderInsertErrorField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeOrderInsertErrorField_ParticipantID != NULL ) {
        if(ExchangeOrderInsertErrorField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeOrderInsertErrorField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeOrderInsertErrorField_ParticipantID, ExchangeOrderInsertErrorField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeOrderInsertErrorField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeOrderInsertErrorField_ParticipantID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeOrderInsertErrorField_TraderID != NULL ) {
        if(ExchangeOrderInsertErrorField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeOrderInsertErrorField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeOrderInsertErrorField_TraderID, ExchangeOrderInsertErrorField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeOrderInsertErrorField_TraderID, sizeof(self->data.TraderID) );
        ExchangeOrderInsertErrorField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeOrderInsertErrorField_InstallID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeOrderInsertErrorField_OrderLocalID != NULL ) {
        if(ExchangeOrderInsertErrorField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", ExchangeOrderInsertErrorField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, ExchangeOrderInsertErrorField_OrderLocalID, ExchangeOrderInsertErrorField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, ExchangeOrderInsertErrorField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        ExchangeOrderInsertErrorField_OrderLocalID = NULL;
    }
            
    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = ExchangeOrderInsertErrorField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( ExchangeOrderInsertErrorField_ErrorMsg != NULL ) {
        if(ExchangeOrderInsertErrorField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", ExchangeOrderInsertErrorField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, ExchangeOrderInsertErrorField_ErrorMsg, ExchangeOrderInsertErrorField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, ExchangeOrderInsertErrorField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        ExchangeOrderInsertErrorField_ErrorMsg = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeOrderInsertErrorField_dealloc(PyCThostFtdcExchangeOrderInsertErrorField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_repr(PyCThostFtdcExchangeOrderInsertErrorField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:i,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderInsertErrorField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_get_ExchangeID(PyCThostFtdcExchangeOrderInsertErrorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeOrderInsertErrorField_set_ExchangeID(PyCThostFtdcExchangeOrderInsertErrorField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_get_ParticipantID(PyCThostFtdcExchangeOrderInsertErrorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeOrderInsertErrorField_set_ParticipantID(PyCThostFtdcExchangeOrderInsertErrorField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_get_TraderID(PyCThostFtdcExchangeOrderInsertErrorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeOrderInsertErrorField_set_TraderID(PyCThostFtdcExchangeOrderInsertErrorField *self, PyObject* val, void *closure) {
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
            
///安装编号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_get_InstallID(PyCThostFtdcExchangeOrderInsertErrorField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeOrderInsertErrorField_set_InstallID(PyCThostFtdcExchangeOrderInsertErrorField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the InstallID value out of range for C int");
        return -1;
    }
    self->data.InstallID = (int)buf;
    return 0;
}
        
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_get_OrderLocalID(PyCThostFtdcExchangeOrderInsertErrorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeOrderInsertErrorField_set_OrderLocalID(PyCThostFtdcExchangeOrderInsertErrorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
    // memcpy(self->data.OrderLocalID, buf, len);
    strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
    return 0;
}
            
///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_get_ErrorID(PyCThostFtdcExchangeOrderInsertErrorField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcExchangeOrderInsertErrorField_set_ErrorID(PyCThostFtdcExchangeOrderInsertErrorField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ErrorID value out of range for C int");
        return -1;
    }
    self->data.ErrorID = (int)buf;
    return 0;
}
        
///错误信息
// TThostFtdcErrorMsgType char[81]
static PyObject *PyCThostFtdcExchangeOrderInsertErrorField_get_ErrorMsg(PyCThostFtdcExchangeOrderInsertErrorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcExchangeOrderInsertErrorField_set_ErrorMsg(PyCThostFtdcExchangeOrderInsertErrorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
    // memcpy(self->data.ErrorMsg, buf, len);
    strncpy(self->data.ErrorMsg, buf, sizeof(self->data.ErrorMsg));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcExchangeOrderInsertErrorField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOrderInsertErrorField_get_ExchangeID, (setter)PyCThostFtdcExchangeOrderInsertErrorField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOrderInsertErrorField_get_ParticipantID, (setter)PyCThostFtdcExchangeOrderInsertErrorField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeOrderInsertErrorField_get_TraderID, (setter)PyCThostFtdcExchangeOrderInsertErrorField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeOrderInsertErrorField_get_InstallID, (setter)PyCThostFtdcExchangeOrderInsertErrorField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcExchangeOrderInsertErrorField_get_OrderLocalID, (setter)PyCThostFtdcExchangeOrderInsertErrorField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcExchangeOrderInsertErrorField_get_ErrorID, (setter)PyCThostFtdcExchangeOrderInsertErrorField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcExchangeOrderInsertErrorField_get_ErrorMsg, (setter)PyCThostFtdcExchangeOrderInsertErrorField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOrderInsertErrorFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOrderInsertErrorField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOrderInsertErrorField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOrderInsertErrorField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOrderInsertErrorField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOrderInsertErrorField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOrderInsertErrorField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOrderInsertErrorField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOrderInsertErrorField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOrderInsertErrorFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOrderInsertErrorField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOrderInsertErrorFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOrderInsertErrorField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOrderInsertErrorFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderInsertErrorField", (PyObject *)&PyCThostFtdcExchangeOrderInsertErrorFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderInsertErrorField to module");
        Py_DECREF(&PyCThostFtdcExchangeOrderInsertErrorFieldType);
		return -1;
    }

    return 0;
}
