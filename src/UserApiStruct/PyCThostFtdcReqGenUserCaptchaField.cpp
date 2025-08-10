
#include "PyCThostFtdcReqGenUserCaptchaField.h"

///用户发出获取安全安全登陆方法请求

static PyObject *PyCThostFtdcReqGenUserCaptchaField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqGenUserCaptchaField *self = (PyCThostFtdcReqGenUserCaptchaField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqGenUserCaptchaField_init(PyCThostFtdcReqGenUserCaptchaField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *ReqGenUserCaptchaField_TradingDay = NULL;
    Py_ssize_t ReqGenUserCaptchaField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqGenUserCaptchaField_BrokerID = NULL;
    Py_ssize_t ReqGenUserCaptchaField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ReqGenUserCaptchaField_UserID = NULL;
    Py_ssize_t ReqGenUserCaptchaField_UserID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &ReqGenUserCaptchaField_TradingDay, &ReqGenUserCaptchaField_TradingDay_len 
        , &ReqGenUserCaptchaField_BrokerID, &ReqGenUserCaptchaField_BrokerID_len 
        , &ReqGenUserCaptchaField_UserID, &ReqGenUserCaptchaField_UserID_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( ReqGenUserCaptchaField_TradingDay != NULL ) {
        if(ReqGenUserCaptchaField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqGenUserCaptchaField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqGenUserCaptchaField_TradingDay, ReqGenUserCaptchaField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqGenUserCaptchaField_TradingDay, sizeof(self->data.TradingDay) );
        ReqGenUserCaptchaField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqGenUserCaptchaField_BrokerID != NULL ) {
        if(ReqGenUserCaptchaField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqGenUserCaptchaField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqGenUserCaptchaField_BrokerID, ReqGenUserCaptchaField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqGenUserCaptchaField_BrokerID, sizeof(self->data.BrokerID) );
        ReqGenUserCaptchaField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ReqGenUserCaptchaField_UserID != NULL ) {
        if(ReqGenUserCaptchaField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqGenUserCaptchaField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqGenUserCaptchaField_UserID, ReqGenUserCaptchaField_UserID_len);        
        strncpy(self->data.UserID, ReqGenUserCaptchaField_UserID, sizeof(self->data.UserID) );
        ReqGenUserCaptchaField_UserID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqGenUserCaptchaField_dealloc(PyCThostFtdcReqGenUserCaptchaField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqGenUserCaptchaField_repr(PyCThostFtdcReqGenUserCaptchaField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenUserCaptchaField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcReqGenUserCaptchaField_get_TradingDay(PyCThostFtdcReqGenUserCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcReqGenUserCaptchaField_set_TradingDay(PyCThostFtdcReqGenUserCaptchaField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcReqGenUserCaptchaField_get_BrokerID(PyCThostFtdcReqGenUserCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqGenUserCaptchaField_set_BrokerID(PyCThostFtdcReqGenUserCaptchaField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcReqGenUserCaptchaField_get_UserID(PyCThostFtdcReqGenUserCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqGenUserCaptchaField_set_UserID(PyCThostFtdcReqGenUserCaptchaField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcReqGenUserCaptchaField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqGenUserCaptchaField_get_TradingDay, (setter)PyCThostFtdcReqGenUserCaptchaField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqGenUserCaptchaField_get_BrokerID, (setter)PyCThostFtdcReqGenUserCaptchaField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcReqGenUserCaptchaField_get_UserID, (setter)PyCThostFtdcReqGenUserCaptchaField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqGenUserCaptchaFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqGenUserCaptchaField",	/* tp_name */
	sizeof(PyCThostFtdcReqGenUserCaptchaField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqGenUserCaptchaField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqGenUserCaptchaField_repr,   /* tp_repr */
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
	"CThostFtdcReqGenUserCaptchaField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqGenUserCaptchaField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqGenUserCaptchaField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqGenUserCaptchaField_new,       /* tp_new */
};

int PyCThostFtdcReqGenUserCaptchaFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqGenUserCaptchaField  */
	if (PyType_Ready(&PyCThostFtdcReqGenUserCaptchaFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqGenUserCaptchaField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqGenUserCaptchaFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqGenUserCaptchaField", (PyObject *)&PyCThostFtdcReqGenUserCaptchaFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqGenUserCaptchaField to module");
        Py_DECREF(&PyCThostFtdcReqGenUserCaptchaFieldType);
		return -1;
    }

    return 0;
}
