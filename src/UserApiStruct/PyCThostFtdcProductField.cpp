
#include "PyCThostFtdcProductField.h"



static PyObject *PyCThostFtdcProductField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcProductField *self = (PyCThostFtdcProductField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcProductField_init(PyCThostFtdcProductField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ProductName", "ExchangeID", "ProductClass", "VolumeMultiple", "PriceTick", "MaxMarketOrderVolume", "MinMarketOrderVolume", "MaxLimitOrderVolume", "MinLimitOrderVolume", "PositionType", "PositionDateType", "CloseDealType", "TradeCurrencyID", "MortgageFundUseRange", "reserve2", "UnderlyingMultiple", "ProductID", "ExchangeProductID", "OpenLimitControlLevel", "OrderFreqControlLevel",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pProductField_reserve1 = NULL;
	Py_ssize_t pProductField_reserve1_len = 0;

	//TThostFtdcProductNameType char[21]
	const char *pProductField_ProductName = NULL;
	Py_ssize_t pProductField_ProductName_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pProductField_ExchangeID = NULL;
	Py_ssize_t pProductField_ExchangeID_len = 0;

	//TThostFtdcProductClassType char
	char pProductField_ProductClass = 0;

	//TThostFtdcVolumeMultipleType int
	int pProductField_VolumeMultiple = 0;

	//TThostFtdcPriceType double
	double pProductField_PriceTick = 0.0;

	//TThostFtdcVolumeType int
	int pProductField_MaxMarketOrderVolume = 0;

	//TThostFtdcVolumeType int
	int pProductField_MinMarketOrderVolume = 0;

	//TThostFtdcVolumeType int
	int pProductField_MaxLimitOrderVolume = 0;

	//TThostFtdcVolumeType int
	int pProductField_MinLimitOrderVolume = 0;

	//TThostFtdcPositionTypeType char
	char pProductField_PositionType = 0;

	//TThostFtdcPositionDateTypeType char
	char pProductField_PositionDateType = 0;

	//TThostFtdcCloseDealTypeType char
	char pProductField_CloseDealType = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pProductField_TradeCurrencyID = NULL;
	Py_ssize_t pProductField_TradeCurrencyID_len = 0;

	//TThostFtdcMortgageFundUseRangeType char
	char pProductField_MortgageFundUseRange = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pProductField_reserve2 = NULL;
	Py_ssize_t pProductField_reserve2_len = 0;

	//TThostFtdcUnderlyingMultipleType double
	double pProductField_UnderlyingMultiple = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pProductField_ProductID = NULL;
	Py_ssize_t pProductField_ProductID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pProductField_ExchangeProductID = NULL;
	Py_ssize_t pProductField_ExchangeProductID_len = 0;

	//TThostFtdcOpenLimitControlLevelType char
	char pProductField_OpenLimitControlLevel = 0;

	//TThostFtdcOrderFreqControlLevelType char
	char pProductField_OrderFreqControlLevel = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cidiiiicccy#cy#dy#y#cc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cidiiiicccs#cs#ds#s#cc", (char **)kwlist
#endif

		, &pProductField_reserve1, &pProductField_reserve1_len
		, &pProductField_ProductName, &pProductField_ProductName_len
		, &pProductField_ExchangeID, &pProductField_ExchangeID_len
		, &pProductField_ProductClass
		, &pProductField_VolumeMultiple
		, &pProductField_PriceTick
		, &pProductField_MaxMarketOrderVolume
		, &pProductField_MinMarketOrderVolume
		, &pProductField_MaxLimitOrderVolume
		, &pProductField_MinLimitOrderVolume
		, &pProductField_PositionType
		, &pProductField_PositionDateType
		, &pProductField_CloseDealType
		, &pProductField_TradeCurrencyID, &pProductField_TradeCurrencyID_len
		, &pProductField_MortgageFundUseRange
		, &pProductField_reserve2, &pProductField_reserve2_len
		, &pProductField_UnderlyingMultiple
		, &pProductField_ProductID, &pProductField_ProductID_len
		, &pProductField_ExchangeProductID, &pProductField_ExchangeProductID_len
		, &pProductField_OpenLimitControlLevel
		, &pProductField_OrderFreqControlLevel


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pProductField_reserve1 != NULL) {
		if(pProductField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pProductField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pProductField_reserve1, sizeof(self->data.reserve1) );
		pProductField_reserve1 = NULL;
	}

	//TThostFtdcProductNameType char[21]
	if(pProductField_ProductName != NULL) {
		if(pProductField_ProductName_len > (Py_ssize_t)sizeof(self->data.ProductName)) {
			PyErr_Format(PyExc_ValueError, "ProductName too long: length=%zd (max allowed is %zd)", pProductField_ProductName_len, (Py_ssize_t)sizeof(self->data.ProductName));
			return -1;
		}
		strncpy(self->data.ProductName, pProductField_ProductName, sizeof(self->data.ProductName) );
		pProductField_ProductName = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pProductField_ExchangeID != NULL) {
		if(pProductField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pProductField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pProductField_ExchangeID, sizeof(self->data.ExchangeID) );
		pProductField_ExchangeID = NULL;
	}

	//TThostFtdcProductClassType char
	self->data.ProductClass = pProductField_ProductClass;

	//TThostFtdcVolumeMultipleType int
	self->data.VolumeMultiple = pProductField_VolumeMultiple;

	//TThostFtdcPriceType double
	self->data.PriceTick = pProductField_PriceTick;
	//TThostFtdcVolumeType int
	self->data.MaxMarketOrderVolume = pProductField_MaxMarketOrderVolume;

	//TThostFtdcVolumeType int
	self->data.MinMarketOrderVolume = pProductField_MinMarketOrderVolume;

	//TThostFtdcVolumeType int
	self->data.MaxLimitOrderVolume = pProductField_MaxLimitOrderVolume;

	//TThostFtdcVolumeType int
	self->data.MinLimitOrderVolume = pProductField_MinLimitOrderVolume;

	//TThostFtdcPositionTypeType char
	self->data.PositionType = pProductField_PositionType;

	//TThostFtdcPositionDateTypeType char
	self->data.PositionDateType = pProductField_PositionDateType;

	//TThostFtdcCloseDealTypeType char
	self->data.CloseDealType = pProductField_CloseDealType;

	//TThostFtdcCurrencyIDType char[4]
	if(pProductField_TradeCurrencyID != NULL) {
		if(pProductField_TradeCurrencyID_len > (Py_ssize_t)sizeof(self->data.TradeCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "TradeCurrencyID too long: length=%zd (max allowed is %zd)", pProductField_TradeCurrencyID_len, (Py_ssize_t)sizeof(self->data.TradeCurrencyID));
			return -1;
		}
		strncpy(self->data.TradeCurrencyID, pProductField_TradeCurrencyID, sizeof(self->data.TradeCurrencyID) );
		pProductField_TradeCurrencyID = NULL;
	}

	//TThostFtdcMortgageFundUseRangeType char
	self->data.MortgageFundUseRange = pProductField_MortgageFundUseRange;

	//TThostFtdcOldInstrumentIDType char[31]
	if(pProductField_reserve2 != NULL) {
		if(pProductField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pProductField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pProductField_reserve2, sizeof(self->data.reserve2) );
		pProductField_reserve2 = NULL;
	}

	//TThostFtdcUnderlyingMultipleType double
	self->data.UnderlyingMultiple = pProductField_UnderlyingMultiple;
	//TThostFtdcInstrumentIDType char[81]
	if(pProductField_ProductID != NULL) {
		if(pProductField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pProductField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pProductField_ProductID, sizeof(self->data.ProductID) );
		pProductField_ProductID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pProductField_ExchangeProductID != NULL) {
		if(pProductField_ExchangeProductID_len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is %zd)", pProductField_ExchangeProductID_len, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
			return -1;
		}
		strncpy(self->data.ExchangeProductID, pProductField_ExchangeProductID, sizeof(self->data.ExchangeProductID) );
		pProductField_ExchangeProductID = NULL;
	}

	//TThostFtdcOpenLimitControlLevelType char
	self->data.OpenLimitControlLevel = pProductField_OpenLimitControlLevel;

	//TThostFtdcOrderFreqControlLevelType char
	self->data.OrderFreqControlLevel = pProductField_OrderFreqControlLevel;



    return 0;
}

static void PyCThostFtdcProductField_dealloc(PyCThostFtdcProductField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcProductField_repr(PyCThostFtdcProductField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i,s:d,s:i,s:i,s:i,s:i,s:c,s:c,s:c,s:y,s:c,s:y,s:d,s:y,s:y,s:c,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:i,s:d,s:i,s:i,s:i,s:i,s:c,s:c,s:c,s:s,s:c,s:s,s:d,s:s,s:s,s:c,s:c}"
#endif

		, "reserve1", self->data.reserve1 
		, "ProductName", self->data.ProductName 
		, "ExchangeID", self->data.ExchangeID 
		, "ProductClass", self->data.ProductClass
		, "VolumeMultiple", self->data.VolumeMultiple
		, "PriceTick", self->data.PriceTick
		, "MaxMarketOrderVolume", self->data.MaxMarketOrderVolume
		, "MinMarketOrderVolume", self->data.MinMarketOrderVolume
		, "MaxLimitOrderVolume", self->data.MaxLimitOrderVolume
		, "MinLimitOrderVolume", self->data.MinLimitOrderVolume
		, "PositionType", self->data.PositionType
		, "PositionDateType", self->data.PositionDateType
		, "CloseDealType", self->data.CloseDealType
		, "TradeCurrencyID", self->data.TradeCurrencyID 
		, "MortgageFundUseRange", self->data.MortgageFundUseRange
		, "reserve2", self->data.reserve2 
		, "UnderlyingMultiple", self->data.UnderlyingMultiple
		, "ProductID", self->data.ProductID 
		, "ExchangeProductID", self->data.ExchangeProductID 
		, "OpenLimitControlLevel", self->data.OpenLimitControlLevel
		, "OrderFreqControlLevel", self->data.OrderFreqControlLevel


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcProductField_get_reserve1(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcProductField_get_ProductName(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductName);
}

static PyObject *PyCThostFtdcProductField_get_ExchangeID(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcProductField_get_ProductClass(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ProductClass), 1);
}

static PyObject *PyCThostFtdcProductField_get_VolumeMultiple(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeMultiple);
#else 
	return PyInt_FromLong(self->data.VolumeMultiple);
#endif 
}

static PyObject *PyCThostFtdcProductField_get_PriceTick(PyCThostFtdcProductField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PriceTick);
}

static PyObject *PyCThostFtdcProductField_get_MaxMarketOrderVolume(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MaxMarketOrderVolume);
#else 
	return PyInt_FromLong(self->data.MaxMarketOrderVolume);
#endif 
}

static PyObject *PyCThostFtdcProductField_get_MinMarketOrderVolume(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinMarketOrderVolume);
#else 
	return PyInt_FromLong(self->data.MinMarketOrderVolume);
#endif 
}

static PyObject *PyCThostFtdcProductField_get_MaxLimitOrderVolume(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MaxLimitOrderVolume);
#else 
	return PyInt_FromLong(self->data.MaxLimitOrderVolume);
#endif 
}

static PyObject *PyCThostFtdcProductField_get_MinLimitOrderVolume(PyCThostFtdcProductField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinLimitOrderVolume);
#else 
	return PyInt_FromLong(self->data.MinLimitOrderVolume);
#endif 
}

static PyObject *PyCThostFtdcProductField_get_PositionType(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PositionType), 1);
}

static PyObject *PyCThostFtdcProductField_get_PositionDateType(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PositionDateType), 1);
}

static PyObject *PyCThostFtdcProductField_get_CloseDealType(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CloseDealType), 1);
}

static PyObject *PyCThostFtdcProductField_get_TradeCurrencyID(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCurrencyID);
}

static PyObject *PyCThostFtdcProductField_get_MortgageFundUseRange(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MortgageFundUseRange), 1);
}

static PyObject *PyCThostFtdcProductField_get_reserve2(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcProductField_get_UnderlyingMultiple(PyCThostFtdcProductField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UnderlyingMultiple);
}

static PyObject *PyCThostFtdcProductField_get_ProductID(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcProductField_get_ExchangeProductID(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeProductID);
}

static PyObject *PyCThostFtdcProductField_get_OpenLimitControlLevel(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OpenLimitControlLevel), 1);
}

static PyObject *PyCThostFtdcProductField_get_OrderFreqControlLevel(PyCThostFtdcProductField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderFreqControlLevel), 1);
}

static int PyCThostFtdcProductField_set_reserve1(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcProductField_set_ProductName(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductName)) {
		PyErr_SetString(PyExc_ValueError, "ProductName must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ProductName, buf, sizeof(self->data.ProductName));
	return 0;
}

static int PyCThostFtdcProductField_set_ExchangeID(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcProductField_set_ProductClass(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductClass Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductClass)) {
		PyErr_SetString(PyExc_ValueError, "ProductClass must be less than 1 bytes");
		return -1;
	}
	self->data.ProductClass = *buf;
	return 0;
}

static int PyCThostFtdcProductField_set_VolumeMultiple(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeMultiple Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "VolumeMultiple Expected int"); 
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
    self->data.VolumeMultiple = (int)buf; 
    return 0; 
}

static int PyCThostFtdcProductField_set_PriceTick(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PriceTick Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PriceTick = buf;
    return 0;
}

static int PyCThostFtdcProductField_set_MaxMarketOrderVolume(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxMarketOrderVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "MaxMarketOrderVolume Expected int"); 
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
    self->data.MaxMarketOrderVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcProductField_set_MinMarketOrderVolume(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinMarketOrderVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "MinMarketOrderVolume Expected int"); 
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
    self->data.MinMarketOrderVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcProductField_set_MaxLimitOrderVolume(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxLimitOrderVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "MaxLimitOrderVolume Expected int"); 
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
    self->data.MaxLimitOrderVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcProductField_set_MinLimitOrderVolume(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinLimitOrderVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "MinLimitOrderVolume Expected int"); 
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
    self->data.MinLimitOrderVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcProductField_set_PositionType(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PositionType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PositionType)) {
		PyErr_SetString(PyExc_ValueError, "PositionType must be less than 1 bytes");
		return -1;
	}
	self->data.PositionType = *buf;
	return 0;
}

static int PyCThostFtdcProductField_set_PositionDateType(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PositionDateType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PositionDateType)) {
		PyErr_SetString(PyExc_ValueError, "PositionDateType must be less than 1 bytes");
		return -1;
	}
	self->data.PositionDateType = *buf;
	return 0;
}

static int PyCThostFtdcProductField_set_CloseDealType(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CloseDealType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CloseDealType)) {
		PyErr_SetString(PyExc_ValueError, "CloseDealType must be less than 1 bytes");
		return -1;
	}
	self->data.CloseDealType = *buf;
	return 0;
}

static int PyCThostFtdcProductField_set_TradeCurrencyID(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "TradeCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.TradeCurrencyID, buf, sizeof(self->data.TradeCurrencyID));
	return 0;
}

static int PyCThostFtdcProductField_set_MortgageFundUseRange(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MortgageFundUseRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MortgageFundUseRange)) {
		PyErr_SetString(PyExc_ValueError, "MortgageFundUseRange must be less than 1 bytes");
		return -1;
	}
	self->data.MortgageFundUseRange = *buf;
	return 0;
}

static int PyCThostFtdcProductField_set_reserve2(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcProductField_set_UnderlyingMultiple(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingMultiple Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UnderlyingMultiple = buf;
    return 0;
}

static int PyCThostFtdcProductField_set_ProductID(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcProductField_set_ExchangeProductID(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeProductID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeProductID, buf, sizeof(self->data.ExchangeProductID));
	return 0;
}

static int PyCThostFtdcProductField_set_OpenLimitControlLevel(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OpenLimitControlLevel Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OpenLimitControlLevel)) {
		PyErr_SetString(PyExc_ValueError, "OpenLimitControlLevel must be less than 1 bytes");
		return -1;
	}
	self->data.OpenLimitControlLevel = *buf;
	return 0;
}

static int PyCThostFtdcProductField_set_OrderFreqControlLevel(PyCThostFtdcProductField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderFreqControlLevel Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderFreqControlLevel)) {
		PyErr_SetString(PyExc_ValueError, "OrderFreqControlLevel must be less than 1 bytes");
		return -1;
	}
	self->data.OrderFreqControlLevel = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcProductField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcProductField_get_reserve1, (setter)PyCThostFtdcProductField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ProductName", (getter)PyCThostFtdcProductField_get_ProductName, (setter)PyCThostFtdcProductField_set_ProductName, (char *)"ProductName", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcProductField_get_ExchangeID, (setter)PyCThostFtdcProductField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductClass", (getter)PyCThostFtdcProductField_get_ProductClass, (setter)PyCThostFtdcProductField_set_ProductClass, (char *)"ProductClass", NULL},
	 {(char *)"VolumeMultiple", (getter)PyCThostFtdcProductField_get_VolumeMultiple, (setter)PyCThostFtdcProductField_set_VolumeMultiple, (char *)"VolumeMultiple", NULL},
	 {(char *)"PriceTick", (getter)PyCThostFtdcProductField_get_PriceTick, (setter)PyCThostFtdcProductField_set_PriceTick, (char *)"PriceTick", NULL},
	 {(char *)"MaxMarketOrderVolume", (getter)PyCThostFtdcProductField_get_MaxMarketOrderVolume, (setter)PyCThostFtdcProductField_set_MaxMarketOrderVolume, (char *)"MaxMarketOrderVolume", NULL},
	 {(char *)"MinMarketOrderVolume", (getter)PyCThostFtdcProductField_get_MinMarketOrderVolume, (setter)PyCThostFtdcProductField_set_MinMarketOrderVolume, (char *)"MinMarketOrderVolume", NULL},
	 {(char *)"MaxLimitOrderVolume", (getter)PyCThostFtdcProductField_get_MaxLimitOrderVolume, (setter)PyCThostFtdcProductField_set_MaxLimitOrderVolume, (char *)"MaxLimitOrderVolume", NULL},
	 {(char *)"MinLimitOrderVolume", (getter)PyCThostFtdcProductField_get_MinLimitOrderVolume, (setter)PyCThostFtdcProductField_set_MinLimitOrderVolume, (char *)"MinLimitOrderVolume", NULL},
	 {(char *)"PositionType", (getter)PyCThostFtdcProductField_get_PositionType, (setter)PyCThostFtdcProductField_set_PositionType, (char *)"PositionType", NULL},
	 {(char *)"PositionDateType", (getter)PyCThostFtdcProductField_get_PositionDateType, (setter)PyCThostFtdcProductField_set_PositionDateType, (char *)"PositionDateType", NULL},
	 {(char *)"CloseDealType", (getter)PyCThostFtdcProductField_get_CloseDealType, (setter)PyCThostFtdcProductField_set_CloseDealType, (char *)"CloseDealType", NULL},
	 {(char *)"TradeCurrencyID", (getter)PyCThostFtdcProductField_get_TradeCurrencyID, (setter)PyCThostFtdcProductField_set_TradeCurrencyID, (char *)"TradeCurrencyID", NULL},
	 {(char *)"MortgageFundUseRange", (getter)PyCThostFtdcProductField_get_MortgageFundUseRange, (setter)PyCThostFtdcProductField_set_MortgageFundUseRange, (char *)"MortgageFundUseRange", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcProductField_get_reserve2, (setter)PyCThostFtdcProductField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"UnderlyingMultiple", (getter)PyCThostFtdcProductField_get_UnderlyingMultiple, (setter)PyCThostFtdcProductField_set_UnderlyingMultiple, (char *)"UnderlyingMultiple", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcProductField_get_ProductID, (setter)PyCThostFtdcProductField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"ExchangeProductID", (getter)PyCThostFtdcProductField_get_ExchangeProductID, (setter)PyCThostFtdcProductField_set_ExchangeProductID, (char *)"ExchangeProductID", NULL},
	 {(char *)"OpenLimitControlLevel", (getter)PyCThostFtdcProductField_get_OpenLimitControlLevel, (setter)PyCThostFtdcProductField_set_OpenLimitControlLevel, (char *)"OpenLimitControlLevel", NULL},
	 {(char *)"OrderFreqControlLevel", (getter)PyCThostFtdcProductField_get_OrderFreqControlLevel, (setter)PyCThostFtdcProductField_set_OrderFreqControlLevel, (char *)"OrderFreqControlLevel", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcProductFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcProductField",	/* tp_name */
	sizeof(PyCThostFtdcProductField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcProductField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcProductField_repr,   /* tp_repr */
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
	"CThostFtdcProductField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcProductField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcProductField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcProductField_new,       /* tp_new */
};

int PyCThostFtdcProductFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcProductField  */
	if (PyType_Ready(&PyCThostFtdcProductFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcProductField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcProductFieldType);
    if( PyModule_AddObject(module, "CThostFtdcProductField", (PyObject *)&PyCThostFtdcProductFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductField to module");
        Py_DECREF(&PyCThostFtdcProductFieldType);
		return -1;
    }

    return 0;
}
