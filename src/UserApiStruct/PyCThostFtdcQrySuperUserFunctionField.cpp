
#include "PyCThostFtdcQrySuperUserFunctionField.h"

///查询管理用户功能权限

static PyObject *PyCThostFtdcQrySuperUserFunctionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySuperUserFunctionField *self = (PyCThostFtdcQrySuperUserFunctionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySuperUserFunctionField_init(PyCThostFtdcQrySuperUserFunctionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"UserID",  NULL};


    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *QrySuperUserFunctionField_UserID = NULL;
    Py_ssize_t QrySuperUserFunctionField_UserID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QrySuperUserFunctionField_UserID, &QrySuperUserFunctionField_UserID_len 


    )) {
        return -1;
    }


    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( QrySuperUserFunctionField_UserID != NULL ) {
        if(QrySuperUserFunctionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", QrySuperUserFunctionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, QrySuperUserFunctionField_UserID, QrySuperUserFunctionField_UserID_len);        
        strncpy(self->data.UserID, QrySuperUserFunctionField_UserID, sizeof(self->data.UserID) );
        QrySuperUserFunctionField_UserID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySuperUserFunctionField_dealloc(PyCThostFtdcQrySuperUserFunctionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySuperUserFunctionField_repr(PyCThostFtdcQrySuperUserFunctionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySuperUserFunctionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcQrySuperUserFunctionField_get_UserID(PyCThostFtdcQrySuperUserFunctionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcQrySuperUserFunctionField_set_UserID(PyCThostFtdcQrySuperUserFunctionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQrySuperUserFunctionField_getset[] = {
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcQrySuperUserFunctionField_get_UserID, (setter)PyCThostFtdcQrySuperUserFunctionField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySuperUserFunctionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySuperUserFunctionField",	/* tp_name */
	sizeof(PyCThostFtdcQrySuperUserFunctionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySuperUserFunctionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySuperUserFunctionField_repr,   /* tp_repr */
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
	"CThostFtdcQrySuperUserFunctionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySuperUserFunctionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySuperUserFunctionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySuperUserFunctionField_new,       /* tp_new */
};

int PyCThostFtdcQrySuperUserFunctionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySuperUserFunctionField  */
	if (PyType_Ready(&PyCThostFtdcQrySuperUserFunctionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySuperUserFunctionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySuperUserFunctionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySuperUserFunctionField", (PyObject *)&PyCThostFtdcQrySuperUserFunctionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySuperUserFunctionField to module");
        Py_DECREF(&PyCThostFtdcQrySuperUserFunctionFieldType);
		return -1;
    }

    return 0;
}
