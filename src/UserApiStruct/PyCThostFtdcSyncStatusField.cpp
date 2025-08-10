
#include "PyCThostFtdcSyncStatusField.h"

///数据同步状态

static PyObject *PyCThostFtdcSyncStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncStatusField *self = (PyCThostFtdcSyncStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncStatusField_init(PyCThostFtdcSyncStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "DataSyncStatus",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncStatusField_TradingDay = NULL;
    Py_ssize_t SyncStatusField_TradingDay_len = 0;
            
    ///数据同步状态
    // TThostFtdcDataSyncStatusType char
    char SyncStatusField_DataSyncStatus = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#c", (char **)kwlist
#endif

        , &SyncStatusField_TradingDay, &SyncStatusField_TradingDay_len 
        , &SyncStatusField_DataSyncStatus 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncStatusField_TradingDay != NULL ) {
        if(SyncStatusField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncStatusField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncStatusField_TradingDay, SyncStatusField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncStatusField_TradingDay, sizeof(self->data.TradingDay) );
        SyncStatusField_TradingDay = NULL;
    }
            
    ///数据同步状态
    // TThostFtdcDataSyncStatusType char
    self->data.DataSyncStatus = SyncStatusField_DataSyncStatus;
            

    return 0;
}

static void PyCThostFtdcSyncStatusField_dealloc(PyCThostFtdcSyncStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncStatusField_repr(PyCThostFtdcSyncStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"DataSyncStatus", self->data.DataSyncStatus 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncStatusField_get_TradingDay(PyCThostFtdcSyncStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncStatusField_set_TradingDay(PyCThostFtdcSyncStatusField *self, PyObject* val, void *closure) {
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
            
///数据同步状态
// TThostFtdcDataSyncStatusType char
static PyObject *PyCThostFtdcSyncStatusField_get_DataSyncStatus(PyCThostFtdcSyncStatusField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.DataSyncStatus), 1);
}

///数据同步状态
// TThostFtdcDataSyncStatusType char
static int PyCThostFtdcSyncStatusField_set_DataSyncStatus(PyCThostFtdcSyncStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DataSyncStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DataSyncStatus)) {
        PyErr_SetString(PyExc_ValueError, "DataSyncStatus must be equal 1 bytes");
        return -1;
    }
    self->data.DataSyncStatus = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSyncStatusField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncStatusField_get_TradingDay, (setter)PyCThostFtdcSyncStatusField_set_TradingDay, (char *)"TradingDay", NULL},
    ///数据同步状态 
    {(char *)"DataSyncStatus", (getter)PyCThostFtdcSyncStatusField_get_DataSyncStatus, (setter)PyCThostFtdcSyncStatusField_set_DataSyncStatus, (char *)"DataSyncStatus", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncStatusField",	/* tp_name */
	sizeof(PyCThostFtdcSyncStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncStatusField_repr,   /* tp_repr */
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
	"CThostFtdcSyncStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncStatusField_new,       /* tp_new */
};

int PyCThostFtdcSyncStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncStatusField  */
	if (PyType_Ready(&PyCThostFtdcSyncStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncStatusField", (PyObject *)&PyCThostFtdcSyncStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncStatusField to module");
        Py_DECREF(&PyCThostFtdcSyncStatusFieldType);
		return -1;
    }

    return 0;
}
