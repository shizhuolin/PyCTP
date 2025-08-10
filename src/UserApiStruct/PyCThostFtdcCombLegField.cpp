
#include "PyCThostFtdcCombLegField.h"

///组合腿信息

static PyObject *PyCThostFtdcCombLegField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCombLegField *self = (PyCThostFtdcCombLegField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCombLegField_init(PyCThostFtdcCombLegField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CombInstrumentID", "LegID", "LegInstrumentID", "Direction", "LegMultiple", "ImplyLevel",  NULL};


    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *CombLegField_CombInstrumentID = NULL;
    Py_ssize_t CombLegField_CombInstrumentID_len = 0;
            
    ///单腿编号
    // TThostFtdcLegIDType int
    int CombLegField_LegID = 0;
        
    ///单腿合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *CombLegField_LegInstrumentID = NULL;
    Py_ssize_t CombLegField_LegInstrumentID_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char CombLegField_Direction = 0;
            
    ///单腿乘数
    // TThostFtdcLegMultipleType int
    int CombLegField_LegMultiple = 0;
        
    ///派生层数
    // TThostFtdcImplyLevelType int
    int CombLegField_ImplyLevel = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#cii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#cii", (char **)kwlist
#endif

        , &CombLegField_CombInstrumentID, &CombLegField_CombInstrumentID_len 
        , &CombLegField_LegID 
        , &CombLegField_LegInstrumentID, &CombLegField_LegInstrumentID_len 
        , &CombLegField_Direction 
        , &CombLegField_LegMultiple 
        , &CombLegField_ImplyLevel 


    )) {
        return -1;
    }


    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( CombLegField_CombInstrumentID != NULL ) {
        if(CombLegField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", CombLegField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, CombLegField_CombInstrumentID, CombLegField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, CombLegField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        CombLegField_CombInstrumentID = NULL;
    }
            
    ///单腿编号
    // TThostFtdcLegIDType int
    self->data.LegID = CombLegField_LegID;
        
    ///单腿合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( CombLegField_LegInstrumentID != NULL ) {
        if(CombLegField_LegInstrumentID_len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is %zd)", CombLegField_LegInstrumentID_len, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
            return -1;
        }
        // memset(self->data.LegInstrumentID, 0, sizeof(self->data.LegInstrumentID));
        // memcpy(self->data.LegInstrumentID, CombLegField_LegInstrumentID, CombLegField_LegInstrumentID_len);        
        strncpy(self->data.LegInstrumentID, CombLegField_LegInstrumentID, sizeof(self->data.LegInstrumentID) );
        CombLegField_LegInstrumentID = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = CombLegField_Direction;
            
    ///单腿乘数
    // TThostFtdcLegMultipleType int
    self->data.LegMultiple = CombLegField_LegMultiple;
        
    ///派生层数
    // TThostFtdcImplyLevelType int
    self->data.ImplyLevel = CombLegField_ImplyLevel;
        

    return 0;
}

static void PyCThostFtdcCombLegField_dealloc(PyCThostFtdcCombLegField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCombLegField_repr(PyCThostFtdcCombLegField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y,s:c,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s,s:c,s:i,s:i}"
#endif

        ,"CombInstrumentID", self->data.CombInstrumentID//, (Py_ssize_t)sizeof(self->data.CombInstrumentID) 
        ,"LegID", self->data.LegID 
        ,"LegInstrumentID", self->data.LegInstrumentID//, (Py_ssize_t)sizeof(self->data.LegInstrumentID) 
        ,"Direction", self->data.Direction 
        ,"LegMultiple", self->data.LegMultiple 
        ,"ImplyLevel", self->data.ImplyLevel 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombLegField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcCombLegField_get_CombInstrumentID(PyCThostFtdcCombLegField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcCombLegField_set_CombInstrumentID(PyCThostFtdcCombLegField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
    // memcpy(self->data.CombInstrumentID, buf, len);
    strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
    return 0;
}
            
///单腿编号
// TThostFtdcLegIDType int
static PyObject *PyCThostFtdcCombLegField_get_LegID(PyCThostFtdcCombLegField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegID);
#else
    return PyInt_FromLong(self->data.LegID);
#endif
}

///单腿编号
// TThostFtdcLegIDType int
static int PyCThostFtdcCombLegField_set_LegID(PyCThostFtdcCombLegField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LegID value out of range for C int");
        return -1;
    }
    self->data.LegID = (int)buf;
    return 0;
}
        
///单腿合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcCombLegField_get_LegInstrumentID(PyCThostFtdcCombLegField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LegInstrumentID, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
    return PyBytes_FromString(self->data.LegInstrumentID);
}

///单腿合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcCombLegField_set_LegInstrumentID(PyCThostFtdcCombLegField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.LegInstrumentID, 0, sizeof(self->data.LegInstrumentID));
    // memcpy(self->data.LegInstrumentID, buf, len);
    strncpy(self->data.LegInstrumentID, buf, sizeof(self->data.LegInstrumentID));
    return 0;
}
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcCombLegField_get_Direction(PyCThostFtdcCombLegField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcCombLegField_set_Direction(PyCThostFtdcCombLegField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///单腿乘数
// TThostFtdcLegMultipleType int
static PyObject *PyCThostFtdcCombLegField_get_LegMultiple(PyCThostFtdcCombLegField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegMultiple);
#else
    return PyInt_FromLong(self->data.LegMultiple);
#endif
}

///单腿乘数
// TThostFtdcLegMultipleType int
static int PyCThostFtdcCombLegField_set_LegMultiple(PyCThostFtdcCombLegField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LegMultiple value out of range for C int");
        return -1;
    }
    self->data.LegMultiple = (int)buf;
    return 0;
}
        
///派生层数
// TThostFtdcImplyLevelType int
static PyObject *PyCThostFtdcCombLegField_get_ImplyLevel(PyCThostFtdcCombLegField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ImplyLevel);
#else
    return PyInt_FromLong(self->data.ImplyLevel);
#endif
}

///派生层数
// TThostFtdcImplyLevelType int
static int PyCThostFtdcCombLegField_set_ImplyLevel(PyCThostFtdcCombLegField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ImplyLevel Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ImplyLevel Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ImplyLevel value out of range for C int");
        return -1;
    }
    self->data.ImplyLevel = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcCombLegField_getset[] = {
    ///组合合约代码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcCombLegField_get_CombInstrumentID, (setter)PyCThostFtdcCombLegField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
    ///单腿编号 
    {(char *)"LegID", (getter)PyCThostFtdcCombLegField_get_LegID, (setter)PyCThostFtdcCombLegField_set_LegID, (char *)"LegID", NULL},
    ///单腿合约代码 
    {(char *)"LegInstrumentID", (getter)PyCThostFtdcCombLegField_get_LegInstrumentID, (setter)PyCThostFtdcCombLegField_set_LegInstrumentID, (char *)"LegInstrumentID", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcCombLegField_get_Direction, (setter)PyCThostFtdcCombLegField_set_Direction, (char *)"Direction", NULL},
    ///单腿乘数 
    {(char *)"LegMultiple", (getter)PyCThostFtdcCombLegField_get_LegMultiple, (setter)PyCThostFtdcCombLegField_set_LegMultiple, (char *)"LegMultiple", NULL},
    ///派生层数 
    {(char *)"ImplyLevel", (getter)PyCThostFtdcCombLegField_get_ImplyLevel, (setter)PyCThostFtdcCombLegField_set_ImplyLevel, (char *)"ImplyLevel", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCombLegFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCombLegField",	/* tp_name */
	sizeof(PyCThostFtdcCombLegField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCombLegField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCombLegField_repr,   /* tp_repr */
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
	"CThostFtdcCombLegField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCombLegField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCombLegField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCombLegField_new,       /* tp_new */
};

int PyCThostFtdcCombLegFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCombLegField  */
	if (PyType_Ready(&PyCThostFtdcCombLegFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCombLegField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCombLegFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCombLegField", (PyObject *)&PyCThostFtdcCombLegFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombLegField to module");
        Py_DECREF(&PyCThostFtdcCombLegFieldType);
		return -1;
    }

    return 0;
}
