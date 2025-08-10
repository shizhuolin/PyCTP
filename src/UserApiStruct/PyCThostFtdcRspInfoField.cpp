
#include "PyCThostFtdcRspInfoField.h"

///响应信息

static PyObject *PyCThostFtdcRspInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspInfoField *self = (PyCThostFtdcRspInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspInfoField_init(PyCThostFtdcRspInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ErrorID", "ErrorMsg",  NULL};


    ///错误代码
    // TThostFtdcErrorIDType int
    int RspInfoField_ErrorID = 0;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    const char *RspInfoField_ErrorMsg = NULL;
    Py_ssize_t RspInfoField_ErrorMsg_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#", (char **)kwlist
#endif

        , &RspInfoField_ErrorID 
        , &RspInfoField_ErrorMsg, &RspInfoField_ErrorMsg_len 


    )) {
        return -1;
    }


    ///错误代码
    // TThostFtdcErrorIDType int
    self->data.ErrorID = RspInfoField_ErrorID;
        
    ///错误信息
    // TThostFtdcErrorMsgType char[81]
    if( RspInfoField_ErrorMsg != NULL ) {
        if(RspInfoField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", RspInfoField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
            return -1;
        }
        // memset(self->data.ErrorMsg, 0, sizeof(self->data.ErrorMsg));
        // memcpy(self->data.ErrorMsg, RspInfoField_ErrorMsg, RspInfoField_ErrorMsg_len);        
        strncpy(self->data.ErrorMsg, RspInfoField_ErrorMsg, sizeof(self->data.ErrorMsg) );
        RspInfoField_ErrorMsg = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRspInfoField_dealloc(PyCThostFtdcRspInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspInfoField_repr(PyCThostFtdcRspInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s}"
#endif

        ,"ErrorID", self->data.ErrorID 
        ,"ErrorMsg", self->data.ErrorMsg//, (Py_ssize_t)sizeof(self->data.ErrorMsg) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///错误代码
// TThostFtdcErrorIDType int
static PyObject *PyCThostFtdcRspInfoField_get_ErrorID(PyCThostFtdcRspInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ErrorID);
#else
    return PyInt_FromLong(self->data.ErrorID);
#endif
}

///错误代码
// TThostFtdcErrorIDType int
static int PyCThostFtdcRspInfoField_set_ErrorID(PyCThostFtdcRspInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspInfoField_get_ErrorMsg(PyCThostFtdcRspInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ErrorMsg, (Py_ssize_t)sizeof(self->data.ErrorMsg));
    return PyBytes_FromString(self->data.ErrorMsg);
}

///错误信息
// TThostFtdcErrorMsgType char[81]
static int PyCThostFtdcRspInfoField_set_ErrorMsg(PyCThostFtdcRspInfoField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcRspInfoField_getset[] = {
    ///错误代码 
    {(char *)"ErrorID", (getter)PyCThostFtdcRspInfoField_get_ErrorID, (setter)PyCThostFtdcRspInfoField_set_ErrorID, (char *)"ErrorID", NULL},
    ///错误信息 
    {(char *)"ErrorMsg", (getter)PyCThostFtdcRspInfoField_get_ErrorMsg, (setter)PyCThostFtdcRspInfoField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspInfoField",	/* tp_name */
	sizeof(PyCThostFtdcRspInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspInfoField_repr,   /* tp_repr */
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
	"CThostFtdcRspInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspInfoField_new,       /* tp_new */
};

int PyCThostFtdcRspInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspInfoField  */
	if (PyType_Ready(&PyCThostFtdcRspInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspInfoField", (PyObject *)&PyCThostFtdcRspInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspInfoField to module");
        Py_DECREF(&PyCThostFtdcRspInfoFieldType);
		return -1;
    }

    return 0;
}
