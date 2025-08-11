
#include "PyCThostFtdcLocalAddrConfigField.h"



static PyObject *PyCThostFtdcLocalAddrConfigField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcLocalAddrConfigField *self = (PyCThostFtdcLocalAddrConfigField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcLocalAddrConfigField_init(PyCThostFtdcLocalAddrConfigField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "PeerAddr", "NetMask", "DRIdentityID", "LocalAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pLocalAddrConfigField_BrokerID = NULL;
	Py_ssize_t pLocalAddrConfigField_BrokerID_len = 0;

	//TThostFtdcIpAddrType char[129]
	const char *pLocalAddrConfigField_PeerAddr = NULL;
	Py_ssize_t pLocalAddrConfigField_PeerAddr_len = 0;

	//TThostFtdcIpAddrType char[129]
	const char *pLocalAddrConfigField_NetMask = NULL;
	Py_ssize_t pLocalAddrConfigField_NetMask_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pLocalAddrConfigField_DRIdentityID = 0;

	//TThostFtdcIpAddrType char[129]
	const char *pLocalAddrConfigField_LocalAddress = NULL;
	Py_ssize_t pLocalAddrConfigField_LocalAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#", (char **)kwlist
#endif

		, &pLocalAddrConfigField_BrokerID, &pLocalAddrConfigField_BrokerID_len
		, &pLocalAddrConfigField_PeerAddr, &pLocalAddrConfigField_PeerAddr_len
		, &pLocalAddrConfigField_NetMask, &pLocalAddrConfigField_NetMask_len
		, &pLocalAddrConfigField_DRIdentityID
		, &pLocalAddrConfigField_LocalAddress, &pLocalAddrConfigField_LocalAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pLocalAddrConfigField_BrokerID != NULL) {
		if(pLocalAddrConfigField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pLocalAddrConfigField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pLocalAddrConfigField_BrokerID, sizeof(self->data.BrokerID) );
		pLocalAddrConfigField_BrokerID = NULL;
	}

	//TThostFtdcIpAddrType char[129]
	if(pLocalAddrConfigField_PeerAddr != NULL) {
		if(pLocalAddrConfigField_PeerAddr_len > (Py_ssize_t)sizeof(self->data.PeerAddr)) {
			PyErr_Format(PyExc_ValueError, "PeerAddr too long: length=%zd (max allowed is %zd)", pLocalAddrConfigField_PeerAddr_len, (Py_ssize_t)sizeof(self->data.PeerAddr));
			return -1;
		}
		strncpy(self->data.PeerAddr, pLocalAddrConfigField_PeerAddr, sizeof(self->data.PeerAddr) );
		pLocalAddrConfigField_PeerAddr = NULL;
	}

	//TThostFtdcIpAddrType char[129]
	if(pLocalAddrConfigField_NetMask != NULL) {
		if(pLocalAddrConfigField_NetMask_len > (Py_ssize_t)sizeof(self->data.NetMask)) {
			PyErr_Format(PyExc_ValueError, "NetMask too long: length=%zd (max allowed is %zd)", pLocalAddrConfigField_NetMask_len, (Py_ssize_t)sizeof(self->data.NetMask));
			return -1;
		}
		strncpy(self->data.NetMask, pLocalAddrConfigField_NetMask, sizeof(self->data.NetMask) );
		pLocalAddrConfigField_NetMask = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pLocalAddrConfigField_DRIdentityID;

	//TThostFtdcIpAddrType char[129]
	if(pLocalAddrConfigField_LocalAddress != NULL) {
		if(pLocalAddrConfigField_LocalAddress_len > (Py_ssize_t)sizeof(self->data.LocalAddress)) {
			PyErr_Format(PyExc_ValueError, "LocalAddress too long: length=%zd (max allowed is %zd)", pLocalAddrConfigField_LocalAddress_len, (Py_ssize_t)sizeof(self->data.LocalAddress));
			return -1;
		}
		strncpy(self->data.LocalAddress, pLocalAddrConfigField_LocalAddress, sizeof(self->data.LocalAddress) );
		pLocalAddrConfigField_LocalAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcLocalAddrConfigField_dealloc(PyCThostFtdcLocalAddrConfigField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcLocalAddrConfigField_repr(PyCThostFtdcLocalAddrConfigField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "PeerAddr", self->data.PeerAddr 
		, "NetMask", self->data.NetMask 
		, "DRIdentityID", self->data.DRIdentityID
		, "LocalAddress", self->data.LocalAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLocalAddrConfigField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcLocalAddrConfigField_get_BrokerID(PyCThostFtdcLocalAddrConfigField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcLocalAddrConfigField_get_PeerAddr(PyCThostFtdcLocalAddrConfigField *self, void *closure) {
	return PyBytes_FromString(self->data.PeerAddr);
}

static PyObject *PyCThostFtdcLocalAddrConfigField_get_NetMask(PyCThostFtdcLocalAddrConfigField *self, void *closure) {
	return PyBytes_FromString(self->data.NetMask);
}

static PyObject *PyCThostFtdcLocalAddrConfigField_get_DRIdentityID(PyCThostFtdcLocalAddrConfigField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcLocalAddrConfigField_get_LocalAddress(PyCThostFtdcLocalAddrConfigField *self, void *closure) {
	return PyBytes_FromString(self->data.LocalAddress);
}

static int PyCThostFtdcLocalAddrConfigField_set_BrokerID(PyCThostFtdcLocalAddrConfigField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
	return 0;
}

static int PyCThostFtdcLocalAddrConfigField_set_PeerAddr(PyCThostFtdcLocalAddrConfigField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PeerAddr Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PeerAddr)) {
		PyErr_SetString(PyExc_ValueError, "PeerAddr must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.PeerAddr, buf, sizeof(self->data.PeerAddr));
	return 0;
}

static int PyCThostFtdcLocalAddrConfigField_set_NetMask(PyCThostFtdcLocalAddrConfigField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NetMask Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NetMask)) {
		PyErr_SetString(PyExc_ValueError, "NetMask must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.NetMask, buf, sizeof(self->data.NetMask));
	return 0;
}

static int PyCThostFtdcLocalAddrConfigField_set_DRIdentityID(PyCThostFtdcLocalAddrConfigField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int"); 
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
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.DRIdentityID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcLocalAddrConfigField_set_LocalAddress(PyCThostFtdcLocalAddrConfigField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LocalAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LocalAddress)) {
		PyErr_SetString(PyExc_ValueError, "LocalAddress must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.LocalAddress, buf, sizeof(self->data.LocalAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcLocalAddrConfigField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcLocalAddrConfigField_get_BrokerID, (setter)PyCThostFtdcLocalAddrConfigField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"PeerAddr", (getter)PyCThostFtdcLocalAddrConfigField_get_PeerAddr, (setter)PyCThostFtdcLocalAddrConfigField_set_PeerAddr, (char *)"PeerAddr", NULL},
	 {(char *)"NetMask", (getter)PyCThostFtdcLocalAddrConfigField_get_NetMask, (setter)PyCThostFtdcLocalAddrConfigField_set_NetMask, (char *)"NetMask", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcLocalAddrConfigField_get_DRIdentityID, (setter)PyCThostFtdcLocalAddrConfigField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"LocalAddress", (getter)PyCThostFtdcLocalAddrConfigField_get_LocalAddress, (setter)PyCThostFtdcLocalAddrConfigField_set_LocalAddress, (char *)"LocalAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcLocalAddrConfigFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcLocalAddrConfigField",	/* tp_name */
	sizeof(PyCThostFtdcLocalAddrConfigField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcLocalAddrConfigField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcLocalAddrConfigField_repr,   /* tp_repr */
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
	"CThostFtdcLocalAddrConfigField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcLocalAddrConfigField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcLocalAddrConfigField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcLocalAddrConfigField_new,       /* tp_new */
};

int PyCThostFtdcLocalAddrConfigFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcLocalAddrConfigField  */
	if (PyType_Ready(&PyCThostFtdcLocalAddrConfigFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcLocalAddrConfigField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcLocalAddrConfigFieldType);
    if( PyModule_AddObject(module, "CThostFtdcLocalAddrConfigField", (PyObject *)&PyCThostFtdcLocalAddrConfigFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLocalAddrConfigField to module");
        Py_DECREF(&PyCThostFtdcLocalAddrConfigFieldType);
		return -1;
    }

    return 0;
}
