
#include "PyCThostFtdcReqApiHandshakeField.h"

///api握手请求

static PyObject *PyCThostFtdcReqApiHandshakeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqApiHandshakeField *self = (PyCThostFtdcReqApiHandshakeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqApiHandshakeField_init(PyCThostFtdcReqApiHandshakeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CryptoKeyVersion",  NULL};


    ///api与front通信密钥版本号
    // TThostFtdcCryptoKeyVersionType char[31]
    const char *ReqApiHandshakeField_CryptoKeyVersion = NULL;
    Py_ssize_t ReqApiHandshakeField_CryptoKeyVersion_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &ReqApiHandshakeField_CryptoKeyVersion, &ReqApiHandshakeField_CryptoKeyVersion_len 


    )) {
        return -1;
    }


    ///api与front通信密钥版本号
    // TThostFtdcCryptoKeyVersionType char[31]
    if( ReqApiHandshakeField_CryptoKeyVersion != NULL ) {
        if(ReqApiHandshakeField_CryptoKeyVersion_len > (Py_ssize_t)sizeof(self->data.CryptoKeyVersion)) {
            PyErr_Format(PyExc_ValueError, "CryptoKeyVersion too long: length=%zd (max allowed is %zd)", ReqApiHandshakeField_CryptoKeyVersion_len, (Py_ssize_t)sizeof(self->data.CryptoKeyVersion));
            return -1;
        }
        // memset(self->data.CryptoKeyVersion, 0, sizeof(self->data.CryptoKeyVersion));
        // memcpy(self->data.CryptoKeyVersion, ReqApiHandshakeField_CryptoKeyVersion, ReqApiHandshakeField_CryptoKeyVersion_len);        
        strncpy(self->data.CryptoKeyVersion, ReqApiHandshakeField_CryptoKeyVersion, sizeof(self->data.CryptoKeyVersion) );
        ReqApiHandshakeField_CryptoKeyVersion = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqApiHandshakeField_dealloc(PyCThostFtdcReqApiHandshakeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqApiHandshakeField_repr(PyCThostFtdcReqApiHandshakeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"CryptoKeyVersion", self->data.CryptoKeyVersion//, (Py_ssize_t)sizeof(self->data.CryptoKeyVersion) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqApiHandshakeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///api与front通信密钥版本号
// TThostFtdcCryptoKeyVersionType char[31]
static PyObject *PyCThostFtdcReqApiHandshakeField_get_CryptoKeyVersion(PyCThostFtdcReqApiHandshakeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CryptoKeyVersion, (Py_ssize_t)sizeof(self->data.CryptoKeyVersion));
    return PyBytes_FromString(self->data.CryptoKeyVersion);
}

///api与front通信密钥版本号
// TThostFtdcCryptoKeyVersionType char[31]
static int PyCThostFtdcReqApiHandshakeField_set_CryptoKeyVersion(PyCThostFtdcReqApiHandshakeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CryptoKeyVersion Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CryptoKeyVersion)) {
        PyErr_SetString(PyExc_ValueError, "CryptoKeyVersion must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.CryptoKeyVersion, 0, sizeof(self->data.CryptoKeyVersion));
    // memcpy(self->data.CryptoKeyVersion, buf, len);
    strncpy(self->data.CryptoKeyVersion, buf, sizeof(self->data.CryptoKeyVersion));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcReqApiHandshakeField_getset[] = {
    ///api与front通信密钥版本号 
    {(char *)"CryptoKeyVersion", (getter)PyCThostFtdcReqApiHandshakeField_get_CryptoKeyVersion, (setter)PyCThostFtdcReqApiHandshakeField_set_CryptoKeyVersion, (char *)"CryptoKeyVersion", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqApiHandshakeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqApiHandshakeField",	/* tp_name */
	sizeof(PyCThostFtdcReqApiHandshakeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqApiHandshakeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqApiHandshakeField_repr,   /* tp_repr */
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
	"CThostFtdcReqApiHandshakeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqApiHandshakeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqApiHandshakeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqApiHandshakeField_new,       /* tp_new */
};

int PyCThostFtdcReqApiHandshakeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqApiHandshakeField  */
	if (PyType_Ready(&PyCThostFtdcReqApiHandshakeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqApiHandshakeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqApiHandshakeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqApiHandshakeField", (PyObject *)&PyCThostFtdcReqApiHandshakeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqApiHandshakeField to module");
        Py_DECREF(&PyCThostFtdcReqApiHandshakeFieldType);
		return -1;
    }

    return 0;
}
