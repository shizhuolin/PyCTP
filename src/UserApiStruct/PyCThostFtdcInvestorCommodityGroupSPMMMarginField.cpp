
#include "PyCThostFtdcInvestorCommodityGroupSPMMMarginField.h"



static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self = (PyCThostFtdcInvestorCommodityGroupSPMMMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_init(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "CommodityGroupID", "MarginBeforeDiscount", "MarginNoDiscount", "LongRisk", "ShortRisk", "CloseFrozenMargin", "InterCommodityRate", "MiniMarginRatio", "AdjustRatio", "IntraCommodityDiscount", "InterCommodityDiscount", "ExchMargin", "InvestorMargin", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "StrikeFrozenMargin",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorCommodityGroupSPMMMarginField_ExchangeID = NULL;
	Py_ssize_t pInvestorCommodityGroupSPMMMarginField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
	Py_ssize_t pInvestorCommodityGroupSPMMMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
	Py_ssize_t pInvestorCommodityGroupSPMMMarginField_InvestorID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pInvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
	Py_ssize_t pInvestorCommodityGroupSPMMMarginField_CommodityGroupID_len = 0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_MarginNoDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_LongRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_ShortRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_CloseFrozenMargin = 0.0;

	//TThostFtdcSPMMDiscountRatioType double
	double pInvestorCommodityGroupSPMMMarginField_InterCommodityRate = 0.0;

	//TThostFtdcSPMMDiscountRatioType double
	double pInvestorCommodityGroupSPMMMarginField_MiniMarginRatio = 0.0;

	//TThostFtdcRatioType double
	double pInvestorCommodityGroupSPMMMarginField_AdjustRatio = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_InterCommodityDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_ExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_InvestorMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddddddddddddddddd", (char **)kwlist
#endif

		, &pInvestorCommodityGroupSPMMMarginField_ExchangeID, &pInvestorCommodityGroupSPMMMarginField_ExchangeID_len
		, &pInvestorCommodityGroupSPMMMarginField_BrokerID, &pInvestorCommodityGroupSPMMMarginField_BrokerID_len
		, &pInvestorCommodityGroupSPMMMarginField_InvestorID, &pInvestorCommodityGroupSPMMMarginField_InvestorID_len
		, &pInvestorCommodityGroupSPMMMarginField_CommodityGroupID, &pInvestorCommodityGroupSPMMMarginField_CommodityGroupID_len
		, &pInvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount
		, &pInvestorCommodityGroupSPMMMarginField_MarginNoDiscount
		, &pInvestorCommodityGroupSPMMMarginField_LongRisk
		, &pInvestorCommodityGroupSPMMMarginField_ShortRisk
		, &pInvestorCommodityGroupSPMMMarginField_CloseFrozenMargin
		, &pInvestorCommodityGroupSPMMMarginField_InterCommodityRate
		, &pInvestorCommodityGroupSPMMMarginField_MiniMarginRatio
		, &pInvestorCommodityGroupSPMMMarginField_AdjustRatio
		, &pInvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount
		, &pInvestorCommodityGroupSPMMMarginField_InterCommodityDiscount
		, &pInvestorCommodityGroupSPMMMarginField_ExchMargin
		, &pInvestorCommodityGroupSPMMMarginField_InvestorMargin
		, &pInvestorCommodityGroupSPMMMarginField_FrozenCommission
		, &pInvestorCommodityGroupSPMMMarginField_Commission
		, &pInvestorCommodityGroupSPMMMarginField_FrozenCash
		, &pInvestorCommodityGroupSPMMMarginField_CashIn
		, &pInvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorCommodityGroupSPMMMarginField_ExchangeID != NULL) {
		if(pInvestorCommodityGroupSPMMMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorCommodityGroupSPMMMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorCommodityGroupSPMMMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorCommodityGroupSPMMMarginField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorCommodityGroupSPMMMarginField_BrokerID != NULL) {
		if(pInvestorCommodityGroupSPMMMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorCommodityGroupSPMMMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorCommodityGroupSPMMMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorCommodityGroupSPMMMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorCommodityGroupSPMMMarginField_InvestorID != NULL) {
		if(pInvestorCommodityGroupSPMMMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorCommodityGroupSPMMMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorCommodityGroupSPMMMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorCommodityGroupSPMMMarginField_InvestorID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pInvestorCommodityGroupSPMMMarginField_CommodityGroupID != NULL) {
		if(pInvestorCommodityGroupSPMMMarginField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
			PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", pInvestorCommodityGroupSPMMMarginField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
			return -1;
		}
		strncpy(self->data.CommodityGroupID, pInvestorCommodityGroupSPMMMarginField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
		pInvestorCommodityGroupSPMMMarginField_CommodityGroupID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.MarginBeforeDiscount = pInvestorCommodityGroupSPMMMarginField_MarginBeforeDiscount;
	//TThostFtdcMoneyType double
	self->data.MarginNoDiscount = pInvestorCommodityGroupSPMMMarginField_MarginNoDiscount;
	//TThostFtdcMoneyType double
	self->data.LongRisk = pInvestorCommodityGroupSPMMMarginField_LongRisk;
	//TThostFtdcMoneyType double
	self->data.ShortRisk = pInvestorCommodityGroupSPMMMarginField_ShortRisk;
	//TThostFtdcMoneyType double
	self->data.CloseFrozenMargin = pInvestorCommodityGroupSPMMMarginField_CloseFrozenMargin;
	//TThostFtdcSPMMDiscountRatioType double
	self->data.InterCommodityRate = pInvestorCommodityGroupSPMMMarginField_InterCommodityRate;
	//TThostFtdcSPMMDiscountRatioType double
	self->data.MiniMarginRatio = pInvestorCommodityGroupSPMMMarginField_MiniMarginRatio;
	//TThostFtdcRatioType double
	self->data.AdjustRatio = pInvestorCommodityGroupSPMMMarginField_AdjustRatio;
	//TThostFtdcMoneyType double
	self->data.IntraCommodityDiscount = pInvestorCommodityGroupSPMMMarginField_IntraCommodityDiscount;
	//TThostFtdcMoneyType double
	self->data.InterCommodityDiscount = pInvestorCommodityGroupSPMMMarginField_InterCommodityDiscount;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pInvestorCommodityGroupSPMMMarginField_ExchMargin;
	//TThostFtdcMoneyType double
	self->data.InvestorMargin = pInvestorCommodityGroupSPMMMarginField_InvestorMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pInvestorCommodityGroupSPMMMarginField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.Commission = pInvestorCommodityGroupSPMMMarginField_Commission;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pInvestorCommodityGroupSPMMMarginField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.CashIn = pInvestorCommodityGroupSPMMMarginField_CashIn;
	//TThostFtdcMoneyType double
	self->data.StrikeFrozenMargin = pInvestorCommodityGroupSPMMMarginField_StrikeFrozenMargin;


    return 0;
}

static void PyCThostFtdcInvestorCommodityGroupSPMMMarginField_dealloc(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_repr(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "CommodityGroupID", self->data.CommodityGroupID 
		, "MarginBeforeDiscount", self->data.MarginBeforeDiscount
		, "MarginNoDiscount", self->data.MarginNoDiscount
		, "LongRisk", self->data.LongRisk
		, "ShortRisk", self->data.ShortRisk
		, "CloseFrozenMargin", self->data.CloseFrozenMargin
		, "InterCommodityRate", self->data.InterCommodityRate
		, "MiniMarginRatio", self->data.MiniMarginRatio
		, "AdjustRatio", self->data.AdjustRatio
		, "IntraCommodityDiscount", self->data.IntraCommodityDiscount
		, "InterCommodityDiscount", self->data.InterCommodityDiscount
		, "ExchMargin", self->data.ExchMargin
		, "InvestorMargin", self->data.InvestorMargin
		, "FrozenCommission", self->data.FrozenCommission
		, "Commission", self->data.Commission
		, "FrozenCash", self->data.FrozenCash
		, "CashIn", self->data.CashIn
		, "StrikeFrozenMargin", self->data.StrikeFrozenMargin


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorCommodityGroupSPMMMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ExchangeID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_BrokerID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InvestorID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CommodityGroupID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityGroupID);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MarginBeforeDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginBeforeDiscount);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MarginNoDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginNoDiscount);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_LongRisk(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongRisk);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ShortRisk(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortRisk);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CloseFrozenMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InterCommodityRate(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterCommodityRate);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MiniMarginRatio(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MiniMarginRatio);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_AdjustRatio(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AdjustRatio);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_IntraCommodityDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraCommodityDiscount);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InterCommodityDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterCommodityDiscount);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ExchMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InvestorMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InvestorMargin);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_FrozenCommission(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_Commission(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_FrozenCash(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CashIn(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_StrikeFrozenMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeFrozenMargin);
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ExchangeID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_BrokerID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InvestorID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CommodityGroupID(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
		PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CommodityGroupID, buf, sizeof(self->data.CommodityGroupID));
	return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MarginBeforeDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MarginNoDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_LongRisk(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ShortRisk(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CloseFrozenMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InterCommodityRate(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterCommodityRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterCommodityRate = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MiniMarginRatio(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MiniMarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MiniMarginRatio = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_AdjustRatio(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AdjustRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AdjustRatio = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_IntraCommodityDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraCommodityDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraCommodityDiscount = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InterCommodityDiscount(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterCommodityDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterCommodityDiscount = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ExchMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InvestorMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InvestorMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_FrozenCommission(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_Commission(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_FrozenCash(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CashIn(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_StrikeFrozenMargin(PyCThostFtdcInvestorCommodityGroupSPMMMarginField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestorCommodityGroupSPMMMarginField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CommodityGroupID, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
	 {(char *)"MarginBeforeDiscount", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MarginBeforeDiscount, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MarginBeforeDiscount, (char *)"MarginBeforeDiscount", NULL},
	 {(char *)"MarginNoDiscount", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MarginNoDiscount, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MarginNoDiscount, (char *)"MarginNoDiscount", NULL},
	 {(char *)"LongRisk", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_LongRisk, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_LongRisk, (char *)"LongRisk", NULL},
	 {(char *)"ShortRisk", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ShortRisk, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ShortRisk, (char *)"ShortRisk", NULL},
	 {(char *)"CloseFrozenMargin", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CloseFrozenMargin, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CloseFrozenMargin, (char *)"CloseFrozenMargin", NULL},
	 {(char *)"InterCommodityRate", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InterCommodityRate, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InterCommodityRate, (char *)"InterCommodityRate", NULL},
	 {(char *)"MiniMarginRatio", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_MiniMarginRatio, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_MiniMarginRatio, (char *)"MiniMarginRatio", NULL},
	 {(char *)"AdjustRatio", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_AdjustRatio, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_AdjustRatio, (char *)"AdjustRatio", NULL},
	 {(char *)"IntraCommodityDiscount", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_IntraCommodityDiscount, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_IntraCommodityDiscount, (char *)"IntraCommodityDiscount", NULL},
	 {(char *)"InterCommodityDiscount", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InterCommodityDiscount, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InterCommodityDiscount, (char *)"InterCommodityDiscount", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_ExchMargin, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"InvestorMargin", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_InvestorMargin, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_InvestorMargin, (char *)"InvestorMargin", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_FrozenCommission, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_Commission, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_FrozenCash, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_CashIn, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"StrikeFrozenMargin", (getter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_get_StrikeFrozenMargin, (setter)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_set_StrikeFrozenMargin, (char *)"StrikeFrozenMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorCommodityGroupSPMMMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorCommodityGroupSPMMMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorCommodityGroupSPMMMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorCommodityGroupSPMMMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorCommodityGroupSPMMMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorCommodityGroupSPMMMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorCommodityGroupSPMMMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorCommodityGroupSPMMMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorCommodityGroupSPMMMarginField", (PyObject *)&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorCommodityGroupSPMMMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType);
		return -1;
    }

    return 0;
}
