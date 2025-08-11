
#include "PyCThostFtdcQryRCAMSInterParameterField.h"



static PyObject *PyCThostFtdcQryRCAMSInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRCAMSInterParameterField *self = (PyCThostFtdcQryRCAMSInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryRCAMSInterParameterField_init(PyCThostFtdcQryRCAMSInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ProductGroupID", "CombProduct1", "CombProduct2",  NULL};

	//TThostFtdcProductIDType char[41]
	const char *pQryRCAMSInterParameterField_ProductGroupID = NULL;
	Py_ssize_t pQryRCAMSInterParameterField_ProductGroupID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pQryRCAMSInterParameterField_CombProduct1 = NULL;
	Py_ssize_t pQryRCAMSInterParameterField_CombProduct1_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pQryRCAMSInterParameterField_CombProduct2 = NULL;
	Py_ssize_t pQryRCAMSInterParameterField_CombProduct2_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryRCAMSInterParameterField_ProductGroupID, &pQryRCAMSInterParameterField_ProductGroupID_len
		, &pQryRCAMSInterParameterField_CombProduct1, &pQryRCAMSInterParameterField_CombProduct1_len
		, &pQryRCAMSInterParameterField_CombProduct2, &pQryRCAMSInterParameterField_CombProduct2_len


    )) {
        return -1;
    }

	//TThostFtdcProductIDType char[41]
	if(pQryRCAMSInterParameterField_ProductGroupID != NULL) {
		if(pQryRCAMSInterParameterField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pQryRCAMSInterParameterField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pQryRCAMSInterParameterField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pQryRCAMSInterParameterField_ProductGroupID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pQryRCAMSInterParameterField_CombProduct1 != NULL) {
		if(pQryRCAMSInterParameterField_CombProduct1_len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
			PyErr_Format(PyExc_ValueError, "CombProduct1 too long: length=%zd (max allowed is %zd)", pQryRCAMSInterParameterField_CombProduct1_len, (Py_ssize_t)sizeof(self->data.CombProduct1));
			return -1;
		}
		strncpy(self->data.CombProduct1, pQryRCAMSInterParameterField_CombProduct1, sizeof(self->data.CombProduct1) );
		pQryRCAMSInterParameterField_CombProduct1 = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pQryRCAMSInterParameterField_CombProduct2 != NULL) {
		if(pQryRCAMSInterParameterField_CombProduct2_len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
			PyErr_Format(PyExc_ValueError, "CombProduct2 too long: length=%zd (max allowed is %zd)", pQryRCAMSInterParameterField_CombProduct2_len, (Py_ssize_t)sizeof(self->data.CombProduct2));
			return -1;
		}
		strncpy(self->data.CombProduct2, pQryRCAMSInterParameterField_CombProduct2, sizeof(self->data.CombProduct2) );
		pQryRCAMSInterParameterField_CombProduct2 = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryRCAMSInterParameterField_dealloc(PyCThostFtdcQryRCAMSInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRCAMSInterParameterField_repr(PyCThostFtdcQryRCAMSInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "ProductGroupID", self->data.ProductGroupID 
		, "CombProduct1", self->data.CombProduct1 
		, "CombProduct2", self->data.CombProduct2 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryRCAMSInterParameterField_get_ProductGroupID(PyCThostFtdcQryRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static PyObject *PyCThostFtdcQryRCAMSInterParameterField_get_CombProduct1(PyCThostFtdcQryRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProduct1);
}

static PyObject *PyCThostFtdcQryRCAMSInterParameterField_get_CombProduct2(PyCThostFtdcQryRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProduct2);
}

static int PyCThostFtdcQryRCAMSInterParameterField_set_ProductGroupID(PyCThostFtdcQryRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
		PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
	return 0;
}

static int PyCThostFtdcQryRCAMSInterParameterField_set_CombProduct1(PyCThostFtdcQryRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProduct1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
		PyErr_SetString(PyExc_ValueError, "CombProduct1 must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProduct1, buf, sizeof(self->data.CombProduct1));
	return 0;
}

static int PyCThostFtdcQryRCAMSInterParameterField_set_CombProduct2(PyCThostFtdcQryRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProduct2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
		PyErr_SetString(PyExc_ValueError, "CombProduct2 must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProduct2, buf, sizeof(self->data.CombProduct2));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryRCAMSInterParameterField_getset[] = {
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcQryRCAMSInterParameterField_get_ProductGroupID, (setter)PyCThostFtdcQryRCAMSInterParameterField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
	 {(char *)"CombProduct1", (getter)PyCThostFtdcQryRCAMSInterParameterField_get_CombProduct1, (setter)PyCThostFtdcQryRCAMSInterParameterField_set_CombProduct1, (char *)"CombProduct1", NULL},
	 {(char *)"CombProduct2", (getter)PyCThostFtdcQryRCAMSInterParameterField_get_CombProduct2, (setter)PyCThostFtdcQryRCAMSInterParameterField_set_CombProduct2, (char *)"CombProduct2", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRCAMSInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRCAMSInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQryRCAMSInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRCAMSInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRCAMSInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQryRCAMSInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRCAMSInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRCAMSInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRCAMSInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcQryRCAMSInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRCAMSInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcQryRCAMSInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRCAMSInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRCAMSInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSInterParameterField", (PyObject *)&PyCThostFtdcQryRCAMSInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSInterParameterField to module");
        Py_DECREF(&PyCThostFtdcQryRCAMSInterParameterFieldType);
		return -1;
    }

    return 0;
}
