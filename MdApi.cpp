
#include "stdafx.h"
#include "MdApi.h"
#include "UserApiStruct.h"

#define PyCTP_MD_FUNCTION_MAGIC(_in_fun) PyCTP_FUNCTION_MAGIC(CTP_THOST_FTDC_MD_API, _in_fun)

#define PyCTP_MD_FUNCTION_MAGIC_INT(_in_fun) PyCTP_FUNCTION_MAGIC_INT(CTP_THOST_FTDC_MD_API, _in_fun)

#define PyCTP_MD_FUNCTION_MAGIC_VOID_STRING(_in_fun) PyCTP_FUNCTION_MAGIC_VOID_STRING(CTP_THOST_FTDC_MD_API, _in_fun)

#define PyCTP_MD_FUNCTION_MAGIC_INT_STRUCTI_VOID_STRUCT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_VOID_STRUCT(CTP_THOST_FTDC_MD_API, _in_fun, _in_type)

#define PyCTP_MD_FUNCTION_MAGIC_INT_STRUCT_INT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_INT_STRUCTI_INT(CTP_THOST_FTDC_MD_API, _in_fun, _in_type)

PyObject *CTP_THOST_FTDC_MD_API_CreateFtdcMdApi(PyTypeObject *type, PyObject *args)
{	
	char *pszFlowPath = nullptr;
	bool bIsUsingUdp = false, bIsMulticast = false;
	if (!PyArg_ParseTuple(args, "|ypp", &pszFlowPath, &bIsUsingUdp, &bIsMulticast))
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	/* 构造api对象 */
	CTP_THOST_FTDC_MD_API *self = (CTP_THOST_FTDC_MD_API *) type->tp_alloc(type, 0);

	if(self==nullptr){
		PyErr_SetString(PyExc_RuntimeError, "don't create instance.");
		return nullptr;
	}

	/* 创建ctpapi实例 */
	self->api = CThostFtdcMdApi::CreateFtdcMdApi(pszFlowPath==nullptr? "":pszFlowPath, bIsUsingUdp, bIsMulticast);

	if(self->api == nullptr){
		PyErr_SetString(PyExc_RuntimeError, "CThostFtdcMdApi::CreateFtdcMdApi error.");
		Py_DECREF(self);
		return nullptr;
	}

	self->spi  = new CTP_THOST_FTDC_MD_SPI(self);
	self->api->RegisterSpi(self->spi);

	self->pySpi = Py_None;
	Py_INCREF(self->pySpi);

	return (PyObject *) self;
}

PyObject *CTP_THOST_FTDC_MD_API_GetApiVersion(PyObject *self, PyObject *args)
{
	return PyBytes_FromString(CThostFtdcMdApi::GetApiVersion());
}

PyCTP_MD_FUNCTION_MAGIC(Release);

PyCTP_MD_FUNCTION_MAGIC(Init);

PyCTP_MD_FUNCTION_MAGIC_INT(Join);

PyObject *CTP_THOST_FTDC_MD_API_GetTradingDay(PyObject *self, PyObject *args) 
{
	return PyBytes_FromString(((CTP_THOST_FTDC_MD_API *) self)->api->GetTradingDay());
};

PyCTP_MD_FUNCTION_MAGIC_VOID_STRING(RegisterFront);

PyCTP_MD_FUNCTION_MAGIC_VOID_STRING(RegisterNameServer);

PyCTP_MD_FUNCTION_MAGIC_INT_STRUCTI_VOID_STRUCT(RegisterFensUserInfo, CThostFtdcFensUserInfoField);

PyObject *CTP_THOST_FTDC_MD_API_RegisterSpi(PyObject *self, PyObject *args)
{
	CTP_THOST_FTDC_MD_API *api = (CTP_THOST_FTDC_MD_API *) self;
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

PyCTP_FUNCTION_MAGIC_INT_SUBSCRIBE(CTP_THOST_FTDC_MD_API, SubscribeMarketData)

PyCTP_FUNCTION_MAGIC_INT_SUBSCRIBE(CTP_THOST_FTDC_MD_API, UnSubscribeMarketData)

PyCTP_FUNCTION_MAGIC_INT_SUBSCRIBE(CTP_THOST_FTDC_MD_API, SubscribeForQuoteRsp)

PyCTP_FUNCTION_MAGIC_INT_SUBSCRIBE(CTP_THOST_FTDC_MD_API, UnSubscribeForQuoteRsp)

PyCTP_MD_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLogin, CThostFtdcReqUserLoginField)

PyCTP_MD_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLogout, CThostFtdcUserLogoutField)

void CTP_THOST_FTDC_MD_API_dealloc(PyObject *self)
{
	CTP_THOST_FTDC_MD_API *obj = (CTP_THOST_FTDC_MD_API *) self;

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

void CTP_THOST_FTDC_MD_SPI::OnFrontConnected()
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, nullptr);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnFrontDisconnected(int nReason)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "i", nReason);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnHeartBeatWarning(int nTimeLapse)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "i", nTimeLapse);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pRspUserLogin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pUserLogout), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NiN", PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "NNiN", PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pDepthMarketData));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	PyObject *result = PyObject_CallMethod(this->api->pySpi, strpbrk(__FUNCTION__, "::") + 2, "N", PyCTP_PyDict_FromStruct(pForQuoteRsp));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}