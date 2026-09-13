#ifndef PYCTP_PYTYPES_H
#define PYCTP_PYTYPES_H

///信息分发
#include "Types/PyCThostFtdcDisseminationField.h"
///用户登录请求
#include "Types/PyCThostFtdcReqUserLoginField.h"
///用户登录应答
#include "Types/PyCThostFtdcRspUserLoginField.h"
///用户登出请求
#include "Types/PyCThostFtdcUserLogoutField.h"
///强制交易员退出
#include "Types/PyCThostFtdcForceUserLogoutField.h"
///客户端认证请求
#include "Types/PyCThostFtdcReqAuthenticateField.h"
///客户端认证响应
#include "Types/PyCThostFtdcRspAuthenticateField.h"
///客户端认证信息
#include "Types/PyCThostFtdcAuthenticationInfoField.h"
///用户登录应答2
#include "Types/PyCThostFtdcRspUserLogin2Field.h"
///银期转帐报文头
#include "Types/PyCThostFtdcTransferHeaderField.h"
///银行资金转期货请求，TradeCode=202001
#include "Types/PyCThostFtdcTransferBankToFutureReqField.h"
///银行资金转期货请求响应
#include "Types/PyCThostFtdcTransferBankToFutureRspField.h"
///期货资金转银行请求，TradeCode=202002
#include "Types/PyCThostFtdcTransferFutureToBankReqField.h"
///期货资金转银行请求响应
#include "Types/PyCThostFtdcTransferFutureToBankRspField.h"
///查询银行资金请求，TradeCode=204002
#include "Types/PyCThostFtdcTransferQryBankReqField.h"
///查询银行资金请求响应
#include "Types/PyCThostFtdcTransferQryBankRspField.h"
///查询银行交易明细请求，TradeCode=204999
#include "Types/PyCThostFtdcTransferQryDetailReqField.h"
///查询银行交易明细请求响应
#include "Types/PyCThostFtdcTransferQryDetailRspField.h"
///响应信息
#include "Types/PyCThostFtdcRspInfoField.h"
///交易所
#include "Types/PyCThostFtdcExchangeField.h"
///产品
#include "Types/PyCThostFtdcProductField.h"
///合约
#include "Types/PyCThostFtdcInstrumentField.h"
///经纪公司
#include "Types/PyCThostFtdcBrokerField.h"
///交易所交易员
#include "Types/PyCThostFtdcTraderField.h"
///投资者
#include "Types/PyCThostFtdcInvestorField.h"
///交易编码
#include "Types/PyCThostFtdcTradingCodeField.h"
///会员编码和经纪公司编码对照表
#include "Types/PyCThostFtdcPartBrokerField.h"
///管理用户
#include "Types/PyCThostFtdcSuperUserField.h"
///管理用户功能权限
#include "Types/PyCThostFtdcSuperUserFunctionField.h"
///投资者组
#include "Types/PyCThostFtdcInvestorGroupField.h"
///资金账户
#include "Types/PyCThostFtdcTradingAccountField.h"
///投资者持仓
#include "Types/PyCThostFtdcInvestorPositionField.h"
///合约保证金率
#include "Types/PyCThostFtdcInstrumentMarginRateField.h"
///合约手续费率
#include "Types/PyCThostFtdcInstrumentCommissionRateField.h"
///深度行情
#include "Types/PyCThostFtdcDepthMarketDataField.h"
///投资者合约交易权限
#include "Types/PyCThostFtdcInstrumentTradingRightField.h"
///经纪公司用户
#include "Types/PyCThostFtdcBrokerUserField.h"
///经纪公司用户口令
#include "Types/PyCThostFtdcBrokerUserPasswordField.h"
///经纪公司用户功能权限
#include "Types/PyCThostFtdcBrokerUserFunctionField.h"
///交易所交易员报盘机
#include "Types/PyCThostFtdcTraderOfferField.h"
///投资者结算结果
#include "Types/PyCThostFtdcSettlementInfoField.h"
///合约保证金率调整
#include "Types/PyCThostFtdcInstrumentMarginRateAdjustField.h"
///交易所保证金率
#include "Types/PyCThostFtdcExchangeMarginRateField.h"
///交易所保证金率调整
#include "Types/PyCThostFtdcExchangeMarginRateAdjustField.h"
///汇率
#include "Types/PyCThostFtdcExchangeRateField.h"
///结算引用
#include "Types/PyCThostFtdcSettlementRefField.h"
///当前时间
#include "Types/PyCThostFtdcCurrentTimeField.h"
///通讯阶段
#include "Types/PyCThostFtdcCommPhaseField.h"
///登录信息
#include "Types/PyCThostFtdcLoginInfoField.h"
///登录信息
#include "Types/PyCThostFtdcLogoutAllField.h"
///前置状态
#include "Types/PyCThostFtdcFrontStatusField.h"
///用户口令变更
#include "Types/PyCThostFtdcUserPasswordUpdateField.h"
///输入报单
#include "Types/PyCThostFtdcInputOrderField.h"
///报单
#include "Types/PyCThostFtdcOrderField.h"
///交易所报单
#include "Types/PyCThostFtdcExchangeOrderField.h"
///交易所报单插入失败
#include "Types/PyCThostFtdcExchangeOrderInsertErrorField.h"
///输入报单操作
#include "Types/PyCThostFtdcInputOrderActionField.h"
///报单操作
#include "Types/PyCThostFtdcOrderActionField.h"
///交易所报单操作
#include "Types/PyCThostFtdcExchangeOrderActionField.h"
///交易所报单操作失败
#include "Types/PyCThostFtdcExchangeOrderActionErrorField.h"
///交易所成交
#include "Types/PyCThostFtdcExchangeTradeField.h"
///成交
#include "Types/PyCThostFtdcTradeField.h"
///用户会话
#include "Types/PyCThostFtdcUserSessionField.h"
///查询最大报单数量
#include "Types/PyCThostFtdcQryMaxOrderVolumeField.h"
///投资者结算结果确认信息
#include "Types/PyCThostFtdcSettlementInfoConfirmField.h"
///出入金同步
#include "Types/PyCThostFtdcSyncDepositField.h"
///货币质押同步
#include "Types/PyCThostFtdcSyncFundMortgageField.h"
///经纪公司同步
#include "Types/PyCThostFtdcBrokerSyncField.h"
///正在同步中的投资者
#include "Types/PyCThostFtdcSyncingInvestorField.h"
///正在同步中的交易代码
#include "Types/PyCThostFtdcSyncingTradingCodeField.h"
///正在同步中的投资者分组
#include "Types/PyCThostFtdcSyncingInvestorGroupField.h"
///正在同步中的交易账号
#include "Types/PyCThostFtdcSyncingTradingAccountField.h"
///正在同步中的投资者持仓
#include "Types/PyCThostFtdcSyncingInvestorPositionField.h"
///正在同步中的合约保证金率
#include "Types/PyCThostFtdcSyncingInstrumentMarginRateField.h"
///正在同步中的合约手续费率
#include "Types/PyCThostFtdcSyncingInstrumentCommissionRateField.h"
///正在同步中的合约交易权限
#include "Types/PyCThostFtdcSyncingInstrumentTradingRightField.h"
///查询报单
#include "Types/PyCThostFtdcQryOrderField.h"
///查询成交
#include "Types/PyCThostFtdcQryTradeField.h"
///查询投资者持仓
#include "Types/PyCThostFtdcQryInvestorPositionField.h"
///查询资金账户
#include "Types/PyCThostFtdcQryTradingAccountField.h"
///查询投资者
#include "Types/PyCThostFtdcQryInvestorField.h"
///查询交易编码
#include "Types/PyCThostFtdcQryTradingCodeField.h"
///查询投资者组
#include "Types/PyCThostFtdcQryInvestorGroupField.h"
///查询合约保证金率
#include "Types/PyCThostFtdcQryInstrumentMarginRateField.h"
///查询手续费率
#include "Types/PyCThostFtdcQryInstrumentCommissionRateField.h"
///查询合约交易权限
#include "Types/PyCThostFtdcQryInstrumentTradingRightField.h"
///查询经纪公司
#include "Types/PyCThostFtdcQryBrokerField.h"
///查询交易员
#include "Types/PyCThostFtdcQryTraderField.h"
///查询管理用户功能权限
#include "Types/PyCThostFtdcQrySuperUserFunctionField.h"
///查询用户会话
#include "Types/PyCThostFtdcQryUserSessionField.h"
///查询经纪公司会员代码
#include "Types/PyCThostFtdcQryPartBrokerField.h"
///查询前置状态
#include "Types/PyCThostFtdcQryFrontStatusField.h"
///查询交易所报单
#include "Types/PyCThostFtdcQryExchangeOrderField.h"
///查询报单操作
#include "Types/PyCThostFtdcQryOrderActionField.h"
///查询交易所报单操作
#include "Types/PyCThostFtdcQryExchangeOrderActionField.h"
///查询管理用户
#include "Types/PyCThostFtdcQrySuperUserField.h"
///查询交易所
#include "Types/PyCThostFtdcQryExchangeField.h"
///查询产品
#include "Types/PyCThostFtdcQryProductField.h"
///查询合约
#include "Types/PyCThostFtdcQryInstrumentField.h"
///查询行情
#include "Types/PyCThostFtdcQryDepthMarketDataField.h"
///查询经纪公司用户
#include "Types/PyCThostFtdcQryBrokerUserField.h"
///查询经纪公司用户权限
#include "Types/PyCThostFtdcQryBrokerUserFunctionField.h"
///查询交易员报盘机
#include "Types/PyCThostFtdcQryTraderOfferField.h"
///查询出入金流水
#include "Types/PyCThostFtdcQrySyncDepositField.h"
///查询投资者结算结果
#include "Types/PyCThostFtdcQrySettlementInfoField.h"
///查询交易所保证金率
#include "Types/PyCThostFtdcQryExchangeMarginRateField.h"
///查询交易所调整保证金率
#include "Types/PyCThostFtdcQryExchangeMarginRateAdjustField.h"
///查询汇率
#include "Types/PyCThostFtdcQryExchangeRateField.h"
///查询货币质押流水
#include "Types/PyCThostFtdcQrySyncFundMortgageField.h"
///查询报单
#include "Types/PyCThostFtdcQryHisOrderField.h"
///当前期权合约最小保证金
#include "Types/PyCThostFtdcOptionInstrMiniMarginField.h"
///当前期权合约保证金调整系数
#include "Types/PyCThostFtdcOptionInstrMarginAdjustField.h"
///当前期权合约手续费的详细内容
#include "Types/PyCThostFtdcOptionInstrCommRateField.h"
///期权交易成本
#include "Types/PyCThostFtdcOptionInstrTradeCostField.h"
///期权交易成本查询
#include "Types/PyCThostFtdcQryOptionInstrTradeCostField.h"
///期权手续费率查询
#include "Types/PyCThostFtdcQryOptionInstrCommRateField.h"
///股指现货指数
#include "Types/PyCThostFtdcIndexPriceField.h"
///输入的执行宣告
#include "Types/PyCThostFtdcInputExecOrderField.h"
///输入执行宣告操作
#include "Types/PyCThostFtdcInputExecOrderActionField.h"
///执行宣告
#include "Types/PyCThostFtdcExecOrderField.h"
///执行宣告操作
#include "Types/PyCThostFtdcExecOrderActionField.h"
///执行宣告查询
#include "Types/PyCThostFtdcQryExecOrderField.h"
///交易所执行宣告信息
#include "Types/PyCThostFtdcExchangeExecOrderField.h"
///交易所执行宣告查询
#include "Types/PyCThostFtdcQryExchangeExecOrderField.h"
///执行宣告操作查询
#include "Types/PyCThostFtdcQryExecOrderActionField.h"
///交易所执行宣告操作
#include "Types/PyCThostFtdcExchangeExecOrderActionField.h"
///交易所执行宣告操作查询
#include "Types/PyCThostFtdcQryExchangeExecOrderActionField.h"
///错误执行宣告
#include "Types/PyCThostFtdcErrExecOrderField.h"
///查询错误执行宣告
#include "Types/PyCThostFtdcQryErrExecOrderField.h"
///错误执行宣告操作
#include "Types/PyCThostFtdcErrExecOrderActionField.h"
///查询错误执行宣告操作
#include "Types/PyCThostFtdcQryErrExecOrderActionField.h"
///投资者期权合约交易权限
#include "Types/PyCThostFtdcOptionInstrTradingRightField.h"
///查询期权合约交易权限
#include "Types/PyCThostFtdcQryOptionInstrTradingRightField.h"
///输入的询价
#include "Types/PyCThostFtdcInputForQuoteField.h"
///询价
#include "Types/PyCThostFtdcForQuoteField.h"
///询价查询
#include "Types/PyCThostFtdcQryForQuoteField.h"
///交易所询价信息
#include "Types/PyCThostFtdcExchangeForQuoteField.h"
///交易所询价查询
#include "Types/PyCThostFtdcQryExchangeForQuoteField.h"
///输入的报价
#include "Types/PyCThostFtdcInputQuoteField.h"
///输入报价操作
#include "Types/PyCThostFtdcInputQuoteActionField.h"
///报价
#include "Types/PyCThostFtdcQuoteField.h"
///报价操作
#include "Types/PyCThostFtdcQuoteActionField.h"
///报价查询
#include "Types/PyCThostFtdcQryQuoteField.h"
///交易所报价信息
#include "Types/PyCThostFtdcExchangeQuoteField.h"
///交易所报价查询
#include "Types/PyCThostFtdcQryExchangeQuoteField.h"
///报价操作查询
#include "Types/PyCThostFtdcQryQuoteActionField.h"
///交易所报价操作
#include "Types/PyCThostFtdcExchangeQuoteActionField.h"
///交易所报价操作查询
#include "Types/PyCThostFtdcQryExchangeQuoteActionField.h"
///期权合约delta值
#include "Types/PyCThostFtdcOptionInstrDeltaField.h"
///发给做市商的询价请求
#include "Types/PyCThostFtdcForQuoteRspField.h"
///当前期权合约执行偏移值的详细内容
#include "Types/PyCThostFtdcStrikeOffsetField.h"
///期权执行偏移值查询
#include "Types/PyCThostFtdcQryStrikeOffsetField.h"
///输入批量报单操作
#include "Types/PyCThostFtdcInputBatchOrderActionField.h"
///批量报单操作
#include "Types/PyCThostFtdcBatchOrderActionField.h"
///交易所批量报单操作
#include "Types/PyCThostFtdcExchangeBatchOrderActionField.h"
///查询批量报单操作
#include "Types/PyCThostFtdcQryBatchOrderActionField.h"
///组合合约安全系数
#include "Types/PyCThostFtdcCombInstrumentGuardField.h"
///组合合约安全系数查询
#include "Types/PyCThostFtdcQryCombInstrumentGuardField.h"
///输入的申请组合
#include "Types/PyCThostFtdcInputCombActionField.h"
///申请组合
#include "Types/PyCThostFtdcCombActionField.h"
///申请组合查询
#include "Types/PyCThostFtdcQryCombActionField.h"
///交易所申请组合信息
#include "Types/PyCThostFtdcExchangeCombActionField.h"
///交易所申请组合查询
#include "Types/PyCThostFtdcQryExchangeCombActionField.h"
///产品报价汇率
#include "Types/PyCThostFtdcProductExchRateField.h"
///产品报价汇率查询
#include "Types/PyCThostFtdcQryProductExchRateField.h"
///查询询价价差参数
#include "Types/PyCThostFtdcQryForQuoteParamField.h"
///询价价差参数
#include "Types/PyCThostFtdcForQuoteParamField.h"
///当前做市商期权合约手续费的详细内容
#include "Types/PyCThostFtdcMMOptionInstrCommRateField.h"
///做市商期权手续费率查询
#include "Types/PyCThostFtdcQryMMOptionInstrCommRateField.h"
///做市商合约手续费率
#include "Types/PyCThostFtdcMMInstrumentCommissionRateField.h"
///查询做市商合约手续费率
#include "Types/PyCThostFtdcQryMMInstrumentCommissionRateField.h"
///当前报单手续费的详细内容
#include "Types/PyCThostFtdcInstrumentOrderCommRateField.h"
///报单手续费率查询
#include "Types/PyCThostFtdcQryInstrumentOrderCommRateField.h"
///交易参数
#include "Types/PyCThostFtdcTradeParamField.h"
///合约保证金率调整
#include "Types/PyCThostFtdcInstrumentMarginRateULField.h"
///期货持仓限制参数
#include "Types/PyCThostFtdcFutureLimitPosiParamField.h"
///禁止登录IP
#include "Types/PyCThostFtdcLoginForbiddenIPField.h"
///IP列表
#include "Types/PyCThostFtdcIPListField.h"
///输入的期权自对冲
#include "Types/PyCThostFtdcInputOptionSelfCloseField.h"
///输入期权自对冲操作
#include "Types/PyCThostFtdcInputOptionSelfCloseActionField.h"
///期权自对冲
#include "Types/PyCThostFtdcOptionSelfCloseField.h"
///期权自对冲操作
#include "Types/PyCThostFtdcOptionSelfCloseActionField.h"
///期权自对冲查询
#include "Types/PyCThostFtdcQryOptionSelfCloseField.h"
///交易所期权自对冲信息
#include "Types/PyCThostFtdcExchangeOptionSelfCloseField.h"
///期权自对冲操作查询
#include "Types/PyCThostFtdcQryOptionSelfCloseActionField.h"
///交易所期权自对冲操作
#include "Types/PyCThostFtdcExchangeOptionSelfCloseActionField.h"
///延时换汇同步
#include "Types/PyCThostFtdcSyncDelaySwapField.h"
///查询延时换汇同步
#include "Types/PyCThostFtdcQrySyncDelaySwapField.h"
///投资单元
#include "Types/PyCThostFtdcInvestUnitField.h"
///查询投资单元
#include "Types/PyCThostFtdcQryInvestUnitField.h"
///二级代理商资金校验模式
#include "Types/PyCThostFtdcSecAgentCheckModeField.h"
///二级代理商信息
#include "Types/PyCThostFtdcSecAgentTradeInfoField.h"
///市场行情
#include "Types/PyCThostFtdcMarketDataField.h"
///行情基础属性
#include "Types/PyCThostFtdcMarketDataBaseField.h"
///行情静态属性
#include "Types/PyCThostFtdcMarketDataStaticField.h"
///行情最新成交属性
#include "Types/PyCThostFtdcMarketDataLastMatchField.h"
///行情最优价属性
#include "Types/PyCThostFtdcMarketDataBestPriceField.h"
///行情申买二、三属性
#include "Types/PyCThostFtdcMarketDataBid23Field.h"
///行情申卖二、三属性
#include "Types/PyCThostFtdcMarketDataAsk23Field.h"
///行情申买四、五属性
#include "Types/PyCThostFtdcMarketDataBid45Field.h"
///行情申卖四、五属性
#include "Types/PyCThostFtdcMarketDataAsk45Field.h"
///行情更新时间属性
#include "Types/PyCThostFtdcMarketDataUpdateTimeField.h"
///行情上下带价
#include "Types/PyCThostFtdcMarketDataBandingPriceField.h"
///行情交易所代码属性
#include "Types/PyCThostFtdcMarketDataExchangeField.h"
///指定的合约
#include "Types/PyCThostFtdcSpecificInstrumentField.h"
///合约状态
#include "Types/PyCThostFtdcInstrumentStatusField.h"
///查询合约状态
#include "Types/PyCThostFtdcQryInstrumentStatusField.h"
///投资者账户
#include "Types/PyCThostFtdcInvestorAccountField.h"
///浮动盈亏算法
#include "Types/PyCThostFtdcPositionProfitAlgorithmField.h"
///会员资金折扣
#include "Types/PyCThostFtdcDiscountField.h"
///查询转帐银行
#include "Types/PyCThostFtdcQryTransferBankField.h"
///转帐银行
#include "Types/PyCThostFtdcTransferBankField.h"
///查询投资者持仓明细
#include "Types/PyCThostFtdcQryInvestorPositionDetailField.h"
///投资者持仓明细
#include "Types/PyCThostFtdcInvestorPositionDetailField.h"
///资金账户口令域
#include "Types/PyCThostFtdcTradingAccountPasswordField.h"
///交易所行情报盘机
#include "Types/PyCThostFtdcMDTraderOfferField.h"
///查询行情报盘机
#include "Types/PyCThostFtdcQryMDTraderOfferField.h"
///查询客户通知
#include "Types/PyCThostFtdcQryNoticeField.h"
///客户通知
#include "Types/PyCThostFtdcNoticeField.h"
///用户权限
#include "Types/PyCThostFtdcUserRightField.h"
///查询结算信息确认域
#include "Types/PyCThostFtdcQrySettlementInfoConfirmField.h"
///装载结算信息
#include "Types/PyCThostFtdcLoadSettlementInfoField.h"
///经纪公司可提资金算法表
#include "Types/PyCThostFtdcBrokerWithdrawAlgorithmField.h"
///资金账户口令变更域
#include "Types/PyCThostFtdcTradingAccountPasswordUpdateV1Field.h"
///资金账户口令变更域
#include "Types/PyCThostFtdcTradingAccountPasswordUpdateField.h"
///查询组合合约分腿
#include "Types/PyCThostFtdcQryCombinationLegField.h"
///查询组合合约分腿
#include "Types/PyCThostFtdcQrySyncStatusField.h"
///组合交易合约的单腿
#include "Types/PyCThostFtdcCombinationLegField.h"
///数据同步状态
#include "Types/PyCThostFtdcSyncStatusField.h"
///查询联系人
#include "Types/PyCThostFtdcQryLinkManField.h"
///联系人
#include "Types/PyCThostFtdcLinkManField.h"
///查询经纪公司用户事件
#include "Types/PyCThostFtdcQryBrokerUserEventField.h"
///查询经纪公司用户事件
#include "Types/PyCThostFtdcBrokerUserEventField.h"
///查询签约银行请求
#include "Types/PyCThostFtdcQryContractBankField.h"
///查询签约银行响应
#include "Types/PyCThostFtdcContractBankField.h"
///投资者组合持仓明细
#include "Types/PyCThostFtdcInvestorPositionCombineDetailField.h"
///预埋单
#include "Types/PyCThostFtdcParkedOrderField.h"
///输入预埋单操作
#include "Types/PyCThostFtdcParkedOrderActionField.h"
///查询预埋单
#include "Types/PyCThostFtdcQryParkedOrderField.h"
///查询预埋撤单
#include "Types/PyCThostFtdcQryParkedOrderActionField.h"
///删除预埋单
#include "Types/PyCThostFtdcRemoveParkedOrderField.h"
///删除预埋撤单
#include "Types/PyCThostFtdcRemoveParkedOrderActionField.h"
///经纪公司可提资金算法表
#include "Types/PyCThostFtdcInvestorWithdrawAlgorithmField.h"
///查询组合持仓明细
#include "Types/PyCThostFtdcQryInvestorPositionCombineDetailField.h"
///成交均价
#include "Types/PyCThostFtdcMarketDataAveragePriceField.h"
///校验投资者密码
#include "Types/PyCThostFtdcVerifyInvestorPasswordField.h"
///用户IP
#include "Types/PyCThostFtdcUserIPField.h"
///用户事件通知信息
#include "Types/PyCThostFtdcTradingNoticeInfoField.h"
///用户事件通知
#include "Types/PyCThostFtdcTradingNoticeField.h"
///查询交易事件通知
#include "Types/PyCThostFtdcQryTradingNoticeField.h"
///查询错误报单
#include "Types/PyCThostFtdcQryErrOrderField.h"
///错误报单
#include "Types/PyCThostFtdcErrOrderField.h"
///查询错误报单操作
#include "Types/PyCThostFtdcErrorConditionalOrderField.h"
///查询错误报单操作
#include "Types/PyCThostFtdcQryErrOrderActionField.h"
///错误报单操作
#include "Types/PyCThostFtdcErrOrderActionField.h"
///查询交易所状态
#include "Types/PyCThostFtdcQryExchangeSequenceField.h"
///交易所状态
#include "Types/PyCThostFtdcExchangeSequenceField.h"
///根据价格查询最大报单数量
#include "Types/PyCThostFtdcQryMaxOrderVolumeWithPriceField.h"
///查询经纪公司交易参数
#include "Types/PyCThostFtdcQryBrokerTradingParamsField.h"
///经纪公司交易参数
#include "Types/PyCThostFtdcBrokerTradingParamsField.h"
///查询经纪公司交易算法
#include "Types/PyCThostFtdcQryBrokerTradingAlgosField.h"
///经纪公司交易算法
#include "Types/PyCThostFtdcBrokerTradingAlgosField.h"
///查询经纪公司资金
#include "Types/PyCThostFtdcQueryBrokerDepositField.h"
///经纪公司资金
#include "Types/PyCThostFtdcBrokerDepositField.h"
///查询保证金监管系统经纪公司密钥
#include "Types/PyCThostFtdcQryCFMMCBrokerKeyField.h"
///保证金监管系统经纪公司密钥
#include "Types/PyCThostFtdcCFMMCBrokerKeyField.h"
///保证金监管系统经纪公司资金账户密钥
#include "Types/PyCThostFtdcCFMMCTradingAccountKeyField.h"
///请求查询保证金监管系统经纪公司资金账户密钥
#include "Types/PyCThostFtdcQryCFMMCTradingAccountKeyField.h"
///用户动态令牌参数
#include "Types/PyCThostFtdcBrokerUserOTPParamField.h"
///手工同步用户动态令牌
#include "Types/PyCThostFtdcManualSyncBrokerUserOTPField.h"
///投资者手续费率模板
#include "Types/PyCThostFtdcCommRateModelField.h"
///请求查询投资者手续费率模板
#include "Types/PyCThostFtdcQryCommRateModelField.h"
///投资者保证金率模板
#include "Types/PyCThostFtdcMarginModelField.h"
///请求查询投资者保证金率模板
#include "Types/PyCThostFtdcQryMarginModelField.h"
///仓单折抵信息
#include "Types/PyCThostFtdcEWarrantOffsetField.h"
///查询仓单折抵信息
#include "Types/PyCThostFtdcQryEWarrantOffsetField.h"
///查询投资者品种/跨品种保证金
#include "Types/PyCThostFtdcQryInvestorProductGroupMarginField.h"
///投资者品种/跨品种保证金
#include "Types/PyCThostFtdcInvestorProductGroupMarginField.h"
///查询监控中心用户令牌
#include "Types/PyCThostFtdcQueryCFMMCTradingAccountTokenField.h"
///监控中心用户令牌
#include "Types/PyCThostFtdcCFMMCTradingAccountTokenField.h"
///查询产品组
#include "Types/PyCThostFtdcQryProductGroupField.h"
///投资者品种/跨品种保证金产品组
#include "Types/PyCThostFtdcProductGroupField.h"
///交易所公告
#include "Types/PyCThostFtdcBulletinField.h"
///查询交易所公告
#include "Types/PyCThostFtdcQryBulletinField.h"
///MulticastInstrument
#include "Types/PyCThostFtdcMulticastInstrumentField.h"
///QryMulticastInstrument
#include "Types/PyCThostFtdcQryMulticastInstrumentField.h"
///App客户端权限分配
#include "Types/PyCThostFtdcAppIDAuthAssignField.h"
///转帐开户请求
#include "Types/PyCThostFtdcReqOpenAccountField.h"
///转帐销户请求
#include "Types/PyCThostFtdcReqCancelAccountField.h"
///变更银行账户请求
#include "Types/PyCThostFtdcReqChangeAccountField.h"
///转账请求
#include "Types/PyCThostFtdcReqTransferField.h"
///银行发起银行资金转期货响应
#include "Types/PyCThostFtdcRspTransferField.h"
///冲正请求
#include "Types/PyCThostFtdcReqRepealField.h"
///冲正响应
#include "Types/PyCThostFtdcRspRepealField.h"
///查询账户信息请求
#include "Types/PyCThostFtdcReqQueryAccountField.h"
///查询账户信息响应
#include "Types/PyCThostFtdcRspQueryAccountField.h"
///期商签到签退
#include "Types/PyCThostFtdcFutureSignIOField.h"
///期商签到响应
#include "Types/PyCThostFtdcRspFutureSignInField.h"
///期商签退请求
#include "Types/PyCThostFtdcReqFutureSignOutField.h"
///期商签退响应
#include "Types/PyCThostFtdcRspFutureSignOutField.h"
///查询指定流水号的交易结果请求
#include "Types/PyCThostFtdcReqQueryTradeResultBySerialField.h"
///查询指定流水号的交易结果响应
#include "Types/PyCThostFtdcRspQueryTradeResultBySerialField.h"
///日终文件就绪请求
#include "Types/PyCThostFtdcReqDayEndFileReadyField.h"
///返回结果
#include "Types/PyCThostFtdcReturnResultField.h"
///验证期货资金密码
#include "Types/PyCThostFtdcVerifyFuturePasswordField.h"
///验证客户信息
#include "Types/PyCThostFtdcVerifyCustInfoField.h"
///验证期货资金密码和客户信息
#include "Types/PyCThostFtdcVerifyFuturePasswordAndCustInfoField.h"
///验证期货资金密码和客户信息
#include "Types/PyCThostFtdcDepositResultInformField.h"
///交易核心向银期报盘发出密钥同步请求
#include "Types/PyCThostFtdcReqSyncKeyField.h"
///交易核心向银期报盘发出密钥同步响应
#include "Types/PyCThostFtdcRspSyncKeyField.h"
///查询账户信息通知
#include "Types/PyCThostFtdcNotifyQueryAccountField.h"
///银期转账交易流水表
#include "Types/PyCThostFtdcTransferSerialField.h"
///请求查询转帐流水
#include "Types/PyCThostFtdcQryTransferSerialField.h"
///期商签到通知
#include "Types/PyCThostFtdcNotifyFutureSignInField.h"
///期商签退通知
#include "Types/PyCThostFtdcNotifyFutureSignOutField.h"
///交易核心向银期报盘发出密钥同步处理结果的通知
#include "Types/PyCThostFtdcNotifySyncKeyField.h"
///请求查询银期签约关系
#include "Types/PyCThostFtdcQryAccountregisterField.h"
///客户开销户信息表
#include "Types/PyCThostFtdcAccountregisterField.h"
///银期开户信息
#include "Types/PyCThostFtdcOpenAccountField.h"
///银期销户信息
#include "Types/PyCThostFtdcCancelAccountField.h"
///银期变更银行账号信息
#include "Types/PyCThostFtdcChangeAccountField.h"
///二级代理操作员银期权限
#include "Types/PyCThostFtdcSecAgentACIDMapField.h"
///二级代理操作员银期权限查询
#include "Types/PyCThostFtdcQrySecAgentACIDMapField.h"
///灾备中心交易权限
#include "Types/PyCThostFtdcUserRightsAssignField.h"
///经济公司是否有在本标示的交易权限
#include "Types/PyCThostFtdcBrokerUserRightAssignField.h"
///灾备交易转换报文
#include "Types/PyCThostFtdcDRTransferField.h"
///Fens用户信息
#include "Types/PyCThostFtdcFensUserInfoField.h"
///当前银期所属交易中心
#include "Types/PyCThostFtdcCurrTransferIdentityField.h"
///禁止登录用户
#include "Types/PyCThostFtdcLoginForbiddenUserField.h"
///查询禁止登录用户
#include "Types/PyCThostFtdcQryLoginForbiddenUserField.h"
///资金账户基本准备金
#include "Types/PyCThostFtdcTradingAccountReserveField.h"
///查询禁止登录IP
#include "Types/PyCThostFtdcQryLoginForbiddenIPField.h"
///查询IP列表
#include "Types/PyCThostFtdcQryIPListField.h"
///查询用户下单权限分配表
#include "Types/PyCThostFtdcQryUserRightsAssignField.h"
///银期预约开户确认请求
#include "Types/PyCThostFtdcReserveOpenAccountConfirmField.h"
///银期预约开户
#include "Types/PyCThostFtdcReserveOpenAccountField.h"
///银行账户属性
#include "Types/PyCThostFtdcAccountPropertyField.h"
///查询当前交易中心
#include "Types/PyCThostFtdcQryCurrDRIdentityField.h"
///当前交易中心
#include "Types/PyCThostFtdcCurrDRIdentityField.h"
///查询二级代理商资金校验模式
#include "Types/PyCThostFtdcQrySecAgentCheckModeField.h"
///查询二级代理商信息
#include "Types/PyCThostFtdcQrySecAgentTradeInfoField.h"
///用户发出获取安全安全登陆方法请求
#include "Types/PyCThostFtdcReqUserAuthMethodField.h"
///用户发出获取安全安全登陆方法回复
#include "Types/PyCThostFtdcRspUserAuthMethodField.h"
///用户发出获取安全安全登陆方法请求
#include "Types/PyCThostFtdcReqGenUserCaptchaField.h"
///生成的图片验证码信息
#include "Types/PyCThostFtdcRspGenUserCaptchaField.h"
///用户发出获取安全安全登陆方法请求
#include "Types/PyCThostFtdcReqGenUserTextField.h"
///短信验证码生成的回复
#include "Types/PyCThostFtdcRspGenUserTextField.h"
///用户发出带图形验证码的登录请求请求
#include "Types/PyCThostFtdcReqUserLoginWithCaptchaField.h"
///用户发出带短信验证码的登录请求请求
#include "Types/PyCThostFtdcReqUserLoginWithTextField.h"
///用户发出带动态验证码的登录请求请求
#include "Types/PyCThostFtdcReqUserLoginWithOTPField.h"
///api握手请求
#include "Types/PyCThostFtdcReqApiHandshakeField.h"
///front发给api的握手回复
#include "Types/PyCThostFtdcRspApiHandshakeField.h"
///api给front的验证key的请求
#include "Types/PyCThostFtdcReqVerifyApiKeyField.h"
///操作员组织架构关系
#include "Types/PyCThostFtdcDepartmentUserField.h"
///查询频率，每秒查询比数
#include "Types/PyCThostFtdcQueryFreqField.h"
///禁止认证IP
#include "Types/PyCThostFtdcAuthForbiddenIPField.h"
///查询禁止认证IP
#include "Types/PyCThostFtdcQryAuthForbiddenIPField.h"
///换汇可提冻结
#include "Types/PyCThostFtdcSyncDelaySwapFrozenField.h"
///用户系统信息
#include "Types/PyCThostFtdcUserSystemInfoField.h"
///终端用户绑定信息
#include "Types/PyCThostFtdcAuthUserIDField.h"
///用户IP绑定信息
#include "Types/PyCThostFtdcAuthIPField.h"
///查询分类合约
#include "Types/PyCThostFtdcQryClassifiedInstrumentField.h"
///查询组合优惠比例
#include "Types/PyCThostFtdcQryCombPromotionParamField.h"
///组合优惠比例
#include "Types/PyCThostFtdcCombPromotionParamField.h"
///国密用户登录请求
#include "Types/PyCThostFtdcReqUserLoginSMField.h"
///投资者风险结算持仓查询
#include "Types/PyCThostFtdcQryRiskSettleInvstPositionField.h"
///风险结算产品查询
#include "Types/PyCThostFtdcQryRiskSettleProductStatusField.h"
///投资者风险结算持仓
#include "Types/PyCThostFtdcRiskSettleInvstPositionField.h"
///风险品种
#include "Types/PyCThostFtdcRiskSettleProductStatusField.h"
///风险结算追平信息
#include "Types/PyCThostFtdcSyncDeltaInfoField.h"
///风险结算追平产品信息
#include "Types/PyCThostFtdcSyncDeltaProductStatusField.h"
///风险结算追平持仓明细
#include "Types/PyCThostFtdcSyncDeltaInvstPosDtlField.h"
///风险结算追平组合持仓明细
#include "Types/PyCThostFtdcSyncDeltaInvstPosCombDtlField.h"
///风险结算追平资金
#include "Types/PyCThostFtdcSyncDeltaTradingAccountField.h"
///投资者风险结算总保证金
#include "Types/PyCThostFtdcSyncDeltaInitInvstMarginField.h"
///风险结算追平组合优先级
#include "Types/PyCThostFtdcSyncDeltaDceCombInstrumentField.h"
///风险结算追平投资者期货保证金率
#include "Types/PyCThostFtdcSyncDeltaInvstMarginRateField.h"
///风险结算追平交易所期货保证金率
#include "Types/PyCThostFtdcSyncDeltaExchMarginRateField.h"
///风险结算追平中金现货期权交易所保证金率
#include "Types/PyCThostFtdcSyncDeltaOptExchMarginField.h"
///风险结算追平中金现货期权投资者保证金率
#include "Types/PyCThostFtdcSyncDeltaOptInvstMarginField.h"
///风险结算追平期权标的调整保证金率
#include "Types/PyCThostFtdcSyncDeltaInvstMarginRateULField.h"
///风险结算追平期权手续费率
#include "Types/PyCThostFtdcSyncDeltaOptInvstCommRateField.h"
///风险结算追平期货手续费率
#include "Types/PyCThostFtdcSyncDeltaInvstCommRateField.h"
///风险结算追平交叉汇率
#include "Types/PyCThostFtdcSyncDeltaProductExchRateField.h"
///风险结算追平行情
#include "Types/PyCThostFtdcSyncDeltaDepthMarketDataField.h"
///风险结算追平现货指数
#include "Types/PyCThostFtdcSyncDeltaIndexPriceField.h"
///风险结算追平仓单折抵
#include "Types/PyCThostFtdcSyncDeltaEWarrantOffsetField.h"
///SPBM期货合约保证金参数
#include "Types/PyCThostFtdcSPBMFutureParameterField.h"
///SPBM期权合约保证金参数
#include "Types/PyCThostFtdcSPBMOptionParameterField.h"
///SPBM品种内对锁仓折扣参数
#include "Types/PyCThostFtdcSPBMIntraParameterField.h"
///SPBM跨品种抵扣参数
#include "Types/PyCThostFtdcSPBMInterParameterField.h"
///同步SPBM参数结束
#include "Types/PyCThostFtdcSyncSPBMParameterEndField.h"
///SPBM期货合约保证金参数查询
#include "Types/PyCThostFtdcQrySPBMFutureParameterField.h"
///SPBM期权合约保证金参数查询
#include "Types/PyCThostFtdcQrySPBMOptionParameterField.h"
///SPBM品种内对锁仓折扣参数查询
#include "Types/PyCThostFtdcQrySPBMIntraParameterField.h"
///SPBM跨品种抵扣参数查询
#include "Types/PyCThostFtdcQrySPBMInterParameterField.h"
///组合保证金套餐
#include "Types/PyCThostFtdcSPBMPortfDefinitionField.h"
///投资者套餐选择
#include "Types/PyCThostFtdcSPBMInvestorPortfDefField.h"
///投资者新型组合保证金系数
#include "Types/PyCThostFtdcInvestorPortfMarginRatioField.h"
///组合保证金套餐查询
#include "Types/PyCThostFtdcQrySPBMPortfDefinitionField.h"
///投资者套餐选择查询
#include "Types/PyCThostFtdcQrySPBMInvestorPortfDefField.h"
///投资者新型组合保证金系数查询
#include "Types/PyCThostFtdcQryInvestorPortfMarginRatioField.h"
///投资者产品SPBM明细
#include "Types/PyCThostFtdcInvestorProdSPBMDetailField.h"
///投资者产品SPBM明细查询
#include "Types/PyCThostFtdcQryInvestorProdSPBMDetailField.h"
///组保交易参数设置
#include "Types/PyCThostFtdcPortfTradeParamSettingField.h"
///投资者交易权限设置
#include "Types/PyCThostFtdcInvestorTradingRightField.h"
///质押配比参数
#include "Types/PyCThostFtdcMortgageParamField.h"
///可提控制参数
#include "Types/PyCThostFtdcWithDrawParamField.h"
///Thost终端用户功能权限
#include "Types/PyCThostFtdcThostUserFunctionField.h"
///Thost终端用户功能权限查询
#include "Types/PyCThostFtdcQryThostUserFunctionField.h"
///SPBM附加跨品种抵扣参数
#include "Types/PyCThostFtdcSPBMAddOnInterParameterField.h"
///SPBM附加跨品种抵扣参数查询
#include "Types/PyCThostFtdcQrySPBMAddOnInterParameterField.h"
///投资者商品组SPMM记录查询
#include "Types/PyCThostFtdcQryInvestorCommoditySPMMMarginField.h"
///投资者商品群SPMM记录查询
#include "Types/PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField.h"
///SPMM合约参数查询
#include "Types/PyCThostFtdcQrySPMMInstParamField.h"
///SPMM产品参数查询
#include "Types/PyCThostFtdcQrySPMMProductParamField.h"
///投资者商品组SPMM记录
#include "Types/PyCThostFtdcInvestorCommoditySPMMMarginField.h"
///投资者商品群SPMM记录
#include "Types/PyCThostFtdcInvestorCommodityGroupSPMMMarginField.h"
///SPMM合约参数
#include "Types/PyCThostFtdcSPMMInstParamField.h"
///SPMM产品参数
#include "Types/PyCThostFtdcSPMMProductParamField.h"
///席位与交易中心对应关系维护查询
#include "Types/PyCThostFtdcQryTraderAssignField.h"
///席位与交易中心对应关系
#include "Types/PyCThostFtdcTraderAssignField.h"
///投资者申报费阶梯收取设置
#include "Types/PyCThostFtdcInvestorInfoCntSettingField.h"
///RCAMS产品组合信息
#include "Types/PyCThostFtdcRCAMSCombProductInfoField.h"
///RCAMS同合约风险对冲参数
#include "Types/PyCThostFtdcRCAMSInstrParameterField.h"
///RCAMS品种内风险对冲参数
#include "Types/PyCThostFtdcRCAMSIntraParameterField.h"
///RCAMS跨品种风险折抵参数
#include "Types/PyCThostFtdcRCAMSInterParameterField.h"
///RCAMS空头期权风险调整参数
#include "Types/PyCThostFtdcRCAMSShortOptAdjustParamField.h"
///RCAMS策略组合持仓
#include "Types/PyCThostFtdcRCAMSInvestorCombPositionField.h"
///投资者品种RCAMS保证金
#include "Types/PyCThostFtdcInvestorProdRCAMSMarginField.h"
///RCAMS产品组合信息查询
#include "Types/PyCThostFtdcQryRCAMSCombProductInfoField.h"
///RCAMS同合约风险对冲参数查询
#include "Types/PyCThostFtdcQryRCAMSInstrParameterField.h"
///RCAMS品种内风险对冲参数查询
#include "Types/PyCThostFtdcQryRCAMSIntraParameterField.h"
///RCAMS跨品种风险折抵参数查询
#include "Types/PyCThostFtdcQryRCAMSInterParameterField.h"
///RCAMS空头期权风险调整参数查询
#include "Types/PyCThostFtdcQryRCAMSShortOptAdjustParamField.h"
///RCAMS策略组合持仓查询
#include "Types/PyCThostFtdcQryRCAMSInvestorCombPositionField.h"
///投资者品种RCAMS保证金查询
#include "Types/PyCThostFtdcQryInvestorProdRCAMSMarginField.h"
///RULE合约保证金参数
#include "Types/PyCThostFtdcRULEInstrParameterField.h"
///RULE品种内对锁仓折扣参数
#include "Types/PyCThostFtdcRULEIntraParameterField.h"
///RULE跨品种抵扣参数
#include "Types/PyCThostFtdcRULEInterParameterField.h"
///RULE合约保证金参数查询
#include "Types/PyCThostFtdcQryRULEInstrParameterField.h"
///RULE品种内对锁仓折扣参数查询
#include "Types/PyCThostFtdcQryRULEIntraParameterField.h"
///RULE跨品种抵扣参数查询
#include "Types/PyCThostFtdcQryRULEInterParameterField.h"
///投资者产品RULE保证金
#include "Types/PyCThostFtdcInvestorProdRULEMarginField.h"
///投资者产品RULE保证金查询
#include "Types/PyCThostFtdcQryInvestorProdRULEMarginField.h"
///风险结算追平SPBM组合保证金套餐
#include "Types/PyCThostFtdcSyncDeltaSPBMPortfDefinitionField.h"
///风险结算追平投资者SPBM套餐选择
#include "Types/PyCThostFtdcSyncDeltaSPBMInvstPortfDefField.h"
///风险结算追平SPBM期货合约保证金参数
#include "Types/PyCThostFtdcSyncDeltaSPBMFutureParameterField.h"
///风险结算追平SPBM期权合约保证金参数
#include "Types/PyCThostFtdcSyncDeltaSPBMOptionParameterField.h"
///风险结算追平SPBM品种内对锁仓折扣参数
#include "Types/PyCThostFtdcSyncDeltaSPBMIntraParameterField.h"
///风险结算追平SPBM跨品种抵扣参数
#include "Types/PyCThostFtdcSyncDeltaSPBMInterParameterField.h"
///风险结算追平SPBM附加跨品种抵扣参数
#include "Types/PyCThostFtdcSyncDeltaSPBMAddOnInterParamField.h"
///风险结算追平SPMM合约参数
#include "Types/PyCThostFtdcSyncDeltaSPMMInstParamField.h"
///风险结算追平SPMM产品相关参数
#include "Types/PyCThostFtdcSyncDeltaSPMMProductParamField.h"
///风险结算追平投资者SPMM模板选择
#include "Types/PyCThostFtdcSyncDeltaInvestorSPMMModelField.h"
///风险结算追平SPMM模板参数设置
#include "Types/PyCThostFtdcSyncDeltaSPMMModelParamField.h"
///风险结算追平RCAMS产品组合信息
#include "Types/PyCThostFtdcSyncDeltaRCAMSCombProdInfoField.h"
///风险结算追平RCAMS同合约风险对冲参数
#include "Types/PyCThostFtdcSyncDeltaRCAMSInstrParameterField.h"
///风险结算追平RCAMS品种内风险对冲参数
#include "Types/PyCThostFtdcSyncDeltaRCAMSIntraParameterField.h"
///风险结算追平RCAMS跨品种风险折抵参数
#include "Types/PyCThostFtdcSyncDeltaRCAMSInterParameterField.h"
///风险结算追平RCAMS空头期权风险调整参数
#include "Types/PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField.h"
///风险结算追平RCAMS策略组合规则明细
#include "Types/PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField.h"
///风险结算追平RCAMS策略组合持仓
#include "Types/PyCThostFtdcSyncDeltaRCAMSInvstCombPosField.h"
///风险结算追平RULE合约保证金参数
#include "Types/PyCThostFtdcSyncDeltaRULEInstrParameterField.h"
///风险结算追平RULE品种内对锁仓折扣参数
#include "Types/PyCThostFtdcSyncDeltaRULEIntraParameterField.h"
///风险结算追平RULE跨品种抵扣参数
#include "Types/PyCThostFtdcSyncDeltaRULEInterParameterField.h"
///服务地址参数
#include "Types/PyCThostFtdcIpAddrParamField.h"
///服务地址参数查询
#include "Types/PyCThostFtdcQryIpAddrParamField.h"
///服务地址参数
#include "Types/PyCThostFtdcTGIpAddrParamField.h"
///服务地址参数查询
#include "Types/PyCThostFtdcQryTGIpAddrParamField.h"
///TGate会话查询状态
#include "Types/PyCThostFtdcTGSessionQryStatusField.h"
///内网地址配置
#include "Types/PyCThostFtdcLocalAddrConfigField.h"
///内网地址配置查询
#include "Types/PyCThostFtdcQryLocalAddrConfigField.h"
///次席查询银行资金帐户信息请求
#include "Types/PyCThostFtdcReqQueryBankAccountBySecField.h"
///次席查询银行资金帐户信息回报
#include "Types/PyCThostFtdcRspQueryBankAccountBySecField.h"
///次中心发起的转帐交易
#include "Types/PyCThostFtdcReqTransferBySecField.h"
///次中心发起的转帐交易回报
#include "Types/PyCThostFtdcRspTransferBySecField.h"
///查询银行资金帐户信息通知 要发往次席
#include "Types/PyCThostFtdcNotifyQueryFutureAccountBySecField.h"
///退出紧急状态参数
#include "Types/PyCThostFtdcExitEmergencyField.h"
///新组保保证金系数投资者模板对应关系
#include "Types/PyCThostFtdcInvestorPortfMarginModelField.h"
///投资者新组保设置
#include "Types/PyCThostFtdcInvestorPortfSettingField.h"
///投资者新组保设置查询
#include "Types/PyCThostFtdcQryInvestorPortfSettingField.h"
///来自次席的用户口令变更
#include "Types/PyCThostFtdcUserPasswordUpdateFromSecField.h"
///来自次席的结算结果确认
#include "Types/PyCThostFtdcSettlementInfoConfirmFromSecField.h"
///来自次席的资金账户口令变更
#include "Types/PyCThostFtdcTradingAccountPasswordUpdateFromSecField.h"
///风控禁止的合约交易权限
#include "Types/PyCThostFtdcRiskForbiddenRightField.h"
///投资者申报费阶梯收取记录
#include "Types/PyCThostFtdcInvestorInfoCommRecField.h"
///投资者申报费阶梯收取记录查询
#include "Types/PyCThostFtdcQryInvestorInfoCommRecField.h"
///组合腿信息
#include "Types/PyCThostFtdcCombLegField.h"
///组合腿信息查询
#include "Types/PyCThostFtdcQryCombLegField.h"
///输入的对冲设置
#include "Types/PyCThostFtdcInputOffsetSettingField.h"
///对冲设置
#include "Types/PyCThostFtdcOffsetSettingField.h"
///撤销对冲设置
#include "Types/PyCThostFtdcCancelOffsetSettingField.h"
///查询对冲设置
#include "Types/PyCThostFtdcQryOffsetSettingField.h"
///服务地址和AppID的关系
#include "Types/PyCThostFtdcAddrAppIDRelationField.h"
///服务地址和AppID的关系查询
#include "Types/PyCThostFtdcQryAddrAppIDRelationField.h"
///微信小程序等用户系统信息
#include "Types/PyCThostFtdcWechatUserSystemInfoField.h"
///投资者预留信息
#include "Types/PyCThostFtdcInvestorReserveInfoField.h"
///查询组织架构投资者对应关系
#include "Types/PyCThostFtdcQryInvestorDepartmentFlatField.h"
///组织架构投资者对应关系
#include "Types/PyCThostFtdcInvestorDepartmentFlatField.h"
///查询操作员组织架构关系
#include "Types/PyCThostFtdcQryDepartmentUserField.h"
///App客户端认证码
#include "Types/PyCThostFtdcAppAuthenticationCodeField.h"
///客户中心权限豁免
#include "Types/PyCThostFtdcUserDRIBypassField.h"
///申请短信验证码请求
#include "Types/PyCThostFtdcReqGenSMSCodeField.h"
///申请短信验证码响应
#include "Types/PyCThostFtdcRspGenSMSCodeField.h"
///短信验证信息通知
#include "Types/PyCThostFtdcSMSVerifyInfoFromSecField.h"
///登录验证设置
#include "Types/PyCThostFtdcSMSVerifyConfigField.h"
///短信验证信息通知
#include "Types/PyCThostFtdcSMSVerifyInfoField.h"
///套利确认输入基本信息
#include "Types/PyCThostFtdcInputSpdApplyField.h"
///套保确认输入基本信息
#include "Types/PyCThostFtdcInputHedgeCfmField.h"
///套利申请回报
#include "Types/PyCThostFtdcSpdApplyField.h"
///套保申请回报
#include "Types/PyCThostFtdcHedgeCfmField.h"
///套利套保申请查询
#include "Types/PyCThostFtdcQrySpdApplyField.h"
///套利套保申请查询
#include "Types/PyCThostFtdcQryHedgeCfmField.h"
///套利申请撤销
#include "Types/PyCThostFtdcInputSpdApplyActionField.h"
///套保申请撤销
#include "Types/PyCThostFtdcInputHedgeCfmActionField.h"
///套利申请撤销回报
#include "Types/PyCThostFtdcSpdApplyActionField.h"
///套保申请撤销回报
#include "Types/PyCThostFtdcHedgeCfmActionField.h"
///前置信息
#include "Types/PyCThostFtdcFrontInfoField.h"

extern int PyCTP_module_add_PyStructTypes_exec(PyObject *module);

#endif