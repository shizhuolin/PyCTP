
#include "PyCThostFtdcInvestorTradingRightField.h"

///投资者交易权限设置

static PyObject *PyCThostFtdcInvestorTradingRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorTradingRightField *self = (PyCThostFtdcInvestorTradingRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorTradingRightField_init(PyCThostFtdcInvestorTradingRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InvstTradingRight",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorTradingRightField_BrokerID = NULL;
    Py_ssize_t InvestorTradingRightField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorTradingRightField_InvestorID = NULL;
    Py_ssize_t InvestorTradingRightField_InvestorID_len = 0;
            
    ///交易权限
    // TThostFtdcInvstTradingRightType char
    char InvestorTradingRightField_InvstTradingRight = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#c", (char **)kwlist
#endif

        , &InvestorTradingRightField_BrokerID, &InvestorTradingRightField_BrokerID_len 
        , &InvestorTradingRightField_InvestorID, &InvestorTradingRightField_InvestorID_len 
        , &InvestorTradingRightField_InvstTradingRight 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorTradingRightField_BrokerID != NULL ) {
        if(InvestorTradingRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorTradingRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorTradingRightField_BrokerID, InvestorTradingRightField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorTradingRightField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorTradingRightField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorTradingRightField_InvestorID != NULL ) {
        if(InvestorTradingRightField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorTradingRightField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorTradingRightField_InvestorID, InvestorTradingRightField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorTradingRightField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorTradingRightField_InvestorID = NULL;
    }
            
    ///交易权限
    // TThostFtdcInvstTradingRightType char
    self->data.InvstTradingRight = InvestorTradingRightField_InvstTradingRight;
            

    return 0;
}

static void PyCThostFtdcInvestorTradingRightField_dealloc(PyCThostFtdcInvestorTradingRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorTradingRightField_repr(PyCThostFtdcInvestorTradingRightField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InvstTradingRight", self->data.InvstTradingRight 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorTradingRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorTradingRightField_get_BrokerID(PyCThostFtdcInvestorTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorTradingRightField_set_BrokerID(PyCThostFtdcInvestorTradingRightField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestorTradingRightField_get_InvestorID(PyCThostFtdcInvestorTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorTradingRightField_set_InvestorID(PyCThostFtdcInvestorTradingRightField *self, PyObject* val, void *closure) {
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
            
///交易权限
// TThostFtdcInvstTradingRightType char
static PyObject *PyCThostFtdcInvestorTradingRightField_get_InvstTradingRight(PyCThostFtdcInvestorTradingRightField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvstTradingRight), 1);
}

///交易权限
// TThostFtdcInvstTradingRightType char
static int PyCThostFtdcInvestorTradingRightField_set_InvstTradingRight(PyCThostFtdcInvestorTradingRightField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvstTradingRight Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvstTradingRight)) {
        PyErr_SetString(PyExc_ValueError, "InvstTradingRight must be equal 1 bytes");
        return -1;
    }
    self->data.InvstTradingRight = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInvestorTradingRightField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorTradingRightField_get_BrokerID, (setter)PyCThostFtdcInvestorTradingRightField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorTradingRightField_get_InvestorID, (setter)PyCThostFtdcInvestorTradingRightField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易权限 
    {(char *)"InvstTradingRight", (getter)PyCThostFtdcInvestorTradingRightField_get_InvstTradingRight, (setter)PyCThostFtdcInvestorTradingRightField_set_InvstTradingRight, (char *)"InvstTradingRight", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorTradingRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorTradingRightField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorTradingRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorTradingRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorTradingRightField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorTradingRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorTradingRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorTradingRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorTradingRightField_new,       /* tp_new */
};

int PyCThostFtdcInvestorTradingRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorTradingRightField  */
	if (PyType_Ready(&PyCThostFtdcInvestorTradingRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorTradingRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorTradingRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorTradingRightField", (PyObject *)&PyCThostFtdcInvestorTradingRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorTradingRightField to module");
        Py_DECREF(&PyCThostFtdcInvestorTradingRightFieldType);
		return -1;
    }

    return 0;
}
