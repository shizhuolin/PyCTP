
#include "PyCThostFtdcRemoveParkedOrderField.h"

///删除预埋单

static PyObject *PyCThostFtdcRemoveParkedOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRemoveParkedOrderField *self = (PyCThostFtdcRemoveParkedOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRemoveParkedOrderField_init(PyCThostFtdcRemoveParkedOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ParkedOrderID", "InvestUnitID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RemoveParkedOrderField_BrokerID = NULL;
    Py_ssize_t RemoveParkedOrderField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *RemoveParkedOrderField_InvestorID = NULL;
    Py_ssize_t RemoveParkedOrderField_InvestorID_len = 0;
            
    ///预埋报单编号
    // TThostFtdcParkedOrderIDType char[13]
    const char *RemoveParkedOrderField_ParkedOrderID = NULL;
    Py_ssize_t RemoveParkedOrderField_ParkedOrderID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *RemoveParkedOrderField_InvestUnitID = NULL;
    Py_ssize_t RemoveParkedOrderField_InvestUnitID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &RemoveParkedOrderField_BrokerID, &RemoveParkedOrderField_BrokerID_len 
        , &RemoveParkedOrderField_InvestorID, &RemoveParkedOrderField_InvestorID_len 
        , &RemoveParkedOrderField_ParkedOrderID, &RemoveParkedOrderField_ParkedOrderID_len 
        , &RemoveParkedOrderField_InvestUnitID, &RemoveParkedOrderField_InvestUnitID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RemoveParkedOrderField_BrokerID != NULL ) {
        if(RemoveParkedOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RemoveParkedOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RemoveParkedOrderField_BrokerID, RemoveParkedOrderField_BrokerID_len);        
        strncpy(self->data.BrokerID, RemoveParkedOrderField_BrokerID, sizeof(self->data.BrokerID) );
        RemoveParkedOrderField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( RemoveParkedOrderField_InvestorID != NULL ) {
        if(RemoveParkedOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", RemoveParkedOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, RemoveParkedOrderField_InvestorID, RemoveParkedOrderField_InvestorID_len);        
        strncpy(self->data.InvestorID, RemoveParkedOrderField_InvestorID, sizeof(self->data.InvestorID) );
        RemoveParkedOrderField_InvestorID = NULL;
    }
            
    ///预埋报单编号
    // TThostFtdcParkedOrderIDType char[13]
    if( RemoveParkedOrderField_ParkedOrderID != NULL ) {
        if(RemoveParkedOrderField_ParkedOrderID_len > (Py_ssize_t)sizeof(self->data.ParkedOrderID)) {
            PyErr_Format(PyExc_ValueError, "ParkedOrderID too long: length=%zd (max allowed is %zd)", RemoveParkedOrderField_ParkedOrderID_len, (Py_ssize_t)sizeof(self->data.ParkedOrderID));
            return -1;
        }
        // memset(self->data.ParkedOrderID, 0, sizeof(self->data.ParkedOrderID));
        // memcpy(self->data.ParkedOrderID, RemoveParkedOrderField_ParkedOrderID, RemoveParkedOrderField_ParkedOrderID_len);        
        strncpy(self->data.ParkedOrderID, RemoveParkedOrderField_ParkedOrderID, sizeof(self->data.ParkedOrderID) );
        RemoveParkedOrderField_ParkedOrderID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( RemoveParkedOrderField_InvestUnitID != NULL ) {
        if(RemoveParkedOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", RemoveParkedOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, RemoveParkedOrderField_InvestUnitID, RemoveParkedOrderField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, RemoveParkedOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        RemoveParkedOrderField_InvestUnitID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRemoveParkedOrderField_dealloc(PyCThostFtdcRemoveParkedOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRemoveParkedOrderField_repr(PyCThostFtdcRemoveParkedOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ParkedOrderID", self->data.ParkedOrderID//, (Py_ssize_t)sizeof(self->data.ParkedOrderID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRemoveParkedOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcRemoveParkedOrderField_get_BrokerID(PyCThostFtdcRemoveParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRemoveParkedOrderField_set_BrokerID(PyCThostFtdcRemoveParkedOrderField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcRemoveParkedOrderField_get_InvestorID(PyCThostFtdcRemoveParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcRemoveParkedOrderField_set_InvestorID(PyCThostFtdcRemoveParkedOrderField *self, PyObject* val, void *closure) {
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
            
///预埋报单编号
// TThostFtdcParkedOrderIDType char[13]
static PyObject *PyCThostFtdcRemoveParkedOrderField_get_ParkedOrderID(PyCThostFtdcRemoveParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParkedOrderID, (Py_ssize_t)sizeof(self->data.ParkedOrderID));
    return PyBytes_FromString(self->data.ParkedOrderID);
}

///预埋报单编号
// TThostFtdcParkedOrderIDType char[13]
static int PyCThostFtdcRemoveParkedOrderField_set_ParkedOrderID(PyCThostFtdcRemoveParkedOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParkedOrderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParkedOrderID)) {
        PyErr_SetString(PyExc_ValueError, "ParkedOrderID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ParkedOrderID, 0, sizeof(self->data.ParkedOrderID));
    // memcpy(self->data.ParkedOrderID, buf, len);
    strncpy(self->data.ParkedOrderID, buf, sizeof(self->data.ParkedOrderID));
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcRemoveParkedOrderField_get_InvestUnitID(PyCThostFtdcRemoveParkedOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcRemoveParkedOrderField_set_InvestUnitID(PyCThostFtdcRemoveParkedOrderField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcRemoveParkedOrderField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRemoveParkedOrderField_get_BrokerID, (setter)PyCThostFtdcRemoveParkedOrderField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcRemoveParkedOrderField_get_InvestorID, (setter)PyCThostFtdcRemoveParkedOrderField_set_InvestorID, (char *)"InvestorID", NULL},
    ///预埋报单编号 
    {(char *)"ParkedOrderID", (getter)PyCThostFtdcRemoveParkedOrderField_get_ParkedOrderID, (setter)PyCThostFtdcRemoveParkedOrderField_set_ParkedOrderID, (char *)"ParkedOrderID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcRemoveParkedOrderField_get_InvestUnitID, (setter)PyCThostFtdcRemoveParkedOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRemoveParkedOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRemoveParkedOrderField",	/* tp_name */
	sizeof(PyCThostFtdcRemoveParkedOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRemoveParkedOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRemoveParkedOrderField_repr,   /* tp_repr */
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
	"CThostFtdcRemoveParkedOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRemoveParkedOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRemoveParkedOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRemoveParkedOrderField_new,       /* tp_new */
};

int PyCThostFtdcRemoveParkedOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRemoveParkedOrderField  */
	if (PyType_Ready(&PyCThostFtdcRemoveParkedOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRemoveParkedOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRemoveParkedOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRemoveParkedOrderField", (PyObject *)&PyCThostFtdcRemoveParkedOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRemoveParkedOrderField to module");
        Py_DECREF(&PyCThostFtdcRemoveParkedOrderFieldType);
		return -1;
    }

    return 0;
}
