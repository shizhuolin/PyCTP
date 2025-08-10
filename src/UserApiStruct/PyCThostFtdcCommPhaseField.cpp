
#include "PyCThostFtdcCommPhaseField.h"

///通讯阶段

static PyObject *PyCThostFtdcCommPhaseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCommPhaseField *self = (PyCThostFtdcCommPhaseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCommPhaseField_init(PyCThostFtdcCommPhaseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "CommPhaseNo", "SystemID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *CommPhaseField_TradingDay = NULL;
    Py_ssize_t CommPhaseField_TradingDay_len = 0;
            
    ///通讯时段编号
    // TThostFtdcCommPhaseNoType short
    short CommPhaseField_CommPhaseNo = 0;
        
    ///系统编号
    // TThostFtdcSystemIDType char[21]
    const char *CommPhaseField_SystemID = NULL;
    Py_ssize_t CommPhaseField_SystemID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#hy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#hs#", (char **)kwlist
#endif

        , &CommPhaseField_TradingDay, &CommPhaseField_TradingDay_len 
        , &CommPhaseField_CommPhaseNo 
        , &CommPhaseField_SystemID, &CommPhaseField_SystemID_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( CommPhaseField_TradingDay != NULL ) {
        if(CommPhaseField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", CommPhaseField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, CommPhaseField_TradingDay, CommPhaseField_TradingDay_len);        
        strncpy(self->data.TradingDay, CommPhaseField_TradingDay, sizeof(self->data.TradingDay) );
        CommPhaseField_TradingDay = NULL;
    }
            
    ///通讯时段编号
    // TThostFtdcCommPhaseNoType short
    self->data.CommPhaseNo = CommPhaseField_CommPhaseNo;
        
    ///系统编号
    // TThostFtdcSystemIDType char[21]
    if( CommPhaseField_SystemID != NULL ) {
        if(CommPhaseField_SystemID_len > (Py_ssize_t)sizeof(self->data.SystemID)) {
            PyErr_Format(PyExc_ValueError, "SystemID too long: length=%zd (max allowed is %zd)", CommPhaseField_SystemID_len, (Py_ssize_t)sizeof(self->data.SystemID));
            return -1;
        }
        // memset(self->data.SystemID, 0, sizeof(self->data.SystemID));
        // memcpy(self->data.SystemID, CommPhaseField_SystemID, CommPhaseField_SystemID_len);        
        strncpy(self->data.SystemID, CommPhaseField_SystemID, sizeof(self->data.SystemID) );
        CommPhaseField_SystemID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcCommPhaseField_dealloc(PyCThostFtdcCommPhaseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCommPhaseField_repr(PyCThostFtdcCommPhaseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:h,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:h,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"CommPhaseNo", self->data.CommPhaseNo 
        ,"SystemID", self->data.SystemID//, (Py_ssize_t)sizeof(self->data.SystemID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCommPhaseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcCommPhaseField_get_TradingDay(PyCThostFtdcCommPhaseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcCommPhaseField_set_TradingDay(PyCThostFtdcCommPhaseField *self, PyObject* val, void *closure) {
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
            
///通讯时段编号
// TThostFtdcCommPhaseNoType short
static PyObject *PyCThostFtdcCommPhaseField_get_CommPhaseNo(PyCThostFtdcCommPhaseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CommPhaseNo);
#else
    return PyInt_FromLong(self->data.CommPhaseNo);
#endif
}

///通讯时段编号
// TThostFtdcCommPhaseNoType short
static int PyCThostFtdcCommPhaseField_set_CommPhaseNo(PyCThostFtdcCommPhaseField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommPhaseNo Expected short");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommPhaseNo Expected short");
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
    if (buf < SHRT_MIN || buf > SHRT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the CommPhaseNo value out of range for C short");
        return -1;
    }
    self->data.CommPhaseNo = (short)buf;
    return 0;
}
        
///系统编号
// TThostFtdcSystemIDType char[21]
static PyObject *PyCThostFtdcCommPhaseField_get_SystemID(PyCThostFtdcCommPhaseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SystemID, (Py_ssize_t)sizeof(self->data.SystemID));
    return PyBytes_FromString(self->data.SystemID);
}

///系统编号
// TThostFtdcSystemIDType char[21]
static int PyCThostFtdcCommPhaseField_set_SystemID(PyCThostFtdcCommPhaseField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SystemID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SystemID)) {
        PyErr_SetString(PyExc_ValueError, "SystemID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.SystemID, 0, sizeof(self->data.SystemID));
    // memcpy(self->data.SystemID, buf, len);
    strncpy(self->data.SystemID, buf, sizeof(self->data.SystemID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcCommPhaseField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcCommPhaseField_get_TradingDay, (setter)PyCThostFtdcCommPhaseField_set_TradingDay, (char *)"TradingDay", NULL},
    ///通讯时段编号 
    {(char *)"CommPhaseNo", (getter)PyCThostFtdcCommPhaseField_get_CommPhaseNo, (setter)PyCThostFtdcCommPhaseField_set_CommPhaseNo, (char *)"CommPhaseNo", NULL},
    ///系统编号 
    {(char *)"SystemID", (getter)PyCThostFtdcCommPhaseField_get_SystemID, (setter)PyCThostFtdcCommPhaseField_set_SystemID, (char *)"SystemID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCommPhaseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCommPhaseField",	/* tp_name */
	sizeof(PyCThostFtdcCommPhaseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCommPhaseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCommPhaseField_repr,   /* tp_repr */
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
	"CThostFtdcCommPhaseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCommPhaseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCommPhaseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCommPhaseField_new,       /* tp_new */
};

int PyCThostFtdcCommPhaseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCommPhaseField  */
	if (PyType_Ready(&PyCThostFtdcCommPhaseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCommPhaseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCommPhaseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCommPhaseField", (PyObject *)&PyCThostFtdcCommPhaseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCommPhaseField to module");
        Py_DECREF(&PyCThostFtdcCommPhaseFieldType);
		return -1;
    }

    return 0;
}
