
#include "PyCThostFtdcQrySuperUserField.h"

///查询管理用户

static PyObject *PyCThostFtdcQrySuperUserField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySuperUserField *self = (PyCThostFtdcQrySuperUserField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySuperUserField_init(PyCThostFtdcQrySuperUserField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"UserID",  NULL};


    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *QrySuperUserField_UserID = NULL;
    Py_ssize_t QrySuperUserField_UserID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QrySuperUserField_UserID, &QrySuperUserField_UserID_len 


    )) {
        return -1;
    }


    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( QrySuperUserField_UserID != NULL ) {
        if(QrySuperUserField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", QrySuperUserField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, QrySuperUserField_UserID, QrySuperUserField_UserID_len);        
        strncpy(self->data.UserID, QrySuperUserField_UserID, sizeof(self->data.UserID) );
        QrySuperUserField_UserID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySuperUserField_dealloc(PyCThostFtdcQrySuperUserField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySuperUserField_repr(PyCThostFtdcQrySuperUserField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySuperUserField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcQrySuperUserField_get_UserID(PyCThostFtdcQrySuperUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcQrySuperUserField_set_UserID(PyCThostFtdcQrySuperUserField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQrySuperUserField_getset[] = {
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcQrySuperUserField_get_UserID, (setter)PyCThostFtdcQrySuperUserField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySuperUserFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySuperUserField",	/* tp_name */
	sizeof(PyCThostFtdcQrySuperUserField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySuperUserField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySuperUserField_repr,   /* tp_repr */
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
	"CThostFtdcQrySuperUserField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySuperUserField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySuperUserField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySuperUserField_new,       /* tp_new */
};

int PyCThostFtdcQrySuperUserFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySuperUserField  */
	if (PyType_Ready(&PyCThostFtdcQrySuperUserFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySuperUserField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySuperUserFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySuperUserField", (PyObject *)&PyCThostFtdcQrySuperUserFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySuperUserField to module");
        Py_DECREF(&PyCThostFtdcQrySuperUserFieldType);
		return -1;
    }

    return 0;
}
