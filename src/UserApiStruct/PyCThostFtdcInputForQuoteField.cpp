
#include "PyCThostFtdcInputForQuoteField.h"



static PyObject *PyCThostFtdcInputForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputForQuoteField *self = (PyCThostFtdcInputForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputForQuoteField_init(PyCThostFtdcInputForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ForQuoteRef", "UserID", "ExchangeID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputForQuoteField_BrokerID = NULL;
	Py_ssize_t pInputForQuoteField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputForQuoteField_InvestorID = NULL;
	Py_ssize_t pInputForQuoteField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputForQuoteField_reserve1 = NULL;
	Py_ssize_t pInputForQuoteField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputForQuoteField_ForQuoteRef = NULL;
	Py_ssize_t pInputForQuoteField_ForQuoteRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputForQuoteField_UserID = NULL;
	Py_ssize_t pInputForQuoteField_UserID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputForQuoteField_ExchangeID = NULL;
	Py_ssize_t pInputForQuoteField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputForQuoteField_InvestUnitID = NULL;
	Py_ssize_t pInputForQuoteField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputForQuoteField_reserve2 = NULL;
	Py_ssize_t pInputForQuoteField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputForQuoteField_MacAddress = NULL;
	Py_ssize_t pInputForQuoteField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputForQuoteField_InstrumentID = NULL;
	Py_ssize_t pInputForQuoteField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputForQuoteField_IPAddress = NULL;
	Py_ssize_t pInputForQuoteField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pInputForQuoteField_BrokerID, &pInputForQuoteField_BrokerID_len
		, &pInputForQuoteField_InvestorID, &pInputForQuoteField_InvestorID_len
		, &pInputForQuoteField_reserve1, &pInputForQuoteField_reserve1_len
		, &pInputForQuoteField_ForQuoteRef, &pInputForQuoteField_ForQuoteRef_len
		, &pInputForQuoteField_UserID, &pInputForQuoteField_UserID_len
		, &pInputForQuoteField_ExchangeID, &pInputForQuoteField_ExchangeID_len
		, &pInputForQuoteField_InvestUnitID, &pInputForQuoteField_InvestUnitID_len
		, &pInputForQuoteField_reserve2, &pInputForQuoteField_reserve2_len
		, &pInputForQuoteField_MacAddress, &pInputForQuoteField_MacAddress_len
		, &pInputForQuoteField_InstrumentID, &pInputForQuoteField_InstrumentID_len
		, &pInputForQuoteField_IPAddress, &pInputForQuoteField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputForQuoteField_BrokerID != NULL) {
		if(pInputForQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputForQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputForQuoteField_BrokerID, sizeof(self->data.BrokerID) );
		pInputForQuoteField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputForQuoteField_InvestorID != NULL) {
		if(pInputForQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputForQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputForQuoteField_InvestorID, sizeof(self->data.InvestorID) );
		pInputForQuoteField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputForQuoteField_reserve1 != NULL) {
		if(pInputForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputForQuoteField_reserve1, sizeof(self->data.reserve1) );
		pInputForQuoteField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pInputForQuoteField_ForQuoteRef != NULL) {
		if(pInputForQuoteField_ForQuoteRef_len > (Py_ssize_t)sizeof(self->data.ForQuoteRef)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteRef too long: length=%zd (max allowed is %zd)", pInputForQuoteField_ForQuoteRef_len, (Py_ssize_t)sizeof(self->data.ForQuoteRef));
			return -1;
		}
		strncpy(self->data.ForQuoteRef, pInputForQuoteField_ForQuoteRef, sizeof(self->data.ForQuoteRef) );
		pInputForQuoteField_ForQuoteRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pInputForQuoteField_UserID != NULL) {
		if(pInputForQuoteField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputForQuoteField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputForQuoteField_UserID, sizeof(self->data.UserID) );
		pInputForQuoteField_UserID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pInputForQuoteField_ExchangeID != NULL) {
		if(pInputForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputForQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputForQuoteField_InvestUnitID != NULL) {
		if(pInputForQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputForQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputForQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputForQuoteField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputForQuoteField_reserve2 != NULL) {
		if(pInputForQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputForQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputForQuoteField_reserve2, sizeof(self->data.reserve2) );
		pInputForQuoteField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputForQuoteField_MacAddress != NULL) {
		if(pInputForQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputForQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputForQuoteField_MacAddress, sizeof(self->data.MacAddress) );
		pInputForQuoteField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputForQuoteField_InstrumentID != NULL) {
		if(pInputForQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputForQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputForQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputForQuoteField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputForQuoteField_IPAddress != NULL) {
		if(pInputForQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputForQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputForQuoteField_IPAddress, sizeof(self->data.IPAddress) );
		pInputForQuoteField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcInputForQuoteField_dealloc(PyCThostFtdcInputForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputForQuoteField_repr(PyCThostFtdcInputForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ForQuoteRef", self->data.ForQuoteRef 
		, "UserID", self->data.UserID 
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_BrokerID(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_InvestorID(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_reserve1(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_ForQuoteRef(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteRef);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_UserID(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_ExchangeID(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_InvestUnitID(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_reserve2(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_MacAddress(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_InstrumentID(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputForQuoteField_get_IPAddress(PyCThostFtdcInputForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcInputForQuoteField_set_BrokerID(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputForQuoteField_set_InvestorID(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_reserve1(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_ForQuoteRef(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteRef)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ForQuoteRef, buf, sizeof(self->data.ForQuoteRef));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_UserID(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
		PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_ExchangeID(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_InvestUnitID(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
		PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_reserve2(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_MacAddress(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
		PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_InstrumentID(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}

static int PyCThostFtdcInputForQuoteField_set_IPAddress(PyCThostFtdcInputForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
		PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcInputForQuoteField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputForQuoteField_get_BrokerID, (setter)PyCThostFtdcInputForQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputForQuoteField_get_InvestorID, (setter)PyCThostFtdcInputForQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputForQuoteField_get_reserve1, (setter)PyCThostFtdcInputForQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ForQuoteRef", (getter)PyCThostFtdcInputForQuoteField_get_ForQuoteRef, (setter)PyCThostFtdcInputForQuoteField_set_ForQuoteRef, (char *)"ForQuoteRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputForQuoteField_get_UserID, (setter)PyCThostFtdcInputForQuoteField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputForQuoteField_get_ExchangeID, (setter)PyCThostFtdcInputForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputForQuoteField_get_InvestUnitID, (setter)PyCThostFtdcInputForQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputForQuoteField_get_reserve2, (setter)PyCThostFtdcInputForQuoteField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputForQuoteField_get_MacAddress, (setter)PyCThostFtdcInputForQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputForQuoteField_get_InstrumentID, (setter)PyCThostFtdcInputForQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputForQuoteField_get_IPAddress, (setter)PyCThostFtdcInputForQuoteField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcInputForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcInputForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcInputForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcInputForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputForQuoteField", (PyObject *)&PyCThostFtdcInputForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputForQuoteField to module");
        Py_DECREF(&PyCThostFtdcInputForQuoteFieldType);
		return -1;
    }

    return 0;
}
