
#include "PyCThostFtdcRemoveParkedOrderActionField.h"

///删除预埋撤单

static PyObject *PyCThostFtdcRemoveParkedOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRemoveParkedOrderActionField *self = (PyCThostFtdcRemoveParkedOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRemoveParkedOrderActionField_init(PyCThostFtdcRemoveParkedOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ParkedOrderActionID", "InvestUnitID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RemoveParkedOrderActionField_BrokerID = NULL;
    Py_ssize_t RemoveParkedOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *RemoveParkedOrderActionField_InvestorID = NULL;
    Py_ssize_t RemoveParkedOrderActionField_InvestorID_len = 0;
            
    ///预埋撤单编号
    // TThostFtdcParkedOrderActionIDType char[13]
    const char *RemoveParkedOrderActionField_ParkedOrderActionID = NULL;
    Py_ssize_t RemoveParkedOrderActionField_ParkedOrderActionID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *RemoveParkedOrderActionField_InvestUnitID = NULL;
    Py_ssize_t RemoveParkedOrderActionField_InvestUnitID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &RemoveParkedOrderActionField_BrokerID, &RemoveParkedOrderActionField_BrokerID_len 
        , &RemoveParkedOrderActionField_InvestorID, &RemoveParkedOrderActionField_InvestorID_len 
        , &RemoveParkedOrderActionField_ParkedOrderActionID, &RemoveParkedOrderActionField_ParkedOrderActionID_len 
        , &RemoveParkedOrderActionField_InvestUnitID, &RemoveParkedOrderActionField_InvestUnitID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RemoveParkedOrderActionField_BrokerID != NULL ) {
        if(RemoveParkedOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RemoveParkedOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RemoveParkedOrderActionField_BrokerID, RemoveParkedOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, RemoveParkedOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        RemoveParkedOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( RemoveParkedOrderActionField_InvestorID != NULL ) {
        if(RemoveParkedOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", RemoveParkedOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, RemoveParkedOrderActionField_InvestorID, RemoveParkedOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, RemoveParkedOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        RemoveParkedOrderActionField_InvestorID = NULL;
    }
            
    ///预埋撤单编号
    // TThostFtdcParkedOrderActionIDType char[13]
    if( RemoveParkedOrderActionField_ParkedOrderActionID != NULL ) {
        if(RemoveParkedOrderActionField_ParkedOrderActionID_len > (Py_ssize_t)sizeof(self->data.ParkedOrderActionID)) {
            PyErr_Format(PyExc_ValueError, "ParkedOrderActionID too long: length=%zd (max allowed is %zd)", RemoveParkedOrderActionField_ParkedOrderActionID_len, (Py_ssize_t)sizeof(self->data.ParkedOrderActionID));
            return -1;
        }
        // memset(self->data.ParkedOrderActionID, 0, sizeof(self->data.ParkedOrderActionID));
        // memcpy(self->data.ParkedOrderActionID, RemoveParkedOrderActionField_ParkedOrderActionID, RemoveParkedOrderActionField_ParkedOrderActionID_len);        
        strncpy(self->data.ParkedOrderActionID, RemoveParkedOrderActionField_ParkedOrderActionID, sizeof(self->data.ParkedOrderActionID) );
        RemoveParkedOrderActionField_ParkedOrderActionID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( RemoveParkedOrderActionField_InvestUnitID != NULL ) {
        if(RemoveParkedOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", RemoveParkedOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, RemoveParkedOrderActionField_InvestUnitID, RemoveParkedOrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, RemoveParkedOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        RemoveParkedOrderActionField_InvestUnitID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRemoveParkedOrderActionField_dealloc(PyCThostFtdcRemoveParkedOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRemoveParkedOrderActionField_repr(PyCThostFtdcRemoveParkedOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ParkedOrderActionID", self->data.ParkedOrderActionID//, (Py_ssize_t)sizeof(self->data.ParkedOrderActionID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRemoveParkedOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcRemoveParkedOrderActionField_get_BrokerID(PyCThostFtdcRemoveParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRemoveParkedOrderActionField_set_BrokerID(PyCThostFtdcRemoveParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRemoveParkedOrderActionField_get_InvestorID(PyCThostFtdcRemoveParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcRemoveParkedOrderActionField_set_InvestorID(PyCThostFtdcRemoveParkedOrderActionField *self, PyObject* val, void *closure) {
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
            
///预埋撤单编号
// TThostFtdcParkedOrderActionIDType char[13]
static PyObject *PyCThostFtdcRemoveParkedOrderActionField_get_ParkedOrderActionID(PyCThostFtdcRemoveParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParkedOrderActionID, (Py_ssize_t)sizeof(self->data.ParkedOrderActionID));
    return PyBytes_FromString(self->data.ParkedOrderActionID);
}

///预埋撤单编号
// TThostFtdcParkedOrderActionIDType char[13]
static int PyCThostFtdcRemoveParkedOrderActionField_set_ParkedOrderActionID(PyCThostFtdcRemoveParkedOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParkedOrderActionID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParkedOrderActionID)) {
        PyErr_SetString(PyExc_ValueError, "ParkedOrderActionID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.ParkedOrderActionID, 0, sizeof(self->data.ParkedOrderActionID));
    // memcpy(self->data.ParkedOrderActionID, buf, len);
    strncpy(self->data.ParkedOrderActionID, buf, sizeof(self->data.ParkedOrderActionID));
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcRemoveParkedOrderActionField_get_InvestUnitID(PyCThostFtdcRemoveParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcRemoveParkedOrderActionField_set_InvestUnitID(PyCThostFtdcRemoveParkedOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcRemoveParkedOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRemoveParkedOrderActionField_get_BrokerID, (setter)PyCThostFtdcRemoveParkedOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcRemoveParkedOrderActionField_get_InvestorID, (setter)PyCThostFtdcRemoveParkedOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///预埋撤单编号 
    {(char *)"ParkedOrderActionID", (getter)PyCThostFtdcRemoveParkedOrderActionField_get_ParkedOrderActionID, (setter)PyCThostFtdcRemoveParkedOrderActionField_set_ParkedOrderActionID, (char *)"ParkedOrderActionID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcRemoveParkedOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcRemoveParkedOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRemoveParkedOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRemoveParkedOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcRemoveParkedOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRemoveParkedOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRemoveParkedOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcRemoveParkedOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRemoveParkedOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRemoveParkedOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRemoveParkedOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcRemoveParkedOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRemoveParkedOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcRemoveParkedOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRemoveParkedOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRemoveParkedOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRemoveParkedOrderActionField", (PyObject *)&PyCThostFtdcRemoveParkedOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRemoveParkedOrderActionField to module");
        Py_DECREF(&PyCThostFtdcRemoveParkedOrderActionFieldType);
		return -1;
    }

    return 0;
}
