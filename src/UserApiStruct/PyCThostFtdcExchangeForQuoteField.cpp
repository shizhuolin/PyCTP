
#include "PyCThostFtdcExchangeForQuoteField.h"



static PyObject *PyCThostFtdcExchangeForQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeForQuoteField *self = (PyCThostFtdcExchangeForQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeForQuoteField_init(PyCThostFtdcExchangeForQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ForQuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "InsertDate", "InsertTime", "ForQuoteStatus", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeForQuoteField_ForQuoteLocalID = NULL;
	Py_ssize_t pExchangeForQuoteField_ForQuoteLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeForQuoteField_ExchangeID = NULL;
	Py_ssize_t pExchangeForQuoteField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeForQuoteField_ParticipantID = NULL;
	Py_ssize_t pExchangeForQuoteField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeForQuoteField_ClientID = NULL;
	Py_ssize_t pExchangeForQuoteField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeForQuoteField_reserve1 = NULL;
	Py_ssize_t pExchangeForQuoteField_reserve1_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeForQuoteField_TraderID = NULL;
	Py_ssize_t pExchangeForQuoteField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeForQuoteField_InstallID = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeForQuoteField_InsertDate = NULL;
	Py_ssize_t pExchangeForQuoteField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeForQuoteField_InsertTime = NULL;
	Py_ssize_t pExchangeForQuoteField_InsertTime_len = 0;

	//TThostFtdcForQuoteStatusType char
	char pExchangeForQuoteField_ForQuoteStatus = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeForQuoteField_reserve2 = NULL;
	Py_ssize_t pExchangeForQuoteField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeForQuoteField_MacAddress = NULL;
	Py_ssize_t pExchangeForQuoteField_MacAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeForQuoteField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeForQuoteField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeForQuoteField_IPAddress = NULL;
	Py_ssize_t pExchangeForQuoteField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#iy#y#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#is#s#cs#s#s#s#", (char **)kwlist
#endif

		, &pExchangeForQuoteField_ForQuoteLocalID, &pExchangeForQuoteField_ForQuoteLocalID_len
		, &pExchangeForQuoteField_ExchangeID, &pExchangeForQuoteField_ExchangeID_len
		, &pExchangeForQuoteField_ParticipantID, &pExchangeForQuoteField_ParticipantID_len
		, &pExchangeForQuoteField_ClientID, &pExchangeForQuoteField_ClientID_len
		, &pExchangeForQuoteField_reserve1, &pExchangeForQuoteField_reserve1_len
		, &pExchangeForQuoteField_TraderID, &pExchangeForQuoteField_TraderID_len
		, &pExchangeForQuoteField_InstallID
		, &pExchangeForQuoteField_InsertDate, &pExchangeForQuoteField_InsertDate_len
		, &pExchangeForQuoteField_InsertTime, &pExchangeForQuoteField_InsertTime_len
		, &pExchangeForQuoteField_ForQuoteStatus
		, &pExchangeForQuoteField_reserve2, &pExchangeForQuoteField_reserve2_len
		, &pExchangeForQuoteField_MacAddress, &pExchangeForQuoteField_MacAddress_len
		, &pExchangeForQuoteField_ExchangeInstID, &pExchangeForQuoteField_ExchangeInstID_len
		, &pExchangeForQuoteField_IPAddress, &pExchangeForQuoteField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeForQuoteField_ForQuoteLocalID != NULL) {
		if(pExchangeForQuoteField_ForQuoteLocalID_len > (Py_ssize_t)sizeof(self->data.ForQuoteLocalID)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteLocalID too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_ForQuoteLocalID_len, (Py_ssize_t)sizeof(self->data.ForQuoteLocalID));
			return -1;
		}
		strncpy(self->data.ForQuoteLocalID, pExchangeForQuoteField_ForQuoteLocalID, sizeof(self->data.ForQuoteLocalID) );
		pExchangeForQuoteField_ForQuoteLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeForQuoteField_ExchangeID != NULL) {
		if(pExchangeForQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeForQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeForQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeForQuoteField_ParticipantID != NULL) {
		if(pExchangeForQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeForQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeForQuoteField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeForQuoteField_ClientID != NULL) {
		if(pExchangeForQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeForQuoteField_ClientID, sizeof(self->data.ClientID) );
		pExchangeForQuoteField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeForQuoteField_reserve1 != NULL) {
		if(pExchangeForQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeForQuoteField_reserve1, sizeof(self->data.reserve1) );
		pExchangeForQuoteField_reserve1 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeForQuoteField_TraderID != NULL) {
		if(pExchangeForQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeForQuoteField_TraderID, sizeof(self->data.TraderID) );
		pExchangeForQuoteField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeForQuoteField_InstallID;

	//TThostFtdcDateType char[9]
	if(pExchangeForQuoteField_InsertDate != NULL) {
		if(pExchangeForQuoteField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pExchangeForQuoteField_InsertDate, sizeof(self->data.InsertDate) );
		pExchangeForQuoteField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeForQuoteField_InsertTime != NULL) {
		if(pExchangeForQuoteField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pExchangeForQuoteField_InsertTime, sizeof(self->data.InsertTime) );
		pExchangeForQuoteField_InsertTime = NULL;
	}

	//TThostFtdcForQuoteStatusType char
	self->data.ForQuoteStatus = pExchangeForQuoteField_ForQuoteStatus;

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeForQuoteField_reserve2 != NULL) {
		if(pExchangeForQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExchangeForQuoteField_reserve2, sizeof(self->data.reserve2) );
		pExchangeForQuoteField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeForQuoteField_MacAddress != NULL) {
		if(pExchangeForQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeForQuoteField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeForQuoteField_MacAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeForQuoteField_ExchangeInstID != NULL) {
		if(pExchangeForQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeForQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeForQuoteField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeForQuoteField_IPAddress != NULL) {
		if(pExchangeForQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeForQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeForQuoteField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeForQuoteField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeForQuoteField_dealloc(PyCThostFtdcExchangeForQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_repr(PyCThostFtdcExchangeForQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

		, "ForQuoteLocalID", self->data.ForQuoteLocalID 
		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "reserve1", self->data.reserve1 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "InsertDate", self->data.InsertDate 
		, "InsertTime", self->data.InsertTime 
		, "ForQuoteStatus", self->data.ForQuoteStatus
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeForQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_ForQuoteLocalID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteLocalID);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_ExchangeID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_ParticipantID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_ClientID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_reserve1(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_TraderID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_InstallID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_InsertDate(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_InsertTime(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_ForQuoteStatus(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ForQuoteStatus), 1);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_reserve2(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_MacAddress(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_ExchangeInstID(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcExchangeForQuoteField_get_IPAddress(PyCThostFtdcExchangeForQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExchangeForQuoteField_set_ForQuoteLocalID(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteLocalID)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ForQuoteLocalID, buf, sizeof(self->data.ForQuoteLocalID));
	return 0;
}

static int PyCThostFtdcExchangeForQuoteField_set_ExchangeID(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeForQuoteField_set_ParticipantID(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
		PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
	return 0;
}

static int PyCThostFtdcExchangeForQuoteField_set_ClientID(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
		PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
	return 0;
}

static int PyCThostFtdcExchangeForQuoteField_set_reserve1(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeForQuoteField_set_TraderID(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
	return 0;
}

static int PyCThostFtdcExchangeForQuoteField_set_InstallID(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int"); 
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
    self->data.InstallID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeForQuoteField_set_InsertDate(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
		PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
	return 0;
}

static int PyCThostFtdcExchangeForQuoteField_set_InsertTime(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
		PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertTime, buf, sizeof(self->data.InsertTime));
	return 0;
}

static int PyCThostFtdcExchangeForQuoteField_set_ForQuoteStatus(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteStatus)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteStatus must be less than 1 bytes");
		return -1;
	}
	self->data.ForQuoteStatus = *buf;
	return 0;
}

static int PyCThostFtdcExchangeForQuoteField_set_reserve2(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeForQuoteField_set_MacAddress(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeForQuoteField_set_ExchangeInstID(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}

static int PyCThostFtdcExchangeForQuoteField_set_IPAddress(PyCThostFtdcExchangeForQuoteField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeForQuoteField_getset[] = {
	 {(char *)"ForQuoteLocalID", (getter)PyCThostFtdcExchangeForQuoteField_get_ForQuoteLocalID, (setter)PyCThostFtdcExchangeForQuoteField_set_ForQuoteLocalID, (char *)"ForQuoteLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeForQuoteField_get_ExchangeID, (setter)PyCThostFtdcExchangeForQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeForQuoteField_get_ParticipantID, (setter)PyCThostFtdcExchangeForQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeForQuoteField_get_ClientID, (setter)PyCThostFtdcExchangeForQuoteField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeForQuoteField_get_reserve1, (setter)PyCThostFtdcExchangeForQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeForQuoteField_get_TraderID, (setter)PyCThostFtdcExchangeForQuoteField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeForQuoteField_get_InstallID, (setter)PyCThostFtdcExchangeForQuoteField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcExchangeForQuoteField_get_InsertDate, (setter)PyCThostFtdcExchangeForQuoteField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcExchangeForQuoteField_get_InsertTime, (setter)PyCThostFtdcExchangeForQuoteField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"ForQuoteStatus", (getter)PyCThostFtdcExchangeForQuoteField_get_ForQuoteStatus, (setter)PyCThostFtdcExchangeForQuoteField_set_ForQuoteStatus, (char *)"ForQuoteStatus", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExchangeForQuoteField_get_reserve2, (setter)PyCThostFtdcExchangeForQuoteField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeForQuoteField_get_MacAddress, (setter)PyCThostFtdcExchangeForQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeForQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeForQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeForQuoteField_get_IPAddress, (setter)PyCThostFtdcExchangeForQuoteField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeForQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeForQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeForQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeForQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeForQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeForQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeForQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeForQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeForQuoteField_new,       /* tp_new */
};

int PyCThostFtdcExchangeForQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeForQuoteField  */
	if (PyType_Ready(&PyCThostFtdcExchangeForQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeForQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeForQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeForQuoteField", (PyObject *)&PyCThostFtdcExchangeForQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeForQuoteField to module");
        Py_DECREF(&PyCThostFtdcExchangeForQuoteFieldType);
		return -1;
    }

    return 0;
}
