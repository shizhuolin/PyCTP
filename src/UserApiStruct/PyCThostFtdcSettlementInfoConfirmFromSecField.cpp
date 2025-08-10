
#include "PyCThostFtdcSettlementInfoConfirmFromSecField.h"

///来自次席的结算结果确认

static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSettlementInfoConfirmFromSecField *self = (PyCThostFtdcSettlementInfoConfirmFromSecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSettlementInfoConfirmFromSecField_init(PyCThostFtdcSettlementInfoConfirmFromSecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ConfirmDate", "ConfirmTime", "FromSec",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SettlementInfoConfirmFromSecField_BrokerID = NULL;
    Py_ssize_t SettlementInfoConfirmFromSecField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SettlementInfoConfirmFromSecField_InvestorID = NULL;
    Py_ssize_t SettlementInfoConfirmFromSecField_InvestorID_len = 0;
            
    ///确认日期
    // TThostFtdcDateType char[9]
    const char *SettlementInfoConfirmFromSecField_ConfirmDate = NULL;
    Py_ssize_t SettlementInfoConfirmFromSecField_ConfirmDate_len = 0;
            
    ///确认时间
    // TThostFtdcTimeType char[9]
    const char *SettlementInfoConfirmFromSecField_ConfirmTime = NULL;
    Py_ssize_t SettlementInfoConfirmFromSecField_ConfirmTime_len = 0;
            
    ///次席的交易中心代码
    // TThostFtdcDRIdentityIDType int
    int SettlementInfoConfirmFromSecField_FromSec = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#i", (char **)kwlist
#endif

        , &SettlementInfoConfirmFromSecField_BrokerID, &SettlementInfoConfirmFromSecField_BrokerID_len 
        , &SettlementInfoConfirmFromSecField_InvestorID, &SettlementInfoConfirmFromSecField_InvestorID_len 
        , &SettlementInfoConfirmFromSecField_ConfirmDate, &SettlementInfoConfirmFromSecField_ConfirmDate_len 
        , &SettlementInfoConfirmFromSecField_ConfirmTime, &SettlementInfoConfirmFromSecField_ConfirmTime_len 
        , &SettlementInfoConfirmFromSecField_FromSec 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SettlementInfoConfirmFromSecField_BrokerID != NULL ) {
        if(SettlementInfoConfirmFromSecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmFromSecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SettlementInfoConfirmFromSecField_BrokerID, SettlementInfoConfirmFromSecField_BrokerID_len);        
        strncpy(self->data.BrokerID, SettlementInfoConfirmFromSecField_BrokerID, sizeof(self->data.BrokerID) );
        SettlementInfoConfirmFromSecField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SettlementInfoConfirmFromSecField_InvestorID != NULL ) {
        if(SettlementInfoConfirmFromSecField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmFromSecField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SettlementInfoConfirmFromSecField_InvestorID, SettlementInfoConfirmFromSecField_InvestorID_len);        
        strncpy(self->data.InvestorID, SettlementInfoConfirmFromSecField_InvestorID, sizeof(self->data.InvestorID) );
        SettlementInfoConfirmFromSecField_InvestorID = NULL;
    }
            
    ///确认日期
    // TThostFtdcDateType char[9]
    if( SettlementInfoConfirmFromSecField_ConfirmDate != NULL ) {
        if(SettlementInfoConfirmFromSecField_ConfirmDate_len > (Py_ssize_t)sizeof(self->data.ConfirmDate)) {
            PyErr_Format(PyExc_ValueError, "ConfirmDate too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmFromSecField_ConfirmDate_len, (Py_ssize_t)sizeof(self->data.ConfirmDate));
            return -1;
        }
        // memset(self->data.ConfirmDate, 0, sizeof(self->data.ConfirmDate));
        // memcpy(self->data.ConfirmDate, SettlementInfoConfirmFromSecField_ConfirmDate, SettlementInfoConfirmFromSecField_ConfirmDate_len);        
        strncpy(self->data.ConfirmDate, SettlementInfoConfirmFromSecField_ConfirmDate, sizeof(self->data.ConfirmDate) );
        SettlementInfoConfirmFromSecField_ConfirmDate = NULL;
    }
            
    ///确认时间
    // TThostFtdcTimeType char[9]
    if( SettlementInfoConfirmFromSecField_ConfirmTime != NULL ) {
        if(SettlementInfoConfirmFromSecField_ConfirmTime_len > (Py_ssize_t)sizeof(self->data.ConfirmTime)) {
            PyErr_Format(PyExc_ValueError, "ConfirmTime too long: length=%zd (max allowed is %zd)", SettlementInfoConfirmFromSecField_ConfirmTime_len, (Py_ssize_t)sizeof(self->data.ConfirmTime));
            return -1;
        }
        // memset(self->data.ConfirmTime, 0, sizeof(self->data.ConfirmTime));
        // memcpy(self->data.ConfirmTime, SettlementInfoConfirmFromSecField_ConfirmTime, SettlementInfoConfirmFromSecField_ConfirmTime_len);        
        strncpy(self->data.ConfirmTime, SettlementInfoConfirmFromSecField_ConfirmTime, sizeof(self->data.ConfirmTime) );
        SettlementInfoConfirmFromSecField_ConfirmTime = NULL;
    }
            
    ///次席的交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.FromSec = SettlementInfoConfirmFromSecField_FromSec;
        

    return 0;
}

static void PyCThostFtdcSettlementInfoConfirmFromSecField_dealloc(PyCThostFtdcSettlementInfoConfirmFromSecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecField_repr(PyCThostFtdcSettlementInfoConfirmFromSecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ConfirmDate", self->data.ConfirmDate//, (Py_ssize_t)sizeof(self->data.ConfirmDate) 
        ,"ConfirmTime", self->data.ConfirmTime//, (Py_ssize_t)sizeof(self->data.ConfirmTime) 
        ,"FromSec", self->data.FromSec 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoConfirmFromSecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecField_get_BrokerID(PyCThostFtdcSettlementInfoConfirmFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSettlementInfoConfirmFromSecField_set_BrokerID(PyCThostFtdcSettlementInfoConfirmFromSecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecField_get_InvestorID(PyCThostFtdcSettlementInfoConfirmFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSettlementInfoConfirmFromSecField_set_InvestorID(PyCThostFtdcSettlementInfoConfirmFromSecField *self, PyObject* val, void *closure) {
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
            
///确认日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecField_get_ConfirmDate(PyCThostFtdcSettlementInfoConfirmFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConfirmDate, (Py_ssize_t)sizeof(self->data.ConfirmDate));
    return PyBytes_FromString(self->data.ConfirmDate);
}

///确认日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSettlementInfoConfirmFromSecField_set_ConfirmDate(PyCThostFtdcSettlementInfoConfirmFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ConfirmDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ConfirmDate)) {
        PyErr_SetString(PyExc_ValueError, "ConfirmDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ConfirmDate, 0, sizeof(self->data.ConfirmDate));
    // memcpy(self->data.ConfirmDate, buf, len);
    strncpy(self->data.ConfirmDate, buf, sizeof(self->data.ConfirmDate));
    return 0;
}
            
///确认时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecField_get_ConfirmTime(PyCThostFtdcSettlementInfoConfirmFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ConfirmTime, (Py_ssize_t)sizeof(self->data.ConfirmTime));
    return PyBytes_FromString(self->data.ConfirmTime);
}

///确认时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcSettlementInfoConfirmFromSecField_set_ConfirmTime(PyCThostFtdcSettlementInfoConfirmFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ConfirmTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ConfirmTime)) {
        PyErr_SetString(PyExc_ValueError, "ConfirmTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ConfirmTime, 0, sizeof(self->data.ConfirmTime));
    // memcpy(self->data.ConfirmTime, buf, len);
    strncpy(self->data.ConfirmTime, buf, sizeof(self->data.ConfirmTime));
    return 0;
}
            
///次席的交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcSettlementInfoConfirmFromSecField_get_FromSec(PyCThostFtdcSettlementInfoConfirmFromSecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FromSec);
#else
    return PyInt_FromLong(self->data.FromSec);
#endif
}

///次席的交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcSettlementInfoConfirmFromSecField_set_FromSec(PyCThostFtdcSettlementInfoConfirmFromSecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromSec Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromSec Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FromSec value out of range for C int");
        return -1;
    }
    self->data.FromSec = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSettlementInfoConfirmFromSecField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSettlementInfoConfirmFromSecField_get_BrokerID, (setter)PyCThostFtdcSettlementInfoConfirmFromSecField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSettlementInfoConfirmFromSecField_get_InvestorID, (setter)PyCThostFtdcSettlementInfoConfirmFromSecField_set_InvestorID, (char *)"InvestorID", NULL},
    ///确认日期 
    {(char *)"ConfirmDate", (getter)PyCThostFtdcSettlementInfoConfirmFromSecField_get_ConfirmDate, (setter)PyCThostFtdcSettlementInfoConfirmFromSecField_set_ConfirmDate, (char *)"ConfirmDate", NULL},
    ///确认时间 
    {(char *)"ConfirmTime", (getter)PyCThostFtdcSettlementInfoConfirmFromSecField_get_ConfirmTime, (setter)PyCThostFtdcSettlementInfoConfirmFromSecField_set_ConfirmTime, (char *)"ConfirmTime", NULL},
    ///次席的交易中心代码 
    {(char *)"FromSec", (getter)PyCThostFtdcSettlementInfoConfirmFromSecField_get_FromSec, (setter)PyCThostFtdcSettlementInfoConfirmFromSecField_set_FromSec, (char *)"FromSec", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSettlementInfoConfirmFromSecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSettlementInfoConfirmFromSecField",	/* tp_name */
	sizeof(PyCThostFtdcSettlementInfoConfirmFromSecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSettlementInfoConfirmFromSecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSettlementInfoConfirmFromSecField_repr,   /* tp_repr */
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
	"CThostFtdcSettlementInfoConfirmFromSecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSettlementInfoConfirmFromSecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSettlementInfoConfirmFromSecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSettlementInfoConfirmFromSecField_new,       /* tp_new */
};

int PyCThostFtdcSettlementInfoConfirmFromSecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSettlementInfoConfirmFromSecField  */
	if (PyType_Ready(&PyCThostFtdcSettlementInfoConfirmFromSecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSettlementInfoConfirmFromSecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSettlementInfoConfirmFromSecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSettlementInfoConfirmFromSecField", (PyObject *)&PyCThostFtdcSettlementInfoConfirmFromSecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementInfoConfirmFromSecField to module");
        Py_DECREF(&PyCThostFtdcSettlementInfoConfirmFromSecFieldType);
		return -1;
    }

    return 0;
}
