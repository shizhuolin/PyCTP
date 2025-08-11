
#include "PyCThostFtdcInvestorProdRCAMSMarginField.h"



static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorProdRCAMSMarginField *self = (PyCThostFtdcInvestorProdRCAMSMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_init(PyCThostFtdcInvestorProdRCAMSMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "CombProductID", "HedgeFlag", "ProductGroupID", "RiskBeforeDiscount", "IntraInstrRisk", "BPosRisk", "SPosRisk", "IntraProdRisk", "NetRisk", "InterProdRisk", "ShortOptRiskAdj", "OptionRoyalty", "MMSACloseFrozenMargin", "CloseCombFrozenMargin", "CloseFrozenMargin", "MMSAOpenFrozenMargin", "DeliveryOpenFrozenMargin", "OpenFrozenMargin", "UseFrozenMargin", "MMSAExchMargin", "DeliveryExchMargin", "CombExchMargin", "ExchMargin", "UseMargin",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorProdRCAMSMarginField_ExchangeID = NULL;
	Py_ssize_t pInvestorProdRCAMSMarginField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorProdRCAMSMarginField_BrokerID = NULL;
	Py_ssize_t pInvestorProdRCAMSMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorProdRCAMSMarginField_InvestorID = NULL;
	Py_ssize_t pInvestorProdRCAMSMarginField_InvestorID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pInvestorProdRCAMSMarginField_CombProductID = NULL;
	Py_ssize_t pInvestorProdRCAMSMarginField_CombProductID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInvestorProdRCAMSMarginField_HedgeFlag = 0;

	//TThostFtdcProductIDType char[41]
	const char *pInvestorProdRCAMSMarginField_ProductGroupID = NULL;
	Py_ssize_t pInvestorProdRCAMSMarginField_ProductGroupID_len = 0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_RiskBeforeDiscount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_IntraInstrRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_BPosRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_SPosRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_IntraProdRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_NetRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_InterProdRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_ShortOptRiskAdj = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_OptionRoyalty = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_MMSACloseFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_CloseCombFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_CloseFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_MMSAOpenFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_OpenFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_UseFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_MMSAExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_DeliveryExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_CombExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_ExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRCAMSMarginField_UseMargin = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#ddddddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cs#ddddddddddddddddddddd", (char **)kwlist
#endif

		, &pInvestorProdRCAMSMarginField_ExchangeID, &pInvestorProdRCAMSMarginField_ExchangeID_len
		, &pInvestorProdRCAMSMarginField_BrokerID, &pInvestorProdRCAMSMarginField_BrokerID_len
		, &pInvestorProdRCAMSMarginField_InvestorID, &pInvestorProdRCAMSMarginField_InvestorID_len
		, &pInvestorProdRCAMSMarginField_CombProductID, &pInvestorProdRCAMSMarginField_CombProductID_len
		, &pInvestorProdRCAMSMarginField_HedgeFlag
		, &pInvestorProdRCAMSMarginField_ProductGroupID, &pInvestorProdRCAMSMarginField_ProductGroupID_len
		, &pInvestorProdRCAMSMarginField_RiskBeforeDiscount
		, &pInvestorProdRCAMSMarginField_IntraInstrRisk
		, &pInvestorProdRCAMSMarginField_BPosRisk
		, &pInvestorProdRCAMSMarginField_SPosRisk
		, &pInvestorProdRCAMSMarginField_IntraProdRisk
		, &pInvestorProdRCAMSMarginField_NetRisk
		, &pInvestorProdRCAMSMarginField_InterProdRisk
		, &pInvestorProdRCAMSMarginField_ShortOptRiskAdj
		, &pInvestorProdRCAMSMarginField_OptionRoyalty
		, &pInvestorProdRCAMSMarginField_MMSACloseFrozenMargin
		, &pInvestorProdRCAMSMarginField_CloseCombFrozenMargin
		, &pInvestorProdRCAMSMarginField_CloseFrozenMargin
		, &pInvestorProdRCAMSMarginField_MMSAOpenFrozenMargin
		, &pInvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin
		, &pInvestorProdRCAMSMarginField_OpenFrozenMargin
		, &pInvestorProdRCAMSMarginField_UseFrozenMargin
		, &pInvestorProdRCAMSMarginField_MMSAExchMargin
		, &pInvestorProdRCAMSMarginField_DeliveryExchMargin
		, &pInvestorProdRCAMSMarginField_CombExchMargin
		, &pInvestorProdRCAMSMarginField_ExchMargin
		, &pInvestorProdRCAMSMarginField_UseMargin


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorProdRCAMSMarginField_ExchangeID != NULL) {
		if(pInvestorProdRCAMSMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorProdRCAMSMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorProdRCAMSMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorProdRCAMSMarginField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorProdRCAMSMarginField_BrokerID != NULL) {
		if(pInvestorProdRCAMSMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorProdRCAMSMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorProdRCAMSMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorProdRCAMSMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorProdRCAMSMarginField_InvestorID != NULL) {
		if(pInvestorProdRCAMSMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorProdRCAMSMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorProdRCAMSMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorProdRCAMSMarginField_InvestorID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pInvestorProdRCAMSMarginField_CombProductID != NULL) {
		if(pInvestorProdRCAMSMarginField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
			PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", pInvestorProdRCAMSMarginField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
			return -1;
		}
		strncpy(self->data.CombProductID, pInvestorProdRCAMSMarginField_CombProductID, sizeof(self->data.CombProductID) );
		pInvestorProdRCAMSMarginField_CombProductID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInvestorProdRCAMSMarginField_HedgeFlag;

	//TThostFtdcProductIDType char[41]
	if(pInvestorProdRCAMSMarginField_ProductGroupID != NULL) {
		if(pInvestorProdRCAMSMarginField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pInvestorProdRCAMSMarginField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pInvestorProdRCAMSMarginField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pInvestorProdRCAMSMarginField_ProductGroupID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.RiskBeforeDiscount = pInvestorProdRCAMSMarginField_RiskBeforeDiscount;
	//TThostFtdcMoneyType double
	self->data.IntraInstrRisk = pInvestorProdRCAMSMarginField_IntraInstrRisk;
	//TThostFtdcMoneyType double
	self->data.BPosRisk = pInvestorProdRCAMSMarginField_BPosRisk;
	//TThostFtdcMoneyType double
	self->data.SPosRisk = pInvestorProdRCAMSMarginField_SPosRisk;
	//TThostFtdcMoneyType double
	self->data.IntraProdRisk = pInvestorProdRCAMSMarginField_IntraProdRisk;
	//TThostFtdcMoneyType double
	self->data.NetRisk = pInvestorProdRCAMSMarginField_NetRisk;
	//TThostFtdcMoneyType double
	self->data.InterProdRisk = pInvestorProdRCAMSMarginField_InterProdRisk;
	//TThostFtdcMoneyType double
	self->data.ShortOptRiskAdj = pInvestorProdRCAMSMarginField_ShortOptRiskAdj;
	//TThostFtdcMoneyType double
	self->data.OptionRoyalty = pInvestorProdRCAMSMarginField_OptionRoyalty;
	//TThostFtdcMoneyType double
	self->data.MMSACloseFrozenMargin = pInvestorProdRCAMSMarginField_MMSACloseFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.CloseCombFrozenMargin = pInvestorProdRCAMSMarginField_CloseCombFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.CloseFrozenMargin = pInvestorProdRCAMSMarginField_CloseFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.MMSAOpenFrozenMargin = pInvestorProdRCAMSMarginField_MMSAOpenFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.DeliveryOpenFrozenMargin = pInvestorProdRCAMSMarginField_DeliveryOpenFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.OpenFrozenMargin = pInvestorProdRCAMSMarginField_OpenFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.UseFrozenMargin = pInvestorProdRCAMSMarginField_UseFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.MMSAExchMargin = pInvestorProdRCAMSMarginField_MMSAExchMargin;
	//TThostFtdcMoneyType double
	self->data.DeliveryExchMargin = pInvestorProdRCAMSMarginField_DeliveryExchMargin;
	//TThostFtdcMoneyType double
	self->data.CombExchMargin = pInvestorProdRCAMSMarginField_CombExchMargin;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pInvestorProdRCAMSMarginField_ExchMargin;
	//TThostFtdcMoneyType double
	self->data.UseMargin = pInvestorProdRCAMSMarginField_UseMargin;


    return 0;
}

static void PyCThostFtdcInvestorProdRCAMSMarginField_dealloc(PyCThostFtdcInvestorProdRCAMSMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_repr(PyCThostFtdcInvestorProdRCAMSMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "CombProductID", self->data.CombProductID 
		, "HedgeFlag", self->data.HedgeFlag
		, "ProductGroupID", self->data.ProductGroupID 
		, "RiskBeforeDiscount", self->data.RiskBeforeDiscount
		, "IntraInstrRisk", self->data.IntraInstrRisk
		, "BPosRisk", self->data.BPosRisk
		, "SPosRisk", self->data.SPosRisk
		, "IntraProdRisk", self->data.IntraProdRisk
		, "NetRisk", self->data.NetRisk
		, "InterProdRisk", self->data.InterProdRisk
		, "ShortOptRiskAdj", self->data.ShortOptRiskAdj
		, "OptionRoyalty", self->data.OptionRoyalty
		, "MMSACloseFrozenMargin", self->data.MMSACloseFrozenMargin
		, "CloseCombFrozenMargin", self->data.CloseCombFrozenMargin
		, "CloseFrozenMargin", self->data.CloseFrozenMargin
		, "MMSAOpenFrozenMargin", self->data.MMSAOpenFrozenMargin
		, "DeliveryOpenFrozenMargin", self->data.DeliveryOpenFrozenMargin
		, "OpenFrozenMargin", self->data.OpenFrozenMargin
		, "UseFrozenMargin", self->data.UseFrozenMargin
		, "MMSAExchMargin", self->data.MMSAExchMargin
		, "DeliveryExchMargin", self->data.DeliveryExchMargin
		, "CombExchMargin", self->data.CombExchMargin
		, "ExchMargin", self->data.ExchMargin
		, "UseMargin", self->data.UseMargin


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdRCAMSMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_ExchangeID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_BrokerID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_InvestorID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_CombProductID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProductID);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_HedgeFlag(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_ProductGroupID(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_RiskBeforeDiscount(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RiskBeforeDiscount);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_IntraInstrRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraInstrRisk);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_BPosRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BPosRisk);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_SPosRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SPosRisk);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_IntraProdRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraProdRisk);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_NetRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.NetRisk);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_InterProdRisk(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterProdRisk);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_ShortOptRiskAdj(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortOptRiskAdj);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_OptionRoyalty(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionRoyalty);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSACloseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MMSACloseFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_CloseCombFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseCombFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_CloseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSAOpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MMSAOpenFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_DeliveryOpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DeliveryOpenFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_OpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_UseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UseFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSAExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MMSAExchMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_DeliveryExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DeliveryExchMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_CombExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CombExchMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_ExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcInvestorProdRCAMSMarginField_get_UseMargin(PyCThostFtdcInvestorProdRCAMSMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UseMargin);
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_ExchangeID(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_BrokerID(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_InvestorID(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_CombProductID(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
		PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProductID, buf, sizeof(self->data.CombProductID));
	return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_HedgeFlag(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_ProductGroupID(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_RiskBeforeDiscount(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RiskBeforeDiscount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RiskBeforeDiscount = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_IntraInstrRisk(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraInstrRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraInstrRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_BPosRisk(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BPosRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BPosRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_SPosRisk(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SPosRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SPosRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_IntraProdRisk(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraProdRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraProdRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_NetRisk(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_InterProdRisk(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterProdRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterProdRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_ShortOptRiskAdj(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortOptRiskAdj Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortOptRiskAdj = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_OptionRoyalty(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionRoyalty Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionRoyalty = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSACloseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MMSACloseFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MMSACloseFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_CloseCombFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseCombFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseCombFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_CloseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSAOpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MMSAOpenFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MMSAOpenFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_DeliveryOpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryOpenFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryOpenFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_OpenFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_UseFrozenMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UseFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSAExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MMSAExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MMSAExchMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_DeliveryExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryExchMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_CombExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CombExchMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_ExchMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRCAMSMarginField_set_UseMargin(PyCThostFtdcInvestorProdRCAMSMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UseMargin = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcInvestorProdRCAMSMarginField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"CombProductID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_CombProductID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_CombProductID, (char *)"CombProductID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_HedgeFlag, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_ProductGroupID, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
	 {(char *)"RiskBeforeDiscount", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_RiskBeforeDiscount, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_RiskBeforeDiscount, (char *)"RiskBeforeDiscount", NULL},
	 {(char *)"IntraInstrRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_IntraInstrRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_IntraInstrRisk, (char *)"IntraInstrRisk", NULL},
	 {(char *)"BPosRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_BPosRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_BPosRisk, (char *)"BPosRisk", NULL},
	 {(char *)"SPosRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_SPosRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_SPosRisk, (char *)"SPosRisk", NULL},
	 {(char *)"IntraProdRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_IntraProdRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_IntraProdRisk, (char *)"IntraProdRisk", NULL},
	 {(char *)"NetRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_NetRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_NetRisk, (char *)"NetRisk", NULL},
	 {(char *)"InterProdRisk", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_InterProdRisk, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_InterProdRisk, (char *)"InterProdRisk", NULL},
	 {(char *)"ShortOptRiskAdj", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_ShortOptRiskAdj, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_ShortOptRiskAdj, (char *)"ShortOptRiskAdj", NULL},
	 {(char *)"OptionRoyalty", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_OptionRoyalty, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_OptionRoyalty, (char *)"OptionRoyalty", NULL},
	 {(char *)"MMSACloseFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSACloseFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSACloseFrozenMargin, (char *)"MMSACloseFrozenMargin", NULL},
	 {(char *)"CloseCombFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_CloseCombFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_CloseCombFrozenMargin, (char *)"CloseCombFrozenMargin", NULL},
	 {(char *)"CloseFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_CloseFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_CloseFrozenMargin, (char *)"CloseFrozenMargin", NULL},
	 {(char *)"MMSAOpenFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSAOpenFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSAOpenFrozenMargin, (char *)"MMSAOpenFrozenMargin", NULL},
	 {(char *)"DeliveryOpenFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_DeliveryOpenFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_DeliveryOpenFrozenMargin, (char *)"DeliveryOpenFrozenMargin", NULL},
	 {(char *)"OpenFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_OpenFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_OpenFrozenMargin, (char *)"OpenFrozenMargin", NULL},
	 {(char *)"UseFrozenMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_UseFrozenMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_UseFrozenMargin, (char *)"UseFrozenMargin", NULL},
	 {(char *)"MMSAExchMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_MMSAExchMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_MMSAExchMargin, (char *)"MMSAExchMargin", NULL},
	 {(char *)"DeliveryExchMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_DeliveryExchMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_DeliveryExchMargin, (char *)"DeliveryExchMargin", NULL},
	 {(char *)"CombExchMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_CombExchMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_CombExchMargin, (char *)"CombExchMargin", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_ExchMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"UseMargin", (getter)PyCThostFtdcInvestorProdRCAMSMarginField_get_UseMargin, (setter)PyCThostFtdcInvestorProdRCAMSMarginField_set_UseMargin, (char *)"UseMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorProdRCAMSMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorProdRCAMSMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorProdRCAMSMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorProdRCAMSMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorProdRCAMSMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorProdRCAMSMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorProdRCAMSMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorProdRCAMSMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorProdRCAMSMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorProdRCAMSMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorProdRCAMSMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorProdRCAMSMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorProdRCAMSMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorProdRCAMSMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorProdRCAMSMarginField", (PyObject *)&PyCThostFtdcInvestorProdRCAMSMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdRCAMSMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorProdRCAMSMarginFieldType);
		return -1;
    }

    return 0;
}
