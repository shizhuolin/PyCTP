
#include "PyCThostFtdcRspGenSMSCodeField.h"

///申请短信验证码响应

static PyObject *PyCThostFtdcRspGenSMSCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspGenSMSCodeField *self = (PyCThostFtdcRspGenSMSCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspGenSMSCodeField_init(PyCThostFtdcRspGenSMSCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "GenTime",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspGenSMSCodeField_BrokerID = NULL;
    Py_ssize_t RspGenSMSCodeField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *RspGenSMSCodeField_UserID = NULL;
    Py_ssize_t RspGenSMSCodeField_UserID_len = 0;
            
    ///生成时间
    // TThostFtdcTimeType char[9]
    const char *RspGenSMSCodeField_GenTime = NULL;
    Py_ssize_t RspGenSMSCodeField_GenTime_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &RspGenSMSCodeField_BrokerID, &RspGenSMSCodeField_BrokerID_len 
        , &RspGenSMSCodeField_UserID, &RspGenSMSCodeField_UserID_len 
        , &RspGenSMSCodeField_GenTime, &RspGenSMSCodeField_GenTime_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RspGenSMSCodeField_BrokerID != NULL ) {
        if(RspGenSMSCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspGenSMSCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspGenSMSCodeField_BrokerID, RspGenSMSCodeField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspGenSMSCodeField_BrokerID, sizeof(self->data.BrokerID) );
        RspGenSMSCodeField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( RspGenSMSCodeField_UserID != NULL ) {
        if(RspGenSMSCodeField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspGenSMSCodeField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspGenSMSCodeField_UserID, RspGenSMSCodeField_UserID_len);        
        strncpy(self->data.UserID, RspGenSMSCodeField_UserID, sizeof(self->data.UserID) );
        RspGenSMSCodeField_UserID = NULL;
    }
            
    ///生成时间
    // TThostFtdcTimeType char[9]
    if( RspGenSMSCodeField_GenTime != NULL ) {
        if(RspGenSMSCodeField_GenTime_len > (Py_ssize_t)sizeof(self->data.GenTime)) {
            PyErr_Format(PyExc_ValueError, "GenTime too long: length=%zd (max allowed is %zd)", RspGenSMSCodeField_GenTime_len, (Py_ssize_t)sizeof(self->data.GenTime));
            return -1;
        }
        // memset(self->data.GenTime, 0, sizeof(self->data.GenTime));
        // memcpy(self->data.GenTime, RspGenSMSCodeField_GenTime, RspGenSMSCodeField_GenTime_len);        
        strncpy(self->data.GenTime, RspGenSMSCodeField_GenTime, sizeof(self->data.GenTime) );
        RspGenSMSCodeField_GenTime = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRspGenSMSCodeField_dealloc(PyCThostFtdcRspGenSMSCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspGenSMSCodeField_repr(PyCThostFtdcRspGenSMSCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"GenTime", self->data.GenTime//, (Py_ssize_t)sizeof(self->data.GenTime) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenSMSCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcRspGenSMSCodeField_get_BrokerID(PyCThostFtdcRspGenSMSCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspGenSMSCodeField_set_BrokerID(PyCThostFtdcRspGenSMSCodeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspGenSMSCodeField_get_UserID(PyCThostFtdcRspGenSMSCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspGenSMSCodeField_set_UserID(PyCThostFtdcRspGenSMSCodeField *self, PyObject* val, void *closure) {
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
            
///生成时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcRspGenSMSCodeField_get_GenTime(PyCThostFtdcRspGenSMSCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.GenTime, (Py_ssize_t)sizeof(self->data.GenTime));
    return PyBytes_FromString(self->data.GenTime);
}

///生成时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcRspGenSMSCodeField_set_GenTime(PyCThostFtdcRspGenSMSCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "GenTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.GenTime)) {
        PyErr_SetString(PyExc_ValueError, "GenTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.GenTime, 0, sizeof(self->data.GenTime));
    // memcpy(self->data.GenTime, buf, len);
    strncpy(self->data.GenTime, buf, sizeof(self->data.GenTime));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcRspGenSMSCodeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspGenSMSCodeField_get_BrokerID, (setter)PyCThostFtdcRspGenSMSCodeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcRspGenSMSCodeField_get_UserID, (setter)PyCThostFtdcRspGenSMSCodeField_set_UserID, (char *)"UserID", NULL},
    ///生成时间 
    {(char *)"GenTime", (getter)PyCThostFtdcRspGenSMSCodeField_get_GenTime, (setter)PyCThostFtdcRspGenSMSCodeField_set_GenTime, (char *)"GenTime", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspGenSMSCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspGenSMSCodeField",	/* tp_name */
	sizeof(PyCThostFtdcRspGenSMSCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspGenSMSCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspGenSMSCodeField_repr,   /* tp_repr */
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
	"CThostFtdcRspGenSMSCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspGenSMSCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspGenSMSCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspGenSMSCodeField_new,       /* tp_new */
};

int PyCThostFtdcRspGenSMSCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspGenSMSCodeField  */
	if (PyType_Ready(&PyCThostFtdcRspGenSMSCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspGenSMSCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspGenSMSCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspGenSMSCodeField", (PyObject *)&PyCThostFtdcRspGenSMSCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspGenSMSCodeField to module");
        Py_DECREF(&PyCThostFtdcRspGenSMSCodeFieldType);
		return -1;
    }

    return 0;
}
