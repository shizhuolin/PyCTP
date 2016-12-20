
#include "stdafx.h"
#include "TraderApi.h"
#include "UserApiStruct.h"

#define PyCTP_TRADER_FUNCTION_MAGIC(_in_fun) PyCTP_FUNCTION_MAGIC(CTP_THOST_FTDC_TRADER_API, _in_fun)

#define PyCTP_TRADER_FUNCTION_MAGIC_INT(_in_fun) PyCTP_FUNCTION_MAGIC_INT(CTP_THOST_FTDC_TRADER_API, _in_fun)

#define PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRING(_in_fun) PyCTP_FUNCTION_MAGIC_VOID_STRING(CTP_THOST_FTDC_TRADER_API, _in_fun)

#define PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCTI_VOID_STRUCT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_VOID_STRUCT(CTP_THOST_FTDC_TRADER_API, _in_fun, _in_type)

#define PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_INT_STRUCTI_INT(CTP_THOST_FTDC_TRADER_API, _in_fun, _in_type)

PyMethodDef CTP_THOST_FTDC_TRADER_API_methods[] = {
	///创建TraderApi
	{"CreateFtdcTraderApi", (PyCFunction) CTP_THOST_FTDC_TRADER_API_CreateFtdcTraderApi, METH_VARARGS | METH_CLASS, nullptr},
	///获取API的版本信息
	{"GetApiVersion", CTP_THOST_FTDC_TRADER_API_GetApiVersion, METH_NOARGS | METH_STATIC, nullptr},
	///删除接口对象本身
	{"Release", CTP_THOST_FTDC_TRADER_API_Release, METH_NOARGS, nullptr},
	///初始化
	{"Init", CTP_THOST_FTDC_TRADER_API_Init, METH_NOARGS, nullptr},
	///等待接口线程结束运行
	{"Join", CTP_THOST_FTDC_TRADER_API_Join, METH_NOARGS, nullptr},
	///获取当前交易日
	{"GetTradingDay", CTP_THOST_FTDC_TRADER_API_GetTradingDay, METH_NOARGS, nullptr},
	///注册前置机网络地址
	{"RegisterFront", CTP_THOST_FTDC_TRADER_API_RegisterFront, METH_VARARGS, nullptr},
	///注册名字服务器网络地址
	{"RegisterNameServer", CTP_THOST_FTDC_TRADER_API_RegisterNameServer, METH_VARARGS, nullptr},
	///注册名字服务器用户信息
	{"RegisterFensUserInfo", CTP_THOST_FTDC_TRADER_API_RegisterFensUserInfo, METH_VARARGS, nullptr},
	///注册回调接口
	{"RegisterSpi", CTP_THOST_FTDC_TRADER_API_RegisterSpi, METH_VARARGS, nullptr},
	///订阅私有流。
	{"SubscribePrivateTopic", CTP_THOST_FTDC_TRADER_API_SubscribePrivateTopic, METH_VARARGS, nullptr},
	///订阅公共流。
	{"SubscribePublicTopic", CTP_THOST_FTDC_TRADER_API_SubscribePublicTopic, METH_VARARGS, nullptr},
	///客户端认证请求
	{"ReqAuthenticate", CTP_THOST_FTDC_TRADER_API_ReqAuthenticate, METH_VARARGS, nullptr},
	///用户登录请求
	{"ReqUserLogin", CTP_THOST_FTDC_TRADER_API_ReqUserLogin, METH_VARARGS, nullptr},
	///登出请求
	{"ReqUserLogout", CTP_THOST_FTDC_TRADER_API_ReqUserLogout, METH_VARARGS, nullptr},
	///用户口令更新请求
	{"ReqUserPasswordUpdate", CTP_THOST_FTDC_TRADER_API_ReqUserPasswordUpdate, METH_VARARGS, nullptr},
	///资金账户口令更新请求
	{"ReqTradingAccountPasswordUpdate", CTP_THOST_FTDC_TRADER_API_ReqTradingAccountPasswordUpdate, METH_VARARGS, nullptr},
	///报单录入请求
	{"ReqOrderInsert", CTP_THOST_FTDC_TRADER_API_ReqOrderInsert, METH_VARARGS, nullptr},
	///预埋单录入请求
	{"ReqParkedOrderInsert", CTP_THOST_FTDC_TRADER_API_ReqParkedOrderInsert, METH_VARARGS, nullptr},
	///预埋撤单录入请求
	{"ReqParkedOrderAction", CTP_THOST_FTDC_TRADER_API_ReqParkedOrderAction, METH_VARARGS, nullptr},
	///报单操作请求
	{"ReqOrderAction", CTP_THOST_FTDC_TRADER_API_ReqOrderAction, METH_VARARGS, nullptr},
	///查询最大报单数量请求
	{"ReqQueryMaxOrderVolume", CTP_THOST_FTDC_TRADER_API_ReqQueryMaxOrderVolume, METH_VARARGS, nullptr},
	///投资者结算结果确认
	{"ReqSettlementInfoConfirm", CTP_THOST_FTDC_TRADER_API_ReqSettlementInfoConfirm, METH_VARARGS, nullptr},
	///请求删除预埋单
	{"ReqRemoveParkedOrder", CTP_THOST_FTDC_TRADER_API_ReqRemoveParkedOrder, METH_VARARGS, nullptr},
	///请求删除预埋撤单
	{"ReqRemoveParkedOrderAction", CTP_THOST_FTDC_TRADER_API_ReqRemoveParkedOrderAction, METH_VARARGS, nullptr},
	///执行宣告录入请求
	{"ReqExecOrderInsert", CTP_THOST_FTDC_TRADER_API_ReqExecOrderInsert, METH_VARARGS, nullptr},
	///执行宣告操作请求
	{"ReqExecOrderAction", CTP_THOST_FTDC_TRADER_API_ReqExecOrderAction, METH_VARARGS, nullptr},
	///询价录入请求
	{"ReqForQuoteInsert", CTP_THOST_FTDC_TRADER_API_ReqForQuoteInsert, METH_VARARGS, nullptr},
	///报价录入请求
	{"ReqQuoteInsert", CTP_THOST_FTDC_TRADER_API_ReqQuoteInsert, METH_VARARGS, nullptr},
	///报价操作请求
	{"ReqQuoteAction", CTP_THOST_FTDC_TRADER_API_ReqQuoteAction, METH_VARARGS, nullptr},
	///批量报单操作请求
	{"ReqBatchOrderAction", CTP_THOST_FTDC_TRADER_API_ReqBatchOrderAction, METH_VARARGS, nullptr},
	///申请组合录入请求
	{"ReqCombActionInsert", CTP_THOST_FTDC_TRADER_API_ReqCombActionInsert, METH_VARARGS, nullptr},
	///请求查询报单
	{"ReqQryOrder", CTP_THOST_FTDC_TRADER_API_ReqQryOrder, METH_VARARGS, nullptr},
	///请求查询成交
	{"ReqQryTrade", CTP_THOST_FTDC_TRADER_API_ReqQryTrade, METH_VARARGS, nullptr},
	///请求查询投资者持仓
	{"ReqQryInvestorPosition", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPosition, METH_VARARGS, nullptr},
	///请求查询资金账户
	{"ReqQryTradingAccount", CTP_THOST_FTDC_TRADER_API_ReqQryTradingAccount, METH_VARARGS, nullptr},
	///请求查询投资者
	{"ReqQryInvestor", CTP_THOST_FTDC_TRADER_API_ReqQryInvestor, METH_VARARGS, nullptr},
	///请求查询交易编码
	{"ReqQryTradingCode", CTP_THOST_FTDC_TRADER_API_ReqQryTradingCode, METH_VARARGS, nullptr},
	///请求查询合约保证金率
	{"ReqQryInstrumentMarginRate", CTP_THOST_FTDC_TRADER_API_ReqQryInstrumentMarginRate, METH_VARARGS, nullptr},
	///请求查询合约手续费率
	{"ReqQryInstrumentCommissionRate", CTP_THOST_FTDC_TRADER_API_ReqQryInstrumentCommissionRate, METH_VARARGS, nullptr},
	///请求查询交易所
	{"ReqQryExchange", CTP_THOST_FTDC_TRADER_API_ReqQryExchange, METH_VARARGS, nullptr},
	///请求查询产品
	{"ReqQryProduct", CTP_THOST_FTDC_TRADER_API_ReqQryProduct, METH_VARARGS, nullptr},
	///请求查询合约
	{"ReqQryInstrument", CTP_THOST_FTDC_TRADER_API_ReqQryInstrument, METH_VARARGS, nullptr},
	///请求查询行情
	{"ReqQryDepthMarketData", CTP_THOST_FTDC_TRADER_API_ReqQryDepthMarketData, METH_VARARGS, nullptr},
	///请求查询投资者结算结果
	{"ReqQrySettlementInfo", CTP_THOST_FTDC_TRADER_API_ReqQrySettlementInfo, METH_VARARGS, nullptr},
	///请求查询转帐银行
	{"ReqQryTransferBank", CTP_THOST_FTDC_TRADER_API_ReqQryTransferBank, METH_VARARGS, nullptr},
	///请求查询投资者持仓明细
	{"ReqQryInvestorPositionDetail", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPositionDetail, METH_VARARGS, nullptr},
	///请求查询客户通知
	{"ReqQryNotice", CTP_THOST_FTDC_TRADER_API_ReqQryNotice, METH_VARARGS, nullptr},
	///请求查询结算信息确认
	{"ReqQrySettlementInfoConfirm", CTP_THOST_FTDC_TRADER_API_ReqQrySettlementInfoConfirm, METH_VARARGS, nullptr},
	///请求查询投资者持仓明细
	{"ReqQryInvestorPositionCombineDetail", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPositionCombineDetail, METH_VARARGS, nullptr},
	///请求查询保证金监管系统经纪公司资金账户密钥
	{"ReqQryCFMMCTradingAccountKey", CTP_THOST_FTDC_TRADER_API_ReqQryCFMMCTradingAccountKey, METH_VARARGS, nullptr},
	///请求查询仓单折抵信息
	{"ReqQryEWarrantOffset", CTP_THOST_FTDC_TRADER_API_ReqQryEWarrantOffset, METH_VARARGS, nullptr},
	///请求查询投资者品种/跨品种保证金
	{"ReqQryInvestorProductGroupMargin", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorProductGroupMargin, METH_VARARGS, nullptr},
	///请求查询交易所保证金率
	{"ReqQryExchangeMarginRate", CTP_THOST_FTDC_TRADER_API_ReqQryExchangeMarginRate, METH_VARARGS, nullptr},
	///请求查询交易所调整保证金率
	{"ReqQryExchangeMarginRateAdjust", CTP_THOST_FTDC_TRADER_API_ReqQryExchangeMarginRateAdjust, METH_VARARGS, nullptr},
	///请求查询汇率
	{"ReqQryExchangeRate", CTP_THOST_FTDC_TRADER_API_ReqQryExchangeRate, METH_VARARGS, nullptr},
	///请求查询二级代理操作员银期权限
	{"ReqQrySecAgentACIDMap", CTP_THOST_FTDC_TRADER_API_ReqQrySecAgentACIDMap, METH_VARARGS, nullptr},
	///请求查询产品报价汇率
	{"ReqQryProductExchRate", CTP_THOST_FTDC_TRADER_API_ReqQryProductExchRate, METH_VARARGS, nullptr},
	///请求查询产品组
	{"ReqQryProductGroup", CTP_THOST_FTDC_TRADER_API_ReqQryProductGroup, METH_VARARGS, nullptr},
	///请求查询期权交易成本
	{"ReqQryOptionInstrTradeCost", CTP_THOST_FTDC_TRADER_API_ReqQryOptionInstrTradeCost, METH_VARARGS, nullptr},
	///请求查询期权合约手续费
	{"ReqQryOptionInstrCommRate", CTP_THOST_FTDC_TRADER_API_ReqQryOptionInstrCommRate, METH_VARARGS, nullptr},
	///请求查询执行宣告
	{"ReqQryExecOrder", CTP_THOST_FTDC_TRADER_API_ReqQryExecOrder, METH_VARARGS, nullptr},
	///请求查询询价
	{"ReqQryForQuote", CTP_THOST_FTDC_TRADER_API_ReqQryForQuote, METH_VARARGS, nullptr},
	///请求查询报价
	{"ReqQryQuote", CTP_THOST_FTDC_TRADER_API_ReqQryQuote, METH_VARARGS, nullptr},
	///请求查询组合合约安全系数
	{"ReqQryCombInstrumentGuard", CTP_THOST_FTDC_TRADER_API_ReqQryCombInstrumentGuard, METH_VARARGS, nullptr},
	///请求查询申请组合
	{"ReqQryCombAction", CTP_THOST_FTDC_TRADER_API_ReqQryCombAction, METH_VARARGS, nullptr},
	///请求查询转帐流水
	{"ReqQryTransferSerial", CTP_THOST_FTDC_TRADER_API_ReqQryTransferSerial, METH_VARARGS, nullptr},
	///请求查询银期签约关系
	{"ReqQryAccountregister", CTP_THOST_FTDC_TRADER_API_ReqQryAccountregister, METH_VARARGS, nullptr},
	///请求查询签约银行
	{"ReqQryContractBank", CTP_THOST_FTDC_TRADER_API_ReqQryContractBank, METH_VARARGS, nullptr},
	///请求查询预埋单
	{"ReqQryParkedOrder", CTP_THOST_FTDC_TRADER_API_ReqQryParkedOrder, METH_VARARGS, nullptr},
	///请求查询预埋撤单
	{"ReqQryParkedOrderAction", CTP_THOST_FTDC_TRADER_API_ReqQryParkedOrderAction, METH_VARARGS, nullptr},
	///请求查询交易通知
	{"ReqQryTradingNotice", CTP_THOST_FTDC_TRADER_API_ReqQryTradingNotice, METH_VARARGS, nullptr},
	///请求查询经纪公司交易参数
	{"ReqQryBrokerTradingParams", CTP_THOST_FTDC_TRADER_API_ReqQryBrokerTradingParams, METH_VARARGS, nullptr},
	///请求查询经纪公司交易算法
	{"ReqQryBrokerTradingAlgos", CTP_THOST_FTDC_TRADER_API_ReqQryBrokerTradingAlgos, METH_VARARGS, nullptr},
	///请求查询监控中心用户令牌
	{"ReqQueryCFMMCTradingAccountToken", CTP_THOST_FTDC_TRADER_API_ReqQueryCFMMCTradingAccountToken, METH_VARARGS, nullptr},
	///期货发起银行资金转期货请求
	{"ReqFromBankToFutureByFuture", CTP_THOST_FTDC_TRADER_API_ReqFromBankToFutureByFuture, METH_VARARGS, nullptr},
	///期货发起期货资金转银行请求
	{"ReqFromFutureToBankByFuture", CTP_THOST_FTDC_TRADER_API_ReqFromFutureToBankByFuture, METH_VARARGS, nullptr},
	///期货发起查询银行余额请求
	{"ReqQueryBankAccountMoneyByFuture", CTP_THOST_FTDC_TRADER_API_ReqQueryBankAccountMoneyByFuture, METH_VARARGS, nullptr},
	{nullptr}  /* Sentinel */
};

PyMemberDef CTP_THOST_FTDC_TRADER_API_members[] = {
	{nullptr}  /* Sentinel */
};

PyTypeObject CTP_THOST_FTDC_TRADER_API_TYPE = {
	PyVarObject_HEAD_INIT(NULL, 0)
	"PyCTP.CThostFtdcTraderApi",/* tp_name */
	sizeof(struct CTP_THOST_FTDC_TRADER_API),/* tp_basicsize */
	0,                          /* tp_itemsize */
	CTP_THOST_FTDC_TRADER_API_dealloc,/* tp_dealloc */
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
	"equivalent to CThostFtdcTraderApi for cpp", /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	CTP_THOST_FTDC_TRADER_API_methods, /* tp_methods */
	CTP_THOST_FTDC_TRADER_API_members, /* tp_members */
	0,                          /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	0,							/* tp_init */
	0,                          /* tp_alloc */
	0,                          /* tp_new */
};

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
	CTP_THOST_FTDC_TRADER_API *self = (CTP_THOST_FTDC_TRADER_API *)(type->tp_alloc(type, 0));

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

	if (!PyArg_ParseTuple(args, const_cast<char *>("i"), &nResumeType))
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

	if (!PyArg_ParseTuple(args, const_cast<char *>("i"), &nResumeType))
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
		//obj->api->Release();
		obj->api = nullptr;
	}

	if(obj->spi != nullptr){
		delete dynamic_cast<CTP_THOST_FTDC_TRADER_SPI *>(obj->spi);
		obj->spi = nullptr;
	}

	Py_XDECREF(obj->pySpi);

	Py_TYPE(self)->tp_free(self);
}

void CTP_THOST_FTDC_TRADER_SPI::OnFrontConnected()
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), nullptr);
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnFrontConnected"), nullptr);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnFrontDisconnected(int nReason)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("i"), nReason);
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnFrontDisconnected"), const_cast<char *>("i"), nReason);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnHeartBeatWarning(int nTimeLapse)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("i"), nTimeLapse);
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnHeartBeatWarning"), const_cast<char *>("i"), nTimeLapse);
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRspAuthenticateField), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspAuthenticate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRspAuthenticateField), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRspUserLogin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserLogin"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRspUserLogin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pUserLogout), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserLogout"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pUserLogout), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pUserPasswordUpdate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserPasswordUpdate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pUserPasswordUpdate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTradingAccountPasswordUpdate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspTradingAccountPasswordUpdate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTradingAccountPasswordUpdate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOrderInsert"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspParkedOrderInsert"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspParkedOrderAction"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOrderAction"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pQueryMaxOrderVolume), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQueryMaxOrderVolume"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pQueryMaxOrderVolume), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSettlementInfoConfirm), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSettlementInfoConfirm"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSettlementInfoConfirm), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRemoveParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspRemoveParkedOrder"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRemoveParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRemoveParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspRemoveParkedOrderAction"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pRemoveParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputExecOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspExecOrderInsert"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputExecOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputExecOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspExecOrderAction"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputExecOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputForQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspForQuoteInsert"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputForQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQuoteInsert"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputQuoteAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQuoteAction"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputQuoteAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputBatchOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspBatchOrderAction")        , const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputBatchOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputCombAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspCombActionInsert")        , const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInputCombAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOrder"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTrade), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTrade"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTrade), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestorPosition), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPosition"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestorPosition), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTradingAccount), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingAccount"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTradingAccount), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestor), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestor"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestor), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTradingCode), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingCode"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTradingCode), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInstrumentMarginRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrumentMarginRate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInstrumentMarginRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInstrumentCommissionRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrumentCommissionRate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInstrumentCommissionRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExchange), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchange"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExchange), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pProduct), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProduct"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pProduct), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrument"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInstrument), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pDepthMarketData), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryDepthMarketData"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pDepthMarketData), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSettlementInfo), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySettlementInfo"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSettlementInfo), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTransferBank), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTransferBank"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTransferBank), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestorPositionDetail), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPositionDetail"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestorPositionDetail), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pNotice), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryNotice"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pNotice), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSettlementInfoConfirm), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySettlementInfoConfirm"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSettlementInfoConfirm), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestorPositionCombineDetail), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPositionCombineDetail"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestorPositionCombineDetail), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pCFMMCTradingAccountKey), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCFMMCTradingAccountKey"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pCFMMCTradingAccountKey), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pEWarrantOffset), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryEWarrantOffset"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pEWarrantOffset), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestorProductGroupMargin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProductGroupMargin("), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pInvestorProductGroupMargin), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExchangeMarginRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeMarginRate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExchangeMarginRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExchangeMarginRateAdjust), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeMarginRateAdjust"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExchangeMarginRateAdjust), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExchangeRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeRate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExchangeRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSecAgentACIDMap), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentACIDMap"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pSecAgentACIDMap), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pProductExchRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProductExchRate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pProductExchRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pProductGroup), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProductGroup"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pProductGroup), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pOptionInstrTradeCost), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOptionInstrTradeCost"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pOptionInstrTradeCost), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pOptionInstrCommRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOptionInstrCommRate"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pOptionInstrCommRate), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExecOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExecOrder"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pExecOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pForQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryForQuote"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pForQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryQuote"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pQuote), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pCombInstrumentGuard), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombInstrumentGuard"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pCombInstrumentGuard), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pCombAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombAction"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pCombAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTransferSerial), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTransferSerial"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTransferSerial), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pAccountregister), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryAccountregister"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pAccountregister), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NiN"), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspError"), const_cast<char *>("NiN"), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnOrder(CThostFtdcOrderField *pOrder)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pOrder));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOrder"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pOrder));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnTrade(CThostFtdcTradeField *pTrade)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pTrade));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnTrade"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pTrade));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputOrder), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOrderInsert"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputOrder), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOrderAction"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pInstrumentStatus));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnInstrumentStatus"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pInstrumentStatus));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pTradingNoticeInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnTradingNotice"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pTradingNoticeInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pErrorConditionalOrder));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnErrorConditionalOrder"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pErrorConditionalOrder));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pExecOrder));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnExecOrder"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pExecOrder));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputExecOrder), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnExecOrderInsert"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputExecOrder), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pExecOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnExecOrderAction"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pExecOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputForQuote), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnForQuoteInsert"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputForQuote), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnQuote(CThostFtdcQuoteField *pQuote)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pQuote));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnQuote"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pQuote));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputQuote), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQuoteInsert"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputQuote), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pQuoteAction), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQuoteAction"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pQuoteAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pForQuoteRsp));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnForQuoteRsp"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pForQuoteRsp));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pCFMMCTradingAccountToken));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCFMMCTradingAccountToken"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pCFMMCTradingAccountToken));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pBatchOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnBatchOrderAction"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pBatchOrderAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnCombAction(CThostFtdcCombActionField *pCombAction)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pCombAction));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCombAction"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pCombAction));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputCombAction), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnCombActionInsert"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pInputCombAction), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pContractBank), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryContractBank"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pContractBank), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryParkedOrder"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pParkedOrder), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryParkedOrderAction"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pParkedOrderAction), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTradingNotice), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingNotice"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pTradingNotice), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pBrokerTradingParams), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryBrokerTradingParams"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pBrokerTradingParams), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pBrokerTradingAlgos), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryBrokerTradingAlgos"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pBrokerTradingAlgos), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pQueryCFMMCTradingAccountToken), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQueryCFMMCTradingAccountToken"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pQueryCFMMCTradingAccountToken), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspTransfer));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromBankToFutureByBank"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspTransfer));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspTransfer));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromFutureToBankByBank"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspTransfer));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByBank"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByBank"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspTransfer));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromBankToFutureByFuture"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspTransfer));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspTransfer));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromFutureToBankByFuture"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspTransfer));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByFutureManual"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByFutureManual"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pNotifyQueryAccount));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnQueryBankBalanceByFuture"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pNotifyQueryAccount));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnBankToFutureByFuture"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnFutureToBankByFuture"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqRepeal), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnRepealBankToFutureByFutureManual"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqRepeal), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqRepeal), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnRepealFutureToBankByFutureManual"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqRepeal), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqQueryAccount), PyCTP_PyDict_FromStruct(pRspInfo));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQueryBankBalanceByFuture"), const_cast<char *>("NN"), PyCTP_PyDict_FromStruct(pReqQueryAccount), PyCTP_PyDict_FromStruct(pRspInfo));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByFuture"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByFuture"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pRspRepeal));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspFromBankToFutureByFuture"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspFromFutureToBankByFuture"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pReqTransfer), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pReqQueryAccount), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQueryBankAccountMoneyByFuture"), const_cast<char *>("NNiN"), PyCTP_PyDict_FromStruct(pReqQueryAccount), PyCTP_PyDict_FromStruct(pRspInfo), nRequestID, PyBool_FromLong(bIsLast));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pOpenAccount));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOpenAccountByBank"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pOpenAccount));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pCancelAccount));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCancelAccountByBank"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pCancelAccount));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};

void CTP_THOST_FTDC_TRADER_SPI::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount)
{
	PyGILState_STATE gstate = PyGILState_Ensure();
	//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(strpbrk(__FUNCTION__, "::") + 2), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pChangeAccount));
	PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnChangeAccountByBank"), const_cast<char *>("N"), PyCTP_PyDict_FromStruct(pChangeAccount));
	if(result == nullptr)
		PyErr_Print();
	Py_XDECREF(result);
	PyGILState_Release(gstate);
};
