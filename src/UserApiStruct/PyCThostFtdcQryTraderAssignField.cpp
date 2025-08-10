
#include "PyCThostFtdcQryTraderAssignField.h"

///席位与交易中心对应关系维护查询

static PyObject *PyCThostFtdcQryTraderAssignField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTraderAssignField *self = (PyCThostFtdcQryTraderAssignField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryTraderAssignField_init(PyCThostFtdcQryTraderAssignField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TraderID",  NULL};


    ///交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QryTraderAssignField_TraderID = NULL;
    Py_ssize_t QryTraderAssignField_TraderID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QryTraderAssignField_TraderID, &QryTraderAssignField_TraderID_len 


    )) {
        return -1;
    }


    ///交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QryTraderAssignField_TraderID != NULL ) {
        if(QryTraderAssignField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QryTraderAssignField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QryTraderAssignField_TraderID, QryTraderAssignField_TraderID_len);        
        strncpy(self->data.TraderID, QryTraderAssignField_TraderID, sizeof(self->data.TraderID) );
        QryTraderAssignField_TraderID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryTraderAssignField_dealloc(PyCThostFtdcQryTraderAssignField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTraderAssignField_repr(PyCThostFtdcQryTraderAssignField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTraderAssignField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcQryTraderAssignField_get_TraderID(PyCThostFtdcQryTraderAssignField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQryTraderAssignField_set_TraderID(PyCThostFtdcQryTraderAssignField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
    // memcpy(self->data.TraderID, buf, len);
    strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryTraderAssignField_getset[] = {
    ///交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQryTraderAssignField_get_TraderID, (setter)PyCThostFtdcQryTraderAssignField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTraderAssignFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTraderAssignField",	/* tp_name */
	sizeof(PyCThostFtdcQryTraderAssignField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTraderAssignField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTraderAssignField_repr,   /* tp_repr */
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
	"CThostFtdcQryTraderAssignField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTraderAssignField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTraderAssignField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTraderAssignField_new,       /* tp_new */
};

int PyCThostFtdcQryTraderAssignFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTraderAssignField  */
	if (PyType_Ready(&PyCThostFtdcQryTraderAssignFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTraderAssignField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTraderAssignFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTraderAssignField", (PyObject *)&PyCThostFtdcQryTraderAssignFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTraderAssignField to module");
        Py_DECREF(&PyCThostFtdcQryTraderAssignFieldType);
		return -1;
    }

    return 0;
}
