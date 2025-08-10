
#include "PyCThostFtdcNoticeField.h"

///客户通知

static PyObject *PyCThostFtdcNoticeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNoticeField *self = (PyCThostFtdcNoticeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcNoticeField_init(PyCThostFtdcNoticeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "Content", "SequenceLabel",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *NoticeField_BrokerID = NULL;
    Py_ssize_t NoticeField_BrokerID_len = 0;
            
    ///消息正文
    // TThostFtdcContentType char[501]
    const char *NoticeField_Content = NULL;
    Py_ssize_t NoticeField_Content_len = 0;
            
    ///经纪公司通知内容序列号
    // TThostFtdcSequenceLabelType char[2]
    const char *NoticeField_SequenceLabel = NULL;
    Py_ssize_t NoticeField_SequenceLabel_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &NoticeField_BrokerID, &NoticeField_BrokerID_len 
        , &NoticeField_Content, &NoticeField_Content_len 
        , &NoticeField_SequenceLabel, &NoticeField_SequenceLabel_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( NoticeField_BrokerID != NULL ) {
        if(NoticeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", NoticeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, NoticeField_BrokerID, NoticeField_BrokerID_len);        
        strncpy(self->data.BrokerID, NoticeField_BrokerID, sizeof(self->data.BrokerID) );
        NoticeField_BrokerID = NULL;
    }
            
    ///消息正文
    // TThostFtdcContentType char[501]
    if( NoticeField_Content != NULL ) {
        if(NoticeField_Content_len > (Py_ssize_t)sizeof(self->data.Content)) {
            PyErr_Format(PyExc_ValueError, "Content too long: length=%zd (max allowed is %zd)", NoticeField_Content_len, (Py_ssize_t)sizeof(self->data.Content));
            return -1;
        }
        // memset(self->data.Content, 0, sizeof(self->data.Content));
        // memcpy(self->data.Content, NoticeField_Content, NoticeField_Content_len);        
        strncpy(self->data.Content, NoticeField_Content, sizeof(self->data.Content) );
        NoticeField_Content = NULL;
    }
            
    ///经纪公司通知内容序列号
    // TThostFtdcSequenceLabelType char[2]
    if( NoticeField_SequenceLabel != NULL ) {
        if(NoticeField_SequenceLabel_len > (Py_ssize_t)sizeof(self->data.SequenceLabel)) {
            PyErr_Format(PyExc_ValueError, "SequenceLabel too long: length=%zd (max allowed is %zd)", NoticeField_SequenceLabel_len, (Py_ssize_t)sizeof(self->data.SequenceLabel));
            return -1;
        }
        // memset(self->data.SequenceLabel, 0, sizeof(self->data.SequenceLabel));
        // memcpy(self->data.SequenceLabel, NoticeField_SequenceLabel, NoticeField_SequenceLabel_len);        
        strncpy(self->data.SequenceLabel, NoticeField_SequenceLabel, sizeof(self->data.SequenceLabel) );
        NoticeField_SequenceLabel = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcNoticeField_dealloc(PyCThostFtdcNoticeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNoticeField_repr(PyCThostFtdcNoticeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"Content", self->data.Content//, (Py_ssize_t)sizeof(self->data.Content) 
        ,"SequenceLabel", self->data.SequenceLabel//, (Py_ssize_t)sizeof(self->data.SequenceLabel) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNoticeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcNoticeField_get_BrokerID(PyCThostFtdcNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcNoticeField_set_BrokerID(PyCThostFtdcNoticeField *self, PyObject* val, void *closure) {
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
            
///消息正文
// TThostFtdcContentType char[501]
static PyObject *PyCThostFtdcNoticeField_get_Content(PyCThostFtdcNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Content, (Py_ssize_t)sizeof(self->data.Content));
    return PyBytes_FromString(self->data.Content);
}

///消息正文
// TThostFtdcContentType char[501]
static int PyCThostFtdcNoticeField_set_Content(PyCThostFtdcNoticeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Content Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Content)) {
        PyErr_SetString(PyExc_ValueError, "Content must be less than 501 bytes");
        return -1;
    }
    // memset(self->data.Content, 0, sizeof(self->data.Content));
    // memcpy(self->data.Content, buf, len);
    strncpy(self->data.Content, buf, sizeof(self->data.Content));
    return 0;
}
            
///经纪公司通知内容序列号
// TThostFtdcSequenceLabelType char[2]
static PyObject *PyCThostFtdcNoticeField_get_SequenceLabel(PyCThostFtdcNoticeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SequenceLabel, (Py_ssize_t)sizeof(self->data.SequenceLabel));
    return PyBytes_FromString(self->data.SequenceLabel);
}

///经纪公司通知内容序列号
// TThostFtdcSequenceLabelType char[2]
static int PyCThostFtdcNoticeField_set_SequenceLabel(PyCThostFtdcNoticeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceLabel Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SequenceLabel)) {
        PyErr_SetString(PyExc_ValueError, "SequenceLabel must be less than 2 bytes");
        return -1;
    }
    // memset(self->data.SequenceLabel, 0, sizeof(self->data.SequenceLabel));
    // memcpy(self->data.SequenceLabel, buf, len);
    strncpy(self->data.SequenceLabel, buf, sizeof(self->data.SequenceLabel));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcNoticeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcNoticeField_get_BrokerID, (setter)PyCThostFtdcNoticeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///消息正文 
    {(char *)"Content", (getter)PyCThostFtdcNoticeField_get_Content, (setter)PyCThostFtdcNoticeField_set_Content, (char *)"Content", NULL},
    ///经纪公司通知内容序列号 
    {(char *)"SequenceLabel", (getter)PyCThostFtdcNoticeField_get_SequenceLabel, (setter)PyCThostFtdcNoticeField_set_SequenceLabel, (char *)"SequenceLabel", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNoticeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNoticeField",	/* tp_name */
	sizeof(PyCThostFtdcNoticeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNoticeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNoticeField_repr,   /* tp_repr */
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
	"CThostFtdcNoticeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNoticeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNoticeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNoticeField_new,       /* tp_new */
};

int PyCThostFtdcNoticeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNoticeField  */
	if (PyType_Ready(&PyCThostFtdcNoticeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNoticeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNoticeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNoticeField", (PyObject *)&PyCThostFtdcNoticeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNoticeField to module");
        Py_DECREF(&PyCThostFtdcNoticeFieldType);
		return -1;
    }

    return 0;
}
