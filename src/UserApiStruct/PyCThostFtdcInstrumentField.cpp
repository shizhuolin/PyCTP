
#include "PyCThostFtdcInstrumentField.h"



static PyObject *PyCThostFtdcInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentField *self = (PyCThostFtdcInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentField_init(PyCThostFtdcInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ExchangeID", "InstrumentName", "reserve2", "reserve3", "ProductClass", "DeliveryYear", "DeliveryMonth", "MaxMarketOrderVolume", "MinMarketOrderVolume", "MaxLimitOrderVolume", "MinLimitOrderVolume", "VolumeMultiple", "PriceTick", "CreateDate", "OpenDate", "ExpireDate", "StartDelivDate", "EndDelivDate", "InstLifePhase", "IsTrading", "PositionType", "PositionDateType", "LongMarginRatio", "ShortMarginRatio", "MaxMarginSideAlgorithm", "reserve4", "StrikePrice", "OptionsType", "UnderlyingMultiple", "CombinationType", "InstrumentID", "ExchangeInstID", "ProductID", "UnderlyingInstrID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentField_reserve1 = NULL;
	Py_ssize_t pInstrumentField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInstrumentField_ExchangeID = NULL;
	Py_ssize_t pInstrumentField_ExchangeID_len = 0;

	//TThostFtdcInstrumentNameType char[21]
	const char *pInstrumentField_InstrumentName = NULL;
	Py_ssize_t pInstrumentField_InstrumentName_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pInstrumentField_reserve2 = NULL;
	Py_ssize_t pInstrumentField_reserve2_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentField_reserve3 = NULL;
	Py_ssize_t pInstrumentField_reserve3_len = 0;

	//TThostFtdcProductClassType char
	char pInstrumentField_ProductClass = 0;

	//TThostFtdcYearType int
	int pInstrumentField_DeliveryYear = 0;

	//TThostFtdcMonthType int
	int pInstrumentField_DeliveryMonth = 0;

	//TThostFtdcVolumeType int
	int pInstrumentField_MaxMarketOrderVolume = 0;

	//TThostFtdcVolumeType int
	int pInstrumentField_MinMarketOrderVolume = 0;

	//TThostFtdcVolumeType int
	int pInstrumentField_MaxLimitOrderVolume = 0;

	//TThostFtdcVolumeType int
	int pInstrumentField_MinLimitOrderVolume = 0;

	//TThostFtdcVolumeMultipleType int
	int pInstrumentField_VolumeMultiple = 0;

	//TThostFtdcPriceType double
	double pInstrumentField_PriceTick = 0.0;

	//TThostFtdcDateType char[9]
	const char *pInstrumentField_CreateDate = NULL;
	Py_ssize_t pInstrumentField_CreateDate_len = 0;

	//TThostFtdcDateType char[9]
	const char *pInstrumentField_OpenDate = NULL;
	Py_ssize_t pInstrumentField_OpenDate_len = 0;

	//TThostFtdcDateType char[9]
	const char *pInstrumentField_ExpireDate = NULL;
	Py_ssize_t pInstrumentField_ExpireDate_len = 0;

	//TThostFtdcDateType char[9]
	const char *pInstrumentField_StartDelivDate = NULL;
	Py_ssize_t pInstrumentField_StartDelivDate_len = 0;

	//TThostFtdcDateType char[9]
	const char *pInstrumentField_EndDelivDate = NULL;
	Py_ssize_t pInstrumentField_EndDelivDate_len = 0;

	//TThostFtdcInstLifePhaseType char
	char pInstrumentField_InstLifePhase = 0;

	//TThostFtdcBoolType int
	int pInstrumentField_IsTrading = 0;

	//TThostFtdcPositionTypeType char
	char pInstrumentField_PositionType = 0;

	//TThostFtdcPositionDateTypeType char
	char pInstrumentField_PositionDateType = 0;

	//TThostFtdcRatioType double
	double pInstrumentField_LongMarginRatio = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentField_ShortMarginRatio = 0.0;

	//TThostFtdcMaxMarginSideAlgorithmType char
	char pInstrumentField_MaxMarginSideAlgorithm = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentField_reserve4 = NULL;
	Py_ssize_t pInstrumentField_reserve4_len = 0;

	//TThostFtdcPriceType double
	double pInstrumentField_StrikePrice = 0.0;

	//TThostFtdcOptionsTypeType char
	char pInstrumentField_OptionsType = 0;

	//TThostFtdcUnderlyingMultipleType double
	double pInstrumentField_UnderlyingMultiple = 0.0;

	//TThostFtdcCombinationTypeType char
	char pInstrumentField_CombinationType = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentField_InstrumentID = NULL;
	Py_ssize_t pInstrumentField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pInstrumentField_ExchangeInstID = NULL;
	Py_ssize_t pInstrumentField_ExchangeInstID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentField_ProductID = NULL;
	Py_ssize_t pInstrumentField_ProductID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentField_UnderlyingInstrID = NULL;
	Py_ssize_t pInstrumentField_UnderlyingInstrID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiiiiidy#y#y#y#y#ciccddcy#dcdcy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciiiiiiids#s#s#s#s#ciccddcs#dcdcs#s#s#s#", (char **)kwlist
#endif

		, &pInstrumentField_reserve1, &pInstrumentField_reserve1_len
		, &pInstrumentField_ExchangeID, &pInstrumentField_ExchangeID_len
		, &pInstrumentField_InstrumentName, &pInstrumentField_InstrumentName_len
		, &pInstrumentField_reserve2, &pInstrumentField_reserve2_len
		, &pInstrumentField_reserve3, &pInstrumentField_reserve3_len
		, &pInstrumentField_ProductClass
		, &pInstrumentField_DeliveryYear
		, &pInstrumentField_DeliveryMonth
		, &pInstrumentField_MaxMarketOrderVolume
		, &pInstrumentField_MinMarketOrderVolume
		, &pInstrumentField_MaxLimitOrderVolume
		, &pInstrumentField_MinLimitOrderVolume
		, &pInstrumentField_VolumeMultiple
		, &pInstrumentField_PriceTick
		, &pInstrumentField_CreateDate, &pInstrumentField_CreateDate_len
		, &pInstrumentField_OpenDate, &pInstrumentField_OpenDate_len
		, &pInstrumentField_ExpireDate, &pInstrumentField_ExpireDate_len
		, &pInstrumentField_StartDelivDate, &pInstrumentField_StartDelivDate_len
		, &pInstrumentField_EndDelivDate, &pInstrumentField_EndDelivDate_len
		, &pInstrumentField_InstLifePhase
		, &pInstrumentField_IsTrading
		, &pInstrumentField_PositionType
		, &pInstrumentField_PositionDateType
		, &pInstrumentField_LongMarginRatio
		, &pInstrumentField_ShortMarginRatio
		, &pInstrumentField_MaxMarginSideAlgorithm
		, &pInstrumentField_reserve4, &pInstrumentField_reserve4_len
		, &pInstrumentField_StrikePrice
		, &pInstrumentField_OptionsType
		, &pInstrumentField_UnderlyingMultiple
		, &pInstrumentField_CombinationType
		, &pInstrumentField_InstrumentID, &pInstrumentField_InstrumentID_len
		, &pInstrumentField_ExchangeInstID, &pInstrumentField_ExchangeInstID_len
		, &pInstrumentField_ProductID, &pInstrumentField_ProductID_len
		, &pInstrumentField_UnderlyingInstrID, &pInstrumentField_UnderlyingInstrID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentField_reserve1 != NULL) {
		if(pInstrumentField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInstrumentField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInstrumentField_reserve1, sizeof(self->data.reserve1) );
		pInstrumentField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pInstrumentField_ExchangeID != NULL) {
		if(pInstrumentField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInstrumentField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInstrumentField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInstrumentField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentNameType char[21]
	if(pInstrumentField_InstrumentName != NULL) {
		if(pInstrumentField_InstrumentName_len > (Py_ssize_t)sizeof(self->data.InstrumentName)) {
			PyErr_Format(PyExc_ValueError, "InstrumentName too long: length=%zd (max allowed is %zd)", pInstrumentField_InstrumentName_len, (Py_ssize_t)sizeof(self->data.InstrumentName));
			return -1;
		}
		strncpy(self->data.InstrumentName, pInstrumentField_InstrumentName, sizeof(self->data.InstrumentName) );
		pInstrumentField_InstrumentName = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pInstrumentField_reserve2 != NULL) {
		if(pInstrumentField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInstrumentField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInstrumentField_reserve2, sizeof(self->data.reserve2) );
		pInstrumentField_reserve2 = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentField_reserve3 != NULL) {
		if(pInstrumentField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pInstrumentField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pInstrumentField_reserve3, sizeof(self->data.reserve3) );
		pInstrumentField_reserve3 = NULL;
	}

	//TThostFtdcProductClassType char
	self->data.ProductClass = pInstrumentField_ProductClass;

	//TThostFtdcYearType int
	self->data.DeliveryYear = pInstrumentField_DeliveryYear;

	//TThostFtdcMonthType int
	self->data.DeliveryMonth = pInstrumentField_DeliveryMonth;

	//TThostFtdcVolumeType int
	self->data.MaxMarketOrderVolume = pInstrumentField_MaxMarketOrderVolume;

	//TThostFtdcVolumeType int
	self->data.MinMarketOrderVolume = pInstrumentField_MinMarketOrderVolume;

	//TThostFtdcVolumeType int
	self->data.MaxLimitOrderVolume = pInstrumentField_MaxLimitOrderVolume;

	//TThostFtdcVolumeType int
	self->data.MinLimitOrderVolume = pInstrumentField_MinLimitOrderVolume;

	//TThostFtdcVolumeMultipleType int
	self->data.VolumeMultiple = pInstrumentField_VolumeMultiple;

	//TThostFtdcPriceType double
	self->data.PriceTick = pInstrumentField_PriceTick;
	//TThostFtdcDateType char[9]
	if(pInstrumentField_CreateDate != NULL) {
		if(pInstrumentField_CreateDate_len > (Py_ssize_t)sizeof(self->data.CreateDate)) {
			PyErr_Format(PyExc_ValueError, "CreateDate too long: length=%zd (max allowed is %zd)", pInstrumentField_CreateDate_len, (Py_ssize_t)sizeof(self->data.CreateDate));
			return -1;
		}
		strncpy(self->data.CreateDate, pInstrumentField_CreateDate, sizeof(self->data.CreateDate) );
		pInstrumentField_CreateDate = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pInstrumentField_OpenDate != NULL) {
		if(pInstrumentField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
			PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", pInstrumentField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
			return -1;
		}
		strncpy(self->data.OpenDate, pInstrumentField_OpenDate, sizeof(self->data.OpenDate) );
		pInstrumentField_OpenDate = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pInstrumentField_ExpireDate != NULL) {
		if(pInstrumentField_ExpireDate_len > (Py_ssize_t)sizeof(self->data.ExpireDate)) {
			PyErr_Format(PyExc_ValueError, "ExpireDate too long: length=%zd (max allowed is %zd)", pInstrumentField_ExpireDate_len, (Py_ssize_t)sizeof(self->data.ExpireDate));
			return -1;
		}
		strncpy(self->data.ExpireDate, pInstrumentField_ExpireDate, sizeof(self->data.ExpireDate) );
		pInstrumentField_ExpireDate = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pInstrumentField_StartDelivDate != NULL) {
		if(pInstrumentField_StartDelivDate_len > (Py_ssize_t)sizeof(self->data.StartDelivDate)) {
			PyErr_Format(PyExc_ValueError, "StartDelivDate too long: length=%zd (max allowed is %zd)", pInstrumentField_StartDelivDate_len, (Py_ssize_t)sizeof(self->data.StartDelivDate));
			return -1;
		}
		strncpy(self->data.StartDelivDate, pInstrumentField_StartDelivDate, sizeof(self->data.StartDelivDate) );
		pInstrumentField_StartDelivDate = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pInstrumentField_EndDelivDate != NULL) {
		if(pInstrumentField_EndDelivDate_len > (Py_ssize_t)sizeof(self->data.EndDelivDate)) {
			PyErr_Format(PyExc_ValueError, "EndDelivDate too long: length=%zd (max allowed is %zd)", pInstrumentField_EndDelivDate_len, (Py_ssize_t)sizeof(self->data.EndDelivDate));
			return -1;
		}
		strncpy(self->data.EndDelivDate, pInstrumentField_EndDelivDate, sizeof(self->data.EndDelivDate) );
		pInstrumentField_EndDelivDate = NULL;
	}

	//TThostFtdcInstLifePhaseType char
	self->data.InstLifePhase = pInstrumentField_InstLifePhase;

	//TThostFtdcBoolType int
	self->data.IsTrading = pInstrumentField_IsTrading;

	//TThostFtdcPositionTypeType char
	self->data.PositionType = pInstrumentField_PositionType;

	//TThostFtdcPositionDateTypeType char
	self->data.PositionDateType = pInstrumentField_PositionDateType;

	//TThostFtdcRatioType double
	self->data.LongMarginRatio = pInstrumentField_LongMarginRatio;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatio = pInstrumentField_ShortMarginRatio;
	//TThostFtdcMaxMarginSideAlgorithmType char
	self->data.MaxMarginSideAlgorithm = pInstrumentField_MaxMarginSideAlgorithm;

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentField_reserve4 != NULL) {
		if(pInstrumentField_reserve4_len > (Py_ssize_t)sizeof(self->data.reserve4)) {
			PyErr_Format(PyExc_ValueError, "reserve4 too long: length=%zd (max allowed is %zd)", pInstrumentField_reserve4_len, (Py_ssize_t)sizeof(self->data.reserve4));
			return -1;
		}
		strncpy(self->data.reserve4, pInstrumentField_reserve4, sizeof(self->data.reserve4) );
		pInstrumentField_reserve4 = NULL;
	}

	//TThostFtdcPriceType double
	self->data.StrikePrice = pInstrumentField_StrikePrice;
	//TThostFtdcOptionsTypeType char
	self->data.OptionsType = pInstrumentField_OptionsType;

	//TThostFtdcUnderlyingMultipleType double
	self->data.UnderlyingMultiple = pInstrumentField_UnderlyingMultiple;
	//TThostFtdcCombinationTypeType char
	self->data.CombinationType = pInstrumentField_CombinationType;

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentField_InstrumentID != NULL) {
		if(pInstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInstrumentField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pInstrumentField_ExchangeInstID != NULL) {
		if(pInstrumentField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pInstrumentField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pInstrumentField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pInstrumentField_ExchangeInstID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentField_ProductID != NULL) {
		if(pInstrumentField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pInstrumentField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pInstrumentField_ProductID, sizeof(self->data.ProductID) );
		pInstrumentField_ProductID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentField_UnderlyingInstrID != NULL) {
		if(pInstrumentField_UnderlyingInstrID_len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
			PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is %zd)", pInstrumentField_UnderlyingInstrID_len, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
			return -1;
		}
		strncpy(self->data.UnderlyingInstrID, pInstrumentField_UnderlyingInstrID, sizeof(self->data.UnderlyingInstrID) );
		pInstrumentField_UnderlyingInstrID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInstrumentField_dealloc(PyCThostFtdcInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentField_repr(PyCThostFtdcInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:i,s:i,s:i,s:i,s:d,s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:d,s:d,s:c,s:y,s:d,s:c,s:d,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:i,s:i,s:i,s:i,s:d,s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:c,s:d,s:d,s:c,s:s,s:d,s:c,s:d,s:c,s:s,s:s,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentName", self->data.InstrumentName 
		, "reserve2", self->data.reserve2 
		, "reserve3", self->data.reserve3 
		, "ProductClass", self->data.ProductClass
		, "DeliveryYear", self->data.DeliveryYear
		, "DeliveryMonth", self->data.DeliveryMonth
		, "MaxMarketOrderVolume", self->data.MaxMarketOrderVolume
		, "MinMarketOrderVolume", self->data.MinMarketOrderVolume
		, "MaxLimitOrderVolume", self->data.MaxLimitOrderVolume
		, "MinLimitOrderVolume", self->data.MinLimitOrderVolume
		, "VolumeMultiple", self->data.VolumeMultiple
		, "PriceTick", self->data.PriceTick
		, "CreateDate", self->data.CreateDate 
		, "OpenDate", self->data.OpenDate 
		, "ExpireDate", self->data.ExpireDate 
		, "StartDelivDate", self->data.StartDelivDate 
		, "EndDelivDate", self->data.EndDelivDate 
		, "InstLifePhase", self->data.InstLifePhase
		, "IsTrading", self->data.IsTrading
		, "PositionType", self->data.PositionType
		, "PositionDateType", self->data.PositionDateType
		, "LongMarginRatio", self->data.LongMarginRatio
		, "ShortMarginRatio", self->data.ShortMarginRatio
		, "MaxMarginSideAlgorithm", self->data.MaxMarginSideAlgorithm
		, "reserve4", self->data.reserve4 
		, "StrikePrice", self->data.StrikePrice
		, "OptionsType", self->data.OptionsType
		, "UnderlyingMultiple", self->data.UnderlyingMultiple
		, "CombinationType", self->data.CombinationType
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "ProductID", self->data.ProductID 
		, "UnderlyingInstrID", self->data.UnderlyingInstrID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInstrumentField_get_reserve1(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInstrumentField_get_ExchangeID(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInstrumentField_get_InstrumentName(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentName);
}

static PyObject *PyCThostFtdcInstrumentField_get_reserve2(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInstrumentField_get_reserve3(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcInstrumentField_get_ProductClass(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ProductClass), 1);
}

static PyObject *PyCThostFtdcInstrumentField_get_DeliveryYear(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DeliveryYear);
#else 
	return PyInt_FromLong(self->data.DeliveryYear);
#endif 
}

static PyObject *PyCThostFtdcInstrumentField_get_DeliveryMonth(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DeliveryMonth);
#else 
	return PyInt_FromLong(self->data.DeliveryMonth);
#endif 
}

static PyObject *PyCThostFtdcInstrumentField_get_MaxMarketOrderVolume(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MaxMarketOrderVolume);
#else 
	return PyInt_FromLong(self->data.MaxMarketOrderVolume);
#endif 
}

static PyObject *PyCThostFtdcInstrumentField_get_MinMarketOrderVolume(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinMarketOrderVolume);
#else 
	return PyInt_FromLong(self->data.MinMarketOrderVolume);
#endif 
}

static PyObject *PyCThostFtdcInstrumentField_get_MaxLimitOrderVolume(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MaxLimitOrderVolume);
#else 
	return PyInt_FromLong(self->data.MaxLimitOrderVolume);
#endif 
}

static PyObject *PyCThostFtdcInstrumentField_get_MinLimitOrderVolume(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinLimitOrderVolume);
#else 
	return PyInt_FromLong(self->data.MinLimitOrderVolume);
#endif 
}

static PyObject *PyCThostFtdcInstrumentField_get_VolumeMultiple(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeMultiple);
#else 
	return PyInt_FromLong(self->data.VolumeMultiple);
#endif 
}

static PyObject *PyCThostFtdcInstrumentField_get_PriceTick(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PriceTick);
}

static PyObject *PyCThostFtdcInstrumentField_get_CreateDate(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.CreateDate);
}

static PyObject *PyCThostFtdcInstrumentField_get_OpenDate(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenDate);
}

static PyObject *PyCThostFtdcInstrumentField_get_ExpireDate(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExpireDate);
}

static PyObject *PyCThostFtdcInstrumentField_get_StartDelivDate(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.StartDelivDate);
}

static PyObject *PyCThostFtdcInstrumentField_get_EndDelivDate(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.EndDelivDate);
}

static PyObject *PyCThostFtdcInstrumentField_get_InstLifePhase(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InstLifePhase), 1);
}

static PyObject *PyCThostFtdcInstrumentField_get_IsTrading(PyCThostFtdcInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsTrading);
#else 
	return PyInt_FromLong(self->data.IsTrading);
#endif 
}

static PyObject *PyCThostFtdcInstrumentField_get_PositionType(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PositionType), 1);
}

static PyObject *PyCThostFtdcInstrumentField_get_PositionDateType(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PositionDateType), 1);
}

static PyObject *PyCThostFtdcInstrumentField_get_LongMarginRatio(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatio);
}

static PyObject *PyCThostFtdcInstrumentField_get_ShortMarginRatio(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatio);
}

static PyObject *PyCThostFtdcInstrumentField_get_MaxMarginSideAlgorithm(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MaxMarginSideAlgorithm), 1);
}

static PyObject *PyCThostFtdcInstrumentField_get_reserve4(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve4);
}

static PyObject *PyCThostFtdcInstrumentField_get_StrikePrice(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikePrice);
}

static PyObject *PyCThostFtdcInstrumentField_get_OptionsType(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OptionsType), 1);
}

static PyObject *PyCThostFtdcInstrumentField_get_UnderlyingMultiple(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UnderlyingMultiple);
}

static PyObject *PyCThostFtdcInstrumentField_get_CombinationType(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CombinationType), 1);
}

static PyObject *PyCThostFtdcInstrumentField_get_InstrumentID(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInstrumentField_get_ExchangeInstID(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcInstrumentField_get_ProductID(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcInstrumentField_get_UnderlyingInstrID(PyCThostFtdcInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.UnderlyingInstrID);
}

static int PyCThostFtdcInstrumentField_set_reserve1(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_ExchangeID(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_InstrumentName(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentName)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentName must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentName, buf, sizeof(self->data.InstrumentName));
	return 0;
}

static int PyCThostFtdcInstrumentField_set_reserve2(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_reserve3(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve3)) {
		PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
	return 0;
}

static int PyCThostFtdcInstrumentField_set_ProductClass(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_DeliveryYear(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryYear Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DeliveryYear Expected int"); 
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
    self->data.DeliveryYear = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInstrumentField_set_DeliveryMonth(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryMonth Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DeliveryMonth Expected int"); 
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
    self->data.DeliveryMonth = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInstrumentField_set_MaxMarketOrderVolume(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_MinMarketOrderVolume(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_MaxLimitOrderVolume(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_MinLimitOrderVolume(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_VolumeMultiple(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_PriceTick(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_CreateDate(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CreateDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CreateDate)) {
		PyErr_SetString(PyExc_ValueError, "CreateDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CreateDate, buf, sizeof(self->data.CreateDate));
	return 0;
}

static int PyCThostFtdcInstrumentField_set_OpenDate(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
		PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.OpenDate, buf, sizeof(self->data.OpenDate));
	return 0;
}

static int PyCThostFtdcInstrumentField_set_ExpireDate(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExpireDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExpireDate)) {
		PyErr_SetString(PyExc_ValueError, "ExpireDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ExpireDate, buf, sizeof(self->data.ExpireDate));
	return 0;
}

static int PyCThostFtdcInstrumentField_set_StartDelivDate(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "StartDelivDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.StartDelivDate)) {
		PyErr_SetString(PyExc_ValueError, "StartDelivDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.StartDelivDate, buf, sizeof(self->data.StartDelivDate));
	return 0;
}

static int PyCThostFtdcInstrumentField_set_EndDelivDate(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "EndDelivDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.EndDelivDate)) {
		PyErr_SetString(PyExc_ValueError, "EndDelivDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.EndDelivDate, buf, sizeof(self->data.EndDelivDate));
	return 0;
}

static int PyCThostFtdcInstrumentField_set_InstLifePhase(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstLifePhase Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstLifePhase)) {
		PyErr_SetString(PyExc_ValueError, "InstLifePhase must be less than 1 bytes");
		return -1;
	}
	self->data.InstLifePhase = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentField_set_IsTrading(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsTrading Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsTrading Expected int"); 
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
    self->data.IsTrading = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInstrumentField_set_PositionType(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_PositionDateType(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_LongMarginRatio(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatio = buf;
    return 0;
}

static int PyCThostFtdcInstrumentField_set_ShortMarginRatio(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatio = buf;
    return 0;
}

static int PyCThostFtdcInstrumentField_set_MaxMarginSideAlgorithm(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MaxMarginSideAlgorithm Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MaxMarginSideAlgorithm)) {
		PyErr_SetString(PyExc_ValueError, "MaxMarginSideAlgorithm must be less than 1 bytes");
		return -1;
	}
	self->data.MaxMarginSideAlgorithm = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentField_set_reserve4(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve4 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve4)) {
		PyErr_SetString(PyExc_ValueError, "reserve4 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve4, buf, sizeof(self->data.reserve4));
	return 0;
}

static int PyCThostFtdcInstrumentField_set_StrikePrice(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikePrice = buf;
    return 0;
}

static int PyCThostFtdcInstrumentField_set_OptionsType(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionsType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionsType)) {
		PyErr_SetString(PyExc_ValueError, "OptionsType must be less than 1 bytes");
		return -1;
	}
	self->data.OptionsType = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentField_set_UnderlyingMultiple(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_CombinationType(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombinationType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombinationType)) {
		PyErr_SetString(PyExc_ValueError, "CombinationType must be less than 1 bytes");
		return -1;
	}
	self->data.CombinationType = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentField_set_InstrumentID(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_ExchangeInstID(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_ProductID(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentField_set_UnderlyingInstrID(PyCThostFtdcInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
		PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.UnderlyingInstrID, buf, sizeof(self->data.UnderlyingInstrID));
	return 0;
}



static PyGetSetDef PyCThostFtdcInstrumentField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInstrumentField_get_reserve1, (setter)PyCThostFtdcInstrumentField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentField_get_ExchangeID, (setter)PyCThostFtdcInstrumentField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentName", (getter)PyCThostFtdcInstrumentField_get_InstrumentName, (setter)PyCThostFtdcInstrumentField_set_InstrumentName, (char *)"InstrumentName", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInstrumentField_get_reserve2, (setter)PyCThostFtdcInstrumentField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcInstrumentField_get_reserve3, (setter)PyCThostFtdcInstrumentField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"ProductClass", (getter)PyCThostFtdcInstrumentField_get_ProductClass, (setter)PyCThostFtdcInstrumentField_set_ProductClass, (char *)"ProductClass", NULL},
	 {(char *)"DeliveryYear", (getter)PyCThostFtdcInstrumentField_get_DeliveryYear, (setter)PyCThostFtdcInstrumentField_set_DeliveryYear, (char *)"DeliveryYear", NULL},
	 {(char *)"DeliveryMonth", (getter)PyCThostFtdcInstrumentField_get_DeliveryMonth, (setter)PyCThostFtdcInstrumentField_set_DeliveryMonth, (char *)"DeliveryMonth", NULL},
	 {(char *)"MaxMarketOrderVolume", (getter)PyCThostFtdcInstrumentField_get_MaxMarketOrderVolume, (setter)PyCThostFtdcInstrumentField_set_MaxMarketOrderVolume, (char *)"MaxMarketOrderVolume", NULL},
	 {(char *)"MinMarketOrderVolume", (getter)PyCThostFtdcInstrumentField_get_MinMarketOrderVolume, (setter)PyCThostFtdcInstrumentField_set_MinMarketOrderVolume, (char *)"MinMarketOrderVolume", NULL},
	 {(char *)"MaxLimitOrderVolume", (getter)PyCThostFtdcInstrumentField_get_MaxLimitOrderVolume, (setter)PyCThostFtdcInstrumentField_set_MaxLimitOrderVolume, (char *)"MaxLimitOrderVolume", NULL},
	 {(char *)"MinLimitOrderVolume", (getter)PyCThostFtdcInstrumentField_get_MinLimitOrderVolume, (setter)PyCThostFtdcInstrumentField_set_MinLimitOrderVolume, (char *)"MinLimitOrderVolume", NULL},
	 {(char *)"VolumeMultiple", (getter)PyCThostFtdcInstrumentField_get_VolumeMultiple, (setter)PyCThostFtdcInstrumentField_set_VolumeMultiple, (char *)"VolumeMultiple", NULL},
	 {(char *)"PriceTick", (getter)PyCThostFtdcInstrumentField_get_PriceTick, (setter)PyCThostFtdcInstrumentField_set_PriceTick, (char *)"PriceTick", NULL},
	 {(char *)"CreateDate", (getter)PyCThostFtdcInstrumentField_get_CreateDate, (setter)PyCThostFtdcInstrumentField_set_CreateDate, (char *)"CreateDate", NULL},
	 {(char *)"OpenDate", (getter)PyCThostFtdcInstrumentField_get_OpenDate, (setter)PyCThostFtdcInstrumentField_set_OpenDate, (char *)"OpenDate", NULL},
	 {(char *)"ExpireDate", (getter)PyCThostFtdcInstrumentField_get_ExpireDate, (setter)PyCThostFtdcInstrumentField_set_ExpireDate, (char *)"ExpireDate", NULL},
	 {(char *)"StartDelivDate", (getter)PyCThostFtdcInstrumentField_get_StartDelivDate, (setter)PyCThostFtdcInstrumentField_set_StartDelivDate, (char *)"StartDelivDate", NULL},
	 {(char *)"EndDelivDate", (getter)PyCThostFtdcInstrumentField_get_EndDelivDate, (setter)PyCThostFtdcInstrumentField_set_EndDelivDate, (char *)"EndDelivDate", NULL},
	 {(char *)"InstLifePhase", (getter)PyCThostFtdcInstrumentField_get_InstLifePhase, (setter)PyCThostFtdcInstrumentField_set_InstLifePhase, (char *)"InstLifePhase", NULL},
	 {(char *)"IsTrading", (getter)PyCThostFtdcInstrumentField_get_IsTrading, (setter)PyCThostFtdcInstrumentField_set_IsTrading, (char *)"IsTrading", NULL},
	 {(char *)"PositionType", (getter)PyCThostFtdcInstrumentField_get_PositionType, (setter)PyCThostFtdcInstrumentField_set_PositionType, (char *)"PositionType", NULL},
	 {(char *)"PositionDateType", (getter)PyCThostFtdcInstrumentField_get_PositionDateType, (setter)PyCThostFtdcInstrumentField_set_PositionDateType, (char *)"PositionDateType", NULL},
	 {(char *)"LongMarginRatio", (getter)PyCThostFtdcInstrumentField_get_LongMarginRatio, (setter)PyCThostFtdcInstrumentField_set_LongMarginRatio, (char *)"LongMarginRatio", NULL},
	 {(char *)"ShortMarginRatio", (getter)PyCThostFtdcInstrumentField_get_ShortMarginRatio, (setter)PyCThostFtdcInstrumentField_set_ShortMarginRatio, (char *)"ShortMarginRatio", NULL},
	 {(char *)"MaxMarginSideAlgorithm", (getter)PyCThostFtdcInstrumentField_get_MaxMarginSideAlgorithm, (setter)PyCThostFtdcInstrumentField_set_MaxMarginSideAlgorithm, (char *)"MaxMarginSideAlgorithm", NULL},
	 {(char *)"reserve4", (getter)PyCThostFtdcInstrumentField_get_reserve4, (setter)PyCThostFtdcInstrumentField_set_reserve4, (char *)"reserve4", NULL},
	 {(char *)"StrikePrice", (getter)PyCThostFtdcInstrumentField_get_StrikePrice, (setter)PyCThostFtdcInstrumentField_set_StrikePrice, (char *)"StrikePrice", NULL},
	 {(char *)"OptionsType", (getter)PyCThostFtdcInstrumentField_get_OptionsType, (setter)PyCThostFtdcInstrumentField_set_OptionsType, (char *)"OptionsType", NULL},
	 {(char *)"UnderlyingMultiple", (getter)PyCThostFtdcInstrumentField_get_UnderlyingMultiple, (setter)PyCThostFtdcInstrumentField_set_UnderlyingMultiple, (char *)"UnderlyingMultiple", NULL},
	 {(char *)"CombinationType", (getter)PyCThostFtdcInstrumentField_get_CombinationType, (setter)PyCThostFtdcInstrumentField_set_CombinationType, (char *)"CombinationType", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentField_get_InstrumentID, (setter)PyCThostFtdcInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcInstrumentField_get_ExchangeInstID, (setter)PyCThostFtdcInstrumentField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcInstrumentField_get_ProductID, (setter)PyCThostFtdcInstrumentField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"UnderlyingInstrID", (getter)PyCThostFtdcInstrumentField_get_UnderlyingInstrID, (setter)PyCThostFtdcInstrumentField_set_UnderlyingInstrID, (char *)"UnderlyingInstrID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentField", (PyObject *)&PyCThostFtdcInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentField to module");
        Py_DECREF(&PyCThostFtdcInstrumentFieldType);
		return -1;
    }

    return 0;
}
