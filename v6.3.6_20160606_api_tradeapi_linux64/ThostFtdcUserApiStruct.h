
#if !defined(THOST_FTDCSTRUCT_H)
#define THOST_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ThostFtdcUserApiDataType.h"

struct CThostFtdcDisseminationField
{
	TThostFtdcSequenceSeriesType	SequenceSeries;
	TThostFtdcSequenceNoType	SequenceNo;
};

struct CThostFtdcReqUserLoginField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcPasswordType	Password;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcProductInfoType	InterfaceProductInfo;
	TThostFtdcProtocolInfoType	ProtocolInfo;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcPasswordType	OneTimePassword;
	TThostFtdcIPAddressType	ClientIPAddress;
	TThostFtdcLoginRemarkType	LoginRemark;
	TThostFtdcIPPortType	ClientIPPort;
};

struct CThostFtdcRspUserLoginField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcTimeType	LoginTime;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcSystemNameType	SystemName;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcOrderRefType	MaxOrderRef;
	TThostFtdcTimeType	SHFETime;
	TThostFtdcTimeType	DCETime;
	TThostFtdcTimeType	CZCETime;
	TThostFtdcTimeType	FFEXTime;
	TThostFtdcTimeType	INETime;
};

struct CThostFtdcUserLogoutField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcForceUserLogoutField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcReqAuthenticateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcAuthCodeType	AuthCode;
	TThostFtdcAppIDType	AppID;
};

struct CThostFtdcRspAuthenticateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcAppIDType	AppID;
	TThostFtdcAppTypeType	AppType;
};

struct CThostFtdcAuthenticationInfoField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcAuthInfoType	AuthInfo;
	TThostFtdcBoolType	IsResult;
	TThostFtdcAppIDType	AppID;
	TThostFtdcAppTypeType	AppType;
};

struct CThostFtdcRspUserLogin2Field
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcTimeType	LoginTime;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcSystemNameType	SystemName;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcOrderRefType	MaxOrderRef;
	TThostFtdcTimeType	SHFETime;
	TThostFtdcTimeType	DCETime;
	TThostFtdcTimeType	CZCETime;
	TThostFtdcTimeType	FFEXTime;
	TThostFtdcTimeType	INETime;
	TThostFtdcRandomStringType	RandomString;
};

struct CThostFtdcTransferHeaderField
{
	TThostFtdcVersionType	Version;
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcTradeSerialType	TradeSerial;
	TThostFtdcFutureIDType	FutureID;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBrchID;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcRecordNumType	RecordNum;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcRequestIDType	RequestID;
};

struct CThostFtdcTransferBankToFutureReqField
{
	TThostFtdcAccountIDType	FutureAccount;
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	TThostFtdcMoneyType	TradeAmt;
	TThostFtdcMoneyType	CustFee;
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

struct CThostFtdcTransferBankToFutureRspField
{
	TThostFtdcRetCodeType	RetCode;
	TThostFtdcRetInfoType	RetInfo;
	TThostFtdcAccountIDType	FutureAccount;
	TThostFtdcMoneyType	TradeAmt;
	TThostFtdcMoneyType	CustFee;
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

struct CThostFtdcTransferFutureToBankReqField
{
	TThostFtdcAccountIDType	FutureAccount;
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	TThostFtdcMoneyType	TradeAmt;
	TThostFtdcMoneyType	CustFee;
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

struct CThostFtdcTransferFutureToBankRspField
{
	TThostFtdcRetCodeType	RetCode;
	TThostFtdcRetInfoType	RetInfo;
	TThostFtdcAccountIDType	FutureAccount;
	TThostFtdcMoneyType	TradeAmt;
	TThostFtdcMoneyType	CustFee;
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

struct CThostFtdcTransferQryBankReqField
{
	TThostFtdcAccountIDType	FutureAccount;
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

struct CThostFtdcTransferQryBankRspField
{
	TThostFtdcRetCodeType	RetCode;
	TThostFtdcRetInfoType	RetInfo;
	TThostFtdcAccountIDType	FutureAccount;
	TThostFtdcMoneyType	TradeAmt;
	TThostFtdcMoneyType	UseAmt;
	TThostFtdcMoneyType	FetchAmt;
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

struct CThostFtdcTransferQryDetailReqField
{
	TThostFtdcAccountIDType	FutureAccount;
};

struct CThostFtdcTransferQryDetailRspField
{
	TThostFtdcDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcTradeSerialNoType	FutureSerial;
	TThostFtdcFutureIDType	FutureID;
	TThostFtdcFutureAccountType	FutureAccount;
	TThostFtdcTradeSerialNoType	BankSerial;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBrchID;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcCertCodeType	CertCode;
	TThostFtdcCurrencyCodeType	CurrencyCode;
	TThostFtdcMoneyType	TxAmount;
	TThostFtdcTransferValidFlagType	Flag;
};

struct CThostFtdcRspInfoField
{
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcExchangeField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExchangeNameType	ExchangeName;
	TThostFtdcExchangePropertyType	ExchangeProperty;
};

struct CThostFtdcProductField
{
	TThostFtdcInstrumentIDType	ProductID;
	TThostFtdcProductNameType	ProductName;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcProductClassType	ProductClass;
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	TThostFtdcPriceType	PriceTick;
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	TThostFtdcVolumeType	MinMarketOrderVolume;
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	TThostFtdcVolumeType	MinLimitOrderVolume;
	TThostFtdcPositionTypeType	PositionType;
	TThostFtdcPositionDateTypeType	PositionDateType;
	TThostFtdcCloseDealTypeType	CloseDealType;
	TThostFtdcCurrencyIDType	TradeCurrencyID;
	TThostFtdcMortgageFundUseRangeType	MortgageFundUseRange;
	TThostFtdcInstrumentIDType	ExchangeProductID;
	TThostFtdcUnderlyingMultipleType	UnderlyingMultiple;
};

struct CThostFtdcInstrumentField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInstrumentNameType	InstrumentName;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcInstrumentIDType	ProductID;
	TThostFtdcProductClassType	ProductClass;
	TThostFtdcYearType	DeliveryYear;
	TThostFtdcMonthType	DeliveryMonth;
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	TThostFtdcVolumeType	MinMarketOrderVolume;
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	TThostFtdcVolumeType	MinLimitOrderVolume;
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	TThostFtdcPriceType	PriceTick;
	TThostFtdcDateType	CreateDate;
	TThostFtdcDateType	OpenDate;
	TThostFtdcDateType	ExpireDate;
	TThostFtdcDateType	StartDelivDate;
	TThostFtdcDateType	EndDelivDate;
	TThostFtdcInstLifePhaseType	InstLifePhase;
	TThostFtdcBoolType	IsTrading;
	TThostFtdcPositionTypeType	PositionType;
	TThostFtdcPositionDateTypeType	PositionDateType;
	TThostFtdcRatioType	LongMarginRatio;
	TThostFtdcRatioType	ShortMarginRatio;
	TThostFtdcMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
	TThostFtdcInstrumentIDType	UnderlyingInstrID;
	TThostFtdcPriceType	StrikePrice;
	TThostFtdcOptionsTypeType	OptionsType;
	TThostFtdcUnderlyingMultipleType	UnderlyingMultiple;
	TThostFtdcCombinationTypeType	CombinationType;
};

struct CThostFtdcBrokerField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcBrokerAbbrType	BrokerAbbr;
	TThostFtdcBrokerNameType	BrokerName;
	TThostFtdcBoolType	IsActive;
};

struct CThostFtdcTraderField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallCountType	InstallCount;
	TThostFtdcBrokerIDType	BrokerID;
};

struct CThostFtdcInvestorField
{
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorGroupID;
	TThostFtdcPartyNameType	InvestorName;
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcBoolType	IsActive;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcAddressType	Address;
	TThostFtdcDateType	OpenDate;
	TThostFtdcMobileType	Mobile;
	TThostFtdcInvestorIDType	CommModelID;
	TThostFtdcInvestorIDType	MarginModelID;
};

struct CThostFtdcTradingCodeField
{
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBoolType	IsActive;
	TThostFtdcClientIDTypeType	ClientIDType;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcBizTypeType	BizType;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcPartBrokerField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcBoolType	IsActive;
};

struct CThostFtdcSuperUserField
{
	TThostFtdcUserIDType	UserID;
	TThostFtdcUserNameType	UserName;
	TThostFtdcPasswordType	Password;
	TThostFtdcBoolType	IsActive;
};

struct CThostFtdcSuperUserFunctionField
{
	TThostFtdcUserIDType	UserID;
	TThostFtdcFunctionCodeType	FunctionCode;
};

struct CThostFtdcInvestorGroupField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorGroupID;
	TThostFtdcInvestorGroupNameType	InvestorGroupName;
};

struct CThostFtdcTradingAccountField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcMoneyType	PreMortgage;
	TThostFtdcMoneyType	PreCredit;
	TThostFtdcMoneyType	PreDeposit;
	TThostFtdcMoneyType	PreBalance;
	TThostFtdcMoneyType	PreMargin;
	TThostFtdcMoneyType	InterestBase;
	TThostFtdcMoneyType	Interest;
	TThostFtdcMoneyType	Deposit;
	TThostFtdcMoneyType	Withdraw;
	TThostFtdcMoneyType	FrozenMargin;
	TThostFtdcMoneyType	FrozenCash;
	TThostFtdcMoneyType	FrozenCommission;
	TThostFtdcMoneyType	CurrMargin;
	TThostFtdcMoneyType	CashIn;
	TThostFtdcMoneyType	Commission;
	TThostFtdcMoneyType	CloseProfit;
	TThostFtdcMoneyType	PositionProfit;
	TThostFtdcMoneyType	Balance;
	TThostFtdcMoneyType	Available;
	TThostFtdcMoneyType	WithdrawQuota;
	TThostFtdcMoneyType	Reserve;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcMoneyType	Credit;
	TThostFtdcMoneyType	Mortgage;
	TThostFtdcMoneyType	ExchangeMargin;
	TThostFtdcMoneyType	DeliveryMargin;
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
	TThostFtdcMoneyType	ReserveBalance;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcMoneyType	PreFundMortgageIn;
	TThostFtdcMoneyType	PreFundMortgageOut;
	TThostFtdcMoneyType	FundMortgageIn;
	TThostFtdcMoneyType	FundMortgageOut;
	TThostFtdcMoneyType	FundMortgageAvailable;
	TThostFtdcMoneyType	MortgageableFund;
	TThostFtdcMoneyType	SpecProductMargin;
	TThostFtdcMoneyType	SpecProductFrozenMargin;
	TThostFtdcMoneyType	SpecProductCommission;
	TThostFtdcMoneyType	SpecProductFrozenCommission;
	TThostFtdcMoneyType	SpecProductPositionProfit;
	TThostFtdcMoneyType	SpecProductCloseProfit;
	TThostFtdcMoneyType	SpecProductPositionProfitByAlg;
	TThostFtdcMoneyType	SpecProductExchangeMargin;
	TThostFtdcBizTypeType	BizType;
	TThostFtdcMoneyType	FrozenSwap;
	TThostFtdcMoneyType	RemainSwap;
};

struct CThostFtdcInvestorPositionField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcPosiDirectionType	PosiDirection;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcPositionDateType	PositionDate;
	TThostFtdcVolumeType	YdPosition;
	TThostFtdcVolumeType	Position;
	TThostFtdcVolumeType	LongFrozen;
	TThostFtdcVolumeType	ShortFrozen;
	TThostFtdcMoneyType	LongFrozenAmount;
	TThostFtdcMoneyType	ShortFrozenAmount;
	TThostFtdcVolumeType	OpenVolume;
	TThostFtdcVolumeType	CloseVolume;
	TThostFtdcMoneyType	OpenAmount;
	TThostFtdcMoneyType	CloseAmount;
	TThostFtdcMoneyType	PositionCost;
	TThostFtdcMoneyType	PreMargin;
	TThostFtdcMoneyType	UseMargin;
	TThostFtdcMoneyType	FrozenMargin;
	TThostFtdcMoneyType	FrozenCash;
	TThostFtdcMoneyType	FrozenCommission;
	TThostFtdcMoneyType	CashIn;
	TThostFtdcMoneyType	Commission;
	TThostFtdcMoneyType	CloseProfit;
	TThostFtdcMoneyType	PositionProfit;
	TThostFtdcPriceType	PreSettlementPrice;
	TThostFtdcPriceType	SettlementPrice;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcMoneyType	OpenCost;
	TThostFtdcMoneyType	ExchangeMargin;
	TThostFtdcVolumeType	CombPosition;
	TThostFtdcVolumeType	CombLongFrozen;
	TThostFtdcVolumeType	CombShortFrozen;
	TThostFtdcMoneyType	CloseProfitByDate;
	TThostFtdcMoneyType	CloseProfitByTrade;
	TThostFtdcVolumeType	TodayPosition;
	TThostFtdcRatioType	MarginRateByMoney;
	TThostFtdcRatioType	MarginRateByVolume;
	TThostFtdcVolumeType	StrikeFrozen;
	TThostFtdcMoneyType	StrikeFrozenAmount;
	TThostFtdcVolumeType	AbandonFrozen;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcVolumeType	YdStrikeFrozen;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcInstrumentMarginRateField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcRatioType	LongMarginRatioByMoney;
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	TThostFtdcBoolType	IsRelative;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcInstrumentCommissionRateField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	OpenRatioByMoney;
	TThostFtdcRatioType	OpenRatioByVolume;
	TThostFtdcRatioType	CloseRatioByMoney;
	TThostFtdcRatioType	CloseRatioByVolume;
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcBizTypeType	BizType;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcDepthMarketDataField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcPriceType	LastPrice;
	TThostFtdcPriceType	PreSettlementPrice;
	TThostFtdcPriceType	PreClosePrice;
	TThostFtdcLargeVolumeType	PreOpenInterest;
	TThostFtdcPriceType	OpenPrice;
	TThostFtdcPriceType	HighestPrice;
	TThostFtdcPriceType	LowestPrice;
	TThostFtdcVolumeType	Volume;
	TThostFtdcMoneyType	Turnover;
	TThostFtdcLargeVolumeType	OpenInterest;
	TThostFtdcPriceType	ClosePrice;
	TThostFtdcPriceType	SettlementPrice;
	TThostFtdcPriceType	UpperLimitPrice;
	TThostFtdcPriceType	LowerLimitPrice;
	TThostFtdcRatioType	PreDelta;
	TThostFtdcRatioType	CurrDelta;
	TThostFtdcTimeType	UpdateTime;
	TThostFtdcMillisecType	UpdateMillisec;
	TThostFtdcPriceType	BidPrice1;
	TThostFtdcVolumeType	BidVolume1;
	TThostFtdcPriceType	AskPrice1;
	TThostFtdcVolumeType	AskVolume1;
	TThostFtdcPriceType	BidPrice2;
	TThostFtdcVolumeType	BidVolume2;
	TThostFtdcPriceType	AskPrice2;
	TThostFtdcVolumeType	AskVolume2;
	TThostFtdcPriceType	BidPrice3;
	TThostFtdcVolumeType	BidVolume3;
	TThostFtdcPriceType	AskPrice3;
	TThostFtdcVolumeType	AskVolume3;
	TThostFtdcPriceType	BidPrice4;
	TThostFtdcVolumeType	BidVolume4;
	TThostFtdcPriceType	AskPrice4;
	TThostFtdcVolumeType	AskVolume4;
	TThostFtdcPriceType	BidPrice5;
	TThostFtdcVolumeType	BidVolume5;
	TThostFtdcPriceType	AskPrice5;
	TThostFtdcVolumeType	AskVolume5;
	TThostFtdcPriceType	AveragePrice;
	TThostFtdcDateType	ActionDay;
};

struct CThostFtdcInstrumentTradingRightField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcTradingRightType	TradingRight;
};

struct CThostFtdcBrokerUserField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcUserNameType	UserName;
	TThostFtdcUserTypeType	UserType;
	TThostFtdcBoolType	IsActive;
	TThostFtdcBoolType	IsUsingOTP;
	TThostFtdcBoolType	IsAuthForce;
};

struct CThostFtdcBrokerUserPasswordField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcPasswordType	Password;
	TThostFtdcDateTimeType	LastUpdateTime;
	TThostFtdcDateTimeType	LastLoginTime;
	TThostFtdcDateType	ExpireDate;
	TThostFtdcDateType	WeakExpireDate;
};

struct CThostFtdcBrokerUserFunctionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcBrokerFunctionCodeType	BrokerFunctionCode;
};

struct CThostFtdcTraderOfferField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcTraderConnectStatusType	TraderConnectStatus;
	TThostFtdcDateType	ConnectRequestDate;
	TThostFtdcTimeType	ConnectRequestTime;
	TThostFtdcDateType	LastReportDate;
	TThostFtdcTimeType	LastReportTime;
	TThostFtdcDateType	ConnectDate;
	TThostFtdcTimeType	ConnectTime;
	TThostFtdcDateType	StartDate;
	TThostFtdcTimeType	StartTime;
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcTradeIDType	MaxTradeID;
	TThostFtdcReturnCodeType	MaxOrderMessageReference;
};

struct CThostFtdcSettlementInfoField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcContentType	Content;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcInstrumentMarginRateAdjustField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcRatioType	LongMarginRatioByMoney;
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	TThostFtdcBoolType	IsRelative;
};

struct CThostFtdcExchangeMarginRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcRatioType	LongMarginRatioByMoney;
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcExchangeMarginRateAdjustField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcRatioType	LongMarginRatioByMoney;
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	TThostFtdcRatioType	ExchLongMarginRatioByMoney;
	TThostFtdcMoneyType	ExchLongMarginRatioByVolume;
	TThostFtdcRatioType	ExchShortMarginRatioByMoney;
	TThostFtdcMoneyType	ExchShortMarginRatioByVolume;
	TThostFtdcRatioType	NoLongMarginRatioByMoney;
	TThostFtdcMoneyType	NoLongMarginRatioByVolume;
	TThostFtdcRatioType	NoShortMarginRatioByMoney;
	TThostFtdcMoneyType	NoShortMarginRatioByVolume;
};

struct CThostFtdcExchangeRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcCurrencyIDType	FromCurrencyID;
	TThostFtdcCurrencyUnitType	FromCurrencyUnit;
	TThostFtdcCurrencyIDType	ToCurrencyID;
	TThostFtdcExchangeRateType	ExchangeRate;
};

struct CThostFtdcSettlementRefField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
};

struct CThostFtdcCurrentTimeField
{
	TThostFtdcDateType	CurrDate;
	TThostFtdcTimeType	CurrTime;
	TThostFtdcMillisecType	CurrMillisec;
	TThostFtdcDateType	ActionDay;
};

struct CThostFtdcCommPhaseField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcCommPhaseNoType	CommPhaseNo;
	TThostFtdcSystemIDType	SystemID;
};

struct CThostFtdcLoginInfoField
{
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDateType	LoginDate;
	TThostFtdcTimeType	LoginTime;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcProductInfoType	InterfaceProductInfo;
	TThostFtdcProtocolInfoType	ProtocolInfo;
	TThostFtdcSystemNameType	SystemName;
	TThostFtdcPasswordType	PasswordDeprecated;
	TThostFtdcOrderRefType	MaxOrderRef;
	TThostFtdcTimeType	SHFETime;
	TThostFtdcTimeType	DCETime;
	TThostFtdcTimeType	CZCETime;
	TThostFtdcTimeType	FFEXTime;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcPasswordType	OneTimePassword;
	TThostFtdcTimeType	INETime;
	TThostFtdcBoolType	IsQryControl;
	TThostFtdcLoginRemarkType	LoginRemark;
	TThostFtdcPasswordType	Password;
};

struct CThostFtdcLogoutAllField
{
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcSystemNameType	SystemName;
};

struct CThostFtdcFrontStatusField
{
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcDateType	LastReportDate;
	TThostFtdcTimeType	LastReportTime;
	TThostFtdcBoolType	IsActive;
};

struct CThostFtdcUserPasswordUpdateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcPasswordType	OldPassword;
	TThostFtdcPasswordType	NewPassword;
};

struct CThostFtdcInputOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	TThostFtdcDirectionType	Direction;
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeTotalOriginal;
	TThostFtdcTimeConditionType	TimeCondition;
	TThostFtdcDateType	GTDDate;
	TThostFtdcVolumeConditionType	VolumeCondition;
	TThostFtdcVolumeType	MinVolume;
	TThostFtdcContingentConditionType	ContingentCondition;
	TThostFtdcPriceType	StopPrice;
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	TThostFtdcBoolType	IsAutoSuspend;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBoolType	UserForceClose;
	TThostFtdcBoolType	IsSwapOrder;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	TThostFtdcDirectionType	Direction;
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeTotalOriginal;
	TThostFtdcTimeConditionType	TimeCondition;
	TThostFtdcDateType	GTDDate;
	TThostFtdcVolumeConditionType	VolumeCondition;
	TThostFtdcVolumeType	MinVolume;
	TThostFtdcContingentConditionType	ContingentCondition;
	TThostFtdcPriceType	StopPrice;
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	TThostFtdcBoolType	IsAutoSuspend;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcOrderSourceType	OrderSource;
	TThostFtdcOrderStatusType	OrderStatus;
	TThostFtdcOrderTypeType	OrderType;
	TThostFtdcVolumeType	VolumeTraded;
	TThostFtdcVolumeType	VolumeTotal;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	ActiveTime;
	TThostFtdcTimeType	SuspendTime;
	TThostFtdcTimeType	UpdateTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcTraderIDType	ActiveTraderID;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcBoolType	UserForceClose;
	TThostFtdcUserIDType	ActiveUserID;
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	TThostFtdcOrderSysIDType	RelativeOrderSysID;
	TThostFtdcVolumeType	ZCETotalTradedVolume;
	TThostFtdcBoolType	IsSwapOrder;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcExchangeOrderField
{
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	TThostFtdcDirectionType	Direction;
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeTotalOriginal;
	TThostFtdcTimeConditionType	TimeCondition;
	TThostFtdcDateType	GTDDate;
	TThostFtdcVolumeConditionType	VolumeCondition;
	TThostFtdcVolumeType	MinVolume;
	TThostFtdcContingentConditionType	ContingentCondition;
	TThostFtdcPriceType	StopPrice;
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	TThostFtdcBoolType	IsAutoSuspend;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcOrderSourceType	OrderSource;
	TThostFtdcOrderStatusType	OrderStatus;
	TThostFtdcOrderTypeType	OrderType;
	TThostFtdcVolumeType	VolumeTraded;
	TThostFtdcVolumeType	VolumeTotal;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	ActiveTime;
	TThostFtdcTimeType	SuspendTime;
	TThostFtdcTimeType	UpdateTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcTraderIDType	ActiveTraderID;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcExchangeOrderInsertErrorField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcInputOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	OrderActionRef;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeChange;
	TThostFtdcUserIDType	UserID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	OrderActionRef;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeChange;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcExchangeOrderActionField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeChange;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcExchangeOrderActionErrorField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcExchangeTradeField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTradeIDType	TradeID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcTradingRoleType	TradingRole;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcOffsetFlagType	OffsetFlag;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcPriceType	Price;
	TThostFtdcVolumeType	Volume;
	TThostFtdcDateType	TradeDate;
	TThostFtdcTimeType	TradeTime;
	TThostFtdcTradeTypeType	TradeType;
	TThostFtdcPriceSourceType	PriceSource;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcTradeSourceType	TradeSource;
};

struct CThostFtdcTradeField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTradeIDType	TradeID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcTradingRoleType	TradingRole;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcOffsetFlagType	OffsetFlag;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcPriceType	Price;
	TThostFtdcVolumeType	Volume;
	TThostFtdcDateType	TradeDate;
	TThostFtdcTimeType	TradeTime;
	TThostFtdcTradeTypeType	TradeType;
	TThostFtdcPriceSourceType	PriceSource;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	TThostFtdcTradeSourceType	TradeSource;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcUserSessionField
{
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDateType	LoginDate;
	TThostFtdcTimeType	LoginTime;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcProductInfoType	InterfaceProductInfo;
	TThostFtdcProtocolInfoType	ProtocolInfo;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcLoginRemarkType	LoginRemark;
};

struct CThostFtdcQueryMaxOrderVolumeField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcOffsetFlagType	OffsetFlag;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcVolumeType	MaxVolume;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcSettlementInfoConfirmField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcDateType	ConfirmDate;
	TThostFtdcTimeType	ConfirmTime;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcSyncDepositField
{
	TThostFtdcDepositSeqNoType	DepositSeqNo;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcMoneyType	Deposit;
	TThostFtdcBoolType	IsForce;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcSyncFundMortgageField
{
	TThostFtdcDepositSeqNoType	MortgageSeqNo;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcCurrencyIDType	FromCurrencyID;
	TThostFtdcMoneyType	MortgageAmount;
	TThostFtdcCurrencyIDType	ToCurrencyID;
};

struct CThostFtdcBrokerSyncField
{
	TThostFtdcBrokerIDType	BrokerID;
};

struct CThostFtdcSyncingInvestorField
{
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorGroupID;
	TThostFtdcPartyNameType	InvestorName;
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcBoolType	IsActive;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcAddressType	Address;
	TThostFtdcDateType	OpenDate;
	TThostFtdcMobileType	Mobile;
	TThostFtdcInvestorIDType	CommModelID;
	TThostFtdcInvestorIDType	MarginModelID;
};

struct CThostFtdcSyncingTradingCodeField
{
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBoolType	IsActive;
	TThostFtdcClientIDTypeType	ClientIDType;
};

struct CThostFtdcSyncingInvestorGroupField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorGroupID;
	TThostFtdcInvestorGroupNameType	InvestorGroupName;
};

struct CThostFtdcSyncingTradingAccountField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcMoneyType	PreMortgage;
	TThostFtdcMoneyType	PreCredit;
	TThostFtdcMoneyType	PreDeposit;
	TThostFtdcMoneyType	PreBalance;
	TThostFtdcMoneyType	PreMargin;
	TThostFtdcMoneyType	InterestBase;
	TThostFtdcMoneyType	Interest;
	TThostFtdcMoneyType	Deposit;
	TThostFtdcMoneyType	Withdraw;
	TThostFtdcMoneyType	FrozenMargin;
	TThostFtdcMoneyType	FrozenCash;
	TThostFtdcMoneyType	FrozenCommission;
	TThostFtdcMoneyType	CurrMargin;
	TThostFtdcMoneyType	CashIn;
	TThostFtdcMoneyType	Commission;
	TThostFtdcMoneyType	CloseProfit;
	TThostFtdcMoneyType	PositionProfit;
	TThostFtdcMoneyType	Balance;
	TThostFtdcMoneyType	Available;
	TThostFtdcMoneyType	WithdrawQuota;
	TThostFtdcMoneyType	Reserve;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcMoneyType	Credit;
	TThostFtdcMoneyType	Mortgage;
	TThostFtdcMoneyType	ExchangeMargin;
	TThostFtdcMoneyType	DeliveryMargin;
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
	TThostFtdcMoneyType	ReserveBalance;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcMoneyType	PreFundMortgageIn;
	TThostFtdcMoneyType	PreFundMortgageOut;
	TThostFtdcMoneyType	FundMortgageIn;
	TThostFtdcMoneyType	FundMortgageOut;
	TThostFtdcMoneyType	FundMortgageAvailable;
	TThostFtdcMoneyType	MortgageableFund;
	TThostFtdcMoneyType	SpecProductMargin;
	TThostFtdcMoneyType	SpecProductFrozenMargin;
	TThostFtdcMoneyType	SpecProductCommission;
	TThostFtdcMoneyType	SpecProductFrozenCommission;
	TThostFtdcMoneyType	SpecProductPositionProfit;
	TThostFtdcMoneyType	SpecProductCloseProfit;
	TThostFtdcMoneyType	SpecProductPositionProfitByAlg;
	TThostFtdcMoneyType	SpecProductExchangeMargin;
	TThostFtdcMoneyType	FrozenSwap;
	TThostFtdcMoneyType	RemainSwap;
};

struct CThostFtdcSyncingInvestorPositionField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcPosiDirectionType	PosiDirection;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcPositionDateType	PositionDate;
	TThostFtdcVolumeType	YdPosition;
	TThostFtdcVolumeType	Position;
	TThostFtdcVolumeType	LongFrozen;
	TThostFtdcVolumeType	ShortFrozen;
	TThostFtdcMoneyType	LongFrozenAmount;
	TThostFtdcMoneyType	ShortFrozenAmount;
	TThostFtdcVolumeType	OpenVolume;
	TThostFtdcVolumeType	CloseVolume;
	TThostFtdcMoneyType	OpenAmount;
	TThostFtdcMoneyType	CloseAmount;
	TThostFtdcMoneyType	PositionCost;
	TThostFtdcMoneyType	PreMargin;
	TThostFtdcMoneyType	UseMargin;
	TThostFtdcMoneyType	FrozenMargin;
	TThostFtdcMoneyType	FrozenCash;
	TThostFtdcMoneyType	FrozenCommission;
	TThostFtdcMoneyType	CashIn;
	TThostFtdcMoneyType	Commission;
	TThostFtdcMoneyType	CloseProfit;
	TThostFtdcMoneyType	PositionProfit;
	TThostFtdcPriceType	PreSettlementPrice;
	TThostFtdcPriceType	SettlementPrice;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcMoneyType	OpenCost;
	TThostFtdcMoneyType	ExchangeMargin;
	TThostFtdcVolumeType	CombPosition;
	TThostFtdcVolumeType	CombLongFrozen;
	TThostFtdcVolumeType	CombShortFrozen;
	TThostFtdcMoneyType	CloseProfitByDate;
	TThostFtdcMoneyType	CloseProfitByTrade;
	TThostFtdcVolumeType	TodayPosition;
	TThostFtdcRatioType	MarginRateByMoney;
	TThostFtdcRatioType	MarginRateByVolume;
	TThostFtdcVolumeType	StrikeFrozen;
	TThostFtdcMoneyType	StrikeFrozenAmount;
	TThostFtdcVolumeType	AbandonFrozen;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcVolumeType	YdStrikeFrozen;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcSyncingInstrumentMarginRateField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcRatioType	LongMarginRatioByMoney;
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	TThostFtdcBoolType	IsRelative;
};

struct CThostFtdcSyncingInstrumentCommissionRateField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	OpenRatioByMoney;
	TThostFtdcRatioType	OpenRatioByVolume;
	TThostFtdcRatioType	CloseRatioByMoney;
	TThostFtdcRatioType	CloseRatioByVolume;
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	TThostFtdcRatioType	CloseTodayRatioByVolume;
};

struct CThostFtdcSyncingInstrumentTradingRightField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcTradingRightType	TradingRight;
};

struct CThostFtdcQryOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcTimeType	InsertTimeStart;
	TThostFtdcTimeType	InsertTimeEnd;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryTradeField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTradeIDType	TradeID;
	TThostFtdcTimeType	TradeTimeStart;
	TThostFtdcTimeType	TradeTimeEnd;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryInvestorPositionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryTradingAccountField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcBizTypeType	BizType;
	TThostFtdcAccountIDType	AccountID;
};

struct CThostFtdcQryInvestorField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcQryTradingCodeField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcClientIDTypeType	ClientIDType;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryInvestorGroupField
{
	TThostFtdcBrokerIDType	BrokerID;
};

struct CThostFtdcQryInstrumentMarginRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryInstrumentCommissionRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryInstrumentTradingRightField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
};

struct CThostFtdcQryBrokerField
{
	TThostFtdcBrokerIDType	BrokerID;
};

struct CThostFtdcQryTraderField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcQrySuperUserFunctionField
{
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcQryUserSessionField
{
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcQryPartBrokerField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcParticipantIDType	ParticipantID;
};

struct CThostFtdcQryFrontStatusField
{
	TThostFtdcFrontIDType	FrontID;
};

struct CThostFtdcQryExchangeOrderField
{
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcQryOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcQryExchangeOrderActionField
{
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcQrySuperUserField
{
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcQryExchangeField
{
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcQryProductField
{
	TThostFtdcInstrumentIDType	ProductID;
	TThostFtdcProductClassType	ProductClass;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcQryInstrumentField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcInstrumentIDType	ProductID;
};

struct CThostFtdcQryDepthMarketDataField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcQryBrokerUserField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcQryBrokerUserFunctionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcQryTraderOfferField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcQrySyncDepositField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcDepositSeqNoType	DepositSeqNo;
};

struct CThostFtdcQrySettlementInfoField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcDateType	TradingDay;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcQryExchangeMarginRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcQryExchangeMarginRateAdjustField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHedgeFlagType	HedgeFlag;
};

struct CThostFtdcQryExchangeRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcCurrencyIDType	FromCurrencyID;
	TThostFtdcCurrencyIDType	ToCurrencyID;
};

struct CThostFtdcQrySyncFundMortgageField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcDepositSeqNoType	MortgageSeqNo;
};

struct CThostFtdcQryHisOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcTimeType	InsertTimeStart;
	TThostFtdcTimeType	InsertTimeEnd;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
};

struct CThostFtdcOptionInstrMiniMarginField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcMoneyType	MinMargin;
	TThostFtdcValueMethodType	ValueMethod;
	TThostFtdcBoolType	IsRelative;
};

struct CThostFtdcOptionInstrMarginAdjustField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	SShortMarginRatioByMoney;
	TThostFtdcMoneyType	SShortMarginRatioByVolume;
	TThostFtdcRatioType	HShortMarginRatioByMoney;
	TThostFtdcMoneyType	HShortMarginRatioByVolume;
	TThostFtdcRatioType	AShortMarginRatioByMoney;
	TThostFtdcMoneyType	AShortMarginRatioByVolume;
	TThostFtdcBoolType	IsRelative;
	TThostFtdcRatioType	MShortMarginRatioByMoney;
	TThostFtdcMoneyType	MShortMarginRatioByVolume;
};

struct CThostFtdcOptionInstrCommRateField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	OpenRatioByMoney;
	TThostFtdcRatioType	OpenRatioByVolume;
	TThostFtdcRatioType	CloseRatioByMoney;
	TThostFtdcRatioType	CloseRatioByVolume;
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	TThostFtdcRatioType	StrikeRatioByMoney;
	TThostFtdcRatioType	StrikeRatioByVolume;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcOptionInstrTradeCostField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcMoneyType	FixedMargin;
	TThostFtdcMoneyType	MiniMargin;
	TThostFtdcMoneyType	Royalty;
	TThostFtdcMoneyType	ExchFixedMargin;
	TThostFtdcMoneyType	ExchMiniMargin;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryOptionInstrTradeCostField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcPriceType	InputPrice;
	TThostFtdcPriceType	UnderlyingPrice;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryOptionInstrCommRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcIndexPriceField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcPriceType	ClosePrice;
};

struct CThostFtdcInputExecOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	ExecOrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcVolumeType	Volume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOffsetFlagType	OffsetFlag;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcActionTypeType	ActionType;
	TThostFtdcPosiDirectionType	PosiDirection;
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcInputExecOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	TThostFtdcOrderRefType	ExecOrderRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcUserIDType	UserID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcExecOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	ExecOrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcVolumeType	Volume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOffsetFlagType	OffsetFlag;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcActionTypeType	ActionType;
	TThostFtdcPosiDirectionType	PosiDirection;
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcExecResultType	ExecResult;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcUserIDType	ActiveUserID;
	TThostFtdcSequenceNoType	BrokerExecOrderSeq;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcExecOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	TThostFtdcOrderRefType	ExecOrderRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcActionTypeType	ActionType;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryExecOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	TThostFtdcTimeType	InsertTimeStart;
	TThostFtdcTimeType	InsertTimeEnd;
};

struct CThostFtdcExchangeExecOrderField
{
	TThostFtdcVolumeType	Volume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOffsetFlagType	OffsetFlag;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcActionTypeType	ActionType;
	TThostFtdcPosiDirectionType	PosiDirection;
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcExecResultType	ExecResult;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryExchangeExecOrderField
{
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcQryExecOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcExchangeExecOrderActionField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcActionTypeType	ActionType;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcVolumeType	Volume;
};

struct CThostFtdcQryExchangeExecOrderActionField
{
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcErrExecOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	ExecOrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcVolumeType	Volume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOffsetFlagType	OffsetFlag;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcActionTypeType	ActionType;
	TThostFtdcPosiDirectionType	PosiDirection;
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcQryErrExecOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcErrExecOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	TThostFtdcOrderRefType	ExecOrderRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcUserIDType	UserID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcQryErrExecOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcOptionInstrTradingRightField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcTradingRightType	TradingRight;
};

struct CThostFtdcQryOptionInstrTradingRightField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcDirectionType	Direction;
};

struct CThostFtdcInputForQuoteField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	ForQuoteRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcForQuoteField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	ForQuoteRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcOrderLocalIDType	ForQuoteLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcForQuoteStatusType	ForQuoteStatus;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcUserIDType	ActiveUserID;
	TThostFtdcSequenceNoType	BrokerForQutoSeq;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryForQuoteField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTimeType	InsertTimeStart;
	TThostFtdcTimeType	InsertTimeEnd;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcExchangeForQuoteField
{
	TThostFtdcOrderLocalIDType	ForQuoteLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcForQuoteStatusType	ForQuoteStatus;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryExchangeForQuoteField
{
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcInputQuoteField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	QuoteRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcPriceType	AskPrice;
	TThostFtdcPriceType	BidPrice;
	TThostFtdcVolumeType	AskVolume;
	TThostFtdcVolumeType	BidVolume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	TThostFtdcOrderRefType	AskOrderRef;
	TThostFtdcOrderRefType	BidOrderRef;
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcInputQuoteActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	QuoteActionRef;
	TThostFtdcOrderRefType	QuoteRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	QuoteSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcUserIDType	UserID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQuoteField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	QuoteRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcPriceType	AskPrice;
	TThostFtdcPriceType	BidPrice;
	TThostFtdcVolumeType	AskVolume;
	TThostFtdcVolumeType	BidVolume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcOrderSysIDType	QuoteSysID;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcOrderStatusType	QuoteStatus;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcOrderSysIDType	AskOrderSysID;
	TThostFtdcOrderSysIDType	BidOrderSysID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcUserIDType	ActiveUserID;
	TThostFtdcSequenceNoType	BrokerQuoteSeq;
	TThostFtdcOrderRefType	AskOrderRef;
	TThostFtdcOrderRefType	BidOrderRef;
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQuoteActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	QuoteActionRef;
	TThostFtdcOrderRefType	QuoteRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	QuoteSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryQuoteField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	QuoteSysID;
	TThostFtdcTimeType	InsertTimeStart;
	TThostFtdcTimeType	InsertTimeEnd;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcExchangeQuoteField
{
	TThostFtdcPriceType	AskPrice;
	TThostFtdcPriceType	BidPrice;
	TThostFtdcVolumeType	AskVolume;
	TThostFtdcVolumeType	BidVolume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcOrderSysIDType	QuoteSysID;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcOrderStatusType	QuoteStatus;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcOrderSysIDType	AskOrderSysID;
	TThostFtdcOrderSysIDType	BidOrderSysID;
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryExchangeQuoteField
{
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcQryQuoteActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcExchangeQuoteActionField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	QuoteSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryExchangeQuoteActionField
{
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcOptionInstrDeltaField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	Delta;
};

struct CThostFtdcForQuoteRspField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	TThostFtdcTimeType	ForQuoteTime;
	TThostFtdcDateType	ActionDay;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcStrikeOffsetField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcMoneyType	Offset;
	TThostFtdcStrikeOffsetTypeType	OffsetType;
};

struct CThostFtdcQryStrikeOffsetField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
};

struct CThostFtdcInputBatchOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	OrderActionRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcBatchOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	OrderActionRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcExchangeBatchOrderActionField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryBatchOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcCombInstrumentGuardField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcRatioType	GuarantRatio;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcQryCombInstrumentGuardField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcInputCombActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	CombActionRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcVolumeType	Volume;
	TThostFtdcCombDirectionType	CombDirection;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcCombActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	CombActionRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcVolumeType	Volume;
	TThostFtdcCombDirectionType	CombDirection;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderActionStatusType	ActionStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcTradeIDType	ComTradeID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryCombActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcExchangeCombActionField
{
	TThostFtdcDirectionType	Direction;
	TThostFtdcVolumeType	Volume;
	TThostFtdcCombDirectionType	CombDirection;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderActionStatusType	ActionStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcTradeIDType	ComTradeID;
	TThostFtdcBranchIDType	BranchID;
};

struct CThostFtdcQryExchangeCombActionField
{
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcProductExchRateField
{
	TThostFtdcInstrumentIDType	ProductID;
	TThostFtdcCurrencyIDType	QuoteCurrencyID;
	TThostFtdcExchangeRateType	ExchangeRate;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcQryProductExchRateField
{
	TThostFtdcInstrumentIDType	ProductID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcQryForQuoteParamField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcForQuoteParamField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcPriceType	LastPrice;
	TThostFtdcPriceType	PriceInterval;
};

struct CThostFtdcMMOptionInstrCommRateField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	OpenRatioByMoney;
	TThostFtdcRatioType	OpenRatioByVolume;
	TThostFtdcRatioType	CloseRatioByMoney;
	TThostFtdcRatioType	CloseRatioByVolume;
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	TThostFtdcRatioType	StrikeRatioByMoney;
	TThostFtdcRatioType	StrikeRatioByVolume;
};

struct CThostFtdcQryMMOptionInstrCommRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
};

struct CThostFtdcMMInstrumentCommissionRateField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	OpenRatioByMoney;
	TThostFtdcRatioType	OpenRatioByVolume;
	TThostFtdcRatioType	CloseRatioByMoney;
	TThostFtdcRatioType	CloseRatioByVolume;
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	TThostFtdcRatioType	CloseTodayRatioByVolume;
};

struct CThostFtdcQryMMInstrumentCommissionRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
};

struct CThostFtdcInstrumentOrderCommRateField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcRatioType	OrderCommByVolume;
	TThostFtdcRatioType	OrderActionCommByVolume;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryInstrumentOrderCommRateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
};

struct CThostFtdcTradeParamField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcTradeParamIDType	TradeParamID;
	TThostFtdcSettlementParamValueType	TradeParamValue;
	TThostFtdcMemoType	Memo;
};

struct CThostFtdcInstrumentMarginRateULField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcRatioType	LongMarginRatioByMoney;
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
};

struct CThostFtdcFutureLimitPosiParamField
{
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	ProductID;
	TThostFtdcVolumeType	SpecOpenVolume;
	TThostFtdcVolumeType	ArbiOpenVolume;
	TThostFtdcVolumeType	OpenVolume;
};

struct CThostFtdcLoginForbiddenIPField
{
	TThostFtdcIPAddressType	IPAddress;
};

struct CThostFtdcIPListField
{
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcBoolType	IsWhite;
};

struct CThostFtdcInputOptionSelfCloseField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	OptionSelfCloseRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcVolumeType	Volume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcOptSelfCloseFlagType	OptSelfCloseFlag;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcInputOptionSelfCloseActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	OptionSelfCloseActionRef;
	TThostFtdcOrderRefType	OptionSelfCloseRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcUserIDType	UserID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcOptionSelfCloseField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	OptionSelfCloseRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcVolumeType	Volume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcOptSelfCloseFlagType	OptSelfCloseFlag;
	TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcExecResultType	ExecResult;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcUserIDType	ActiveUserID;
	TThostFtdcSequenceNoType	BrokerOptionSelfCloseSeq;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcOptionSelfCloseActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	OptionSelfCloseActionRef;
	TThostFtdcOrderRefType	OptionSelfCloseRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryOptionSelfCloseField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	TThostFtdcTimeType	InsertTimeStart;
	TThostFtdcTimeType	InsertTimeEnd;
};

struct CThostFtdcExchangeOptionSelfCloseField
{
	TThostFtdcVolumeType	Volume;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcOptSelfCloseFlagType	OptSelfCloseFlag;
	TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcExecResultType	ExecResult;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryOptionSelfCloseActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcExchangeOptionSelfCloseActionField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcOptSelfCloseFlagType	OptSelfCloseFlag;
};

struct CThostFtdcSyncDelaySwapField
{
	TThostFtdcDepositSeqNoType	DelaySwapSeqNo;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcCurrencyIDType	FromCurrencyID;
	TThostFtdcMoneyType	FromAmount;
	TThostFtdcMoneyType	FromFrozenSwap;
	TThostFtdcMoneyType	FromRemainSwap;
	TThostFtdcCurrencyIDType	ToCurrencyID;
	TThostFtdcMoneyType	ToAmount;
};

struct CThostFtdcQrySyncDelaySwapField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcDepositSeqNoType	DelaySwapSeqNo;
};

struct CThostFtdcInvestUnitField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcPartyNameType	InvestorUnitName;
	TThostFtdcInvestorIDType	InvestorGroupID;
	TThostFtdcInvestorIDType	CommModelID;
	TThostFtdcInvestorIDType	MarginModelID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcQryInvestUnitField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcSecAgentCheckModeField
{
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcAccountIDType	BrokerSecAgentID;
	TThostFtdcBoolType	CheckSelfAccount;
};

struct CThostFtdcSecAgentTradeInfoField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	BrokerSecAgentID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcMarketDataField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcPriceType	LastPrice;
	TThostFtdcPriceType	PreSettlementPrice;
	TThostFtdcPriceType	PreClosePrice;
	TThostFtdcLargeVolumeType	PreOpenInterest;
	TThostFtdcPriceType	OpenPrice;
	TThostFtdcPriceType	HighestPrice;
	TThostFtdcPriceType	LowestPrice;
	TThostFtdcVolumeType	Volume;
	TThostFtdcMoneyType	Turnover;
	TThostFtdcLargeVolumeType	OpenInterest;
	TThostFtdcPriceType	ClosePrice;
	TThostFtdcPriceType	SettlementPrice;
	TThostFtdcPriceType	UpperLimitPrice;
	TThostFtdcPriceType	LowerLimitPrice;
	TThostFtdcRatioType	PreDelta;
	TThostFtdcRatioType	CurrDelta;
	TThostFtdcTimeType	UpdateTime;
	TThostFtdcMillisecType	UpdateMillisec;
	TThostFtdcDateType	ActionDay;
};

struct CThostFtdcMarketDataBaseField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcPriceType	PreSettlementPrice;
	TThostFtdcPriceType	PreClosePrice;
	TThostFtdcLargeVolumeType	PreOpenInterest;
	TThostFtdcRatioType	PreDelta;
};

struct CThostFtdcMarketDataStaticField
{
	TThostFtdcPriceType	OpenPrice;
	TThostFtdcPriceType	HighestPrice;
	TThostFtdcPriceType	LowestPrice;
	TThostFtdcPriceType	ClosePrice;
	TThostFtdcPriceType	UpperLimitPrice;
	TThostFtdcPriceType	LowerLimitPrice;
	TThostFtdcPriceType	SettlementPrice;
	TThostFtdcRatioType	CurrDelta;
};

struct CThostFtdcMarketDataLastMatchField
{
	TThostFtdcPriceType	LastPrice;
	TThostFtdcVolumeType	Volume;
	TThostFtdcMoneyType	Turnover;
	TThostFtdcLargeVolumeType	OpenInterest;
};

struct CThostFtdcMarketDataBestPriceField
{
	TThostFtdcPriceType	BidPrice1;
	TThostFtdcVolumeType	BidVolume1;
	TThostFtdcPriceType	AskPrice1;
	TThostFtdcVolumeType	AskVolume1;
};

struct CThostFtdcMarketDataBid23Field
{
	TThostFtdcPriceType	BidPrice2;
	TThostFtdcVolumeType	BidVolume2;
	TThostFtdcPriceType	BidPrice3;
	TThostFtdcVolumeType	BidVolume3;
};

struct CThostFtdcMarketDataAsk23Field
{
	TThostFtdcPriceType	AskPrice2;
	TThostFtdcVolumeType	AskVolume2;
	TThostFtdcPriceType	AskPrice3;
	TThostFtdcVolumeType	AskVolume3;
};

struct CThostFtdcMarketDataBid45Field
{
	TThostFtdcPriceType	BidPrice4;
	TThostFtdcVolumeType	BidVolume4;
	TThostFtdcPriceType	BidPrice5;
	TThostFtdcVolumeType	BidVolume5;
};

struct CThostFtdcMarketDataAsk45Field
{
	TThostFtdcPriceType	AskPrice4;
	TThostFtdcVolumeType	AskVolume4;
	TThostFtdcPriceType	AskPrice5;
	TThostFtdcVolumeType	AskVolume5;
};

struct CThostFtdcMarketDataUpdateTimeField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcTimeType	UpdateTime;
	TThostFtdcMillisecType	UpdateMillisec;
	TThostFtdcDateType	ActionDay;
};

struct CThostFtdcMarketDataExchangeField
{
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcSpecificInstrumentField
{
	TThostFtdcInstrumentIDType	InstrumentID;
};

struct CThostFtdcInstrumentStatusField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcSettlementGroupIDType	SettlementGroupID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInstrumentStatusType	InstrumentStatus;
	TThostFtdcTradingSegmentSNType	TradingSegmentSN;
	TThostFtdcTimeType	EnterTime;
	TThostFtdcInstStatusEnterReasonType	EnterReason;
};

struct CThostFtdcQryInstrumentStatusField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

struct CThostFtdcInvestorAccountField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcPositionProfitAlgorithmField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcAlgorithmType	Algorithm;
	TThostFtdcMemoType	Memo;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcDiscountField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	Discount;
};

struct CThostFtdcQryTransferBankField
{
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBrchID;
};

struct CThostFtdcTransferBankField
{
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBrchID;
	TThostFtdcBankNameType	BankName;
	TThostFtdcBoolType	IsActive;
};

struct CThostFtdcQryInvestorPositionDetailField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcInvestorPositionDetailField
{
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcDirectionType	Direction;
	TThostFtdcDateType	OpenDate;
	TThostFtdcTradeIDType	TradeID;
	TThostFtdcVolumeType	Volume;
	TThostFtdcPriceType	OpenPrice;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcTradeTypeType	TradeType;
	TThostFtdcInstrumentIDType	CombInstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcMoneyType	CloseProfitByDate;
	TThostFtdcMoneyType	CloseProfitByTrade;
	TThostFtdcMoneyType	PositionProfitByDate;
	TThostFtdcMoneyType	PositionProfitByTrade;
	TThostFtdcMoneyType	Margin;
	TThostFtdcMoneyType	ExchMargin;
	TThostFtdcRatioType	MarginRateByMoney;
	TThostFtdcRatioType	MarginRateByVolume;
	TThostFtdcPriceType	LastSettlementPrice;
	TThostFtdcPriceType	SettlementPrice;
	TThostFtdcVolumeType	CloseVolume;
	TThostFtdcMoneyType	CloseAmount;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcTradingAccountPasswordField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcMDTraderOfferField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcTraderConnectStatusType	TraderConnectStatus;
	TThostFtdcDateType	ConnectRequestDate;
	TThostFtdcTimeType	ConnectRequestTime;
	TThostFtdcDateType	LastReportDate;
	TThostFtdcTimeType	LastReportTime;
	TThostFtdcDateType	ConnectDate;
	TThostFtdcTimeType	ConnectTime;
	TThostFtdcDateType	StartDate;
	TThostFtdcTimeType	StartTime;
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcTradeIDType	MaxTradeID;
	TThostFtdcReturnCodeType	MaxOrderMessageReference;
};

struct CThostFtdcQryMDTraderOfferField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcTraderIDType	TraderID;
};

struct CThostFtdcQryNoticeField
{
	TThostFtdcBrokerIDType	BrokerID;
};

struct CThostFtdcNoticeField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcContentType	Content;
	TThostFtdcSequenceLabelType	SequenceLabel;
};

struct CThostFtdcUserRightField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcUserRightTypeType	UserRightType;
	TThostFtdcBoolType	IsForbidden;
};

struct CThostFtdcQrySettlementInfoConfirmField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcLoadSettlementInfoField
{
	TThostFtdcBrokerIDType	BrokerID;
};

struct CThostFtdcBrokerWithdrawAlgorithmField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAlgorithmType	WithdrawAlgorithm;
	TThostFtdcRatioType	UsingRatio;
	TThostFtdcIncludeCloseProfitType	IncludeCloseProfit;
	TThostFtdcAllWithoutTradeType	AllWithoutTrade;
	TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	TThostFtdcBoolType	IsBrokerUserEvent;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcRatioType	FundMortgageRatio;
	TThostFtdcBalanceAlgorithmType	BalanceAlgorithm;
};

struct CThostFtdcTradingAccountPasswordUpdateV1Field
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcPasswordType	OldPassword;
	TThostFtdcPasswordType	NewPassword;
};

struct CThostFtdcTradingAccountPasswordUpdateField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	OldPassword;
	TThostFtdcPasswordType	NewPassword;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcQryCombinationLegField
{
	TThostFtdcInstrumentIDType	CombInstrumentID;
	TThostFtdcLegIDType	LegID;
	TThostFtdcInstrumentIDType	LegInstrumentID;
};

struct CThostFtdcQrySyncStatusField
{
	TThostFtdcDateType	TradingDay;
};

struct CThostFtdcCombinationLegField
{
	TThostFtdcInstrumentIDType	CombInstrumentID;
	TThostFtdcLegIDType	LegID;
	TThostFtdcInstrumentIDType	LegInstrumentID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcLegMultipleType	LegMultiple;
	TThostFtdcImplyLevelType	ImplyLevel;
};

struct CThostFtdcSyncStatusField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcDataSyncStatusType	DataSyncStatus;
};

struct CThostFtdcQryLinkManField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcLinkManField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcPersonTypeType	PersonType;
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcPartyNameType	PersonName;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcPriorityType	Priority;
	TThostFtdcUOAZipCodeType	UOAZipCode;
	TThostFtdcInvestorFullNameType	PersonFullName;
};

struct CThostFtdcQryBrokerUserEventField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcUserEventTypeType	UserEventType;
};

struct CThostFtdcBrokerUserEventField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcUserEventTypeType	UserEventType;
	TThostFtdcSequenceNoType	EventSequenceNo;
	TThostFtdcDateType	EventDate;
	TThostFtdcTimeType	EventTime;
	TThostFtdcUserEventInfoType	UserEventInfo;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
};

struct CThostFtdcQryContractBankField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBrchID;
};

struct CThostFtdcContractBankField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBrchID;
	TThostFtdcBankNameType	BankName;
};

struct CThostFtdcInvestorPositionCombineDetailField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcDateType	OpenDate;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcTradeIDType	ComTradeID;
	TThostFtdcTradeIDType	TradeID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcDirectionType	Direction;
	TThostFtdcVolumeType	TotalAmt;
	TThostFtdcMoneyType	Margin;
	TThostFtdcMoneyType	ExchMargin;
	TThostFtdcRatioType	MarginRateByMoney;
	TThostFtdcRatioType	MarginRateByVolume;
	TThostFtdcLegIDType	LegID;
	TThostFtdcLegMultipleType	LegMultiple;
	TThostFtdcInstrumentIDType	CombInstrumentID;
	TThostFtdcTradeGroupIDType	TradeGroupID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcParkedOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	TThostFtdcDirectionType	Direction;
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeTotalOriginal;
	TThostFtdcTimeConditionType	TimeCondition;
	TThostFtdcDateType	GTDDate;
	TThostFtdcVolumeConditionType	VolumeCondition;
	TThostFtdcVolumeType	MinVolume;
	TThostFtdcContingentConditionType	ContingentCondition;
	TThostFtdcPriceType	StopPrice;
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	TThostFtdcBoolType	IsAutoSuspend;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBoolType	UserForceClose;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParkedOrderIDType	ParkedOrderID;
	TThostFtdcUserTypeType	UserType;
	TThostFtdcParkedOrderStatusType	Status;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcBoolType	IsSwapOrder;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcParkedOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	OrderActionRef;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeChange;
	TThostFtdcUserIDType	UserID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	TThostFtdcUserTypeType	UserType;
	TThostFtdcParkedOrderStatusType	Status;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryParkedOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryParkedOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcRemoveParkedOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcParkedOrderIDType	ParkedOrderID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcRemoveParkedOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcInvestorWithdrawAlgorithmField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcRatioType	UsingRatio;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcRatioType	FundMortgageRatio;
};

struct CThostFtdcQryInvestorPositionCombineDetailField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	CombInstrumentID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcMarketDataAveragePriceField
{
	TThostFtdcPriceType	AveragePrice;
};

struct CThostFtdcVerifyInvestorPasswordField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcPasswordType	Password;
};

struct CThostFtdcUserIPField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcIPAddressType	IPMask;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcTradingNoticeInfoField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcTimeType	SendTime;
	TThostFtdcContentType	FieldContent;
	TThostFtdcSequenceSeriesType	SequenceSeries;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcTradingNoticeField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorRangeType	InvestorRange;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcSequenceSeriesType	SequenceSeries;
	TThostFtdcUserIDType	UserID;
	TThostFtdcTimeType	SendTime;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcContentType	FieldContent;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryTradingNoticeField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryErrOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcErrOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	TThostFtdcDirectionType	Direction;
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeTotalOriginal;
	TThostFtdcTimeConditionType	TimeCondition;
	TThostFtdcDateType	GTDDate;
	TThostFtdcVolumeConditionType	VolumeCondition;
	TThostFtdcVolumeType	MinVolume;
	TThostFtdcContingentConditionType	ContingentCondition;
	TThostFtdcPriceType	StopPrice;
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	TThostFtdcBoolType	IsAutoSuspend;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcBoolType	UserForceClose;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcBoolType	IsSwapOrder;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcErrorConditionalOrderField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcUserIDType	UserID;
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	TThostFtdcDirectionType	Direction;
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeTotalOriginal;
	TThostFtdcTimeConditionType	TimeCondition;
	TThostFtdcDateType	GTDDate;
	TThostFtdcVolumeConditionType	VolumeCondition;
	TThostFtdcVolumeType	MinVolume;
	TThostFtdcContingentConditionType	ContingentCondition;
	TThostFtdcPriceType	StopPrice;
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	TThostFtdcBoolType	IsAutoSuspend;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	TThostFtdcSequenceNoType	NotifySequence;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcOrderSourceType	OrderSource;
	TThostFtdcOrderStatusType	OrderStatus;
	TThostFtdcOrderTypeType	OrderType;
	TThostFtdcVolumeType	VolumeTraded;
	TThostFtdcVolumeType	VolumeTotal;
	TThostFtdcDateType	InsertDate;
	TThostFtdcTimeType	InsertTime;
	TThostFtdcTimeType	ActiveTime;
	TThostFtdcTimeType	SuspendTime;
	TThostFtdcTimeType	UpdateTime;
	TThostFtdcTimeType	CancelTime;
	TThostFtdcTraderIDType	ActiveTraderID;
	TThostFtdcParticipantIDType	ClearingPartID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcBoolType	UserForceClose;
	TThostFtdcUserIDType	ActiveUserID;
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	TThostFtdcOrderSysIDType	RelativeOrderSysID;
	TThostFtdcVolumeType	ZCETotalTradedVolume;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcBoolType	IsSwapOrder;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
};

struct CThostFtdcQryErrOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcErrOrderActionField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcOrderActionRefType	OrderActionRef;
	TThostFtdcOrderRefType	OrderRef;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcFrontIDType	FrontID;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcOrderSysIDType	OrderSysID;
	TThostFtdcActionFlagType	ActionFlag;
	TThostFtdcPriceType	LimitPrice;
	TThostFtdcVolumeType	VolumeChange;
	TThostFtdcDateType	ActionDate;
	TThostFtdcTimeType	ActionTime;
	TThostFtdcTraderIDType	TraderID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcOrderLocalIDType	OrderLocalID;
	TThostFtdcOrderLocalIDType	ActionLocalID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcClientIDType	ClientID;
	TThostFtdcBusinessUnitType	BusinessUnit;
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	TThostFtdcUserIDType	UserID;
	TThostFtdcErrorMsgType	StatusMsg;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcBranchIDType	BranchID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
	TThostFtdcIPAddressType	IPAddress;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcQryExchangeSequenceField
{
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcExchangeSequenceField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcInstrumentStatusType	MarketStatus;
};

struct CThostFtdcQueryMaxOrderVolumeWithPriceField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcOffsetFlagType	OffsetFlag;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcVolumeType	MaxVolume;
	TThostFtdcPriceType	Price;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryBrokerTradingParamsField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcAccountIDType	AccountID;
};

struct CThostFtdcBrokerTradingParamsField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcMarginPriceTypeType	MarginPriceType;
	TThostFtdcAlgorithmType	Algorithm;
	TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcOptionRoyaltyPriceTypeType	OptionRoyaltyPriceType;
	TThostFtdcAccountIDType	AccountID;
};

struct CThostFtdcQryBrokerTradingAlgosField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInstrumentIDType	InstrumentID;
};

struct CThostFtdcBrokerTradingAlgosField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
	TThostFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
	TThostFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
};

struct CThostFtdcQueryBrokerDepositField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcBrokerDepositField
{
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcMoneyType	PreBalance;
	TThostFtdcMoneyType	CurrMargin;
	TThostFtdcMoneyType	CloseProfit;
	TThostFtdcMoneyType	Balance;
	TThostFtdcMoneyType	Deposit;
	TThostFtdcMoneyType	Withdraw;
	TThostFtdcMoneyType	Available;
	TThostFtdcMoneyType	Reserve;
	TThostFtdcMoneyType	FrozenMargin;
};

struct CThostFtdcQryCFMMCBrokerKeyField
{
	TThostFtdcBrokerIDType	BrokerID;
};

struct CThostFtdcCFMMCBrokerKeyField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcDateType	CreateDate;
	TThostFtdcTimeType	CreateTime;
	TThostFtdcSequenceNoType	KeyID;
	TThostFtdcCFMMCKeyType	CurrentKey;
	TThostFtdcCFMMCKeyKindType	KeyKind;
};

struct CThostFtdcCFMMCTradingAccountKeyField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcSequenceNoType	KeyID;
	TThostFtdcCFMMCKeyType	CurrentKey;
};

struct CThostFtdcQryCFMMCTradingAccountKeyField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcBrokerUserOTPParamField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcOTPVendorsIDType	OTPVendorsID;
	TThostFtdcSerialNumberType	SerialNumber;
	TThostFtdcAuthKeyType	AuthKey;
	TThostFtdcLastDriftType	LastDrift;
	TThostFtdcLastSuccessType	LastSuccess;
	TThostFtdcOTPTypeType	OTPType;
};

struct CThostFtdcManualSyncBrokerUserOTPField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcOTPTypeType	OTPType;
	TThostFtdcPasswordType	FirstOTP;
	TThostFtdcPasswordType	SecondOTP;
};

struct CThostFtdcCommRateModelField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	CommModelID;
	TThostFtdcCommModelNameType	CommModelName;
};

struct CThostFtdcQryCommRateModelField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	CommModelID;
};

struct CThostFtdcMarginModelField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	MarginModelID;
	TThostFtdcCommModelNameType	MarginModelName;
};

struct CThostFtdcQryMarginModelField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	MarginModelID;
};

struct CThostFtdcEWarrantOffsetField
{
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcDirectionType	Direction;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcVolumeType	Volume;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryEWarrantOffsetField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInstrumentIDType	InstrumentID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQryInvestorProductGroupMarginField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInstrumentIDType	ProductGroupID;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcInvestorProductGroupMarginField
{
	TThostFtdcInstrumentIDType	ProductGroupID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcDateType	TradingDay;
	TThostFtdcSettlementIDType	SettlementID;
	TThostFtdcMoneyType	FrozenMargin;
	TThostFtdcMoneyType	LongFrozenMargin;
	TThostFtdcMoneyType	ShortFrozenMargin;
	TThostFtdcMoneyType	UseMargin;
	TThostFtdcMoneyType	LongUseMargin;
	TThostFtdcMoneyType	ShortUseMargin;
	TThostFtdcMoneyType	ExchMargin;
	TThostFtdcMoneyType	LongExchMargin;
	TThostFtdcMoneyType	ShortExchMargin;
	TThostFtdcMoneyType	CloseProfit;
	TThostFtdcMoneyType	FrozenCommission;
	TThostFtdcMoneyType	Commission;
	TThostFtdcMoneyType	FrozenCash;
	TThostFtdcMoneyType	CashIn;
	TThostFtdcMoneyType	PositionProfit;
	TThostFtdcMoneyType	OffsetAmount;
	TThostFtdcMoneyType	LongOffsetAmount;
	TThostFtdcMoneyType	ShortOffsetAmount;
	TThostFtdcMoneyType	ExchOffsetAmount;
	TThostFtdcMoneyType	LongExchOffsetAmount;
	TThostFtdcMoneyType	ShortExchOffsetAmount;
	TThostFtdcHedgeFlagType	HedgeFlag;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcQueryCFMMCTradingAccountTokenField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

struct CThostFtdcCFMMCTradingAccountTokenField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcParticipantIDType	ParticipantID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcSequenceNoType	KeyID;
	TThostFtdcCFMMCTokenType	Token;
};

struct CThostFtdcQryProductGroupField
{
	TThostFtdcInstrumentIDType	ProductID;
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcProductGroupField
{
	TThostFtdcInstrumentIDType	ProductID;
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcInstrumentIDType	ProductGroupID;
};

struct CThostFtdcBulletinField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcDateType	TradingDay;
	TThostFtdcBulletinIDType	BulletinID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcNewsTypeType	NewsType;
	TThostFtdcNewsUrgencyType	NewsUrgency;
	TThostFtdcTimeType	SendTime;
	TThostFtdcAbstractType	Abstract;
	TThostFtdcComeFromType	ComeFrom;
	TThostFtdcContentType	Content;
	TThostFtdcURLLinkType	URLLink;
	TThostFtdcMarketIDType	MarketID;
};

struct CThostFtdcQryBulletinField
{
	TThostFtdcExchangeIDType	ExchangeID;
	TThostFtdcBulletinIDType	BulletinID;
	TThostFtdcSequenceNoType	SequenceNo;
	TThostFtdcNewsTypeType	NewsType;
	TThostFtdcNewsUrgencyType	NewsUrgency;
};

struct CThostFtdcReqOpenAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcGenderType	Gender;
	TThostFtdcCountryCodeType	CountryCode;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcMobilePhoneType	MobilePhone;
	TThostFtdcFaxType	Fax;
	TThostFtdcEMailType	EMail;
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcTIDType	TID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcReqCancelAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcGenderType	Gender;
	TThostFtdcCountryCodeType	CountryCode;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcMobilePhoneType	MobilePhone;
	TThostFtdcFaxType	Fax;
	TThostFtdcEMailType	EMail;
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcTIDType	TID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcReqChangeAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcGenderType	Gender;
	TThostFtdcCountryCodeType	CountryCode;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcMobilePhoneType	MobilePhone;
	TThostFtdcFaxType	Fax;
	TThostFtdcEMailType	EMail;
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcBankAccountType	NewBankAccount;
	TThostFtdcPasswordType	NewBankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcTIDType	TID;
	TThostFtdcDigestType	Digest;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcReqTransferField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcFutureSerialType	FutureSerial;
	TThostFtdcUserIDType	UserID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcTradeAmountType	TradeAmount;
	TThostFtdcTradeAmountType	FutureFetchAmount;
	TThostFtdcFeePayFlagType	FeePayFlag;
	TThostFtdcCustFeeType	CustFee;
	TThostFtdcFutureFeeType	BrokerFee;
	TThostFtdcAddInfoType	Message;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcTransferStatusType	TransferStatus;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcRspTransferField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcFutureSerialType	FutureSerial;
	TThostFtdcUserIDType	UserID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcTradeAmountType	TradeAmount;
	TThostFtdcTradeAmountType	FutureFetchAmount;
	TThostFtdcFeePayFlagType	FeePayFlag;
	TThostFtdcCustFeeType	CustFee;
	TThostFtdcFutureFeeType	BrokerFee;
	TThostFtdcAddInfoType	Message;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcTransferStatusType	TransferStatus;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcReqRepealField
{
	TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	TThostFtdcRepealedTimesType	RepealedTimes;
	TThostFtdcBankRepealFlagType	BankRepealFlag;
	TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	TThostFtdcPlateSerialType	PlateRepealSerial;
	TThostFtdcBankSerialType	BankRepealSerial;
	TThostFtdcFutureSerialType	FutureRepealSerial;
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcFutureSerialType	FutureSerial;
	TThostFtdcUserIDType	UserID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcTradeAmountType	TradeAmount;
	TThostFtdcTradeAmountType	FutureFetchAmount;
	TThostFtdcFeePayFlagType	FeePayFlag;
	TThostFtdcCustFeeType	CustFee;
	TThostFtdcFutureFeeType	BrokerFee;
	TThostFtdcAddInfoType	Message;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcTransferStatusType	TransferStatus;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcRspRepealField
{
	TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	TThostFtdcRepealedTimesType	RepealedTimes;
	TThostFtdcBankRepealFlagType	BankRepealFlag;
	TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	TThostFtdcPlateSerialType	PlateRepealSerial;
	TThostFtdcBankSerialType	BankRepealSerial;
	TThostFtdcFutureSerialType	FutureRepealSerial;
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcFutureSerialType	FutureSerial;
	TThostFtdcUserIDType	UserID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcTradeAmountType	TradeAmount;
	TThostFtdcTradeAmountType	FutureFetchAmount;
	TThostFtdcFeePayFlagType	FeePayFlag;
	TThostFtdcCustFeeType	CustFee;
	TThostFtdcFutureFeeType	BrokerFee;
	TThostFtdcAddInfoType	Message;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcTransferStatusType	TransferStatus;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcReqQueryAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcFutureSerialType	FutureSerial;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcRspQueryAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcFutureSerialType	FutureSerial;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcTradeAmountType	BankUseAmount;
	TThostFtdcTradeAmountType	BankFetchAmount;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcFutureSignIOField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDigestType	Digest;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
};

struct CThostFtdcRspFutureSignInField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDigestType	Digest;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcPasswordKeyType	PinKey;
	TThostFtdcPasswordKeyType	MacKey;
};

struct CThostFtdcReqFutureSignOutField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDigestType	Digest;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
};

struct CThostFtdcRspFutureSignOutField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDigestType	Digest;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcReqQueryTradeResultBySerialField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcSerialType	Reference;
	TThostFtdcInstitutionTypeType	RefrenceIssureType;
	TThostFtdcOrganCodeType	RefrenceIssure;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcTradeAmountType	TradeAmount;
	TThostFtdcDigestType	Digest;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcRspQueryTradeResultBySerialField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcSerialType	Reference;
	TThostFtdcInstitutionTypeType	RefrenceIssureType;
	TThostFtdcOrganCodeType	RefrenceIssure;
	TThostFtdcReturnCodeType	OriginReturnCode;
	TThostFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcTradeAmountType	TradeAmount;
	TThostFtdcDigestType	Digest;
};

struct CThostFtdcReqDayEndFileReadyField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcFileBusinessCodeType	FileBusinessCode;
	TThostFtdcDigestType	Digest;
};

struct CThostFtdcReturnResultField
{
	TThostFtdcReturnCodeType	ReturnCode;
	TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

struct CThostFtdcVerifyFuturePasswordField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcTIDType	TID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcVerifyCustInfoField
{
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcVerifyFuturePasswordAndCustInfoField
{
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcDepositResultInformField
{
	TThostFtdcDepositSeqNoType	DepositSeqNo;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcMoneyType	Deposit;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcReturnCodeType	ReturnCode;
	TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

struct CThostFtdcReqSyncKeyField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcAddInfoType	Message;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
};

struct CThostFtdcRspSyncKeyField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcAddInfoType	Message;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcNotifyQueryAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcFutureSerialType	FutureSerial;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcTradeAmountType	BankUseAmount;
	TThostFtdcTradeAmountType	BankFetchAmount;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcTransferSerialField
{
	TThostFtdcPlateSerialType	PlateSerial;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcDateType	TradingDay;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcFutureAccTypeType	FutureAccType;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcInvestorIDType	InvestorID;
	TThostFtdcFutureSerialType	FutureSerial;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcTradeAmountType	TradeAmount;
	TThostFtdcCustFeeType	CustFee;
	TThostFtdcFutureFeeType	BrokerFee;
	TThostFtdcAvailabilityFlagType	AvailabilityFlag;
	TThostFtdcOperatorCodeType	OperatorCode;
	TThostFtdcBankAccountType	BankNewAccount;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcQryTransferSerialField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcBankIDType	BankID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcNotifyFutureSignInField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDigestType	Digest;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcPasswordKeyType	PinKey;
	TThostFtdcPasswordKeyType	MacKey;
};

struct CThostFtdcNotifyFutureSignOutField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDigestType	Digest;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcNotifySyncKeyField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcAddInfoType	Message;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcRequestIDType	RequestID;
	TThostFtdcTIDType	TID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcQryAccountregisterField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcAccountregisterField
{
	TThostFtdcTradeDateType	TradeDay;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcOpenOrDestroyType	OpenOrDestroy;
	TThostFtdcTradeDateType	RegDate;
	TThostFtdcTradeDateType	OutDate;
	TThostFtdcTIDType	TID;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcOpenAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcGenderType	Gender;
	TThostFtdcCountryCodeType	CountryCode;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcMobilePhoneType	MobilePhone;
	TThostFtdcFaxType	Fax;
	TThostFtdcEMailType	EMail;
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcTIDType	TID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcCancelAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcGenderType	Gender;
	TThostFtdcCountryCodeType	CountryCode;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcMobilePhoneType	MobilePhone;
	TThostFtdcFaxType	Fax;
	TThostFtdcEMailType	EMail;
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcDeviceIDType	DeviceID;
	TThostFtdcBankAccTypeType	BankSecuAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcBankAccountType	BankSecuAcc;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcOperNoType	OperNo;
	TThostFtdcTIDType	TID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcChangeAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcGenderType	Gender;
	TThostFtdcCountryCodeType	CountryCode;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcMobilePhoneType	MobilePhone;
	TThostFtdcFaxType	Fax;
	TThostFtdcEMailType	EMail;
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcBankAccountType	NewBankAccount;
	TThostFtdcPasswordType	NewBankPassWord;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcPwdFlagType	BankPwdFlag;
	TThostFtdcPwdFlagType	SecuPwdFlag;
	TThostFtdcTIDType	TID;
	TThostFtdcDigestType	Digest;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

struct CThostFtdcSecAgentACIDMapField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcAccountIDType	BrokerSecAgentID;
};

struct CThostFtdcQrySecAgentACIDMapField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcUserRightsAssignField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

struct CThostFtdcBrokerUserRightAssignField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcDRIdentityIDType	DRIdentityID;
	TThostFtdcBoolType	Tradeable;
};

struct CThostFtdcDRTransferField
{
	TThostFtdcDRIdentityIDType	OrigDRIdentityID;
	TThostFtdcDRIdentityIDType	DestDRIdentityID;
	TThostFtdcBrokerIDType	OrigBrokerID;
	TThostFtdcBrokerIDType	DestBrokerID;
};

struct CThostFtdcFensUserInfoField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcLoginModeType	LoginMode;
};

struct CThostFtdcCurrTransferIdentityField
{
	TThostFtdcDRIdentityIDType	IdentityID;
};

struct CThostFtdcLoginForbiddenUserField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcIPAddressType	IPAddress;
};

struct CThostFtdcQryLoginForbiddenUserField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcMulticastGroupInfoField
{
	TThostFtdcIPAddressType	GroupIP;
	TThostFtdcIPPortType	GroupPort;
	TThostFtdcIPAddressType	SourceIP;
};

struct CThostFtdcTradingAccountReserveField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcMoneyType	Reserve;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcQryLoginForbiddenIPField
{
	TThostFtdcIPAddressType	IPAddress;
};

struct CThostFtdcQryIPListField
{
	TThostFtdcIPAddressType	IPAddress;
};

struct CThostFtdcQryUserRightsAssignField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcReserveOpenAccountConfirmField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcLongIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcGenderType	Gender;
	TThostFtdcCountryCodeType	CountryCode;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcMobilePhoneType	MobilePhone;
	TThostFtdcFaxType	Fax;
	TThostFtdcEMailType	EMail;
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcTIDType	TID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcPasswordType	Password;
	TThostFtdcBankSerialType	BankReserveOpenSeq;
	TThostFtdcTradeDateType	BookDate;
	TThostFtdcPasswordType	BookPsw;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcReserveOpenAccountField
{
	TThostFtdcTradeCodeType	TradeCode;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankBrchIDType	BankBranchID;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	TThostFtdcTradeDateType	TradeDate;
	TThostFtdcTradeTimeType	TradeTime;
	TThostFtdcBankSerialType	BankSerial;
	TThostFtdcTradeDateType	TradingDay;
	TThostFtdcSerialType	PlateSerial;
	TThostFtdcLastFragmentType	LastFragment;
	TThostFtdcSessionIDType	SessionID;
	TThostFtdcLongIndividualNameType	CustomerName;
	TThostFtdcIdCardTypeType	IdCardType;
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	TThostFtdcGenderType	Gender;
	TThostFtdcCountryCodeType	CountryCode;
	TThostFtdcCustTypeType	CustType;
	TThostFtdcAddressType	Address;
	TThostFtdcZipCodeType	ZipCode;
	TThostFtdcTelephoneType	Telephone;
	TThostFtdcMobilePhoneType	MobilePhone;
	TThostFtdcFaxType	Fax;
	TThostFtdcEMailType	EMail;
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcPasswordType	BankPassWord;
	TThostFtdcInstallIDType	InstallID;
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	TThostFtdcCurrencyIDType	CurrencyID;
	TThostFtdcDigestType	Digest;
	TThostFtdcBankAccTypeType	BankAccType;
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	TThostFtdcTIDType	TID;
	TThostFtdcReserveOpenAccStasType	ReserveOpenAccStas;
	TThostFtdcErrorIDType	ErrorID;
	TThostFtdcErrorMsgType	ErrorMsg;
};

struct CThostFtdcAccountPropertyField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	AccountID;
	TThostFtdcBankIDType	BankID;
	TThostFtdcBankAccountType	BankAccount;
	TThostFtdcInvestorFullNameType	OpenName;
	TThostFtdcOpenBankType	OpenBank;
	TThostFtdcBoolType	IsActive;
	TThostFtdcAccountSourceTypeType	AccountSourceType;
	TThostFtdcDateType	OpenDate;
	TThostFtdcDateType	CancelDate;
	TThostFtdcOperatorIDType	OperatorID;
	TThostFtdcDateType	OperateDate;
	TThostFtdcTimeType	OperateTime;
	TThostFtdcCurrencyIDType	CurrencyID;
};

struct CThostFtdcQryCurrDRIdentityField
{
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

struct CThostFtdcCurrDRIdentityField
{
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

struct CThostFtdcQrySecAgentCheckModeField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcQrySecAgentTradeInfoField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcAccountIDType	BrokerSecAgentID;
};

struct CThostFtdcUserSystemInfoField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcSystemInfoLenType	ClientSystemInfoLen;
	TThostFtdcClientSystemInfoType	ClientSystemInfo;
	TThostFtdcIPAddressType	ClientPublicIP;
	TThostFtdcIPPortType	ClientIPPort;
	TThostFtdcTimeType	ClientLoginTime;
	TThostFtdcAppIDType	ClientAppID;
};

struct CThostFtdcReqUserAuthMethodField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcRspUserAuthMethodField
{
	TThostFtdcCurrentAuthMethodType	UsableAuthMethod;
};

struct CThostFtdcReqGenUserCaptchaField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcRspGenUserCaptchaField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcCaptchaInfoLenType	CaptchaInfoLen;
	TThostFtdcCaptchaInfoType	CaptchaInfo;
};

struct CThostFtdcReqGenUserTextField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
};

struct CThostFtdcRspGenUserTextField
{
	TThostFtdcUserTextSeqType	UserTextSeq;
};

struct CThostFtdcReqUserLoginWithCaptchaField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcPasswordType	Password;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcProductInfoType	InterfaceProductInfo;
	TThostFtdcProtocolInfoType	ProtocolInfo;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcIPAddressType	ClientIPAddress;
	TThostFtdcLoginRemarkType	LoginRemark;
	TThostFtdcPasswordType	Captcha;
	TThostFtdcIPPortType	ClientIPPort;
};

struct CThostFtdcReqUserLoginWithTextField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcPasswordType	Password;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcProductInfoType	InterfaceProductInfo;
	TThostFtdcProtocolInfoType	ProtocolInfo;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcIPAddressType	ClientIPAddress;
	TThostFtdcLoginRemarkType	LoginRemark;
	TThostFtdcPasswordType	Text;
	TThostFtdcIPPortType	ClientIPPort;
};

struct CThostFtdcReqUserLoginWithOTPField
{
	TThostFtdcDateType	TradingDay;
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcPasswordType	Password;
	TThostFtdcProductInfoType	UserProductInfo;
	TThostFtdcProductInfoType	InterfaceProductInfo;
	TThostFtdcProtocolInfoType	ProtocolInfo;
	TThostFtdcMacAddressType	MacAddress;
	TThostFtdcIPAddressType	ClientIPAddress;
	TThostFtdcLoginRemarkType	LoginRemark;
	TThostFtdcPasswordType	OTPPassword;
	TThostFtdcIPPortType	ClientIPPort;
};

struct CThostFtdcReqApiHandshakeField
{
	TThostFtdcCryptoKeyVersionType	CryptoKeyVersion;
};

struct CThostFtdcRspApiHandshakeField
{
	TThostFtdcHandshakeDataLenType	FrontHandshakeDataLen;
	TThostFtdcHandshakeDataType	FrontHandshakeData;
	TThostFtdcBoolType	IsApiAuthEnabled;
};

struct CThostFtdcReqVerifyApiKeyField
{
	TThostFtdcHandshakeDataLenType	ApiHandshakeDataLen;
	TThostFtdcHandshakeDataType	ApiHandshakeData;
};

struct CThostFtdcDepartmentUserField
{
	TThostFtdcBrokerIDType	BrokerID;
	TThostFtdcUserIDType	UserID;
	TThostFtdcDepartmentRangeType	InvestorRange;
	TThostFtdcInvestorIDType	InvestorID;
};

struct CThostFtdcQueryFreqField
{
	TThostFtdcQueryFreqType	QueryFreq;
};



#endif
