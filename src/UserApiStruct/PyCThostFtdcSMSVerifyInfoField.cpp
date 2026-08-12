
#include "PyCThostFtdcSMSVerifyInfoField.h"

///短信验证信息通知

static PyObject *PyCThostFtdcSMSVerifyInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSMSVerifyInfoField *self = (PyCThostFtdcSMSVerifyInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSMSVerifyInfoField_init(PyCThostFtdcSMSVerifyInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CreateTime", "Mobile", "SMSContent",  NULL};


    ///验证码创建时间
    // TThostFtdcTimeType char[9]
    const char *SMSVerifyInfoField_CreateTime = NULL;
    Py_ssize_t SMSVerifyInfoField_CreateTime_len = 0;
            
    ///手机号
    // TThostFtdcSMSPhoneType char[17]
    const char *SMSVerifyInfoField_Mobile = NULL;
    Py_ssize_t SMSVerifyInfoField_Mobile_len = 0;
            
    ///短信验证信息内容
    // TThostFtdcSMSContentType char[129]
    const char *SMSVerifyInfoField_SMSContent = NULL;
    Py_ssize_t SMSVerifyInfoField_SMSContent_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &SMSVerifyInfoField_CreateTime, &SMSVerifyInfoField_CreateTime_len 
        , &SMSVerifyInfoField_Mobile, &SMSVerifyInfoField_Mobile_len 
        , &SMSVerifyInfoField_SMSContent, &SMSVerifyInfoField_SMSContent_len 


    )) {
        return -1;
    }


    ///验证码创建时间
    // TThostFtdcTimeType char[9]
    if( SMSVerifyInfoField_CreateTime != NULL ) {
        if(SMSVerifyInfoField_CreateTime_len > (Py_ssize_t)sizeof(self->data.CreateTime)) {
            PyErr_Format(PyExc_ValueError, "CreateTime too long: length=%zd (max allowed is %zd)", SMSVerifyInfoField_CreateTime_len, (Py_ssize_t)sizeof(self->data.CreateTime));
            return -1;
        }
        // memset(self->data.CreateTime, 0, sizeof(self->data.CreateTime));
        // memcpy(self->data.CreateTime, SMSVerifyInfoField_CreateTime, SMSVerifyInfoField_CreateTime_len);        
        strncpy(self->data.CreateTime, SMSVerifyInfoField_CreateTime, sizeof(self->data.CreateTime) );
        SMSVerifyInfoField_CreateTime = NULL;
    }
            
    ///手机号
    // TThostFtdcSMSPhoneType char[17]
    if( SMSVerifyInfoField_Mobile != NULL ) {
        if(SMSVerifyInfoField_Mobile_len > (Py_ssize_t)sizeof(self->data.Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is %zd)", SMSVerifyInfoField_Mobile_len, (Py_ssize_t)sizeof(self->data.Mobile));
            return -1;
        }
        // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
        // memcpy(self->data.Mobile, SMSVerifyInfoField_Mobile, SMSVerifyInfoField_Mobile_len);        
        strncpy(self->data.Mobile, SMSVerifyInfoField_Mobile, sizeof(self->data.Mobile) );
        SMSVerifyInfoField_Mobile = NULL;
    }
            
    ///短信验证信息内容
    // TThostFtdcSMSContentType char[129]
    if( SMSVerifyInfoField_SMSContent != NULL ) {
        if(SMSVerifyInfoField_SMSContent_len > (Py_ssize_t)sizeof(self->data.SMSContent)) {
            PyErr_Format(PyExc_ValueError, "SMSContent too long: length=%zd (max allowed is %zd)", SMSVerifyInfoField_SMSContent_len, (Py_ssize_t)sizeof(self->data.SMSContent));
            return -1;
        }
        // memset(self->data.SMSContent, 0, sizeof(self->data.SMSContent));
        // memcpy(self->data.SMSContent, SMSVerifyInfoField_SMSContent, SMSVerifyInfoField_SMSContent_len);        
        strncpy(self->data.SMSContent, SMSVerifyInfoField_SMSContent, sizeof(self->data.SMSContent) );
        SMSVerifyInfoField_SMSContent = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSMSVerifyInfoField_dealloc(PyCThostFtdcSMSVerifyInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSMSVerifyInfoField_repr(PyCThostFtdcSMSVerifyInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"CreateTime", self->data.CreateTime//, (Py_ssize_t)sizeof(self->data.CreateTime) 
        ,"Mobile", self->data.Mobile//, (Py_ssize_t)sizeof(self->data.Mobile) 
        ,"SMSContent", self->data.SMSContent//, (Py_ssize_t)sizeof(self->data.SMSContent) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///验证码创建时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcSMSVerifyInfoField_get_CreateTime(PyCThostFtdcSMSVerifyInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CreateTime, (Py_ssize_t)sizeof(self->data.CreateTime));
    return PyBytes_FromString(self->data.CreateTime);
}

///验证码创建时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcSMSVerifyInfoField_set_CreateTime(PyCThostFtdcSMSVerifyInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CreateTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CreateTime)) {
        PyErr_SetString(PyExc_ValueError, "CreateTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CreateTime, 0, sizeof(self->data.CreateTime));
    // memcpy(self->data.CreateTime, buf, len);
    strncpy(self->data.CreateTime, buf, sizeof(self->data.CreateTime));
    return 0;
}
            
///手机号
// TThostFtdcSMSPhoneType char[17]
static PyObject *PyCThostFtdcSMSVerifyInfoField_get_Mobile(PyCThostFtdcSMSVerifyInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Mobile, (Py_ssize_t)sizeof(self->data.Mobile));
    return PyBytes_FromString(self->data.Mobile);
}

///手机号
// TThostFtdcSMSPhoneType char[17]
static int PyCThostFtdcSMSVerifyInfoField_set_Mobile(PyCThostFtdcSMSVerifyInfoField *self, PyObject* val, void *closure) {
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
            
///短信验证信息内容
// TThostFtdcSMSContentType char[129]
static PyObject *PyCThostFtdcSMSVerifyInfoField_get_SMSContent(PyCThostFtdcSMSVerifyInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SMSContent, (Py_ssize_t)sizeof(self->data.SMSContent));
    return PyBytes_FromString(self->data.SMSContent);
}

///短信验证信息内容
// TThostFtdcSMSContentType char[129]
static int PyCThostFtdcSMSVerifyInfoField_set_SMSContent(PyCThostFtdcSMSVerifyInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SMSContent Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SMSContent)) {
        PyErr_SetString(PyExc_ValueError, "SMSContent must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.SMSContent, 0, sizeof(self->data.SMSContent));
    // memcpy(self->data.SMSContent, buf, len);
    strncpy(self->data.SMSContent, buf, sizeof(self->data.SMSContent));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSMSVerifyInfoField_getset[] = {
    ///验证码创建时间 
    {(char *)"CreateTime", (getter)PyCThostFtdcSMSVerifyInfoField_get_CreateTime, (setter)PyCThostFtdcSMSVerifyInfoField_set_CreateTime, (char *)"CreateTime", NULL},
    ///手机号 
    {(char *)"Mobile", (getter)PyCThostFtdcSMSVerifyInfoField_get_Mobile, (setter)PyCThostFtdcSMSVerifyInfoField_set_Mobile, (char *)"Mobile", NULL},
    ///短信验证信息内容 
    {(char *)"SMSContent", (getter)PyCThostFtdcSMSVerifyInfoField_get_SMSContent, (setter)PyCThostFtdcSMSVerifyInfoField_set_SMSContent, (char *)"SMSContent", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSMSVerifyInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSMSVerifyInfoField",	/* tp_name */
	sizeof(PyCThostFtdcSMSVerifyInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSMSVerifyInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSMSVerifyInfoField_repr,   /* tp_repr */
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
	"CThostFtdcSMSVerifyInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSMSVerifyInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSMSVerifyInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSMSVerifyInfoField_new,       /* tp_new */
};

int PyCThostFtdcSMSVerifyInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSMSVerifyInfoField  */
	if (PyType_Ready(&PyCThostFtdcSMSVerifyInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSMSVerifyInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSMSVerifyInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSMSVerifyInfoField", (PyObject *)&PyCThostFtdcSMSVerifyInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSMSVerifyInfoField to module");
        Py_DECREF(&PyCThostFtdcSMSVerifyInfoFieldType);
		return -1;
    }

    return 0;
}
