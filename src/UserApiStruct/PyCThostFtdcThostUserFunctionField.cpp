
#include "PyCThostFtdcThostUserFunctionField.h"

///Thost终端用户功能权限

static PyObject *PyCThostFtdcThostUserFunctionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcThostUserFunctionField *self = (PyCThostFtdcThostUserFunctionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcThostUserFunctionField_init(PyCThostFtdcThostUserFunctionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "ThostFunctionCode",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ThostUserFunctionField_BrokerID = NULL;
    Py_ssize_t ThostUserFunctionField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ThostUserFunctionField_UserID = NULL;
    Py_ssize_t ThostUserFunctionField_UserID_len = 0;
            
    ///Thost终端功能代码
    // TThostFtdcThostFunctionCodeType int
    int ThostUserFunctionField_ThostFunctionCode = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#i", (char **)kwlist
#endif

        , &ThostUserFunctionField_BrokerID, &ThostUserFunctionField_BrokerID_len 
        , &ThostUserFunctionField_UserID, &ThostUserFunctionField_UserID_len 
        , &ThostUserFunctionField_ThostFunctionCode 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ThostUserFunctionField_BrokerID != NULL ) {
        if(ThostUserFunctionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ThostUserFunctionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ThostUserFunctionField_BrokerID, ThostUserFunctionField_BrokerID_len);        
        strncpy(self->data.BrokerID, ThostUserFunctionField_BrokerID, sizeof(self->data.BrokerID) );
        ThostUserFunctionField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ThostUserFunctionField_UserID != NULL ) {
        if(ThostUserFunctionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ThostUserFunctionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ThostUserFunctionField_UserID, ThostUserFunctionField_UserID_len);        
        strncpy(self->data.UserID, ThostUserFunctionField_UserID, sizeof(self->data.UserID) );
        ThostUserFunctionField_UserID = NULL;
    }
            
    ///Thost终端功能代码
    // TThostFtdcThostFunctionCodeType int
    self->data.ThostFunctionCode = ThostUserFunctionField_ThostFunctionCode;
        

    return 0;
}

static void PyCThostFtdcThostUserFunctionField_dealloc(PyCThostFtdcThostUserFunctionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcThostUserFunctionField_repr(PyCThostFtdcThostUserFunctionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ThostFunctionCode", self->data.ThostFunctionCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcThostUserFunctionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcThostUserFunctionField_get_BrokerID(PyCThostFtdcThostUserFunctionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcThostUserFunctionField_set_BrokerID(PyCThostFtdcThostUserFunctionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcThostUserFunctionField_get_UserID(PyCThostFtdcThostUserFunctionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcThostUserFunctionField_set_UserID(PyCThostFtdcThostUserFunctionField *self, PyObject* val, void *closure) {
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
            
///Thost终端功能代码
// TThostFtdcThostFunctionCodeType int
static PyObject *PyCThostFtdcThostUserFunctionField_get_ThostFunctionCode(PyCThostFtdcThostUserFunctionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ThostFunctionCode);
#else
    return PyInt_FromLong(self->data.ThostFunctionCode);
#endif
}

///Thost终端功能代码
// TThostFtdcThostFunctionCodeType int
static int PyCThostFtdcThostUserFunctionField_set_ThostFunctionCode(PyCThostFtdcThostUserFunctionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ThostFunctionCode Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ThostFunctionCode Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ThostFunctionCode value out of range for C int");
        return -1;
    }
    self->data.ThostFunctionCode = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcThostUserFunctionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcThostUserFunctionField_get_BrokerID, (setter)PyCThostFtdcThostUserFunctionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcThostUserFunctionField_get_UserID, (setter)PyCThostFtdcThostUserFunctionField_set_UserID, (char *)"UserID", NULL},
    ///Thost终端功能代码 
    {(char *)"ThostFunctionCode", (getter)PyCThostFtdcThostUserFunctionField_get_ThostFunctionCode, (setter)PyCThostFtdcThostUserFunctionField_set_ThostFunctionCode, (char *)"ThostFunctionCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcThostUserFunctionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcThostUserFunctionField",	/* tp_name */
	sizeof(PyCThostFtdcThostUserFunctionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcThostUserFunctionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcThostUserFunctionField_repr,   /* tp_repr */
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
	"CThostFtdcThostUserFunctionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcThostUserFunctionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcThostUserFunctionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcThostUserFunctionField_new,       /* tp_new */
};

int PyCThostFtdcThostUserFunctionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcThostUserFunctionField  */
	if (PyType_Ready(&PyCThostFtdcThostUserFunctionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcThostUserFunctionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcThostUserFunctionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcThostUserFunctionField", (PyObject *)&PyCThostFtdcThostUserFunctionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcThostUserFunctionField to module");
        Py_DECREF(&PyCThostFtdcThostUserFunctionFieldType);
		return -1;
    }

    return 0;
}
