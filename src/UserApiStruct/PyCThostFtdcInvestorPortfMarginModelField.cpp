
#include "PyCThostFtdcInvestorPortfMarginModelField.h"

///新组保保证金系数投资者模板对应关系

static PyObject *PyCThostFtdcInvestorPortfMarginModelField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPortfMarginModelField *self = (PyCThostFtdcInvestorPortfMarginModelField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPortfMarginModelField_init(PyCThostFtdcInvestorPortfMarginModelField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "MarginModelID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorPortfMarginModelField_BrokerID = NULL;
    Py_ssize_t InvestorPortfMarginModelField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorPortfMarginModelField_InvestorID = NULL;
    Py_ssize_t InvestorPortfMarginModelField_InvestorID_len = 0;
            
    ///保证金系数模板
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorPortfMarginModelField_MarginModelID = NULL;
    Py_ssize_t InvestorPortfMarginModelField_MarginModelID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &InvestorPortfMarginModelField_BrokerID, &InvestorPortfMarginModelField_BrokerID_len 
        , &InvestorPortfMarginModelField_InvestorID, &InvestorPortfMarginModelField_InvestorID_len 
        , &InvestorPortfMarginModelField_MarginModelID, &InvestorPortfMarginModelField_MarginModelID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorPortfMarginModelField_BrokerID != NULL ) {
        if(InvestorPortfMarginModelField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorPortfMarginModelField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorPortfMarginModelField_BrokerID, InvestorPortfMarginModelField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorPortfMarginModelField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorPortfMarginModelField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorPortfMarginModelField_InvestorID != NULL ) {
        if(InvestorPortfMarginModelField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorPortfMarginModelField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorPortfMarginModelField_InvestorID, InvestorPortfMarginModelField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorPortfMarginModelField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorPortfMarginModelField_InvestorID = NULL;
    }
            
    ///保证金系数模板
    // TThostFtdcInvestorIDType char[13]
    if( InvestorPortfMarginModelField_MarginModelID != NULL ) {
        if(InvestorPortfMarginModelField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", InvestorPortfMarginModelField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
            return -1;
        }
        // memset(self->data.MarginModelID, 0, sizeof(self->data.MarginModelID));
        // memcpy(self->data.MarginModelID, InvestorPortfMarginModelField_MarginModelID, InvestorPortfMarginModelField_MarginModelID_len);        
        strncpy(self->data.MarginModelID, InvestorPortfMarginModelField_MarginModelID, sizeof(self->data.MarginModelID) );
        InvestorPortfMarginModelField_MarginModelID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInvestorPortfMarginModelField_dealloc(PyCThostFtdcInvestorPortfMarginModelField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPortfMarginModelField_repr(PyCThostFtdcInvestorPortfMarginModelField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"MarginModelID", self->data.MarginModelID//, (Py_ssize_t)sizeof(self->data.MarginModelID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfMarginModelField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorPortfMarginModelField_get_BrokerID(PyCThostFtdcInvestorPortfMarginModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorPortfMarginModelField_set_BrokerID(PyCThostFtdcInvestorPortfMarginModelField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorPortfMarginModelField_get_InvestorID(PyCThostFtdcInvestorPortfMarginModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorPortfMarginModelField_set_InvestorID(PyCThostFtdcInvestorPortfMarginModelField *self, PyObject* val, void *closure) {
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
            
///保证金系数模板
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcInvestorPortfMarginModelField_get_MarginModelID(PyCThostFtdcInvestorPortfMarginModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MarginModelID, (Py_ssize_t)sizeof(self->data.MarginModelID));
    return PyBytes_FromString(self->data.MarginModelID);
}

///保证金系数模板
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorPortfMarginModelField_set_MarginModelID(PyCThostFtdcInvestorPortfMarginModelField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.MarginModelID, 0, sizeof(self->data.MarginModelID));
    // memcpy(self->data.MarginModelID, buf, len);
    strncpy(self->data.MarginModelID, buf, sizeof(self->data.MarginModelID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInvestorPortfMarginModelField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPortfMarginModelField_get_BrokerID, (setter)PyCThostFtdcInvestorPortfMarginModelField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPortfMarginModelField_get_InvestorID, (setter)PyCThostFtdcInvestorPortfMarginModelField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保证金系数模板 
    {(char *)"MarginModelID", (getter)PyCThostFtdcInvestorPortfMarginModelField_get_MarginModelID, (setter)PyCThostFtdcInvestorPortfMarginModelField_set_MarginModelID, (char *)"MarginModelID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPortfMarginModelFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPortfMarginModelField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPortfMarginModelField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPortfMarginModelField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPortfMarginModelField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPortfMarginModelField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPortfMarginModelField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPortfMarginModelField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPortfMarginModelField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPortfMarginModelFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPortfMarginModelField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPortfMarginModelFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPortfMarginModelField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPortfMarginModelFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPortfMarginModelField", (PyObject *)&PyCThostFtdcInvestorPortfMarginModelFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPortfMarginModelField to module");
        Py_DECREF(&PyCThostFtdcInvestorPortfMarginModelFieldType);
		return -1;
    }

    return 0;
}
