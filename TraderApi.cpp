
#include "stdafx.h"
#include "TraderApi.h"
#include "UserApiStruct.h"

#define PyCTP_TRADER_FUNCTION_MAGIC(_in_fun) PyCTP_FUNCTION_MAGIC(CTP_THOST_FTDC_TRADER_API, _in_fun)

#define PyCTP_TRADER_FUNCTION_MAGIC_INT(_in_fun) PyCTP_FUNCTION_MAGIC_INT(CTP_THOST_FTDC_TRADER_API, _in_fun)

#define PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRING(_in_fun) PyCTP_FUNCTION_MAGIC_VOID_STRING(CTP_THOST_FTDC_TRADER_API, _in_fun)

#define PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCTI_VOID_STRUCT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_VOID_STRUCT(CTP_THOST_FTDC_TRADER_API, _in_fun, _in_type)

#define PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_INT_STRUCTI_INT(CTP_THOST_FTDC_TRADER_API, _in_fun, _in_type)

//////////////////////////////////////////////////////////////////////////

PyObject *CTP_THOST_FTDC_TRADER_API_CreateFtdcTraderApi(PyTypeObject *type, PyObject *args)
{
	char *pszFlowPath = nullptr;
	if (!PyArg_ParseTuple(args, "|y", &pszFlowPath))
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	/* 构造api对象 */
	CTP_THOST_FTDC_TRADER_API *self = (CTP_THOST_FTDC_TRADER_API *) type->tp_alloc(type, 0);

	if(self==nullptr)
	{
		PyErr_SetString(PyExc_RuntimeError, "don't create instance.");
		return nullptr;
	}

	/* 创建ctpapi实例 */
	self->api = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath == nullptr? "" : pszFlowPath);
	if(self->api == nullptr)
	{
		PyErr_SetString(PyExc_RuntimeError, "CThostFtdcTraderApi::CreateFtdcTraderApi error.");
		Py_DECREF(self);
		return nullptr;
	}

	self->spi  = new CTP_THOST_FTDC_TRADER_SPI(self);
	self->api->RegisterSpi(self->spi);

	self->pySpi = Py_None;
	Py_INCREF(self->pySpi);

	return (PyObject *) self;
}

PyObject *CTP_THOST_FTDC_TRADER_API_GetApiVersion(PyObject *self, PyObject *args)
{
	return PyBytes_FromString(CThostFtdcTraderApi::GetApiVersion());
};

PyCTP_TRADER_FUNCTION_MAGIC(Release);

PyCTP_TRADER_FUNCTION_MAGIC(Init);

PyCTP_TRADER_FUNCTION_MAGIC_INT(Join);

PyObject *CTP_THOST_FTDC_TRADER_API_GetTradingDay(PyObject *self, PyObject *args) 
{
	return PyBytes_FromString(((CTP_THOST_FTDC_TRADER_API *) self)->api->GetTradingDay());
};

PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRING(RegisterFront);

PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRING(RegisterNameServer);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCTI_VOID_STRUCT(RegisterFensUserInfo, CThostFtdcFensUserInfoField);

PyObject *CTP_THOST_FTDC_TRADER_API_RegisterSpi(PyObject *self, PyObject *args)
{
	CTP_THOST_FTDC_TRADER_API *api = (CTP_THOST_FTDC_TRADER_API *) self;
	PyObject *tmp = api->pySpi;
	if (!PyArg_ParseTuple(args, "O", &api->pySpi))
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	Py_XDECREF(tmp);
	Py_INCREF(api->pySpi);

	Py_RETURN_NONE;
};

PyObject *CTP_THOST_FTDC_TRADER_API_SubscribePrivateTopic(PyObject *self, PyObject *args) 
{
	THOST_TE_RESUME_TYPE nResumeType;

	if (!PyArg_ParseTuple(args, "i", &nResumeType))
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	((CTP_THOST_FTDC_TRADER_API *) self)->api->SubscribePrivateTopic(nResumeType);
	
	Py_RETURN_NONE;
};

PyObject *CTP_THOST_FTDC_TRADER_API_SubscribePublicTopic(PyObject *self, PyObject *args) 
{
	THOST_TE_RESUME_TYPE nResumeType;

	if (!PyArg_ParseTuple(args, "i", &nResumeType))
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	((CTP_THOST_FTDC_TRADER_API *) self)->api->SubscribePublicTopic(nResumeType);

	Py_RETURN_NONE;
};

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqAuthenticate, CThostFtdcReqAuthenticateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLogin, CThostFtdcReqUserLoginField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLogout, CThostFtdcUserLogoutField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserPasswordUpdate, CThostFtdcUserPasswordUpdateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqTradingAccountPasswordUpdate, CThostFtdcTradingAccountPasswordUpdateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqOrderInsert, CThostFtdcInputOrderField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqParkedOrderInsert, CThostFtdcParkedOrderField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqParkedOrderAction, CThostFtdcParkedOrderActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqOrderAction, CThostFtdcInputOrderActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQueryMaxOrderVolume, CThostFtdcQueryMaxOrderVolumeField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqSettlementInfoConfirm, CThostFtdcSettlementInfoConfirmField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqRemoveParkedOrder, CThostFtdcRemoveParkedOrderField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqRemoveParkedOrderAction, CThostFtdcRemoveParkedOrderActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqExecOrderInsert, CThostFtdcInputExecOrderField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqExecOrderAction, CThostFtdcInputExecOrderActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqForQuoteInsert, CThostFtdcInputForQuoteField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQuoteInsert, CThostFtdcInputQuoteField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQuoteAction, CThostFtdcInputQuoteActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqBatchOrderAction, CThostFtdcInputBatchOrderActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqCombActionInsert, CThostFtdcInputCombActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryOrder, CThostFtdcQryOrderField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTrade, CThostFtdcQryTradeField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorPosition, CThostFtdcQryInvestorPositionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTradingAccount, CThostFtdcQryTradingAccountField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestor, CThostFtdcQryInvestorField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTradingCode, CThostFtdcQryTradingCodeField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInstrumentMarginRate, CThostFtdcQryInstrumentMarginRateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInstrumentCommissionRate, CThostFtdcQryInstrumentCommissionRateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExchange, CThostFtdcQryExchangeField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryProduct, CThostFtdcQryProductField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInstrument, CThostFtdcQryInstrumentField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryDepthMarketData, CThostFtdcQryDepthMarketDataField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySettlementInfo, CThostFtdcQrySettlementInfoField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTransferBank, CThostFtdcQryTransferBankField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorPositionDetail, CThostFtdcQryInvestorPositionDetailField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryNotice, CThostFtdcQryNoticeField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySettlementInfoConfirm, CThostFtdcQrySettlementInfoConfirmField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorPositionCombineDetail, CThostFtdcQryInvestorPositionCombineDetailField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryCFMMCTradingAccountKey, CThostFtdcQryCFMMCTradingAccountKeyField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryEWarrantOffset, CThostFtdcQryEWarrantOffsetField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorProductGroupMargin, CThostFtdcQryInvestorProductGroupMarginField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExchangeMarginRate, CThostFtdcQryExchangeMarginRateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExchangeMarginRateAdjust, CThostFtdcQryExchangeMarginRateAdjustField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExchangeRate, CThostFtdcQryExchangeRateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySecAgentACIDMap, CThostFtdcQrySecAgentACIDMapField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryProductExchRate, CThostFtdcQryProductExchRateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryProductGroup, CThostFtdcQryProductGroupField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryOptionInstrTradeCost, CThostFtdcQryOptionInstrTradeCostField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryOptionInstrCommRate, CThostFtdcQryOptionInstrCommRateField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExecOrder, CThostFtdcQryExecOrderField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryForQuote, CThostFtdcQryForQuoteField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryQuote, CThostFtdcQryQuoteField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryCombInstrumentGuard, CThostFtdcQryCombInstrumentGuardField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryCombAction, CThostFtdcQryCombActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTransferSerial, CThostFtdcQryTransferSerialField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryAccountregister, CThostFtdcQryAccountregisterField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryContractBank, CThostFtdcQryContractBankField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryParkedOrder, CThostFtdcQryParkedOrderField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryParkedOrderAction, CThostFtdcQryParkedOrderActionField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTradingNotice, CThostFtdcQryTradingNoticeField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryBrokerTradingParams, CThostFtdcQryBrokerTradingParamsField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryBrokerTradingAlgos, CThostFtdcQryBrokerTradingAlgosField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQueryCFMMCTradingAccountToken, CThostFtdcQueryCFMMCTradingAccountTokenField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqFromBankToFutureByFuture, CThostFtdcReqTransferField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqFromFutureToBankByFuture, CThostFtdcReqTransferField);

PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQueryBankAccountMoneyByFuture, CThostFtdcReqQueryAccountField);

void CTP_THOST_FTDC_TRADER_API_dealloc(PyObject *self)
{
	CTP_THOST_FTDC_TRADER_API *obj = (CTP_THOST_FTDC_TRADER_API *) self;

	if(obj->api != nullptr)
	{
		obj->api->RegisterSpi(nullptr);
		obj->api->Release();
		obj->api = nullptr;
	}

	if(obj->spi != nullptr){
		delete obj->spi;
		obj->spi = nullptr;
	}

	Py_XDECREF(obj->pySpi);

	Py_TYPE(self)->tp_free(self);
}

void CTP_THOST_FTDC_TRADER_SPI::OnFrontConnected()
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, nullptr);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnFrontDisconnected(int nReason)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "i", nReason);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnHeartBeatWarning(int nTimeLapse)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "i", nTimeLapse);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pRspAuthenticateField), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pRspUserLogin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pUserLogout), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pUserPasswordUpdate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pTradingAccountPasswordUpdate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pQueryMaxOrderVolume), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pSettlementInfoConfirm), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pRemoveParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pRemoveParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputExecOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputExecOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputForQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputQuoteAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputBatchOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInputCombAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pTrade), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInvestorPosition), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pTradingAccount), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInvestor), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pTradingCode), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInstrumentMarginRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInstrumentCommissionRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pExchange), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pProduct), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pDepthMarketData), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pSettlementInfo), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pTransferBank), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInvestorPositionDetail), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pNotice), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pSettlementInfoConfirm), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInvestorPositionCombineDetail), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pCFMMCTradingAccountKey), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pEWarrantOffset), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pInvestorProductGroupMargin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pExchangeMarginRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pExchangeMarginRateAdjust), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pExchangeRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pSecAgentACIDMap), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pProductExchRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pProductGroup), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pOptionInstrTradeCost), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pOptionInstrCommRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pExecOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pForQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pCombInstrumentGuard), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pCombAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pTransferSerial), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pAccountregister), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NiN", PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnOrder(CThostFtdcOrderField *pOrder)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pOrder));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnTrade(CThostFtdcTradeField *pTrade)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pTrade));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pInputOrder), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pInstrumentStatus));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pTradingNoticeInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pErrorConditionalOrder));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pExecOrder));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pInputExecOrder), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pExecOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pInputForQuote), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnQuote(CThostFtdcQuoteField *pQuote)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pQuote));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pInputQuote), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pQuoteAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pForQuoteRsp));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pCFMMCTradingAccountToken));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pBatchOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnCombAction(CThostFtdcCombActionField *pCombAction)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pCombAction));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pInputCombAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pContractBank), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pTradingNotice), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pBrokerTradingParams), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pBrokerTradingAlgos), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pQueryCFMMCTradingAccountToken), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspTransfer));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspTransfer));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspTransfer));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspTransfer));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pNotifyQueryAccount));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pReqRepeal), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pReqRepeal), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NN", PyCTP_PyDict_FromStruct(pReqQueryAccount), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pReqQueryAccount), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pOpenAccount));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pCancelAccount));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pChangeAccount));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};
