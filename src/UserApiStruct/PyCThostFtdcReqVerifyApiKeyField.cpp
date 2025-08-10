
#include "PyCThostFtdcReqVerifyApiKeyField.h"

///api给front的验证key的请求

static PyObject *PyCThostFtdcReqVerifyApiKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqVerifyApiKeyField *self = (PyCThostFtdcReqVerifyApiKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqVerifyApiKeyField_init(PyCThostFtdcReqVerifyApiKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ApiHandshakeDataLen", "ApiHandshakeData",  NULL};


    ///握手回复数据长度
    // TThostFtdcHandshakeDataLenType int
    int ReqVerifyApiKeyField_ApiHandshakeDataLen = 0;
        
    ///握手回复数据
    // TThostFtdcHandshakeDataType char[301]
    const char *ReqVerifyApiKeyField_ApiHandshakeData = NULL;
    Py_ssize_t ReqVerifyApiKeyField_ApiHandshakeData_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#", (char **)kwlist
#endif

        , &ReqVerifyApiKeyField_ApiHandshakeDataLen 
        , &ReqVerifyApiKeyField_ApiHandshakeData, &ReqVerifyApiKeyField_ApiHandshakeData_len 


    )) {
        return -1;
    }


    ///握手回复数据长度
    // TThostFtdcHandshakeDataLenType int
    self->data.ApiHandshakeDataLen = ReqVerifyApiKeyField_ApiHandshakeDataLen;
        
    ///握手回复数据
    // TThostFtdcHandshakeDataType char[301]
    if( ReqVerifyApiKeyField_ApiHandshakeData != NULL ) {
        if(ReqVerifyApiKeyField_ApiHandshakeData_len > (Py_ssize_t)sizeof(self->data.ApiHandshakeData)) {
            PyErr_Format(PyExc_ValueError, "ApiHandshakeData too long: length=%zd (max allowed is %zd)", ReqVerifyApiKeyField_ApiHandshakeData_len, (Py_ssize_t)sizeof(self->data.ApiHandshakeData));
            return -1;
        }
        // memset(self->data.ApiHandshakeData, 0, sizeof(self->data.ApiHandshakeData));
        // memcpy(self->data.ApiHandshakeData, ReqVerifyApiKeyField_ApiHandshakeData, ReqVerifyApiKeyField_ApiHandshakeData_len);        
        strncpy(self->data.ApiHandshakeData, ReqVerifyApiKeyField_ApiHandshakeData, sizeof(self->data.ApiHandshakeData) );
        ReqVerifyApiKeyField_ApiHandshakeData = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqVerifyApiKeyField_dealloc(PyCThostFtdcReqVerifyApiKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqVerifyApiKeyField_repr(PyCThostFtdcReqVerifyApiKeyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s}"
#endif

        ,"ApiHandshakeDataLen", self->data.ApiHandshakeDataLen 
        ,"ApiHandshakeData", self->data.ApiHandshakeData//, (Py_ssize_t)sizeof(self->data.ApiHandshakeData) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqVerifyApiKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///握手回复数据长度
// TThostFtdcHandshakeDataLenType int
static PyObject *PyCThostFtdcReqVerifyApiKeyField_get_ApiHandshakeDataLen(PyCThostFtdcReqVerifyApiKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ApiHandshakeDataLen);
#else
    return PyInt_FromLong(self->data.ApiHandshakeDataLen);
#endif
}

///握手回复数据长度
// TThostFtdcHandshakeDataLenType int
static int PyCThostFtdcReqVerifyApiKeyField_set_ApiHandshakeDataLen(PyCThostFtdcReqVerifyApiKeyField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ApiHandshakeDataLen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ApiHandshakeDataLen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ApiHandshakeDataLen value out of range for C int");
        return -1;
    }
    self->data.ApiHandshakeDataLen = (int)buf;
    return 0;
}
        
///握手回复数据
// TThostFtdcHandshakeDataType char[301]
static PyObject *PyCThostFtdcReqVerifyApiKeyField_get_ApiHandshakeData(PyCThostFtdcReqVerifyApiKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ApiHandshakeData, (Py_ssize_t)sizeof(self->data.ApiHandshakeData));
    return PyBytes_FromString(self->data.ApiHandshakeData);
}

///握手回复数据
// TThostFtdcHandshakeDataType char[301]
static int PyCThostFtdcReqVerifyApiKeyField_set_ApiHandshakeData(PyCThostFtdcReqVerifyApiKeyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ApiHandshakeData Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ApiHandshakeData)) {
        PyErr_SetString(PyExc_ValueError, "ApiHandshakeData must be less than 301 bytes");
        return -1;
    }
    // memset(self->data.ApiHandshakeData, 0, sizeof(self->data.ApiHandshakeData));
    // memcpy(self->data.ApiHandshakeData, buf, len);
    strncpy(self->data.ApiHandshakeData, buf, sizeof(self->data.ApiHandshakeData));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcReqVerifyApiKeyField_getset[] = {
    ///握手回复数据长度 
    {(char *)"ApiHandshakeDataLen", (getter)PyCThostFtdcReqVerifyApiKeyField_get_ApiHandshakeDataLen, (setter)PyCThostFtdcReqVerifyApiKeyField_set_ApiHandshakeDataLen, (char *)"ApiHandshakeDataLen", NULL},
    ///握手回复数据 
    {(char *)"ApiHandshakeData", (getter)PyCThostFtdcReqVerifyApiKeyField_get_ApiHandshakeData, (setter)PyCThostFtdcReqVerifyApiKeyField_set_ApiHandshakeData, (char *)"ApiHandshakeData", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqVerifyApiKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqVerifyApiKeyField",	/* tp_name */
	sizeof(PyCThostFtdcReqVerifyApiKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqVerifyApiKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqVerifyApiKeyField_repr,   /* tp_repr */
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
	"CThostFtdcReqVerifyApiKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqVerifyApiKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqVerifyApiKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqVerifyApiKeyField_new,       /* tp_new */
};

int PyCThostFtdcReqVerifyApiKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqVerifyApiKeyField  */
	if (PyType_Ready(&PyCThostFtdcReqVerifyApiKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqVerifyApiKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqVerifyApiKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqVerifyApiKeyField", (PyObject *)&PyCThostFtdcReqVerifyApiKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqVerifyApiKeyField to module");
        Py_DECREF(&PyCThostFtdcReqVerifyApiKeyFieldType);
		return -1;
    }

    return 0;
}
