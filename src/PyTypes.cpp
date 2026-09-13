#include "PyTypes.h"

int PyCTP_module_add_PyStructTypes_exec(PyObject *module) {
    ///信息分发
    if( PyCTP_module_add_PyCThostFtdcDisseminationFieldType_exec(module) < 0 ) return -1;
    ///用户登录请求
    if( PyCTP_module_add_PyCThostFtdcReqUserLoginFieldType_exec(module) < 0 ) return -1;
    ///用户登录应答
    if( PyCTP_module_add_PyCThostFtdcRspUserLoginFieldType_exec(module) < 0 ) return -1;
    ///用户登出请求
    if( PyCTP_module_add_PyCThostFtdcUserLogoutFieldType_exec(module) < 0 ) return -1;
    ///强制交易员退出
    if( PyCTP_module_add_PyCThostFtdcForceUserLogoutFieldType_exec(module) < 0 ) return -1;
    ///客户端认证请求
    if( PyCTP_module_add_PyCThostFtdcReqAuthenticateFieldType_exec(module) < 0 ) return -1;
    ///客户端认证响应
    if( PyCTP_module_add_PyCThostFtdcRspAuthenticateFieldType_exec(module) < 0 ) return -1;
    ///客户端认证信息
    if( PyCTP_module_add_PyCThostFtdcAuthenticationInfoFieldType_exec(module) < 0 ) return -1;
    ///用户登录应答2
    if( PyCTP_module_add_PyCThostFtdcRspUserLogin2FieldType_exec(module) < 0 ) return -1;
    ///银期转帐报文头
    if( PyCTP_module_add_PyCThostFtdcTransferHeaderFieldType_exec(module) < 0 ) return -1;
    ///银行资金转期货请求，TradeCode=202001
    if( PyCTP_module_add_PyCThostFtdcTransferBankToFutureReqFieldType_exec(module) < 0 ) return -1;
    ///银行资金转期货请求响应
    if( PyCTP_module_add_PyCThostFtdcTransferBankToFutureRspFieldType_exec(module) < 0 ) return -1;
    ///期货资金转银行请求，TradeCode=202002
    if( PyCTP_module_add_PyCThostFtdcTransferFutureToBankReqFieldType_exec(module) < 0 ) return -1;
    ///期货资金转银行请求响应
    if( PyCTP_module_add_PyCThostFtdcTransferFutureToBankRspFieldType_exec(module) < 0 ) return -1;
    ///查询银行资金请求，TradeCode=204002
    if( PyCTP_module_add_PyCThostFtdcTransferQryBankReqFieldType_exec(module) < 0 ) return -1;
    ///查询银行资金请求响应
    if( PyCTP_module_add_PyCThostFtdcTransferQryBankRspFieldType_exec(module) < 0 ) return -1;
    ///查询银行交易明细请求，TradeCode=204999
    if( PyCTP_module_add_PyCThostFtdcTransferQryDetailReqFieldType_exec(module) < 0 ) return -1;
    ///查询银行交易明细请求响应
    if( PyCTP_module_add_PyCThostFtdcTransferQryDetailRspFieldType_exec(module) < 0 ) return -1;
    ///响应信息
    if( PyCTP_module_add_PyCThostFtdcRspInfoFieldType_exec(module) < 0 ) return -1;
    ///交易所
    if( PyCTP_module_add_PyCThostFtdcExchangeFieldType_exec(module) < 0 ) return -1;
    ///产品
    if( PyCTP_module_add_PyCThostFtdcProductFieldType_exec(module) < 0 ) return -1;
    ///合约
    if( PyCTP_module_add_PyCThostFtdcInstrumentFieldType_exec(module) < 0 ) return -1;
    ///经纪公司
    if( PyCTP_module_add_PyCThostFtdcBrokerFieldType_exec(module) < 0 ) return -1;
    ///交易所交易员
    if( PyCTP_module_add_PyCThostFtdcTraderFieldType_exec(module) < 0 ) return -1;
    ///投资者
    if( PyCTP_module_add_PyCThostFtdcInvestorFieldType_exec(module) < 0 ) return -1;
    ///交易编码
    if( PyCTP_module_add_PyCThostFtdcTradingCodeFieldType_exec(module) < 0 ) return -1;
    ///会员编码和经纪公司编码对照表
    if( PyCTP_module_add_PyCThostFtdcPartBrokerFieldType_exec(module) < 0 ) return -1;
    ///管理用户
    if( PyCTP_module_add_PyCThostFtdcSuperUserFieldType_exec(module) < 0 ) return -1;
    ///管理用户功能权限
    if( PyCTP_module_add_PyCThostFtdcSuperUserFunctionFieldType_exec(module) < 0 ) return -1;
    ///投资者组
    if( PyCTP_module_add_PyCThostFtdcInvestorGroupFieldType_exec(module) < 0 ) return -1;
    ///资金账户
    if( PyCTP_module_add_PyCThostFtdcTradingAccountFieldType_exec(module) < 0 ) return -1;
    ///投资者持仓
    if( PyCTP_module_add_PyCThostFtdcInvestorPositionFieldType_exec(module) < 0 ) return -1;
    ///合约保证金率
    if( PyCTP_module_add_PyCThostFtdcInstrumentMarginRateFieldType_exec(module) < 0 ) return -1;
    ///合约手续费率
    if( PyCTP_module_add_PyCThostFtdcInstrumentCommissionRateFieldType_exec(module) < 0 ) return -1;
    ///深度行情
    if( PyCTP_module_add_PyCThostFtdcDepthMarketDataFieldType_exec(module) < 0 ) return -1;
    ///投资者合约交易权限
    if( PyCTP_module_add_PyCThostFtdcInstrumentTradingRightFieldType_exec(module) < 0 ) return -1;
    ///经纪公司用户
    if( PyCTP_module_add_PyCThostFtdcBrokerUserFieldType_exec(module) < 0 ) return -1;
    ///经纪公司用户口令
    if( PyCTP_module_add_PyCThostFtdcBrokerUserPasswordFieldType_exec(module) < 0 ) return -1;
    ///经纪公司用户功能权限
    if( PyCTP_module_add_PyCThostFtdcBrokerUserFunctionFieldType_exec(module) < 0 ) return -1;
    ///交易所交易员报盘机
    if( PyCTP_module_add_PyCThostFtdcTraderOfferFieldType_exec(module) < 0 ) return -1;
    ///投资者结算结果
    if( PyCTP_module_add_PyCThostFtdcSettlementInfoFieldType_exec(module) < 0 ) return -1;
    ///合约保证金率调整
    if( PyCTP_module_add_PyCThostFtdcInstrumentMarginRateAdjustFieldType_exec(module) < 0 ) return -1;
    ///交易所保证金率
    if( PyCTP_module_add_PyCThostFtdcExchangeMarginRateFieldType_exec(module) < 0 ) return -1;
    ///交易所保证金率调整
    if( PyCTP_module_add_PyCThostFtdcExchangeMarginRateAdjustFieldType_exec(module) < 0 ) return -1;
    ///汇率
    if( PyCTP_module_add_PyCThostFtdcExchangeRateFieldType_exec(module) < 0 ) return -1;
    ///结算引用
    if( PyCTP_module_add_PyCThostFtdcSettlementRefFieldType_exec(module) < 0 ) return -1;
    ///当前时间
    if( PyCTP_module_add_PyCThostFtdcCurrentTimeFieldType_exec(module) < 0 ) return -1;
    ///通讯阶段
    if( PyCTP_module_add_PyCThostFtdcCommPhaseFieldType_exec(module) < 0 ) return -1;
    ///登录信息
    if( PyCTP_module_add_PyCThostFtdcLoginInfoFieldType_exec(module) < 0 ) return -1;
    ///登录信息
    if( PyCTP_module_add_PyCThostFtdcLogoutAllFieldType_exec(module) < 0 ) return -1;
    ///前置状态
    if( PyCTP_module_add_PyCThostFtdcFrontStatusFieldType_exec(module) < 0 ) return -1;
    ///用户口令变更
    if( PyCTP_module_add_PyCThostFtdcUserPasswordUpdateFieldType_exec(module) < 0 ) return -1;
    ///输入报单
    if( PyCTP_module_add_PyCThostFtdcInputOrderFieldType_exec(module) < 0 ) return -1;
    ///报单
    if( PyCTP_module_add_PyCThostFtdcOrderFieldType_exec(module) < 0 ) return -1;
    ///交易所报单
    if( PyCTP_module_add_PyCThostFtdcExchangeOrderFieldType_exec(module) < 0 ) return -1;
    ///交易所报单插入失败
    if( PyCTP_module_add_PyCThostFtdcExchangeOrderInsertErrorFieldType_exec(module) < 0 ) return -1;
    ///输入报单操作
    if( PyCTP_module_add_PyCThostFtdcInputOrderActionFieldType_exec(module) < 0 ) return -1;
    ///报单操作
    if( PyCTP_module_add_PyCThostFtdcOrderActionFieldType_exec(module) < 0 ) return -1;
    ///交易所报单操作
    if( PyCTP_module_add_PyCThostFtdcExchangeOrderActionFieldType_exec(module) < 0 ) return -1;
    ///交易所报单操作失败
    if( PyCTP_module_add_PyCThostFtdcExchangeOrderActionErrorFieldType_exec(module) < 0 ) return -1;
    ///交易所成交
    if( PyCTP_module_add_PyCThostFtdcExchangeTradeFieldType_exec(module) < 0 ) return -1;
    ///成交
    if( PyCTP_module_add_PyCThostFtdcTradeFieldType_exec(module) < 0 ) return -1;
    ///用户会话
    if( PyCTP_module_add_PyCThostFtdcUserSessionFieldType_exec(module) < 0 ) return -1;
    ///查询最大报单数量
    if( PyCTP_module_add_PyCThostFtdcQryMaxOrderVolumeFieldType_exec(module) < 0 ) return -1;
    ///投资者结算结果确认信息
    if( PyCTP_module_add_PyCThostFtdcSettlementInfoConfirmFieldType_exec(module) < 0 ) return -1;
    ///出入金同步
    if( PyCTP_module_add_PyCThostFtdcSyncDepositFieldType_exec(module) < 0 ) return -1;
    ///货币质押同步
    if( PyCTP_module_add_PyCThostFtdcSyncFundMortgageFieldType_exec(module) < 0 ) return -1;
    ///经纪公司同步
    if( PyCTP_module_add_PyCThostFtdcBrokerSyncFieldType_exec(module) < 0 ) return -1;
    ///正在同步中的投资者
    if( PyCTP_module_add_PyCThostFtdcSyncingInvestorFieldType_exec(module) < 0 ) return -1;
    ///正在同步中的交易代码
    if( PyCTP_module_add_PyCThostFtdcSyncingTradingCodeFieldType_exec(module) < 0 ) return -1;
    ///正在同步中的投资者分组
    if( PyCTP_module_add_PyCThostFtdcSyncingInvestorGroupFieldType_exec(module) < 0 ) return -1;
    ///正在同步中的交易账号
    if( PyCTP_module_add_PyCThostFtdcSyncingTradingAccountFieldType_exec(module) < 0 ) return -1;
    ///正在同步中的投资者持仓
    if( PyCTP_module_add_PyCThostFtdcSyncingInvestorPositionFieldType_exec(module) < 0 ) return -1;
    ///正在同步中的合约保证金率
    if( PyCTP_module_add_PyCThostFtdcSyncingInstrumentMarginRateFieldType_exec(module) < 0 ) return -1;
    ///正在同步中的合约手续费率
    if( PyCTP_module_add_PyCThostFtdcSyncingInstrumentCommissionRateFieldType_exec(module) < 0 ) return -1;
    ///正在同步中的合约交易权限
    if( PyCTP_module_add_PyCThostFtdcSyncingInstrumentTradingRightFieldType_exec(module) < 0 ) return -1;
    ///查询报单
    if( PyCTP_module_add_PyCThostFtdcQryOrderFieldType_exec(module) < 0 ) return -1;
    ///查询成交
    if( PyCTP_module_add_PyCThostFtdcQryTradeFieldType_exec(module) < 0 ) return -1;
    ///查询投资者持仓
    if( PyCTP_module_add_PyCThostFtdcQryInvestorPositionFieldType_exec(module) < 0 ) return -1;
    ///查询资金账户
    if( PyCTP_module_add_PyCThostFtdcQryTradingAccountFieldType_exec(module) < 0 ) return -1;
    ///查询投资者
    if( PyCTP_module_add_PyCThostFtdcQryInvestorFieldType_exec(module) < 0 ) return -1;
    ///查询交易编码
    if( PyCTP_module_add_PyCThostFtdcQryTradingCodeFieldType_exec(module) < 0 ) return -1;
    ///查询投资者组
    if( PyCTP_module_add_PyCThostFtdcQryInvestorGroupFieldType_exec(module) < 0 ) return -1;
    ///查询合约保证金率
    if( PyCTP_module_add_PyCThostFtdcQryInstrumentMarginRateFieldType_exec(module) < 0 ) return -1;
    ///查询手续费率
    if( PyCTP_module_add_PyCThostFtdcQryInstrumentCommissionRateFieldType_exec(module) < 0 ) return -1;
    ///查询合约交易权限
    if( PyCTP_module_add_PyCThostFtdcQryInstrumentTradingRightFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司
    if( PyCTP_module_add_PyCThostFtdcQryBrokerFieldType_exec(module) < 0 ) return -1;
    ///查询交易员
    if( PyCTP_module_add_PyCThostFtdcQryTraderFieldType_exec(module) < 0 ) return -1;
    ///查询管理用户功能权限
    if( PyCTP_module_add_PyCThostFtdcQrySuperUserFunctionFieldType_exec(module) < 0 ) return -1;
    ///查询用户会话
    if( PyCTP_module_add_PyCThostFtdcQryUserSessionFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司会员代码
    if( PyCTP_module_add_PyCThostFtdcQryPartBrokerFieldType_exec(module) < 0 ) return -1;
    ///查询前置状态
    if( PyCTP_module_add_PyCThostFtdcQryFrontStatusFieldType_exec(module) < 0 ) return -1;
    ///查询交易所报单
    if( PyCTP_module_add_PyCThostFtdcQryExchangeOrderFieldType_exec(module) < 0 ) return -1;
    ///查询报单操作
    if( PyCTP_module_add_PyCThostFtdcQryOrderActionFieldType_exec(module) < 0 ) return -1;
    ///查询交易所报单操作
    if( PyCTP_module_add_PyCThostFtdcQryExchangeOrderActionFieldType_exec(module) < 0 ) return -1;
    ///查询管理用户
    if( PyCTP_module_add_PyCThostFtdcQrySuperUserFieldType_exec(module) < 0 ) return -1;
    ///查询交易所
    if( PyCTP_module_add_PyCThostFtdcQryExchangeFieldType_exec(module) < 0 ) return -1;
    ///查询产品
    if( PyCTP_module_add_PyCThostFtdcQryProductFieldType_exec(module) < 0 ) return -1;
    ///查询合约
    if( PyCTP_module_add_PyCThostFtdcQryInstrumentFieldType_exec(module) < 0 ) return -1;
    ///查询行情
    if( PyCTP_module_add_PyCThostFtdcQryDepthMarketDataFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司用户
    if( PyCTP_module_add_PyCThostFtdcQryBrokerUserFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司用户权限
    if( PyCTP_module_add_PyCThostFtdcQryBrokerUserFunctionFieldType_exec(module) < 0 ) return -1;
    ///查询交易员报盘机
    if( PyCTP_module_add_PyCThostFtdcQryTraderOfferFieldType_exec(module) < 0 ) return -1;
    ///查询出入金流水
    if( PyCTP_module_add_PyCThostFtdcQrySyncDepositFieldType_exec(module) < 0 ) return -1;
    ///查询投资者结算结果
    if( PyCTP_module_add_PyCThostFtdcQrySettlementInfoFieldType_exec(module) < 0 ) return -1;
    ///查询交易所保证金率
    if( PyCTP_module_add_PyCThostFtdcQryExchangeMarginRateFieldType_exec(module) < 0 ) return -1;
    ///查询交易所调整保证金率
    if( PyCTP_module_add_PyCThostFtdcQryExchangeMarginRateAdjustFieldType_exec(module) < 0 ) return -1;
    ///查询汇率
    if( PyCTP_module_add_PyCThostFtdcQryExchangeRateFieldType_exec(module) < 0 ) return -1;
    ///查询货币质押流水
    if( PyCTP_module_add_PyCThostFtdcQrySyncFundMortgageFieldType_exec(module) < 0 ) return -1;
    ///查询报单
    if( PyCTP_module_add_PyCThostFtdcQryHisOrderFieldType_exec(module) < 0 ) return -1;
    ///当前期权合约最小保证金
    if( PyCTP_module_add_PyCThostFtdcOptionInstrMiniMarginFieldType_exec(module) < 0 ) return -1;
    ///当前期权合约保证金调整系数
    if( PyCTP_module_add_PyCThostFtdcOptionInstrMarginAdjustFieldType_exec(module) < 0 ) return -1;
    ///当前期权合约手续费的详细内容
    if( PyCTP_module_add_PyCThostFtdcOptionInstrCommRateFieldType_exec(module) < 0 ) return -1;
    ///期权交易成本
    if( PyCTP_module_add_PyCThostFtdcOptionInstrTradeCostFieldType_exec(module) < 0 ) return -1;
    ///期权交易成本查询
    if( PyCTP_module_add_PyCThostFtdcQryOptionInstrTradeCostFieldType_exec(module) < 0 ) return -1;
    ///期权手续费率查询
    if( PyCTP_module_add_PyCThostFtdcQryOptionInstrCommRateFieldType_exec(module) < 0 ) return -1;
    ///股指现货指数
    if( PyCTP_module_add_PyCThostFtdcIndexPriceFieldType_exec(module) < 0 ) return -1;
    ///输入的执行宣告
    if( PyCTP_module_add_PyCThostFtdcInputExecOrderFieldType_exec(module) < 0 ) return -1;
    ///输入执行宣告操作
    if( PyCTP_module_add_PyCThostFtdcInputExecOrderActionFieldType_exec(module) < 0 ) return -1;
    ///执行宣告
    if( PyCTP_module_add_PyCThostFtdcExecOrderFieldType_exec(module) < 0 ) return -1;
    ///执行宣告操作
    if( PyCTP_module_add_PyCThostFtdcExecOrderActionFieldType_exec(module) < 0 ) return -1;
    ///执行宣告查询
    if( PyCTP_module_add_PyCThostFtdcQryExecOrderFieldType_exec(module) < 0 ) return -1;
    ///交易所执行宣告信息
    if( PyCTP_module_add_PyCThostFtdcExchangeExecOrderFieldType_exec(module) < 0 ) return -1;
    ///交易所执行宣告查询
    if( PyCTP_module_add_PyCThostFtdcQryExchangeExecOrderFieldType_exec(module) < 0 ) return -1;
    ///执行宣告操作查询
    if( PyCTP_module_add_PyCThostFtdcQryExecOrderActionFieldType_exec(module) < 0 ) return -1;
    ///交易所执行宣告操作
    if( PyCTP_module_add_PyCThostFtdcExchangeExecOrderActionFieldType_exec(module) < 0 ) return -1;
    ///交易所执行宣告操作查询
    if( PyCTP_module_add_PyCThostFtdcQryExchangeExecOrderActionFieldType_exec(module) < 0 ) return -1;
    ///错误执行宣告
    if( PyCTP_module_add_PyCThostFtdcErrExecOrderFieldType_exec(module) < 0 ) return -1;
    ///查询错误执行宣告
    if( PyCTP_module_add_PyCThostFtdcQryErrExecOrderFieldType_exec(module) < 0 ) return -1;
    ///错误执行宣告操作
    if( PyCTP_module_add_PyCThostFtdcErrExecOrderActionFieldType_exec(module) < 0 ) return -1;
    ///查询错误执行宣告操作
    if( PyCTP_module_add_PyCThostFtdcQryErrExecOrderActionFieldType_exec(module) < 0 ) return -1;
    ///投资者期权合约交易权限
    if( PyCTP_module_add_PyCThostFtdcOptionInstrTradingRightFieldType_exec(module) < 0 ) return -1;
    ///查询期权合约交易权限
    if( PyCTP_module_add_PyCThostFtdcQryOptionInstrTradingRightFieldType_exec(module) < 0 ) return -1;
    ///输入的询价
    if( PyCTP_module_add_PyCThostFtdcInputForQuoteFieldType_exec(module) < 0 ) return -1;
    ///询价
    if( PyCTP_module_add_PyCThostFtdcForQuoteFieldType_exec(module) < 0 ) return -1;
    ///询价查询
    if( PyCTP_module_add_PyCThostFtdcQryForQuoteFieldType_exec(module) < 0 ) return -1;
    ///交易所询价信息
    if( PyCTP_module_add_PyCThostFtdcExchangeForQuoteFieldType_exec(module) < 0 ) return -1;
    ///交易所询价查询
    if( PyCTP_module_add_PyCThostFtdcQryExchangeForQuoteFieldType_exec(module) < 0 ) return -1;
    ///输入的报价
    if( PyCTP_module_add_PyCThostFtdcInputQuoteFieldType_exec(module) < 0 ) return -1;
    ///输入报价操作
    if( PyCTP_module_add_PyCThostFtdcInputQuoteActionFieldType_exec(module) < 0 ) return -1;
    ///报价
    if( PyCTP_module_add_PyCThostFtdcQuoteFieldType_exec(module) < 0 ) return -1;
    ///报价操作
    if( PyCTP_module_add_PyCThostFtdcQuoteActionFieldType_exec(module) < 0 ) return -1;
    ///报价查询
    if( PyCTP_module_add_PyCThostFtdcQryQuoteFieldType_exec(module) < 0 ) return -1;
    ///交易所报价信息
    if( PyCTP_module_add_PyCThostFtdcExchangeQuoteFieldType_exec(module) < 0 ) return -1;
    ///交易所报价查询
    if( PyCTP_module_add_PyCThostFtdcQryExchangeQuoteFieldType_exec(module) < 0 ) return -1;
    ///报价操作查询
    if( PyCTP_module_add_PyCThostFtdcQryQuoteActionFieldType_exec(module) < 0 ) return -1;
    ///交易所报价操作
    if( PyCTP_module_add_PyCThostFtdcExchangeQuoteActionFieldType_exec(module) < 0 ) return -1;
    ///交易所报价操作查询
    if( PyCTP_module_add_PyCThostFtdcQryExchangeQuoteActionFieldType_exec(module) < 0 ) return -1;
    ///期权合约delta值
    if( PyCTP_module_add_PyCThostFtdcOptionInstrDeltaFieldType_exec(module) < 0 ) return -1;
    ///发给做市商的询价请求
    if( PyCTP_module_add_PyCThostFtdcForQuoteRspFieldType_exec(module) < 0 ) return -1;
    ///当前期权合约执行偏移值的详细内容
    if( PyCTP_module_add_PyCThostFtdcStrikeOffsetFieldType_exec(module) < 0 ) return -1;
    ///期权执行偏移值查询
    if( PyCTP_module_add_PyCThostFtdcQryStrikeOffsetFieldType_exec(module) < 0 ) return -1;
    ///输入批量报单操作
    if( PyCTP_module_add_PyCThostFtdcInputBatchOrderActionFieldType_exec(module) < 0 ) return -1;
    ///批量报单操作
    if( PyCTP_module_add_PyCThostFtdcBatchOrderActionFieldType_exec(module) < 0 ) return -1;
    ///交易所批量报单操作
    if( PyCTP_module_add_PyCThostFtdcExchangeBatchOrderActionFieldType_exec(module) < 0 ) return -1;
    ///查询批量报单操作
    if( PyCTP_module_add_PyCThostFtdcQryBatchOrderActionFieldType_exec(module) < 0 ) return -1;
    ///组合合约安全系数
    if( PyCTP_module_add_PyCThostFtdcCombInstrumentGuardFieldType_exec(module) < 0 ) return -1;
    ///组合合约安全系数查询
    if( PyCTP_module_add_PyCThostFtdcQryCombInstrumentGuardFieldType_exec(module) < 0 ) return -1;
    ///输入的申请组合
    if( PyCTP_module_add_PyCThostFtdcInputCombActionFieldType_exec(module) < 0 ) return -1;
    ///申请组合
    if( PyCTP_module_add_PyCThostFtdcCombActionFieldType_exec(module) < 0 ) return -1;
    ///申请组合查询
    if( PyCTP_module_add_PyCThostFtdcQryCombActionFieldType_exec(module) < 0 ) return -1;
    ///交易所申请组合信息
    if( PyCTP_module_add_PyCThostFtdcExchangeCombActionFieldType_exec(module) < 0 ) return -1;
    ///交易所申请组合查询
    if( PyCTP_module_add_PyCThostFtdcQryExchangeCombActionFieldType_exec(module) < 0 ) return -1;
    ///产品报价汇率
    if( PyCTP_module_add_PyCThostFtdcProductExchRateFieldType_exec(module) < 0 ) return -1;
    ///产品报价汇率查询
    if( PyCTP_module_add_PyCThostFtdcQryProductExchRateFieldType_exec(module) < 0 ) return -1;
    ///查询询价价差参数
    if( PyCTP_module_add_PyCThostFtdcQryForQuoteParamFieldType_exec(module) < 0 ) return -1;
    ///询价价差参数
    if( PyCTP_module_add_PyCThostFtdcForQuoteParamFieldType_exec(module) < 0 ) return -1;
    ///当前做市商期权合约手续费的详细内容
    if( PyCTP_module_add_PyCThostFtdcMMOptionInstrCommRateFieldType_exec(module) < 0 ) return -1;
    ///做市商期权手续费率查询
    if( PyCTP_module_add_PyCThostFtdcQryMMOptionInstrCommRateFieldType_exec(module) < 0 ) return -1;
    ///做市商合约手续费率
    if( PyCTP_module_add_PyCThostFtdcMMInstrumentCommissionRateFieldType_exec(module) < 0 ) return -1;
    ///查询做市商合约手续费率
    if( PyCTP_module_add_PyCThostFtdcQryMMInstrumentCommissionRateFieldType_exec(module) < 0 ) return -1;
    ///当前报单手续费的详细内容
    if( PyCTP_module_add_PyCThostFtdcInstrumentOrderCommRateFieldType_exec(module) < 0 ) return -1;
    ///报单手续费率查询
    if( PyCTP_module_add_PyCThostFtdcQryInstrumentOrderCommRateFieldType_exec(module) < 0 ) return -1;
    ///交易参数
    if( PyCTP_module_add_PyCThostFtdcTradeParamFieldType_exec(module) < 0 ) return -1;
    ///合约保证金率调整
    if( PyCTP_module_add_PyCThostFtdcInstrumentMarginRateULFieldType_exec(module) < 0 ) return -1;
    ///期货持仓限制参数
    if( PyCTP_module_add_PyCThostFtdcFutureLimitPosiParamFieldType_exec(module) < 0 ) return -1;
    ///禁止登录IP
    if( PyCTP_module_add_PyCThostFtdcLoginForbiddenIPFieldType_exec(module) < 0 ) return -1;
    ///IP列表
    if( PyCTP_module_add_PyCThostFtdcIPListFieldType_exec(module) < 0 ) return -1;
    ///输入的期权自对冲
    if( PyCTP_module_add_PyCThostFtdcInputOptionSelfCloseFieldType_exec(module) < 0 ) return -1;
    ///输入期权自对冲操作
    if( PyCTP_module_add_PyCThostFtdcInputOptionSelfCloseActionFieldType_exec(module) < 0 ) return -1;
    ///期权自对冲
    if( PyCTP_module_add_PyCThostFtdcOptionSelfCloseFieldType_exec(module) < 0 ) return -1;
    ///期权自对冲操作
    if( PyCTP_module_add_PyCThostFtdcOptionSelfCloseActionFieldType_exec(module) < 0 ) return -1;
    ///期权自对冲查询
    if( PyCTP_module_add_PyCThostFtdcQryOptionSelfCloseFieldType_exec(module) < 0 ) return -1;
    ///交易所期权自对冲信息
    if( PyCTP_module_add_PyCThostFtdcExchangeOptionSelfCloseFieldType_exec(module) < 0 ) return -1;
    ///期权自对冲操作查询
    if( PyCTP_module_add_PyCThostFtdcQryOptionSelfCloseActionFieldType_exec(module) < 0 ) return -1;
    ///交易所期权自对冲操作
    if( PyCTP_module_add_PyCThostFtdcExchangeOptionSelfCloseActionFieldType_exec(module) < 0 ) return -1;
    ///延时换汇同步
    if( PyCTP_module_add_PyCThostFtdcSyncDelaySwapFieldType_exec(module) < 0 ) return -1;
    ///查询延时换汇同步
    if( PyCTP_module_add_PyCThostFtdcQrySyncDelaySwapFieldType_exec(module) < 0 ) return -1;
    ///投资单元
    if( PyCTP_module_add_PyCThostFtdcInvestUnitFieldType_exec(module) < 0 ) return -1;
    ///查询投资单元
    if( PyCTP_module_add_PyCThostFtdcQryInvestUnitFieldType_exec(module) < 0 ) return -1;
    ///二级代理商资金校验模式
    if( PyCTP_module_add_PyCThostFtdcSecAgentCheckModeFieldType_exec(module) < 0 ) return -1;
    ///二级代理商信息
    if( PyCTP_module_add_PyCThostFtdcSecAgentTradeInfoFieldType_exec(module) < 0 ) return -1;
    ///市场行情
    if( PyCTP_module_add_PyCThostFtdcMarketDataFieldType_exec(module) < 0 ) return -1;
    ///行情基础属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataBaseFieldType_exec(module) < 0 ) return -1;
    ///行情静态属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataStaticFieldType_exec(module) < 0 ) return -1;
    ///行情最新成交属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataLastMatchFieldType_exec(module) < 0 ) return -1;
    ///行情最优价属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataBestPriceFieldType_exec(module) < 0 ) return -1;
    ///行情申买二、三属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataBid23FieldType_exec(module) < 0 ) return -1;
    ///行情申卖二、三属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataAsk23FieldType_exec(module) < 0 ) return -1;
    ///行情申买四、五属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataBid45FieldType_exec(module) < 0 ) return -1;
    ///行情申卖四、五属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataAsk45FieldType_exec(module) < 0 ) return -1;
    ///行情更新时间属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataUpdateTimeFieldType_exec(module) < 0 ) return -1;
    ///行情上下带价
    if( PyCTP_module_add_PyCThostFtdcMarketDataBandingPriceFieldType_exec(module) < 0 ) return -1;
    ///行情交易所代码属性
    if( PyCTP_module_add_PyCThostFtdcMarketDataExchangeFieldType_exec(module) < 0 ) return -1;
    ///指定的合约
    if( PyCTP_module_add_PyCThostFtdcSpecificInstrumentFieldType_exec(module) < 0 ) return -1;
    ///合约状态
    if( PyCTP_module_add_PyCThostFtdcInstrumentStatusFieldType_exec(module) < 0 ) return -1;
    ///查询合约状态
    if( PyCTP_module_add_PyCThostFtdcQryInstrumentStatusFieldType_exec(module) < 0 ) return -1;
    ///投资者账户
    if( PyCTP_module_add_PyCThostFtdcInvestorAccountFieldType_exec(module) < 0 ) return -1;
    ///浮动盈亏算法
    if( PyCTP_module_add_PyCThostFtdcPositionProfitAlgorithmFieldType_exec(module) < 0 ) return -1;
    ///会员资金折扣
    if( PyCTP_module_add_PyCThostFtdcDiscountFieldType_exec(module) < 0 ) return -1;
    ///查询转帐银行
    if( PyCTP_module_add_PyCThostFtdcQryTransferBankFieldType_exec(module) < 0 ) return -1;
    ///转帐银行
    if( PyCTP_module_add_PyCThostFtdcTransferBankFieldType_exec(module) < 0 ) return -1;
    ///查询投资者持仓明细
    if( PyCTP_module_add_PyCThostFtdcQryInvestorPositionDetailFieldType_exec(module) < 0 ) return -1;
    ///投资者持仓明细
    if( PyCTP_module_add_PyCThostFtdcInvestorPositionDetailFieldType_exec(module) < 0 ) return -1;
    ///资金账户口令域
    if( PyCTP_module_add_PyCThostFtdcTradingAccountPasswordFieldType_exec(module) < 0 ) return -1;
    ///交易所行情报盘机
    if( PyCTP_module_add_PyCThostFtdcMDTraderOfferFieldType_exec(module) < 0 ) return -1;
    ///查询行情报盘机
    if( PyCTP_module_add_PyCThostFtdcQryMDTraderOfferFieldType_exec(module) < 0 ) return -1;
    ///查询客户通知
    if( PyCTP_module_add_PyCThostFtdcQryNoticeFieldType_exec(module) < 0 ) return -1;
    ///客户通知
    if( PyCTP_module_add_PyCThostFtdcNoticeFieldType_exec(module) < 0 ) return -1;
    ///用户权限
    if( PyCTP_module_add_PyCThostFtdcUserRightFieldType_exec(module) < 0 ) return -1;
    ///查询结算信息确认域
    if( PyCTP_module_add_PyCThostFtdcQrySettlementInfoConfirmFieldType_exec(module) < 0 ) return -1;
    ///装载结算信息
    if( PyCTP_module_add_PyCThostFtdcLoadSettlementInfoFieldType_exec(module) < 0 ) return -1;
    ///经纪公司可提资金算法表
    if( PyCTP_module_add_PyCThostFtdcBrokerWithdrawAlgorithmFieldType_exec(module) < 0 ) return -1;
    ///资金账户口令变更域
    if( PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_exec(module) < 0 ) return -1;
    ///资金账户口令变更域
    if( PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateFieldType_exec(module) < 0 ) return -1;
    ///查询组合合约分腿
    if( PyCTP_module_add_PyCThostFtdcQryCombinationLegFieldType_exec(module) < 0 ) return -1;
    ///查询组合合约分腿
    if( PyCTP_module_add_PyCThostFtdcQrySyncStatusFieldType_exec(module) < 0 ) return -1;
    ///组合交易合约的单腿
    if( PyCTP_module_add_PyCThostFtdcCombinationLegFieldType_exec(module) < 0 ) return -1;
    ///数据同步状态
    if( PyCTP_module_add_PyCThostFtdcSyncStatusFieldType_exec(module) < 0 ) return -1;
    ///查询联系人
    if( PyCTP_module_add_PyCThostFtdcQryLinkManFieldType_exec(module) < 0 ) return -1;
    ///联系人
    if( PyCTP_module_add_PyCThostFtdcLinkManFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司用户事件
    if( PyCTP_module_add_PyCThostFtdcQryBrokerUserEventFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司用户事件
    if( PyCTP_module_add_PyCThostFtdcBrokerUserEventFieldType_exec(module) < 0 ) return -1;
    ///查询签约银行请求
    if( PyCTP_module_add_PyCThostFtdcQryContractBankFieldType_exec(module) < 0 ) return -1;
    ///查询签约银行响应
    if( PyCTP_module_add_PyCThostFtdcContractBankFieldType_exec(module) < 0 ) return -1;
    ///投资者组合持仓明细
    if( PyCTP_module_add_PyCThostFtdcInvestorPositionCombineDetailFieldType_exec(module) < 0 ) return -1;
    ///预埋单
    if( PyCTP_module_add_PyCThostFtdcParkedOrderFieldType_exec(module) < 0 ) return -1;
    ///输入预埋单操作
    if( PyCTP_module_add_PyCThostFtdcParkedOrderActionFieldType_exec(module) < 0 ) return -1;
    ///查询预埋单
    if( PyCTP_module_add_PyCThostFtdcQryParkedOrderFieldType_exec(module) < 0 ) return -1;
    ///查询预埋撤单
    if( PyCTP_module_add_PyCThostFtdcQryParkedOrderActionFieldType_exec(module) < 0 ) return -1;
    ///删除预埋单
    if( PyCTP_module_add_PyCThostFtdcRemoveParkedOrderFieldType_exec(module) < 0 ) return -1;
    ///删除预埋撤单
    if( PyCTP_module_add_PyCThostFtdcRemoveParkedOrderActionFieldType_exec(module) < 0 ) return -1;
    ///经纪公司可提资金算法表
    if( PyCTP_module_add_PyCThostFtdcInvestorWithdrawAlgorithmFieldType_exec(module) < 0 ) return -1;
    ///查询组合持仓明细
    if( PyCTP_module_add_PyCThostFtdcQryInvestorPositionCombineDetailFieldType_exec(module) < 0 ) return -1;
    ///成交均价
    if( PyCTP_module_add_PyCThostFtdcMarketDataAveragePriceFieldType_exec(module) < 0 ) return -1;
    ///校验投资者密码
    if( PyCTP_module_add_PyCThostFtdcVerifyInvestorPasswordFieldType_exec(module) < 0 ) return -1;
    ///用户IP
    if( PyCTP_module_add_PyCThostFtdcUserIPFieldType_exec(module) < 0 ) return -1;
    ///用户事件通知信息
    if( PyCTP_module_add_PyCThostFtdcTradingNoticeInfoFieldType_exec(module) < 0 ) return -1;
    ///用户事件通知
    if( PyCTP_module_add_PyCThostFtdcTradingNoticeFieldType_exec(module) < 0 ) return -1;
    ///查询交易事件通知
    if( PyCTP_module_add_PyCThostFtdcQryTradingNoticeFieldType_exec(module) < 0 ) return -1;
    ///查询错误报单
    if( PyCTP_module_add_PyCThostFtdcQryErrOrderFieldType_exec(module) < 0 ) return -1;
    ///错误报单
    if( PyCTP_module_add_PyCThostFtdcErrOrderFieldType_exec(module) < 0 ) return -1;
    ///查询错误报单操作
    if( PyCTP_module_add_PyCThostFtdcErrorConditionalOrderFieldType_exec(module) < 0 ) return -1;
    ///查询错误报单操作
    if( PyCTP_module_add_PyCThostFtdcQryErrOrderActionFieldType_exec(module) < 0 ) return -1;
    ///错误报单操作
    if( PyCTP_module_add_PyCThostFtdcErrOrderActionFieldType_exec(module) < 0 ) return -1;
    ///查询交易所状态
    if( PyCTP_module_add_PyCThostFtdcQryExchangeSequenceFieldType_exec(module) < 0 ) return -1;
    ///交易所状态
    if( PyCTP_module_add_PyCThostFtdcExchangeSequenceFieldType_exec(module) < 0 ) return -1;
    ///根据价格查询最大报单数量
    if( PyCTP_module_add_PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司交易参数
    if( PyCTP_module_add_PyCThostFtdcQryBrokerTradingParamsFieldType_exec(module) < 0 ) return -1;
    ///经纪公司交易参数
    if( PyCTP_module_add_PyCThostFtdcBrokerTradingParamsFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司交易算法
    if( PyCTP_module_add_PyCThostFtdcQryBrokerTradingAlgosFieldType_exec(module) < 0 ) return -1;
    ///经纪公司交易算法
    if( PyCTP_module_add_PyCThostFtdcBrokerTradingAlgosFieldType_exec(module) < 0 ) return -1;
    ///查询经纪公司资金
    if( PyCTP_module_add_PyCThostFtdcQueryBrokerDepositFieldType_exec(module) < 0 ) return -1;
    ///经纪公司资金
    if( PyCTP_module_add_PyCThostFtdcBrokerDepositFieldType_exec(module) < 0 ) return -1;
    ///查询保证金监管系统经纪公司密钥
    if( PyCTP_module_add_PyCThostFtdcQryCFMMCBrokerKeyFieldType_exec(module) < 0 ) return -1;
    ///保证金监管系统经纪公司密钥
    if( PyCTP_module_add_PyCThostFtdcCFMMCBrokerKeyFieldType_exec(module) < 0 ) return -1;
    ///保证金监管系统经纪公司资金账户密钥
    if( PyCTP_module_add_PyCThostFtdcCFMMCTradingAccountKeyFieldType_exec(module) < 0 ) return -1;
    ///请求查询保证金监管系统经纪公司资金账户密钥
    if( PyCTP_module_add_PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_exec(module) < 0 ) return -1;
    ///用户动态令牌参数
    if( PyCTP_module_add_PyCThostFtdcBrokerUserOTPParamFieldType_exec(module) < 0 ) return -1;
    ///手工同步用户动态令牌
    if( PyCTP_module_add_PyCThostFtdcManualSyncBrokerUserOTPFieldType_exec(module) < 0 ) return -1;
    ///投资者手续费率模板
    if( PyCTP_module_add_PyCThostFtdcCommRateModelFieldType_exec(module) < 0 ) return -1;
    ///请求查询投资者手续费率模板
    if( PyCTP_module_add_PyCThostFtdcQryCommRateModelFieldType_exec(module) < 0 ) return -1;
    ///投资者保证金率模板
    if( PyCTP_module_add_PyCThostFtdcMarginModelFieldType_exec(module) < 0 ) return -1;
    ///请求查询投资者保证金率模板
    if( PyCTP_module_add_PyCThostFtdcQryMarginModelFieldType_exec(module) < 0 ) return -1;
    ///仓单折抵信息
    if( PyCTP_module_add_PyCThostFtdcEWarrantOffsetFieldType_exec(module) < 0 ) return -1;
    ///查询仓单折抵信息
    if( PyCTP_module_add_PyCThostFtdcQryEWarrantOffsetFieldType_exec(module) < 0 ) return -1;
    ///查询投资者品种/跨品种保证金
    if( PyCTP_module_add_PyCThostFtdcQryInvestorProductGroupMarginFieldType_exec(module) < 0 ) return -1;
    ///投资者品种/跨品种保证金
    if( PyCTP_module_add_PyCThostFtdcInvestorProductGroupMarginFieldType_exec(module) < 0 ) return -1;
    ///查询监控中心用户令牌
    if( PyCTP_module_add_PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_exec(module) < 0 ) return -1;
    ///监控中心用户令牌
    if( PyCTP_module_add_PyCThostFtdcCFMMCTradingAccountTokenFieldType_exec(module) < 0 ) return -1;
    ///查询产品组
    if( PyCTP_module_add_PyCThostFtdcQryProductGroupFieldType_exec(module) < 0 ) return -1;
    ///投资者品种/跨品种保证金产品组
    if( PyCTP_module_add_PyCThostFtdcProductGroupFieldType_exec(module) < 0 ) return -1;
    ///交易所公告
    if( PyCTP_module_add_PyCThostFtdcBulletinFieldType_exec(module) < 0 ) return -1;
    ///查询交易所公告
    if( PyCTP_module_add_PyCThostFtdcQryBulletinFieldType_exec(module) < 0 ) return -1;
    ///MulticastInstrument
    if( PyCTP_module_add_PyCThostFtdcMulticastInstrumentFieldType_exec(module) < 0 ) return -1;
    ///QryMulticastInstrument
    if( PyCTP_module_add_PyCThostFtdcQryMulticastInstrumentFieldType_exec(module) < 0 ) return -1;
    ///App客户端权限分配
    if( PyCTP_module_add_PyCThostFtdcAppIDAuthAssignFieldType_exec(module) < 0 ) return -1;
    ///转帐开户请求
    if( PyCTP_module_add_PyCThostFtdcReqOpenAccountFieldType_exec(module) < 0 ) return -1;
    ///转帐销户请求
    if( PyCTP_module_add_PyCThostFtdcReqCancelAccountFieldType_exec(module) < 0 ) return -1;
    ///变更银行账户请求
    if( PyCTP_module_add_PyCThostFtdcReqChangeAccountFieldType_exec(module) < 0 ) return -1;
    ///转账请求
    if( PyCTP_module_add_PyCThostFtdcReqTransferFieldType_exec(module) < 0 ) return -1;
    ///银行发起银行资金转期货响应
    if( PyCTP_module_add_PyCThostFtdcRspTransferFieldType_exec(module) < 0 ) return -1;
    ///冲正请求
    if( PyCTP_module_add_PyCThostFtdcReqRepealFieldType_exec(module) < 0 ) return -1;
    ///冲正响应
    if( PyCTP_module_add_PyCThostFtdcRspRepealFieldType_exec(module) < 0 ) return -1;
    ///查询账户信息请求
    if( PyCTP_module_add_PyCThostFtdcReqQueryAccountFieldType_exec(module) < 0 ) return -1;
    ///查询账户信息响应
    if( PyCTP_module_add_PyCThostFtdcRspQueryAccountFieldType_exec(module) < 0 ) return -1;
    ///期商签到签退
    if( PyCTP_module_add_PyCThostFtdcFutureSignIOFieldType_exec(module) < 0 ) return -1;
    ///期商签到响应
    if( PyCTP_module_add_PyCThostFtdcRspFutureSignInFieldType_exec(module) < 0 ) return -1;
    ///期商签退请求
    if( PyCTP_module_add_PyCThostFtdcReqFutureSignOutFieldType_exec(module) < 0 ) return -1;
    ///期商签退响应
    if( PyCTP_module_add_PyCThostFtdcRspFutureSignOutFieldType_exec(module) < 0 ) return -1;
    ///查询指定流水号的交易结果请求
    if( PyCTP_module_add_PyCThostFtdcReqQueryTradeResultBySerialFieldType_exec(module) < 0 ) return -1;
    ///查询指定流水号的交易结果响应
    if( PyCTP_module_add_PyCThostFtdcRspQueryTradeResultBySerialFieldType_exec(module) < 0 ) return -1;
    ///日终文件就绪请求
    if( PyCTP_module_add_PyCThostFtdcReqDayEndFileReadyFieldType_exec(module) < 0 ) return -1;
    ///返回结果
    if( PyCTP_module_add_PyCThostFtdcReturnResultFieldType_exec(module) < 0 ) return -1;
    ///验证期货资金密码
    if( PyCTP_module_add_PyCThostFtdcVerifyFuturePasswordFieldType_exec(module) < 0 ) return -1;
    ///验证客户信息
    if( PyCTP_module_add_PyCThostFtdcVerifyCustInfoFieldType_exec(module) < 0 ) return -1;
    ///验证期货资金密码和客户信息
    if( PyCTP_module_add_PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_exec(module) < 0 ) return -1;
    ///验证期货资金密码和客户信息
    if( PyCTP_module_add_PyCThostFtdcDepositResultInformFieldType_exec(module) < 0 ) return -1;
    ///交易核心向银期报盘发出密钥同步请求
    if( PyCTP_module_add_PyCThostFtdcReqSyncKeyFieldType_exec(module) < 0 ) return -1;
    ///交易核心向银期报盘发出密钥同步响应
    if( PyCTP_module_add_PyCThostFtdcRspSyncKeyFieldType_exec(module) < 0 ) return -1;
    ///查询账户信息通知
    if( PyCTP_module_add_PyCThostFtdcNotifyQueryAccountFieldType_exec(module) < 0 ) return -1;
    ///银期转账交易流水表
    if( PyCTP_module_add_PyCThostFtdcTransferSerialFieldType_exec(module) < 0 ) return -1;
    ///请求查询转帐流水
    if( PyCTP_module_add_PyCThostFtdcQryTransferSerialFieldType_exec(module) < 0 ) return -1;
    ///期商签到通知
    if( PyCTP_module_add_PyCThostFtdcNotifyFutureSignInFieldType_exec(module) < 0 ) return -1;
    ///期商签退通知
    if( PyCTP_module_add_PyCThostFtdcNotifyFutureSignOutFieldType_exec(module) < 0 ) return -1;
    ///交易核心向银期报盘发出密钥同步处理结果的通知
    if( PyCTP_module_add_PyCThostFtdcNotifySyncKeyFieldType_exec(module) < 0 ) return -1;
    ///请求查询银期签约关系
    if( PyCTP_module_add_PyCThostFtdcQryAccountregisterFieldType_exec(module) < 0 ) return -1;
    ///客户开销户信息表
    if( PyCTP_module_add_PyCThostFtdcAccountregisterFieldType_exec(module) < 0 ) return -1;
    ///银期开户信息
    if( PyCTP_module_add_PyCThostFtdcOpenAccountFieldType_exec(module) < 0 ) return -1;
    ///银期销户信息
    if( PyCTP_module_add_PyCThostFtdcCancelAccountFieldType_exec(module) < 0 ) return -1;
    ///银期变更银行账号信息
    if( PyCTP_module_add_PyCThostFtdcChangeAccountFieldType_exec(module) < 0 ) return -1;
    ///二级代理操作员银期权限
    if( PyCTP_module_add_PyCThostFtdcSecAgentACIDMapFieldType_exec(module) < 0 ) return -1;
    ///二级代理操作员银期权限查询
    if( PyCTP_module_add_PyCThostFtdcQrySecAgentACIDMapFieldType_exec(module) < 0 ) return -1;
    ///灾备中心交易权限
    if( PyCTP_module_add_PyCThostFtdcUserRightsAssignFieldType_exec(module) < 0 ) return -1;
    ///经济公司是否有在本标示的交易权限
    if( PyCTP_module_add_PyCThostFtdcBrokerUserRightAssignFieldType_exec(module) < 0 ) return -1;
    ///灾备交易转换报文
    if( PyCTP_module_add_PyCThostFtdcDRTransferFieldType_exec(module) < 0 ) return -1;
    ///Fens用户信息
    if( PyCTP_module_add_PyCThostFtdcFensUserInfoFieldType_exec(module) < 0 ) return -1;
    ///当前银期所属交易中心
    if( PyCTP_module_add_PyCThostFtdcCurrTransferIdentityFieldType_exec(module) < 0 ) return -1;
    ///禁止登录用户
    if( PyCTP_module_add_PyCThostFtdcLoginForbiddenUserFieldType_exec(module) < 0 ) return -1;
    ///查询禁止登录用户
    if( PyCTP_module_add_PyCThostFtdcQryLoginForbiddenUserFieldType_exec(module) < 0 ) return -1;
    ///资金账户基本准备金
    if( PyCTP_module_add_PyCThostFtdcTradingAccountReserveFieldType_exec(module) < 0 ) return -1;
    ///查询禁止登录IP
    if( PyCTP_module_add_PyCThostFtdcQryLoginForbiddenIPFieldType_exec(module) < 0 ) return -1;
    ///查询IP列表
    if( PyCTP_module_add_PyCThostFtdcQryIPListFieldType_exec(module) < 0 ) return -1;
    ///查询用户下单权限分配表
    if( PyCTP_module_add_PyCThostFtdcQryUserRightsAssignFieldType_exec(module) < 0 ) return -1;
    ///银期预约开户确认请求
    if( PyCTP_module_add_PyCThostFtdcReserveOpenAccountConfirmFieldType_exec(module) < 0 ) return -1;
    ///银期预约开户
    if( PyCTP_module_add_PyCThostFtdcReserveOpenAccountFieldType_exec(module) < 0 ) return -1;
    ///银行账户属性
    if( PyCTP_module_add_PyCThostFtdcAccountPropertyFieldType_exec(module) < 0 ) return -1;
    ///查询当前交易中心
    if( PyCTP_module_add_PyCThostFtdcQryCurrDRIdentityFieldType_exec(module) < 0 ) return -1;
    ///当前交易中心
    if( PyCTP_module_add_PyCThostFtdcCurrDRIdentityFieldType_exec(module) < 0 ) return -1;
    ///查询二级代理商资金校验模式
    if( PyCTP_module_add_PyCThostFtdcQrySecAgentCheckModeFieldType_exec(module) < 0 ) return -1;
    ///查询二级代理商信息
    if( PyCTP_module_add_PyCThostFtdcQrySecAgentTradeInfoFieldType_exec(module) < 0 ) return -1;
    ///用户发出获取安全安全登陆方法请求
    if( PyCTP_module_add_PyCThostFtdcReqUserAuthMethodFieldType_exec(module) < 0 ) return -1;
    ///用户发出获取安全安全登陆方法回复
    if( PyCTP_module_add_PyCThostFtdcRspUserAuthMethodFieldType_exec(module) < 0 ) return -1;
    ///用户发出获取安全安全登陆方法请求
    if( PyCTP_module_add_PyCThostFtdcReqGenUserCaptchaFieldType_exec(module) < 0 ) return -1;
    ///生成的图片验证码信息
    if( PyCTP_module_add_PyCThostFtdcRspGenUserCaptchaFieldType_exec(module) < 0 ) return -1;
    ///用户发出获取安全安全登陆方法请求
    if( PyCTP_module_add_PyCThostFtdcReqGenUserTextFieldType_exec(module) < 0 ) return -1;
    ///短信验证码生成的回复
    if( PyCTP_module_add_PyCThostFtdcRspGenUserTextFieldType_exec(module) < 0 ) return -1;
    ///用户发出带图形验证码的登录请求请求
    if( PyCTP_module_add_PyCThostFtdcReqUserLoginWithCaptchaFieldType_exec(module) < 0 ) return -1;
    ///用户发出带短信验证码的登录请求请求
    if( PyCTP_module_add_PyCThostFtdcReqUserLoginWithTextFieldType_exec(module) < 0 ) return -1;
    ///用户发出带动态验证码的登录请求请求
    if( PyCTP_module_add_PyCThostFtdcReqUserLoginWithOTPFieldType_exec(module) < 0 ) return -1;
    ///api握手请求
    if( PyCTP_module_add_PyCThostFtdcReqApiHandshakeFieldType_exec(module) < 0 ) return -1;
    ///front发给api的握手回复
    if( PyCTP_module_add_PyCThostFtdcRspApiHandshakeFieldType_exec(module) < 0 ) return -1;
    ///api给front的验证key的请求
    if( PyCTP_module_add_PyCThostFtdcReqVerifyApiKeyFieldType_exec(module) < 0 ) return -1;
    ///操作员组织架构关系
    if( PyCTP_module_add_PyCThostFtdcDepartmentUserFieldType_exec(module) < 0 ) return -1;
    ///查询频率，每秒查询比数
    if( PyCTP_module_add_PyCThostFtdcQueryFreqFieldType_exec(module) < 0 ) return -1;
    ///禁止认证IP
    if( PyCTP_module_add_PyCThostFtdcAuthForbiddenIPFieldType_exec(module) < 0 ) return -1;
    ///查询禁止认证IP
    if( PyCTP_module_add_PyCThostFtdcQryAuthForbiddenIPFieldType_exec(module) < 0 ) return -1;
    ///换汇可提冻结
    if( PyCTP_module_add_PyCThostFtdcSyncDelaySwapFrozenFieldType_exec(module) < 0 ) return -1;
    ///用户系统信息
    if( PyCTP_module_add_PyCThostFtdcUserSystemInfoFieldType_exec(module) < 0 ) return -1;
    ///终端用户绑定信息
    if( PyCTP_module_add_PyCThostFtdcAuthUserIDFieldType_exec(module) < 0 ) return -1;
    ///用户IP绑定信息
    if( PyCTP_module_add_PyCThostFtdcAuthIPFieldType_exec(module) < 0 ) return -1;
    ///查询分类合约
    if( PyCTP_module_add_PyCThostFtdcQryClassifiedInstrumentFieldType_exec(module) < 0 ) return -1;
    ///查询组合优惠比例
    if( PyCTP_module_add_PyCThostFtdcQryCombPromotionParamFieldType_exec(module) < 0 ) return -1;
    ///组合优惠比例
    if( PyCTP_module_add_PyCThostFtdcCombPromotionParamFieldType_exec(module) < 0 ) return -1;
    ///国密用户登录请求
    if( PyCTP_module_add_PyCThostFtdcReqUserLoginSMFieldType_exec(module) < 0 ) return -1;
    ///投资者风险结算持仓查询
    if( PyCTP_module_add_PyCThostFtdcQryRiskSettleInvstPositionFieldType_exec(module) < 0 ) return -1;
    ///风险结算产品查询
    if( PyCTP_module_add_PyCThostFtdcQryRiskSettleProductStatusFieldType_exec(module) < 0 ) return -1;
    ///投资者风险结算持仓
    if( PyCTP_module_add_PyCThostFtdcRiskSettleInvstPositionFieldType_exec(module) < 0 ) return -1;
    ///风险品种
    if( PyCTP_module_add_PyCThostFtdcRiskSettleProductStatusFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平信息
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaInfoFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平产品信息
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaProductStatusFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平持仓明细
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaInvstPosDtlFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平组合持仓明细
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平资金
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaTradingAccountFieldType_exec(module) < 0 ) return -1;
    ///投资者风险结算总保证金
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaInitInvstMarginFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平组合优先级
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平投资者期货保证金率
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaInvstMarginRateFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平交易所期货保证金率
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaExchMarginRateFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平中金现货期权交易所保证金率
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaOptExchMarginFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平中金现货期权投资者保证金率
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaOptInvstMarginFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平期权标的调整保证金率
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平期权手续费率
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平期货手续费率
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaInvstCommRateFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平交叉汇率
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaProductExchRateFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平行情
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaDepthMarketDataFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平现货指数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaIndexPriceFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平仓单折抵
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_exec(module) < 0 ) return -1;
    ///SPBM期货合约保证金参数
    if( PyCTP_module_add_PyCThostFtdcSPBMFutureParameterFieldType_exec(module) < 0 ) return -1;
    ///SPBM期权合约保证金参数
    if( PyCTP_module_add_PyCThostFtdcSPBMOptionParameterFieldType_exec(module) < 0 ) return -1;
    ///SPBM品种内对锁仓折扣参数
    if( PyCTP_module_add_PyCThostFtdcSPBMIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///SPBM跨品种抵扣参数
    if( PyCTP_module_add_PyCThostFtdcSPBMInterParameterFieldType_exec(module) < 0 ) return -1;
    ///同步SPBM参数结束
    if( PyCTP_module_add_PyCThostFtdcSyncSPBMParameterEndFieldType_exec(module) < 0 ) return -1;
    ///SPBM期货合约保证金参数查询
    if( PyCTP_module_add_PyCThostFtdcQrySPBMFutureParameterFieldType_exec(module) < 0 ) return -1;
    ///SPBM期权合约保证金参数查询
    if( PyCTP_module_add_PyCThostFtdcQrySPBMOptionParameterFieldType_exec(module) < 0 ) return -1;
    ///SPBM品种内对锁仓折扣参数查询
    if( PyCTP_module_add_PyCThostFtdcQrySPBMIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///SPBM跨品种抵扣参数查询
    if( PyCTP_module_add_PyCThostFtdcQrySPBMInterParameterFieldType_exec(module) < 0 ) return -1;
    ///组合保证金套餐
    if( PyCTP_module_add_PyCThostFtdcSPBMPortfDefinitionFieldType_exec(module) < 0 ) return -1;
    ///投资者套餐选择
    if( PyCTP_module_add_PyCThostFtdcSPBMInvestorPortfDefFieldType_exec(module) < 0 ) return -1;
    ///投资者新型组合保证金系数
    if( PyCTP_module_add_PyCThostFtdcInvestorPortfMarginRatioFieldType_exec(module) < 0 ) return -1;
    ///组合保证金套餐查询
    if( PyCTP_module_add_PyCThostFtdcQrySPBMPortfDefinitionFieldType_exec(module) < 0 ) return -1;
    ///投资者套餐选择查询
    if( PyCTP_module_add_PyCThostFtdcQrySPBMInvestorPortfDefFieldType_exec(module) < 0 ) return -1;
    ///投资者新型组合保证金系数查询
    if( PyCTP_module_add_PyCThostFtdcQryInvestorPortfMarginRatioFieldType_exec(module) < 0 ) return -1;
    ///投资者产品SPBM明细
    if( PyCTP_module_add_PyCThostFtdcInvestorProdSPBMDetailFieldType_exec(module) < 0 ) return -1;
    ///投资者产品SPBM明细查询
    if( PyCTP_module_add_PyCThostFtdcQryInvestorProdSPBMDetailFieldType_exec(module) < 0 ) return -1;
    ///组保交易参数设置
    if( PyCTP_module_add_PyCThostFtdcPortfTradeParamSettingFieldType_exec(module) < 0 ) return -1;
    ///投资者交易权限设置
    if( PyCTP_module_add_PyCThostFtdcInvestorTradingRightFieldType_exec(module) < 0 ) return -1;
    ///质押配比参数
    if( PyCTP_module_add_PyCThostFtdcMortgageParamFieldType_exec(module) < 0 ) return -1;
    ///可提控制参数
    if( PyCTP_module_add_PyCThostFtdcWithDrawParamFieldType_exec(module) < 0 ) return -1;
    ///Thost终端用户功能权限
    if( PyCTP_module_add_PyCThostFtdcThostUserFunctionFieldType_exec(module) < 0 ) return -1;
    ///Thost终端用户功能权限查询
    if( PyCTP_module_add_PyCThostFtdcQryThostUserFunctionFieldType_exec(module) < 0 ) return -1;
    ///SPBM附加跨品种抵扣参数
    if( PyCTP_module_add_PyCThostFtdcSPBMAddOnInterParameterFieldType_exec(module) < 0 ) return -1;
    ///SPBM附加跨品种抵扣参数查询
    if( PyCTP_module_add_PyCThostFtdcQrySPBMAddOnInterParameterFieldType_exec(module) < 0 ) return -1;
    ///投资者商品组SPMM记录查询
    if( PyCTP_module_add_PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_exec(module) < 0 ) return -1;
    ///投资者商品群SPMM记录查询
    if( PyCTP_module_add_PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_exec(module) < 0 ) return -1;
    ///SPMM合约参数查询
    if( PyCTP_module_add_PyCThostFtdcQrySPMMInstParamFieldType_exec(module) < 0 ) return -1;
    ///SPMM产品参数查询
    if( PyCTP_module_add_PyCThostFtdcQrySPMMProductParamFieldType_exec(module) < 0 ) return -1;
    ///投资者商品组SPMM记录
    if( PyCTP_module_add_PyCThostFtdcInvestorCommoditySPMMMarginFieldType_exec(module) < 0 ) return -1;
    ///投资者商品群SPMM记录
    if( PyCTP_module_add_PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_exec(module) < 0 ) return -1;
    ///SPMM合约参数
    if( PyCTP_module_add_PyCThostFtdcSPMMInstParamFieldType_exec(module) < 0 ) return -1;
    ///SPMM产品参数
    if( PyCTP_module_add_PyCThostFtdcSPMMProductParamFieldType_exec(module) < 0 ) return -1;
    ///席位与交易中心对应关系维护查询
    if( PyCTP_module_add_PyCThostFtdcQryTraderAssignFieldType_exec(module) < 0 ) return -1;
    ///席位与交易中心对应关系
    if( PyCTP_module_add_PyCThostFtdcTraderAssignFieldType_exec(module) < 0 ) return -1;
    ///投资者申报费阶梯收取设置
    if( PyCTP_module_add_PyCThostFtdcInvestorInfoCntSettingFieldType_exec(module) < 0 ) return -1;
    ///RCAMS产品组合信息
    if( PyCTP_module_add_PyCThostFtdcRCAMSCombProductInfoFieldType_exec(module) < 0 ) return -1;
    ///RCAMS同合约风险对冲参数
    if( PyCTP_module_add_PyCThostFtdcRCAMSInstrParameterFieldType_exec(module) < 0 ) return -1;
    ///RCAMS品种内风险对冲参数
    if( PyCTP_module_add_PyCThostFtdcRCAMSIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///RCAMS跨品种风险折抵参数
    if( PyCTP_module_add_PyCThostFtdcRCAMSInterParameterFieldType_exec(module) < 0 ) return -1;
    ///RCAMS空头期权风险调整参数
    if( PyCTP_module_add_PyCThostFtdcRCAMSShortOptAdjustParamFieldType_exec(module) < 0 ) return -1;
    ///RCAMS策略组合持仓
    if( PyCTP_module_add_PyCThostFtdcRCAMSInvestorCombPositionFieldType_exec(module) < 0 ) return -1;
    ///投资者品种RCAMS保证金
    if( PyCTP_module_add_PyCThostFtdcInvestorProdRCAMSMarginFieldType_exec(module) < 0 ) return -1;
    ///RCAMS产品组合信息查询
    if( PyCTP_module_add_PyCThostFtdcQryRCAMSCombProductInfoFieldType_exec(module) < 0 ) return -1;
    ///RCAMS同合约风险对冲参数查询
    if( PyCTP_module_add_PyCThostFtdcQryRCAMSInstrParameterFieldType_exec(module) < 0 ) return -1;
    ///RCAMS品种内风险对冲参数查询
    if( PyCTP_module_add_PyCThostFtdcQryRCAMSIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///RCAMS跨品种风险折抵参数查询
    if( PyCTP_module_add_PyCThostFtdcQryRCAMSInterParameterFieldType_exec(module) < 0 ) return -1;
    ///RCAMS空头期权风险调整参数查询
    if( PyCTP_module_add_PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_exec(module) < 0 ) return -1;
    ///RCAMS策略组合持仓查询
    if( PyCTP_module_add_PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_exec(module) < 0 ) return -1;
    ///投资者品种RCAMS保证金查询
    if( PyCTP_module_add_PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_exec(module) < 0 ) return -1;
    ///RULE合约保证金参数
    if( PyCTP_module_add_PyCThostFtdcRULEInstrParameterFieldType_exec(module) < 0 ) return -1;
    ///RULE品种内对锁仓折扣参数
    if( PyCTP_module_add_PyCThostFtdcRULEIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///RULE跨品种抵扣参数
    if( PyCTP_module_add_PyCThostFtdcRULEInterParameterFieldType_exec(module) < 0 ) return -1;
    ///RULE合约保证金参数查询
    if( PyCTP_module_add_PyCThostFtdcQryRULEInstrParameterFieldType_exec(module) < 0 ) return -1;
    ///RULE品种内对锁仓折扣参数查询
    if( PyCTP_module_add_PyCThostFtdcQryRULEIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///RULE跨品种抵扣参数查询
    if( PyCTP_module_add_PyCThostFtdcQryRULEInterParameterFieldType_exec(module) < 0 ) return -1;
    ///投资者产品RULE保证金
    if( PyCTP_module_add_PyCThostFtdcInvestorProdRULEMarginFieldType_exec(module) < 0 ) return -1;
    ///投资者产品RULE保证金查询
    if( PyCTP_module_add_PyCThostFtdcQryInvestorProdRULEMarginFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPBM组合保证金套餐
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平投资者SPBM套餐选择
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPBM期货合约保证金参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPBM期权合约保证金参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPBM品种内对锁仓折扣参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPBM跨品种抵扣参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPBM附加跨品种抵扣参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPMM合约参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMInstParamFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPMM产品相关参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMProductParamFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平投资者SPMM模板选择
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平SPMM模板参数设置
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMModelParamFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RCAMS产品组合信息
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RCAMS同合约风险对冲参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RCAMS品种内风险对冲参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RCAMS跨品种风险折抵参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RCAMS空头期权风险调整参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RCAMS策略组合规则明细
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RCAMS策略组合持仓
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RULE合约保证金参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RULE品种内对锁仓折扣参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_exec(module) < 0 ) return -1;
    ///风险结算追平RULE跨品种抵扣参数
    if( PyCTP_module_add_PyCThostFtdcSyncDeltaRULEInterParameterFieldType_exec(module) < 0 ) return -1;
    ///服务地址参数
    if( PyCTP_module_add_PyCThostFtdcIpAddrParamFieldType_exec(module) < 0 ) return -1;
    ///服务地址参数查询
    if( PyCTP_module_add_PyCThostFtdcQryIpAddrParamFieldType_exec(module) < 0 ) return -1;
    ///服务地址参数
    if( PyCTP_module_add_PyCThostFtdcTGIpAddrParamFieldType_exec(module) < 0 ) return -1;
    ///服务地址参数查询
    if( PyCTP_module_add_PyCThostFtdcQryTGIpAddrParamFieldType_exec(module) < 0 ) return -1;
    ///TGate会话查询状态
    if( PyCTP_module_add_PyCThostFtdcTGSessionQryStatusFieldType_exec(module) < 0 ) return -1;
    ///内网地址配置
    if( PyCTP_module_add_PyCThostFtdcLocalAddrConfigFieldType_exec(module) < 0 ) return -1;
    ///内网地址配置查询
    if( PyCTP_module_add_PyCThostFtdcQryLocalAddrConfigFieldType_exec(module) < 0 ) return -1;
    ///次席查询银行资金帐户信息请求
    if( PyCTP_module_add_PyCThostFtdcReqQueryBankAccountBySecFieldType_exec(module) < 0 ) return -1;
    ///次席查询银行资金帐户信息回报
    if( PyCTP_module_add_PyCThostFtdcRspQueryBankAccountBySecFieldType_exec(module) < 0 ) return -1;
    ///次中心发起的转帐交易
    if( PyCTP_module_add_PyCThostFtdcReqTransferBySecFieldType_exec(module) < 0 ) return -1;
    ///次中心发起的转帐交易回报
    if( PyCTP_module_add_PyCThostFtdcRspTransferBySecFieldType_exec(module) < 0 ) return -1;
    ///查询银行资金帐户信息通知 要发往次席
    if( PyCTP_module_add_PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_exec(module) < 0 ) return -1;
    ///退出紧急状态参数
    if( PyCTP_module_add_PyCThostFtdcExitEmergencyFieldType_exec(module) < 0 ) return -1;
    ///新组保保证金系数投资者模板对应关系
    if( PyCTP_module_add_PyCThostFtdcInvestorPortfMarginModelFieldType_exec(module) < 0 ) return -1;
    ///投资者新组保设置
    if( PyCTP_module_add_PyCThostFtdcInvestorPortfSettingFieldType_exec(module) < 0 ) return -1;
    ///投资者新组保设置查询
    if( PyCTP_module_add_PyCThostFtdcQryInvestorPortfSettingFieldType_exec(module) < 0 ) return -1;
    ///来自次席的用户口令变更
    if( PyCTP_module_add_PyCThostFtdcUserPasswordUpdateFromSecFieldType_exec(module) < 0 ) return -1;
    ///来自次席的结算结果确认
    if( PyCTP_module_add_PyCThostFtdcSettlementInfoConfirmFromSecFieldType_exec(module) < 0 ) return -1;
    ///来自次席的资金账户口令变更
    if( PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_exec(module) < 0 ) return -1;
    ///风控禁止的合约交易权限
    if( PyCTP_module_add_PyCThostFtdcRiskForbiddenRightFieldType_exec(module) < 0 ) return -1;
    ///投资者申报费阶梯收取记录
    if( PyCTP_module_add_PyCThostFtdcInvestorInfoCommRecFieldType_exec(module) < 0 ) return -1;
    ///投资者申报费阶梯收取记录查询
    if( PyCTP_module_add_PyCThostFtdcQryInvestorInfoCommRecFieldType_exec(module) < 0 ) return -1;
    ///组合腿信息
    if( PyCTP_module_add_PyCThostFtdcCombLegFieldType_exec(module) < 0 ) return -1;
    ///组合腿信息查询
    if( PyCTP_module_add_PyCThostFtdcQryCombLegFieldType_exec(module) < 0 ) return -1;
    ///输入的对冲设置
    if( PyCTP_module_add_PyCThostFtdcInputOffsetSettingFieldType_exec(module) < 0 ) return -1;
    ///对冲设置
    if( PyCTP_module_add_PyCThostFtdcOffsetSettingFieldType_exec(module) < 0 ) return -1;
    ///撤销对冲设置
    if( PyCTP_module_add_PyCThostFtdcCancelOffsetSettingFieldType_exec(module) < 0 ) return -1;
    ///查询对冲设置
    if( PyCTP_module_add_PyCThostFtdcQryOffsetSettingFieldType_exec(module) < 0 ) return -1;
    ///服务地址和AppID的关系
    if( PyCTP_module_add_PyCThostFtdcAddrAppIDRelationFieldType_exec(module) < 0 ) return -1;
    ///服务地址和AppID的关系查询
    if( PyCTP_module_add_PyCThostFtdcQryAddrAppIDRelationFieldType_exec(module) < 0 ) return -1;
    ///微信小程序等用户系统信息
    if( PyCTP_module_add_PyCThostFtdcWechatUserSystemInfoFieldType_exec(module) < 0 ) return -1;
    ///投资者预留信息
    if( PyCTP_module_add_PyCThostFtdcInvestorReserveInfoFieldType_exec(module) < 0 ) return -1;
    ///查询组织架构投资者对应关系
    if( PyCTP_module_add_PyCThostFtdcQryInvestorDepartmentFlatFieldType_exec(module) < 0 ) return -1;
    ///组织架构投资者对应关系
    if( PyCTP_module_add_PyCThostFtdcInvestorDepartmentFlatFieldType_exec(module) < 0 ) return -1;
    ///查询操作员组织架构关系
    if( PyCTP_module_add_PyCThostFtdcQryDepartmentUserFieldType_exec(module) < 0 ) return -1;
    ///App客户端认证码
    if( PyCTP_module_add_PyCThostFtdcAppAuthenticationCodeFieldType_exec(module) < 0 ) return -1;
    ///客户中心权限豁免
    if( PyCTP_module_add_PyCThostFtdcUserDRIBypassFieldType_exec(module) < 0 ) return -1;
    ///申请短信验证码请求
    if( PyCTP_module_add_PyCThostFtdcReqGenSMSCodeFieldType_exec(module) < 0 ) return -1;
    ///申请短信验证码响应
    if( PyCTP_module_add_PyCThostFtdcRspGenSMSCodeFieldType_exec(module) < 0 ) return -1;
    ///短信验证信息通知
    if( PyCTP_module_add_PyCThostFtdcSMSVerifyInfoFromSecFieldType_exec(module) < 0 ) return -1;
    ///登录验证设置
    if( PyCTP_module_add_PyCThostFtdcSMSVerifyConfigFieldType_exec(module) < 0 ) return -1;
    ///短信验证信息通知
    if( PyCTP_module_add_PyCThostFtdcSMSVerifyInfoFieldType_exec(module) < 0 ) return -1;
    ///套利确认输入基本信息
    if( PyCTP_module_add_PyCThostFtdcInputSpdApplyFieldType_exec(module) < 0 ) return -1;
    ///套保确认输入基本信息
    if( PyCTP_module_add_PyCThostFtdcInputHedgeCfmFieldType_exec(module) < 0 ) return -1;
    ///套利申请回报
    if( PyCTP_module_add_PyCThostFtdcSpdApplyFieldType_exec(module) < 0 ) return -1;
    ///套保申请回报
    if( PyCTP_module_add_PyCThostFtdcHedgeCfmFieldType_exec(module) < 0 ) return -1;
    ///套利套保申请查询
    if( PyCTP_module_add_PyCThostFtdcQrySpdApplyFieldType_exec(module) < 0 ) return -1;
    ///套利套保申请查询
    if( PyCTP_module_add_PyCThostFtdcQryHedgeCfmFieldType_exec(module) < 0 ) return -1;
    ///套利申请撤销
    if( PyCTP_module_add_PyCThostFtdcInputSpdApplyActionFieldType_exec(module) < 0 ) return -1;
    ///套保申请撤销
    if( PyCTP_module_add_PyCThostFtdcInputHedgeCfmActionFieldType_exec(module) < 0 ) return -1;
    ///套利申请撤销回报
    if( PyCTP_module_add_PyCThostFtdcSpdApplyActionFieldType_exec(module) < 0 ) return -1;
    ///套保申请撤销回报
    if( PyCTP_module_add_PyCThostFtdcHedgeCfmActionFieldType_exec(module) < 0 ) return -1;
    ///前置信息
    if( PyCTP_module_add_PyCThostFtdcFrontInfoFieldType_exec(module) < 0 ) return -1;
    return 0;
}