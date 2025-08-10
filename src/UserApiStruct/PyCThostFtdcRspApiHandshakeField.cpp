
#include "PyCThostFtdcRspApiHandshakeField.h"

///front发给api的握手回复

static PyObject *PyCThostFtdcRspApiHandshakeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspApiHandshakeField *self = (PyCThostFtdcRspApiHandshakeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspApiHandshakeField_init(PyCThostFtdcRspApiHandshakeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontHandshakeDataLen", "FrontHandshakeData", "IsApiAuthEnabled",  NULL};


    ///握手回复数据长度
    // TThostFtdcHandshakeDataLenType int
    int RspApiHandshakeField_FrontHandshakeDataLen = 0;
        
    ///握手回复数据
    // TThostFtdcHandshakeDataType char[301]
    const char *RspApiHandshakeField_FrontHandshakeData = NULL;
    Py_ssize_t RspApiHandshakeField_FrontHandshakeData_len = 0;
            
    ///API认证是否开启
    // TThostFtdcBoolType int
    int RspApiHandshakeField_IsApiAuthEnabled = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#i", (char **)kwlist
#endif

        , &RspApiHandshakeField_FrontHandshakeDataLen 
        , &RspApiHandshakeField_FrontHandshakeData, &RspApiHandshakeField_FrontHandshakeData_len 
        , &RspApiHandshakeField_IsApiAuthEnabled 


    )) {
        return -1;
    }


    ///握手回复数据长度
    // TThostFtdcHandshakeDataLenType int
    self->data.FrontHandshakeDataLen = RspApiHandshakeField_FrontHandshakeDataLen;
        
    ///握手回复数据
    // TThostFtdcHandshakeDataType char[301]
    if( RspApiHandshakeField_FrontHandshakeData != NULL ) {
        if(RspApiHandshakeField_FrontHandshakeData_len > (Py_ssize_t)sizeof(self->data.FrontHandshakeData)) {
            PyErr_Format(PyExc_ValueError, "FrontHandshakeData too long: length=%zd (max allowed is %zd)", RspApiHandshakeField_FrontHandshakeData_len, (Py_ssize_t)sizeof(self->data.FrontHandshakeData));
            return -1;
        }
        // memset(self->data.FrontHandshakeData, 0, sizeof(self->data.FrontHandshakeData));
        // memcpy(self->data.FrontHandshakeData, RspApiHandshakeField_FrontHandshakeData, RspApiHandshakeField_FrontHandshakeData_len);        
        strncpy(self->data.FrontHandshakeData, RspApiHandshakeField_FrontHandshakeData, sizeof(self->data.FrontHandshakeData) );
        RspApiHandshakeField_FrontHandshakeData = NULL;
    }
            
    ///API认证是否开启
    // TThostFtdcBoolType int
    self->data.IsApiAuthEnabled = RspApiHandshakeField_IsApiAuthEnabled;
        

    return 0;
}

static void PyCThostFtdcRspApiHandshakeField_dealloc(PyCThostFtdcRspApiHandshakeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspApiHandshakeField_repr(PyCThostFtdcRspApiHandshakeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s,s:i}"
#endif

        ,"FrontHandshakeDataLen", self->data.FrontHandshakeDataLen 
        ,"FrontHandshakeData", self->data.FrontHandshakeData//, (Py_ssize_t)sizeof(self->data.FrontHandshakeData) 
        ,"IsApiAuthEnabled", self->data.IsApiAuthEnabled 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspApiHandshakeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///握手回复数据长度
// TThostFtdcHandshakeDataLenType int
static PyObject *PyCThostFtdcRspApiHandshakeField_get_FrontHandshakeDataLen(PyCThostFtdcRspApiHandshakeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontHandshakeDataLen);
#else
    return PyInt_FromLong(self->data.FrontHandshakeDataLen);
#endif
}

///握手回复数据长度
// TThostFtdcHandshakeDataLenType int
static int PyCThostFtdcRspApiHandshakeField_set_FrontHandshakeDataLen(PyCThostFtdcRspApiHandshakeField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontHandshakeDataLen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontHandshakeDataLen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FrontHandshakeDataLen value out of range for C int");
        return -1;
    }
    self->data.FrontHandshakeDataLen = (int)buf;
    return 0;
}
        
///握手回复数据
// TThostFtdcHandshakeDataType char[301]
static PyObject *PyCThostFtdcRspApiHandshakeField_get_FrontHandshakeData(PyCThostFtdcRspApiHandshakeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FrontHandshakeData, (Py_ssize_t)sizeof(self->data.FrontHandshakeData));
    return PyBytes_FromString(self->data.FrontHandshakeData);
}

///握手回复数据
// TThostFtdcHandshakeDataType char[301]
static int PyCThostFtdcRspApiHandshakeField_set_FrontHandshakeData(PyCThostFtdcRspApiHandshakeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontHandshakeData Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FrontHandshakeData)) {
        PyErr_SetString(PyExc_ValueError, "FrontHandshakeData must be less than 301 bytes");
        return -1;
    }
    // memset(self->data.FrontHandshakeData, 0, sizeof(self->data.FrontHandshakeData));
    // memcpy(self->data.FrontHandshakeData, buf, len);
    strncpy(self->data.FrontHandshakeData, buf, sizeof(self->data.FrontHandshakeData));
    return 0;
}
            
///API认证是否开启
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcRspApiHandshakeField_get_IsApiAuthEnabled(PyCThostFtdcRspApiHandshakeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsApiAuthEnabled);
#else
    return PyInt_FromLong(self->data.IsApiAuthEnabled);
#endif
}

///API认证是否开启
// TThostFtdcBoolType int
static int PyCThostFtdcRspApiHandshakeField_set_IsApiAuthEnabled(PyCThostFtdcRspApiHandshakeField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsApiAuthEnabled Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsApiAuthEnabled Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsApiAuthEnabled value out of range for C int");
        return -1;
    }
    self->data.IsApiAuthEnabled = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcRspApiHandshakeField_getset[] = {
    ///握手回复数据长度 
    {(char *)"FrontHandshakeDataLen", (getter)PyCThostFtdcRspApiHandshakeField_get_FrontHandshakeDataLen, (setter)PyCThostFtdcRspApiHandshakeField_set_FrontHandshakeDataLen, (char *)"FrontHandshakeDataLen", NULL},
    ///握手回复数据 
    {(char *)"FrontHandshakeData", (getter)PyCThostFtdcRspApiHandshakeField_get_FrontHandshakeData, (setter)PyCThostFtdcRspApiHandshakeField_set_FrontHandshakeData, (char *)"FrontHandshakeData", NULL},
    ///API认证是否开启 
    {(char *)"IsApiAuthEnabled", (getter)PyCThostFtdcRspApiHandshakeField_get_IsApiAuthEnabled, (setter)PyCThostFtdcRspApiHandshakeField_set_IsApiAuthEnabled, (char *)"IsApiAuthEnabled", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspApiHandshakeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspApiHandshakeField",	/* tp_name */
	sizeof(PyCThostFtdcRspApiHandshakeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspApiHandshakeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspApiHandshakeField_repr,   /* tp_repr */
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
	"CThostFtdcRspApiHandshakeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspApiHandshakeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspApiHandshakeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspApiHandshakeField_new,       /* tp_new */
};

int PyCThostFtdcRspApiHandshakeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspApiHandshakeField  */
	if (PyType_Ready(&PyCThostFtdcRspApiHandshakeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspApiHandshakeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspApiHandshakeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspApiHandshakeField", (PyObject *)&PyCThostFtdcRspApiHandshakeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspApiHandshakeField to module");
        Py_DECREF(&PyCThostFtdcRspApiHandshakeFieldType);
		return -1;
    }

    return 0;
}
