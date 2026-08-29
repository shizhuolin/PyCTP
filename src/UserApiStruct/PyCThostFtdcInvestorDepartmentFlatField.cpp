
#include "PyCThostFtdcInvestorDepartmentFlatField.h"

///组织架构投资者对应关系

static PyObject *PyCThostFtdcInvestorDepartmentFlatField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorDepartmentFlatField *self = (PyCThostFtdcInvestorDepartmentFlatField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorDepartmentFlatField_init(PyCThostFtdcInvestorDepartmentFlatField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "DepartmentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorDepartmentFlatField_BrokerID = NULL;
    Py_ssize_t InvestorDepartmentFlatField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorDepartmentFlatField_InvestorID = NULL;
    Py_ssize_t InvestorDepartmentFlatField_InvestorID_len = 0;
            
    ///组织架构代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorDepartmentFlatField_DepartmentID = NULL;
    Py_ssize_t InvestorDepartmentFlatField_DepartmentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &InvestorDepartmentFlatField_BrokerID, &InvestorDepartmentFlatField_BrokerID_len 
        , &InvestorDepartmentFlatField_InvestorID, &InvestorDepartmentFlatField_InvestorID_len 
        , &InvestorDepartmentFlatField_DepartmentID, &InvestorDepartmentFlatField_DepartmentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorDepartmentFlatField_BrokerID != NULL ) {
        if(InvestorDepartmentFlatField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorDepartmentFlatField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorDepartmentFlatField_BrokerID, InvestorDepartmentFlatField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorDepartmentFlatField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorDepartmentFlatField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorDepartmentFlatField_InvestorID != NULL ) {
        if(InvestorDepartmentFlatField_InvestorID_len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorDepartmentFlatField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorDepartmentFlatField_InvestorID, InvestorDepartmentFlatField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorDepartmentFlatField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorDepartmentFlatField_InvestorID = NULL;
    }
            
    ///组织架构代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorDepartmentFlatField_DepartmentID != NULL ) {
        if(InvestorDepartmentFlatField_DepartmentID_len >= (Py_ssize_t)sizeof(self->data.DepartmentID)) {
            PyErr_Format(PyExc_ValueError, "DepartmentID too long: length=%zd (max allowed is %zd)", InvestorDepartmentFlatField_DepartmentID_len, (Py_ssize_t)sizeof(self->data.DepartmentID));
            return -1;
        }
        // memset(self->data.DepartmentID, 0, sizeof(self->data.DepartmentID));
        // memcpy(self->data.DepartmentID, InvestorDepartmentFlatField_DepartmentID, InvestorDepartmentFlatField_DepartmentID_len);        
        strncpy(self->data.DepartmentID, InvestorDepartmentFlatField_DepartmentID, sizeof(self->data.DepartmentID) );
        InvestorDepartmentFlatField_DepartmentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInvestorDepartmentFlatField_dealloc(PyCThostFtdcInvestorDepartmentFlatField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorDepartmentFlatField_repr(PyCThostFtdcInvestorDepartmentFlatField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"DepartmentID", self->data.DepartmentID//, (Py_ssize_t)sizeof(self->data.DepartmentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorDepartmentFlatField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorDepartmentFlatField_get_BrokerID(PyCThostFtdcInvestorDepartmentFlatField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorDepartmentFlatField_set_BrokerID(PyCThostFtdcInvestorDepartmentFlatField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcInvestorDepartmentFlatField_get_InvestorID(PyCThostFtdcInvestorDepartmentFlatField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorDepartmentFlatField_set_InvestorID(PyCThostFtdcInvestorDepartmentFlatField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///组织架构代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcInvestorDepartmentFlatField_get_DepartmentID(PyCThostFtdcInvestorDepartmentFlatField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DepartmentID, (Py_ssize_t)sizeof(self->data.DepartmentID));
    return PyBytes_FromString(self->data.DepartmentID);
}

///组织架构代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorDepartmentFlatField_set_DepartmentID(PyCThostFtdcInvestorDepartmentFlatField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DepartmentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.DepartmentID)) {
        PyErr_SetString(PyExc_ValueError, "DepartmentID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.DepartmentID, 0, sizeof(self->data.DepartmentID));
    // memcpy(self->data.DepartmentID, buf, len);
    strncpy(self->data.DepartmentID, buf, sizeof(self->data.DepartmentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInvestorDepartmentFlatField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorDepartmentFlatField_get_BrokerID, (setter)PyCThostFtdcInvestorDepartmentFlatField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorDepartmentFlatField_get_InvestorID, (setter)PyCThostFtdcInvestorDepartmentFlatField_set_InvestorID, (char *)"InvestorID", NULL},
    ///组织架构代码 
    {(char *)"DepartmentID", (getter)PyCThostFtdcInvestorDepartmentFlatField_get_DepartmentID, (setter)PyCThostFtdcInvestorDepartmentFlatField_set_DepartmentID, (char *)"DepartmentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorDepartmentFlatFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorDepartmentFlatField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorDepartmentFlatField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorDepartmentFlatField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorDepartmentFlatField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorDepartmentFlatField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorDepartmentFlatField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorDepartmentFlatField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorDepartmentFlatField_new,       /* tp_new */
};

int PyCThostFtdcInvestorDepartmentFlatFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorDepartmentFlatField  */
	if (PyType_Ready(&PyCThostFtdcInvestorDepartmentFlatFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorDepartmentFlatField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorDepartmentFlatFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorDepartmentFlatField", (PyObject *)&PyCThostFtdcInvestorDepartmentFlatFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorDepartmentFlatField to module");
        Py_DECREF(&PyCThostFtdcInvestorDepartmentFlatFieldType);
		return -1;
    }

    return 0;
}
