
#include "PyCThostFtdcSuperUserFunctionField.h"

///管理用户功能权限

static PyObject *PyCThostFtdcSuperUserFunctionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSuperUserFunctionField *self = (PyCThostFtdcSuperUserFunctionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSuperUserFunctionField_init(PyCThostFtdcSuperUserFunctionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"UserID", "FunctionCode",  NULL};


    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *SuperUserFunctionField_UserID = NULL;
    Py_ssize_t SuperUserFunctionField_UserID_len = 0;
            
    ///功能代码
    // TThostFtdcFunctionCodeType char
    char SuperUserFunctionField_FunctionCode = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#c", (char **)kwlist
#endif

        , &SuperUserFunctionField_UserID, &SuperUserFunctionField_UserID_len 
        , &SuperUserFunctionField_FunctionCode 


    )) {
        return -1;
    }


    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( SuperUserFunctionField_UserID != NULL ) {
        if(SuperUserFunctionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", SuperUserFunctionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, SuperUserFunctionField_UserID, SuperUserFunctionField_UserID_len);        
        strncpy(self->data.UserID, SuperUserFunctionField_UserID, sizeof(self->data.UserID) );
        SuperUserFunctionField_UserID = NULL;
    }
            
    ///功能代码
    // TThostFtdcFunctionCodeType char
    self->data.FunctionCode = SuperUserFunctionField_FunctionCode;
            

    return 0;
}

static void PyCThostFtdcSuperUserFunctionField_dealloc(PyCThostFtdcSuperUserFunctionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSuperUserFunctionField_repr(PyCThostFtdcSuperUserFunctionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c}"
#endif

        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"FunctionCode", self->data.FunctionCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSuperUserFunctionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcSuperUserFunctionField_get_UserID(PyCThostFtdcSuperUserFunctionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcSuperUserFunctionField_set_UserID(PyCThostFtdcSuperUserFunctionField *self, PyObject* val, void *closure) {
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
            
///功能代码
// TThostFtdcFunctionCodeType char
static PyObject *PyCThostFtdcSuperUserFunctionField_get_FunctionCode(PyCThostFtdcSuperUserFunctionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FunctionCode), 1);
}

///功能代码
// TThostFtdcFunctionCodeType char
static int PyCThostFtdcSuperUserFunctionField_set_FunctionCode(PyCThostFtdcSuperUserFunctionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FunctionCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FunctionCode)) {
        PyErr_SetString(PyExc_ValueError, "FunctionCode must be equal 1 bytes");
        return -1;
    }
    self->data.FunctionCode = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSuperUserFunctionField_getset[] = {
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcSuperUserFunctionField_get_UserID, (setter)PyCThostFtdcSuperUserFunctionField_set_UserID, (char *)"UserID", NULL},
    ///功能代码 
    {(char *)"FunctionCode", (getter)PyCThostFtdcSuperUserFunctionField_get_FunctionCode, (setter)PyCThostFtdcSuperUserFunctionField_set_FunctionCode, (char *)"FunctionCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSuperUserFunctionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSuperUserFunctionField",	/* tp_name */
	sizeof(PyCThostFtdcSuperUserFunctionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSuperUserFunctionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSuperUserFunctionField_repr,   /* tp_repr */
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
	"CThostFtdcSuperUserFunctionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSuperUserFunctionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSuperUserFunctionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSuperUserFunctionField_new,       /* tp_new */
};

int PyCThostFtdcSuperUserFunctionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSuperUserFunctionField  */
	if (PyType_Ready(&PyCThostFtdcSuperUserFunctionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSuperUserFunctionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSuperUserFunctionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSuperUserFunctionField", (PyObject *)&PyCThostFtdcSuperUserFunctionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSuperUserFunctionField to module");
        Py_DECREF(&PyCThostFtdcSuperUserFunctionFieldType);
		return -1;
    }

    return 0;
}
