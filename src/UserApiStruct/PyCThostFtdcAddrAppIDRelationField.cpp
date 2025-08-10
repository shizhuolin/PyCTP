
#include "PyCThostFtdcAddrAppIDRelationField.h"

///服务地址和AppID的关系

static PyObject *PyCThostFtdcAddrAppIDRelationField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAddrAppIDRelationField *self = (PyCThostFtdcAddrAppIDRelationField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcAddrAppIDRelationField_init(PyCThostFtdcAddrAppIDRelationField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "Address", "DRIdentityID", "AppID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *AddrAppIDRelationField_BrokerID = NULL;
    Py_ssize_t AddrAppIDRelationField_BrokerID_len = 0;
            
    ///服务地址
    // TThostFtdcIpAddrType char[129]
    const char *AddrAppIDRelationField_Address = NULL;
    Py_ssize_t AddrAppIDRelationField_Address_len = 0;
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int AddrAppIDRelationField_DRIdentityID = 0;
        
    ///App代码
    // TThostFtdcAppIDType char[33]
    const char *AddrAppIDRelationField_AppID = NULL;
    Py_ssize_t AddrAppIDRelationField_AppID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#", (char **)kwlist
#endif

        , &AddrAppIDRelationField_BrokerID, &AddrAppIDRelationField_BrokerID_len 
        , &AddrAppIDRelationField_Address, &AddrAppIDRelationField_Address_len 
        , &AddrAppIDRelationField_DRIdentityID 
        , &AddrAppIDRelationField_AppID, &AddrAppIDRelationField_AppID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( AddrAppIDRelationField_BrokerID != NULL ) {
        if(AddrAppIDRelationField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", AddrAppIDRelationField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, AddrAppIDRelationField_BrokerID, AddrAppIDRelationField_BrokerID_len);        
        strncpy(self->data.BrokerID, AddrAppIDRelationField_BrokerID, sizeof(self->data.BrokerID) );
        AddrAppIDRelationField_BrokerID = NULL;
    }
            
    ///服务地址
    // TThostFtdcIpAddrType char[129]
    if( AddrAppIDRelationField_Address != NULL ) {
        if(AddrAppIDRelationField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", AddrAppIDRelationField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, AddrAppIDRelationField_Address, AddrAppIDRelationField_Address_len);        
        strncpy(self->data.Address, AddrAppIDRelationField_Address, sizeof(self->data.Address) );
        AddrAppIDRelationField_Address = NULL;
    }
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = AddrAppIDRelationField_DRIdentityID;
        
    ///App代码
    // TThostFtdcAppIDType char[33]
    if( AddrAppIDRelationField_AppID != NULL ) {
        if(AddrAppIDRelationField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", AddrAppIDRelationField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
            return -1;
        }
        // memset(self->data.AppID, 0, sizeof(self->data.AppID));
        // memcpy(self->data.AppID, AddrAppIDRelationField_AppID, AddrAppIDRelationField_AppID_len);        
        strncpy(self->data.AppID, AddrAppIDRelationField_AppID, sizeof(self->data.AppID) );
        AddrAppIDRelationField_AppID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcAddrAppIDRelationField_dealloc(PyCThostFtdcAddrAppIDRelationField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAddrAppIDRelationField_repr(PyCThostFtdcAddrAppIDRelationField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"Address", self->data.Address//, (Py_ssize_t)sizeof(self->data.Address) 
        ,"DRIdentityID", self->data.DRIdentityID 
        ,"AppID", self->data.AppID//, (Py_ssize_t)sizeof(self->data.AppID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAddrAppIDRelationField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcAddrAppIDRelationField_get_BrokerID(PyCThostFtdcAddrAppIDRelationField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcAddrAppIDRelationField_set_BrokerID(PyCThostFtdcAddrAppIDRelationField *self, PyObject* val, void *closure) {
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
            
///服务地址
// TThostFtdcIpAddrType char[129]
static PyObject *PyCThostFtdcAddrAppIDRelationField_get_Address(PyCThostFtdcAddrAppIDRelationField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///服务地址
// TThostFtdcIpAddrType char[129]
static int PyCThostFtdcAddrAppIDRelationField_set_Address(PyCThostFtdcAddrAppIDRelationField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.Address, 0, sizeof(self->data.Address));
    // memcpy(self->data.Address, buf, len);
    strncpy(self->data.Address, buf, sizeof(self->data.Address));
    return 0;
}
            
///交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcAddrAppIDRelationField_get_DRIdentityID(PyCThostFtdcAddrAppIDRelationField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcAddrAppIDRelationField_set_DRIdentityID(PyCThostFtdcAddrAppIDRelationField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the DRIdentityID value out of range for C int");
        return -1;
    }
    self->data.DRIdentityID = (int)buf;
    return 0;
}
        
///App代码
// TThostFtdcAppIDType char[33]
static PyObject *PyCThostFtdcAddrAppIDRelationField_get_AppID(PyCThostFtdcAddrAppIDRelationField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AppID, (Py_ssize_t)sizeof(self->data.AppID));
    return PyBytes_FromString(self->data.AppID);
}

///App代码
// TThostFtdcAppIDType char[33]
static int PyCThostFtdcAddrAppIDRelationField_set_AppID(PyCThostFtdcAddrAppIDRelationField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.AppID, 0, sizeof(self->data.AppID));
    // memcpy(self->data.AppID, buf, len);
    strncpy(self->data.AppID, buf, sizeof(self->data.AppID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcAddrAppIDRelationField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcAddrAppIDRelationField_get_BrokerID, (setter)PyCThostFtdcAddrAppIDRelationField_set_BrokerID, (char *)"BrokerID", NULL},
    ///服务地址 
    {(char *)"Address", (getter)PyCThostFtdcAddrAppIDRelationField_get_Address, (setter)PyCThostFtdcAddrAppIDRelationField_set_Address, (char *)"Address", NULL},
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcAddrAppIDRelationField_get_DRIdentityID, (setter)PyCThostFtdcAddrAppIDRelationField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
    ///App代码 
    {(char *)"AppID", (getter)PyCThostFtdcAddrAppIDRelationField_get_AppID, (setter)PyCThostFtdcAddrAppIDRelationField_set_AppID, (char *)"AppID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAddrAppIDRelationFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAddrAppIDRelationField",	/* tp_name */
	sizeof(PyCThostFtdcAddrAppIDRelationField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAddrAppIDRelationField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAddrAppIDRelationField_repr,   /* tp_repr */
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
	"CThostFtdcAddrAppIDRelationField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAddrAppIDRelationField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAddrAppIDRelationField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAddrAppIDRelationField_new,       /* tp_new */
};

int PyCThostFtdcAddrAppIDRelationFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAddrAppIDRelationField  */
	if (PyType_Ready(&PyCThostFtdcAddrAppIDRelationFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAddrAppIDRelationField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAddrAppIDRelationFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAddrAppIDRelationField", (PyObject *)&PyCThostFtdcAddrAppIDRelationFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAddrAppIDRelationField to module");
        Py_DECREF(&PyCThostFtdcAddrAppIDRelationFieldType);
		return -1;
    }

    return 0;
}
