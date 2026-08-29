
#include "PyCThostFtdcInvestorReserveInfoField.h"

///投资者预留信息

static PyObject *PyCThostFtdcInvestorReserveInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorReserveInfoField *self = (PyCThostFtdcInvestorReserveInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorReserveInfoField_init(PyCThostFtdcInvestorReserveInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "ReserveInfo",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorReserveInfoField_BrokerID = NULL;
    Py_ssize_t InvestorReserveInfoField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *InvestorReserveInfoField_UserID = NULL;
    Py_ssize_t InvestorReserveInfoField_UserID_len = 0;
            
    ///预留信息
    // TThostFtdcReserveInfoType char[65]
    const char *InvestorReserveInfoField_ReserveInfo = NULL;
    Py_ssize_t InvestorReserveInfoField_ReserveInfo_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &InvestorReserveInfoField_BrokerID, &InvestorReserveInfoField_BrokerID_len 
        , &InvestorReserveInfoField_UserID, &InvestorReserveInfoField_UserID_len 
        , &InvestorReserveInfoField_ReserveInfo, &InvestorReserveInfoField_ReserveInfo_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorReserveInfoField_BrokerID != NULL ) {
        if(InvestorReserveInfoField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorReserveInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorReserveInfoField_BrokerID, InvestorReserveInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorReserveInfoField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorReserveInfoField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( InvestorReserveInfoField_UserID != NULL ) {
        if(InvestorReserveInfoField_UserID_len >= (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", InvestorReserveInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, InvestorReserveInfoField_UserID, InvestorReserveInfoField_UserID_len);        
        strncpy(self->data.UserID, InvestorReserveInfoField_UserID, sizeof(self->data.UserID) );
        InvestorReserveInfoField_UserID = NULL;
    }
            
    ///预留信息
    // TThostFtdcReserveInfoType char[65]
    if( InvestorReserveInfoField_ReserveInfo != NULL ) {
        if(InvestorReserveInfoField_ReserveInfo_len >= (Py_ssize_t)sizeof(self->data.ReserveInfo)) {
            PyErr_Format(PyExc_ValueError, "ReserveInfo too long: length=%zd (max allowed is %zd)", InvestorReserveInfoField_ReserveInfo_len, (Py_ssize_t)sizeof(self->data.ReserveInfo));
            return -1;
        }
        // memset(self->data.ReserveInfo, 0, sizeof(self->data.ReserveInfo));
        // memcpy(self->data.ReserveInfo, InvestorReserveInfoField_ReserveInfo, InvestorReserveInfoField_ReserveInfo_len);        
        strncpy(self->data.ReserveInfo, InvestorReserveInfoField_ReserveInfo, sizeof(self->data.ReserveInfo) );
        InvestorReserveInfoField_ReserveInfo = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInvestorReserveInfoField_dealloc(PyCThostFtdcInvestorReserveInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorReserveInfoField_repr(PyCThostFtdcInvestorReserveInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ReserveInfo", self->data.ReserveInfo//, (Py_ssize_t)sizeof(self->data.ReserveInfo) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorReserveInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorReserveInfoField_get_BrokerID(PyCThostFtdcInvestorReserveInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorReserveInfoField_set_BrokerID(PyCThostFtdcInvestorReserveInfoField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcInvestorReserveInfoField_get_UserID(PyCThostFtdcInvestorReserveInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcInvestorReserveInfoField_set_UserID(PyCThostFtdcInvestorReserveInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///预留信息
// TThostFtdcReserveInfoType char[65]
static PyObject *PyCThostFtdcInvestorReserveInfoField_get_ReserveInfo(PyCThostFtdcInvestorReserveInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ReserveInfo, (Py_ssize_t)sizeof(self->data.ReserveInfo));
    return PyBytes_FromString(self->data.ReserveInfo);
}

///预留信息
// TThostFtdcReserveInfoType char[65]
static int PyCThostFtdcInvestorReserveInfoField_set_ReserveInfo(PyCThostFtdcInvestorReserveInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReserveInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ReserveInfo)) {
        PyErr_SetString(PyExc_ValueError, "ReserveInfo must be less than 65 bytes");
        return -1;
    }
    // memset(self->data.ReserveInfo, 0, sizeof(self->data.ReserveInfo));
    // memcpy(self->data.ReserveInfo, buf, len);
    strncpy(self->data.ReserveInfo, buf, sizeof(self->data.ReserveInfo));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcInvestorReserveInfoField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorReserveInfoField_get_BrokerID, (setter)PyCThostFtdcInvestorReserveInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcInvestorReserveInfoField_get_UserID, (setter)PyCThostFtdcInvestorReserveInfoField_set_UserID, (char *)"UserID", NULL},
    ///预留信息 
    {(char *)"ReserveInfo", (getter)PyCThostFtdcInvestorReserveInfoField_get_ReserveInfo, (setter)PyCThostFtdcInvestorReserveInfoField_set_ReserveInfo, (char *)"ReserveInfo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorReserveInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorReserveInfoField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorReserveInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorReserveInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorReserveInfoField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorReserveInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorReserveInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorReserveInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorReserveInfoField_new,       /* tp_new */
};

int PyCThostFtdcInvestorReserveInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorReserveInfoField  */
	if (PyType_Ready(&PyCThostFtdcInvestorReserveInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorReserveInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorReserveInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorReserveInfoField", (PyObject *)&PyCThostFtdcInvestorReserveInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorReserveInfoField to module");
        Py_DECREF(&PyCThostFtdcInvestorReserveInfoFieldType);
		return -1;
    }

    return 0;
}
