
#include "PyCThostFtdcTransferQryDetailReqField.h"

///查询银行交易明细请求，TradeCode=204999

static PyObject *PyCThostFtdcTransferQryDetailReqField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferQryDetailReqField *self = (PyCThostFtdcTransferQryDetailReqField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferQryDetailReqField_init(PyCThostFtdcTransferQryDetailReqField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FutureAccount",  NULL};


    ///期货资金账户
    // TThostFtdcAccountIDType char[13]
    const char *TransferQryDetailReqField_FutureAccount = NULL;
    Py_ssize_t TransferQryDetailReqField_FutureAccount_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &TransferQryDetailReqField_FutureAccount, &TransferQryDetailReqField_FutureAccount_len 


    )) {
        return -1;
    }


    ///期货资金账户
    // TThostFtdcAccountIDType char[13]
    if( TransferQryDetailReqField_FutureAccount != NULL ) {
        if(TransferQryDetailReqField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", TransferQryDetailReqField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
            return -1;
        }
        // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
        // memcpy(self->data.FutureAccount, TransferQryDetailReqField_FutureAccount, TransferQryDetailReqField_FutureAccount_len);        
        strncpy(self->data.FutureAccount, TransferQryDetailReqField_FutureAccount, sizeof(self->data.FutureAccount) );
        TransferQryDetailReqField_FutureAccount = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTransferQryDetailReqField_dealloc(PyCThostFtdcTransferQryDetailReqField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferQryDetailReqField_repr(PyCThostFtdcTransferQryDetailReqField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"FutureAccount", self->data.FutureAccount//, (Py_ssize_t)sizeof(self->data.FutureAccount) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryDetailReqField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///期货资金账户
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcTransferQryDetailReqField_get_FutureAccount(PyCThostFtdcTransferQryDetailReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccount, (Py_ssize_t)sizeof(self->data.FutureAccount));
    return PyBytes_FromString(self->data.FutureAccount);
}

///期货资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTransferQryDetailReqField_set_FutureAccount(PyCThostFtdcTransferQryDetailReqField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
    // memcpy(self->data.FutureAccount, buf, len);
    strncpy(self->data.FutureAccount, buf, sizeof(self->data.FutureAccount));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTransferQryDetailReqField_getset[] = {
    ///期货资金账户 
    {(char *)"FutureAccount", (getter)PyCThostFtdcTransferQryDetailReqField_get_FutureAccount, (setter)PyCThostFtdcTransferQryDetailReqField_set_FutureAccount, (char *)"FutureAccount", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferQryDetailReqFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferQryDetailReqField",	/* tp_name */
	sizeof(PyCThostFtdcTransferQryDetailReqField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferQryDetailReqField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferQryDetailReqField_repr,   /* tp_repr */
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
	"CThostFtdcTransferQryDetailReqField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferQryDetailReqField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferQryDetailReqField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferQryDetailReqField_new,       /* tp_new */
};

int PyCThostFtdcTransferQryDetailReqFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferQryDetailReqField  */
	if (PyType_Ready(&PyCThostFtdcTransferQryDetailReqFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferQryDetailReqField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferQryDetailReqFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferQryDetailReqField", (PyObject *)&PyCThostFtdcTransferQryDetailReqFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryDetailReqField to module");
        Py_DECREF(&PyCThostFtdcTransferQryDetailReqFieldType);
		return -1;
    }

    return 0;
}
