/////////////////////////////////////////////////////////////////////////
///@system 新一代交易所系统
///@company 上海期货信息技术有限公司
///@file ThostFtdcUserApiStruct.h
///@brief 定义了客户端接口使用的业务数据结构
///@history 
///20060106	赵鸿昊		创建该文件
/////////////////////////////////////////////////////////////////////////

#if !defined(THOST_FTDCSTRUCT_H)
#define THOST_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ThostFtdcUserApiDataType.h"

///信息分发
struct YangFtdcDisseminationField
{
	///序列系列号
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///序列号
	TThostFtdcSequenceNoType	SequenceNo;
};

///用户登录请求
struct YangFtdcReqUserLoginField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///密码
	TThostFtdcPasswordType	Password;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
	///动态密码
	TThostFtdcPasswordType	OneTimePassword;
	///终端IP地址
	TThostFtdcIPAddressType	ClientIPAddress;
	///登录备注
	TThostFtdcLoginRemarkType	LoginRemark;
};

///用户登录应答
struct YangFtdcRspUserLoginField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///登录成功时间
	TThostFtdcTimeType	LoginTime;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///交易系统名称
	TThostFtdcSystemNameType	SystemName;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///最大报单引用
	TThostFtdcOrderRefType	MaxOrderRef;
	///上期所时间
	TThostFtdcTimeType	SHFETime;
	///大商所时间
	TThostFtdcTimeType	DCETime;
	///郑商所时间
	TThostFtdcTimeType	CZCETime;
	///中金所时间
	TThostFtdcTimeType	FFEXTime;
	///能源中心时间
	TThostFtdcTimeType	INETime;
};

///用户登出请求
struct YangFtdcUserLogoutField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
};

///强制交易员退出
struct YangFtdcForceUserLogoutField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
};

///客户端认证请求
struct YangFtdcReqAuthenticateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///认证码
	TThostFtdcAuthCodeType	AuthCode;
};

///客户端认证响应
struct YangFtdcRspAuthenticateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
};

///客户端认证信息
struct YangFtdcAuthenticationInfoField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///认证信息
	TThostFtdcAuthInfoType	AuthInfo;
	///是否为认证结果
	TThostFtdcBoolType	IsResult;
};

///银期转帐报文头
struct YangFtdcTransferHeaderField
{
	///版本号，常量，1.0
	TThostFtdcVersionType	Version;
	///交易代码，必填
	TThostFtdcTradeCodeType	TradeCode;
	///交易日期，必填，格式：yyyymmdd
	TThostFtdcTradeDateType	TradeDate;
	///交易时间，必填，格式：hhmmss
	TThostFtdcTradeTimeType	TradeTime;
	///发起方流水号，N/A
	TThostFtdcTradeSerialType	TradeSerial;
	///期货公司代码，必填
	TThostFtdcFutureIDType	FutureID;
	///银行代码，根据查询银行得到，必填
	TThostFtdcBankIDType	BankID;
	///银行分中心代码，根据查询银行得到，必填
	TThostFtdcBankBrchIDType	BankBrchID;
	///操作员，N/A
	TThostFtdcOperNoType	OperNo;
	///交易设备类型，N/A
	TThostFtdcDeviceIDType	DeviceID;
	///记录数，N/A
	TThostFtdcRecordNumType	RecordNum;
	///会话编号，N/A
	TThostFtdcSessionIDType	SessionID;
	///请求编号，N/A
	TThostFtdcRequestIDType	RequestID;
};

///银行资金转期货请求，TradeCode=202001
struct YangFtdcTransferBankToFutureReqField
{
	///期货资金账户
	TThostFtdcAccountIDType	FutureAccount;
	///密码标志
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///密码
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///转账金额
	TThostFtdcMoneyType	TradeAmt;
	///客户手续费
	TThostFtdcMoneyType	CustFee;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///银行资金转期货请求响应
struct YangFtdcTransferBankToFutureRspField
{
	///响应代码
	TThostFtdcRetCodeType	RetCode;
	///响应信息
	TThostFtdcRetInfoType	RetInfo;
	///资金账户
	TThostFtdcAccountIDType	FutureAccount;
	///转帐金额
	TThostFtdcMoneyType	TradeAmt;
	///应收客户手续费
	TThostFtdcMoneyType	CustFee;
	///币种
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///期货资金转银行请求，TradeCode=202002
struct YangFtdcTransferFutureToBankReqField
{
	///期货资金账户
	TThostFtdcAccountIDType	FutureAccount;
	///密码标志
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///密码
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///转账金额
	TThostFtdcMoneyType	TradeAmt;
	///客户手续费
	TThostFtdcMoneyType	CustFee;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///期货资金转银行请求响应
struct YangFtdcTransferFutureToBankRspField
{
	///响应代码
	TThostFtdcRetCodeType	RetCode;
	///响应信息
	TThostFtdcRetInfoType	RetInfo;
	///资金账户
	TThostFtdcAccountIDType	FutureAccount;
	///转帐金额
	TThostFtdcMoneyType	TradeAmt;
	///应收客户手续费
	TThostFtdcMoneyType	CustFee;
	///币种
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///查询银行资金请求，TradeCode=204002
struct YangFtdcTransferQryBankReqField
{
	///期货资金账户
	TThostFtdcAccountIDType	FutureAccount;
	///密码标志
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///密码
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///查询银行资金请求响应
struct YangFtdcTransferQryBankRspField
{
	///响应代码
	TThostFtdcRetCodeType	RetCode;
	///响应信息
	TThostFtdcRetInfoType	RetInfo;
	///资金账户
	TThostFtdcAccountIDType	FutureAccount;
	///银行余额
	TThostFtdcMoneyType	TradeAmt;
	///银行可用余额
	TThostFtdcMoneyType	UseAmt;
	///银行可取余额
	TThostFtdcMoneyType	FetchAmt;
	///币种
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///查询银行交易明细请求，TradeCode=204999
struct YangFtdcTransferQryDetailReqField
{
	///期货资金账户
	TThostFtdcAccountIDType	FutureAccount;
};

///查询银行交易明细请求响应
struct YangFtdcTransferQryDetailRspField
{
	///交易日期
	TThostFtdcDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///交易代码
	TThostFtdcTradeCodeType	TradeCode;
	///期货流水号
	TThostFtdcTradeSerialNoType	FutureSerial;
	///期货公司代码
	TThostFtdcFutureIDType	FutureID;
	///资金帐号
	TThostFtdcFutureAccountType	FutureAccount;
	///银行流水号
	TThostFtdcTradeSerialNoType	BankSerial;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分中心代码
	TThostFtdcBankBrchIDType	BankBrchID;
	///银行账号
	TThostFtdcBankAccountType	BankAccount;
	///证件号码
	TThostFtdcCertCodeType	CertCode;
	///货币代码
	TThostFtdcCurrencyCodeType	CurrencyCode;
	///发生金额
	TThostFtdcMoneyType	TxAmount;
	///有效标志
	TThostFtdcTransferValidFlagType	Flag;
};

///响应信息
struct YangFtdcRspInfoField
{
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///交易所
struct YangFtdcExchangeField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所名称
	TThostFtdcExchangeNameType	ExchangeName;
	///交易所属性
	TThostFtdcExchangePropertyType	ExchangeProperty;
};

///产品
struct YangFtdcProductField
{
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///产品名称
	TThostFtdcProductNameType	ProductName;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///产品类型
	TThostFtdcProductClassType	ProductClass;
	///合约数量乘数
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///最小变动价位
	TThostFtdcPriceType	PriceTick;
	///市价单最大下单量
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TThostFtdcVolumeType	MinMarketOrderVolume;
	///限价单最大下单量
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TThostFtdcVolumeType	MinLimitOrderVolume;
	///持仓类型
	TThostFtdcPositionTypeType	PositionType;
	///持仓日期类型
	TThostFtdcPositionDateTypeType	PositionDateType;
	///平仓处理类型
	TThostFtdcCloseDealTypeType	CloseDealType;
	///交易币种类型
	TThostFtdcCurrencyIDType	TradeCurrencyID;
	///质押资金可用范围
	TThostFtdcMortgageFundUseRangeType	MortgageFundUseRange;
	///交易所产品代码
	TThostFtdcInstrumentIDType	ExchangeProductID;
	///合约基础商品乘数
	TThostFtdcUnderlyingMultipleType	UnderlyingMultiple;
};

///合约
struct YangFtdcInstrumentField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约名称
	TThostFtdcInstrumentNameType	InstrumentName;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///产品类型
	TThostFtdcProductClassType	ProductClass;
	///交割年份
	TThostFtdcYearType	DeliveryYear;
	///交割月
	TThostFtdcMonthType	DeliveryMonth;
	///市价单最大下单量
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TThostFtdcVolumeType	MinMarketOrderVolume;
	///限价单最大下单量
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TThostFtdcVolumeType	MinLimitOrderVolume;
	///合约数量乘数
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///最小变动价位
	TThostFtdcPriceType	PriceTick;
	///创建日
	TThostFtdcDateType	CreateDate;
	///上市日
	TThostFtdcDateType	OpenDate;
	///到期日
	TThostFtdcDateType	ExpireDate;
	///开始交割日
	TThostFtdcDateType	StartDelivDate;
	///结束交割日
	TThostFtdcDateType	EndDelivDate;
	///合约生命周期状态
	TThostFtdcInstLifePhaseType	InstLifePhase;
	///当前是否交易
	TThostFtdcBoolType	IsTrading;
	///持仓类型
	TThostFtdcPositionTypeType	PositionType;
	///持仓日期类型
	TThostFtdcPositionDateTypeType	PositionDateType;
	///多头保证金率
	TThostFtdcRatioType	LongMarginRatio;
	///空头保证金率
	TThostFtdcRatioType	ShortMarginRatio;
	///是否使用大额单边保证金算法
	TThostFtdcMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
	///基础商品代码
	TThostFtdcInstrumentIDType	UnderlyingInstrID;
	///执行价
	TThostFtdcPriceType	StrikePrice;
	///期权类型
	TThostFtdcOptionsTypeType	OptionsType;
	///合约基础商品乘数
	TThostFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///组合类型
	TThostFtdcCombinationTypeType	CombinationType;
};

///经纪公司
struct YangFtdcBrokerField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///经纪公司简称
	TThostFtdcBrokerAbbrType	BrokerAbbr;
	///经纪公司名称
	TThostFtdcBrokerNameType	BrokerName;
	///是否活跃
	TThostFtdcBoolType	IsActive;
};

///交易所交易员
struct YangFtdcTraderField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///密码
	TThostFtdcPasswordType	Password;
	///安装数量
	TThostFtdcInstallCountType	InstallCount;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
};

///投资者
struct YangFtdcInvestorField
{
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者分组代码
	TThostFtdcInvestorIDType	InvestorGroupID;
	///投资者名称
	TThostFtdcPartyNameType	InvestorName;
	///证件类型
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///是否活跃
	TThostFtdcBoolType	IsActive;
	///联系电话
	TThostFtdcTelephoneType	Telephone;
	///通讯地址
	TThostFtdcAddressType	Address;
	///开户日期
	TThostFtdcDateType	OpenDate;
	///手机
	TThostFtdcMobileType	Mobile;
	///手续费率模板代码
	TThostFtdcInvestorIDType	CommModelID;
	///保证金率模板代码
	TThostFtdcInvestorIDType	MarginModelID;
};

///交易编码
struct YangFtdcTradingCodeField
{
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///是否活跃
	TThostFtdcBoolType	IsActive;
	///交易编码类型
	TThostFtdcClientIDTypeType	ClientIDType;
};

///会员编码和经纪公司编码对照表
struct YangFtdcPartBrokerField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///是否活跃
	TThostFtdcBoolType	IsActive;
};

///管理用户
struct YangFtdcSuperUserField
{
	///用户代码
	TThostFtdcUserIDType	UserID;
	///用户名称
	TThostFtdcUserNameType	UserName;
	///密码
	TThostFtdcPasswordType	Password;
	///是否活跃
	TThostFtdcBoolType	IsActive;
};

///管理用户功能权限
struct YangFtdcSuperUserFunctionField
{
	///用户代码
	TThostFtdcUserIDType	UserID;
	///功能代码
	TThostFtdcFunctionCodeType	FunctionCode;
};

///投资者组
struct YangFtdcInvestorGroupField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者分组代码
	TThostFtdcInvestorIDType	InvestorGroupID;
	///投资者分组名称
	TThostFtdcInvestorGroupNameType	InvestorGroupName;
};

///资金账户
struct YangFtdcTradingAccountField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///上次质押金额
	TThostFtdcMoneyType	PreMortgage;
	///上次信用额度
	TThostFtdcMoneyType	PreCredit;
	///上次存款额
	TThostFtdcMoneyType	PreDeposit;
	///上次结算准备金
	TThostFtdcMoneyType	PreBalance;
	///上次占用的保证金
	TThostFtdcMoneyType	PreMargin;
	///利息基数
	TThostFtdcMoneyType	InterestBase;
	///利息收入
	TThostFtdcMoneyType	Interest;
	///入金金额
	TThostFtdcMoneyType	Deposit;
	///出金金额
	TThostFtdcMoneyType	Withdraw;
	///冻结的保证金
	TThostFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TThostFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TThostFtdcMoneyType	FrozenCommission;
	///当前保证金总额
	TThostFtdcMoneyType	CurrMargin;
	///资金差额
	TThostFtdcMoneyType	CashIn;
	///手续费
	TThostFtdcMoneyType	Commission;
	///平仓盈亏
	TThostFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TThostFtdcMoneyType	PositionProfit;
	///期货结算准备金
	TThostFtdcMoneyType	Balance;
	///可用资金
	TThostFtdcMoneyType	Available;
	///可取资金
	TThostFtdcMoneyType	WithdrawQuota;
	///基本准备金
	TThostFtdcMoneyType	Reserve;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///信用额度
	TThostFtdcMoneyType	Credit;
	///质押金额
	TThostFtdcMoneyType	Mortgage;
	///交易所保证金
	TThostFtdcMoneyType	ExchangeMargin;
	///投资者交割保证金
	TThostFtdcMoneyType	DeliveryMargin;
	///交易所交割保证金
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
	///保底期货结算准备金
	TThostFtdcMoneyType	ReserveBalance;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///上次货币质入金额
	TThostFtdcMoneyType	PreFundMortgageIn;
	///上次货币质出金额
	TThostFtdcMoneyType	PreFundMortgageOut;
	///货币质入金额
	TThostFtdcMoneyType	FundMortgageIn;
	///货币质出金额
	TThostFtdcMoneyType	FundMortgageOut;
	///货币质押余额
	TThostFtdcMoneyType	FundMortgageAvailable;
	///可质押货币金额
	TThostFtdcMoneyType	MortgageableFund;
	///特殊产品占用保证金
	TThostFtdcMoneyType	SpecProductMargin;
	///特殊产品冻结保证金
	TThostFtdcMoneyType	SpecProductFrozenMargin;
	///特殊产品手续费
	TThostFtdcMoneyType	SpecProductCommission;
	///特殊产品冻结手续费
	TThostFtdcMoneyType	SpecProductFrozenCommission;
	///特殊产品持仓盈亏
	TThostFtdcMoneyType	SpecProductPositionProfit;
	///特殊产品平仓盈亏
	TThostFtdcMoneyType	SpecProductCloseProfit;
	///根据持仓盈亏算法计算的特殊产品持仓盈亏
	TThostFtdcMoneyType	SpecProductPositionProfitByAlg;
	///特殊产品交易所保证金
	TThostFtdcMoneyType	SpecProductExchangeMargin;
};

///投资者持仓
struct YangFtdcInvestorPositionField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///持仓多空方向
	TThostFtdcPosiDirectionType	PosiDirection;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///持仓日期
	TThostFtdcPositionDateType	PositionDate;
	///上日持仓
	TThostFtdcVolumeType	YdPosition;
	///今日持仓
	TThostFtdcVolumeType	Position;
	///多头冻结
	TThostFtdcVolumeType	LongFrozen;
	///空头冻结
	TThostFtdcVolumeType	ShortFrozen;
	///开仓冻结金额
	TThostFtdcMoneyType	LongFrozenAmount;
	///开仓冻结金额
	TThostFtdcMoneyType	ShortFrozenAmount;
	///开仓量
	TThostFtdcVolumeType	OpenVolume;
	///平仓量
	TThostFtdcVolumeType	CloseVolume;
	///开仓金额
	TThostFtdcMoneyType	OpenAmount;
	///平仓金额
	TThostFtdcMoneyType	CloseAmount;
	///持仓成本
	TThostFtdcMoneyType	PositionCost;
	///上次占用的保证金
	TThostFtdcMoneyType	PreMargin;
	///占用的保证金
	TThostFtdcMoneyType	UseMargin;
	///冻结的保证金
	TThostFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TThostFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TThostFtdcMoneyType	FrozenCommission;
	///资金差额
	TThostFtdcMoneyType	CashIn;
	///手续费
	TThostFtdcMoneyType	Commission;
	///平仓盈亏
	TThostFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TThostFtdcMoneyType	PositionProfit;
	///上次结算价
	TThostFtdcPriceType	PreSettlementPrice;
	///本次结算价
	TThostFtdcPriceType	SettlementPrice;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///开仓成本
	TThostFtdcMoneyType	OpenCost;
	///交易所保证金
	TThostFtdcMoneyType	ExchangeMargin;
	///组合成交形成的持仓
	TThostFtdcVolumeType	CombPosition;
	///组合多头冻结
	TThostFtdcVolumeType	CombLongFrozen;
	///组合空头冻结
	TThostFtdcVolumeType	CombShortFrozen;
	///逐日盯市平仓盈亏
	TThostFtdcMoneyType	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	TThostFtdcMoneyType	CloseProfitByTrade;
	///今日持仓
	TThostFtdcVolumeType	TodayPosition;
	///保证金率
	TThostFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TThostFtdcRatioType	MarginRateByVolume;
	///执行冻结
	TThostFtdcVolumeType	StrikeFrozen;
	///执行冻结金额
	TThostFtdcMoneyType	StrikeFrozenAmount;
	///放弃执行冻结
	TThostFtdcVolumeType	AbandonFrozen;
};

///合约保证金率
struct YangFtdcInstrumentMarginRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///多头保证金率
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///多头保证金费
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金费
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///是否相对交易所收取
	TThostFtdcBoolType	IsRelative;
};

///合约手续费率
struct YangFtdcInstrumentCommissionRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///开仓手续费率
	TThostFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TThostFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TThostFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TThostFtdcRatioType	CloseRatioByVolume;
	///平今手续费率
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///平今手续费
	TThostFtdcRatioType	CloseTodayRatioByVolume;
};

///深度行情
struct YangFtdcDepthMarketDataField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///最新价
	TThostFtdcPriceType	LastPrice;
	///上次结算价
	TThostFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TThostFtdcPriceType	PreClosePrice;
	///昨持仓量
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///今开盘
	TThostFtdcPriceType	OpenPrice;
	///最高价
	TThostFtdcPriceType	HighestPrice;
	///最低价
	TThostFtdcPriceType	LowestPrice;
	///数量
	TThostFtdcVolumeType	Volume;
	///成交金额
	TThostFtdcMoneyType	Turnover;
	///持仓量
	TThostFtdcLargeVolumeType	OpenInterest;
	///今收盘
	TThostFtdcPriceType	ClosePrice;
	///本次结算价
	TThostFtdcPriceType	SettlementPrice;
	///涨停板价
	TThostFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TThostFtdcPriceType	LowerLimitPrice;
	///昨虚实度
	TThostFtdcRatioType	PreDelta;
	///今虚实度
	TThostFtdcRatioType	CurrDelta;
	///最后修改时间
	TThostFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TThostFtdcMillisecType	UpdateMillisec;
	///申买价一
	TThostFtdcPriceType	BidPrice1;
	///申买量一
	TThostFtdcVolumeType	BidVolume1;
	///申卖价一
	TThostFtdcPriceType	AskPrice1;
	///申卖量一
	TThostFtdcVolumeType	AskVolume1;
	///申买价二
	TThostFtdcPriceType	BidPrice2;
	///申买量二
	TThostFtdcVolumeType	BidVolume2;
	///申卖价二
	TThostFtdcPriceType	AskPrice2;
	///申卖量二
	TThostFtdcVolumeType	AskVolume2;
	///申买价三
	TThostFtdcPriceType	BidPrice3;
	///申买量三
	TThostFtdcVolumeType	BidVolume3;
	///申卖价三
	TThostFtdcPriceType	AskPrice3;
	///申卖量三
	TThostFtdcVolumeType	AskVolume3;
	///申买价四
	TThostFtdcPriceType	BidPrice4;
	///申买量四
	TThostFtdcVolumeType	BidVolume4;
	///申卖价四
	TThostFtdcPriceType	AskPrice4;
	///申卖量四
	TThostFtdcVolumeType	AskVolume4;
	///申买价五
	TThostFtdcPriceType	BidPrice5;
	///申买量五
	TThostFtdcVolumeType	BidVolume5;
	///申卖价五
	TThostFtdcPriceType	AskPrice5;
	///申卖量五
	TThostFtdcVolumeType	AskVolume5;
	///当日均价
	TThostFtdcPriceType	AveragePrice;
	///业务日期
	TThostFtdcDateType	ActionDay;
};

///投资者合约交易权限
struct YangFtdcInstrumentTradingRightField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易权限
	TThostFtdcTradingRightType	TradingRight;
};

///经纪公司用户
struct YangFtdcBrokerUserField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///用户名称
	TThostFtdcUserNameType	UserName;
	///用户类型
	TThostFtdcUserTypeType	UserType;
	///是否活跃
	TThostFtdcBoolType	IsActive;
	///是否使用令牌
	TThostFtdcBoolType	IsUsingOTP;
};

///经纪公司用户口令
struct YangFtdcBrokerUserPasswordField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///密码
	TThostFtdcPasswordType	Password;
};

///经纪公司用户功能权限
struct YangFtdcBrokerUserFunctionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///经纪公司功能代码
	TThostFtdcBrokerFunctionCodeType	BrokerFunctionCode;
};

///交易所交易员报盘机
struct YangFtdcTraderOfferField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///交易所交易员连接状态
	TThostFtdcTraderConnectStatusType	TraderConnectStatus;
	///发出连接请求的日期
	TThostFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TThostFtdcTimeType	ConnectRequestTime;
	///上次报告日期
	TThostFtdcDateType	LastReportDate;
	///上次报告时间
	TThostFtdcTimeType	LastReportTime;
	///完成连接日期
	TThostFtdcDateType	ConnectDate;
	///完成连接时间
	TThostFtdcTimeType	ConnectTime;
	///启动日期
	TThostFtdcDateType	StartDate;
	///启动时间
	TThostFtdcTimeType	StartTime;
	///交易日
	TThostFtdcDateType	TradingDay;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///本席位最大成交编号
	TThostFtdcTradeIDType	MaxTradeID;
	///本席位最大报单备拷
	TThostFtdcReturnCodeType	MaxOrderMessageReference;
};

///投资者结算结果
struct YangFtdcSettlementInfoField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///消息正文
	TThostFtdcContentType	Content;
};

///合约保证金率调整
struct YangFtdcInstrumentMarginRateAdjustField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///多头保证金率
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///多头保证金费
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金费
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///是否相对交易所收取
	TThostFtdcBoolType	IsRelative;
};

///交易所保证金率
struct YangFtdcExchangeMarginRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///多头保证金率
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///多头保证金费
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金费
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
};

///交易所保证金率调整
struct YangFtdcExchangeMarginRateAdjustField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///跟随交易所投资者多头保证金率
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///跟随交易所投资者多头保证金费
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///跟随交易所投资者空头保证金率
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///跟随交易所投资者空头保证金费
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///交易所多头保证金率
	TThostFtdcRatioType	ExchLongMarginRatioByMoney;
	///交易所多头保证金费
	TThostFtdcMoneyType	ExchLongMarginRatioByVolume;
	///交易所空头保证金率
	TThostFtdcRatioType	ExchShortMarginRatioByMoney;
	///交易所空头保证金费
	TThostFtdcMoneyType	ExchShortMarginRatioByVolume;
	///不跟随交易所投资者多头保证金率
	TThostFtdcRatioType	NoLongMarginRatioByMoney;
	///不跟随交易所投资者多头保证金费
	TThostFtdcMoneyType	NoLongMarginRatioByVolume;
	///不跟随交易所投资者空头保证金率
	TThostFtdcRatioType	NoShortMarginRatioByMoney;
	///不跟随交易所投资者空头保证金费
	TThostFtdcMoneyType	NoShortMarginRatioByVolume;
};

///汇率
struct YangFtdcExchangeRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///源币种
	TThostFtdcCurrencyIDType	FromCurrencyID;
	///源币种单位数量
	TThostFtdcCurrencyUnitType	FromCurrencyUnit;
	///目标币种
	TThostFtdcCurrencyIDType	ToCurrencyID;
	///汇率
	TThostFtdcExchangeRateType	ExchangeRate;
};

///结算引用
struct YangFtdcSettlementRefField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
};

///当前时间
struct YangFtdcCurrentTimeField
{
	///当前日期
	TThostFtdcDateType	CurrDate;
	///当前时间
	TThostFtdcTimeType	CurrTime;
	///当前时间（毫秒）
	TThostFtdcMillisecType	CurrMillisec;
	///业务日期
	TThostFtdcDateType	ActionDay;
};

///通讯阶段
struct YangFtdcCommPhaseField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///通讯时段编号
	TThostFtdcCommPhaseNoType	CommPhaseNo;
	///系统编号
	TThostFtdcSystemIDType	SystemID;
};

///登录信息
struct YangFtdcLoginInfoField
{
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///登录日期
	TThostFtdcDateType	LoginDate;
	///登录时间
	TThostFtdcTimeType	LoginTime;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///系统名称
	TThostFtdcSystemNameType	SystemName;
	///密码
	TThostFtdcPasswordType	Password;
	///最大报单引用
	TThostFtdcOrderRefType	MaxOrderRef;
	///上期所时间
	TThostFtdcTimeType	SHFETime;
	///大商所时间
	TThostFtdcTimeType	DCETime;
	///郑商所时间
	TThostFtdcTimeType	CZCETime;
	///中金所时间
	TThostFtdcTimeType	FFEXTime;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
	///动态密码
	TThostFtdcPasswordType	OneTimePassword;
	///能源中心时间
	TThostFtdcTimeType	INETime;
	///查询时是否需要流控
	TThostFtdcBoolType	IsQryControl;
	///登录备注
	TThostFtdcLoginRemarkType	LoginRemark;
};

///登录信息
struct YangFtdcLogoutAllField
{
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///系统名称
	TThostFtdcSystemNameType	SystemName;
};

///前置状态
struct YangFtdcFrontStatusField
{
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///上次报告日期
	TThostFtdcDateType	LastReportDate;
	///上次报告时间
	TThostFtdcTimeType	LastReportTime;
	///是否活跃
	TThostFtdcBoolType	IsActive;
};

///用户口令变更
struct YangFtdcUserPasswordUpdateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///原来的口令
	TThostFtdcPasswordType	OldPassword;
	///新的口令
	TThostFtdcPasswordType	NewPassword;
};

///输入报单
struct YangFtdcInputOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///报单价格条件
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///组合开平标志
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TThostFtdcDateType	GTDDate;
	///成交量类型
	TThostFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TThostFtdcVolumeType	MinVolume;
	///触发条件
	TThostFtdcContingentConditionType	ContingentCondition;
	///止损价
	TThostFtdcPriceType	StopPrice;
	///强平原因
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TThostFtdcBoolType	IsAutoSuspend;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///用户强评标志
	TThostFtdcBoolType	UserForceClose;
	///互换单标志
	TThostFtdcBoolType	IsSwapOrder;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///交易编码
	TThostFtdcClientIDType	ClientID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///报单
struct YangFtdcOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///报单价格条件
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///组合开平标志
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TThostFtdcDateType	GTDDate;
	///成交量类型
	TThostFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TThostFtdcVolumeType	MinVolume;
	///触发条件
	TThostFtdcContingentConditionType	ContingentCondition;
	///止损价
	TThostFtdcPriceType	StopPrice;
	///强平原因
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TThostFtdcBoolType	IsAutoSuspend;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///报单提交状态
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///报单来源
	TThostFtdcOrderSourceType	OrderSource;
	///报单状态
	TThostFtdcOrderStatusType	OrderStatus;
	///报单类型
	TThostFtdcOrderTypeType	OrderType;
	///今成交数量
	TThostFtdcVolumeType	VolumeTraded;
	///剩余数量
	TThostFtdcVolumeType	VolumeTotal;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///委托时间
	TThostFtdcTimeType	InsertTime;
	///激活时间
	TThostFtdcTimeType	ActiveTime;
	///挂起时间
	TThostFtdcTimeType	SuspendTime;
	///最后修改时间
	TThostFtdcTimeType	UpdateTime;
	///撤销时间
	TThostFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TThostFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///用户强评标志
	TThostFtdcBoolType	UserForceClose;
	///操作用户代码
	TThostFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///相关报单
	TThostFtdcOrderSysIDType	RelativeOrderSysID;
	///郑商所成交数量
	TThostFtdcVolumeType	ZCETotalTradedVolume;
	///互换单标志
	TThostFtdcBoolType	IsSwapOrder;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所报单
struct YangFtdcExchangeOrderField
{
	///报单价格条件
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///组合开平标志
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TThostFtdcDateType	GTDDate;
	///成交量类型
	TThostFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TThostFtdcVolumeType	MinVolume;
	///触发条件
	TThostFtdcContingentConditionType	ContingentCondition;
	///止损价
	TThostFtdcPriceType	StopPrice;
	///强平原因
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TThostFtdcBoolType	IsAutoSuspend;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///报单提交状态
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///报单来源
	TThostFtdcOrderSourceType	OrderSource;
	///报单状态
	TThostFtdcOrderStatusType	OrderStatus;
	///报单类型
	TThostFtdcOrderTypeType	OrderType;
	///今成交数量
	TThostFtdcVolumeType	VolumeTraded;
	///剩余数量
	TThostFtdcVolumeType	VolumeTotal;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///委托时间
	TThostFtdcTimeType	InsertTime;
	///激活时间
	TThostFtdcTimeType	ActiveTime;
	///挂起时间
	TThostFtdcTimeType	SuspendTime;
	///最后修改时间
	TThostFtdcTimeType	UpdateTime;
	///撤销时间
	TThostFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TThostFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所报单插入失败
struct YangFtdcExchangeOrderInsertErrorField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///输入报单操作
struct YangFtdcInputOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TThostFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量变化
	TThostFtdcVolumeType	VolumeChange;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///报单操作
struct YangFtdcOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TThostFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量变化
	TThostFtdcVolumeType	VolumeChange;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所报单操作
struct YangFtdcExchangeOrderActionField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量变化
	TThostFtdcVolumeType	VolumeChange;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所报单操作失败
struct YangFtdcExchangeOrderActionErrorField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///交易所成交
struct YangFtdcExchangeTradeField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///成交编号
	TThostFtdcTradeIDType	TradeID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///交易角色
	TThostFtdcTradingRoleType	TradingRole;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///价格
	TThostFtdcPriceType	Price;
	///数量
	TThostFtdcVolumeType	Volume;
	///成交时期
	TThostFtdcDateType	TradeDate;
	///成交时间
	TThostFtdcTimeType	TradeTime;
	///成交类型
	TThostFtdcTradeTypeType	TradeType;
	///成交价来源
	TThostFtdcPriceSourceType	PriceSource;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///成交来源
	TThostFtdcTradeSourceType	TradeSource;
};

///成交
struct YangFtdcTradeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///成交编号
	TThostFtdcTradeIDType	TradeID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///交易角色
	TThostFtdcTradingRoleType	TradingRole;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///价格
	TThostFtdcPriceType	Price;
	///数量
	TThostFtdcVolumeType	Volume;
	///成交时期
	TThostFtdcDateType	TradeDate;
	///成交时间
	TThostFtdcTimeType	TradeTime;
	///成交类型
	TThostFtdcTradeTypeType	TradeType;
	///成交价来源
	TThostFtdcPriceSourceType	PriceSource;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///经纪公司报单编号
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///成交来源
	TThostFtdcTradeSourceType	TradeSource;
};

///用户会话
struct YangFtdcUserSessionField
{
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///登录日期
	TThostFtdcDateType	LoginDate;
	///登录时间
	TThostFtdcTimeType	LoginTime;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
	///登录备注
	TThostFtdcLoginRemarkType	LoginRemark;
};

///查询最大报单数量
struct YangFtdcQueryMaxOrderVolumeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///最大允许报单数量
	TThostFtdcVolumeType	MaxVolume;
};

///投资者结算结果确认信息
struct YangFtdcSettlementInfoConfirmField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///确认日期
	TThostFtdcDateType	ConfirmDate;
	///确认时间
	TThostFtdcTimeType	ConfirmTime;
};

///出入金同步
struct YangFtdcSyncDepositField
{
	///出入金流水号
	TThostFtdcDepositSeqNoType	DepositSeqNo;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///入金金额
	TThostFtdcMoneyType	Deposit;
	///是否强制进行
	TThostFtdcBoolType	IsForce;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///货币质押同步
struct YangFtdcSyncFundMortgageField
{
	///货币质押流水号
	TThostFtdcDepositSeqNoType	MortgageSeqNo;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///源币种
	TThostFtdcCurrencyIDType	FromCurrencyID;
	///质押金额
	TThostFtdcMoneyType	MortgageAmount;
	///目标币种
	TThostFtdcCurrencyIDType	ToCurrencyID;
};

///经纪公司同步
struct YangFtdcBrokerSyncField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
};

///正在同步中的投资者
struct YangFtdcSyncingInvestorField
{
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者分组代码
	TThostFtdcInvestorIDType	InvestorGroupID;
	///投资者名称
	TThostFtdcPartyNameType	InvestorName;
	///证件类型
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///是否活跃
	TThostFtdcBoolType	IsActive;
	///联系电话
	TThostFtdcTelephoneType	Telephone;
	///通讯地址
	TThostFtdcAddressType	Address;
	///开户日期
	TThostFtdcDateType	OpenDate;
	///手机
	TThostFtdcMobileType	Mobile;
	///手续费率模板代码
	TThostFtdcInvestorIDType	CommModelID;
	///保证金率模板代码
	TThostFtdcInvestorIDType	MarginModelID;
};

///正在同步中的交易代码
struct YangFtdcSyncingTradingCodeField
{
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///是否活跃
	TThostFtdcBoolType	IsActive;
	///交易编码类型
	TThostFtdcClientIDTypeType	ClientIDType;
};

///正在同步中的投资者分组
struct YangFtdcSyncingInvestorGroupField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者分组代码
	TThostFtdcInvestorIDType	InvestorGroupID;
	///投资者分组名称
	TThostFtdcInvestorGroupNameType	InvestorGroupName;
};

///正在同步中的交易账号
struct YangFtdcSyncingTradingAccountField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///上次质押金额
	TThostFtdcMoneyType	PreMortgage;
	///上次信用额度
	TThostFtdcMoneyType	PreCredit;
	///上次存款额
	TThostFtdcMoneyType	PreDeposit;
	///上次结算准备金
	TThostFtdcMoneyType	PreBalance;
	///上次占用的保证金
	TThostFtdcMoneyType	PreMargin;
	///利息基数
	TThostFtdcMoneyType	InterestBase;
	///利息收入
	TThostFtdcMoneyType	Interest;
	///入金金额
	TThostFtdcMoneyType	Deposit;
	///出金金额
	TThostFtdcMoneyType	Withdraw;
	///冻结的保证金
	TThostFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TThostFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TThostFtdcMoneyType	FrozenCommission;
	///当前保证金总额
	TThostFtdcMoneyType	CurrMargin;
	///资金差额
	TThostFtdcMoneyType	CashIn;
	///手续费
	TThostFtdcMoneyType	Commission;
	///平仓盈亏
	TThostFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TThostFtdcMoneyType	PositionProfit;
	///期货结算准备金
	TThostFtdcMoneyType	Balance;
	///可用资金
	TThostFtdcMoneyType	Available;
	///可取资金
	TThostFtdcMoneyType	WithdrawQuota;
	///基本准备金
	TThostFtdcMoneyType	Reserve;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///信用额度
	TThostFtdcMoneyType	Credit;
	///质押金额
	TThostFtdcMoneyType	Mortgage;
	///交易所保证金
	TThostFtdcMoneyType	ExchangeMargin;
	///投资者交割保证金
	TThostFtdcMoneyType	DeliveryMargin;
	///交易所交割保证金
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
	///保底期货结算准备金
	TThostFtdcMoneyType	ReserveBalance;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///上次货币质入金额
	TThostFtdcMoneyType	PreFundMortgageIn;
	///上次货币质出金额
	TThostFtdcMoneyType	PreFundMortgageOut;
	///货币质入金额
	TThostFtdcMoneyType	FundMortgageIn;
	///货币质出金额
	TThostFtdcMoneyType	FundMortgageOut;
	///货币质押余额
	TThostFtdcMoneyType	FundMortgageAvailable;
	///可质押货币金额
	TThostFtdcMoneyType	MortgageableFund;
	///特殊产品占用保证金
	TThostFtdcMoneyType	SpecProductMargin;
	///特殊产品冻结保证金
	TThostFtdcMoneyType	SpecProductFrozenMargin;
	///特殊产品手续费
	TThostFtdcMoneyType	SpecProductCommission;
	///特殊产品冻结手续费
	TThostFtdcMoneyType	SpecProductFrozenCommission;
	///特殊产品持仓盈亏
	TThostFtdcMoneyType	SpecProductPositionProfit;
	///特殊产品平仓盈亏
	TThostFtdcMoneyType	SpecProductCloseProfit;
	///根据持仓盈亏算法计算的特殊产品持仓盈亏
	TThostFtdcMoneyType	SpecProductPositionProfitByAlg;
	///特殊产品交易所保证金
	TThostFtdcMoneyType	SpecProductExchangeMargin;
};

///正在同步中的投资者持仓
struct YangFtdcSyncingInvestorPositionField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///持仓多空方向
	TThostFtdcPosiDirectionType	PosiDirection;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///持仓日期
	TThostFtdcPositionDateType	PositionDate;
	///上日持仓
	TThostFtdcVolumeType	YdPosition;
	///今日持仓
	TThostFtdcVolumeType	Position;
	///多头冻结
	TThostFtdcVolumeType	LongFrozen;
	///空头冻结
	TThostFtdcVolumeType	ShortFrozen;
	///开仓冻结金额
	TThostFtdcMoneyType	LongFrozenAmount;
	///开仓冻结金额
	TThostFtdcMoneyType	ShortFrozenAmount;
	///开仓量
	TThostFtdcVolumeType	OpenVolume;
	///平仓量
	TThostFtdcVolumeType	CloseVolume;
	///开仓金额
	TThostFtdcMoneyType	OpenAmount;
	///平仓金额
	TThostFtdcMoneyType	CloseAmount;
	///持仓成本
	TThostFtdcMoneyType	PositionCost;
	///上次占用的保证金
	TThostFtdcMoneyType	PreMargin;
	///占用的保证金
	TThostFtdcMoneyType	UseMargin;
	///冻结的保证金
	TThostFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TThostFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TThostFtdcMoneyType	FrozenCommission;
	///资金差额
	TThostFtdcMoneyType	CashIn;
	///手续费
	TThostFtdcMoneyType	Commission;
	///平仓盈亏
	TThostFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TThostFtdcMoneyType	PositionProfit;
	///上次结算价
	TThostFtdcPriceType	PreSettlementPrice;
	///本次结算价
	TThostFtdcPriceType	SettlementPrice;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///开仓成本
	TThostFtdcMoneyType	OpenCost;
	///交易所保证金
	TThostFtdcMoneyType	ExchangeMargin;
	///组合成交形成的持仓
	TThostFtdcVolumeType	CombPosition;
	///组合多头冻结
	TThostFtdcVolumeType	CombLongFrozen;
	///组合空头冻结
	TThostFtdcVolumeType	CombShortFrozen;
	///逐日盯市平仓盈亏
	TThostFtdcMoneyType	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	TThostFtdcMoneyType	CloseProfitByTrade;
	///今日持仓
	TThostFtdcVolumeType	TodayPosition;
	///保证金率
	TThostFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TThostFtdcRatioType	MarginRateByVolume;
	///执行冻结
	TThostFtdcVolumeType	StrikeFrozen;
	///执行冻结金额
	TThostFtdcMoneyType	StrikeFrozenAmount;
	///放弃执行冻结
	TThostFtdcVolumeType	AbandonFrozen;
};

///正在同步中的合约保证金率
struct YangFtdcSyncingInstrumentMarginRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///多头保证金率
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///多头保证金费
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金费
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///是否相对交易所收取
	TThostFtdcBoolType	IsRelative;
};

///正在同步中的合约手续费率
struct YangFtdcSyncingInstrumentCommissionRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///开仓手续费率
	TThostFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TThostFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TThostFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TThostFtdcRatioType	CloseRatioByVolume;
	///平今手续费率
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///平今手续费
	TThostFtdcRatioType	CloseTodayRatioByVolume;
};

///正在同步中的合约交易权限
struct YangFtdcSyncingInstrumentTradingRightField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易权限
	TThostFtdcTradingRightType	TradingRight;
};

///查询报单
struct YangFtdcQryOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///开始时间
	TThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TThostFtdcTimeType	InsertTimeEnd;
};

///查询成交
struct YangFtdcQryTradeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///成交编号
	TThostFtdcTradeIDType	TradeID;
	///开始时间
	TThostFtdcTimeType	TradeTimeStart;
	///结束时间
	TThostFtdcTimeType	TradeTimeEnd;
};

///查询投资者持仓
struct YangFtdcQryInvestorPositionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///查询资金账户
struct YangFtdcQryTradingAccountField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///查询投资者
struct YangFtdcQryInvestorField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///查询交易编码
struct YangFtdcQryTradingCodeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///交易编码类型
	TThostFtdcClientIDTypeType	ClientIDType;
};

///查询投资者组
struct YangFtdcQryInvestorGroupField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
};

///查询合约保证金率
struct YangFtdcQryInstrumentMarginRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
};

///查询手续费率
struct YangFtdcQryInstrumentCommissionRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///查询合约交易权限
struct YangFtdcQryInstrumentTradingRightField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///查询经纪公司
struct YangFtdcQryBrokerField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
};

///查询交易员
struct YangFtdcQryTraderField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///查询管理用户功能权限
struct YangFtdcQrySuperUserFunctionField
{
	///用户代码
	TThostFtdcUserIDType	UserID;
};

///查询用户会话
struct YangFtdcQryUserSessionField
{
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
};

///查询经纪公司会员代码
struct YangFtdcQryPartBrokerField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
};

///查询前置状态
struct YangFtdcQryFrontStatusField
{
	///前置编号
	TThostFtdcFrontIDType	FrontID;
};

///查询交易所报单
struct YangFtdcQryExchangeOrderField
{
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///查询报单操作
struct YangFtdcQryOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///查询交易所报单操作
struct YangFtdcQryExchangeOrderActionField
{
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///查询管理用户
struct YangFtdcQrySuperUserField
{
	///用户代码
	TThostFtdcUserIDType	UserID;
};

///查询交易所
struct YangFtdcQryExchangeField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///查询产品
struct YangFtdcQryProductField
{
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///产品类型
	TThostFtdcProductClassType	ProductClass;
};

///查询合约
struct YangFtdcQryInstrumentField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
};

///查询行情
struct YangFtdcQryDepthMarketDataField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///查询经纪公司用户
struct YangFtdcQryBrokerUserField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
};

///查询经纪公司用户权限
struct YangFtdcQryBrokerUserFunctionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
};

///查询交易员报盘机
struct YangFtdcQryTraderOfferField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///查询出入金流水
struct YangFtdcQrySyncDepositField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///出入金流水号
	TThostFtdcDepositSeqNoType	DepositSeqNo;
};

///查询投资者结算结果
struct YangFtdcQrySettlementInfoField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易日
	TThostFtdcDateType	TradingDay;
};

///查询交易所保证金率
struct YangFtdcQryExchangeMarginRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
};

///查询交易所调整保证金率
struct YangFtdcQryExchangeMarginRateAdjustField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
};

///查询汇率
struct YangFtdcQryExchangeRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///源币种
	TThostFtdcCurrencyIDType	FromCurrencyID;
	///目标币种
	TThostFtdcCurrencyIDType	ToCurrencyID;
};

///查询货币质押流水
struct YangFtdcQrySyncFundMortgageField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///货币质押流水号
	TThostFtdcDepositSeqNoType	MortgageSeqNo;
};

///查询报单
struct YangFtdcQryHisOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///开始时间
	TThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TThostFtdcTimeType	InsertTimeEnd;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
};

///当前期权合约最小保证金
struct YangFtdcOptionInstrMiniMarginField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///单位（手）期权合约最小保证金
	TThostFtdcMoneyType	MinMargin;
	///取值方式
	TThostFtdcValueMethodType	ValueMethod;
	///是否跟随交易所收取
	TThostFtdcBoolType	IsRelative;
};

///当前期权合约保证金调整系数
struct YangFtdcOptionInstrMarginAdjustField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///投机空头保证金调整系数
	TThostFtdcRatioType	SShortMarginRatioByMoney;
	///投机空头保证金调整系数
	TThostFtdcMoneyType	SShortMarginRatioByVolume;
	///保值空头保证金调整系数
	TThostFtdcRatioType	HShortMarginRatioByMoney;
	///保值空头保证金调整系数
	TThostFtdcMoneyType	HShortMarginRatioByVolume;
	///套利空头保证金调整系数
	TThostFtdcRatioType	AShortMarginRatioByMoney;
	///套利空头保证金调整系数
	TThostFtdcMoneyType	AShortMarginRatioByVolume;
	///是否跟随交易所收取
	TThostFtdcBoolType	IsRelative;
	///做市商空头保证金调整系数
	TThostFtdcRatioType	MShortMarginRatioByMoney;
	///做市商空头保证金调整系数
	TThostFtdcMoneyType	MShortMarginRatioByVolume;
};

///当前期权合约手续费的详细内容
struct YangFtdcOptionInstrCommRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///开仓手续费率
	TThostFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TThostFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TThostFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TThostFtdcRatioType	CloseRatioByVolume;
	///平今手续费率
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///平今手续费
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///执行手续费率
	TThostFtdcRatioType	StrikeRatioByMoney;
	///执行手续费
	TThostFtdcRatioType	StrikeRatioByVolume;
};

///期权交易成本
struct YangFtdcOptionInstrTradeCostField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///期权合约保证金不变部分
	TThostFtdcMoneyType	FixedMargin;
	///期权合约最小保证金
	TThostFtdcMoneyType	MiniMargin;
	///期权合约权利金
	TThostFtdcMoneyType	Royalty;
	///交易所期权合约保证金不变部分
	TThostFtdcMoneyType	ExchFixedMargin;
	///交易所期权合约最小保证金
	TThostFtdcMoneyType	ExchMiniMargin;
};

///期权交易成本查询
struct YangFtdcQryOptionInstrTradeCostField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///期权合约报价
	TThostFtdcPriceType	InputPrice;
	///标的价格,填0则用昨结算价
	TThostFtdcPriceType	UnderlyingPrice;
};

///期权手续费率查询
struct YangFtdcQryOptionInstrCommRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///股指现货指数
struct YangFtdcIndexPriceField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///指数现货收盘价
	TThostFtdcPriceType	ClosePrice;
};

///输入的执行宣告
struct YangFtdcInputExecOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///数量
	TThostFtdcVolumeType	Volume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TThostFtdcActionTypeType	ActionType;
	///保留头寸申请的持仓方向
	TThostFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///交易编码
	TThostFtdcClientIDType	ClientID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///输入执行宣告操作
struct YangFtdcInputExecOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///执行宣告操作引用
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///执行宣告
struct YangFtdcExecOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///数量
	TThostFtdcVolumeType	Volume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TThostFtdcActionTypeType	ActionType;
	///保留头寸申请的持仓方向
	TThostFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	///本地执行宣告编号
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///执行宣告提交状态
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///执行宣告编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///插入时间
	TThostFtdcTimeType	InsertTime;
	///撤销时间
	TThostFtdcTimeType	CancelTime;
	///执行结果
	TThostFtdcExecResultType	ExecResult;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TThostFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TThostFtdcSequenceNoType	BrokerExecOrderSeq;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///执行宣告操作
struct YangFtdcExecOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///执行宣告操作引用
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地执行宣告编号
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///执行类型
	TThostFtdcActionTypeType	ActionType;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///执行宣告查询
struct YangFtdcQryExecOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///执行宣告编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///开始时间
	TThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TThostFtdcTimeType	InsertTimeEnd;
};

///交易所执行宣告信息
struct YangFtdcExchangeExecOrderField
{
	///数量
	TThostFtdcVolumeType	Volume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TThostFtdcActionTypeType	ActionType;
	///保留头寸申请的持仓方向
	TThostFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	///本地执行宣告编号
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///执行宣告提交状态
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///执行宣告编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///插入时间
	TThostFtdcTimeType	InsertTime;
	///撤销时间
	TThostFtdcTimeType	CancelTime;
	///执行结果
	TThostFtdcExecResultType	ExecResult;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所执行宣告查询
struct YangFtdcQryExchangeExecOrderField
{
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///执行宣告操作查询
struct YangFtdcQryExecOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///交易所执行宣告操作
struct YangFtdcExchangeExecOrderActionField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地执行宣告编号
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///执行类型
	TThostFtdcActionTypeType	ActionType;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所执行宣告操作查询
struct YangFtdcQryExchangeExecOrderActionField
{
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///错误执行宣告
struct YangFtdcErrExecOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///数量
	TThostFtdcVolumeType	Volume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TThostFtdcActionTypeType	ActionType;
	///保留头寸申请的持仓方向
	TThostFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///交易编码
	TThostFtdcClientIDType	ClientID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///查询错误执行宣告
struct YangFtdcQryErrExecOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///错误执行宣告操作
struct YangFtdcErrExecOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///执行宣告操作引用
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	///执行宣告引用
	TThostFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///查询错误执行宣告操作
struct YangFtdcQryErrExecOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///投资者期权合约交易权限
struct YangFtdcOptionInstrTradingRightField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///交易权限
	TThostFtdcTradingRightType	TradingRight;
};

///查询期权合约交易权限
struct YangFtdcQryOptionInstrTradingRightField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
};

///输入的询价
struct YangFtdcInputForQuoteField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///询价引用
	TThostFtdcOrderRefType	ForQuoteRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///询价
struct YangFtdcForQuoteField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///询价引用
	TThostFtdcOrderRefType	ForQuoteRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///本地询价编号
	TThostFtdcOrderLocalIDType	ForQuoteLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///插入时间
	TThostFtdcTimeType	InsertTime;
	///询价状态
	TThostFtdcForQuoteStatusType	ForQuoteStatus;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TThostFtdcUserIDType	ActiveUserID;
	///经纪公司询价编号
	TThostFtdcSequenceNoType	BrokerForQutoSeq;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///询价查询
struct YangFtdcQryForQuoteField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///开始时间
	TThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TThostFtdcTimeType	InsertTimeEnd;
};

///交易所询价信息
struct YangFtdcExchangeForQuoteField
{
	///本地询价编号
	TThostFtdcOrderLocalIDType	ForQuoteLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///插入时间
	TThostFtdcTimeType	InsertTime;
	///询价状态
	TThostFtdcForQuoteStatusType	ForQuoteStatus;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所询价查询
struct YangFtdcQryExchangeForQuoteField
{
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///输入的报价
struct YangFtdcInputQuoteField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///报价引用
	TThostFtdcOrderRefType	QuoteRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///卖价格
	TThostFtdcPriceType	AskPrice;
	///买价格
	TThostFtdcPriceType	BidPrice;
	///卖数量
	TThostFtdcVolumeType	AskVolume;
	///买数量
	TThostFtdcVolumeType	BidVolume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///卖开平标志
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	///买开平标志
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	///卖投机套保标志
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	///买投机套保标志
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	///衍生卖报单引用
	TThostFtdcOrderRefType	AskOrderRef;
	///衍生买报单引用
	TThostFtdcOrderRefType	BidOrderRef;
	///应价编号
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///交易编码
	TThostFtdcClientIDType	ClientID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///输入报价操作
struct YangFtdcInputQuoteActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///报价操作引用
	TThostFtdcOrderActionRefType	QuoteActionRef;
	///报价引用
	TThostFtdcOrderRefType	QuoteRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报价操作编号
	TThostFtdcOrderSysIDType	QuoteSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///交易编码
	TThostFtdcClientIDType	ClientID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///报价
struct YangFtdcQuoteField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///报价引用
	TThostFtdcOrderRefType	QuoteRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///卖价格
	TThostFtdcPriceType	AskPrice;
	///买价格
	TThostFtdcPriceType	BidPrice;
	///卖数量
	TThostFtdcVolumeType	AskVolume;
	///买数量
	TThostFtdcVolumeType	BidVolume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///卖开平标志
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	///买开平标志
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	///卖投机套保标志
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	///买投机套保标志
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	///本地报价编号
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///报价提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///报价提交状态
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///报价编号
	TThostFtdcOrderSysIDType	QuoteSysID;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///插入时间
	TThostFtdcTimeType	InsertTime;
	///撤销时间
	TThostFtdcTimeType	CancelTime;
	///报价状态
	TThostFtdcOrderStatusType	QuoteStatus;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///卖方报单编号
	TThostFtdcOrderSysIDType	AskOrderSysID;
	///买方报单编号
	TThostFtdcOrderSysIDType	BidOrderSysID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TThostFtdcUserIDType	ActiveUserID;
	///经纪公司报价编号
	TThostFtdcSequenceNoType	BrokerQuoteSeq;
	///衍生卖报单引用
	TThostFtdcOrderRefType	AskOrderRef;
	///衍生买报单引用
	TThostFtdcOrderRefType	BidOrderRef;
	///应价编号
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///报价操作
struct YangFtdcQuoteActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///报价操作引用
	TThostFtdcOrderActionRefType	QuoteActionRef;
	///报价引用
	TThostFtdcOrderRefType	QuoteRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报价操作编号
	TThostFtdcOrderSysIDType	QuoteSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报价编号
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///报价查询
struct YangFtdcQryQuoteField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报价编号
	TThostFtdcOrderSysIDType	QuoteSysID;
	///开始时间
	TThostFtdcTimeType	InsertTimeStart;
	///结束时间
	TThostFtdcTimeType	InsertTimeEnd;
};

///交易所报价信息
struct YangFtdcExchangeQuoteField
{
	///卖价格
	TThostFtdcPriceType	AskPrice;
	///买价格
	TThostFtdcPriceType	BidPrice;
	///卖数量
	TThostFtdcVolumeType	AskVolume;
	///买数量
	TThostFtdcVolumeType	BidVolume;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///卖开平标志
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	///买开平标志
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	///卖投机套保标志
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	///买投机套保标志
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	///本地报价编号
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///报价提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///报价提交状态
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///报价编号
	TThostFtdcOrderSysIDType	QuoteSysID;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///插入时间
	TThostFtdcTimeType	InsertTime;
	///撤销时间
	TThostFtdcTimeType	CancelTime;
	///报价状态
	TThostFtdcOrderStatusType	QuoteStatus;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///卖方报单编号
	TThostFtdcOrderSysIDType	AskOrderSysID;
	///买方报单编号
	TThostFtdcOrderSysIDType	BidOrderSysID;
	///应价编号
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所报价查询
struct YangFtdcQryExchangeQuoteField
{
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///报价操作查询
struct YangFtdcQryQuoteActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///交易所报价操作
struct YangFtdcExchangeQuoteActionField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报价操作编号
	TThostFtdcOrderSysIDType	QuoteSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报价编号
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所报价操作查询
struct YangFtdcQryExchangeQuoteActionField
{
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///期权合约delta值
struct YangFtdcOptionInstrDeltaField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///Delta值
	TThostFtdcRatioType	Delta;
};

///发给做市商的询价请求
struct YangFtdcForQuoteRspField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///询价编号
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	///询价时间
	TThostFtdcTimeType	ForQuoteTime;
	///业务日期
	TThostFtdcDateType	ActionDay;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///当前期权合约执行偏移值的详细内容
struct YangFtdcStrikeOffsetField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///执行偏移值
	TThostFtdcMoneyType	Offset;
	///执行偏移类型
	TThostFtdcStrikeOffsetTypeType	OffsetType;
};

///期权执行偏移值查询
struct YangFtdcQryStrikeOffsetField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///输入批量报单操作
struct YangFtdcInputBatchOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TThostFtdcOrderActionRefType	OrderActionRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///批量报单操作
struct YangFtdcBatchOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TThostFtdcOrderActionRefType	OrderActionRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所批量报单操作
struct YangFtdcExchangeBatchOrderActionField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///查询批量报单操作
struct YangFtdcQryBatchOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///组合合约安全系数
struct YangFtdcCombInstrumentGuardField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///
	TThostFtdcRatioType	GuarantRatio;
};

///组合合约安全系数查询
struct YangFtdcQryCombInstrumentGuardField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///输入的申请组合
struct YangFtdcInputCombActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///组合引用
	TThostFtdcOrderRefType	CombActionRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///数量
	TThostFtdcVolumeType	Volume;
	///组合指令方向
	TThostFtdcCombDirectionType	CombDirection;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///申请组合
struct YangFtdcCombActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///组合引用
	TThostFtdcOrderRefType	CombActionRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///数量
	TThostFtdcVolumeType	Volume;
	///组合指令方向
	TThostFtdcCombDirectionType	CombDirection;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///本地申请组合编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///组合状态
	TThostFtdcOrderActionStatusType	ActionStatus;
	///报单提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///申请组合查询
struct YangFtdcQryCombActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///交易所申请组合信息
struct YangFtdcExchangeCombActionField
{
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///数量
	TThostFtdcVolumeType	Volume;
	///组合指令方向
	TThostFtdcCombDirectionType	CombDirection;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///本地申请组合编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///组合状态
	TThostFtdcOrderActionStatusType	ActionStatus;
	///报单提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///交易所申请组合查询
struct YangFtdcQryExchangeCombActionField
{
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///产品报价汇率
struct YangFtdcProductExchRateField
{
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///报价币种类型
	TThostFtdcCurrencyIDType	QuoteCurrencyID;
	///汇率
	TThostFtdcExchangeRateType	ExchangeRate;
};

///产品报价汇率查询
struct YangFtdcQryProductExchRateField
{
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
};

///查询询价价差参数
struct YangFtdcQryForQuoteParamField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///询价价差参数
struct YangFtdcForQuoteParamField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///最新价
	TThostFtdcPriceType	LastPrice;
	///价差
	TThostFtdcPriceType	PriceInterval;
};

///当前做市商期权合约手续费的详细内容
struct YangFtdcMMOptionInstrCommRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///开仓手续费率
	TThostFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TThostFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TThostFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TThostFtdcRatioType	CloseRatioByVolume;
	///平今手续费率
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///平今手续费
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///执行手续费率
	TThostFtdcRatioType	StrikeRatioByMoney;
	///执行手续费
	TThostFtdcRatioType	StrikeRatioByVolume;
};

///做市商期权手续费率查询
struct YangFtdcQryMMOptionInstrCommRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///做市商合约手续费率
struct YangFtdcMMInstrumentCommissionRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///开仓手续费率
	TThostFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TThostFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TThostFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TThostFtdcRatioType	CloseRatioByVolume;
	///平今手续费率
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///平今手续费
	TThostFtdcRatioType	CloseTodayRatioByVolume;
};

///查询做市商合约手续费率
struct YangFtdcQryMMInstrumentCommissionRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///当前报单手续费的详细内容
struct YangFtdcInstrumentOrderCommRateField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///报单手续费
	TThostFtdcRatioType	OrderCommByVolume;
	///撤单手续费
	TThostFtdcRatioType	OrderActionCommByVolume;
};

///报单手续费率查询
struct YangFtdcQryInstrumentOrderCommRateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///市场行情
struct YangFtdcMarketDataField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///最新价
	TThostFtdcPriceType	LastPrice;
	///上次结算价
	TThostFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TThostFtdcPriceType	PreClosePrice;
	///昨持仓量
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///今开盘
	TThostFtdcPriceType	OpenPrice;
	///最高价
	TThostFtdcPriceType	HighestPrice;
	///最低价
	TThostFtdcPriceType	LowestPrice;
	///数量
	TThostFtdcVolumeType	Volume;
	///成交金额
	TThostFtdcMoneyType	Turnover;
	///持仓量
	TThostFtdcLargeVolumeType	OpenInterest;
	///今收盘
	TThostFtdcPriceType	ClosePrice;
	///本次结算价
	TThostFtdcPriceType	SettlementPrice;
	///涨停板价
	TThostFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TThostFtdcPriceType	LowerLimitPrice;
	///昨虚实度
	TThostFtdcRatioType	PreDelta;
	///今虚实度
	TThostFtdcRatioType	CurrDelta;
	///最后修改时间
	TThostFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TThostFtdcMillisecType	UpdateMillisec;
	///业务日期
	TThostFtdcDateType	ActionDay;
};

///行情基础属性
struct YangFtdcMarketDataBaseField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///上次结算价
	TThostFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TThostFtdcPriceType	PreClosePrice;
	///昨持仓量
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///昨虚实度
	TThostFtdcRatioType	PreDelta;
};

///行情静态属性
struct YangFtdcMarketDataStaticField
{
	///今开盘
	TThostFtdcPriceType	OpenPrice;
	///最高价
	TThostFtdcPriceType	HighestPrice;
	///最低价
	TThostFtdcPriceType	LowestPrice;
	///今收盘
	TThostFtdcPriceType	ClosePrice;
	///涨停板价
	TThostFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TThostFtdcPriceType	LowerLimitPrice;
	///本次结算价
	TThostFtdcPriceType	SettlementPrice;
	///今虚实度
	TThostFtdcRatioType	CurrDelta;
};

///行情最新成交属性
struct YangFtdcMarketDataLastMatchField
{
	///最新价
	TThostFtdcPriceType	LastPrice;
	///数量
	TThostFtdcVolumeType	Volume;
	///成交金额
	TThostFtdcMoneyType	Turnover;
	///持仓量
	TThostFtdcLargeVolumeType	OpenInterest;
};

///行情最优价属性
struct YangFtdcMarketDataBestPriceField
{
	///申买价一
	TThostFtdcPriceType	BidPrice1;
	///申买量一
	TThostFtdcVolumeType	BidVolume1;
	///申卖价一
	TThostFtdcPriceType	AskPrice1;
	///申卖量一
	TThostFtdcVolumeType	AskVolume1;
};

///行情申买二、三属性
struct YangFtdcMarketDataBid23Field
{
	///申买价二
	TThostFtdcPriceType	BidPrice2;
	///申买量二
	TThostFtdcVolumeType	BidVolume2;
	///申买价三
	TThostFtdcPriceType	BidPrice3;
	///申买量三
	TThostFtdcVolumeType	BidVolume3;
};

///行情申卖二、三属性
struct YangFtdcMarketDataAsk23Field
{
	///申卖价二
	TThostFtdcPriceType	AskPrice2;
	///申卖量二
	TThostFtdcVolumeType	AskVolume2;
	///申卖价三
	TThostFtdcPriceType	AskPrice3;
	///申卖量三
	TThostFtdcVolumeType	AskVolume3;
};

///行情申买四、五属性
struct YangFtdcMarketDataBid45Field
{
	///申买价四
	TThostFtdcPriceType	BidPrice4;
	///申买量四
	TThostFtdcVolumeType	BidVolume4;
	///申买价五
	TThostFtdcPriceType	BidPrice5;
	///申买量五
	TThostFtdcVolumeType	BidVolume5;
};

///行情申卖四、五属性
struct YangFtdcMarketDataAsk45Field
{
	///申卖价四
	TThostFtdcPriceType	AskPrice4;
	///申卖量四
	TThostFtdcVolumeType	AskVolume4;
	///申卖价五
	TThostFtdcPriceType	AskPrice5;
	///申卖量五
	TThostFtdcVolumeType	AskVolume5;
};

///行情更新时间属性
struct YangFtdcMarketDataUpdateTimeField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///最后修改时间
	TThostFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TThostFtdcMillisecType	UpdateMillisec;
	///业务日期
	TThostFtdcDateType	ActionDay;
};

///行情交易所代码属性
struct YangFtdcMarketDataExchangeField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///指定的合约
struct YangFtdcSpecificInstrumentField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///合约状态
struct YangFtdcInstrumentStatusField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///结算组代码
	TThostFtdcSettlementGroupIDType	SettlementGroupID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///合约交易状态
	TThostFtdcInstrumentStatusType	InstrumentStatus;
	///交易阶段编号
	TThostFtdcTradingSegmentSNType	TradingSegmentSN;
	///进入本状态时间
	TThostFtdcTimeType	EnterTime;
	///进入本状态原因
	TThostFtdcInstStatusEnterReasonType	EnterReason;
};

///查询合约状态
struct YangFtdcQryInstrumentStatusField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///投资者账户
struct YangFtdcInvestorAccountField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///浮动盈亏算法
struct YangFtdcPositionProfitAlgorithmField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///盈亏算法
	TThostFtdcAlgorithmType	Algorithm;
	///备注
	TThostFtdcMemoType	Memo;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///会员资金折扣
struct YangFtdcDiscountField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///资金折扣比例
	TThostFtdcRatioType	Discount;
};

///查询转帐银行
struct YangFtdcQryTransferBankField
{
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分中心代码
	TThostFtdcBankBrchIDType	BankBrchID;
};

///转帐银行
struct YangFtdcTransferBankField
{
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分中心代码
	TThostFtdcBankBrchIDType	BankBrchID;
	///银行名称
	TThostFtdcBankNameType	BankName;
	///是否活跃
	TThostFtdcBoolType	IsActive;
};

///查询投资者持仓明细
struct YangFtdcQryInvestorPositionDetailField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///投资者持仓明细
struct YangFtdcInvestorPositionDetailField
{
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///买卖
	TThostFtdcDirectionType	Direction;
	///开仓日期
	TThostFtdcDateType	OpenDate;
	///成交编号
	TThostFtdcTradeIDType	TradeID;
	///数量
	TThostFtdcVolumeType	Volume;
	///开仓价
	TThostFtdcPriceType	OpenPrice;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///成交类型
	TThostFtdcTradeTypeType	TradeType;
	///组合合约代码
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///逐日盯市平仓盈亏
	TThostFtdcMoneyType	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	TThostFtdcMoneyType	CloseProfitByTrade;
	///逐日盯市持仓盈亏
	TThostFtdcMoneyType	PositionProfitByDate;
	///逐笔对冲持仓盈亏
	TThostFtdcMoneyType	PositionProfitByTrade;
	///投资者保证金
	TThostFtdcMoneyType	Margin;
	///交易所保证金
	TThostFtdcMoneyType	ExchMargin;
	///保证金率
	TThostFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TThostFtdcRatioType	MarginRateByVolume;
	///昨结算价
	TThostFtdcPriceType	LastSettlementPrice;
	///结算价
	TThostFtdcPriceType	SettlementPrice;
	///平仓量
	TThostFtdcVolumeType	CloseVolume;
	///平仓金额
	TThostFtdcMoneyType	CloseAmount;
};

///资金账户口令域
struct YangFtdcTradingAccountPasswordField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///密码
	TThostFtdcPasswordType	Password;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///交易所行情报盘机
struct YangFtdcMDTraderOfferField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///交易所交易员连接状态
	TThostFtdcTraderConnectStatusType	TraderConnectStatus;
	///发出连接请求的日期
	TThostFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TThostFtdcTimeType	ConnectRequestTime;
	///上次报告日期
	TThostFtdcDateType	LastReportDate;
	///上次报告时间
	TThostFtdcTimeType	LastReportTime;
	///完成连接日期
	TThostFtdcDateType	ConnectDate;
	///完成连接时间
	TThostFtdcTimeType	ConnectTime;
	///启动日期
	TThostFtdcDateType	StartDate;
	///启动时间
	TThostFtdcTimeType	StartTime;
	///交易日
	TThostFtdcDateType	TradingDay;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///本席位最大成交编号
	TThostFtdcTradeIDType	MaxTradeID;
	///本席位最大报单备拷
	TThostFtdcReturnCodeType	MaxOrderMessageReference;
};

///查询行情报盘机
struct YangFtdcQryMDTraderOfferField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
};

///查询客户通知
struct YangFtdcQryNoticeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
};

///客户通知
struct YangFtdcNoticeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///消息正文
	TThostFtdcContentType	Content;
	///经纪公司通知内容序列号
	TThostFtdcSequenceLabelType	SequenceLabel;
};

///用户权限
struct YangFtdcUserRightField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///客户权限类型
	TThostFtdcUserRightTypeType	UserRightType;
	///是否禁止
	TThostFtdcBoolType	IsForbidden;
};

///查询结算信息确认域
struct YangFtdcQrySettlementInfoConfirmField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///装载结算信息
struct YangFtdcLoadSettlementInfoField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
};

///经纪公司可提资金算法表
struct YangFtdcBrokerWithdrawAlgorithmField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///可提资金算法
	TThostFtdcAlgorithmType	WithdrawAlgorithm;
	///资金使用率
	TThostFtdcRatioType	UsingRatio;
	///可提是否包含平仓盈利
	TThostFtdcIncludeCloseProfitType	IncludeCloseProfit;
	///本日无仓且无成交客户是否受可提比例限制
	TThostFtdcAllWithoutTradeType	AllWithoutTrade;
	///可用是否包含平仓盈利
	TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	///是否启用用户事件
	TThostFtdcBoolType	IsBrokerUserEvent;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///货币质押比率
	TThostFtdcRatioType	FundMortgageRatio;
	///权益算法
	TThostFtdcBalanceAlgorithmType	BalanceAlgorithm;
};

///资金账户口令变更域
struct YangFtdcTradingAccountPasswordUpdateV1Field
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///原来的口令
	TThostFtdcPasswordType	OldPassword;
	///新的口令
	TThostFtdcPasswordType	NewPassword;
};

///资金账户口令变更域
struct YangFtdcTradingAccountPasswordUpdateField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///原来的口令
	TThostFtdcPasswordType	OldPassword;
	///新的口令
	TThostFtdcPasswordType	NewPassword;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///查询组合合约分腿
struct YangFtdcQryCombinationLegField
{
	///组合合约代码
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///单腿编号
	TThostFtdcLegIDType	LegID;
	///单腿合约代码
	TThostFtdcInstrumentIDType	LegInstrumentID;
};

///查询组合合约分腿
struct YangFtdcQrySyncStatusField
{
	///交易日
	TThostFtdcDateType	TradingDay;
};

///组合交易合约的单腿
struct YangFtdcCombinationLegField
{
	///组合合约代码
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///单腿编号
	TThostFtdcLegIDType	LegID;
	///单腿合约代码
	TThostFtdcInstrumentIDType	LegInstrumentID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///单腿乘数
	TThostFtdcLegMultipleType	LegMultiple;
	///派生层数
	TThostFtdcImplyLevelType	ImplyLevel;
};

///数据同步状态
struct YangFtdcSyncStatusField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///数据同步状态
	TThostFtdcDataSyncStatusType	DataSyncStatus;
};

///查询联系人
struct YangFtdcQryLinkManField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///联系人
struct YangFtdcLinkManField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///联系人类型
	TThostFtdcPersonTypeType	PersonType;
	///证件类型
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///名称
	TThostFtdcPartyNameType	PersonName;
	///联系电话
	TThostFtdcTelephoneType	Telephone;
	///通讯地址
	TThostFtdcAddressType	Address;
	///邮政编码
	TThostFtdcZipCodeType	ZipCode;
	///优先级
	TThostFtdcPriorityType	Priority;
	///开户邮政编码
	TThostFtdcUOAZipCodeType	UOAZipCode;
	///全称
	TThostFtdcInvestorFullNameType	PersonFullName;
};

///查询经纪公司用户事件
struct YangFtdcQryBrokerUserEventField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///用户事件类型
	TThostFtdcUserEventTypeType	UserEventType;
};

///查询经纪公司用户事件
struct YangFtdcBrokerUserEventField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///用户事件类型
	TThostFtdcUserEventTypeType	UserEventType;
	///用户事件序号
	TThostFtdcSequenceNoType	EventSequenceNo;
	///事件发生日期
	TThostFtdcDateType	EventDate;
	///事件发生时间
	TThostFtdcTimeType	EventTime;
	///用户事件信息
	TThostFtdcUserEventInfoType	UserEventInfo;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///查询签约银行请求
struct YangFtdcQryContractBankField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分中心代码
	TThostFtdcBankBrchIDType	BankBrchID;
};

///查询签约银行响应
struct YangFtdcContractBankField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分中心代码
	TThostFtdcBankBrchIDType	BankBrchID;
	///银行名称
	TThostFtdcBankNameType	BankName;
};

///投资者组合持仓明细
struct YangFtdcInvestorPositionCombineDetailField
{
	///交易日
	TThostFtdcDateType	TradingDay;
	///开仓日期
	TThostFtdcDateType	OpenDate;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///组合编号
	TThostFtdcTradeIDType	ComTradeID;
	///撮合编号
	TThostFtdcTradeIDType	TradeID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///买卖
	TThostFtdcDirectionType	Direction;
	///持仓量
	TThostFtdcVolumeType	TotalAmt;
	///投资者保证金
	TThostFtdcMoneyType	Margin;
	///交易所保证金
	TThostFtdcMoneyType	ExchMargin;
	///保证金率
	TThostFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TThostFtdcRatioType	MarginRateByVolume;
	///单腿编号
	TThostFtdcLegIDType	LegID;
	///单腿乘数
	TThostFtdcLegMultipleType	LegMultiple;
	///组合持仓合约编码
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///成交组号
	TThostFtdcTradeGroupIDType	TradeGroupID;
};

///预埋单
struct YangFtdcParkedOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///报单价格条件
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///组合开平标志
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TThostFtdcDateType	GTDDate;
	///成交量类型
	TThostFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TThostFtdcVolumeType	MinVolume;
	///触发条件
	TThostFtdcContingentConditionType	ContingentCondition;
	///止损价
	TThostFtdcPriceType	StopPrice;
	///强平原因
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TThostFtdcBoolType	IsAutoSuspend;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///用户强评标志
	TThostFtdcBoolType	UserForceClose;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///预埋报单编号
	TThostFtdcParkedOrderIDType	ParkedOrderID;
	///用户类型
	TThostFtdcUserTypeType	UserType;
	///预埋单状态
	TThostFtdcParkedOrderStatusType	Status;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///互换单标志
	TThostFtdcBoolType	IsSwapOrder;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///交易编码
	TThostFtdcClientIDType	ClientID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///输入预埋单操作
struct YangFtdcParkedOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TThostFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量变化
	TThostFtdcVolumeType	VolumeChange;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///预埋撤单单编号
	TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	///用户类型
	TThostFtdcUserTypeType	UserType;
	///预埋撤单状态
	TThostFtdcParkedOrderStatusType	Status;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///查询预埋单
struct YangFtdcQryParkedOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///查询预埋撤单
struct YangFtdcQryParkedOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///删除预埋单
struct YangFtdcRemoveParkedOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///预埋报单编号
	TThostFtdcParkedOrderIDType	ParkedOrderID;
};

///删除预埋撤单
struct YangFtdcRemoveParkedOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///预埋撤单编号
	TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
};

///经纪公司可提资金算法表
struct YangFtdcInvestorWithdrawAlgorithmField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///可提资金比例
	TThostFtdcRatioType	UsingRatio;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///货币质押比率
	TThostFtdcRatioType	FundMortgageRatio;
};

///查询组合持仓明细
struct YangFtdcQryInvestorPositionCombineDetailField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///组合持仓合约编码
	TThostFtdcInstrumentIDType	CombInstrumentID;
};

///成交均价
struct YangFtdcMarketDataAveragePriceField
{
	///当日均价
	TThostFtdcPriceType	AveragePrice;
};

///校验投资者密码
struct YangFtdcVerifyInvestorPasswordField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///密码
	TThostFtdcPasswordType	Password;
};

///用户IP
struct YangFtdcUserIPField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///IP地址掩码
	TThostFtdcIPAddressType	IPMask;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///用户事件通知信息
struct YangFtdcTradingNoticeInfoField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///发送时间
	TThostFtdcTimeType	SendTime;
	///消息正文
	TThostFtdcContentType	FieldContent;
	///序列系列号
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///序列号
	TThostFtdcSequenceNoType	SequenceNo;
};

///用户事件通知
struct YangFtdcTradingNoticeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者范围
	TThostFtdcInvestorRangeType	InvestorRange;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///序列系列号
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///发送时间
	TThostFtdcTimeType	SendTime;
	///序列号
	TThostFtdcSequenceNoType	SequenceNo;
	///消息正文
	TThostFtdcContentType	FieldContent;
};

///查询交易事件通知
struct YangFtdcQryTradingNoticeField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///查询错误报单
struct YangFtdcQryErrOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///错误报单
struct YangFtdcErrOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///报单价格条件
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///组合开平标志
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TThostFtdcDateType	GTDDate;
	///成交量类型
	TThostFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TThostFtdcVolumeType	MinVolume;
	///触发条件
	TThostFtdcContingentConditionType	ContingentCondition;
	///止损价
	TThostFtdcPriceType	StopPrice;
	///强平原因
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TThostFtdcBoolType	IsAutoSuspend;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///用户强评标志
	TThostFtdcBoolType	UserForceClose;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///互换单标志
	TThostFtdcBoolType	IsSwapOrder;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///交易编码
	TThostFtdcClientIDType	ClientID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///查询错误报单操作
struct YangFtdcErrorConditionalOrderField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///报单价格条件
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///组合开平标志
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TThostFtdcDateType	GTDDate;
	///成交量类型
	TThostFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TThostFtdcVolumeType	MinVolume;
	///触发条件
	TThostFtdcContingentConditionType	ContingentCondition;
	///止损价
	TThostFtdcPriceType	StopPrice;
	///强平原因
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TThostFtdcBoolType	IsAutoSuspend;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///报单提交状态
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TThostFtdcSequenceNoType	NotifySequence;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///报单来源
	TThostFtdcOrderSourceType	OrderSource;
	///报单状态
	TThostFtdcOrderStatusType	OrderStatus;
	///报单类型
	TThostFtdcOrderTypeType	OrderType;
	///今成交数量
	TThostFtdcVolumeType	VolumeTraded;
	///剩余数量
	TThostFtdcVolumeType	VolumeTotal;
	///报单日期
	TThostFtdcDateType	InsertDate;
	///委托时间
	TThostFtdcTimeType	InsertTime;
	///激活时间
	TThostFtdcTimeType	ActiveTime;
	///挂起时间
	TThostFtdcTimeType	SuspendTime;
	///最后修改时间
	TThostFtdcTimeType	UpdateTime;
	///撤销时间
	TThostFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TThostFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TThostFtdcParticipantIDType	ClearingPartID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///用户端产品信息
	TThostFtdcProductInfoType	UserProductInfo;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///用户强评标志
	TThostFtdcBoolType	UserForceClose;
	///操作用户代码
	TThostFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///相关报单
	TThostFtdcOrderSysIDType	RelativeOrderSysID;
	///郑商所成交数量
	TThostFtdcVolumeType	ZCETotalTradedVolume;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///互换单标志
	TThostFtdcBoolType	IsSwapOrder;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///资金账号
	TThostFtdcAccountIDType	AccountID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
};

///查询错误报单操作
struct YangFtdcQryErrOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///错误报单操作
struct YangFtdcErrOrderActionField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TThostFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TThostFtdcOrderRefType	OrderRef;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///前置编号
	TThostFtdcFrontIDType	FrontID;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///报单编号
	TThostFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TThostFtdcActionFlagType	ActionFlag;
	///价格
	TThostFtdcPriceType	LimitPrice;
	///数量变化
	TThostFtdcVolumeType	VolumeChange;
	///操作日期
	TThostFtdcDateType	ActionDate;
	///操作时间
	TThostFtdcTimeType	ActionTime;
	///交易所交易员代码
	TThostFtdcTraderIDType	TraderID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///本地报单编号
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///客户代码
	TThostFtdcClientIDType	ClientID;
	///业务单元
	TThostFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///状态信息
	TThostFtdcErrorMsgType	StatusMsg;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///营业部编号
	TThostFtdcBranchIDType	BranchID;
	///投资单元代码
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
	///Mac地址
	TThostFtdcMacAddressType	MacAddress;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///查询交易所状态
struct YangFtdcQryExchangeSequenceField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///交易所状态
struct YangFtdcExchangeSequenceField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///序号
	TThostFtdcSequenceNoType	SequenceNo;
	///合约交易状态
	TThostFtdcInstrumentStatusType	MarketStatus;
};

///根据价格查询最大报单数量
struct YangFtdcQueryMaxOrderVolumeWithPriceField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///开平标志
	TThostFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///最大允许报单数量
	TThostFtdcVolumeType	MaxVolume;
	///报单价格
	TThostFtdcPriceType	Price;
};

///查询经纪公司交易参数
struct YangFtdcQryBrokerTradingParamsField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///经纪公司交易参数
struct YangFtdcBrokerTradingParamsField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///保证金价格类型
	TThostFtdcMarginPriceTypeType	MarginPriceType;
	///盈亏算法
	TThostFtdcAlgorithmType	Algorithm;
	///可用是否包含平仓盈利
	TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///期权权利金价格类型
	TThostFtdcOptionRoyaltyPriceTypeType	OptionRoyaltyPriceType;
};

///查询经纪公司交易算法
struct YangFtdcQryBrokerTradingAlgosField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///经纪公司交易算法
struct YangFtdcBrokerTradingAlgosField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///持仓处理算法编号
	TThostFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
	///寻找保证金率算法编号
	TThostFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
	///资金处理算法编号
	TThostFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
};

///查询经纪公司资金
struct YangFtdcQueryBrokerDepositField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///经纪公司资金
struct YangFtdcBrokerDepositField
{
	///交易日期
	TThostFtdcTradeDateType	TradingDay;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///会员代码
	TThostFtdcParticipantIDType	ParticipantID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///上次结算准备金
	TThostFtdcMoneyType	PreBalance;
	///当前保证金总额
	TThostFtdcMoneyType	CurrMargin;
	///平仓盈亏
	TThostFtdcMoneyType	CloseProfit;
	///期货结算准备金
	TThostFtdcMoneyType	Balance;
	///入金金额
	TThostFtdcMoneyType	Deposit;
	///出金金额
	TThostFtdcMoneyType	Withdraw;
	///可提资金
	TThostFtdcMoneyType	Available;
	///基本准备金
	TThostFtdcMoneyType	Reserve;
	///冻结的保证金
	TThostFtdcMoneyType	FrozenMargin;
};

///查询保证金监管系统经纪公司密钥
struct YangFtdcQryCFMMCBrokerKeyField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
};

///保证金监管系统经纪公司密钥
struct YangFtdcCFMMCBrokerKeyField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///经纪公司统一编码
	TThostFtdcParticipantIDType	ParticipantID;
	///密钥生成日期
	TThostFtdcDateType	CreateDate;
	///密钥生成时间
	TThostFtdcTimeType	CreateTime;
	///密钥编号
	TThostFtdcSequenceNoType	KeyID;
	///动态密钥
	TThostFtdcCFMMCKeyType	CurrentKey;
	///动态密钥类型
	TThostFtdcCFMMCKeyKindType	KeyKind;
};

///保证金监管系统经纪公司资金账户密钥
struct YangFtdcCFMMCTradingAccountKeyField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///经纪公司统一编码
	TThostFtdcParticipantIDType	ParticipantID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///密钥编号
	TThostFtdcSequenceNoType	KeyID;
	///动态密钥
	TThostFtdcCFMMCKeyType	CurrentKey;
};

///请求查询保证金监管系统经纪公司资金账户密钥
struct YangFtdcQryCFMMCTradingAccountKeyField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///用户动态令牌参数
struct YangFtdcBrokerUserOTPParamField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///动态令牌提供商
	TThostFtdcOTPVendorsIDType	OTPVendorsID;
	///动态令牌序列号
	TThostFtdcSerialNumberType	SerialNumber;
	///令牌密钥
	TThostFtdcAuthKeyType	AuthKey;
	///漂移值
	TThostFtdcLastDriftType	LastDrift;
	///成功值
	TThostFtdcLastSuccessType	LastSuccess;
	///动态令牌类型
	TThostFtdcOTPTypeType	OTPType;
};

///手工同步用户动态令牌
struct YangFtdcManualSyncBrokerUserOTPField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///动态令牌类型
	TThostFtdcOTPTypeType	OTPType;
	///第一个动态密码
	TThostFtdcPasswordType	FirstOTP;
	///第二个动态密码
	TThostFtdcPasswordType	SecondOTP;
};

///投资者手续费率模板
struct YangFtdcCommRateModelField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///手续费率模板代码
	TThostFtdcInvestorIDType	CommModelID;
	///模板名称
	TThostFtdcCommModelNameType	CommModelName;
};

///请求查询投资者手续费率模板
struct YangFtdcQryCommRateModelField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///手续费率模板代码
	TThostFtdcInvestorIDType	CommModelID;
};

///投资者保证金率模板
struct YangFtdcMarginModelField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///保证金率模板代码
	TThostFtdcInvestorIDType	MarginModelID;
	///模板名称
	TThostFtdcCommModelNameType	MarginModelName;
};

///请求查询投资者保证金率模板
struct YangFtdcQryMarginModelField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///保证金率模板代码
	TThostFtdcInvestorIDType	MarginModelID;
};

///仓单折抵信息
struct YangFtdcEWarrantOffsetField
{
	///交易日期
	TThostFtdcTradeDateType	TradingDay;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TThostFtdcDirectionType	Direction;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
	///数量
	TThostFtdcVolumeType	Volume;
};

///查询仓单折抵信息
struct YangFtdcQryEWarrantOffsetField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///合约代码
	TThostFtdcInstrumentIDType	InstrumentID;
};

///查询投资者品种/跨品种保证金
struct YangFtdcQryInvestorProductGroupMarginField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///品种/跨品种标示
	TThostFtdcInstrumentIDType	ProductGroupID;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
};

///投资者品种/跨品种保证金
struct YangFtdcInvestorProductGroupMarginField
{
	///品种/跨品种标示
	TThostFtdcInstrumentIDType	ProductGroupID;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///交易日
	TThostFtdcDateType	TradingDay;
	///结算编号
	TThostFtdcSettlementIDType	SettlementID;
	///冻结的保证金
	TThostFtdcMoneyType	FrozenMargin;
	///多头冻结的保证金
	TThostFtdcMoneyType	LongFrozenMargin;
	///空头冻结的保证金
	TThostFtdcMoneyType	ShortFrozenMargin;
	///占用的保证金
	TThostFtdcMoneyType	UseMargin;
	///多头保证金
	TThostFtdcMoneyType	LongUseMargin;
	///空头保证金
	TThostFtdcMoneyType	ShortUseMargin;
	///交易所保证金
	TThostFtdcMoneyType	ExchMargin;
	///交易所多头保证金
	TThostFtdcMoneyType	LongExchMargin;
	///交易所空头保证金
	TThostFtdcMoneyType	ShortExchMargin;
	///平仓盈亏
	TThostFtdcMoneyType	CloseProfit;
	///冻结的手续费
	TThostFtdcMoneyType	FrozenCommission;
	///手续费
	TThostFtdcMoneyType	Commission;
	///冻结的资金
	TThostFtdcMoneyType	FrozenCash;
	///资金差额
	TThostFtdcMoneyType	CashIn;
	///持仓盈亏
	TThostFtdcMoneyType	PositionProfit;
	///折抵总金额
	TThostFtdcMoneyType	OffsetAmount;
	///多头折抵总金额
	TThostFtdcMoneyType	LongOffsetAmount;
	///空头折抵总金额
	TThostFtdcMoneyType	ShortOffsetAmount;
	///交易所折抵总金额
	TThostFtdcMoneyType	ExchOffsetAmount;
	///交易所多头折抵总金额
	TThostFtdcMoneyType	LongExchOffsetAmount;
	///交易所空头折抵总金额
	TThostFtdcMoneyType	ShortExchOffsetAmount;
	///投机套保标志
	TThostFtdcHedgeFlagType	HedgeFlag;
};

///查询监控中心用户令牌
struct YangFtdcQueryCFMMCTradingAccountTokenField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
};

///监控中心用户令牌
struct YangFtdcCFMMCTradingAccountTokenField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///经纪公司统一编码
	TThostFtdcParticipantIDType	ParticipantID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///密钥编号
	TThostFtdcSequenceNoType	KeyID;
	///动态令牌
	TThostFtdcCFMMCTokenType	Token;
};

///查询产品组
struct YangFtdcQryProductGroupField
{
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
};

///投资者品种/跨品种保证金产品组
struct YangFtdcProductGroupField
{
	///产品代码
	TThostFtdcInstrumentIDType	ProductID;
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///产品组代码
	TThostFtdcInstrumentIDType	ProductGroupID;
};

///交易所公告
struct YangFtdcBulletinField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///交易日
	TThostFtdcDateType	TradingDay;
	///公告编号
	TThostFtdcBulletinIDType	BulletinID;
	///序列号
	TThostFtdcSequenceNoType	SequenceNo;
	///公告类型
	TThostFtdcNewsTypeType	NewsType;
	///紧急程度
	TThostFtdcNewsUrgencyType	NewsUrgency;
	///发送时间
	TThostFtdcTimeType	SendTime;
	///消息摘要
	TThostFtdcAbstractType	Abstract;
	///消息来源
	TThostFtdcComeFromType	ComeFrom;
	///消息正文
	TThostFtdcContentType	Content;
	///WEB地址
	TThostFtdcURLLinkType	URLLink;
	///市场代码
	TThostFtdcMarketIDType	MarketID;
};

///查询交易所公告
struct YangFtdcQryBulletinField
{
	///交易所代码
	TThostFtdcExchangeIDType	ExchangeID;
	///公告编号
	TThostFtdcBulletinIDType	BulletinID;
	///序列号
	TThostFtdcSequenceNoType	SequenceNo;
	///公告类型
	TThostFtdcNewsTypeType	NewsType;
	///紧急程度
	TThostFtdcNewsUrgencyType	NewsUrgency;
};

///转帐开户请求
struct YangFtdcReqOpenAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TThostFtdcGenderType	Gender;
	///国家代码
	TThostFtdcCountryCodeType	CountryCode;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///地址
	TThostFtdcAddressType	Address;
	///邮编
	TThostFtdcZipCodeType	ZipCode;
	///电话号码
	TThostFtdcTelephoneType	Telephone;
	///手机
	TThostFtdcMobilePhoneType	MobilePhone;
	///传真
	TThostFtdcFaxType	Fax;
	///电子邮件
	TThostFtdcEMailType	EMail;
	///资金账户状态
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///汇钞标志
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///交易ID
	TThostFtdcTIDType	TID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///转帐销户请求
struct YangFtdcReqCancelAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TThostFtdcGenderType	Gender;
	///国家代码
	TThostFtdcCountryCodeType	CountryCode;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///地址
	TThostFtdcAddressType	Address;
	///邮编
	TThostFtdcZipCodeType	ZipCode;
	///电话号码
	TThostFtdcTelephoneType	Telephone;
	///手机
	TThostFtdcMobilePhoneType	MobilePhone;
	///传真
	TThostFtdcFaxType	Fax;
	///电子邮件
	TThostFtdcEMailType	EMail;
	///资金账户状态
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///汇钞标志
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///交易ID
	TThostFtdcTIDType	TID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///变更银行账户请求
struct YangFtdcReqChangeAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TThostFtdcGenderType	Gender;
	///国家代码
	TThostFtdcCountryCodeType	CountryCode;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///地址
	TThostFtdcAddressType	Address;
	///邮编
	TThostFtdcZipCodeType	ZipCode;
	///电话号码
	TThostFtdcTelephoneType	Telephone;
	///手机
	TThostFtdcMobilePhoneType	MobilePhone;
	///传真
	TThostFtdcFaxType	Fax;
	///电子邮件
	TThostFtdcEMailType	EMail;
	///资金账户状态
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///新银行帐号
	TThostFtdcBankAccountType	NewBankAccount;
	///新银行密码
	TThostFtdcPasswordType	NewBankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易ID
	TThostFtdcTIDType	TID;
	///摘要
	TThostFtdcDigestType	Digest;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///转账请求
struct YangFtdcReqTransferField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///期货公司流水号
	TThostFtdcFutureSerialType	FutureSerial;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TThostFtdcTradeAmountType	TradeAmount;
	///期货可取金额
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///费用支付标志
	TThostFtdcFeePayFlagType	FeePayFlag;
	///应收客户费用
	TThostFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TThostFtdcFutureFeeType	BrokerFee;
	///发送方给接收方的消息
	TThostFtdcAddInfoType	Message;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///转账交易状态
	TThostFtdcTransferStatusType	TransferStatus;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///银行发起银行资金转期货响应
struct YangFtdcRspTransferField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///期货公司流水号
	TThostFtdcFutureSerialType	FutureSerial;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TThostFtdcTradeAmountType	TradeAmount;
	///期货可取金额
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///费用支付标志
	TThostFtdcFeePayFlagType	FeePayFlag;
	///应收客户费用
	TThostFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TThostFtdcFutureFeeType	BrokerFee;
	///发送方给接收方的消息
	TThostFtdcAddInfoType	Message;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///转账交易状态
	TThostFtdcTransferStatusType	TransferStatus;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///冲正请求
struct YangFtdcReqRepealField
{
	///冲正时间间隔
	TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	///已经冲正次数
	TThostFtdcRepealedTimesType	RepealedTimes;
	///银行冲正标志
	TThostFtdcBankRepealFlagType	BankRepealFlag;
	///期商冲正标志
	TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///被冲正平台流水号
	TThostFtdcPlateSerialType	PlateRepealSerial;
	///被冲正银行流水号
	TThostFtdcBankSerialType	BankRepealSerial;
	///被冲正期货流水号
	TThostFtdcFutureSerialType	FutureRepealSerial;
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///期货公司流水号
	TThostFtdcFutureSerialType	FutureSerial;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TThostFtdcTradeAmountType	TradeAmount;
	///期货可取金额
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///费用支付标志
	TThostFtdcFeePayFlagType	FeePayFlag;
	///应收客户费用
	TThostFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TThostFtdcFutureFeeType	BrokerFee;
	///发送方给接收方的消息
	TThostFtdcAddInfoType	Message;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///转账交易状态
	TThostFtdcTransferStatusType	TransferStatus;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///冲正响应
struct YangFtdcRspRepealField
{
	///冲正时间间隔
	TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	///已经冲正次数
	TThostFtdcRepealedTimesType	RepealedTimes;
	///银行冲正标志
	TThostFtdcBankRepealFlagType	BankRepealFlag;
	///期商冲正标志
	TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///被冲正平台流水号
	TThostFtdcPlateSerialType	PlateRepealSerial;
	///被冲正银行流水号
	TThostFtdcBankSerialType	BankRepealSerial;
	///被冲正期货流水号
	TThostFtdcFutureSerialType	FutureRepealSerial;
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///期货公司流水号
	TThostFtdcFutureSerialType	FutureSerial;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TThostFtdcTradeAmountType	TradeAmount;
	///期货可取金额
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///费用支付标志
	TThostFtdcFeePayFlagType	FeePayFlag;
	///应收客户费用
	TThostFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TThostFtdcFutureFeeType	BrokerFee;
	///发送方给接收方的消息
	TThostFtdcAddInfoType	Message;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///转账交易状态
	TThostFtdcTransferStatusType	TransferStatus;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///查询账户信息请求
struct YangFtdcReqQueryAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///期货公司流水号
	TThostFtdcFutureSerialType	FutureSerial;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///查询账户信息响应
struct YangFtdcRspQueryAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///期货公司流水号
	TThostFtdcFutureSerialType	FutureSerial;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///银行可用金额
	TThostFtdcTradeAmountType	BankUseAmount;
	///银行可取金额
	TThostFtdcTradeAmountType	BankFetchAmount;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///期商签到签退
struct YangFtdcFutureSignIOField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///摘要
	TThostFtdcDigestType	Digest;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
};

///期商签到响应
struct YangFtdcRspFutureSignInField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///摘要
	TThostFtdcDigestType	Digest;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///PIN密钥
	TThostFtdcPasswordKeyType	PinKey;
	///MAC密钥
	TThostFtdcPasswordKeyType	MacKey;
};

///期商签退请求
struct YangFtdcReqFutureSignOutField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///摘要
	TThostFtdcDigestType	Digest;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
};

///期商签退响应
struct YangFtdcRspFutureSignOutField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///摘要
	TThostFtdcDigestType	Digest;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///查询指定流水号的交易结果请求
struct YangFtdcReqQueryTradeResultBySerialField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///流水号
	TThostFtdcSerialType	Reference;
	///本流水号发布者的机构类型
	TThostFtdcInstitutionTypeType	RefrenceIssureType;
	///本流水号发布者机构编码
	TThostFtdcOrganCodeType	RefrenceIssure;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TThostFtdcTradeAmountType	TradeAmount;
	///摘要
	TThostFtdcDigestType	Digest;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///查询指定流水号的交易结果响应
struct YangFtdcRspQueryTradeResultBySerialField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///流水号
	TThostFtdcSerialType	Reference;
	///本流水号发布者的机构类型
	TThostFtdcInstitutionTypeType	RefrenceIssureType;
	///本流水号发布者机构编码
	TThostFtdcOrganCodeType	RefrenceIssure;
	///原始返回代码
	TThostFtdcReturnCodeType	OriginReturnCode;
	///原始返回码描述
	TThostFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TThostFtdcTradeAmountType	TradeAmount;
	///摘要
	TThostFtdcDigestType	Digest;
};

///日终文件就绪请求
struct YangFtdcReqDayEndFileReadyField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///文件业务功能
	TThostFtdcFileBusinessCodeType	FileBusinessCode;
	///摘要
	TThostFtdcDigestType	Digest;
};

///返回结果
struct YangFtdcReturnResultField
{
	///返回代码
	TThostFtdcReturnCodeType	ReturnCode;
	///返回码描述
	TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///验证期货资金密码
struct YangFtdcVerifyFuturePasswordField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///交易ID
	TThostFtdcTIDType	TID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///验证客户信息
struct YangFtdcVerifyCustInfoField
{
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///验证期货资金密码和客户信息
struct YangFtdcVerifyFuturePasswordAndCustInfoField
{
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///验证期货资金密码和客户信息
struct YangFtdcDepositResultInformField
{
	///出入金流水号，该流水号为银期报盘返回的流水号
	TThostFtdcDepositSeqNoType	DepositSeqNo;
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///入金金额
	TThostFtdcMoneyType	Deposit;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///返回代码
	TThostFtdcReturnCodeType	ReturnCode;
	///返回码描述
	TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///交易核心向银期报盘发出密钥同步请求
struct YangFtdcReqSyncKeyField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///交易核心给银期报盘的消息
	TThostFtdcAddInfoType	Message;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
};

///交易核心向银期报盘发出密钥同步响应
struct YangFtdcRspSyncKeyField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///交易核心给银期报盘的消息
	TThostFtdcAddInfoType	Message;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///查询账户信息通知
struct YangFtdcNotifyQueryAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///期货公司流水号
	TThostFtdcFutureSerialType	FutureSerial;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///银行可用金额
	TThostFtdcTradeAmountType	BankUseAmount;
	///银行可取金额
	TThostFtdcTradeAmountType	BankFetchAmount;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///银期转账交易流水表
struct YangFtdcTransferSerialField
{
	///平台流水号
	TThostFtdcPlateSerialType	PlateSerial;
	///交易发起方日期
	TThostFtdcTradeDateType	TradeDate;
	///交易日期
	TThostFtdcDateType	TradingDay;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///交易代码
	TThostFtdcTradeCodeType	TradeCode;
	///会话编号
	TThostFtdcSessionIDType	SessionID;
	///银行编码
	TThostFtdcBankIDType	BankID;
	///银行分支机构编码
	TThostFtdcBankBrchIDType	BankBranchID;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///期货公司编码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///期货公司帐号类型
	TThostFtdcFutureAccTypeType	FutureAccType;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///投资者代码
	TThostFtdcInvestorIDType	InvestorID;
	///期货公司流水号
	TThostFtdcFutureSerialType	FutureSerial;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///交易金额
	TThostFtdcTradeAmountType	TradeAmount;
	///应收客户费用
	TThostFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TThostFtdcFutureFeeType	BrokerFee;
	///有效标志
	TThostFtdcAvailabilityFlagType	AvailabilityFlag;
	///操作员
	TThostFtdcOperatorCodeType	OperatorCode;
	///新银行帐号
	TThostFtdcBankAccountType	BankNewAccount;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///请求查询转帐流水
struct YangFtdcQryTransferSerialField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///银行编码
	TThostFtdcBankIDType	BankID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///期商签到通知
struct YangFtdcNotifyFutureSignInField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///摘要
	TThostFtdcDigestType	Digest;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///PIN密钥
	TThostFtdcPasswordKeyType	PinKey;
	///MAC密钥
	TThostFtdcPasswordKeyType	MacKey;
};

///期商签退通知
struct YangFtdcNotifyFutureSignOutField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///摘要
	TThostFtdcDigestType	Digest;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///交易核心向银期报盘发出密钥同步处理结果的通知
struct YangFtdcNotifySyncKeyField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///交易核心给银期报盘的消息
	TThostFtdcAddInfoType	Message;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///请求编号
	TThostFtdcRequestIDType	RequestID;
	///交易ID
	TThostFtdcTIDType	TID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///请求查询银期签约关系
struct YangFtdcQryAccountregisterField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///银行编码
	TThostFtdcBankIDType	BankID;
	///银行分支机构编码
	TThostFtdcBankBrchIDType	BankBranchID;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///客户开销户信息表
struct YangFtdcAccountregisterField
{
	///交易日期
	TThostFtdcTradeDateType	TradeDay;
	///银行编码
	TThostFtdcBankIDType	BankID;
	///银行分支机构编码
	TThostFtdcBankBrchIDType	BankBranchID;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///期货公司编码
	TThostFtdcBrokerIDType	BrokerID;
	///期货公司分支机构编码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///开销户类别
	TThostFtdcOpenOrDestroyType	OpenOrDestroy;
	///签约日期
	TThostFtdcTradeDateType	RegDate;
	///解约日期
	TThostFtdcTradeDateType	OutDate;
	///交易ID
	TThostFtdcTIDType	TID;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///银期开户信息
struct YangFtdcOpenAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TThostFtdcGenderType	Gender;
	///国家代码
	TThostFtdcCountryCodeType	CountryCode;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///地址
	TThostFtdcAddressType	Address;
	///邮编
	TThostFtdcZipCodeType	ZipCode;
	///电话号码
	TThostFtdcTelephoneType	Telephone;
	///手机
	TThostFtdcMobilePhoneType	MobilePhone;
	///传真
	TThostFtdcFaxType	Fax;
	///电子邮件
	TThostFtdcEMailType	EMail;
	///资金账户状态
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///汇钞标志
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///交易ID
	TThostFtdcTIDType	TID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///银期销户信息
struct YangFtdcCancelAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TThostFtdcGenderType	Gender;
	///国家代码
	TThostFtdcCountryCodeType	CountryCode;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///地址
	TThostFtdcAddressType	Address;
	///邮编
	TThostFtdcZipCodeType	ZipCode;
	///电话号码
	TThostFtdcTelephoneType	Telephone;
	///手机
	TThostFtdcMobilePhoneType	MobilePhone;
	///传真
	TThostFtdcFaxType	Fax;
	///电子邮件
	TThostFtdcEMailType	EMail;
	///资金账户状态
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///汇钞标志
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TThostFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TThostFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TThostFtdcOperNoType	OperNo;
	///交易ID
	TThostFtdcTIDType	TID;
	///用户标识
	TThostFtdcUserIDType	UserID;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///银期变更银行账号信息
struct YangFtdcChangeAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TThostFtdcGenderType	Gender;
	///国家代码
	TThostFtdcCountryCodeType	CountryCode;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///地址
	TThostFtdcAddressType	Address;
	///邮编
	TThostFtdcZipCodeType	ZipCode;
	///电话号码
	TThostFtdcTelephoneType	Telephone;
	///手机
	TThostFtdcMobilePhoneType	MobilePhone;
	///传真
	TThostFtdcFaxType	Fax;
	///电子邮件
	TThostFtdcEMailType	EMail;
	///资金账户状态
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///新银行帐号
	TThostFtdcBankAccountType	NewBankAccount;
	///新银行密码
	TThostFtdcPasswordType	NewBankPassWord;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///银行密码标志
	TThostFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///交易ID
	TThostFtdcTIDType	TID;
	///摘要
	TThostFtdcDigestType	Digest;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
	///长客户姓名
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///二级代理操作员银期权限
struct YangFtdcSecAgentACIDMapField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///资金账户
	TThostFtdcAccountIDType	AccountID;
	///币种
	TThostFtdcCurrencyIDType	CurrencyID;
	///境外中介机构资金帐号
	TThostFtdcAccountIDType	BrokerSecAgentID;
};

///二级代理操作员银期权限查询
struct YangFtdcQrySecAgentACIDMapField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///资金账户
	TThostFtdcAccountIDType	AccountID;
	///币种
	TThostFtdcCurrencyIDType	CurrencyID;
};

///灾备中心交易权限
struct YangFtdcUserRightsAssignField
{
	///应用单元代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///交易中心代码
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

///经济公司是否有在本标示的交易权限
struct YangFtdcBrokerUserRightAssignField
{
	///应用单元代码
	TThostFtdcBrokerIDType	BrokerID;
	///交易中心代码
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///能否交易
	TThostFtdcBoolType	Tradeable;
};

///灾备交易转换报文
struct YangFtdcDRTransferField
{
	///原交易中心代码
	TThostFtdcDRIdentityIDType	OrigDRIdentityID;
	///目标交易中心代码
	TThostFtdcDRIdentityIDType	DestDRIdentityID;
	///原应用单元代码
	TThostFtdcBrokerIDType	OrigBrokerID;
	///目标易用单元代码
	TThostFtdcBrokerIDType	DestBrokerID;
};

///Fens用户信息
struct YangFtdcFensUserInfoField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///登录模式
	TThostFtdcLoginModeType	LoginMode;
};

///当前银期所属交易中心
struct YangFtdcCurrTransferIdentityField
{
	///交易中心代码
	TThostFtdcDRIdentityIDType	IdentityID;
};

///禁止登录用户
struct YangFtdcLoginForbiddenUserField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
	///IP地址
	TThostFtdcIPAddressType	IPAddress;
};

///查询禁止登录用户
struct YangFtdcQryLoginForbiddenUserField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///用户代码
	TThostFtdcUserIDType	UserID;
};

///UDP组播组信息
struct YangFtdcMulticastGroupInfoField
{
	///组播组IP地址
	TThostFtdcIPAddressType	GroupIP;
	///组播组IP端口
	TThostFtdcIPPortType	GroupPort;
	///源地址
	TThostFtdcIPAddressType	SourceIP;
};

///资金账户基本准备金
struct YangFtdcTradingAccountReserveField
{
	///经纪公司代码
	TThostFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///基本准备金
	TThostFtdcMoneyType	Reserve;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
};

///银期预约开户确认请求
struct YangFtdcReserveOpenAccountConfirmField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcLongIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TThostFtdcGenderType	Gender;
	///国家代码
	TThostFtdcCountryCodeType	CountryCode;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///地址
	TThostFtdcAddressType	Address;
	///邮编
	TThostFtdcZipCodeType	ZipCode;
	///电话号码
	TThostFtdcTelephoneType	Telephone;
	///手机
	TThostFtdcMobilePhoneType	MobilePhone;
	///传真
	TThostFtdcFaxType	Fax;
	///电子邮件
	TThostFtdcEMailType	EMail;
	///资金账户状态
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易ID
	TThostFtdcTIDType	TID;
	///投资者帐号
	TThostFtdcAccountIDType	AccountID;
	///期货密码
	TThostFtdcPasswordType	Password;
	///预约开户银行流水号
	TThostFtdcBankSerialType	BankReserveOpenSeq;
	///预约开户日期
	TThostFtdcTradeDateType	BookDate;
	///预约开户验证密码
	TThostFtdcPasswordType	BookPsw;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

///银期预约开户
struct YangFtdcReserveOpenAccountField
{
	///业务功能码
	TThostFtdcTradeCodeType	TradeCode;
	///银行代码
	TThostFtdcBankIDType	BankID;
	///银行分支机构代码
	TThostFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TThostFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TThostFtdcTradeDateType	TradeDate;
	///交易时间
	TThostFtdcTradeTimeType	TradeTime;
	///银行流水号
	TThostFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TThostFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TThostFtdcSerialType	PlateSerial;
	///最后分片标志
	TThostFtdcLastFragmentType	LastFragment;
	///会话号
	TThostFtdcSessionIDType	SessionID;
	///客户姓名
	TThostFtdcLongIndividualNameType	CustomerName;
	///证件类型
	TThostFtdcIdCardTypeType	IdCardType;
	///证件号码
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TThostFtdcGenderType	Gender;
	///国家代码
	TThostFtdcCountryCodeType	CountryCode;
	///客户类型
	TThostFtdcCustTypeType	CustType;
	///地址
	TThostFtdcAddressType	Address;
	///邮编
	TThostFtdcZipCodeType	ZipCode;
	///电话号码
	TThostFtdcTelephoneType	Telephone;
	///手机
	TThostFtdcMobilePhoneType	MobilePhone;
	///传真
	TThostFtdcFaxType	Fax;
	///电子邮件
	TThostFtdcEMailType	EMail;
	///资金账户状态
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TThostFtdcBankAccountType	BankAccount;
	///银行密码
	TThostFtdcPasswordType	BankPassWord;
	///安装编号
	TThostFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TThostFtdcCurrencyIDType	CurrencyID;
	///摘要
	TThostFtdcDigestType	Digest;
	///银行帐号类型
	TThostFtdcBankAccTypeType	BankAccType;
	///期货公司银行编码
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易ID
	TThostFtdcTIDType	TID;
	///预约开户状态
	TThostFtdcReserveOpenAccStasType	ReserveOpenAccStas;
	///错误代码
	TThostFtdcErrorIDType	ErrorID;
	///错误信息
	TThostFtdcErrorMsgType	ErrorMsg;
};

#endif