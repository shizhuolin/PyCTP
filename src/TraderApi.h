﻿//交易API转PyCTP

#ifndef PYCTP_TRADERAPI_H
#define PYCTP_TRADERAPI_H

#include <structmember.h>
#include <ThostFtdcTraderApi.h>

// 交易Py结构类
struct CTP_THOST_FTDC_TRADER_API
{
	PyObject_HEAD
	/* Type-specific fields go here. */
	CThostFtdcTraderApi *api;	/* 交易api */
	CThostFtdcTraderSpi *spi;	/* 交易回调spi */
	PyObject *pySpi;			/* py代码回调 */
};

///创建TraderApi
///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
///@return 创建出的UserApi
PyObject *CTP_THOST_FTDC_TRADER_API_CreateFtdcTraderApi(PyTypeObject *type, PyObject *args);

///获取API的版本信息
///@retrun 获取到的版本号
PyObject *CTP_THOST_FTDC_TRADER_API_GetApiVersion(PyObject *self, PyObject *args);

///删除接口对象本身
///@remark 不再使用本接口对象时,调用该函数删除接口对象
PyObject *CTP_THOST_FTDC_TRADER_API_Release(PyObject *self, PyObject *args);

///初始化
///@remark 初始化运行环境,只有调用后,接口才开始工作
PyObject *CTP_THOST_FTDC_TRADER_API_Init(PyObject *self, PyObject *args);

///等待接口线程结束运行
///@return 线程退出代码
PyObject *CTP_THOST_FTDC_TRADER_API_Join(PyObject *self, PyObject *args);

///获取当前交易日
///@retrun 获取到的交易日
///@remark 只有登录成功后,才能得到正确的交易日
PyObject *CTP_THOST_FTDC_TRADER_API_GetTradingDay(PyObject *self, PyObject *args);

///注册前置机网络地址
///@param pszFrontAddress：前置机网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
PyObject *CTP_THOST_FTDC_TRADER_API_RegisterFront(PyObject *self, PyObject *args);

///注册名字服务器网络地址
///@param pszNsAddress：名字服务器网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
///@remark RegisterNameServer优先于RegisterFront
PyObject *CTP_THOST_FTDC_TRADER_API_RegisterNameServer(PyObject *self, PyObject *args);

///注册名字服务器用户信息
///@param pFensUserInfo：用户信息。
PyObject *CTP_THOST_FTDC_TRADER_API_RegisterFensUserInfo(PyObject *self, PyObject *args);

///注册回调接口
///@param pSpi 派生自回调接口类的实例
PyObject *CTP_THOST_FTDC_TRADER_API_RegisterSpi(PyObject *self, PyObject *args);

///订阅私有流。
///@param nResumeType 私有流重传方式
///        THOST_TERT_RESTART:从本交易日开始重传
///        THOST_TERT_RESUME:从上次收到的续传
///        THOST_TERT_QUICK:只传送登录后私有流的内容
///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
PyObject *CTP_THOST_FTDC_TRADER_API_SubscribePrivateTopic(PyObject *self, PyObject *args);

///订阅公共流。
///@param nResumeType 公共流重传方式
///        THOST_TERT_RESTART:从本交易日开始重传
///        THOST_TERT_RESUME:从上次收到的续传
///        THOST_TERT_QUICK:只传送登录后公共流的内容
///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
PyObject *CTP_THOST_FTDC_TRADER_API_SubscribePublicTopic(PyObject *self, PyObject *args);

///客户端认证请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqAuthenticate(PyObject *self, PyObject *args);

///用户登录请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqUserLogin(PyObject *self, PyObject *args);

///登出请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqUserLogout(PyObject *self, PyObject *args);

///用户口令更新请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqUserPasswordUpdate(PyObject *self, PyObject *args);

///资金账户口令更新请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqTradingAccountPasswordUpdate(PyObject *self, PyObject *args);

///报单录入请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqOrderInsert(PyObject *self, PyObject *args);

///预埋单录入请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqParkedOrderInsert(PyObject *self, PyObject *args);

///预埋撤单录入请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqParkedOrderAction(PyObject *self, PyObject *args);

///报单操作请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqOrderAction(PyObject *self, PyObject *args);

///查询最大报单数量请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQueryMaxOrderVolume(PyObject *self, PyObject *args);

///投资者结算结果确认
PyObject *CTP_THOST_FTDC_TRADER_API_ReqSettlementInfoConfirm(PyObject *self, PyObject *args);

///请求删除预埋单
PyObject *CTP_THOST_FTDC_TRADER_API_ReqRemoveParkedOrder(PyObject *self, PyObject *args);

///请求删除预埋撤单
PyObject *CTP_THOST_FTDC_TRADER_API_ReqRemoveParkedOrderAction(PyObject *self, PyObject *args);

///执行宣告录入请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqExecOrderInsert(PyObject *self, PyObject *args);

///执行宣告操作请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqExecOrderAction(PyObject *self, PyObject *args);

///询价录入请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqForQuoteInsert(PyObject *self, PyObject *args);

///报价录入请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQuoteInsert(PyObject *self, PyObject *args);

///报价操作请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQuoteAction(PyObject *self, PyObject *args);

///批量报单操作请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqBatchOrderAction(PyObject *self, PyObject *args);

///申请组合录入请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqCombActionInsert(PyObject *self, PyObject *args);

///请求查询报单
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryOrder(PyObject *self, PyObject *args);

///请求查询成交
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryTrade(PyObject *self, PyObject *args);

///请求查询投资者持仓
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPosition(PyObject *self, PyObject *args);

///请求查询资金账户
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryTradingAccount(PyObject *self, PyObject *args);

///请求查询投资者
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryInvestor(PyObject *self, PyObject *args);

///请求查询交易编码
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryTradingCode(PyObject *self, PyObject *args);

///请求查询合约保证金率
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryInstrumentMarginRate(PyObject *self, PyObject *args);

///请求查询合约手续费率
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryInstrumentCommissionRate(PyObject *self, PyObject *args);

///请求查询交易所
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryExchange(PyObject *self, PyObject *args);

///请求查询产品
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryProduct(PyObject *self, PyObject *args);

///请求查询合约
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryInstrument(PyObject *self, PyObject *args);

///请求查询行情
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryDepthMarketData(PyObject *self, PyObject *args);

///请求查询投资者结算结果
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQrySettlementInfo(PyObject *self, PyObject *args);

///请求查询转帐银行
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryTransferBank(PyObject *self, PyObject *args);

///请求查询投资者持仓明细
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPositionDetail(PyObject *self, PyObject *args);

///请求查询客户通知
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryNotice(PyObject *self, PyObject *args);

///请求查询结算信息确认
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQrySettlementInfoConfirm(PyObject *self, PyObject *args);

///请求查询投资者持仓明细
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPositionCombineDetail(PyObject *self, PyObject *args);

///请求查询保证金监管系统经纪公司资金账户密钥
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryCFMMCTradingAccountKey(PyObject *self, PyObject *args);

///请求查询仓单折抵信息
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryEWarrantOffset(PyObject *self, PyObject *args);

///请求查询投资者品种/跨品种保证金
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryInvestorProductGroupMargin(PyObject *self, PyObject *args);

///请求查询交易所保证金率
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryExchangeMarginRate(PyObject *self, PyObject *args);

///请求查询交易所调整保证金率
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryExchangeMarginRateAdjust(PyObject *self, PyObject *args);

///请求查询汇率
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryExchangeRate(PyObject *self, PyObject *args);

///请求查询二级代理操作员银期权限
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQrySecAgentACIDMap(PyObject *self, PyObject *args);

///请求查询产品报价汇率
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryProductExchRate(PyObject *self, PyObject *args);

///请求查询产品组
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryProductGroup(PyObject *self, PyObject *args);

///请求查询期权交易成本
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryOptionInstrTradeCost(PyObject *self, PyObject *args);

///请求查询期权合约手续费
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryOptionInstrCommRate(PyObject *self, PyObject *args);

///请求查询执行宣告
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryExecOrder(PyObject *self, PyObject *args);

///请求查询询价
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryForQuote(PyObject *self, PyObject *args);

///请求查询报价
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryQuote(PyObject *self, PyObject *args);

///请求查询组合合约安全系数
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryCombInstrumentGuard(PyObject *self, PyObject *args);

///请求查询申请组合
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryCombAction(PyObject *self, PyObject *args);

///请求查询转帐流水
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryTransferSerial(PyObject *self, PyObject *args);

///请求查询银期签约关系
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryAccountregister(PyObject *self, PyObject *args);

///请求查询签约银行
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryContractBank(PyObject *self, PyObject *args);

///请求查询预埋单
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryParkedOrder(PyObject *self, PyObject *args);

///请求查询预埋撤单
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryParkedOrderAction(PyObject *self, PyObject *args);

///请求查询交易通知
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryTradingNotice(PyObject *self, PyObject *args);

///请求查询经纪公司交易参数
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryBrokerTradingParams(PyObject *self, PyObject *args);

///请求查询经纪公司交易算法
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQryBrokerTradingAlgos(PyObject *self, PyObject *args);

///请求查询监控中心用户令牌
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQueryCFMMCTradingAccountToken(PyObject *self, PyObject *args);

///期货发起银行资金转期货请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqFromBankToFutureByFuture(PyObject *self, PyObject *args);

///期货发起期货资金转银行请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqFromFutureToBankByFuture(PyObject *self, PyObject *args);

///期货发起查询银行余额请求
PyObject *CTP_THOST_FTDC_TRADER_API_ReqQueryBankAccountMoneyByFuture(PyObject *self, PyObject *args);

///回收对象资源
void CTP_THOST_FTDC_TRADER_API_dealloc(PyObject *self);

// API方法
extern PyMethodDef CTP_THOST_FTDC_TRADER_API_methods[];

// API属性
extern PyMemberDef CTP_THOST_FTDC_TRADER_API_members[];

// 交易结构py类型定义
extern PyTypeObject CTP_THOST_FTDC_TRADER_API_TYPE;

class CTP_THOST_FTDC_TRADER_SPI : public CThostFtdcTraderSpi
{
protected:
	CTP_THOST_FTDC_TRADER_API *api;
public:
	CTP_THOST_FTDC_TRADER_SPI(CTP_THOST_FTDC_TRADER_API *userapi): api(userapi) {};
	virtual ~CTP_THOST_FTDC_TRADER_SPI() {};

	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	virtual void OnFrontConnected();

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	virtual void OnFrontDisconnected(int nReason);

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	virtual void OnHeartBeatWarning(int nTimeLapse);

	///客户端认证响应
	virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///登录请求响应
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///登出请求响应
	virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///用户口令更新请求响应
	virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///资金账户口令更新请求响应
	virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///报单录入请求响应
	virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///预埋单录入请求响应
	virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///预埋撤单录入请求响应
	virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///报单操作请求响应
	virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///查询最大报单数量响应
	virtual void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///投资者结算结果确认响应
	virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///删除预埋单响应
	virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///删除预埋撤单响应
	virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///执行宣告录入请求响应
	virtual void OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///执行宣告操作请求响应
	virtual void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///询价录入请求响应
	virtual void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///报价录入请求响应
	virtual void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///报价操作请求响应
	virtual void OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///批量报单操作请求响应
	virtual void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///申请组合录入请求响应
	virtual void OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询报单响应
	virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询成交响应
	virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询投资者持仓响应
	virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询资金账户响应
	virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询投资者响应
	virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询交易编码响应
	virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询合约保证金率响应
	virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询合约手续费率响应
	virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询交易所响应
	virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询产品响应
	virtual void OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询合约响应
	virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询行情响应
	virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询投资者结算结果响应
	virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询转帐银行响应
	virtual void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询投资者持仓明细响应
	virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询客户通知响应
	virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询结算信息确认响应
	virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询投资者持仓明细响应
	virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///查询保证金监管系统经纪公司资金账户密钥响应
	virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询仓单折抵信息响应
	virtual void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询投资者品种/跨品种保证金响应
	virtual void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询交易所保证金率响应
	virtual void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询交易所调整保证金率响应
	virtual void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询汇率响应
	virtual void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询二级代理操作员银期权限响应
	virtual void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询产品报价汇率
	virtual void OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询产品组
	virtual void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询期权交易成本响应
	virtual void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询期权合约手续费响应
	virtual void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询执行宣告响应
	virtual void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询询价响应
	virtual void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询报价响应
	virtual void OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询组合合约安全系数响应
	virtual void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询申请组合响应
	virtual void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询转帐流水响应
	virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询银期签约关系响应
	virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///错误应答
	virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///报单通知
	virtual void OnRtnOrder(CThostFtdcOrderField *pOrder) ;

	///成交通知
	virtual void OnRtnTrade(CThostFtdcTradeField *pTrade) ;

	///报单录入错误回报
	virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) ;

	///报单操作错误回报
	virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) ;

	///合约交易状态通知
	virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) ;

	///交易通知
	virtual void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) ;

	///提示条件单校验错误
	virtual void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) ;

	///执行宣告通知
	virtual void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) ;

	///执行宣告录入错误回报
	virtual void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) ;

	///执行宣告操作错误回报
	virtual void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) ;

	///询价录入错误回报
	virtual void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) ;

	///报价通知
	virtual void OnRtnQuote(CThostFtdcQuoteField *pQuote) ;

	///报价录入错误回报
	virtual void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) ;

	///报价操作错误回报
	virtual void OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) ;

	///询价通知
	virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) ;

	///保证金监控中心用户令牌
	virtual void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) ;

	///批量报单操作错误回报
	virtual void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) ;

	///申请组合通知
	virtual void OnRtnCombAction(CThostFtdcCombActionField *pCombAction) ;

	///申请组合录入错误回报
	virtual void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) ;

	///请求查询签约银行响应
	virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询预埋单响应
	virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询预埋撤单响应
	virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询交易通知响应
	virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询经纪公司交易参数响应
	virtual void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询经纪公司交易算法响应
	virtual void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///请求查询监控中心用户令牌
	virtual void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///银行发起银行资金转期货通知
	virtual void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) ;

	///银行发起期货资金转银行通知
	virtual void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) ;

	///银行发起冲正银行转期货通知
	virtual void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) ;

	///银行发起冲正期货转银行通知
	virtual void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) ;

	///期货发起银行资金转期货通知
	virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) ;

	///期货发起期货资金转银行通知
	virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) ;

	///系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) ;

	///系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) ;

	///期货发起查询银行余额通知
	virtual void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) ;

	///期货发起银行资金转期货错误回报
	virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) ;

	///期货发起期货资金转银行错误回报
	virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) ;

	///系统运行时期货端手工发起冲正银行转期货错误回报
	virtual void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) ;

	///系统运行时期货端手工发起冲正期货转银行错误回报
	virtual void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) ;

	///期货发起查询银行余额错误回报
	virtual void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) ;

	///期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) ;

	///期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) ;

	///期货发起银行资金转期货应答
	virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///期货发起期货资金转银行应答
	virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///期货发起查询银行余额应答
	virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;

	///银行发起银期开户通知
	virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) ;

	///银行发起银期销户通知
	virtual void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) ;

	///银行发起变更银行账号通知
	virtual void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) ;
};

#endif
