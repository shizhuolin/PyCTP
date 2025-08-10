
#include "PyCThostFtdcSyncingInvestorGroupField.h"

///正在同步中的投资者分组

static PyObject *PyCThostFtdcSyncingInvestorGroupField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInvestorGroupField *self = (PyCThostFtdcSyncingInvestorGroupField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInvestorGroupField_init(PyCThostFtdcSyncingInvestorGroupField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorGroupID", "InvestorGroupName",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncingInvestorGroupField_BrokerID = NULL;
    Py_ssize_t SyncingInvestorGroupField_BrokerID_len = 0;
            
    ///投资者分组代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingInvestorGroupField_InvestorGroupID = NULL;
    Py_ssize_t SyncingInvestorGroupField_InvestorGroupID_len = 0;
            
    ///投资者分组名称
    // TThostFtdcInvestorGroupNameType char[41]
    const char *SyncingInvestorGroupField_InvestorGroupName = NULL;
    Py_ssize_t SyncingInvestorGroupField_InvestorGroupName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &SyncingInvestorGroupField_BrokerID, &SyncingInvestorGroupField_BrokerID_len 
        , &SyncingInvestorGroupField_InvestorGroupID, &SyncingInvestorGroupField_InvestorGroupID_len 
        , &SyncingInvestorGroupField_InvestorGroupName, &SyncingInvestorGroupField_InvestorGroupName_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncingInvestorGroupField_BrokerID != NULL ) {
        if(SyncingInvestorGroupField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncingInvestorGroupField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncingInvestorGroupField_BrokerID, SyncingInvestorGroupField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncingInvestorGroupField_BrokerID, sizeof(self->data.BrokerID) );
        SyncingInvestorGroupField_BrokerID = NULL;
    }
            
    ///投资者分组代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingInvestorGroupField_InvestorGroupID != NULL ) {
        if(SyncingInvestorGroupField_InvestorGroupID_len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is %zd)", SyncingInvestorGroupField_InvestorGroupID_len, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
            return -1;
        }
        // memset(self->data.InvestorGroupID, 0, sizeof(self->data.InvestorGroupID));
        // memcpy(self->data.InvestorGroupID, SyncingInvestorGroupField_InvestorGroupID, SyncingInvestorGroupField_InvestorGroupID_len);        
        strncpy(self->data.InvestorGroupID, SyncingInvestorGroupField_InvestorGroupID, sizeof(self->data.InvestorGroupID) );
        SyncingInvestorGroupField_InvestorGroupID = NULL;
    }
            
    ///投资者分组名称
    // TThostFtdcInvestorGroupNameType char[41]
    if( SyncingInvestorGroupField_InvestorGroupName != NULL ) {
        if(SyncingInvestorGroupField_InvestorGroupName_len > (Py_ssize_t)sizeof(self->data.InvestorGroupName)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupName too long: length=%zd (max allowed is %zd)", SyncingInvestorGroupField_InvestorGroupName_len, (Py_ssize_t)sizeof(self->data.InvestorGroupName));
            return -1;
        }
        // memset(self->data.InvestorGroupName, 0, sizeof(self->data.InvestorGroupName));
        // memcpy(self->data.InvestorGroupName, SyncingInvestorGroupField_InvestorGroupName, SyncingInvestorGroupField_InvestorGroupName_len);        
        strncpy(self->data.InvestorGroupName, SyncingInvestorGroupField_InvestorGroupName, sizeof(self->data.InvestorGroupName) );
        SyncingInvestorGroupField_InvestorGroupName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSyncingInvestorGroupField_dealloc(PyCThostFtdcSyncingInvestorGroupField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInvestorGroupField_repr(PyCThostFtdcSyncingInvestorGroupField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorGroupID", self->data.InvestorGroupID//, (Py_ssize_t)sizeof(self->data.InvestorGroupID) 
        ,"InvestorGroupName", self->data.InvestorGroupName//, (Py_ssize_t)sizeof(self->data.InvestorGroupName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorGroupField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncingInvestorGroupField_get_BrokerID(PyCThostFtdcSyncingInvestorGroupField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncingInvestorGroupField_set_BrokerID(PyCThostFtdcSyncingInvestorGroupField *self, PyObject* val, void *closure) {
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
            
///投资者分组代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSyncingInvestorGroupField_get_InvestorGroupID(PyCThostFtdcSyncingInvestorGroupField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorGroupID, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
    return PyBytes_FromString(self->data.InvestorGroupID);
}

///投资者分组代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingInvestorGroupField_set_InvestorGroupID(PyCThostFtdcSyncingInvestorGroupField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorGroupID, 0, sizeof(self->data.InvestorGroupID));
    // memcpy(self->data.InvestorGroupID, buf, len);
    strncpy(self->data.InvestorGroupID, buf, sizeof(self->data.InvestorGroupID));
    return 0;
}
            
///投资者分组名称
// TThostFtdcInvestorGroupNameType char[41]
static PyObject *PyCThostFtdcSyncingInvestorGroupField_get_InvestorGroupName(PyCThostFtdcSyncingInvestorGroupField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorGroupName, (Py_ssize_t)sizeof(self->data.InvestorGroupName));
    return PyBytes_FromString(self->data.InvestorGroupName);
}

///投资者分组名称
// TThostFtdcInvestorGroupNameType char[41]
static int PyCThostFtdcSyncingInvestorGroupField_set_InvestorGroupName(PyCThostFtdcSyncingInvestorGroupField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorGroupName)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupName must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.InvestorGroupName, 0, sizeof(self->data.InvestorGroupName));
    // memcpy(self->data.InvestorGroupName, buf, len);
    strncpy(self->data.InvestorGroupName, buf, sizeof(self->data.InvestorGroupName));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSyncingInvestorGroupField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInvestorGroupField_get_BrokerID, (setter)PyCThostFtdcSyncingInvestorGroupField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者分组代码 
    {(char *)"InvestorGroupID", (getter)PyCThostFtdcSyncingInvestorGroupField_get_InvestorGroupID, (setter)PyCThostFtdcSyncingInvestorGroupField_set_InvestorGroupID, (char *)"InvestorGroupID", NULL},
    ///投资者分组名称 
    {(char *)"InvestorGroupName", (getter)PyCThostFtdcSyncingInvestorGroupField_get_InvestorGroupName, (setter)PyCThostFtdcSyncingInvestorGroupField_set_InvestorGroupName, (char *)"InvestorGroupName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInvestorGroupFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInvestorGroupField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInvestorGroupField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInvestorGroupField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInvestorGroupField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInvestorGroupField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInvestorGroupField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInvestorGroupField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInvestorGroupField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInvestorGroupFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInvestorGroupField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInvestorGroupFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInvestorGroupField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInvestorGroupFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorGroupField", (PyObject *)&PyCThostFtdcSyncingInvestorGroupFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorGroupField to module");
        Py_DECREF(&PyCThostFtdcSyncingInvestorGroupFieldType);
		return -1;
    }

    return 0;
}
