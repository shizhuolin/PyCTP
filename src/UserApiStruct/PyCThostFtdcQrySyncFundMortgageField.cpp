
#include "PyCThostFtdcQrySyncFundMortgageField.h"

///查询货币质押流水

static PyObject *PyCThostFtdcQrySyncFundMortgageField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySyncFundMortgageField *self = (PyCThostFtdcQrySyncFundMortgageField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySyncFundMortgageField_init(PyCThostFtdcQrySyncFundMortgageField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "MortgageSeqNo",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QrySyncFundMortgageField_BrokerID = NULL;
    Py_ssize_t QrySyncFundMortgageField_BrokerID_len = 0;
            
    ///货币质押流水号
    // TThostFtdcDepositSeqNoType char[15]
    const char *QrySyncFundMortgageField_MortgageSeqNo = NULL;
    Py_ssize_t QrySyncFundMortgageField_MortgageSeqNo_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QrySyncFundMortgageField_BrokerID, &QrySyncFundMortgageField_BrokerID_len 
        , &QrySyncFundMortgageField_MortgageSeqNo, &QrySyncFundMortgageField_MortgageSeqNo_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QrySyncFundMortgageField_BrokerID != NULL ) {
        if(QrySyncFundMortgageField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QrySyncFundMortgageField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QrySyncFundMortgageField_BrokerID, QrySyncFundMortgageField_BrokerID_len);        
        strncpy(self->data.BrokerID, QrySyncFundMortgageField_BrokerID, sizeof(self->data.BrokerID) );
        QrySyncFundMortgageField_BrokerID = NULL;
    }
            
    ///货币质押流水号
    // TThostFtdcDepositSeqNoType char[15]
    if( QrySyncFundMortgageField_MortgageSeqNo != NULL ) {
        if(QrySyncFundMortgageField_MortgageSeqNo_len > (Py_ssize_t)sizeof(self->data.MortgageSeqNo)) {
            PyErr_Format(PyExc_ValueError, "MortgageSeqNo too long: length=%zd (max allowed is %zd)", QrySyncFundMortgageField_MortgageSeqNo_len, (Py_ssize_t)sizeof(self->data.MortgageSeqNo));
            return -1;
        }
        // memset(self->data.MortgageSeqNo, 0, sizeof(self->data.MortgageSeqNo));
        // memcpy(self->data.MortgageSeqNo, QrySyncFundMortgageField_MortgageSeqNo, QrySyncFundMortgageField_MortgageSeqNo_len);        
        strncpy(self->data.MortgageSeqNo, QrySyncFundMortgageField_MortgageSeqNo, sizeof(self->data.MortgageSeqNo) );
        QrySyncFundMortgageField_MortgageSeqNo = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySyncFundMortgageField_dealloc(PyCThostFtdcQrySyncFundMortgageField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySyncFundMortgageField_repr(PyCThostFtdcQrySyncFundMortgageField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"MortgageSeqNo", self->data.MortgageSeqNo//, (Py_ssize_t)sizeof(self->data.MortgageSeqNo) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncFundMortgageField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQrySyncFundMortgageField_get_BrokerID(PyCThostFtdcQrySyncFundMortgageField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQrySyncFundMortgageField_set_BrokerID(PyCThostFtdcQrySyncFundMortgageField *self, PyObject* val, void *closure) {
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
            
///货币质押流水号
// TThostFtdcDepositSeqNoType char[15]
static PyObject *PyCThostFtdcQrySyncFundMortgageField_get_MortgageSeqNo(PyCThostFtdcQrySyncFundMortgageField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MortgageSeqNo, (Py_ssize_t)sizeof(self->data.MortgageSeqNo));
    return PyBytes_FromString(self->data.MortgageSeqNo);
}

///货币质押流水号
// TThostFtdcDepositSeqNoType char[15]
static int PyCThostFtdcQrySyncFundMortgageField_set_MortgageSeqNo(PyCThostFtdcQrySyncFundMortgageField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MortgageSeqNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MortgageSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "MortgageSeqNo must be less than 15 bytes");
        return -1;
    }
    // memset(self->data.MortgageSeqNo, 0, sizeof(self->data.MortgageSeqNo));
    // memcpy(self->data.MortgageSeqNo, buf, len);
    strncpy(self->data.MortgageSeqNo, buf, sizeof(self->data.MortgageSeqNo));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQrySyncFundMortgageField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQrySyncFundMortgageField_get_BrokerID, (setter)PyCThostFtdcQrySyncFundMortgageField_set_BrokerID, (char *)"BrokerID", NULL},
    ///货币质押流水号 
    {(char *)"MortgageSeqNo", (getter)PyCThostFtdcQrySyncFundMortgageField_get_MortgageSeqNo, (setter)PyCThostFtdcQrySyncFundMortgageField_set_MortgageSeqNo, (char *)"MortgageSeqNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySyncFundMortgageFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySyncFundMortgageField",	/* tp_name */
	sizeof(PyCThostFtdcQrySyncFundMortgageField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySyncFundMortgageField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySyncFundMortgageField_repr,   /* tp_repr */
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
	"CThostFtdcQrySyncFundMortgageField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySyncFundMortgageField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySyncFundMortgageField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySyncFundMortgageField_new,       /* tp_new */
};

int PyCThostFtdcQrySyncFundMortgageFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySyncFundMortgageField  */
	if (PyType_Ready(&PyCThostFtdcQrySyncFundMortgageFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySyncFundMortgageField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySyncFundMortgageFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySyncFundMortgageField", (PyObject *)&PyCThostFtdcQrySyncFundMortgageFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySyncFundMortgageField to module");
        Py_DECREF(&PyCThostFtdcQrySyncFundMortgageFieldType);
		return -1;
    }

    return 0;
}
