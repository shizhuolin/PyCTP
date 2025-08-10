
#include "PyCThostFtdcQryOffsetSettingField.h"

///查询对冲设置

static PyObject *PyCThostFtdcQryOffsetSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOffsetSettingField *self = (PyCThostFtdcQryOffsetSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryOffsetSettingField_init(PyCThostFtdcQryOffsetSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ProductID", "OffsetType",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryOffsetSettingField_BrokerID = NULL;
    Py_ssize_t QryOffsetSettingField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryOffsetSettingField_InvestorID = NULL;
    Py_ssize_t QryOffsetSettingField_InvestorID_len = 0;
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    const char *QryOffsetSettingField_ProductID = NULL;
    Py_ssize_t QryOffsetSettingField_ProductID_len = 0;
            
    ///对冲类型
    // TThostFtdcOffsetTypeType char
    char QryOffsetSettingField_OffsetType = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#c", (char **)kwlist
#endif

        , &QryOffsetSettingField_BrokerID, &QryOffsetSettingField_BrokerID_len 
        , &QryOffsetSettingField_InvestorID, &QryOffsetSettingField_InvestorID_len 
        , &QryOffsetSettingField_ProductID, &QryOffsetSettingField_ProductID_len 
        , &QryOffsetSettingField_OffsetType 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryOffsetSettingField_BrokerID != NULL ) {
        if(QryOffsetSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryOffsetSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryOffsetSettingField_BrokerID, QryOffsetSettingField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryOffsetSettingField_BrokerID, sizeof(self->data.BrokerID) );
        QryOffsetSettingField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryOffsetSettingField_InvestorID != NULL ) {
        if(QryOffsetSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryOffsetSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryOffsetSettingField_InvestorID, QryOffsetSettingField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryOffsetSettingField_InvestorID, sizeof(self->data.InvestorID) );
        QryOffsetSettingField_InvestorID = NULL;
    }
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    if( QryOffsetSettingField_ProductID != NULL ) {
        if(QryOffsetSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", QryOffsetSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, QryOffsetSettingField_ProductID, QryOffsetSettingField_ProductID_len);        
        strncpy(self->data.ProductID, QryOffsetSettingField_ProductID, sizeof(self->data.ProductID) );
        QryOffsetSettingField_ProductID = NULL;
    }
            
    ///对冲类型
    // TThostFtdcOffsetTypeType char
    self->data.OffsetType = QryOffsetSettingField_OffsetType;
            

    return 0;
}

static void PyCThostFtdcQryOffsetSettingField_dealloc(PyCThostFtdcQryOffsetSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOffsetSettingField_repr(PyCThostFtdcQryOffsetSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"OffsetType", self->data.OffsetType 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOffsetSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryOffsetSettingField_get_BrokerID(PyCThostFtdcQryOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryOffsetSettingField_set_BrokerID(PyCThostFtdcQryOffsetSettingField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOffsetSettingField_get_InvestorID(PyCThostFtdcQryOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryOffsetSettingField_set_InvestorID(PyCThostFtdcQryOffsetSettingField *self, PyObject* val, void *closure) {
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
            
///产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcQryOffsetSettingField_get_ProductID(PyCThostFtdcQryOffsetSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryOffsetSettingField_set_ProductID(PyCThostFtdcQryOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///对冲类型
// TThostFtdcOffsetTypeType char
static PyObject *PyCThostFtdcQryOffsetSettingField_get_OffsetType(PyCThostFtdcQryOffsetSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

///对冲类型
// TThostFtdcOffsetTypeType char
static int PyCThostFtdcQryOffsetSettingField_set_OffsetType(PyCThostFtdcQryOffsetSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
        PyErr_SetString(PyExc_ValueError, "OffsetType must be equal 1 bytes");
        return -1;
    }
    self->data.OffsetType = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryOffsetSettingField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryOffsetSettingField_get_BrokerID, (setter)PyCThostFtdcQryOffsetSettingField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryOffsetSettingField_get_InvestorID, (setter)PyCThostFtdcQryOffsetSettingField_set_InvestorID, (char *)"InvestorID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcQryOffsetSettingField_get_ProductID, (setter)PyCThostFtdcQryOffsetSettingField_set_ProductID, (char *)"ProductID", NULL},
    ///对冲类型 
    {(char *)"OffsetType", (getter)PyCThostFtdcQryOffsetSettingField_get_OffsetType, (setter)PyCThostFtdcQryOffsetSettingField_set_OffsetType, (char *)"OffsetType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOffsetSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOffsetSettingField",	/* tp_name */
	sizeof(PyCThostFtdcQryOffsetSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOffsetSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOffsetSettingField_repr,   /* tp_repr */
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
	"CThostFtdcQryOffsetSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOffsetSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOffsetSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOffsetSettingField_new,       /* tp_new */
};

int PyCThostFtdcQryOffsetSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOffsetSettingField  */
	if (PyType_Ready(&PyCThostFtdcQryOffsetSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOffsetSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOffsetSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOffsetSettingField", (PyObject *)&PyCThostFtdcQryOffsetSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOffsetSettingField to module");
        Py_DECREF(&PyCThostFtdcQryOffsetSettingFieldType);
		return -1;
    }

    return 0;
}
