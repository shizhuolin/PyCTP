#include "UserApiStruct.h"

int PyCTP_All_Type_init(PyObject *module) {

	///信息分发
	if( PyCThostFtdcDisseminationFieldType_init(module) < 0 ) return -1;
	///用户登录请求
	if( PyCThostFtdcReqUserLoginFieldType_init(module) < 0 ) return -1;
	///用户登录应答
	if( PyCThostFtdcRspUserLoginFieldType_init(module) < 0 ) return -1;
	///用户登出请求
	if( PyCThostFtdcUserLogoutFieldType_init(module) < 0 ) return -1;
	///强制交易员退出
	if( PyCThostFtdcForceUserLogoutFieldType_init(module) < 0 ) return -1;
	///客户端认证请求
	if( PyCThostFtdcReqAuthenticateFieldType_init(module) < 0 ) return -1;
	///客户端认证响应
	if( PyCThostFtdcRspAuthenticateFieldType_init(module) < 0 ) return -1;
	///客户端认证信息
	if( PyCThostFtdcAuthenticationInfoFieldType_init(module) < 0 ) return -1;
	///用户登录应答2
	if( PyCThostFtdcRspUserLogin2FieldType_init(module) < 0 ) return -1;
	///银期转帐报文头
	if( PyCThostFtdcTransferHeaderFieldType_init(module) < 0 ) return -1;
	///银行资金转期货请求，TradeCode=202001
	if( PyCThostFtdcTransferBankToFutureReqFieldType_init(module) < 0 ) return -1;
	///银行资金转期货请求响应
	if( PyCThostFtdcTransferBankToFutureRspFieldType_init(module) < 0 ) return -1;
	///期货资金转银行请求，TradeCode=202002
	if( PyCThostFtdcTransferFutureToBankReqFieldType_init(module) < 0 ) return -1;
	///期货资金转银行请求响应
	if( PyCThostFtdcTransferFutureToBankRspFieldType_init(module) < 0 ) return -1;
	///查询银行资金请求，TradeCode=204002
	if( PyCThostFtdcTransferQryBankReqFieldType_init(module) < 0 ) return -1;
	///查询银行资金请求响应
	if( PyCThostFtdcTransferQryBankRspFieldType_init(module) < 0 ) return -1;
	///查询银行交易明细请求，TradeCode=204999
	if( PyCThostFtdcTransferQryDetailReqFieldType_init(module) < 0 ) return -1;
	///查询银行交易明细请求响应
	if( PyCThostFtdcTransferQryDetailRspFieldType_init(module) < 0 ) return -1;
	///响应信息
	if( PyCThostFtdcRspInfoFieldType_init(module) < 0 ) return -1;
	///交易所
	if( PyCThostFtdcExchangeFieldType_init(module) < 0 ) return -1;
	///产品
	if( PyCThostFtdcProductFieldType_init(module) < 0 ) return -1;
	///合约
	if( PyCThostFtdcInstrumentFieldType_init(module) < 0 ) return -1;
	///经纪公司
	if( PyCThostFtdcBrokerFieldType_init(module) < 0 ) return -1;
	///交易所交易员
	if( PyCThostFtdcTraderFieldType_init(module) < 0 ) return -1;
	///投资者
	if( PyCThostFtdcInvestorFieldType_init(module) < 0 ) return -1;
	///交易编码
	if( PyCThostFtdcTradingCodeFieldType_init(module) < 0 ) return -1;
	///会员编码和经纪公司编码对照表
	if( PyCThostFtdcPartBrokerFieldType_init(module) < 0 ) return -1;
	///管理用户
	if( PyCThostFtdcSuperUserFieldType_init(module) < 0 ) return -1;
	///管理用户功能权限
	if( PyCThostFtdcSuperUserFunctionFieldType_init(module) < 0 ) return -1;
	///投资者组
	if( PyCThostFtdcInvestorGroupFieldType_init(module) < 0 ) return -1;
	///资金账户
	if( PyCThostFtdcTradingAccountFieldType_init(module) < 0 ) return -1;
	///投资者持仓
	if( PyCThostFtdcInvestorPositionFieldType_init(module) < 0 ) return -1;
	///合约保证金率
	if( PyCThostFtdcInstrumentMarginRateFieldType_init(module) < 0 ) return -1;
	///合约手续费率
	if( PyCThostFtdcInstrumentCommissionRateFieldType_init(module) < 0 ) return -1;
	///深度行情
	if( PyCThostFtdcDepthMarketDataFieldType_init(module) < 0 ) return -1;
	///投资者合约交易权限
	if( PyCThostFtdcInstrumentTradingRightFieldType_init(module) < 0 ) return -1;
	///经纪公司用户
	if( PyCThostFtdcBrokerUserFieldType_init(module) < 0 ) return -1;
	///经纪公司用户口令
	if( PyCThostFtdcBrokerUserPasswordFieldType_init(module) < 0 ) return -1;
	///经纪公司用户功能权限
	if( PyCThostFtdcBrokerUserFunctionFieldType_init(module) < 0 ) return -1;
	///交易所交易员报盘机
	if( PyCThostFtdcTraderOfferFieldType_init(module) < 0 ) return -1;
	///投资者结算结果
	if( PyCThostFtdcSettlementInfoFieldType_init(module) < 0 ) return -1;
	///合约保证金率调整
	if( PyCThostFtdcInstrumentMarginRateAdjustFieldType_init(module) < 0 ) return -1;
	///交易所保证金率
	if( PyCThostFtdcExchangeMarginRateFieldType_init(module) < 0 ) return -1;
	///交易所保证金率调整
	if( PyCThostFtdcExchangeMarginRateAdjustFieldType_init(module) < 0 ) return -1;
	///汇率
	if( PyCThostFtdcExchangeRateFieldType_init(module) < 0 ) return -1;
	///结算引用
	if( PyCThostFtdcSettlementRefFieldType_init(module) < 0 ) return -1;
	///当前时间
	if( PyCThostFtdcCurrentTimeFieldType_init(module) < 0 ) return -1;
	///通讯阶段
	if( PyCThostFtdcCommPhaseFieldType_init(module) < 0 ) return -1;
	///登录信息
	if( PyCThostFtdcLoginInfoFieldType_init(module) < 0 ) return -1;
	///登录信息
	if( PyCThostFtdcLogoutAllFieldType_init(module) < 0 ) return -1;
	///前置状态
	if( PyCThostFtdcFrontStatusFieldType_init(module) < 0 ) return -1;
	///用户口令变更
	if( PyCThostFtdcUserPasswordUpdateFieldType_init(module) < 0 ) return -1;
	///输入报单
	if( PyCThostFtdcInputOrderFieldType_init(module) < 0 ) return -1;
	///报单
	if( PyCThostFtdcOrderFieldType_init(module) < 0 ) return -1;
	///交易所报单
	if( PyCThostFtdcExchangeOrderFieldType_init(module) < 0 ) return -1;
	///交易所报单插入失败
	if( PyCThostFtdcExchangeOrderInsertErrorFieldType_init(module) < 0 ) return -1;
	///输入报单操作
	if( PyCThostFtdcInputOrderActionFieldType_init(module) < 0 ) return -1;
	///报单操作
	if( PyCThostFtdcOrderActionFieldType_init(module) < 0 ) return -1;
	///交易所报单操作
	if( PyCThostFtdcExchangeOrderActionFieldType_init(module) < 0 ) return -1;
	///交易所报单操作失败
	if( PyCThostFtdcExchangeOrderActionErrorFieldType_init(module) < 0 ) return -1;
	///交易所成交
	if( PyCThostFtdcExchangeTradeFieldType_init(module) < 0 ) return -1;
	///成交
	if( PyCThostFtdcTradeFieldType_init(module) < 0 ) return -1;
	///用户会话
	if( PyCThostFtdcUserSessionFieldType_init(module) < 0 ) return -1;
	///查询最大报单数量
	if( PyCThostFtdcQryMaxOrderVolumeFieldType_init(module) < 0 ) return -1;
	///投资者结算结果确认信息
	if( PyCThostFtdcSettlementInfoConfirmFieldType_init(module) < 0 ) return -1;
	///出入金同步
	if( PyCThostFtdcSyncDepositFieldType_init(module) < 0 ) return -1;
	///货币质押同步
	if( PyCThostFtdcSyncFundMortgageFieldType_init(module) < 0 ) return -1;
	///经纪公司同步
	if( PyCThostFtdcBrokerSyncFieldType_init(module) < 0 ) return -1;
	///正在同步中的投资者
	if( PyCThostFtdcSyncingInvestorFieldType_init(module) < 0 ) return -1;
	///正在同步中的交易代码
	if( PyCThostFtdcSyncingTradingCodeFieldType_init(module) < 0 ) return -1;
	///正在同步中的投资者分组
	if( PyCThostFtdcSyncingInvestorGroupFieldType_init(module) < 0 ) return -1;
	///正在同步中的交易账号
	if( PyCThostFtdcSyncingTradingAccountFieldType_init(module) < 0 ) return -1;
	///正在同步中的投资者持仓
	if( PyCThostFtdcSyncingInvestorPositionFieldType_init(module) < 0 ) return -1;
	///正在同步中的合约保证金率
	if( PyCThostFtdcSyncingInstrumentMarginRateFieldType_init(module) < 0 ) return -1;
	///正在同步中的合约手续费率
	if( PyCThostFtdcSyncingInstrumentCommissionRateFieldType_init(module) < 0 ) return -1;
	///正在同步中的合约交易权限
	if( PyCThostFtdcSyncingInstrumentTradingRightFieldType_init(module) < 0 ) return -1;
	///查询报单
	if( PyCThostFtdcQryOrderFieldType_init(module) < 0 ) return -1;
	///查询成交
	if( PyCThostFtdcQryTradeFieldType_init(module) < 0 ) return -1;
	///查询投资者持仓
	if( PyCThostFtdcQryInvestorPositionFieldType_init(module) < 0 ) return -1;
	///查询资金账户
	if( PyCThostFtdcQryTradingAccountFieldType_init(module) < 0 ) return -1;
	///查询投资者
	if( PyCThostFtdcQryInvestorFieldType_init(module) < 0 ) return -1;
	///查询交易编码
	if( PyCThostFtdcQryTradingCodeFieldType_init(module) < 0 ) return -1;
	///查询投资者组
	if( PyCThostFtdcQryInvestorGroupFieldType_init(module) < 0 ) return -1;
	///查询合约保证金率
	if( PyCThostFtdcQryInstrumentMarginRateFieldType_init(module) < 0 ) return -1;
	///查询手续费率
	if( PyCThostFtdcQryInstrumentCommissionRateFieldType_init(module) < 0 ) return -1;
	///查询合约交易权限
	if( PyCThostFtdcQryInstrumentTradingRightFieldType_init(module) < 0 ) return -1;
	///查询经纪公司
	if( PyCThostFtdcQryBrokerFieldType_init(module) < 0 ) return -1;
	///查询交易员
	if( PyCThostFtdcQryTraderFieldType_init(module) < 0 ) return -1;
	///查询管理用户功能权限
	if( PyCThostFtdcQrySuperUserFunctionFieldType_init(module) < 0 ) return -1;
	///查询用户会话
	if( PyCThostFtdcQryUserSessionFieldType_init(module) < 0 ) return -1;
	///查询经纪公司会员代码
	if( PyCThostFtdcQryPartBrokerFieldType_init(module) < 0 ) return -1;
	///查询前置状态
	if( PyCThostFtdcQryFrontStatusFieldType_init(module) < 0 ) return -1;
	///查询交易所报单
	if( PyCThostFtdcQryExchangeOrderFieldType_init(module) < 0 ) return -1;
	///查询报单操作
	if( PyCThostFtdcQryOrderActionFieldType_init(module) < 0 ) return -1;
	///查询交易所报单操作
	if( PyCThostFtdcQryExchangeOrderActionFieldType_init(module) < 0 ) return -1;
	///查询管理用户
	if( PyCThostFtdcQrySuperUserFieldType_init(module) < 0 ) return -1;
	///查询交易所
	if( PyCThostFtdcQryExchangeFieldType_init(module) < 0 ) return -1;
	///查询产品
	if( PyCThostFtdcQryProductFieldType_init(module) < 0 ) return -1;
	///查询合约
	if( PyCThostFtdcQryInstrumentFieldType_init(module) < 0 ) return -1;
	///查询行情
	if( PyCThostFtdcQryDepthMarketDataFieldType_init(module) < 0 ) return -1;
	///查询经纪公司用户
	if( PyCThostFtdcQryBrokerUserFieldType_init(module) < 0 ) return -1;
	///查询经纪公司用户权限
	if( PyCThostFtdcQryBrokerUserFunctionFieldType_init(module) < 0 ) return -1;
	///查询交易员报盘机
	if( PyCThostFtdcQryTraderOfferFieldType_init(module) < 0 ) return -1;
	///查询出入金流水
	if( PyCThostFtdcQrySyncDepositFieldType_init(module) < 0 ) return -1;
	///查询投资者结算结果
	if( PyCThostFtdcQrySettlementInfoFieldType_init(module) < 0 ) return -1;
	///查询交易所保证金率
	if( PyCThostFtdcQryExchangeMarginRateFieldType_init(module) < 0 ) return -1;
	///查询交易所调整保证金率
	if( PyCThostFtdcQryExchangeMarginRateAdjustFieldType_init(module) < 0 ) return -1;
	///查询汇率
	if( PyCThostFtdcQryExchangeRateFieldType_init(module) < 0 ) return -1;
	///查询货币质押流水
	if( PyCThostFtdcQrySyncFundMortgageFieldType_init(module) < 0 ) return -1;
	///查询报单
	if( PyCThostFtdcQryHisOrderFieldType_init(module) < 0 ) return -1;
	///当前期权合约最小保证金
	if( PyCThostFtdcOptionInstrMiniMarginFieldType_init(module) < 0 ) return -1;
	///当前期权合约保证金调整系数
	if( PyCThostFtdcOptionInstrMarginAdjustFieldType_init(module) < 0 ) return -1;
	///当前期权合约手续费的详细内容
	if( PyCThostFtdcOptionInstrCommRateFieldType_init(module) < 0 ) return -1;
	///期权交易成本
	if( PyCThostFtdcOptionInstrTradeCostFieldType_init(module) < 0 ) return -1;
	///期权交易成本查询
	if( PyCThostFtdcQryOptionInstrTradeCostFieldType_init(module) < 0 ) return -1;
	///期权手续费率查询
	if( PyCThostFtdcQryOptionInstrCommRateFieldType_init(module) < 0 ) return -1;
	///股指现货指数
	if( PyCThostFtdcIndexPriceFieldType_init(module) < 0 ) return -1;
	///输入的执行宣告
	if( PyCThostFtdcInputExecOrderFieldType_init(module) < 0 ) return -1;
	///输入执行宣告操作
	if( PyCThostFtdcInputExecOrderActionFieldType_init(module) < 0 ) return -1;
	///执行宣告
	if( PyCThostFtdcExecOrderFieldType_init(module) < 0 ) return -1;
	///执行宣告操作
	if( PyCThostFtdcExecOrderActionFieldType_init(module) < 0 ) return -1;
	///执行宣告查询
	if( PyCThostFtdcQryExecOrderFieldType_init(module) < 0 ) return -1;
	///交易所执行宣告信息
	if( PyCThostFtdcExchangeExecOrderFieldType_init(module) < 0 ) return -1;
	///交易所执行宣告查询
	if( PyCThostFtdcQryExchangeExecOrderFieldType_init(module) < 0 ) return -1;
	///执行宣告操作查询
	if( PyCThostFtdcQryExecOrderActionFieldType_init(module) < 0 ) return -1;
	///交易所执行宣告操作
	if( PyCThostFtdcExchangeExecOrderActionFieldType_init(module) < 0 ) return -1;
	///交易所执行宣告操作查询
	if( PyCThostFtdcQryExchangeExecOrderActionFieldType_init(module) < 0 ) return -1;
	///错误执行宣告
	if( PyCThostFtdcErrExecOrderFieldType_init(module) < 0 ) return -1;
	///查询错误执行宣告
	if( PyCThostFtdcQryErrExecOrderFieldType_init(module) < 0 ) return -1;
	///错误执行宣告操作
	if( PyCThostFtdcErrExecOrderActionFieldType_init(module) < 0 ) return -1;
	///查询错误执行宣告操作
	if( PyCThostFtdcQryErrExecOrderActionFieldType_init(module) < 0 ) return -1;
	///投资者期权合约交易权限
	if( PyCThostFtdcOptionInstrTradingRightFieldType_init(module) < 0 ) return -1;
	///查询期权合约交易权限
	if( PyCThostFtdcQryOptionInstrTradingRightFieldType_init(module) < 0 ) return -1;
	///输入的询价
	if( PyCThostFtdcInputForQuoteFieldType_init(module) < 0 ) return -1;
	///询价
	if( PyCThostFtdcForQuoteFieldType_init(module) < 0 ) return -1;
	///询价查询
	if( PyCThostFtdcQryForQuoteFieldType_init(module) < 0 ) return -1;
	///交易所询价信息
	if( PyCThostFtdcExchangeForQuoteFieldType_init(module) < 0 ) return -1;
	///交易所询价查询
	if( PyCThostFtdcQryExchangeForQuoteFieldType_init(module) < 0 ) return -1;
	///输入的报价
	if( PyCThostFtdcInputQuoteFieldType_init(module) < 0 ) return -1;
	///输入报价操作
	if( PyCThostFtdcInputQuoteActionFieldType_init(module) < 0 ) return -1;
	///报价
	if( PyCThostFtdcQuoteFieldType_init(module) < 0 ) return -1;
	///报价操作
	if( PyCThostFtdcQuoteActionFieldType_init(module) < 0 ) return -1;
	///报价查询
	if( PyCThostFtdcQryQuoteFieldType_init(module) < 0 ) return -1;
	///交易所报价信息
	if( PyCThostFtdcExchangeQuoteFieldType_init(module) < 0 ) return -1;
	///交易所报价查询
	if( PyCThostFtdcQryExchangeQuoteFieldType_init(module) < 0 ) return -1;
	///报价操作查询
	if( PyCThostFtdcQryQuoteActionFieldType_init(module) < 0 ) return -1;
	///交易所报价操作
	if( PyCThostFtdcExchangeQuoteActionFieldType_init(module) < 0 ) return -1;
	///交易所报价操作查询
	if( PyCThostFtdcQryExchangeQuoteActionFieldType_init(module) < 0 ) return -1;
	///期权合约delta值
	if( PyCThostFtdcOptionInstrDeltaFieldType_init(module) < 0 ) return -1;
	///发给做市商的询价请求
	if( PyCThostFtdcForQuoteRspFieldType_init(module) < 0 ) return -1;
	///当前期权合约执行偏移值的详细内容
	if( PyCThostFtdcStrikeOffsetFieldType_init(module) < 0 ) return -1;
	///期权执行偏移值查询
	if( PyCThostFtdcQryStrikeOffsetFieldType_init(module) < 0 ) return -1;
	///输入批量报单操作
	if( PyCThostFtdcInputBatchOrderActionFieldType_init(module) < 0 ) return -1;
	///批量报单操作
	if( PyCThostFtdcBatchOrderActionFieldType_init(module) < 0 ) return -1;
	///交易所批量报单操作
	if( PyCThostFtdcExchangeBatchOrderActionFieldType_init(module) < 0 ) return -1;
	///查询批量报单操作
	if( PyCThostFtdcQryBatchOrderActionFieldType_init(module) < 0 ) return -1;
	///组合合约安全系数
	if( PyCThostFtdcCombInstrumentGuardFieldType_init(module) < 0 ) return -1;
	///组合合约安全系数查询
	if( PyCThostFtdcQryCombInstrumentGuardFieldType_init(module) < 0 ) return -1;
	///输入的申请组合
	if( PyCThostFtdcInputCombActionFieldType_init(module) < 0 ) return -1;
	///申请组合
	if( PyCThostFtdcCombActionFieldType_init(module) < 0 ) return -1;
	///申请组合查询
	if( PyCThostFtdcQryCombActionFieldType_init(module) < 0 ) return -1;
	///交易所申请组合信息
	if( PyCThostFtdcExchangeCombActionFieldType_init(module) < 0 ) return -1;
	///交易所申请组合查询
	if( PyCThostFtdcQryExchangeCombActionFieldType_init(module) < 0 ) return -1;
	///产品报价汇率
	if( PyCThostFtdcProductExchRateFieldType_init(module) < 0 ) return -1;
	///产品报价汇率查询
	if( PyCThostFtdcQryProductExchRateFieldType_init(module) < 0 ) return -1;
	///查询询价价差参数
	if( PyCThostFtdcQryForQuoteParamFieldType_init(module) < 0 ) return -1;
	///询价价差参数
	if( PyCThostFtdcForQuoteParamFieldType_init(module) < 0 ) return -1;
	///当前做市商期权合约手续费的详细内容
	if( PyCThostFtdcMMOptionInstrCommRateFieldType_init(module) < 0 ) return -1;
	///做市商期权手续费率查询
	if( PyCThostFtdcQryMMOptionInstrCommRateFieldType_init(module) < 0 ) return -1;
	///做市商合约手续费率
	if( PyCThostFtdcMMInstrumentCommissionRateFieldType_init(module) < 0 ) return -1;
	///查询做市商合约手续费率
	if( PyCThostFtdcQryMMInstrumentCommissionRateFieldType_init(module) < 0 ) return -1;
	///当前报单手续费的详细内容
	if( PyCThostFtdcInstrumentOrderCommRateFieldType_init(module) < 0 ) return -1;
	///报单手续费率查询
	if( PyCThostFtdcQryInstrumentOrderCommRateFieldType_init(module) < 0 ) return -1;
	///交易参数
	if( PyCThostFtdcTradeParamFieldType_init(module) < 0 ) return -1;
	///合约保证金率调整
	if( PyCThostFtdcInstrumentMarginRateULFieldType_init(module) < 0 ) return -1;
	///期货持仓限制参数
	if( PyCThostFtdcFutureLimitPosiParamFieldType_init(module) < 0 ) return -1;
	///禁止登录IP
	if( PyCThostFtdcLoginForbiddenIPFieldType_init(module) < 0 ) return -1;
	///IP列表
	if( PyCThostFtdcIPListFieldType_init(module) < 0 ) return -1;
	///输入的期权自对冲
	if( PyCThostFtdcInputOptionSelfCloseFieldType_init(module) < 0 ) return -1;
	///输入期权自对冲操作
	if( PyCThostFtdcInputOptionSelfCloseActionFieldType_init(module) < 0 ) return -1;
	///期权自对冲
	if( PyCThostFtdcOptionSelfCloseFieldType_init(module) < 0 ) return -1;
	///期权自对冲操作
	if( PyCThostFtdcOptionSelfCloseActionFieldType_init(module) < 0 ) return -1;
	///期权自对冲查询
	if( PyCThostFtdcQryOptionSelfCloseFieldType_init(module) < 0 ) return -1;
	///交易所期权自对冲信息
	if( PyCThostFtdcExchangeOptionSelfCloseFieldType_init(module) < 0 ) return -1;
	///期权自对冲操作查询
	if( PyCThostFtdcQryOptionSelfCloseActionFieldType_init(module) < 0 ) return -1;
	///交易所期权自对冲操作
	if( PyCThostFtdcExchangeOptionSelfCloseActionFieldType_init(module) < 0 ) return -1;
	///延时换汇同步
	if( PyCThostFtdcSyncDelaySwapFieldType_init(module) < 0 ) return -1;
	///查询延时换汇同步
	if( PyCThostFtdcQrySyncDelaySwapFieldType_init(module) < 0 ) return -1;
	///投资单元
	if( PyCThostFtdcInvestUnitFieldType_init(module) < 0 ) return -1;
	///查询投资单元
	if( PyCThostFtdcQryInvestUnitFieldType_init(module) < 0 ) return -1;
	///二级代理商资金校验模式
	if( PyCThostFtdcSecAgentCheckModeFieldType_init(module) < 0 ) return -1;
	///二级代理商信息
	if( PyCThostFtdcSecAgentTradeInfoFieldType_init(module) < 0 ) return -1;
	///市场行情
	if( PyCThostFtdcMarketDataFieldType_init(module) < 0 ) return -1;
	///行情基础属性
	if( PyCThostFtdcMarketDataBaseFieldType_init(module) < 0 ) return -1;
	///行情静态属性
	if( PyCThostFtdcMarketDataStaticFieldType_init(module) < 0 ) return -1;
	///行情最新成交属性
	if( PyCThostFtdcMarketDataLastMatchFieldType_init(module) < 0 ) return -1;
	///行情最优价属性
	if( PyCThostFtdcMarketDataBestPriceFieldType_init(module) < 0 ) return -1;
	///行情申买二、三属性
	if( PyCThostFtdcMarketDataBid23FieldType_init(module) < 0 ) return -1;
	///行情申卖二、三属性
	if( PyCThostFtdcMarketDataAsk23FieldType_init(module) < 0 ) return -1;
	///行情申买四、五属性
	if( PyCThostFtdcMarketDataBid45FieldType_init(module) < 0 ) return -1;
	///行情申卖四、五属性
	if( PyCThostFtdcMarketDataAsk45FieldType_init(module) < 0 ) return -1;
	///行情更新时间属性
	if( PyCThostFtdcMarketDataUpdateTimeFieldType_init(module) < 0 ) return -1;
	///行情上下带价
	if( PyCThostFtdcMarketDataBandingPriceFieldType_init(module) < 0 ) return -1;
	///行情交易所代码属性
	if( PyCThostFtdcMarketDataExchangeFieldType_init(module) < 0 ) return -1;
	///指定的合约
	if( PyCThostFtdcSpecificInstrumentFieldType_init(module) < 0 ) return -1;
	///合约状态
	if( PyCThostFtdcInstrumentStatusFieldType_init(module) < 0 ) return -1;
	///查询合约状态
	if( PyCThostFtdcQryInstrumentStatusFieldType_init(module) < 0 ) return -1;
	///投资者账户
	if( PyCThostFtdcInvestorAccountFieldType_init(module) < 0 ) return -1;
	///浮动盈亏算法
	if( PyCThostFtdcPositionProfitAlgorithmFieldType_init(module) < 0 ) return -1;
	///会员资金折扣
	if( PyCThostFtdcDiscountFieldType_init(module) < 0 ) return -1;
	///查询转帐银行
	if( PyCThostFtdcQryTransferBankFieldType_init(module) < 0 ) return -1;
	///转帐银行
	if( PyCThostFtdcTransferBankFieldType_init(module) < 0 ) return -1;
	///查询投资者持仓明细
	if( PyCThostFtdcQryInvestorPositionDetailFieldType_init(module) < 0 ) return -1;
	///投资者持仓明细
	if( PyCThostFtdcInvestorPositionDetailFieldType_init(module) < 0 ) return -1;
	///资金账户口令域
	if( PyCThostFtdcTradingAccountPasswordFieldType_init(module) < 0 ) return -1;
	///交易所行情报盘机
	if( PyCThostFtdcMDTraderOfferFieldType_init(module) < 0 ) return -1;
	///查询行情报盘机
	if( PyCThostFtdcQryMDTraderOfferFieldType_init(module) < 0 ) return -1;
	///查询客户通知
	if( PyCThostFtdcQryNoticeFieldType_init(module) < 0 ) return -1;
	///客户通知
	if( PyCThostFtdcNoticeFieldType_init(module) < 0 ) return -1;
	///用户权限
	if( PyCThostFtdcUserRightFieldType_init(module) < 0 ) return -1;
	///查询结算信息确认域
	if( PyCThostFtdcQrySettlementInfoConfirmFieldType_init(module) < 0 ) return -1;
	///装载结算信息
	if( PyCThostFtdcLoadSettlementInfoFieldType_init(module) < 0 ) return -1;
	///经纪公司可提资金算法表
	if( PyCThostFtdcBrokerWithdrawAlgorithmFieldType_init(module) < 0 ) return -1;
	///资金账户口令变更域
	if( PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_init(module) < 0 ) return -1;
	///资金账户口令变更域
	if( PyCThostFtdcTradingAccountPasswordUpdateFieldType_init(module) < 0 ) return -1;
	///查询组合合约分腿
	if( PyCThostFtdcQryCombinationLegFieldType_init(module) < 0 ) return -1;
	///查询组合合约分腿
	if( PyCThostFtdcQrySyncStatusFieldType_init(module) < 0 ) return -1;
	///组合交易合约的单腿
	if( PyCThostFtdcCombinationLegFieldType_init(module) < 0 ) return -1;
	///数据同步状态
	if( PyCThostFtdcSyncStatusFieldType_init(module) < 0 ) return -1;
	///查询联系人
	if( PyCThostFtdcQryLinkManFieldType_init(module) < 0 ) return -1;
	///联系人
	if( PyCThostFtdcLinkManFieldType_init(module) < 0 ) return -1;
	///查询经纪公司用户事件
	if( PyCThostFtdcQryBrokerUserEventFieldType_init(module) < 0 ) return -1;
	///查询经纪公司用户事件
	if( PyCThostFtdcBrokerUserEventFieldType_init(module) < 0 ) return -1;
	///查询签约银行请求
	if( PyCThostFtdcQryContractBankFieldType_init(module) < 0 ) return -1;
	///查询签约银行响应
	if( PyCThostFtdcContractBankFieldType_init(module) < 0 ) return -1;
	///投资者组合持仓明细
	if( PyCThostFtdcInvestorPositionCombineDetailFieldType_init(module) < 0 ) return -1;
	///预埋单
	if( PyCThostFtdcParkedOrderFieldType_init(module) < 0 ) return -1;
	///输入预埋单操作
	if( PyCThostFtdcParkedOrderActionFieldType_init(module) < 0 ) return -1;
	///查询预埋单
	if( PyCThostFtdcQryParkedOrderFieldType_init(module) < 0 ) return -1;
	///查询预埋撤单
	if( PyCThostFtdcQryParkedOrderActionFieldType_init(module) < 0 ) return -1;
	///删除预埋单
	if( PyCThostFtdcRemoveParkedOrderFieldType_init(module) < 0 ) return -1;
	///删除预埋撤单
	if( PyCThostFtdcRemoveParkedOrderActionFieldType_init(module) < 0 ) return -1;
	///经纪公司可提资金算法表
	if( PyCThostFtdcInvestorWithdrawAlgorithmFieldType_init(module) < 0 ) return -1;
	///查询组合持仓明细
	if( PyCThostFtdcQryInvestorPositionCombineDetailFieldType_init(module) < 0 ) return -1;
	///成交均价
	if( PyCThostFtdcMarketDataAveragePriceFieldType_init(module) < 0 ) return -1;
	///校验投资者密码
	if( PyCThostFtdcVerifyInvestorPasswordFieldType_init(module) < 0 ) return -1;
	///用户IP
	if( PyCThostFtdcUserIPFieldType_init(module) < 0 ) return -1;
	///用户事件通知信息
	if( PyCThostFtdcTradingNoticeInfoFieldType_init(module) < 0 ) return -1;
	///用户事件通知
	if( PyCThostFtdcTradingNoticeFieldType_init(module) < 0 ) return -1;
	///查询交易事件通知
	if( PyCThostFtdcQryTradingNoticeFieldType_init(module) < 0 ) return -1;
	///查询错误报单
	if( PyCThostFtdcQryErrOrderFieldType_init(module) < 0 ) return -1;
	///错误报单
	if( PyCThostFtdcErrOrderFieldType_init(module) < 0 ) return -1;
	///查询错误报单操作
	if( PyCThostFtdcErrorConditionalOrderFieldType_init(module) < 0 ) return -1;
	///查询错误报单操作
	if( PyCThostFtdcQryErrOrderActionFieldType_init(module) < 0 ) return -1;
	///错误报单操作
	if( PyCThostFtdcErrOrderActionFieldType_init(module) < 0 ) return -1;
	///查询交易所状态
	if( PyCThostFtdcQryExchangeSequenceFieldType_init(module) < 0 ) return -1;
	///交易所状态
	if( PyCThostFtdcExchangeSequenceFieldType_init(module) < 0 ) return -1;
	///根据价格查询最大报单数量
	if( PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_init(module) < 0 ) return -1;
	///查询经纪公司交易参数
	if( PyCThostFtdcQryBrokerTradingParamsFieldType_init(module) < 0 ) return -1;
	///经纪公司交易参数
	if( PyCThostFtdcBrokerTradingParamsFieldType_init(module) < 0 ) return -1;
	///查询经纪公司交易算法
	if( PyCThostFtdcQryBrokerTradingAlgosFieldType_init(module) < 0 ) return -1;
	///经纪公司交易算法
	if( PyCThostFtdcBrokerTradingAlgosFieldType_init(module) < 0 ) return -1;
	///查询经纪公司资金
	if( PyCThostFtdcQueryBrokerDepositFieldType_init(module) < 0 ) return -1;
	///经纪公司资金
	if( PyCThostFtdcBrokerDepositFieldType_init(module) < 0 ) return -1;
	///查询保证金监管系统经纪公司密钥
	if( PyCThostFtdcQryCFMMCBrokerKeyFieldType_init(module) < 0 ) return -1;
	///保证金监管系统经纪公司密钥
	if( PyCThostFtdcCFMMCBrokerKeyFieldType_init(module) < 0 ) return -1;
	///保证金监管系统经纪公司资金账户密钥
	if( PyCThostFtdcCFMMCTradingAccountKeyFieldType_init(module) < 0 ) return -1;
	///请求查询保证金监管系统经纪公司资金账户密钥
	if( PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_init(module) < 0 ) return -1;
	///用户动态令牌参数
	if( PyCThostFtdcBrokerUserOTPParamFieldType_init(module) < 0 ) return -1;
	///手工同步用户动态令牌
	if( PyCThostFtdcManualSyncBrokerUserOTPFieldType_init(module) < 0 ) return -1;
	///投资者手续费率模板
	if( PyCThostFtdcCommRateModelFieldType_init(module) < 0 ) return -1;
	///请求查询投资者手续费率模板
	if( PyCThostFtdcQryCommRateModelFieldType_init(module) < 0 ) return -1;
	///投资者保证金率模板
	if( PyCThostFtdcMarginModelFieldType_init(module) < 0 ) return -1;
	///请求查询投资者保证金率模板
	if( PyCThostFtdcQryMarginModelFieldType_init(module) < 0 ) return -1;
	///仓单折抵信息
	if( PyCThostFtdcEWarrantOffsetFieldType_init(module) < 0 ) return -1;
	///查询仓单折抵信息
	if( PyCThostFtdcQryEWarrantOffsetFieldType_init(module) < 0 ) return -1;
	///查询投资者品种/跨品种保证金
	if( PyCThostFtdcQryInvestorProductGroupMarginFieldType_init(module) < 0 ) return -1;
	///投资者品种/跨品种保证金
	if( PyCThostFtdcInvestorProductGroupMarginFieldType_init(module) < 0 ) return -1;
	///查询监控中心用户令牌
	if( PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_init(module) < 0 ) return -1;
	///监控中心用户令牌
	if( PyCThostFtdcCFMMCTradingAccountTokenFieldType_init(module) < 0 ) return -1;
	///查询产品组
	if( PyCThostFtdcQryProductGroupFieldType_init(module) < 0 ) return -1;
	///投资者品种/跨品种保证金产品组
	if( PyCThostFtdcProductGroupFieldType_init(module) < 0 ) return -1;
	///交易所公告
	if( PyCThostFtdcBulletinFieldType_init(module) < 0 ) return -1;
	///查询交易所公告
	if( PyCThostFtdcQryBulletinFieldType_init(module) < 0 ) return -1;
	///MulticastInstrument
	if( PyCThostFtdcMulticastInstrumentFieldType_init(module) < 0 ) return -1;
	///QryMulticastInstrument
	if( PyCThostFtdcQryMulticastInstrumentFieldType_init(module) < 0 ) return -1;
	///App客户端权限分配
	if( PyCThostFtdcAppIDAuthAssignFieldType_init(module) < 0 ) return -1;
	///转帐开户请求
	if( PyCThostFtdcReqOpenAccountFieldType_init(module) < 0 ) return -1;
	///转帐销户请求
	if( PyCThostFtdcReqCancelAccountFieldType_init(module) < 0 ) return -1;
	///变更银行账户请求
	if( PyCThostFtdcReqChangeAccountFieldType_init(module) < 0 ) return -1;
	///转账请求
	if( PyCThostFtdcReqTransferFieldType_init(module) < 0 ) return -1;
	///银行发起银行资金转期货响应
	if( PyCThostFtdcRspTransferFieldType_init(module) < 0 ) return -1;
	///冲正请求
	if( PyCThostFtdcReqRepealFieldType_init(module) < 0 ) return -1;
	///冲正响应
	if( PyCThostFtdcRspRepealFieldType_init(module) < 0 ) return -1;
	///查询账户信息请求
	if( PyCThostFtdcReqQueryAccountFieldType_init(module) < 0 ) return -1;
	///查询账户信息响应
	if( PyCThostFtdcRspQueryAccountFieldType_init(module) < 0 ) return -1;
	///期商签到签退
	if( PyCThostFtdcFutureSignIOFieldType_init(module) < 0 ) return -1;
	///期商签到响应
	if( PyCThostFtdcRspFutureSignInFieldType_init(module) < 0 ) return -1;
	///期商签退请求
	if( PyCThostFtdcReqFutureSignOutFieldType_init(module) < 0 ) return -1;
	///期商签退响应
	if( PyCThostFtdcRspFutureSignOutFieldType_init(module) < 0 ) return -1;
	///查询指定流水号的交易结果请求
	if( PyCThostFtdcReqQueryTradeResultBySerialFieldType_init(module) < 0 ) return -1;
	///查询指定流水号的交易结果响应
	if( PyCThostFtdcRspQueryTradeResultBySerialFieldType_init(module) < 0 ) return -1;
	///日终文件就绪请求
	if( PyCThostFtdcReqDayEndFileReadyFieldType_init(module) < 0 ) return -1;
	///返回结果
	if( PyCThostFtdcReturnResultFieldType_init(module) < 0 ) return -1;
	///验证期货资金密码
	if( PyCThostFtdcVerifyFuturePasswordFieldType_init(module) < 0 ) return -1;
	///验证客户信息
	if( PyCThostFtdcVerifyCustInfoFieldType_init(module) < 0 ) return -1;
	///验证期货资金密码和客户信息
	if( PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_init(module) < 0 ) return -1;
	///验证期货资金密码和客户信息
	if( PyCThostFtdcDepositResultInformFieldType_init(module) < 0 ) return -1;
	///交易核心向银期报盘发出密钥同步请求
	if( PyCThostFtdcReqSyncKeyFieldType_init(module) < 0 ) return -1;
	///交易核心向银期报盘发出密钥同步响应
	if( PyCThostFtdcRspSyncKeyFieldType_init(module) < 0 ) return -1;
	///查询账户信息通知
	if( PyCThostFtdcNotifyQueryAccountFieldType_init(module) < 0 ) return -1;
	///银期转账交易流水表
	if( PyCThostFtdcTransferSerialFieldType_init(module) < 0 ) return -1;
	///请求查询转帐流水
	if( PyCThostFtdcQryTransferSerialFieldType_init(module) < 0 ) return -1;
	///期商签到通知
	if( PyCThostFtdcNotifyFutureSignInFieldType_init(module) < 0 ) return -1;
	///期商签退通知
	if( PyCThostFtdcNotifyFutureSignOutFieldType_init(module) < 0 ) return -1;
	///交易核心向银期报盘发出密钥同步处理结果的通知
	if( PyCThostFtdcNotifySyncKeyFieldType_init(module) < 0 ) return -1;
	///请求查询银期签约关系
	if( PyCThostFtdcQryAccountregisterFieldType_init(module) < 0 ) return -1;
	///客户开销户信息表
	if( PyCThostFtdcAccountregisterFieldType_init(module) < 0 ) return -1;
	///银期开户信息
	if( PyCThostFtdcOpenAccountFieldType_init(module) < 0 ) return -1;
	///银期销户信息
	if( PyCThostFtdcCancelAccountFieldType_init(module) < 0 ) return -1;
	///银期变更银行账号信息
	if( PyCThostFtdcChangeAccountFieldType_init(module) < 0 ) return -1;
	///二级代理操作员银期权限
	if( PyCThostFtdcSecAgentACIDMapFieldType_init(module) < 0 ) return -1;
	///二级代理操作员银期权限查询
	if( PyCThostFtdcQrySecAgentACIDMapFieldType_init(module) < 0 ) return -1;
	///灾备中心交易权限
	if( PyCThostFtdcUserRightsAssignFieldType_init(module) < 0 ) return -1;
	///经济公司是否有在本标示的交易权限
	if( PyCThostFtdcBrokerUserRightAssignFieldType_init(module) < 0 ) return -1;
	///灾备交易转换报文
	if( PyCThostFtdcDRTransferFieldType_init(module) < 0 ) return -1;
	///Fens用户信息
	if( PyCThostFtdcFensUserInfoFieldType_init(module) < 0 ) return -1;
	///当前银期所属交易中心
	if( PyCThostFtdcCurrTransferIdentityFieldType_init(module) < 0 ) return -1;
	///禁止登录用户
	if( PyCThostFtdcLoginForbiddenUserFieldType_init(module) < 0 ) return -1;
	///查询禁止登录用户
	if( PyCThostFtdcQryLoginForbiddenUserFieldType_init(module) < 0 ) return -1;
	///资金账户基本准备金
	if( PyCThostFtdcTradingAccountReserveFieldType_init(module) < 0 ) return -1;
	///查询禁止登录IP
	if( PyCThostFtdcQryLoginForbiddenIPFieldType_init(module) < 0 ) return -1;
	///查询IP列表
	if( PyCThostFtdcQryIPListFieldType_init(module) < 0 ) return -1;
	///查询用户下单权限分配表
	if( PyCThostFtdcQryUserRightsAssignFieldType_init(module) < 0 ) return -1;
	///银期预约开户确认请求
	if( PyCThostFtdcReserveOpenAccountConfirmFieldType_init(module) < 0 ) return -1;
	///银期预约开户
	if( PyCThostFtdcReserveOpenAccountFieldType_init(module) < 0 ) return -1;
	///银行账户属性
	if( PyCThostFtdcAccountPropertyFieldType_init(module) < 0 ) return -1;
	///查询当前交易中心
	if( PyCThostFtdcQryCurrDRIdentityFieldType_init(module) < 0 ) return -1;
	///当前交易中心
	if( PyCThostFtdcCurrDRIdentityFieldType_init(module) < 0 ) return -1;
	///查询二级代理商资金校验模式
	if( PyCThostFtdcQrySecAgentCheckModeFieldType_init(module) < 0 ) return -1;
	///查询二级代理商信息
	if( PyCThostFtdcQrySecAgentTradeInfoFieldType_init(module) < 0 ) return -1;
	///用户发出获取安全安全登陆方法请求
	if( PyCThostFtdcReqUserAuthMethodFieldType_init(module) < 0 ) return -1;
	///用户发出获取安全安全登陆方法回复
	if( PyCThostFtdcRspUserAuthMethodFieldType_init(module) < 0 ) return -1;
	///用户发出获取安全安全登陆方法请求
	if( PyCThostFtdcReqGenUserCaptchaFieldType_init(module) < 0 ) return -1;
	///生成的图片验证码信息
	if( PyCThostFtdcRspGenUserCaptchaFieldType_init(module) < 0 ) return -1;
	///用户发出获取安全安全登陆方法请求
	if( PyCThostFtdcReqGenUserTextFieldType_init(module) < 0 ) return -1;
	///短信验证码生成的回复
	if( PyCThostFtdcRspGenUserTextFieldType_init(module) < 0 ) return -1;
	///用户发出带图形验证码的登录请求请求
	if( PyCThostFtdcReqUserLoginWithCaptchaFieldType_init(module) < 0 ) return -1;
	///用户发出带短信验证码的登录请求请求
	if( PyCThostFtdcReqUserLoginWithTextFieldType_init(module) < 0 ) return -1;
	///用户发出带动态验证码的登录请求请求
	if( PyCThostFtdcReqUserLoginWithOTPFieldType_init(module) < 0 ) return -1;
	///api握手请求
	if( PyCThostFtdcReqApiHandshakeFieldType_init(module) < 0 ) return -1;
	///front发给api的握手回复
	if( PyCThostFtdcRspApiHandshakeFieldType_init(module) < 0 ) return -1;
	///api给front的验证key的请求
	if( PyCThostFtdcReqVerifyApiKeyFieldType_init(module) < 0 ) return -1;
	///操作员组织架构关系
	if( PyCThostFtdcDepartmentUserFieldType_init(module) < 0 ) return -1;
	///查询频率，每秒查询比数
	if( PyCThostFtdcQueryFreqFieldType_init(module) < 0 ) return -1;
	///禁止认证IP
	if( PyCThostFtdcAuthForbiddenIPFieldType_init(module) < 0 ) return -1;
	///查询禁止认证IP
	if( PyCThostFtdcQryAuthForbiddenIPFieldType_init(module) < 0 ) return -1;
	///换汇可提冻结
	if( PyCThostFtdcSyncDelaySwapFrozenFieldType_init(module) < 0 ) return -1;
	///用户系统信息
	if( PyCThostFtdcUserSystemInfoFieldType_init(module) < 0 ) return -1;
	///终端用户绑定信息
	if( PyCThostFtdcAuthUserIDFieldType_init(module) < 0 ) return -1;
	///用户IP绑定信息
	if( PyCThostFtdcAuthIPFieldType_init(module) < 0 ) return -1;
	///查询分类合约
	if( PyCThostFtdcQryClassifiedInstrumentFieldType_init(module) < 0 ) return -1;
	///查询组合优惠比例
	if( PyCThostFtdcQryCombPromotionParamFieldType_init(module) < 0 ) return -1;
	///组合优惠比例
	if( PyCThostFtdcCombPromotionParamFieldType_init(module) < 0 ) return -1;
	///国密用户登录请求
	if( PyCThostFtdcReqUserLoginSMFieldType_init(module) < 0 ) return -1;
	///投资者风险结算持仓查询
	if( PyCThostFtdcQryRiskSettleInvstPositionFieldType_init(module) < 0 ) return -1;
	///风险结算产品查询
	if( PyCThostFtdcQryRiskSettleProductStatusFieldType_init(module) < 0 ) return -1;
	///投资者风险结算持仓
	if( PyCThostFtdcRiskSettleInvstPositionFieldType_init(module) < 0 ) return -1;
	///风险品种
	if( PyCThostFtdcRiskSettleProductStatusFieldType_init(module) < 0 ) return -1;
	///风险结算追平信息
	if( PyCThostFtdcSyncDeltaInfoFieldType_init(module) < 0 ) return -1;
	///风险结算追平产品信息
	if( PyCThostFtdcSyncDeltaProductStatusFieldType_init(module) < 0 ) return -1;
	///风险结算追平持仓明细
	if( PyCThostFtdcSyncDeltaInvstPosDtlFieldType_init(module) < 0 ) return -1;
	///风险结算追平组合持仓明细
	if( PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_init(module) < 0 ) return -1;
	///风险结算追平资金
	if( PyCThostFtdcSyncDeltaTradingAccountFieldType_init(module) < 0 ) return -1;
	///投资者风险结算总保证金
	if( PyCThostFtdcSyncDeltaInitInvstMarginFieldType_init(module) < 0 ) return -1;
	///风险结算追平组合优先级
	if( PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_init(module) < 0 ) return -1;
	///风险结算追平投资者期货保证金率
	if( PyCThostFtdcSyncDeltaInvstMarginRateFieldType_init(module) < 0 ) return -1;
	///风险结算追平交易所期货保证金率
	if( PyCThostFtdcSyncDeltaExchMarginRateFieldType_init(module) < 0 ) return -1;
	///风险结算追平中金现货期权交易所保证金率
	if( PyCThostFtdcSyncDeltaOptExchMarginFieldType_init(module) < 0 ) return -1;
	///风险结算追平中金现货期权投资者保证金率
	if( PyCThostFtdcSyncDeltaOptInvstMarginFieldType_init(module) < 0 ) return -1;
	///风险结算追平期权标的调整保证金率
	if( PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_init(module) < 0 ) return -1;
	///风险结算追平期权手续费率
	if( PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_init(module) < 0 ) return -1;
	///风险结算追平期货手续费率
	if( PyCThostFtdcSyncDeltaInvstCommRateFieldType_init(module) < 0 ) return -1;
	///风险结算追平交叉汇率
	if( PyCThostFtdcSyncDeltaProductExchRateFieldType_init(module) < 0 ) return -1;
	///风险结算追平行情
	if( PyCThostFtdcSyncDeltaDepthMarketDataFieldType_init(module) < 0 ) return -1;
	///风险结算追平现货指数
	if( PyCThostFtdcSyncDeltaIndexPriceFieldType_init(module) < 0 ) return -1;
	///风险结算追平仓单折抵
	if( PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_init(module) < 0 ) return -1;
	///SPBM期货合约保证金参数
	if( PyCThostFtdcSPBMFutureParameterFieldType_init(module) < 0 ) return -1;
	///SPBM期权合约保证金参数
	if( PyCThostFtdcSPBMOptionParameterFieldType_init(module) < 0 ) return -1;
	///SPBM品种内对锁仓折扣参数
	if( PyCThostFtdcSPBMIntraParameterFieldType_init(module) < 0 ) return -1;
	///SPBM跨品种抵扣参数
	if( PyCThostFtdcSPBMInterParameterFieldType_init(module) < 0 ) return -1;
	///同步SPBM参数结束
	if( PyCThostFtdcSyncSPBMParameterEndFieldType_init(module) < 0 ) return -1;
	///SPBM期货合约保证金参数查询
	if( PyCThostFtdcQrySPBMFutureParameterFieldType_init(module) < 0 ) return -1;
	///SPBM期权合约保证金参数查询
	if( PyCThostFtdcQrySPBMOptionParameterFieldType_init(module) < 0 ) return -1;
	///SPBM品种内对锁仓折扣参数查询
	if( PyCThostFtdcQrySPBMIntraParameterFieldType_init(module) < 0 ) return -1;
	///SPBM跨品种抵扣参数查询
	if( PyCThostFtdcQrySPBMInterParameterFieldType_init(module) < 0 ) return -1;
	///组合保证金套餐
	if( PyCThostFtdcSPBMPortfDefinitionFieldType_init(module) < 0 ) return -1;
	///投资者套餐选择
	if( PyCThostFtdcSPBMInvestorPortfDefFieldType_init(module) < 0 ) return -1;
	///投资者新型组合保证金系数
	if( PyCThostFtdcInvestorPortfMarginRatioFieldType_init(module) < 0 ) return -1;
	///组合保证金套餐查询
	if( PyCThostFtdcQrySPBMPortfDefinitionFieldType_init(module) < 0 ) return -1;
	///投资者套餐选择查询
	if( PyCThostFtdcQrySPBMInvestorPortfDefFieldType_init(module) < 0 ) return -1;
	///投资者新型组合保证金系数查询
	if( PyCThostFtdcQryInvestorPortfMarginRatioFieldType_init(module) < 0 ) return -1;
	///投资者产品SPBM明细
	if( PyCThostFtdcInvestorProdSPBMDetailFieldType_init(module) < 0 ) return -1;
	///投资者产品SPBM明细查询
	if( PyCThostFtdcQryInvestorProdSPBMDetailFieldType_init(module) < 0 ) return -1;
	///组保交易参数设置
	if( PyCThostFtdcPortfTradeParamSettingFieldType_init(module) < 0 ) return -1;
	///投资者交易权限设置
	if( PyCThostFtdcInvestorTradingRightFieldType_init(module) < 0 ) return -1;
	///质押配比参数
	if( PyCThostFtdcMortgageParamFieldType_init(module) < 0 ) return -1;
	///可提控制参数
	if( PyCThostFtdcWithDrawParamFieldType_init(module) < 0 ) return -1;
	///Thost终端用户功能权限
	if( PyCThostFtdcThostUserFunctionFieldType_init(module) < 0 ) return -1;
	///Thost终端用户功能权限查询
	if( PyCThostFtdcQryThostUserFunctionFieldType_init(module) < 0 ) return -1;
	///SPBM附加跨品种抵扣参数
	if( PyCThostFtdcSPBMAddOnInterParameterFieldType_init(module) < 0 ) return -1;
	///SPBM附加跨品种抵扣参数查询
	if( PyCThostFtdcQrySPBMAddOnInterParameterFieldType_init(module) < 0 ) return -1;
	///投资者商品组SPMM记录查询
	if( PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_init(module) < 0 ) return -1;
	///投资者商品群SPMM记录查询
	if( PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_init(module) < 0 ) return -1;
	///SPMM合约参数查询
	if( PyCThostFtdcQrySPMMInstParamFieldType_init(module) < 0 ) return -1;
	///SPMM产品参数查询
	if( PyCThostFtdcQrySPMMProductParamFieldType_init(module) < 0 ) return -1;
	///投资者商品组SPMM记录
	if( PyCThostFtdcInvestorCommoditySPMMMarginFieldType_init(module) < 0 ) return -1;
	///投资者商品群SPMM记录
	if( PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_init(module) < 0 ) return -1;
	///SPMM合约参数
	if( PyCThostFtdcSPMMInstParamFieldType_init(module) < 0 ) return -1;
	///SPMM产品参数
	if( PyCThostFtdcSPMMProductParamFieldType_init(module) < 0 ) return -1;
	///席位与交易中心对应关系维护查询
	if( PyCThostFtdcQryTraderAssignFieldType_init(module) < 0 ) return -1;
	///席位与交易中心对应关系
	if( PyCThostFtdcTraderAssignFieldType_init(module) < 0 ) return -1;
	///投资者申报费阶梯收取设置
	if( PyCThostFtdcInvestorInfoCntSettingFieldType_init(module) < 0 ) return -1;
	///RCAMS产品组合信息
	if( PyCThostFtdcRCAMSCombProductInfoFieldType_init(module) < 0 ) return -1;
	///RCAMS同合约风险对冲参数
	if( PyCThostFtdcRCAMSInstrParameterFieldType_init(module) < 0 ) return -1;
	///RCAMS品种内风险对冲参数
	if( PyCThostFtdcRCAMSIntraParameterFieldType_init(module) < 0 ) return -1;
	///RCAMS跨品种风险折抵参数
	if( PyCThostFtdcRCAMSInterParameterFieldType_init(module) < 0 ) return -1;
	///RCAMS空头期权风险调整参数
	if( PyCThostFtdcRCAMSShortOptAdjustParamFieldType_init(module) < 0 ) return -1;
	///RCAMS策略组合持仓
	if( PyCThostFtdcRCAMSInvestorCombPositionFieldType_init(module) < 0 ) return -1;
	///投资者品种RCAMS保证金
	if( PyCThostFtdcInvestorProdRCAMSMarginFieldType_init(module) < 0 ) return -1;
	///RCAMS产品组合信息查询
	if( PyCThostFtdcQryRCAMSCombProductInfoFieldType_init(module) < 0 ) return -1;
	///RCAMS同合约风险对冲参数查询
	if( PyCThostFtdcQryRCAMSInstrParameterFieldType_init(module) < 0 ) return -1;
	///RCAMS品种内风险对冲参数查询
	if( PyCThostFtdcQryRCAMSIntraParameterFieldType_init(module) < 0 ) return -1;
	///RCAMS跨品种风险折抵参数查询
	if( PyCThostFtdcQryRCAMSInterParameterFieldType_init(module) < 0 ) return -1;
	///RCAMS空头期权风险调整参数查询
	if( PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_init(module) < 0 ) return -1;
	///RCAMS策略组合持仓查询
	if( PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_init(module) < 0 ) return -1;
	///投资者品种RCAMS保证金查询
	if( PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_init(module) < 0 ) return -1;
	///RULE合约保证金参数
	if( PyCThostFtdcRULEInstrParameterFieldType_init(module) < 0 ) return -1;
	///RULE品种内对锁仓折扣参数
	if( PyCThostFtdcRULEIntraParameterFieldType_init(module) < 0 ) return -1;
	///RULE跨品种抵扣参数
	if( PyCThostFtdcRULEInterParameterFieldType_init(module) < 0 ) return -1;
	///RULE合约保证金参数查询
	if( PyCThostFtdcQryRULEInstrParameterFieldType_init(module) < 0 ) return -1;
	///RULE品种内对锁仓折扣参数查询
	if( PyCThostFtdcQryRULEIntraParameterFieldType_init(module) < 0 ) return -1;
	///RULE跨品种抵扣参数查询
	if( PyCThostFtdcQryRULEInterParameterFieldType_init(module) < 0 ) return -1;
	///投资者产品RULE保证金
	if( PyCThostFtdcInvestorProdRULEMarginFieldType_init(module) < 0 ) return -1;
	///投资者产品RULE保证金查询
	if( PyCThostFtdcQryInvestorProdRULEMarginFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPBM组合保证金套餐
	if( PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_init(module) < 0 ) return -1;
	///风险结算追平投资者SPBM套餐选择
	if( PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPBM期货合约保证金参数
	if( PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPBM期权合约保证金参数
	if( PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPBM品种内对锁仓折扣参数
	if( PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPBM跨品种抵扣参数
	if( PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPBM附加跨品种抵扣参数
	if( PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPMM合约参数
	if( PyCThostFtdcSyncDeltaSPMMInstParamFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPMM产品相关参数
	if( PyCThostFtdcSyncDeltaSPMMProductParamFieldType_init(module) < 0 ) return -1;
	///风险结算追平投资者SPMM模板选择
	if( PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_init(module) < 0 ) return -1;
	///风险结算追平SPMM模板参数设置
	if( PyCThostFtdcSyncDeltaSPMMModelParamFieldType_init(module) < 0 ) return -1;
	///风险结算追平RCAMS产品组合信息
	if( PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_init(module) < 0 ) return -1;
	///风险结算追平RCAMS同合约风险对冲参数
	if( PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平RCAMS品种内风险对冲参数
	if( PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平RCAMS跨品种风险折抵参数
	if( PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平RCAMS空头期权风险调整参数
	if( PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_init(module) < 0 ) return -1;
	///风险结算追平RCAMS策略组合规则明细
	if( PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_init(module) < 0 ) return -1;
	///风险结算追平RCAMS策略组合持仓
	if( PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_init(module) < 0 ) return -1;
	///风险结算追平RULE合约保证金参数
	if( PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平RULE品种内对锁仓折扣参数
	if( PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_init(module) < 0 ) return -1;
	///风险结算追平RULE跨品种抵扣参数
	if( PyCThostFtdcSyncDeltaRULEInterParameterFieldType_init(module) < 0 ) return -1;
	///服务地址参数
	if( PyCThostFtdcIpAddrParamFieldType_init(module) < 0 ) return -1;
	///服务地址参数查询
	if( PyCThostFtdcQryIpAddrParamFieldType_init(module) < 0 ) return -1;
	///服务地址参数
	if( PyCThostFtdcTGIpAddrParamFieldType_init(module) < 0 ) return -1;
	///服务地址参数查询
	if( PyCThostFtdcQryTGIpAddrParamFieldType_init(module) < 0 ) return -1;
	///TGate会话查询状态
	if( PyCThostFtdcTGSessionQryStatusFieldType_init(module) < 0 ) return -1;
	///内网地址配置
	if( PyCThostFtdcLocalAddrConfigFieldType_init(module) < 0 ) return -1;
	///内网地址配置查询
	if( PyCThostFtdcQryLocalAddrConfigFieldType_init(module) < 0 ) return -1;
	///次席查询银行资金帐户信息请求
	if( PyCThostFtdcReqQueryBankAccountBySecFieldType_init(module) < 0 ) return -1;
	///次席查询银行资金帐户信息回报
	if( PyCThostFtdcRspQueryBankAccountBySecFieldType_init(module) < 0 ) return -1;
	///次中心发起的转帐交易
	if( PyCThostFtdcReqTransferBySecFieldType_init(module) < 0 ) return -1;
	///次中心发起的转帐交易回报
	if( PyCThostFtdcRspTransferBySecFieldType_init(module) < 0 ) return -1;
	///查询银行资金帐户信息通知 要发往次席
	if( PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_init(module) < 0 ) return -1;
	///退出紧急状态参数
	if( PyCThostFtdcExitEmergencyFieldType_init(module) < 0 ) return -1;
	///新组保保证金系数投资者模板对应关系
	if( PyCThostFtdcInvestorPortfMarginModelFieldType_init(module) < 0 ) return -1;
	///投资者新组保设置
	if( PyCThostFtdcInvestorPortfSettingFieldType_init(module) < 0 ) return -1;
	///投资者新组保设置查询
	if( PyCThostFtdcQryInvestorPortfSettingFieldType_init(module) < 0 ) return -1;
	///来自次席的用户口令变更
	if( PyCThostFtdcUserPasswordUpdateFromSecFieldType_init(module) < 0 ) return -1;
	///来自次席的结算结果确认
	if( PyCThostFtdcSettlementInfoConfirmFromSecFieldType_init(module) < 0 ) return -1;
	///来自次席的资金账户口令变更
	if( PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_init(module) < 0 ) return -1;
	///风控禁止的合约交易权限
	if( PyCThostFtdcRiskForbiddenRightFieldType_init(module) < 0 ) return -1;
	///投资者申报费阶梯收取记录
	if( PyCThostFtdcInvestorInfoCommRecFieldType_init(module) < 0 ) return -1;
	///投资者申报费阶梯收取记录查询
	if( PyCThostFtdcQryInvestorInfoCommRecFieldType_init(module) < 0 ) return -1;
	///组合腿信息
	if( PyCThostFtdcCombLegFieldType_init(module) < 0 ) return -1;
	///组合腿信息查询
	if( PyCThostFtdcQryCombLegFieldType_init(module) < 0 ) return -1;
	///输入的对冲设置
	if( PyCThostFtdcInputOffsetSettingFieldType_init(module) < 0 ) return -1;
	///对冲设置
	if( PyCThostFtdcOffsetSettingFieldType_init(module) < 0 ) return -1;
	///撤销对冲设置
	if( PyCThostFtdcCancelOffsetSettingFieldType_init(module) < 0 ) return -1;
	///查询对冲设置
	if( PyCThostFtdcQryOffsetSettingFieldType_init(module) < 0 ) return -1;
	///服务地址和AppID的关系
	if( PyCThostFtdcAddrAppIDRelationFieldType_init(module) < 0 ) return -1;
	///服务地址和AppID的关系查询
	if( PyCThostFtdcQryAddrAppIDRelationFieldType_init(module) < 0 ) return -1;
	///前置信息
	if( PyCThostFtdcFrontInfoFieldType_init(module) < 0 ) return -1;


    return 0;
}
