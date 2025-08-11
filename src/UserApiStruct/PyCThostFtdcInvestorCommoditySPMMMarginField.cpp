
#include "PyCThostFtdcInvestorCommoditySPMMMarginField.h"



static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorCommoditySPMMMarginField *self = (PyCThostFtdcInvestorCommoditySPMMMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_init(PyCThostFtdcInvestorCommoditySPMMMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "CommodityID", "MarginBeforeDiscount", "MarginNoDiscount", "LongPosRisk", "LongOpenFrozenRisk", "LongCloseFrozenRisk", "ShortPosRisk", "ShortOpenFrozenRisk", "ShortCloseFrozenRisk", "IntraCommodityRate", "OptionDiscountRate", "PosDiscount", "OpenFrozenDiscount", "NetRisk", "CloseFrozenMargin", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "StrikeFrozenMargin",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorCommoditySPMMMarginField_ExchangeID = NULL;
	Py_ssize_t pInvestorCommoditySPMMMarginField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorCommoditySPMMMarginField_BrokerID = NULL;
	Py_ssize_t pInvestorCommoditySPMMMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorCommoditySPMMMarginField_InvestorID = NULL;
	Py_ssize_t pInvestorCommoditySPMMMarginField_InvestorID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pInvestorCommoditySPMMMarginField_CommodityID = NULL;
	Py_ssize_t pInvestorCommoditySPMMMarginField_CommodityID_len = 0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_MarginBeforeDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_MarginNoDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_LongPosRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_LongOpenFrozenRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_LongCloseFrozenRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_ShortPosRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_ShortOpenFrozenRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_ShortCloseFrozenRisk = 0.0;

	//TThostFtdcSPMMDiscountRatioType double
	double pInvestorCommoditySPMMMarginField_IntraCommodityRate = 0.0;

	//TThostFtdcSPMMDiscountRatioType double
	double pInvestorCommoditySPMMMarginField_OptionDiscountRate = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_PosDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_OpenFrozenDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_NetRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_CloseFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommoditySPMMMarginField_StrikeFrozenMargin = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddddddddddddddddddd", (char **)kwlist
#endif

		, &pInvestorCommoditySPMMMarginField_ExchangeID, &pInvestorCommoditySPMMMarginField_ExchangeID_len
		, &pInvestorCommoditySPMMMarginField_BrokerID, &pInvestorCommoditySPMMMarginField_BrokerID_len
		, &pInvestorCommoditySPMMMarginField_InvestorID, &pInvestorCommoditySPMMMarginField_InvestorID_len
		, &pInvestorCommoditySPMMMarginField_CommodityID, &pInvestorCommoditySPMMMarginField_CommodityID_len
		, &pInvestorCommoditySPMMMarginField_MarginBeforeDiscount
		, &pInvestorCommoditySPMMMarginField_MarginNoDiscount
		, &pInvestorCommoditySPMMMarginField_LongPosRisk
		, &pInvestorCommoditySPMMMarginField_LongOpenFrozenRisk
		, &pInvestorCommoditySPMMMarginField_LongCloseFrozenRisk
		, &pInvestorCommoditySPMMMarginField_ShortPosRisk
		, &pInvestorCommoditySPMMMarginField_ShortOpenFrozenRisk
		, &pInvestorCommoditySPMMMarginField_ShortCloseFrozenRisk
		, &pInvestorCommoditySPMMMarginField_IntraCommodityRate
		, &pInvestorCommoditySPMMMarginField_OptionDiscountRate
		, &pInvestorCommoditySPMMMarginField_PosDiscount
		, &pInvestorCommoditySPMMMarginField_OpenFrozenDiscount
		, &pInvestorCommoditySPMMMarginField_NetRisk
		, &pInvestorCommoditySPMMMarginField_CloseFrozenMargin
		, &pInvestorCommoditySPMMMarginField_FrozenCommission
		, &pInvestorCommoditySPMMMarginField_Commission
		, &pInvestorCommoditySPMMMarginField_FrozenCash
		, &pInvestorCommoditySPMMMarginField_CashIn
		, &pInvestorCommoditySPMMMarginField_StrikeFrozenMargin


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorCommoditySPMMMarginField_ExchangeID != NULL) {
		if(pInvestorCommoditySPMMMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorCommoditySPMMMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorCommoditySPMMMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorCommoditySPMMMarginField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorCommoditySPMMMarginField_BrokerID != NULL) {
		if(pInvestorCommoditySPMMMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorCommoditySPMMMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorCommoditySPMMMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorCommoditySPMMMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorCommoditySPMMMarginField_InvestorID != NULL) {
		if(pInvestorCommoditySPMMMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorCommoditySPMMMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorCommoditySPMMMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorCommoditySPMMMarginField_InvestorID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pInvestorCommoditySPMMMarginField_CommodityID != NULL) {
		if(pInvestorCommoditySPMMMarginField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
			PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", pInvestorCommoditySPMMMarginField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
			return -1;
		}
		strncpy(self->data.CommodityID, pInvestorCommoditySPMMMarginField_CommodityID, sizeof(self->data.CommodityID) );
		pInvestorCommoditySPMMMarginField_CommodityID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.MarginBeforeDiscount = pInvestorCommoditySPMMMarginField_MarginBeforeDiscount;
	//TThostFtdcMoneyType double
	self->data.MarginNoDiscount = pInvestorCommoditySPMMMarginField_MarginNoDiscount;
	//TThostFtdcMoneyType double
	self->data.LongPosRisk = pInvestorCommoditySPMMMarginField_LongPosRisk;
	//TThostFtdcMoneyType double
	self->data.LongOpenFrozenRisk = pInvestorCommoditySPMMMarginField_LongOpenFrozenRisk;
	//TThostFtdcMoneyType double
	self->data.LongCloseFrozenRisk = pInvestorCommoditySPMMMarginField_LongCloseFrozenRisk;
	//TThostFtdcMoneyType double
	self->data.ShortPosRisk = pInvestorCommoditySPMMMarginField_ShortPosRisk;
	//TThostFtdcMoneyType double
	self->data.ShortOpenFrozenRisk = pInvestorCommoditySPMMMarginField_ShortOpenFrozenRisk;
	//TThostFtdcMoneyType double
	self->data.ShortCloseFrozenRisk = pInvestorCommoditySPMMMarginField_ShortCloseFrozenRisk;
	//TThostFtdcSPMMDiscountRatioType double
	self->data.IntraCommodityRate = pInvestorCommoditySPMMMarginField_IntraCommodityRate;
	//TThostFtdcSPMMDiscountRatioType double
	self->data.OptionDiscountRate = pInvestorCommoditySPMMMarginField_OptionDiscountRate;
	//TThostFtdcMoneyType double
	self->data.PosDiscount = pInvestorCommoditySPMMMarginField_PosDiscount;
	//TThostFtdcMoneyType double
	self->data.OpenFrozenDiscount = pInvestorCommoditySPMMMarginField_OpenFrozenDiscount;
	//TThostFtdcMoneyType double
	self->data.NetRisk = pInvestorCommoditySPMMMarginField_NetRisk;
	//TThostFtdcMoneyType double
	self->data.CloseFrozenMargin = pInvestorCommoditySPMMMarginField_CloseFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pInvestorCommoditySPMMMarginField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.Commission = pInvestorCommoditySPMMMarginField_Commission;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pInvestorCommoditySPMMMarginField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.CashIn = pInvestorCommoditySPMMMarginField_CashIn;
	//TThostFtdcMoneyType double
	self->data.StrikeFrozenMargin = pInvestorCommoditySPMMMarginField_StrikeFrozenMargin;


    return 0;
}

static void PyCThostFtdcInvestorCommoditySPMMMarginField_dealloc(PyCThostFtdcInvestorCommoditySPMMMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_repr(PyCThostFtdcInvestorCommoditySPMMMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "CommodityID", self->data.CommodityID 
		, "MarginBeforeDiscount", self->data.MarginBeforeDiscount
		, "MarginNoDiscount", self->data.MarginNoDiscount
		, "LongPosRisk", self->data.LongPosRisk
		, "LongOpenFrozenRisk", self->data.LongOpenFrozenRisk
		, "LongCloseFrozenRisk", self->data.LongCloseFrozenRisk
		, "ShortPosRisk", self->data.ShortPosRisk
		, "ShortOpenFrozenRisk", self->data.ShortOpenFrozenRisk
		, "ShortCloseFrozenRisk", self->data.ShortCloseFrozenRisk
		, "IntraCommodityRate", self->data.IntraCommodityRate
		, "OptionDiscountRate", self->data.OptionDiscountRate
		, "PosDiscount", self->data.PosDiscount
		, "OpenFrozenDiscount", self->data.OpenFrozenDiscount
		, "NetRisk", self->data.NetRisk
		, "CloseFrozenMargin", self->data.CloseFrozenMargin
		, "FrozenCommission", self->data.FrozenCommission
		, "Commission", self->data.Commission
		, "FrozenCash", self->data.FrozenCash
		, "CashIn", self->data.CashIn
		, "StrikeFrozenMargin", self->data.StrikeFrozenMargin


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorCommoditySPMMMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_ExchangeID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_BrokerID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_InvestorID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_CommodityID(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityID);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_MarginBeforeDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginBeforeDiscount);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_MarginNoDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginNoDiscount);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongPosRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongPosRisk);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongOpenFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongOpenFrozenRisk);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongCloseFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongCloseFrozenRisk);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortPosRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortPosRisk);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortOpenFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortOpenFrozenRisk);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortCloseFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortCloseFrozenRisk);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_IntraCommodityRate(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraCommodityRate);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_OptionDiscountRate(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionDiscountRate);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_PosDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PosDiscount);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_OpenFrozenDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenFrozenDiscount);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_NetRisk(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.NetRisk);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_CloseFrozenMargin(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_FrozenCommission(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_Commission(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_FrozenCash(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_CashIn(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcInvestorCommoditySPMMMarginField_get_StrikeFrozenMargin(PyCThostFtdcInvestorCommoditySPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeFrozenMargin);
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_ExchangeID(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_BrokerID(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_InvestorID(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_CommodityID(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
		PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CommodityID, buf, sizeof(self->data.CommodityID));
	return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_MarginBeforeDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginBeforeDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginBeforeDiscount = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_MarginNoDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginNoDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginNoDiscount = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongPosRisk(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongPosRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongPosRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongOpenFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongOpenFrozenRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongOpenFrozenRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongCloseFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongCloseFrozenRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongCloseFrozenRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortPosRisk(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortPosRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortPosRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortOpenFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortOpenFrozenRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortOpenFrozenRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortCloseFrozenRisk(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortCloseFrozenRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortCloseFrozenRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_IntraCommodityRate(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraCommodityRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraCommodityRate = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_OptionDiscountRate(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionDiscountRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionDiscountRate = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_PosDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PosDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PosDiscount = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_OpenFrozenDiscount(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenFrozenDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenFrozenDiscount = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_NetRisk(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NetRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NetRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_CloseFrozenMargin(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_FrozenCommission(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenCommission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenCommission = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_Commission(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Commission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Commission = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_FrozenCash(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenCash Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenCash = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_CashIn(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CashIn Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CashIn = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommoditySPMMMarginField_set_StrikeFrozenMargin(PyCThostFtdcInvestorCommoditySPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeFrozenMargin = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcInvestorCommoditySPMMMarginField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"CommodityID", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_CommodityID, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_CommodityID, (char *)"CommodityID", NULL},
	 {(char *)"MarginBeforeDiscount", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_MarginBeforeDiscount, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_MarginBeforeDiscount, (char *)"MarginBeforeDiscount", NULL},
	 {(char *)"MarginNoDiscount", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_MarginNoDiscount, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_MarginNoDiscount, (char *)"MarginNoDiscount", NULL},
	 {(char *)"LongPosRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongPosRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongPosRisk, (char *)"LongPosRisk", NULL},
	 {(char *)"LongOpenFrozenRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongOpenFrozenRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongOpenFrozenRisk, (char *)"LongOpenFrozenRisk", NULL},
	 {(char *)"LongCloseFrozenRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_LongCloseFrozenRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_LongCloseFrozenRisk, (char *)"LongCloseFrozenRisk", NULL},
	 {(char *)"ShortPosRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortPosRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortPosRisk, (char *)"ShortPosRisk", NULL},
	 {(char *)"ShortOpenFrozenRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortOpenFrozenRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortOpenFrozenRisk, (char *)"ShortOpenFrozenRisk", NULL},
	 {(char *)"ShortCloseFrozenRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_ShortCloseFrozenRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_ShortCloseFrozenRisk, (char *)"ShortCloseFrozenRisk", NULL},
	 {(char *)"IntraCommodityRate", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_IntraCommodityRate, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_IntraCommodityRate, (char *)"IntraCommodityRate", NULL},
	 {(char *)"OptionDiscountRate", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_OptionDiscountRate, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_OptionDiscountRate, (char *)"OptionDiscountRate", NULL},
	 {(char *)"PosDiscount", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_PosDiscount, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_PosDiscount, (char *)"PosDiscount", NULL},
	 {(char *)"OpenFrozenDiscount", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_OpenFrozenDiscount, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_OpenFrozenDiscount, (char *)"OpenFrozenDiscount", NULL},
	 {(char *)"NetRisk", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_NetRisk, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_NetRisk, (char *)"NetRisk", NULL},
	 {(char *)"CloseFrozenMargin", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_CloseFrozenMargin, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_CloseFrozenMargin, (char *)"CloseFrozenMargin", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_FrozenCommission, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_Commission, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_FrozenCash, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_CashIn, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"StrikeFrozenMargin", (getter)PyCThostFtdcInvestorCommoditySPMMMarginField_get_StrikeFrozenMargin, (setter)PyCThostFtdcInvestorCommoditySPMMMarginField_set_StrikeFrozenMargin, (char *)"StrikeFrozenMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorCommoditySPMMMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorCommoditySPMMMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorCommoditySPMMMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorCommoditySPMMMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorCommoditySPMMMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorCommoditySPMMMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorCommoditySPMMMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorCommoditySPMMMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorCommoditySPMMMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorCommoditySPMMMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorCommoditySPMMMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorCommoditySPMMMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorCommoditySPMMMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorCommoditySPMMMarginField", (PyObject *)&PyCThostFtdcInvestorCommoditySPMMMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorCommoditySPMMMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorCommoditySPMMMarginFieldType);
		return -1;
    }

    return 0;
}
