
#include "PyCThostFtdcExitEmergencyField.h"

///退出紧急状态参数

static PyObject *PyCThostFtdcExitEmergencyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExitEmergencyField *self = (PyCThostFtdcExitEmergencyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExitEmergencyField_init(PyCThostFtdcExitEmergencyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ExitEmergencyField_BrokerID = NULL;
    Py_ssize_t ExitEmergencyField_BrokerID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &ExitEmergencyField_BrokerID, &ExitEmergencyField_BrokerID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ExitEmergencyField_BrokerID != NULL ) {
        if(ExitEmergencyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ExitEmergencyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ExitEmergencyField_BrokerID, ExitEmergencyField_BrokerID_len);        
        strncpy(self->data.BrokerID, ExitEmergencyField_BrokerID, sizeof(self->data.BrokerID) );
        ExitEmergencyField_BrokerID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExitEmergencyField_dealloc(PyCThostFtdcExitEmergencyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExitEmergencyField_repr(PyCThostFtdcExitEmergencyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExitEmergencyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcExitEmergencyField_get_BrokerID(PyCThostFtdcExitEmergencyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcExitEmergencyField_set_BrokerID(PyCThostFtdcExitEmergencyField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExitEmergencyField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcExitEmergencyField_get_BrokerID, (setter)PyCThostFtdcExitEmergencyField_set_BrokerID, (char *)"BrokerID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExitEmergencyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExitEmergencyField",	/* tp_name */
	sizeof(PyCThostFtdcExitEmergencyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExitEmergencyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExitEmergencyField_repr,   /* tp_repr */
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
	"CThostFtdcExitEmergencyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExitEmergencyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExitEmergencyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExitEmergencyField_new,       /* tp_new */
};

int PyCThostFtdcExitEmergencyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExitEmergencyField  */
	if (PyType_Ready(&PyCThostFtdcExitEmergencyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExitEmergencyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExitEmergencyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExitEmergencyField", (PyObject *)&PyCThostFtdcExitEmergencyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExitEmergencyField to module");
        Py_DECREF(&PyCThostFtdcExitEmergencyFieldType);
		return -1;
    }

    return 0;
}
