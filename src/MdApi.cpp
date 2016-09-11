
#include "stdafx.h"
#include "MdApi.h"
#include "UserApiStruct.h"

PyMemberDef CTP_THOST_FTDC_MD_API_members[] = {
	{nullptr}  /* Sentinel */
};

PyMethodDef CTP_THOST_FTDC_MD_API_methods[] = {
	///创建MdApi
	{"CreateFtdcMdApi", (PyCFunction) CTP_THOST_FTDC_MD_API_CreateFtdcMdApi, METH_VARARGS | METH_CLASS, nullptr},
	///获取API的版本信息
	{"GetApiVersion", CTP_THOST_FTDC_MD_API_GetApiVersion, METH_NOARGS | METH_STATIC, nullptr},
	///删除接口对象本身
	{"Release", CTP_THOST_FTDC_MD_API_Release, METH_NOARGS, nullptr},
	///初始化
	{"Init", CTP_THOST_FTDC_MD_API_Init, METH_NOARGS, nullptr},
	///等待接口线程结束运行
	{"Join", CTP_THOST_FTDC_MD_API_Join, METH_NOARGS, nullptr},
	///获取当前交易日
	{"GetTradingDay", CTP_THOST_FTDC_MD_API_GetTradingDay, METH_NOARGS, nullptr},
	///注册前置机网络地址
	{"RegisterFront", CTP_THOST_FTDC_MD_API_RegisterFront, METH_VARARGS, nullptr},
	///注册名字服务器网络地址
	{"RegisterNameServer", CTP_THOST_FTDC_MD_API_RegisterNameServer, METH_VARARGS, nullptr},
	///注册名字服务器用户信息
	{"RegisterFensUserInfo", CTP_THOST_FTDC_MD_API_RegisterFensUserInfo, METH_VARARGS, nullptr},
	///注册回调接口
	{"RegisterSpi", CTP_THOST_FTDC_MD_API_RegisterSpi, METH_VARARGS, nullptr},
	///订阅行情。
	{"SubscribeMarketData", CTP_THOST_FTDC_MD_API_SubscribeMarketData, METH_VARARGS, nullptr},
	///退订行情。
	{"UnSubscribeMarketData", CTP_THOST_FTDC_MD_API_UnSubscribeMarketData, METH_VARARGS, nullptr},
	///订阅询价。
	{"SubscribeForQuoteRsp", CTP_THOST_FTDC_MD_API_SubscribeForQuoteRsp, METH_VARARGS, nullptr},
	///退订询价。
	{"UnSubscribeForQuoteRsp", CTP_THOST_FTDC_MD_API_UnSubscribeForQuoteRsp, METH_VARARGS, nullptr},
	///用户登录请求
	{"ReqUserLogin", CTP_THOST_FTDC_MD_API_ReqUserLogin, METH_VARARGS, nullptr},
	///登出请求
	{"ReqUserLogout", CTP_THOST_FTDC_MD_API_ReqUserLogout, METH_VARARGS, nullptr},
	{nullptr}  /* Sentinel */
};

PyTypeObject CTP_THOST_FTDC_MD_API_TYPE = {
	PyVarObject_HEAD_INIT(NULL, 0)
	"PyCTP.CThostFtdcMdApi",	/* tp_name */
	sizeof(struct CTP_THOST_FTDC_MD_API),/* tp_basicsize */
	0,                          /* tp_itemsize */
	CTP_THOST_FTDC_MD_API_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	0,                          /* tp_repr */
	0,                          /* tp_as_number */
	0,                          /* tp_as_sequence */
	0,                          /* tp_as_mapping */
	0,                          /* tp_hash  */
	0,                          /* tp_call */
	0,                          /* tp_str */
	0,                          /* tp_getattro */
	0,                          /* tp_setattro */
	0,                          /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE,/* tp_flags */
	"equivalent to CThostFtdcMdApi for cpp", /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	CTP_THOST_FTDC_MD_API_methods,/* tp_methods */
	CTP_THOST_FTDC_MD_API_members,/* tp_members */
	0,                          /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	0,							/* tp_init */
	0,                          /* tp_alloc */
	0,							/* tp_new */
};

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
		//obj->api->Release();
		obj->api = nullptr;
	}

	if(obj->spi != nullptr){
		delete dynamic_cast<CTP_THOST_FTDC_MD_SPI *>(obj->spi);
		obj->spi = nullptr;
	}

	Py_XDECREF(obj->pySpi);

	Py_TYPE(self)->tp_free(self);
}

void CTP_THOST_FTDC_MD_SPI::OnFrontConnected()
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), nullptr);
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnFrontConnected"), nullptr);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnFrontDisconnected(int nReason)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("i"), nReason);
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnFrontDisconnected"), const_cast<char *>("i"), nReason);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnHeartBeatWarning(int nTimeLapse)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("i"), nTimeLapse);
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnHeartBeatWarning"), const_cast<char *>("i"), nTimeLapse);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRspUserLogin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserLogin"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRspUserLogin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pUserLogout), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserLogout"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pUserLogout), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NiN"), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspError"), const_cast<char *>("NiN"), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSubMarketData"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUnSubMarketData"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSubForQuoteRsp"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUnSubForQuoteRsp"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSpecificInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pDepthMarketData));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnDepthMarketData"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pDepthMarketData));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}

void CTP_THOST_FTDC_MD_SPI::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pForQuoteRsp));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnForQuoteRsp"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pForQuoteRsp));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
}
