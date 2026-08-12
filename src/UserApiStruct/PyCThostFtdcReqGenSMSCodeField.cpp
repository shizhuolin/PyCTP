
#include "PyCThostFtdcReqGenSMSCodeField.h"

///申请短信验证码请求

static PyObject *PyCThostFtdcReqGenSMSCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqGenSMSCodeField *self = (PyCThostFtdcReqGenSMSCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqGenSMSCodeField_init(PyCThostFtdcReqGenSMSCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "Mobile",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqGenSMSCodeField_BrokerID = NULL;
    Py_ssize_t ReqGenSMSCodeField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ReqGenSMSCodeField_UserID = NULL;
    Py_ssize_t ReqGenSMSCodeField_UserID_len = 0;
            
    ///手机号
    // TThostFtdcSMSPhoneType char[17]
    const char *ReqGenSMSCodeField_Mobile = NULL;
    Py_ssize_t ReqGenSMSCodeField_Mobile_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &ReqGenSMSCodeField_BrokerID, &ReqGenSMSCodeField_BrokerID_len 
        , &ReqGenSMSCodeField_UserID, &ReqGenSMSCodeField_UserID_len 
        , &ReqGenSMSCodeField_Mobile, &ReqGenSMSCodeField_Mobile_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqGenSMSCodeField_BrokerID != NULL ) {
        if(ReqGenSMSCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqGenSMSCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqGenSMSCodeField_BrokerID, ReqGenSMSCodeField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqGenSMSCodeField_BrokerID, sizeof(self->data.BrokerID) );
        ReqGenSMSCodeField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ReqGenSMSCodeField_UserID != NULL ) {
        if(ReqGenSMSCodeField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqGenSMSCodeField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqGenSMSCodeField_UserID, ReqGenSMSCodeField_UserID_len);        
        strncpy(self->data.UserID, ReqGenSMSCodeField_UserID, sizeof(self->data.UserID) );
        ReqGenSMSCodeField_UserID = NULL;
    }
            
    ///手机号
    // TThostFtdcSMSPhoneType char[17]
    if( ReqGenSMSCodeField_Mobile != NULL ) {
        if(ReqGenSMSCodeField_Mobile_len > (Py_ssize_t)sizeof(self->data.Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is %zd)", ReqGenSMSCodeField_Mobile_len, (Py_ssize_t)sizeof(self->data.Mobile));
            return -1;
        }
        // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
        // memcpy(self->data.Mobile, ReqGenSMSCodeField_Mobile, ReqGenSMSCodeField_Mobile_len);        
        strncpy(self->data.Mobile, ReqGenSMSCodeField_Mobile, sizeof(self->data.Mobile) );
        ReqGenSMSCodeField_Mobile = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqGenSMSCodeField_dealloc(PyCThostFtdcReqGenSMSCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqGenSMSCodeField_repr(PyCThostFtdcReqGenSMSCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Mobile", self->data.Mobile//, (Py_ssize_t)sizeof(self->data.Mobile) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenSMSCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcReqGenSMSCodeField_get_BrokerID(PyCThostFtdcReqGenSMSCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqGenSMSCodeField_set_BrokerID(PyCThostFtdcReqGenSMSCodeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqGenSMSCodeField_get_UserID(PyCThostFtdcReqGenSMSCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqGenSMSCodeField_set_UserID(PyCThostFtdcReqGenSMSCodeField *self, PyObject* val, void *closure) {
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
            
///手机号
// TThostFtdcSMSPhoneType char[17]
static PyObject *PyCThostFtdcReqGenSMSCodeField_get_Mobile(PyCThostFtdcReqGenSMSCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Mobile, (Py_ssize_t)sizeof(self->data.Mobile));
    return PyBytes_FromString(self->data.Mobile);
}

///手机号
// TThostFtdcSMSPhoneType char[17]
static int PyCThostFtdcReqGenSMSCodeField_set_Mobile(PyCThostFtdcReqGenSMSCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
    // memcpy(self->data.Mobile, buf, len);
    strncpy(self->data.Mobile, buf, sizeof(self->data.Mobile));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcReqGenSMSCodeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqGenSMSCodeField_get_BrokerID, (setter)PyCThostFtdcReqGenSMSCodeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcReqGenSMSCodeField_get_UserID, (setter)PyCThostFtdcReqGenSMSCodeField_set_UserID, (char *)"UserID", NULL},
    ///手机号 
    {(char *)"Mobile", (getter)PyCThostFtdcReqGenSMSCodeField_get_Mobile, (setter)PyCThostFtdcReqGenSMSCodeField_set_Mobile, (char *)"Mobile", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqGenSMSCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqGenSMSCodeField",	/* tp_name */
	sizeof(PyCThostFtdcReqGenSMSCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqGenSMSCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqGenSMSCodeField_repr,   /* tp_repr */
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
	"CThostFtdcReqGenSMSCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqGenSMSCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqGenSMSCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqGenSMSCodeField_new,       /* tp_new */
};

int PyCThostFtdcReqGenSMSCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqGenSMSCodeField  */
	if (PyType_Ready(&PyCThostFtdcReqGenSMSCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqGenSMSCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqGenSMSCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqGenSMSCodeField", (PyObject *)&PyCThostFtdcReqGenSMSCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqGenSMSCodeField to module");
        Py_DECREF(&PyCThostFtdcReqGenSMSCodeFieldType);
		return -1;
    }

    return 0;
}
