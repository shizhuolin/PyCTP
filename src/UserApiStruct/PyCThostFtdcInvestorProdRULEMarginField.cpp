
#include "PyCThostFtdcInvestorProdRULEMarginField.h"



static PyObject *PyCThostFtdcInvestorProdRULEMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorProdRULEMarginField *self = (PyCThostFtdcInvestorProdRULEMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorProdRULEMarginField_init(PyCThostFtdcInvestorProdRULEMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "InstrumentClass", "CommodityGroupID", "BStdPosition", "SStdPosition", "BStdOpenFrozen", "SStdOpenFrozen", "BStdCloseFrozen", "SStdCloseFrozen", "IntraProdStdPosition", "NetStdPosition", "InterProdStdPosition", "SingleStdPosition", "IntraProdMargin", "InterProdMargin", "SingleMargin", "NonCombMargin", "AddOnMargin", "ExchMargin", "AddOnFrozenMargin", "OpenFrozenMargin", "CloseFrozenMargin", "Margin", "FrozenMargin",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorProdRULEMarginField_ExchangeID = NULL;
	Py_ssize_t pInvestorProdRULEMarginField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorProdRULEMarginField_BrokerID = NULL;
	Py_ssize_t pInvestorProdRULEMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorProdRULEMarginField_InvestorID = NULL;
	Py_ssize_t pInvestorProdRULEMarginField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorProdRULEMarginField_ProdFamilyCode = NULL;
	Py_ssize_t pInvestorProdRULEMarginField_ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentClassType char
	char pInvestorProdRULEMarginField_InstrumentClass = 0;

	//TThostFtdcCommodityGroupIDType int
	int pInvestorProdRULEMarginField_CommodityGroupID = 0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_BStdPosition = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_SStdPosition = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_BStdOpenFrozen = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_SStdOpenFrozen = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_BStdCloseFrozen = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_SStdCloseFrozen = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_IntraProdStdPosition = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_NetStdPosition = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_InterProdStdPosition = 0.0;

	//TThostFtdcStdPositionType double
	double pInvestorProdRULEMarginField_SingleStdPosition = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_IntraProdMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_InterProdMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_SingleMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_NonCombMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_AddOnMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_ExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_AddOnFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_OpenFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_CloseFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_Margin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProdRULEMarginField_FrozenMargin = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ciddddddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ciddddddddddddddddddddd", (char **)kwlist
#endif

		, &pInvestorProdRULEMarginField_ExchangeID, &pInvestorProdRULEMarginField_ExchangeID_len
		, &pInvestorProdRULEMarginField_BrokerID, &pInvestorProdRULEMarginField_BrokerID_len
		, &pInvestorProdRULEMarginField_InvestorID, &pInvestorProdRULEMarginField_InvestorID_len
		, &pInvestorProdRULEMarginField_ProdFamilyCode, &pInvestorProdRULEMarginField_ProdFamilyCode_len
		, &pInvestorProdRULEMarginField_InstrumentClass
		, &pInvestorProdRULEMarginField_CommodityGroupID
		, &pInvestorProdRULEMarginField_BStdPosition
		, &pInvestorProdRULEMarginField_SStdPosition
		, &pInvestorProdRULEMarginField_BStdOpenFrozen
		, &pInvestorProdRULEMarginField_SStdOpenFrozen
		, &pInvestorProdRULEMarginField_BStdCloseFrozen
		, &pInvestorProdRULEMarginField_SStdCloseFrozen
		, &pInvestorProdRULEMarginField_IntraProdStdPosition
		, &pInvestorProdRULEMarginField_NetStdPosition
		, &pInvestorProdRULEMarginField_InterProdStdPosition
		, &pInvestorProdRULEMarginField_SingleStdPosition
		, &pInvestorProdRULEMarginField_IntraProdMargin
		, &pInvestorProdRULEMarginField_InterProdMargin
		, &pInvestorProdRULEMarginField_SingleMargin
		, &pInvestorProdRULEMarginField_NonCombMargin
		, &pInvestorProdRULEMarginField_AddOnMargin
		, &pInvestorProdRULEMarginField_ExchMargin
		, &pInvestorProdRULEMarginField_AddOnFrozenMargin
		, &pInvestorProdRULEMarginField_OpenFrozenMargin
		, &pInvestorProdRULEMarginField_CloseFrozenMargin
		, &pInvestorProdRULEMarginField_Margin
		, &pInvestorProdRULEMarginField_FrozenMargin


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorProdRULEMarginField_ExchangeID != NULL) {
		if(pInvestorProdRULEMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorProdRULEMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorProdRULEMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorProdRULEMarginField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorProdRULEMarginField_BrokerID != NULL) {
		if(pInvestorProdRULEMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorProdRULEMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorProdRULEMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorProdRULEMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorProdRULEMarginField_InvestorID != NULL) {
		if(pInvestorProdRULEMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorProdRULEMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorProdRULEMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorProdRULEMarginField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorProdRULEMarginField_ProdFamilyCode != NULL) {
		if(pInvestorProdRULEMarginField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pInvestorProdRULEMarginField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pInvestorProdRULEMarginField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pInvestorProdRULEMarginField_ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentClassType char
	self->data.InstrumentClass = pInvestorProdRULEMarginField_InstrumentClass;

	//TThostFtdcCommodityGroupIDType int
	self->data.CommodityGroupID = pInvestorProdRULEMarginField_CommodityGroupID;

	//TThostFtdcStdPositionType double
	self->data.BStdPosition = pInvestorProdRULEMarginField_BStdPosition;
	//TThostFtdcStdPositionType double
	self->data.SStdPosition = pInvestorProdRULEMarginField_SStdPosition;
	//TThostFtdcStdPositionType double
	self->data.BStdOpenFrozen = pInvestorProdRULEMarginField_BStdOpenFrozen;
	//TThostFtdcStdPositionType double
	self->data.SStdOpenFrozen = pInvestorProdRULEMarginField_SStdOpenFrozen;
	//TThostFtdcStdPositionType double
	self->data.BStdCloseFrozen = pInvestorProdRULEMarginField_BStdCloseFrozen;
	//TThostFtdcStdPositionType double
	self->data.SStdCloseFrozen = pInvestorProdRULEMarginField_SStdCloseFrozen;
	//TThostFtdcStdPositionType double
	self->data.IntraProdStdPosition = pInvestorProdRULEMarginField_IntraProdStdPosition;
	//TThostFtdcStdPositionType double
	self->data.NetStdPosition = pInvestorProdRULEMarginField_NetStdPosition;
	//TThostFtdcStdPositionType double
	self->data.InterProdStdPosition = pInvestorProdRULEMarginField_InterProdStdPosition;
	//TThostFtdcStdPositionType double
	self->data.SingleStdPosition = pInvestorProdRULEMarginField_SingleStdPosition;
	//TThostFtdcMoneyType double
	self->data.IntraProdMargin = pInvestorProdRULEMarginField_IntraProdMargin;
	//TThostFtdcMoneyType double
	self->data.InterProdMargin = pInvestorProdRULEMarginField_InterProdMargin;
	//TThostFtdcMoneyType double
	self->data.SingleMargin = pInvestorProdRULEMarginField_SingleMargin;
	//TThostFtdcMoneyType double
	self->data.NonCombMargin = pInvestorProdRULEMarginField_NonCombMargin;
	//TThostFtdcMoneyType double
	self->data.AddOnMargin = pInvestorProdRULEMarginField_AddOnMargin;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pInvestorProdRULEMarginField_ExchMargin;
	//TThostFtdcMoneyType double
	self->data.AddOnFrozenMargin = pInvestorProdRULEMarginField_AddOnFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.OpenFrozenMargin = pInvestorProdRULEMarginField_OpenFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.CloseFrozenMargin = pInvestorProdRULEMarginField_CloseFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.Margin = pInvestorProdRULEMarginField_Margin;
	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pInvestorProdRULEMarginField_FrozenMargin;


    return 0;
}

static void PyCThostFtdcInvestorProdRULEMarginField_dealloc(PyCThostFtdcInvestorProdRULEMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_repr(PyCThostFtdcInvestorProdRULEMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "InstrumentClass", self->data.InstrumentClass
		, "CommodityGroupID", self->data.CommodityGroupID
		, "BStdPosition", self->data.BStdPosition
		, "SStdPosition", self->data.SStdPosition
		, "BStdOpenFrozen", self->data.BStdOpenFrozen
		, "SStdOpenFrozen", self->data.SStdOpenFrozen
		, "BStdCloseFrozen", self->data.BStdCloseFrozen
		, "SStdCloseFrozen", self->data.SStdCloseFrozen
		, "IntraProdStdPosition", self->data.IntraProdStdPosition
		, "NetStdPosition", self->data.NetStdPosition
		, "InterProdStdPosition", self->data.InterProdStdPosition
		, "SingleStdPosition", self->data.SingleStdPosition
		, "IntraProdMargin", self->data.IntraProdMargin
		, "InterProdMargin", self->data.InterProdMargin
		, "SingleMargin", self->data.SingleMargin
		, "NonCombMargin", self->data.NonCombMargin
		, "AddOnMargin", self->data.AddOnMargin
		, "ExchMargin", self->data.ExchMargin
		, "AddOnFrozenMargin", self->data.AddOnFrozenMargin
		, "OpenFrozenMargin", self->data.OpenFrozenMargin
		, "CloseFrozenMargin", self->data.CloseFrozenMargin
		, "Margin", self->data.Margin
		, "FrozenMargin", self->data.FrozenMargin


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProdRULEMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_ExchangeID(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_BrokerID(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_InvestorID(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_ProdFamilyCode(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_InstrumentClass(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InstrumentClass), 1);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_CommodityGroupID(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CommodityGroupID);
#else 
	return PyInt_FromLong(self->data.CommodityGroupID);
#endif 
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_BStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BStdPosition);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SStdPosition);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_BStdOpenFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BStdOpenFrozen);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SStdOpenFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SStdOpenFrozen);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_BStdCloseFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BStdCloseFrozen);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SStdCloseFrozen(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SStdCloseFrozen);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_IntraProdStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraProdStdPosition);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_NetStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.NetStdPosition);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_InterProdStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterProdStdPosition);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SingleStdPosition(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SingleStdPosition);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_IntraProdMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraProdMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_InterProdMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterProdMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_SingleMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SingleMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_NonCombMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.NonCombMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_AddOnMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_ExchMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_AddOnFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_OpenFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_CloseFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_Margin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Margin);
}

static PyObject *PyCThostFtdcInvestorProdRULEMarginField_get_FrozenMargin(PyCThostFtdcInvestorProdRULEMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_ExchangeID(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_BrokerID(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_InvestorID(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_ProdFamilyCode(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_InstrumentClass(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentClass Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentClass)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentClass must be less than 1 bytes");
		return -1;
	}
	self->data.InstrumentClass = *buf;
	return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_CommodityGroupID(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected int"); 
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
    self->data.CommodityGroupID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_BStdPosition(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BStdPosition = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_SStdPosition(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SStdPosition = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_BStdOpenFrozen(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BStdOpenFrozen Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BStdOpenFrozen = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_SStdOpenFrozen(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SStdOpenFrozen Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SStdOpenFrozen = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_BStdCloseFrozen(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BStdCloseFrozen Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BStdCloseFrozen = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_SStdCloseFrozen(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SStdCloseFrozen Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SStdCloseFrozen = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_IntraProdStdPosition(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraProdStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraProdStdPosition = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_NetStdPosition(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NetStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NetStdPosition = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_InterProdStdPosition(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterProdStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterProdStdPosition = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_SingleStdPosition(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SingleStdPosition Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SingleStdPosition = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_IntraProdMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_InterProdMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_SingleMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_NonCombMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NonCombMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NonCombMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_AddOnMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_ExchMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_AddOnFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProdRULEMarginField_set_OpenFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_CloseFrozenMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_Margin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProdRULEMarginField_set_FrozenMargin(PyCThostFtdcInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenMargin = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcInvestorProdRULEMarginField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_ProdFamilyCode, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"InstrumentClass", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_InstrumentClass, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_InstrumentClass, (char *)"InstrumentClass", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_CommodityGroupID, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
	 {(char *)"BStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_BStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_BStdPosition, (char *)"BStdPosition", NULL},
	 {(char *)"SStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SStdPosition, (char *)"SStdPosition", NULL},
	 {(char *)"BStdOpenFrozen", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_BStdOpenFrozen, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_BStdOpenFrozen, (char *)"BStdOpenFrozen", NULL},
	 {(char *)"SStdOpenFrozen", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SStdOpenFrozen, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SStdOpenFrozen, (char *)"SStdOpenFrozen", NULL},
	 {(char *)"BStdCloseFrozen", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_BStdCloseFrozen, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_BStdCloseFrozen, (char *)"BStdCloseFrozen", NULL},
	 {(char *)"SStdCloseFrozen", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SStdCloseFrozen, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SStdCloseFrozen, (char *)"SStdCloseFrozen", NULL},
	 {(char *)"IntraProdStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_IntraProdStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_IntraProdStdPosition, (char *)"IntraProdStdPosition", NULL},
	 {(char *)"NetStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_NetStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_NetStdPosition, (char *)"NetStdPosition", NULL},
	 {(char *)"InterProdStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_InterProdStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_InterProdStdPosition, (char *)"InterProdStdPosition", NULL},
	 {(char *)"SingleStdPosition", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SingleStdPosition, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SingleStdPosition, (char *)"SingleStdPosition", NULL},
	 {(char *)"IntraProdMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_IntraProdMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_IntraProdMargin, (char *)"IntraProdMargin", NULL},
	 {(char *)"InterProdMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_InterProdMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_InterProdMargin, (char *)"InterProdMargin", NULL},
	 {(char *)"SingleMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_SingleMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_SingleMargin, (char *)"SingleMargin", NULL},
	 {(char *)"NonCombMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_NonCombMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_NonCombMargin, (char *)"NonCombMargin", NULL},
	 {(char *)"AddOnMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_AddOnMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_AddOnMargin, (char *)"AddOnMargin", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_ExchMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"AddOnFrozenMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_AddOnFrozenMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_AddOnFrozenMargin, (char *)"AddOnFrozenMargin", NULL},
	 {(char *)"OpenFrozenMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_OpenFrozenMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_OpenFrozenMargin, (char *)"OpenFrozenMargin", NULL},
	 {(char *)"CloseFrozenMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_CloseFrozenMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_CloseFrozenMargin, (char *)"CloseFrozenMargin", NULL},
	 {(char *)"Margin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_Margin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_Margin, (char *)"Margin", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcInvestorProdRULEMarginField_get_FrozenMargin, (setter)PyCThostFtdcInvestorProdRULEMarginField_set_FrozenMargin, (char *)"FrozenMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorProdRULEMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorProdRULEMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorProdRULEMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorProdRULEMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorProdRULEMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorProdRULEMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorProdRULEMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorProdRULEMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorProdRULEMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorProdRULEMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorProdRULEMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorProdRULEMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorProdRULEMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorProdRULEMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorProdRULEMarginField", (PyObject *)&PyCThostFtdcInvestorProdRULEMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProdRULEMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorProdRULEMarginFieldType);
		return -1;
    }

    return 0;
}
