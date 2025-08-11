
#include "PyCThostFtdcExchangeTradeField.h"



static PyObject *PyCThostFtdcExchangeTradeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeTradeField *self = (PyCThostFtdcExchangeTradeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeTradeField_init(PyCThostFtdcExchangeTradeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "TradeID", "Direction", "OrderSysID", "ParticipantID", "ClientID", "TradingRole", "reserve1", "OffsetFlag", "HedgeFlag", "Price", "Volume", "TradeDate", "TradeTime", "TradeType", "PriceSource", "TraderID", "OrderLocalID", "ClearingPartID", "BusinessUnit", "SequenceNo", "TradeSource", "ExchangeInstID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeTradeField_ExchangeID = NULL;
	Py_ssize_t pExchangeTradeField_ExchangeID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pExchangeTradeField_TradeID = NULL;
	Py_ssize_t pExchangeTradeField_TradeID_len = 0;

	//TThostFtdcDirectionType char
	char pExchangeTradeField_Direction = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeTradeField_OrderSysID = NULL;
	Py_ssize_t pExchangeTradeField_OrderSysID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeTradeField_ParticipantID = NULL;
	Py_ssize_t pExchangeTradeField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeTradeField_ClientID = NULL;
	Py_ssize_t pExchangeTradeField_ClientID_len = 0;

	//TThostFtdcTradingRoleType char
	char pExchangeTradeField_TradingRole = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeTradeField_reserve1 = NULL;
	Py_ssize_t pExchangeTradeField_reserve1_len = 0;

	//TThostFtdcOffsetFlagType char
	char pExchangeTradeField_OffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pExchangeTradeField_HedgeFlag = 0;

	//TThostFtdcPriceType double
	double pExchangeTradeField_Price = 0.0;

	//TThostFtdcVolumeType int
	int pExchangeTradeField_Volume = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeTradeField_TradeDate = NULL;
	Py_ssize_t pExchangeTradeField_TradeDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeTradeField_TradeTime = NULL;
	Py_ssize_t pExchangeTradeField_TradeTime_len = 0;

	//TThostFtdcTradeTypeType char
	char pExchangeTradeField_TradeType = 0;

	//TThostFtdcPriceSourceType char
	char pExchangeTradeField_PriceSource = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeTradeField_TraderID = NULL;
	Py_ssize_t pExchangeTradeField_TraderID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeTradeField_OrderLocalID = NULL;
	Py_ssize_t pExchangeTradeField_OrderLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeTradeField_ClearingPartID = NULL;
	Py_ssize_t pExchangeTradeField_ClearingPartID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeTradeField_BusinessUnit = NULL;
	Py_ssize_t pExchangeTradeField_BusinessUnit_len = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeTradeField_SequenceNo = 0;

	//TThostFtdcTradeSourceType char
	char pExchangeTradeField_TradeSource = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeTradeField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeTradeField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#cy#ccdiy#y#ccy#y#y#y#icy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#s#cs#ccdis#s#ccs#s#s#s#ics#", (char **)kwlist
#endif

		, &pExchangeTradeField_ExchangeID, &pExchangeTradeField_ExchangeID_len
		, &pExchangeTradeField_TradeID, &pExchangeTradeField_TradeID_len
		, &pExchangeTradeField_Direction
		, &pExchangeTradeField_OrderSysID, &pExchangeTradeField_OrderSysID_len
		, &pExchangeTradeField_ParticipantID, &pExchangeTradeField_ParticipantID_len
		, &pExchangeTradeField_ClientID, &pExchangeTradeField_ClientID_len
		, &pExchangeTradeField_TradingRole
		, &pExchangeTradeField_reserve1, &pExchangeTradeField_reserve1_len
		, &pExchangeTradeField_OffsetFlag
		, &pExchangeTradeField_HedgeFlag
		, &pExchangeTradeField_Price
		, &pExchangeTradeField_Volume
		, &pExchangeTradeField_TradeDate, &pExchangeTradeField_TradeDate_len
		, &pExchangeTradeField_TradeTime, &pExchangeTradeField_TradeTime_len
		, &pExchangeTradeField_TradeType
		, &pExchangeTradeField_PriceSource
		, &pExchangeTradeField_TraderID, &pExchangeTradeField_TraderID_len
		, &pExchangeTradeField_OrderLocalID, &pExchangeTradeField_OrderLocalID_len
		, &pExchangeTradeField_ClearingPartID, &pExchangeTradeField_ClearingPartID_len
		, &pExchangeTradeField_BusinessUnit, &pExchangeTradeField_BusinessUnit_len
		, &pExchangeTradeField_SequenceNo
		, &pExchangeTradeField_TradeSource
		, &pExchangeTradeField_ExchangeInstID, &pExchangeTradeField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeTradeField_ExchangeID != NULL) {
		if(pExchangeTradeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeTradeField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeTradeField_ExchangeID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pExchangeTradeField_TradeID != NULL) {
		if(pExchangeTradeField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
			PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
			return -1;
		}
		strncpy(self->data.TradeID, pExchangeTradeField_TradeID, sizeof(self->data.TradeID) );
		pExchangeTradeField_TradeID = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pExchangeTradeField_Direction;

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeTradeField_OrderSysID != NULL) {
		if(pExchangeTradeField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pExchangeTradeField_OrderSysID, sizeof(self->data.OrderSysID) );
		pExchangeTradeField_OrderSysID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeTradeField_ParticipantID != NULL) {
		if(pExchangeTradeField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeTradeField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeTradeField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeTradeField_ClientID != NULL) {
		if(pExchangeTradeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeTradeField_ClientID, sizeof(self->data.ClientID) );
		pExchangeTradeField_ClientID = NULL;
	}

	//TThostFtdcTradingRoleType char
	self->data.TradingRole = pExchangeTradeField_TradingRole;

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeTradeField_reserve1 != NULL) {
		if(pExchangeTradeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeTradeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeTradeField_reserve1, sizeof(self->data.reserve1) );
		pExchangeTradeField_reserve1 = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.OffsetFlag = pExchangeTradeField_OffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pExchangeTradeField_HedgeFlag;

	//TThostFtdcPriceType double
	self->data.Price = pExchangeTradeField_Price;
	//TThostFtdcVolumeType int
	self->data.Volume = pExchangeTradeField_Volume;

	//TThostFtdcDateType char[9]
	if(pExchangeTradeField_TradeDate != NULL) {
		if(pExchangeTradeField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pExchangeTradeField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pExchangeTradeField_TradeDate, sizeof(self->data.TradeDate) );
		pExchangeTradeField_TradeDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeTradeField_TradeTime != NULL) {
		if(pExchangeTradeField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pExchangeTradeField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pExchangeTradeField_TradeTime, sizeof(self->data.TradeTime) );
		pExchangeTradeField_TradeTime = NULL;
	}

	//TThostFtdcTradeTypeType char
	self->data.TradeType = pExchangeTradeField_TradeType;

	//TThostFtdcPriceSourceType char
	self->data.PriceSource = pExchangeTradeField_PriceSource;

	//TThostFtdcTraderIDType char[21]
	if(pExchangeTradeField_TraderID != NULL) {
		if(pExchangeTradeField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeTradeField_TraderID, sizeof(self->data.TraderID) );
		pExchangeTradeField_TraderID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeTradeField_OrderLocalID != NULL) {
		if(pExchangeTradeField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pExchangeTradeField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pExchangeTradeField_OrderLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeTradeField_ClearingPartID != NULL) {
		if(pExchangeTradeField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pExchangeTradeField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pExchangeTradeField_ClearingPartID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeTradeField_BusinessUnit != NULL) {
		if(pExchangeTradeField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeTradeField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeTradeField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeTradeField_BusinessUnit = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pExchangeTradeField_SequenceNo;

	//TThostFtdcTradeSourceType char
	self->data.TradeSource = pExchangeTradeField_TradeSource;

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeTradeField_ExchangeInstID != NULL) {
		if(pExchangeTradeField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeTradeField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeTradeField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeTradeField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeTradeField_dealloc(PyCThostFtdcExchangeTradeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeTradeField_repr(PyCThostFtdcExchangeTradeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:c,s:c,s:d,s:i,s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:s,s:c,s:s,s:c,s:c,s:d,s:i,s:s,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:i,s:c,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "TradeID", self->data.TradeID 
		, "Direction", self->data.Direction
		, "OrderSysID", self->data.OrderSysID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "TradingRole", self->data.TradingRole
		, "reserve1", self->data.reserve1 
		, "OffsetFlag", self->data.OffsetFlag
		, "HedgeFlag", self->data.HedgeFlag
		, "Price", self->data.Price
		, "Volume", self->data.Volume
		, "TradeDate", self->data.TradeDate 
		, "TradeTime", self->data.TradeTime 
		, "TradeType", self->data.TradeType
		, "PriceSource", self->data.PriceSource
		, "TraderID", self->data.TraderID 
		, "OrderLocalID", self->data.OrderLocalID 
		, "ClearingPartID", self->data.ClearingPartID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "SequenceNo", self->data.SequenceNo
		, "TradeSource", self->data.TradeSource
		, "ExchangeInstID", self->data.ExchangeInstID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeTradeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_ExchangeID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_TradeID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeID);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_Direction(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_OrderSysID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_ParticipantID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_ClientID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_TradingRole(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradingRole), 1);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_reserve1(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_OffsetFlag(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_HedgeFlag(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_Price(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Price);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_Volume(PyCThostFtdcExchangeTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcExchangeTradeField_get_TradeDate(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_TradeTime(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_TradeType(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradeType), 1);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_PriceSource(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PriceSource), 1);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_TraderID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_OrderLocalID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_ClearingPartID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_BusinessUnit(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_SequenceNo(PyCThostFtdcExchangeTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcExchangeTradeField_get_TradeSource(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradeSource), 1);
}

static PyObject *PyCThostFtdcExchangeTradeField_get_ExchangeInstID(PyCThostFtdcExchangeTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcExchangeTradeField_set_ExchangeID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeTradeField_set_TradeID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeID)) {
		PyErr_SetString(PyExc_ValueError, "TradeID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TradeID, buf, sizeof(self->data.TradeID));
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_Direction(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
		PyErr_SetString(PyExc_ValueError, "Direction must be less than 1 bytes");
		return -1;
	}
	self->data.Direction = *buf;
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_OrderSysID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_ParticipantID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeTradeField_set_ClientID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeTradeField_set_TradingRole(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingRole Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingRole)) {
		PyErr_SetString(PyExc_ValueError, "TradingRole must be less than 1 bytes");
		return -1;
	}
	self->data.TradingRole = *buf;
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_reserve1(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeTradeField_set_OffsetFlag(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "OffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_HedgeFlag(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "HedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.HedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_Price(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Price Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Price = buf;
    return 0;
}

static int PyCThostFtdcExchangeTradeField_set_Volume(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Volume Expected int"); 
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
    self->data.Volume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeTradeField_set_TradeDate(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
		PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeDate, buf, sizeof(self->data.TradeDate));
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_TradeTime(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
		PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeTime, buf, sizeof(self->data.TradeTime));
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_TradeType(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeType)) {
		PyErr_SetString(PyExc_ValueError, "TradeType must be less than 1 bytes");
		return -1;
	}
	self->data.TradeType = *buf;
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_PriceSource(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PriceSource Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PriceSource)) {
		PyErr_SetString(PyExc_ValueError, "PriceSource must be less than 1 bytes");
		return -1;
	}
	self->data.PriceSource = *buf;
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_TraderID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeTradeField_set_OrderLocalID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
		PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_ClearingPartID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
		PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ClearingPartID, buf, sizeof(self->data.ClearingPartID));
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_BusinessUnit(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
		PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.BusinessUnit, buf, sizeof(self->data.BusinessUnit));
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_SequenceNo(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeTradeField_set_TradeSource(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeSource Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeSource)) {
		PyErr_SetString(PyExc_ValueError, "TradeSource must be less than 1 bytes");
		return -1;
	}
	self->data.TradeSource = *buf;
	return 0;
}

static int PyCThostFtdcExchangeTradeField_set_ExchangeInstID(PyCThostFtdcExchangeTradeField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeTradeField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeTradeField_get_ExchangeID, (setter)PyCThostFtdcExchangeTradeField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TradeID", (getter)PyCThostFtdcExchangeTradeField_get_TradeID, (setter)PyCThostFtdcExchangeTradeField_set_TradeID, (char *)"TradeID", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcExchangeTradeField_get_Direction, (setter)PyCThostFtdcExchangeTradeField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcExchangeTradeField_get_OrderSysID, (setter)PyCThostFtdcExchangeTradeField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeTradeField_get_ParticipantID, (setter)PyCThostFtdcExchangeTradeField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeTradeField_get_ClientID, (setter)PyCThostFtdcExchangeTradeField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"TradingRole", (getter)PyCThostFtdcExchangeTradeField_get_TradingRole, (setter)PyCThostFtdcExchangeTradeField_set_TradingRole, (char *)"TradingRole", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeTradeField_get_reserve1, (setter)PyCThostFtdcExchangeTradeField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OffsetFlag", (getter)PyCThostFtdcExchangeTradeField_get_OffsetFlag, (setter)PyCThostFtdcExchangeTradeField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeTradeField_get_HedgeFlag, (setter)PyCThostFtdcExchangeTradeField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"Price", (getter)PyCThostFtdcExchangeTradeField_get_Price, (setter)PyCThostFtdcExchangeTradeField_set_Price, (char *)"Price", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcExchangeTradeField_get_Volume, (setter)PyCThostFtdcExchangeTradeField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcExchangeTradeField_get_TradeDate, (setter)PyCThostFtdcExchangeTradeField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcExchangeTradeField_get_TradeTime, (setter)PyCThostFtdcExchangeTradeField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"TradeType", (getter)PyCThostFtdcExchangeTradeField_get_TradeType, (setter)PyCThostFtdcExchangeTradeField_set_TradeType, (char *)"TradeType", NULL},
	 {(char *)"PriceSource", (getter)PyCThostFtdcExchangeTradeField_get_PriceSource, (setter)PyCThostFtdcExchangeTradeField_set_PriceSource, (char *)"PriceSource", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeTradeField_get_TraderID, (setter)PyCThostFtdcExchangeTradeField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcExchangeTradeField_get_OrderLocalID, (setter)PyCThostFtdcExchangeTradeField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeTradeField_get_ClearingPartID, (setter)PyCThostFtdcExchangeTradeField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeTradeField_get_BusinessUnit, (setter)PyCThostFtdcExchangeTradeField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeTradeField_get_SequenceNo, (setter)PyCThostFtdcExchangeTradeField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"TradeSource", (getter)PyCThostFtdcExchangeTradeField_get_TradeSource, (setter)PyCThostFtdcExchangeTradeField_set_TradeSource, (char *)"TradeSource", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeTradeField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeTradeField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeTradeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeTradeField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeTradeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeTradeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeTradeField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeTradeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeTradeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeTradeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeTradeField_new,       /* tp_new */
};

int PyCThostFtdcExchangeTradeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeTradeField  */
	if (PyType_Ready(&PyCThostFtdcExchangeTradeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeTradeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeTradeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeTradeField", (PyObject *)&PyCThostFtdcExchangeTradeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeTradeField to module");
        Py_DECREF(&PyCThostFtdcExchangeTradeFieldType);
		return -1;
    }

    return 0;
}
