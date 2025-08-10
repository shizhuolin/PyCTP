
#include "PyCThostFtdcDiscountField.h"

///会员资金折扣

static PyObject *PyCThostFtdcDiscountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDiscountField *self = (PyCThostFtdcDiscountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcDiscountField_init(PyCThostFtdcDiscountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorRange", "InvestorID", "Discount",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *DiscountField_BrokerID = NULL;
    Py_ssize_t DiscountField_BrokerID_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char DiscountField_InvestorRange = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *DiscountField_InvestorID = NULL;
    Py_ssize_t DiscountField_InvestorID_len = 0;
            
    ///资金折扣比例
    // TThostFtdcRatioType double
    double DiscountField_Discount = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#d", (char **)kwlist
#endif

        , &DiscountField_BrokerID, &DiscountField_BrokerID_len 
        , &DiscountField_InvestorRange 
        , &DiscountField_InvestorID, &DiscountField_InvestorID_len 
        , &DiscountField_Discount 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( DiscountField_BrokerID != NULL ) {
        if(DiscountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", DiscountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, DiscountField_BrokerID, DiscountField_BrokerID_len);        
        strncpy(self->data.BrokerID, DiscountField_BrokerID, sizeof(self->data.BrokerID) );
        DiscountField_BrokerID = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = DiscountField_InvestorRange;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( DiscountField_InvestorID != NULL ) {
        if(DiscountField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", DiscountField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, DiscountField_InvestorID, DiscountField_InvestorID_len);        
        strncpy(self->data.InvestorID, DiscountField_InvestorID, sizeof(self->data.InvestorID) );
        DiscountField_InvestorID = NULL;
    }
            
    ///资金折扣比例
    // TThostFtdcRatioType double
    self->data.Discount = DiscountField_Discount;
        

    return 0;
}

static void PyCThostFtdcDiscountField_dealloc(PyCThostFtdcDiscountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDiscountField_repr(PyCThostFtdcDiscountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:d}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"Discount", self->data.Discount 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDiscountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcDiscountField_get_BrokerID(PyCThostFtdcDiscountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcDiscountField_set_BrokerID(PyCThostFtdcDiscountField *self, PyObject* val, void *closure) {
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
            
///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcDiscountField_get_InvestorRange(PyCThostFtdcDiscountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcDiscountField_set_InvestorRange(PyCThostFtdcDiscountField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDiscountField_get_InvestorID(PyCThostFtdcDiscountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcDiscountField_set_InvestorID(PyCThostFtdcDiscountField *self, PyObject* val, void *closure) {
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
            
///资金折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcDiscountField_get_Discount(PyCThostFtdcDiscountField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Discount);
}

///资金折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcDiscountField_set_Discount(PyCThostFtdcDiscountField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Discount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Discount = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcDiscountField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcDiscountField_get_BrokerID, (setter)PyCThostFtdcDiscountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcDiscountField_get_InvestorRange, (setter)PyCThostFtdcDiscountField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcDiscountField_get_InvestorID, (setter)PyCThostFtdcDiscountField_set_InvestorID, (char *)"InvestorID", NULL},
    ///资金折扣比例 
    {(char *)"Discount", (getter)PyCThostFtdcDiscountField_get_Discount, (setter)PyCThostFtdcDiscountField_set_Discount, (char *)"Discount", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDiscountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDiscountField",	/* tp_name */
	sizeof(PyCThostFtdcDiscountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDiscountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDiscountField_repr,   /* tp_repr */
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
	"CThostFtdcDiscountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDiscountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDiscountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDiscountField_new,       /* tp_new */
};

int PyCThostFtdcDiscountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDiscountField  */
	if (PyType_Ready(&PyCThostFtdcDiscountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDiscountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDiscountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDiscountField", (PyObject *)&PyCThostFtdcDiscountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDiscountField to module");
        Py_DECREF(&PyCThostFtdcDiscountFieldType);
		return -1;
    }

    return 0;
}
