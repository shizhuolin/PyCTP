
#include "PyCThostFtdcInvestorProdSPBMDetailField.h"



static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorProdSPBMDetailField *self = (PyCThostFtdcInvestorProdSPBMDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_init(PyCThostFtdcInvestorProdSPBMDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "IntraInstrMargin", "BCollectingMargin", "SCollectingMargin", "IntraProdMargin", "NetMargin", "InterProdMargin", "SingleMargin", "AddOnMargin", "DeliveryMargin", "CallOptionMinRisk", "PutOptionMinRisk", "OptionMinRisk", "OptionValueOffset", "OptionRoyalty", "RealOptionValueOffset", "Margin", "ExchMargin",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorProdSPBMDetailField_ExchangeID = NULL;
	Py_ssize_t pInvestorProdSPBMDetailField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorProdSPBMDetailField_BrokerID = NULL;
	Py_ssize_t pInvestorProdSPBMDetailField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorProdSPBMDetailField_InvestorID = NULL;
	Py_ssize_t pInvestorProdSPBMDetailField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
	Py_ssize_t pInvestorProdSPBMDetailField_ProdFamilyCode_len = 0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_IntraInstrMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_BCollectingMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_SCollectingMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_IntraProdMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_NetMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_InterProdMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_SingleMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_AddOnMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_DeliveryMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_CallOptionMinRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_PutOptionMinRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_OptionMinRisk = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_OptionValueOffset = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_OptionRoyalty = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_RealOptionValueOffset = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_Margin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdSPBMDetailField_ExchMargin = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddddddddddddddddd", (char **)kwlist
#endif

		, &pInvestorProdSPBMDetailField_ExchangeID, &pInvestorProdSPBMDetailField_ExchangeID_len
		, &pInvestorProdSPBMDetailField_BrokerID, &pInvestorProdSPBMDetailField_BrokerID_len
		, &pInvestorProdSPBMDetailField_InvestorID, &pInvestorProdSPBMDetailField_InvestorID_len
		, &pInvestorProdSPBMDetailField_ProdFamilyCode, &pInvestorProdSPBMDetailField_ProdFamilyCode_len
		, &pInvestorProdSPBMDetailField_IntraInstrMargin
		, &pInvestorProdSPBMDetailField_BCollectingMargin
		, &pInvestorProdSPBMDetailField_SCollectingMargin
		, &pInvestorProdSPBMDetailField_IntraProdMargin
		, &pInvestorProdSPBMDetailField_NetMargin
		, &pInvestorProdSPBMDetailField_InterProdMargin
		, &pInvestorProdSPBMDetailField_SingleMargin
		, &pInvestorProdSPBMDetailField_AddOnMargin
		, &pInvestorProdSPBMDetailField_DeliveryMargin
		, &pInvestorProdSPBMDetailField_CallOptionMinRisk
		, &pInvestorProdSPBMDetailField_PutOptionMinRisk
		, &pInvestorProdSPBMDetailField_OptionMinRisk
		, &pInvestorProdSPBMDetailField_OptionValueOffset
		, &pInvestorProdSPBMDetailField_OptionRoyalty
		, &pInvestorProdSPBMDetailField_RealOptionValueOffset
		, &pInvestorProdSPBMDetailField_Margin
		, &pInvestorProdSPBMDetailField_ExchMargin


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorProdSPBMDetailField_ExchangeID != NULL) {
		if(pInvestorProdSPBMDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorProdSPBMDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorProdSPBMDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorProdSPBMDetailField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorProdSPBMDetailField_BrokerID != NULL) {
		if(pInvestorProdSPBMDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorProdSPBMDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorProdSPBMDetailField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorProdSPBMDetailField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorProdSPBMDetailField_InvestorID != NULL) {
		if(pInvestorProdSPBMDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorProdSPBMDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorProdSPBMDetailField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorProdSPBMDetailField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorProdSPBMDetailField_ProdFamilyCode != NULL) {
		if(pInvestorProdSPBMDetailField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pInvestorProdSPBMDetailField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pInvestorProdSPBMDetailField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.IntraInstrMargin = pInvestorProdSPBMDetailField_IntraInstrMargin;
	//TThostFtdcMoneyType double
	self->data.BCollectingMargin = pInvestorProdSPBMDetailField_BCollectingMargin;
	//TThostFtdcMoneyType double
	self->data.SCollectingMargin = pInvestorProdSPBMDetailField_SCollectingMargin;
	//TThostFtdcMoneyType double
	self->data.IntraProdMargin = pInvestorProdSPBMDetailField_IntraProdMargin;
	//TThostFtdcMoneyType double
	self->data.NetMargin = pInvestorProdSPBMDetailField_NetMargin;
	//TThostFtdcMoneyType double
	self->data.InterProdMargin = pInvestorProdSPBMDetailField_InterProdMargin;
	//TThostFtdcMoneyType double
	self->data.SingleMargin = pInvestorProdSPBMDetailField_SingleMargin;
	//TThostFtdcMoneyType double
	self->data.AddOnMargin = pInvestorProdSPBMDetailField_AddOnMargin;
	//TThostFtdcMoneyType double
	self->data.DeliveryMargin = pInvestorProdSPBMDetailField_DeliveryMargin;
	//TThostFtdcMoneyType double
	self->data.CallOptionMinRisk = pInvestorProdSPBMDetailField_CallOptionMinRisk;
	//TThostFtdcMoneyType double
	self->data.PutOptionMinRisk = pInvestorProdSPBMDetailField_PutOptionMinRisk;
	//TThostFtdcMoneyType double
	self->data.OptionMinRisk = pInvestorProdSPBMDetailField_OptionMinRisk;
	//TThostFtdcMoneyType double
	self->data.OptionValueOffset = pInvestorProdSPBMDetailField_OptionValueOffset;
	//TThostFtdcMoneyType double
	self->data.OptionRoyalty = pInvestorProdSPBMDetailField_OptionRoyalty;
	//TThostFtdcMoneyType double
	self->data.RealOptionValueOffset = pInvestorProdSPBMDetailField_RealOptionValueOffset;
	//TThostFtdcMoneyType double
	self->data.Margin = pInvestorProdSPBMDetailField_Margin;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pInvestorProdSPBMDetailField_ExchMargin;


    return 0;
}

static void PyCThostFtdcInvestorProdSPBMDetailField_dealloc(PyCThostFtdcInvestorProdSPBMDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_repr(PyCThostFtdcInvestorProdSPBMDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "IntraInstrMargin", self->data.IntraInstrMargin
		, "BCollectingMargin", self->data.BCollectingMargin
		, "SCollectingMargin", self->data.SCollectingMargin
		, "IntraProdMargin", self->data.IntraProdMargin
		, "NetMargin", self->data.NetMargin
		, "InterProdMargin", self->data.InterProdMargin
		, "SingleMargin", self->data.SingleMargin
		, "AddOnMargin", self->data.AddOnMargin
		, "DeliveryMargin", self->data.DeliveryMargin
		, "CallOptionMinRisk", self->data.CallOptionMinRisk
		, "PutOptionMinRisk", self->data.PutOptionMinRisk
		, "OptionMinRisk", self->data.OptionMinRisk
		, "OptionValueOffset", self->data.OptionValueOffset
		, "OptionRoyalty", self->data.OptionRoyalty
		, "RealOptionValueOffset", self->data.RealOptionValueOffset
		, "Margin", self->data.Margin
		, "ExchMargin", self->data.ExchMargin


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdSPBMDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_ExchangeID(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_BrokerID(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_InvestorID(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_ProdFamilyCode(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_IntraInstrMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraInstrMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_BCollectingMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BCollectingMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_SCollectingMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SCollectingMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_IntraProdMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraProdMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_NetMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.NetMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_InterProdMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterProdMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_SingleMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SingleMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_AddOnMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_DeliveryMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DeliveryMargin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_CallOptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CallOptionMinRisk);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_PutOptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PutOptionMinRisk);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_OptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionMinRisk);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_OptionValueOffset(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionValueOffset);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_OptionRoyalty(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionRoyalty);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_RealOptionValueOffset(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RealOptionValueOffset);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_Margin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Margin);
}

static PyObject *PyCThostFtdcInvestorProdSPBMDetailField_get_ExchMargin(PyCThostFtdcInvestorProdSPBMDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_ExchangeID(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdSPBMDetailField_set_BrokerID(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdSPBMDetailField_set_InvestorID(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdSPBMDetailField_set_ProdFamilyCode(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_IntraInstrMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraInstrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraInstrMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_BCollectingMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BCollectingMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BCollectingMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_SCollectingMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SCollectingMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SCollectingMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_IntraProdMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraProdMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraProdMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_NetMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NetMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NetMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_InterProdMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterProdMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterProdMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_SingleMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SingleMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SingleMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_AddOnMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_DeliveryMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_CallOptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CallOptionMinRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CallOptionMinRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_PutOptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PutOptionMinRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PutOptionMinRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_OptionMinRisk(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionMinRisk Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionMinRisk = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_OptionValueOffset(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionValueOffset Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionValueOffset = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_OptionRoyalty(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdSPBMDetailField_set_RealOptionValueOffset(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RealOptionValueOffset Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RealOptionValueOffset = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_Margin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Margin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Margin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdSPBMDetailField_set_ExchMargin(PyCThostFtdcInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestorProdSPBMDetailField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_ExchangeID, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_BrokerID, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_InvestorID, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_ProdFamilyCode, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"IntraInstrMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_IntraInstrMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_IntraInstrMargin, (char *)"IntraInstrMargin", NULL},
	 {(char *)"BCollectingMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_BCollectingMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_BCollectingMargin, (char *)"BCollectingMargin", NULL},
	 {(char *)"SCollectingMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_SCollectingMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_SCollectingMargin, (char *)"SCollectingMargin", NULL},
	 {(char *)"IntraProdMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_IntraProdMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_IntraProdMargin, (char *)"IntraProdMargin", NULL},
	 {(char *)"NetMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_NetMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_NetMargin, (char *)"NetMargin", NULL},
	 {(char *)"InterProdMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_InterProdMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_InterProdMargin, (char *)"InterProdMargin", NULL},
	 {(char *)"SingleMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_SingleMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_SingleMargin, (char *)"SingleMargin", NULL},
	 {(char *)"AddOnMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_AddOnMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_AddOnMargin, (char *)"AddOnMargin", NULL},
	 {(char *)"DeliveryMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_DeliveryMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_DeliveryMargin, (char *)"DeliveryMargin", NULL},
	 {(char *)"CallOptionMinRisk", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_CallOptionMinRisk, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_CallOptionMinRisk, (char *)"CallOptionMinRisk", NULL},
	 {(char *)"PutOptionMinRisk", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_PutOptionMinRisk, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_PutOptionMinRisk, (char *)"PutOptionMinRisk", NULL},
	 {(char *)"OptionMinRisk", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_OptionMinRisk, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_OptionMinRisk, (char *)"OptionMinRisk", NULL},
	 {(char *)"OptionValueOffset", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_OptionValueOffset, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_OptionValueOffset, (char *)"OptionValueOffset", NULL},
	 {(char *)"OptionRoyalty", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_OptionRoyalty, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_OptionRoyalty, (char *)"OptionRoyalty", NULL},
	 {(char *)"RealOptionValueOffset", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_RealOptionValueOffset, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_RealOptionValueOffset, (char *)"RealOptionValueOffset", NULL},
	 {(char *)"Margin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_Margin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_Margin, (char *)"Margin", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorProdSPBMDetailField_get_ExchMargin, (setter)PyCThostFtdcInvestorProdSPBMDetailField_set_ExchMargin, (char *)"ExchMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorProdSPBMDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorProdSPBMDetailField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorProdSPBMDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorProdSPBMDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorProdSPBMDetailField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorProdSPBMDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorProdSPBMDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorProdSPBMDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorProdSPBMDetailField_new,       /* tp_new */
};

int PyCThostFtdcInvestorProdSPBMDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorProdSPBMDetailField  */
	if (PyType_Ready(&PyCThostFtdcInvestorProdSPBMDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorProdSPBMDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorProdSPBMDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorProdSPBMDetailField", (PyObject *)&PyCThostFtdcInvestorProdSPBMDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdSPBMDetailField to module");
        Py_DECREF(&PyCThostFtdcInvestorProdSPBMDetailFieldType);
		return -1;
    }

    return 0;
}
