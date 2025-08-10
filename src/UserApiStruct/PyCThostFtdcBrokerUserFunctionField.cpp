
#include "PyCThostFtdcBrokerUserFunctionField.h"

///经纪公司用户功能权限

static PyObject *PyCThostFtdcBrokerUserFunctionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserFunctionField *self = (PyCThostFtdcBrokerUserFunctionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserFunctionField_init(PyCThostFtdcBrokerUserFunctionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "BrokerFunctionCode",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerUserFunctionField_BrokerID = NULL;
    Py_ssize_t BrokerUserFunctionField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *BrokerUserFunctionField_UserID = NULL;
    Py_ssize_t BrokerUserFunctionField_UserID_len = 0;
            
    ///经纪公司功能代码
    // TThostFtdcBrokerFunctionCodeType char
    char BrokerUserFunctionField_BrokerFunctionCode = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#c", (char **)kwlist
#endif

        , &BrokerUserFunctionField_BrokerID, &BrokerUserFunctionField_BrokerID_len 
        , &BrokerUserFunctionField_UserID, &BrokerUserFunctionField_UserID_len 
        , &BrokerUserFunctionField_BrokerFunctionCode 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerUserFunctionField_BrokerID != NULL ) {
        if(BrokerUserFunctionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerUserFunctionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerUserFunctionField_BrokerID, BrokerUserFunctionField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerUserFunctionField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerUserFunctionField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( BrokerUserFunctionField_UserID != NULL ) {
        if(BrokerUserFunctionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", BrokerUserFunctionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, BrokerUserFunctionField_UserID, BrokerUserFunctionField_UserID_len);        
        strncpy(self->data.UserID, BrokerUserFunctionField_UserID, sizeof(self->data.UserID) );
        BrokerUserFunctionField_UserID = NULL;
    }
            
    ///经纪公司功能代码
    // TThostFtdcBrokerFunctionCodeType char
    self->data.BrokerFunctionCode = BrokerUserFunctionField_BrokerFunctionCode;
            

    return 0;
}

static void PyCThostFtdcBrokerUserFunctionField_dealloc(PyCThostFtdcBrokerUserFunctionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserFunctionField_repr(PyCThostFtdcBrokerUserFunctionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"BrokerFunctionCode", self->data.BrokerFunctionCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserFunctionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerUserFunctionField_get_BrokerID(PyCThostFtdcBrokerUserFunctionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerUserFunctionField_set_BrokerID(PyCThostFtdcBrokerUserFunctionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBrokerUserFunctionField_get_UserID(PyCThostFtdcBrokerUserFunctionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcBrokerUserFunctionField_set_UserID(PyCThostFtdcBrokerUserFunctionField *self, PyObject* val, void *closure) {
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
            
///经纪公司功能代码
// TThostFtdcBrokerFunctionCodeType char
static PyObject *PyCThostFtdcBrokerUserFunctionField_get_BrokerFunctionCode(PyCThostFtdcBrokerUserFunctionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BrokerFunctionCode), 1);
}

///经纪公司功能代码
// TThostFtdcBrokerFunctionCodeType char
static int PyCThostFtdcBrokerUserFunctionField_set_BrokerFunctionCode(PyCThostFtdcBrokerUserFunctionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerFunctionCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerFunctionCode)) {
        PyErr_SetString(PyExc_ValueError, "BrokerFunctionCode must be equal 1 bytes");
        return -1;
    }
    self->data.BrokerFunctionCode = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcBrokerUserFunctionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserFunctionField_get_BrokerID, (setter)PyCThostFtdcBrokerUserFunctionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcBrokerUserFunctionField_get_UserID, (setter)PyCThostFtdcBrokerUserFunctionField_set_UserID, (char *)"UserID", NULL},
    ///经纪公司功能代码 
    {(char *)"BrokerFunctionCode", (getter)PyCThostFtdcBrokerUserFunctionField_get_BrokerFunctionCode, (setter)PyCThostFtdcBrokerUserFunctionField_set_BrokerFunctionCode, (char *)"BrokerFunctionCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserFunctionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserFunctionField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserFunctionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserFunctionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserFunctionField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerUserFunctionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserFunctionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserFunctionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserFunctionField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserFunctionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserFunctionField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserFunctionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserFunctionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserFunctionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserFunctionField", (PyObject *)&PyCThostFtdcBrokerUserFunctionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserFunctionField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserFunctionFieldType);
		return -1;
    }

    return 0;
}
