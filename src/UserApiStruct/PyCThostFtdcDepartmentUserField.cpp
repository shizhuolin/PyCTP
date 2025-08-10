
#include "PyCThostFtdcDepartmentUserField.h"

///操作员组织架构关系

static PyObject *PyCThostFtdcDepartmentUserField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDepartmentUserField *self = (PyCThostFtdcDepartmentUserField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcDepartmentUserField_init(PyCThostFtdcDepartmentUserField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "InvestorRange", "InvestorID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *DepartmentUserField_BrokerID = NULL;
    Py_ssize_t DepartmentUserField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *DepartmentUserField_UserID = NULL;
    Py_ssize_t DepartmentUserField_UserID_len = 0;
            
    ///投资者范围
    // TThostFtdcDepartmentRangeType char
    char DepartmentUserField_InvestorRange = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *DepartmentUserField_InvestorID = NULL;
    Py_ssize_t DepartmentUserField_InvestorID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#", (char **)kwlist
#endif

        , &DepartmentUserField_BrokerID, &DepartmentUserField_BrokerID_len 
        , &DepartmentUserField_UserID, &DepartmentUserField_UserID_len 
        , &DepartmentUserField_InvestorRange 
        , &DepartmentUserField_InvestorID, &DepartmentUserField_InvestorID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( DepartmentUserField_BrokerID != NULL ) {
        if(DepartmentUserField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", DepartmentUserField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, DepartmentUserField_BrokerID, DepartmentUserField_BrokerID_len);        
        strncpy(self->data.BrokerID, DepartmentUserField_BrokerID, sizeof(self->data.BrokerID) );
        DepartmentUserField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( DepartmentUserField_UserID != NULL ) {
        if(DepartmentUserField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", DepartmentUserField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, DepartmentUserField_UserID, DepartmentUserField_UserID_len);        
        strncpy(self->data.UserID, DepartmentUserField_UserID, sizeof(self->data.UserID) );
        DepartmentUserField_UserID = NULL;
    }
            
    ///投资者范围
    // TThostFtdcDepartmentRangeType char
    self->data.InvestorRange = DepartmentUserField_InvestorRange;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( DepartmentUserField_InvestorID != NULL ) {
        if(DepartmentUserField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", DepartmentUserField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, DepartmentUserField_InvestorID, DepartmentUserField_InvestorID_len);        
        strncpy(self->data.InvestorID, DepartmentUserField_InvestorID, sizeof(self->data.InvestorID) );
        DepartmentUserField_InvestorID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcDepartmentUserField_dealloc(PyCThostFtdcDepartmentUserField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDepartmentUserField_repr(PyCThostFtdcDepartmentUserField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepartmentUserField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcDepartmentUserField_get_BrokerID(PyCThostFtdcDepartmentUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcDepartmentUserField_set_BrokerID(PyCThostFtdcDepartmentUserField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepartmentUserField_get_UserID(PyCThostFtdcDepartmentUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcDepartmentUserField_set_UserID(PyCThostFtdcDepartmentUserField *self, PyObject* val, void *closure) {
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
            
///投资者范围
// TThostFtdcDepartmentRangeType char
static PyObject *PyCThostFtdcDepartmentUserField_get_InvestorRange(PyCThostFtdcDepartmentUserField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcDepartmentRangeType char
static int PyCThostFtdcDepartmentUserField_set_InvestorRange(PyCThostFtdcDepartmentUserField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    self->data.InvestorRange = *buf;
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcDepartmentUserField_get_InvestorID(PyCThostFtdcDepartmentUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcDepartmentUserField_set_InvestorID(PyCThostFtdcDepartmentUserField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcDepartmentUserField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcDepartmentUserField_get_BrokerID, (setter)PyCThostFtdcDepartmentUserField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcDepartmentUserField_get_UserID, (setter)PyCThostFtdcDepartmentUserField_set_UserID, (char *)"UserID", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcDepartmentUserField_get_InvestorRange, (setter)PyCThostFtdcDepartmentUserField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcDepartmentUserField_get_InvestorID, (setter)PyCThostFtdcDepartmentUserField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDepartmentUserFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDepartmentUserField",	/* tp_name */
	sizeof(PyCThostFtdcDepartmentUserField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDepartmentUserField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDepartmentUserField_repr,   /* tp_repr */
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
	"CThostFtdcDepartmentUserField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDepartmentUserField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDepartmentUserField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDepartmentUserField_new,       /* tp_new */
};

int PyCThostFtdcDepartmentUserFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDepartmentUserField  */
	if (PyType_Ready(&PyCThostFtdcDepartmentUserFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDepartmentUserField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDepartmentUserFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDepartmentUserField", (PyObject *)&PyCThostFtdcDepartmentUserFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDepartmentUserField to module");
        Py_DECREF(&PyCThostFtdcDepartmentUserFieldType);
		return -1;
    }

    return 0;
}
