
#include "PyCThostFtdcBulletinField.h"



static PyObject *PyCThostFtdcBulletinField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBulletinField *self = (PyCThostFtdcBulletinField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBulletinField_init(PyCThostFtdcBulletinField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TradingDay", "BulletinID", "SequenceNo", "NewsType", "NewsUrgency", "SendTime", "Abstract", "ComeFrom", "Content", "URLLink", "MarketID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pBulletinField_ExchangeID = NULL;
	Py_ssize_t pBulletinField_ExchangeID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pBulletinField_TradingDay = NULL;
	Py_ssize_t pBulletinField_TradingDay_len = 0;

	//TThostFtdcBulletinIDType int
	int pBulletinField_BulletinID = 0;

	//TThostFtdcSequenceNoType int
	int pBulletinField_SequenceNo = 0;

	//TThostFtdcNewsTypeType char[3]
	const char *pBulletinField_NewsType = NULL;
	Py_ssize_t pBulletinField_NewsType_len = 0;

	//TThostFtdcNewsUrgencyType char
	char pBulletinField_NewsUrgency = 0;

	//TThostFtdcTimeType char[9]
	const char *pBulletinField_SendTime = NULL;
	Py_ssize_t pBulletinField_SendTime_len = 0;

	//TThostFtdcAbstractType char[81]
	const char *pBulletinField_Abstract = NULL;
	Py_ssize_t pBulletinField_Abstract_len = 0;

	//TThostFtdcComeFromType char[21]
	const char *pBulletinField_ComeFrom = NULL;
	Py_ssize_t pBulletinField_ComeFrom_len = 0;

	//TThostFtdcContentType char[501]
	const char *pBulletinField_Content = NULL;
	Py_ssize_t pBulletinField_Content_len = 0;

	//TThostFtdcURLLinkType char[201]
	const char *pBulletinField_URLLink = NULL;
	Py_ssize_t pBulletinField_URLLink_len = 0;

	//TThostFtdcMarketIDType char[31]
	const char *pBulletinField_MarketID = NULL;
	Py_ssize_t pBulletinField_MarketID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiy#cy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#iis#cs#s#s#s#s#s#", (char **)kwlist
#endif

		, &pBulletinField_ExchangeID, &pBulletinField_ExchangeID_len
		, &pBulletinField_TradingDay, &pBulletinField_TradingDay_len
		, &pBulletinField_BulletinID
		, &pBulletinField_SequenceNo
		, &pBulletinField_NewsType, &pBulletinField_NewsType_len
		, &pBulletinField_NewsUrgency
		, &pBulletinField_SendTime, &pBulletinField_SendTime_len
		, &pBulletinField_Abstract, &pBulletinField_Abstract_len
		, &pBulletinField_ComeFrom, &pBulletinField_ComeFrom_len
		, &pBulletinField_Content, &pBulletinField_Content_len
		, &pBulletinField_URLLink, &pBulletinField_URLLink_len
		, &pBulletinField_MarketID, &pBulletinField_MarketID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pBulletinField_ExchangeID != NULL) {
		if(pBulletinField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pBulletinField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pBulletinField_ExchangeID, sizeof(self->data.ExchangeID) );
		pBulletinField_ExchangeID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pBulletinField_TradingDay != NULL) {
		if(pBulletinField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pBulletinField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pBulletinField_TradingDay, sizeof(self->data.TradingDay) );
		pBulletinField_TradingDay = NULL;
	}

	//TThostFtdcBulletinIDType int
	self->data.BulletinID = pBulletinField_BulletinID;

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pBulletinField_SequenceNo;

	//TThostFtdcNewsTypeType char[3]
	if(pBulletinField_NewsType != NULL) {
		if(pBulletinField_NewsType_len > (Py_ssize_t)sizeof(self->data.NewsType)) {
			PyErr_Format(PyExc_ValueError, "NewsType too long: length=%zd (max allowed is %zd)", pBulletinField_NewsType_len, (Py_ssize_t)sizeof(self->data.NewsType));
			return -1;
		}
		strncpy(self->data.NewsType, pBulletinField_NewsType, sizeof(self->data.NewsType) );
		pBulletinField_NewsType = NULL;
	}

	//TThostFtdcNewsUrgencyType char
	self->data.NewsUrgency = pBulletinField_NewsUrgency;

	//TThostFtdcTimeType char[9]
	if(pBulletinField_SendTime != NULL) {
		if(pBulletinField_SendTime_len > (Py_ssize_t)sizeof(self->data.SendTime)) {
			PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is %zd)", pBulletinField_SendTime_len, (Py_ssize_t)sizeof(self->data.SendTime));
			return -1;
		}
		strncpy(self->data.SendTime, pBulletinField_SendTime, sizeof(self->data.SendTime) );
		pBulletinField_SendTime = NULL;
	}

	//TThostFtdcAbstractType char[81]
	if(pBulletinField_Abstract != NULL) {
		if(pBulletinField_Abstract_len > (Py_ssize_t)sizeof(self->data.Abstract)) {
			PyErr_Format(PyExc_ValueError, "Abstract too long: length=%zd (max allowed is %zd)", pBulletinField_Abstract_len, (Py_ssize_t)sizeof(self->data.Abstract));
			return -1;
		}
		strncpy(self->data.Abstract, pBulletinField_Abstract, sizeof(self->data.Abstract) );
		pBulletinField_Abstract = NULL;
	}

	//TThostFtdcComeFromType char[21]
	if(pBulletinField_ComeFrom != NULL) {
		if(pBulletinField_ComeFrom_len > (Py_ssize_t)sizeof(self->data.ComeFrom)) {
			PyErr_Format(PyExc_ValueError, "ComeFrom too long: length=%zd (max allowed is %zd)", pBulletinField_ComeFrom_len, (Py_ssize_t)sizeof(self->data.ComeFrom));
			return -1;
		}
		strncpy(self->data.ComeFrom, pBulletinField_ComeFrom, sizeof(self->data.ComeFrom) );
		pBulletinField_ComeFrom = NULL;
	}

	//TThostFtdcContentType char[501]
	if(pBulletinField_Content != NULL) {
		if(pBulletinField_Content_len > (Py_ssize_t)sizeof(self->data.Content)) {
			PyErr_Format(PyExc_ValueError, "Content too long: length=%zd (max allowed is %zd)", pBulletinField_Content_len, (Py_ssize_t)sizeof(self->data.Content));
			return -1;
		}
		strncpy(self->data.Content, pBulletinField_Content, sizeof(self->data.Content) );
		pBulletinField_Content = NULL;
	}

	//TThostFtdcURLLinkType char[201]
	if(pBulletinField_URLLink != NULL) {
		if(pBulletinField_URLLink_len > (Py_ssize_t)sizeof(self->data.URLLink)) {
			PyErr_Format(PyExc_ValueError, "URLLink too long: length=%zd (max allowed is %zd)", pBulletinField_URLLink_len, (Py_ssize_t)sizeof(self->data.URLLink));
			return -1;
		}
		strncpy(self->data.URLLink, pBulletinField_URLLink, sizeof(self->data.URLLink) );
		pBulletinField_URLLink = NULL;
	}

	//TThostFtdcMarketIDType char[31]
	if(pBulletinField_MarketID != NULL) {
		if(pBulletinField_MarketID_len > (Py_ssize_t)sizeof(self->data.MarketID)) {
			PyErr_Format(PyExc_ValueError, "MarketID too long: length=%zd (max allowed is %zd)", pBulletinField_MarketID_len, (Py_ssize_t)sizeof(self->data.MarketID));
			return -1;
		}
		strncpy(self->data.MarketID, pBulletinField_MarketID, sizeof(self->data.MarketID) );
		pBulletinField_MarketID = NULL;
	}



    return 0;
}

static void PyCThostFtdcBulletinField_dealloc(PyCThostFtdcBulletinField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBulletinField_repr(PyCThostFtdcBulletinField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "TradingDay", self->data.TradingDay 
		, "BulletinID", self->data.BulletinID
		, "SequenceNo", self->data.SequenceNo
		, "NewsType", self->data.NewsType 
		, "NewsUrgency", self->data.NewsUrgency
		, "SendTime", self->data.SendTime 
		, "Abstract", self->data.Abstract 
		, "ComeFrom", self->data.ComeFrom 
		, "Content", self->data.Content 
		, "URLLink", self->data.URLLink 
		, "MarketID", self->data.MarketID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBulletinField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBulletinField_get_ExchangeID(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcBulletinField_get_TradingDay(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcBulletinField_get_BulletinID(PyCThostFtdcBulletinField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BulletinID);
#else 
	return PyInt_FromLong(self->data.BulletinID);
#endif 
}

static PyObject *PyCThostFtdcBulletinField_get_SequenceNo(PyCThostFtdcBulletinField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcBulletinField_get_NewsType(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.NewsType);
}

static PyObject *PyCThostFtdcBulletinField_get_NewsUrgency(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.NewsUrgency), 1);
}

static PyObject *PyCThostFtdcBulletinField_get_SendTime(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.SendTime);
}

static PyObject *PyCThostFtdcBulletinField_get_Abstract(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.Abstract);
}

static PyObject *PyCThostFtdcBulletinField_get_ComeFrom(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.ComeFrom);
}

static PyObject *PyCThostFtdcBulletinField_get_Content(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.Content);
}

static PyObject *PyCThostFtdcBulletinField_get_URLLink(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.URLLink);
}

static PyObject *PyCThostFtdcBulletinField_get_MarketID(PyCThostFtdcBulletinField *self, void *closure) {
	return PyBytes_FromString(self->data.MarketID);
}

static int PyCThostFtdcBulletinField_set_ExchangeID(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBulletinField_set_TradingDay(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
	return 0;
}

static int PyCThostFtdcBulletinField_set_BulletinID(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BulletinID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BulletinID Expected int"); 
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
    self->data.BulletinID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBulletinField_set_SequenceNo(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBulletinField_set_NewsType(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewsType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewsType)) {
		PyErr_SetString(PyExc_ValueError, "NewsType must be less than 3 bytes");
		return -1;
	}
	strncpy(self->data.NewsType, buf, sizeof(self->data.NewsType));
	return 0;
}

static int PyCThostFtdcBulletinField_set_NewsUrgency(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewsUrgency Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewsUrgency)) {
		PyErr_SetString(PyExc_ValueError, "NewsUrgency must be less than 1 bytes");
		return -1;
	}
	self->data.NewsUrgency = *buf;
	return 0;
}

static int PyCThostFtdcBulletinField_set_SendTime(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SendTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SendTime)) {
		PyErr_SetString(PyExc_ValueError, "SendTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.SendTime, buf, sizeof(self->data.SendTime));
	return 0;
}

static int PyCThostFtdcBulletinField_set_Abstract(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Abstract Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Abstract)) {
		PyErr_SetString(PyExc_ValueError, "Abstract must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.Abstract, buf, sizeof(self->data.Abstract));
	return 0;
}

static int PyCThostFtdcBulletinField_set_ComeFrom(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ComeFrom Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ComeFrom)) {
		PyErr_SetString(PyExc_ValueError, "ComeFrom must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ComeFrom, buf, sizeof(self->data.ComeFrom));
	return 0;
}

static int PyCThostFtdcBulletinField_set_Content(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
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
	strncpy(self->data.Content, buf, sizeof(self->data.Content));
	return 0;
}

static int PyCThostFtdcBulletinField_set_URLLink(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "URLLink Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.URLLink)) {
		PyErr_SetString(PyExc_ValueError, "URLLink must be less than 201 bytes");
		return -1;
	}
	strncpy(self->data.URLLink, buf, sizeof(self->data.URLLink));
	return 0;
}

static int PyCThostFtdcBulletinField_set_MarketID(PyCThostFtdcBulletinField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MarketID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MarketID)) {
		PyErr_SetString(PyExc_ValueError, "MarketID must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.MarketID, buf, sizeof(self->data.MarketID));
	return 0;
}



static PyGetSetDef PyCThostFtdcBulletinField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcBulletinField_get_ExchangeID, (setter)PyCThostFtdcBulletinField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcBulletinField_get_TradingDay, (setter)PyCThostFtdcBulletinField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BulletinID", (getter)PyCThostFtdcBulletinField_get_BulletinID, (setter)PyCThostFtdcBulletinField_set_BulletinID, (char *)"BulletinID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcBulletinField_get_SequenceNo, (setter)PyCThostFtdcBulletinField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"NewsType", (getter)PyCThostFtdcBulletinField_get_NewsType, (setter)PyCThostFtdcBulletinField_set_NewsType, (char *)"NewsType", NULL},
	 {(char *)"NewsUrgency", (getter)PyCThostFtdcBulletinField_get_NewsUrgency, (setter)PyCThostFtdcBulletinField_set_NewsUrgency, (char *)"NewsUrgency", NULL},
	 {(char *)"SendTime", (getter)PyCThostFtdcBulletinField_get_SendTime, (setter)PyCThostFtdcBulletinField_set_SendTime, (char *)"SendTime", NULL},
	 {(char *)"Abstract", (getter)PyCThostFtdcBulletinField_get_Abstract, (setter)PyCThostFtdcBulletinField_set_Abstract, (char *)"Abstract", NULL},
	 {(char *)"ComeFrom", (getter)PyCThostFtdcBulletinField_get_ComeFrom, (setter)PyCThostFtdcBulletinField_set_ComeFrom, (char *)"ComeFrom", NULL},
	 {(char *)"Content", (getter)PyCThostFtdcBulletinField_get_Content, (setter)PyCThostFtdcBulletinField_set_Content, (char *)"Content", NULL},
	 {(char *)"URLLink", (getter)PyCThostFtdcBulletinField_get_URLLink, (setter)PyCThostFtdcBulletinField_set_URLLink, (char *)"URLLink", NULL},
	 {(char *)"MarketID", (getter)PyCThostFtdcBulletinField_get_MarketID, (setter)PyCThostFtdcBulletinField_set_MarketID, (char *)"MarketID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBulletinFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBulletinField",	/* tp_name */
	sizeof(PyCThostFtdcBulletinField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBulletinField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBulletinField_repr,   /* tp_repr */
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
	"CThostFtdcBulletinField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBulletinField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBulletinField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBulletinField_new,       /* tp_new */
};

int PyCThostFtdcBulletinFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBulletinField  */
	if (PyType_Ready(&PyCThostFtdcBulletinFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBulletinField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBulletinFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBulletinField", (PyObject *)&PyCThostFtdcBulletinFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBulletinField to module");
        Py_DECREF(&PyCThostFtdcBulletinFieldType);
		return -1;
    }

    return 0;
}
