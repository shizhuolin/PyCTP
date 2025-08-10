
#include "PyCThostFtdcSettlementRefField.h"

///结算引用

static PyObject *PyCThostFtdcSettlementRefField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSettlementRefField *self = (PyCThostFtdcSettlementRefField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSettlementRefField_init(PyCThostFtdcSettlementRefField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "SettlementID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SettlementRefField_TradingDay = NULL;
    Py_ssize_t SettlementRefField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SettlementRefField_SettlementID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#i", (char **)kwlist
#endif

        , &SettlementRefField_TradingDay, &SettlementRefField_TradingDay_len 
        , &SettlementRefField_SettlementID 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SettlementRefField_TradingDay != NULL ) {
        if(SettlementRefField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SettlementRefField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SettlementRefField_TradingDay, SettlementRefField_TradingDay_len);        
        strncpy(self->data.TradingDay, SettlementRefField_TradingDay, sizeof(self->data.TradingDay) );
        SettlementRefField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SettlementRefField_SettlementID;
        

    return 0;
}

static void PyCThostFtdcSettlementRefField_dealloc(PyCThostFtdcSettlementRefField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSettlementRefField_repr(PyCThostFtdcSettlementRefField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"SettlementID", self->data.SettlementID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementRefField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSettlementRefField_get_TradingDay(PyCThostFtdcSettlementRefField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSettlementRefField_set_TradingDay(PyCThostFtdcSettlementRefField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcSettlementRefField_get_SettlementID(PyCThostFtdcSettlementRefField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSettlementRefField_set_SettlementID(PyCThostFtdcSettlementRefField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SettlementID value out of range for C int");
        return -1;
    }
    self->data.SettlementID = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSettlementRefField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSettlementRefField_get_TradingDay, (setter)PyCThostFtdcSettlementRefField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSettlementRefField_get_SettlementID, (setter)PyCThostFtdcSettlementRefField_set_SettlementID, (char *)"SettlementID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSettlementRefFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSettlementRefField",	/* tp_name */
	sizeof(PyCThostFtdcSettlementRefField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSettlementRefField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSettlementRefField_repr,   /* tp_repr */
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
	"CThostFtdcSettlementRefField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSettlementRefField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSettlementRefField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSettlementRefField_new,       /* tp_new */
};

int PyCThostFtdcSettlementRefFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSettlementRefField  */
	if (PyType_Ready(&PyCThostFtdcSettlementRefFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSettlementRefField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSettlementRefFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSettlementRefField", (PyObject *)&PyCThostFtdcSettlementRefFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementRefField to module");
        Py_DECREF(&PyCThostFtdcSettlementRefFieldType);
		return -1;
    }

    return 0;
}
