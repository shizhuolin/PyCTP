
#include "PyCThostFtdcLogoutAllField.h"

///登录信息

static PyObject *PyCThostFtdcLogoutAllField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcLogoutAllField *self = (PyCThostFtdcLogoutAllField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcLogoutAllField_init(PyCThostFtdcLogoutAllField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontID", "SessionID", "SystemName",  NULL};


    ///前置编号
    // TThostFtdcFrontIDType int
    int LogoutAllField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int LogoutAllField_SessionID = 0;
        
    ///系统名称
    // TThostFtdcSystemNameType char[41]
    const char *LogoutAllField_SystemName = NULL;
    Py_ssize_t LogoutAllField_SystemName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#", (char **)kwlist
#endif

        , &LogoutAllField_FrontID 
        , &LogoutAllField_SessionID 
        , &LogoutAllField_SystemName, &LogoutAllField_SystemName_len 


    )) {
        return -1;
    }


    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = LogoutAllField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = LogoutAllField_SessionID;
        
    ///系统名称
    // TThostFtdcSystemNameType char[41]
    if( LogoutAllField_SystemName != NULL ) {
        if(LogoutAllField_SystemName_len > (Py_ssize_t)sizeof(self->data.SystemName)) {
            PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is %zd)", LogoutAllField_SystemName_len, (Py_ssize_t)sizeof(self->data.SystemName));
            return -1;
        }
        // memset(self->data.SystemName, 0, sizeof(self->data.SystemName));
        // memcpy(self->data.SystemName, LogoutAllField_SystemName, LogoutAllField_SystemName_len);        
        strncpy(self->data.SystemName, LogoutAllField_SystemName, sizeof(self->data.SystemName) );
        LogoutAllField_SystemName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcLogoutAllField_dealloc(PyCThostFtdcLogoutAllField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcLogoutAllField_repr(PyCThostFtdcLogoutAllField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s}"
#endif

        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"SystemName", self->data.SystemName//, (Py_ssize_t)sizeof(self->data.SystemName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLogoutAllField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcLogoutAllField_get_FrontID(PyCThostFtdcLogoutAllField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcLogoutAllField_set_FrontID(PyCThostFtdcLogoutAllField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FrontID value out of range for C int");
        return -1;
    }
    self->data.FrontID = (int)buf;
    return 0;
}
        
///会话编号
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcLogoutAllField_get_SessionID(PyCThostFtdcLogoutAllField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcLogoutAllField_set_SessionID(PyCThostFtdcLogoutAllField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SessionID value out of range for C int");
        return -1;
    }
    self->data.SessionID = (int)buf;
    return 0;
}
        
///系统名称
// TThostFtdcSystemNameType char[41]
static PyObject *PyCThostFtdcLogoutAllField_get_SystemName(PyCThostFtdcLogoutAllField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SystemName, (Py_ssize_t)sizeof(self->data.SystemName));
    return PyBytes_FromString(self->data.SystemName);
}

///系统名称
// TThostFtdcSystemNameType char[41]
static int PyCThostFtdcLogoutAllField_set_SystemName(PyCThostFtdcLogoutAllField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SystemName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SystemName)) {
        PyErr_SetString(PyExc_ValueError, "SystemName must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.SystemName, 0, sizeof(self->data.SystemName));
    // memcpy(self->data.SystemName, buf, len);
    strncpy(self->data.SystemName, buf, sizeof(self->data.SystemName));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcLogoutAllField_getset[] = {
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcLogoutAllField_get_FrontID, (setter)PyCThostFtdcLogoutAllField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcLogoutAllField_get_SessionID, (setter)PyCThostFtdcLogoutAllField_set_SessionID, (char *)"SessionID", NULL},
    ///系统名称 
    {(char *)"SystemName", (getter)PyCThostFtdcLogoutAllField_get_SystemName, (setter)PyCThostFtdcLogoutAllField_set_SystemName, (char *)"SystemName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcLogoutAllFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcLogoutAllField",	/* tp_name */
	sizeof(PyCThostFtdcLogoutAllField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcLogoutAllField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcLogoutAllField_repr,   /* tp_repr */
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
	"CThostFtdcLogoutAllField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcLogoutAllField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcLogoutAllField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcLogoutAllField_new,       /* tp_new */
};

int PyCThostFtdcLogoutAllFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcLogoutAllField  */
	if (PyType_Ready(&PyCThostFtdcLogoutAllFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcLogoutAllField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcLogoutAllFieldType);
    if( PyModule_AddObject(module, "CThostFtdcLogoutAllField", (PyObject *)&PyCThostFtdcLogoutAllFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLogoutAllField to module");
        Py_DECREF(&PyCThostFtdcLogoutAllFieldType);
		return -1;
    }

    return 0;
}
