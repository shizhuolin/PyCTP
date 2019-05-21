
#ifndef THOST_FTDCDATATYPE_H
#define THOST_FTDCDATATYPE_H

enum THOST_TE_RESUME_TYPE
{
	THOST_TERT_RESTART = 0,
	THOST_TERT_RESUME,
	THOST_TERT_QUICK
};

typedef char TThostFtdcTraderIDType[21];

typedef char TThostFtdcInvestorIDType[13];

typedef char TThostFtdcBrokerIDType[11];

typedef char TThostFtdcBrokerAbbrType[9];

typedef char TThostFtdcBrokerNameType[81];

typedef char TThostFtdcExchangeInstIDType[31];

typedef char TThostFtdcOrderRefType[13];

typedef char TThostFtdcParticipantIDType[11];

typedef char TThostFtdcUserIDType[16];

typedef char TThostFtdcPasswordType[41];

typedef char TThostFtdcClientIDType[11];

typedef char TThostFtdcInstrumentIDType[31];

typedef char TThostFtdcInstrumentCodeType[31];

typedef char TThostFtdcMarketIDType[31];

typedef char TThostFtdcProductNameType[21];

typedef char TThostFtdcExchangeIDType[9];

typedef char TThostFtdcExchangeNameType[61];

typedef char TThostFtdcExchangeAbbrType[9];

typedef char TThostFtdcExchangeFlagType[2];

typedef char TThostFtdcMacAddressType[21];

typedef char TThostFtdcSystemIDType[21];

#define THOST_FTDC_EXP_Normal '0'
#define THOST_FTDC_EXP_GenOrderByTrade '1'

typedef char TThostFtdcExchangePropertyType;

typedef char TThostFtdcDateType[9];

typedef char TThostFtdcTimeType[9];

typedef char TThostFtdcLongTimeType[13];

typedef char TThostFtdcInstrumentNameType[21];

typedef char TThostFtdcSettlementGroupIDType[9];

typedef char TThostFtdcOrderSysIDType[21];

typedef char TThostFtdcTradeIDType[21];

typedef char TThostFtdcCommandTypeType[65];

typedef char TThostFtdcIPAddressType[16];

typedef int TThostFtdcIPPortType;

typedef char TThostFtdcProductInfoType[11];

typedef char TThostFtdcProtocolInfoType[11];

typedef char TThostFtdcBusinessUnitType[21];

typedef char TThostFtdcDepositSeqNoType[15];

typedef char TThostFtdcIdentifiedCardNoType[51];

#define THOST_FTDC_ICT_EID '0'
#define THOST_FTDC_ICT_IDCard '1'
#define THOST_FTDC_ICT_OfficerIDCard '2'
#define THOST_FTDC_ICT_PoliceIDCard '3'
#define THOST_FTDC_ICT_SoldierIDCard '4'
#define THOST_FTDC_ICT_HouseholdRegister  '5'
#define THOST_FTDC_ICT_Passport '6'
#define THOST_FTDC_ICT_TaiwanCompatriotIDCard  '7'
#define THOST_FTDC_ICT_HomeComingCard '8'
#define THOST_FTDC_ICT_LicenseNo '9'
#define THOST_FTDC_ICT_TaxNo 'A'
#define THOST_FTDC_ICT_HMMainlandTravelPermit  'B'
#define THOST_FTDC_ICT_TwMainlandTravelPermit 'C'
#define THOST_FTDC_ICT_DrivingLicense 'D'
#define THOST_FTDC_ICT_SocialID 'F'
#define THOST_FTDC_ICT_LocalID 'G'
#define THOST_FTDC_ICT_BusinessRegistration  'H'
#define THOST_FTDC_ICT_HKMCIDCard 'I'
#define THOST_FTDC_ICT_AccountsPermits 'J'
#define THOST_FTDC_ICT_FrgPrmtRdCard 'K'
#define THOST_FTDC_ICT_CptMngPrdLetter 'L'
#define THOST_FTDC_ICT_OtherCard 'x'

typedef char TThostFtdcIdCardTypeType;

typedef char TThostFtdcOrderLocalIDType[13];

typedef char TThostFtdcUserNameType[81];

typedef char TThostFtdcPartyNameType[81];

typedef char TThostFtdcErrorMsgType[81];

typedef char TThostFtdcFieldNameType[2049];

typedef char TThostFtdcFieldContentType[2049];

typedef char TThostFtdcSystemNameType[41];

typedef char TThostFtdcContentType[501];

#define THOST_FTDC_IR_All '1'
#define THOST_FTDC_IR_Group '2'
#define THOST_FTDC_IR_Single '3'

typedef char TThostFtdcInvestorRangeType;

#define THOST_FTDC_DR_All '1'
#define THOST_FTDC_DR_Group '2'
#define THOST_FTDC_DR_Single '3'

typedef char TThostFtdcDepartmentRangeType;

#define THOST_FTDC_DS_Asynchronous '1'
#define THOST_FTDC_DS_Synchronizing '2'
#define THOST_FTDC_DS_Synchronized '3'

typedef char TThostFtdcDataSyncStatusType;

#define THOST_FTDC_BDS_Synchronized '1'
#define THOST_FTDC_BDS_Synchronizing '2'

typedef char TThostFtdcBrokerDataSyncStatusType;

#define THOST_FTDC_ECS_NoConnection '1'
#define THOST_FTDC_ECS_QryInstrumentSent '2'
#define THOST_FTDC_ECS_GotInformation '9'

typedef char TThostFtdcExchangeConnectStatusType;

#define THOST_FTDC_TCS_NotConnected '1'
#define THOST_FTDC_TCS_Connected '2'
#define THOST_FTDC_TCS_QryInstrumentSent '3'
#define THOST_FTDC_TCS_SubPrivateFlow '4'

typedef char TThostFtdcTraderConnectStatusType;

#define THOST_FTDC_FC_DataAsync '1'
#define THOST_FTDC_FC_ForceUserLogout '2'
#define THOST_FTDC_FC_UserPasswordUpdate '3'
#define THOST_FTDC_FC_BrokerPasswordUpdate '4'
#define THOST_FTDC_FC_InvestorPasswordUpdate '5'
#define THOST_FTDC_FC_OrderInsert '6'
#define THOST_FTDC_FC_OrderAction '7'
#define THOST_FTDC_FC_SyncSystemData '8'
#define THOST_FTDC_FC_SyncBrokerData '9'
#define THOST_FTDC_FC_BachSyncBrokerData 'A'
#define THOST_FTDC_FC_SuperQuery 'B'
#define THOST_FTDC_FC_ParkedOrderInsert 'C'
#define THOST_FTDC_FC_ParkedOrderAction 'D'
#define THOST_FTDC_FC_SyncOTP 'E'
#define THOST_FTDC_FC_DeleteOrder 'F'

typedef char TThostFtdcFunctionCodeType;

#define THOST_FTDC_BFC_ForceUserLogout '1'
#define THOST_FTDC_BFC_UserPasswordUpdate '2'
#define THOST_FTDC_BFC_SyncBrokerData '3'
#define THOST_FTDC_BFC_BachSyncBrokerData '4'
#define THOST_FTDC_BFC_OrderInsert '5'
#define THOST_FTDC_BFC_OrderAction '6'
#define THOST_FTDC_BFC_AllQuery '7'
#define THOST_FTDC_BFC_log 'a'
#define THOST_FTDC_BFC_BaseQry 'b'
#define THOST_FTDC_BFC_TradeQry 'c'
#define THOST_FTDC_BFC_Trade 'd'
#define THOST_FTDC_BFC_Virement 'e'
#define THOST_FTDC_BFC_Risk 'f'
#define THOST_FTDC_BFC_Session 'g'
#define THOST_FTDC_BFC_RiskNoticeCtl 'h'
#define THOST_FTDC_BFC_RiskNotice 'i'
#define THOST_FTDC_BFC_BrokerDeposit 'j'
#define THOST_FTDC_BFC_QueryFund 'k'
#define THOST_FTDC_BFC_QueryOrder 'l'
#define THOST_FTDC_BFC_QueryTrade 'm'
#define THOST_FTDC_BFC_QueryPosition 'n'
#define THOST_FTDC_BFC_QueryMarketData 'o'
#define THOST_FTDC_BFC_QueryUserEvent 'p'
#define THOST_FTDC_BFC_QueryRiskNotify 'q'
#define THOST_FTDC_BFC_QueryFundChange 'r'
#define THOST_FTDC_BFC_QueryInvestor 's'
#define THOST_FTDC_BFC_QueryTradingCode 't'
#define THOST_FTDC_BFC_ForceClose 'u'
#define THOST_FTDC_BFC_PressTest 'v'
#define THOST_FTDC_BFC_RemainCalc 'w'
#define THOST_FTDC_BFC_NetPositionInd 'x'
#define THOST_FTDC_BFC_RiskPredict 'y'
#define THOST_FTDC_BFC_DataExport 'z'
#define THOST_FTDC_BFC_RiskTargetSetup 'A'
#define THOST_FTDC_BFC_MarketDataWarn 'B'
#define THOST_FTDC_BFC_QryBizNotice 'C'
#define THOST_FTDC_BFC_CfgBizNotice 'D'
#define THOST_FTDC_BFC_SyncOTP 'E'
#define THOST_FTDC_BFC_SendBizNotice 'F'
#define THOST_FTDC_BFC_CfgRiskLevelStd 'G'
#define THOST_FTDC_BFC_TbCommand 'H'
#define THOST_FTDC_BFC_DeleteOrder 'J'
#define THOST_FTDC_BFC_ParkedOrderInsert 'K'
#define THOST_FTDC_BFC_ParkedOrderAction 'L'
#define THOST_FTDC_BFC_ExecOrderNoCheck 'M'
#define THOST_FTDC_BFC_Designate 'N'
#define THOST_FTDC_BFC_StockDisposal 'O'
#define THOST_FTDC_BFC_BrokerDepositWarn 'Q'
#define THOST_FTDC_BFC_CoverWarn 'S'
#define THOST_FTDC_BFC_PreExecOrder 'T'
#define THOST_FTDC_BFC_ExecOrderRisk 'P'
#define THOST_FTDC_BFC_PosiLimitWarn 'U'
#define THOST_FTDC_BFC_QryPosiLimit 'V'
#define THOST_FTDC_BFC_FBSign 'W'
#define THOST_FTDC_BFC_FBAccount 'X'

typedef char TThostFtdcBrokerFunctionCodeType;

#define THOST_FTDC_OAS_Submitted 'a'
#define THOST_FTDC_OAS_Accepted 'b'
#define THOST_FTDC_OAS_Rejected 'c'

typedef char TThostFtdcOrderActionStatusType;

#define THOST_FTDC_OST_AllTraded '0'
#define THOST_FTDC_OST_PartTradedQueueing '1'
#define THOST_FTDC_OST_PartTradedNotQueueing '2'
#define THOST_FTDC_OST_NoTradeQueueing '3'
#define THOST_FTDC_OST_NoTradeNotQueueing '4'
#define THOST_FTDC_OST_Canceled '5'
#define THOST_FTDC_OST_Unknown 'a'
#define THOST_FTDC_OST_NotTouched 'b'
#define THOST_FTDC_OST_Touched 'c'

typedef char TThostFtdcOrderStatusType;

#define THOST_FTDC_OSS_InsertSubmitted '0'
#define THOST_FTDC_OSS_CancelSubmitted '1'
#define THOST_FTDC_OSS_ModifySubmitted '2'
#define THOST_FTDC_OSS_Accepted '3'
#define THOST_FTDC_OSS_InsertRejected '4'
#define THOST_FTDC_OSS_CancelRejected '5'
#define THOST_FTDC_OSS_ModifyRejected '6'

typedef char TThostFtdcOrderSubmitStatusType;

#define THOST_FTDC_PSD_Today '1'
#define THOST_FTDC_PSD_History '2'

typedef char TThostFtdcPositionDateType;

#define THOST_FTDC_PDT_UseHistory '1'
#define THOST_FTDC_PDT_NoUseHistory '2'

typedef char TThostFtdcPositionDateTypeType;

#define THOST_FTDC_ER_Broker '1'
#define THOST_FTDC_ER_Host '2'
#define THOST_FTDC_ER_Maker '3'

typedef char TThostFtdcTradingRoleType;

#define THOST_FTDC_PC_Futures '1'
#define THOST_FTDC_PC_Options '2'
#define THOST_FTDC_PC_Combination '3'
#define THOST_FTDC_PC_Spot '4'
#define THOST_FTDC_PC_EFP '5'
#define THOST_FTDC_PC_SpotOption '6'

typedef char TThostFtdcProductClassType;

#define THOST_FTDC_IP_NotStart '0'
#define THOST_FTDC_IP_Started '1'
#define THOST_FTDC_IP_Pause '2'
#define THOST_FTDC_IP_Expired '3'

typedef char TThostFtdcInstLifePhaseType;

#define THOST_FTDC_D_Buy '0'
#define THOST_FTDC_D_Sell '1'

typedef char TThostFtdcDirectionType;

#define THOST_FTDC_PT_Net '1'
#define THOST_FTDC_PT_Gross '2'

typedef char TThostFtdcPositionTypeType;

#define THOST_FTDC_PD_Net '1'
#define THOST_FTDC_PD_Long '2'
#define THOST_FTDC_PD_Short '3'

typedef char TThostFtdcPosiDirectionType;

#define THOST_FTDC_SS_NonActive '1'
#define THOST_FTDC_SS_Startup '2'
#define THOST_FTDC_SS_Operating '3'
#define THOST_FTDC_SS_Settlement '4'
#define THOST_FTDC_SS_SettlementFinished '5'

typedef char TThostFtdcSysSettlementStatusType;

#define THOST_FTDC_RA_Trade '0'
#define THOST_FTDC_RA_Settlement '1'

typedef char TThostFtdcRatioAttrType;

#define THOST_FTDC_HF_Speculation '1'
#define THOST_FTDC_HF_Arbitrage '2'
#define THOST_FTDC_HF_Hedge '3'
#define THOST_FTDC_HF_MarketMaker '5'

typedef char TThostFtdcHedgeFlagType;

#define THOST_FTDC_BHF_Speculation '1'
#define THOST_FTDC_BHF_Arbitrage '2'
#define THOST_FTDC_BHF_Hedge '3'

typedef char TThostFtdcBillHedgeFlagType;

#define THOST_FTDC_CIDT_Speculation '1'
#define THOST_FTDC_CIDT_Arbitrage '2'
#define THOST_FTDC_CIDT_Hedge '3'
#define THOST_FTDC_CIDT_MarketMaker '5'

typedef char TThostFtdcClientIDTypeType;

#define THOST_FTDC_OPT_AnyPrice '1'
#define THOST_FTDC_OPT_LimitPrice '2'
#define THOST_FTDC_OPT_BestPrice '3'
#define THOST_FTDC_OPT_LastPrice '4'
#define THOST_FTDC_OPT_LastPricePlusOneTicks '5'
#define THOST_FTDC_OPT_LastPricePlusTwoTicks '6'
#define THOST_FTDC_OPT_LastPricePlusThreeTicks '7'
#define THOST_FTDC_OPT_AskPrice1 '8'
#define THOST_FTDC_OPT_AskPrice1PlusOneTicks '9'
#define THOST_FTDC_OPT_AskPrice1PlusTwoTicks 'A'
#define THOST_FTDC_OPT_AskPrice1PlusThreeTicks 'B'
#define THOST_FTDC_OPT_BidPrice1 'C'
#define THOST_FTDC_OPT_BidPrice1PlusOneTicks 'D'
#define THOST_FTDC_OPT_BidPrice1PlusTwoTicks 'E'
#define THOST_FTDC_OPT_BidPrice1PlusThreeTicks 'F'
#define THOST_FTDC_OPT_FiveLevelPrice 'G'

typedef char TThostFtdcOrderPriceTypeType;

#define THOST_FTDC_OF_Open '0'
#define THOST_FTDC_OF_Close '1'
#define THOST_FTDC_OF_ForceClose '2'
#define THOST_FTDC_OF_CloseToday '3'
#define THOST_FTDC_OF_CloseYesterday '4'
#define THOST_FTDC_OF_ForceOff '5'
#define THOST_FTDC_OF_LocalForceClose '6'

typedef char TThostFtdcOffsetFlagType;

#define THOST_FTDC_FCC_NotForceClose '0'
#define THOST_FTDC_FCC_LackDeposit '1'
#define THOST_FTDC_FCC_ClientOverPositionLimit '2'
#define THOST_FTDC_FCC_MemberOverPositionLimit '3'
#define THOST_FTDC_FCC_NotMultiple '4'
#define THOST_FTDC_FCC_Violation '5'
#define THOST_FTDC_FCC_Other '6'
#define THOST_FTDC_FCC_PersonDeliv '7'

typedef char TThostFtdcForceCloseReasonType;

#define THOST_FTDC_ORDT_Normal '0'
#define THOST_FTDC_ORDT_DeriveFromQuote '1'
#define THOST_FTDC_ORDT_DeriveFromCombination '2'
#define THOST_FTDC_ORDT_Combination '3'
#define THOST_FTDC_ORDT_ConditionalOrder '4'
#define THOST_FTDC_ORDT_Swap '5'
#define THOST_FTDC_ORDT_DeriveFromEFP '6'

typedef char TThostFtdcOrderTypeType;

#define THOST_FTDC_TC_IOC '1'
#define THOST_FTDC_TC_GFS '2'
#define THOST_FTDC_TC_GFD '3'
#define THOST_FTDC_TC_GTD '4'
#define THOST_FTDC_TC_GTC '5'
#define THOST_FTDC_TC_GFA '6'

typedef char TThostFtdcTimeConditionType;

#define THOST_FTDC_VC_AV '1'
#define THOST_FTDC_VC_MV '2'
#define THOST_FTDC_VC_CV '3'

typedef char TThostFtdcVolumeConditionType;

#define THOST_FTDC_CC_Immediately '1'
#define THOST_FTDC_CC_Touch '2'
#define THOST_FTDC_CC_TouchProfit '3'
#define THOST_FTDC_CC_ParkedOrder '4'
#define THOST_FTDC_CC_LastPriceGreaterThanStopPrice '5'
#define THOST_FTDC_CC_LastPriceGreaterEqualStopPrice '6'
#define THOST_FTDC_CC_LastPriceLesserThanStopPrice '7'
#define THOST_FTDC_CC_LastPriceLesserEqualStopPrice '8'
#define THOST_FTDC_CC_AskPriceGreaterThanStopPrice '9'
#define THOST_FTDC_CC_AskPriceGreaterEqualStopPrice 'A'
#define THOST_FTDC_CC_AskPriceLesserThanStopPrice 'B'
#define THOST_FTDC_CC_AskPriceLesserEqualStopPrice 'C'
#define THOST_FTDC_CC_BidPriceGreaterThanStopPrice 'D'
#define THOST_FTDC_CC_BidPriceGreaterEqualStopPrice 'E'
#define THOST_FTDC_CC_BidPriceLesserThanStopPrice 'F'
#define THOST_FTDC_CC_BidPriceLesserEqualStopPrice 'H'

typedef char TThostFtdcContingentConditionType;

#define THOST_FTDC_AF_Delete '0'
#define THOST_FTDC_AF_Modify '3'

typedef char TThostFtdcActionFlagType;

#define THOST_FTDC_TR_Allow '0'
#define THOST_FTDC_TR_CloseOnly '1'
#define THOST_FTDC_TR_Forbidden '2'

typedef char TThostFtdcTradingRightType;

#define THOST_FTDC_OSRC_Participant '0'
#define THOST_FTDC_OSRC_Administrator '1'

typedef char TThostFtdcOrderSourceType;

#define THOST_FTDC_TRDT_SplitCombination '#'
#define THOST_FTDC_TRDT_Common '0'
#define THOST_FTDC_TRDT_OptionsExecution '1'
#define THOST_FTDC_TRDT_OTC '2'
#define THOST_FTDC_TRDT_EFPDerived '3'
#define THOST_FTDC_TRDT_CombinationDerived '4'

typedef char TThostFtdcTradeTypeType;

#define THOST_FTDC_PSRC_LastPrice '0'
#define THOST_FTDC_PSRC_Buy '1'
#define THOST_FTDC_PSRC_Sell '2'

typedef char TThostFtdcPriceSourceType;

#define THOST_FTDC_IS_BeforeTrading '0'
#define THOST_FTDC_IS_NoTrading '1'
#define THOST_FTDC_IS_Continous '2'
#define THOST_FTDC_IS_AuctionOrdering '3'
#define THOST_FTDC_IS_AuctionBalance '4'
#define THOST_FTDC_IS_AuctionMatch '5'
#define THOST_FTDC_IS_Closed '6'

typedef char TThostFtdcInstrumentStatusType;

#define THOST_FTDC_IER_Automatic '1'
#define THOST_FTDC_IER_Manual '2'
#define THOST_FTDC_IER_Fuse '3'

typedef char TThostFtdcInstStatusEnterReasonType;

typedef int TThostFtdcOrderActionRefType;

typedef int TThostFtdcInstallCountType;

typedef int TThostFtdcInstallIDType;

typedef int TThostFtdcErrorIDType;

typedef int TThostFtdcSettlementIDType;

typedef int TThostFtdcVolumeType;

typedef int TThostFtdcFrontIDType;

typedef int TThostFtdcSessionIDType;

typedef int TThostFtdcSequenceNoType;

typedef int TThostFtdcCommandNoType;

typedef int TThostFtdcMillisecType;

typedef int TThostFtdcVolumeMultipleType;

typedef int TThostFtdcTradingSegmentSNType;

typedef int TThostFtdcRequestIDType;

typedef int TThostFtdcYearType;

typedef int TThostFtdcMonthType;

typedef int TThostFtdcBoolType;

typedef double TThostFtdcPriceType;

typedef char TThostFtdcCombOffsetFlagType[5];

typedef char TThostFtdcCombHedgeFlagType[5];

typedef double TThostFtdcRatioType;

typedef double TThostFtdcMoneyType;

typedef double TThostFtdcLargeVolumeType;

typedef short TThostFtdcSequenceSeriesType;

typedef short TThostFtdcCommPhaseNoType;

typedef char TThostFtdcSequenceLabelType[2];

typedef double TThostFtdcUnderlyingMultipleType;

typedef int TThostFtdcPriorityType;

typedef char TThostFtdcContractCodeType[41];

typedef char TThostFtdcCityType[51];

typedef char TThostFtdcIsStockType[11];

typedef char TThostFtdcChannelType[51];

typedef char TThostFtdcAddressType[101];

typedef char TThostFtdcZipCodeType[7];

typedef char TThostFtdcTelephoneType[41];

typedef char TThostFtdcFaxType[41];

typedef char TThostFtdcMobileType[41];

typedef char TThostFtdcEMailType[41];

typedef char TThostFtdcMemoType[161];

typedef char TThostFtdcCompanyCodeType[51];

typedef char TThostFtdcWebsiteType[51];

typedef char TThostFtdcTaxNoType[31];

#define THOST_FTDC_BS_NoUpload '1'
#define THOST_FTDC_BS_Uploaded '2'
#define THOST_FTDC_BS_Failed '3'

typedef char TThostFtdcBatchStatusType;

typedef char TThostFtdcPropertyIDType[33];

typedef char TThostFtdcPropertyNameType[65];

typedef char TThostFtdcLicenseNoType[51];

typedef char TThostFtdcAgentIDType[13];

typedef char TThostFtdcAgentNameType[41];

typedef char TThostFtdcAgentGroupIDType[13];

typedef char TThostFtdcAgentGroupNameType[41];

#define THOST_FTDC_RS_All '1'
#define THOST_FTDC_RS_ByProduct '2'

typedef char TThostFtdcReturnStyleType;

#define THOST_FTDC_RP_ByVolume '1'
#define THOST_FTDC_RP_ByFeeOnHand '2'

typedef char TThostFtdcReturnPatternType;

#define THOST_FTDC_RL_Level1 '1'
#define THOST_FTDC_RL_Level2 '2'
#define THOST_FTDC_RL_Level3 '3'
#define THOST_FTDC_RL_Level4 '4'
#define THOST_FTDC_RL_Level5 '5'
#define THOST_FTDC_RL_Level6 '6'
#define THOST_FTDC_RL_Level7 '7'
#define THOST_FTDC_RL_Level8 '8'
#define THOST_FTDC_RL_Level9 '9'

typedef char TThostFtdcReturnLevelType;

#define THOST_FTDC_RSD_ByPeriod '1'
#define THOST_FTDC_RSD_ByStandard '2'

typedef char TThostFtdcReturnStandardType;

#define THOST_FTDC_MT_Out '0'
#define THOST_FTDC_MT_In '1'

typedef char TThostFtdcMortgageTypeType;

#define THOST_FTDC_ISPI_MortgageRatio '4'
#define THOST_FTDC_ISPI_MarginWay '5'
#define THOST_FTDC_ISPI_BillDeposit '9'

typedef char TThostFtdcInvestorSettlementParamIDType;

#define THOST_FTDC_ESPI_MortgageRatio '1'
#define THOST_FTDC_ESPI_OtherFundItem '2'
#define THOST_FTDC_ESPI_OtherFundImport '3'
#define THOST_FTDC_ESPI_CFFEXMinPrepa '6'
#define THOST_FTDC_ESPI_CZCESettlementType '7'
#define THOST_FTDC_ESPI_ExchDelivFeeMode '9'
#define THOST_FTDC_ESPI_DelivFeeMode '0'
#define THOST_FTDC_ESPI_CZCEComMarginType 'A'
#define THOST_FTDC_ESPI_DceComMarginType 'B'
#define THOST_FTDC_ESPI_OptOutDisCountRate 'a'
#define THOST_FTDC_ESPI_OptMiniGuarantee 'b'

typedef char TThostFtdcExchangeSettlementParamIDType;

#define THOST_FTDC_SPI_InvestorIDMinLength '1'
#define THOST_FTDC_SPI_AccountIDMinLength '2'
#define THOST_FTDC_SPI_UserRightLogon '3'
#define THOST_FTDC_SPI_SettlementBillTrade '4'
#define THOST_FTDC_SPI_TradingCode '5'
#define THOST_FTDC_SPI_CheckFund '6'
#define THOST_FTDC_SPI_CommModelRight '7'
#define THOST_FTDC_SPI_MarginModelRight '9'
#define THOST_FTDC_SPI_IsStandardActive '8'
#define THOST_FTDC_SPI_UploadSettlementFile 'U'
#define THOST_FTDC_SPI_DownloadCSRCFile 'D'
#define THOST_FTDC_SPI_SettlementBillFile 'S'
#define THOST_FTDC_SPI_CSRCOthersFile 'C'
#define THOST_FTDC_SPI_InvestorPhoto 'P'
#define THOST_FTDC_SPI_CSRCData 'R'
#define THOST_FTDC_SPI_InvestorPwdModel 'I'
#define THOST_FTDC_SPI_CFFEXInvestorSettleFile 'F'
#define THOST_FTDC_SPI_InvestorIDType 'a'
#define THOST_FTDC_SPI_FreezeMaxReMain 'r'
#define THOST_FTDC_SPI_IsSync 'A'
#define THOST_FTDC_SPI_RelieveOpenLimit 'O'
#define THOST_FTDC_SPI_IsStandardFreeze 'X'
#define THOST_FTDC_SPI_CZCENormalProductHedge 'B'

typedef char TThostFtdcSystemParamIDType;

#define THOST_FTDC_TPID_EncryptionStandard 'E'
#define THOST_FTDC_TPID_RiskMode 'R'
#define THOST_FTDC_TPID_RiskModeGlobal 'G'
#define THOST_FTDC_TPID_modeEncode 'P'
#define THOST_FTDC_TPID_tickMode 'T'
#define THOST_FTDC_TPID_SingleUserSessionMaxNum 'S'
#define THOST_FTDC_TPID_LoginFailMaxNum 'L'
#define THOST_FTDC_TPID_IsAuthForce 'A'
#define THOST_FTDC_TPID_IsPosiFreeze 'F'
#define THOST_FTDC_TPID_IsPosiLimit 'M'
#define THOST_FTDC_TPID_ForQuoteTimeInterval 'Q'
#define THOST_FTDC_TPID_IsFuturePosiLimit 'B'
#define THOST_FTDC_TPID_IsFutureOrderFreq 'C'
#define THOST_FTDC_TPID_IsExecOrderProfit 'H'
#define THOST_FTDC_TPID_IsCheckBankAcc 'I'
#define THOST_FTDC_TPID_PasswordDeadLine 'J'
#define THOST_FTDC_TPID_IsStrongPassword 'K'
#define THOST_FTDC_TPID_BalanceMorgage 'a'
#define THOST_FTDC_TPID_MinPwdLen 'O'
#define THOST_FTDC_TPID_LoginFailMaxNumForIP 'U'
#define THOST_FTDC_TPID_PasswordPeriod 'V'

typedef char TThostFtdcTradeParamIDType;

typedef char TThostFtdcSettlementParamValueType[256];

typedef char TThostFtdcCounterIDType[33];

typedef char TThostFtdcInvestorGroupNameType[41];

typedef char TThostFtdcBrandCodeType[257];

typedef char TThostFtdcWarehouseType[257];

typedef char TThostFtdcProductDateType[41];

typedef char TThostFtdcGradeType[41];

typedef char TThostFtdcClassifyType[41];

typedef char TThostFtdcPositionType[41];

typedef char TThostFtdcYieldlyType[41];

typedef char TThostFtdcWeightType[41];

typedef int TThostFtdcSubEntryFundNoType;

#define THOST_FTDC_FI_SettlementFund 'F'
#define THOST_FTDC_FI_Trade 'T'
#define THOST_FTDC_FI_InvestorPosition 'P'
#define THOST_FTDC_FI_SubEntryFund 'O'
#define THOST_FTDC_FI_CZCECombinationPos 'C'
#define THOST_FTDC_FI_CSRCData 'R'
#define THOST_FTDC_FI_CZCEClose 'L'
#define THOST_FTDC_FI_CZCENoClose 'N'
#define THOST_FTDC_FI_PositionDtl 'D'
#define THOST_FTDC_FI_OptionStrike 'S'
#define THOST_FTDC_FI_SettlementPriceComparison 'M'
#define THOST_FTDC_FI_NonTradePosChange 'B'

typedef char TThostFtdcFileIDType;

typedef char TThostFtdcFileNameType[257];

#define THOST_FTDC_FUT_Settlement '0'
#define THOST_FTDC_FUT_Check '1'

typedef char TThostFtdcFileTypeType;

#define THOST_FTDC_FFT_Txt '0'
#define THOST_FTDC_FFT_Zip '1'
#define THOST_FTDC_FFT_DBF '2'

typedef char TThostFtdcFileFormatType;

#define THOST_FTDC_FUS_SucceedUpload '1'
#define THOST_FTDC_FUS_FailedUpload '2'
#define THOST_FTDC_FUS_SucceedLoad '3'
#define THOST_FTDC_FUS_PartSucceedLoad '4'
#define THOST_FTDC_FUS_FailedLoad '5'

typedef char TThostFtdcFileUploadStatusType;

#define THOST_FTDC_TD_Out '0'
#define THOST_FTDC_TD_In '1'

typedef char TThostFtdcTransferDirectionType;

typedef char TThostFtdcUploadModeType[21];

typedef char TThostFtdcAccountIDType[13];

typedef char TThostFtdcBankFlagType[4];

typedef char TThostFtdcBankAccountType[41];

typedef char TThostFtdcOpenNameType[61];

typedef char TThostFtdcOpenBankType[101];

typedef char TThostFtdcBankNameType[101];

typedef char TThostFtdcPublishPathType[257];

typedef char TThostFtdcOperatorIDType[65];

typedef int TThostFtdcMonthCountType;

typedef char TThostFtdcAdvanceMonthArrayType[13];

typedef char TThostFtdcDateExprType[1025];

typedef char TThostFtdcInstrumentIDExprType[41];

typedef char TThostFtdcInstrumentNameExprType[41];

#define THOST_FTDC_SC_NoSpecialRule '0'
#define THOST_FTDC_SC_NoSpringFestival '1'

typedef char TThostFtdcSpecialCreateRuleType;

#define THOST_FTDC_IPT_LastSettlement '1'
#define THOST_FTDC_IPT_LaseClose '2'

typedef char TThostFtdcBasisPriceTypeType;

#define THOST_FTDC_PLP_Active '1'
#define THOST_FTDC_PLP_NonActive '2'
#define THOST_FTDC_PLP_Canceled '3'

typedef char TThostFtdcProductLifePhaseType;

#define THOST_FTDC_DM_CashDeliv '1'
#define THOST_FTDC_DM_CommodityDeliv '2'

typedef char TThostFtdcDeliveryModeType;

typedef char TThostFtdcLogLevelType[33];

typedef char TThostFtdcProcessNameType[257];

typedef char TThostFtdcOperationMemoType[1025];

#define THOST_FTDC_FIOT_FundIO '1'
#define THOST_FTDC_FIOT_Transfer '2'
#define THOST_FTDC_FIOT_SwapCurrency '3'

typedef char TThostFtdcFundIOTypeType;

#define THOST_FTDC_FT_Deposite '1'
#define THOST_FTDC_FT_ItemFund '2'
#define THOST_FTDC_FT_Company '3'
#define THOST_FTDC_FT_InnerTransfer '4'

typedef char TThostFtdcFundTypeType;

#define THOST_FTDC_FD_In '1'
#define THOST_FTDC_FD_Out '2'

typedef char TThostFtdcFundDirectionType;

#define THOST_FTDC_FS_Record '1'
#define THOST_FTDC_FS_Check '2'
#define THOST_FTDC_FS_Charge '3'

typedef char TThostFtdcFundStatusType;

typedef char TThostFtdcBillNoType[15];

typedef char TThostFtdcBillNameType[33];

#define THOST_FTDC_PS_None '1'
#define THOST_FTDC_PS_Publishing '2'
#define THOST_FTDC_PS_Published '3'

typedef char TThostFtdcPublishStatusType;

typedef char TThostFtdcEnumValueIDType[65];

typedef char TThostFtdcEnumValueTypeType[33];

typedef char TThostFtdcEnumValueLabelType[65];

typedef char TThostFtdcEnumValueResultType[33];

#define THOST_FTDC_ES_NonActive '1'
#define THOST_FTDC_ES_Startup '2'
#define THOST_FTDC_ES_Initialize '3'
#define THOST_FTDC_ES_Initialized '4'
#define THOST_FTDC_ES_Close '5'
#define THOST_FTDC_ES_Closed '6'
#define THOST_FTDC_ES_Settlement '7'

typedef char TThostFtdcSystemStatusType;

#define THOST_FTDC_STS_Initialize '0'
#define THOST_FTDC_STS_Settlementing '1'
#define THOST_FTDC_STS_Settlemented '2'
#define THOST_FTDC_STS_Finished '3'

typedef char TThostFtdcSettlementStatusType;

typedef char TThostFtdcRangeIntTypeType[33];

typedef char TThostFtdcRangeIntFromType[33];

typedef char TThostFtdcRangeIntToType[33];

typedef char TThostFtdcFunctionIDType[25];

typedef char TThostFtdcFunctionValueCodeType[257];

typedef char TThostFtdcFunctionNameType[65];

typedef char TThostFtdcRoleIDType[11];

typedef char TThostFtdcRoleNameType[41];

typedef char TThostFtdcDescriptionType[401];

typedef char TThostFtdcCombineIDType[25];

typedef char TThostFtdcCombineTypeType[25];

#define THOST_FTDC_CT_Person '0'
#define THOST_FTDC_CT_Company '1'
#define THOST_FTDC_CT_Fund '2'
#define THOST_FTDC_CT_SpecialOrgan '3'
#define THOST_FTDC_CT_Asset '4'

typedef char TThostFtdcInvestorTypeType;

#define THOST_FTDC_BT_Trade '0'
#define THOST_FTDC_BT_TradeSettle '1'

typedef char TThostFtdcBrokerTypeType;

#define THOST_FTDC_FAS_Low '1'
#define THOST_FTDC_FAS_Normal '2'
#define THOST_FTDC_FAS_Focus '3'
#define THOST_FTDC_FAS_Risk '4'

typedef char TThostFtdcRiskLevelType;

#define THOST_FTDC_FAS_ByTrade '1'
#define THOST_FTDC_FAS_ByDeliv '2'
#define THOST_FTDC_FAS_None '3'
#define THOST_FTDC_FAS_FixFee '4'

typedef char TThostFtdcFeeAcceptStyleType;

#define THOST_FTDC_PWDT_Trade '1'
#define THOST_FTDC_PWDT_Account '2'

typedef char TThostFtdcPasswordTypeType;

#define THOST_FTDC_AG_All '1'
#define THOST_FTDC_AG_OnlyLost '2'
#define THOST_FTDC_AG_OnlyGain '3'
#define THOST_FTDC_AG_None '4'

typedef char TThostFtdcAlgorithmType;

#define THOST_FTDC_ICP_Include '0'
#define THOST_FTDC_ICP_NotInclude '2'

typedef char TThostFtdcIncludeCloseProfitType;

#define THOST_FTDC_AWT_Enable '0'
#define THOST_FTDC_AWT_Disable '2'
#define THOST_FTDC_AWT_NoHoldEnable '3'

typedef char TThostFtdcAllWithoutTradeType;

typedef char TThostFtdcCommentType[31];

typedef char TThostFtdcVersionType[4];

typedef char TThostFtdcTradeCodeType[7];

typedef char TThostFtdcTradeDateType[9];

typedef char TThostFtdcTradeTimeType[9];

typedef char TThostFtdcTradeSerialType[9];

typedef int TThostFtdcTradeSerialNoType;

typedef char TThostFtdcFutureIDType[11];

typedef char TThostFtdcBankIDType[4];

typedef char TThostFtdcBankBrchIDType[5];

typedef char TThostFtdcBankBranchIDType[11];

typedef char TThostFtdcOperNoType[17];

typedef char TThostFtdcDeviceIDType[3];

typedef char TThostFtdcRecordNumType[7];

typedef char TThostFtdcFutureAccountType[22];

#define THOST_FTDC_FPWD_UnCheck '0'
#define THOST_FTDC_FPWD_Check '1'

typedef char TThostFtdcFuturePwdFlagType;

#define THOST_FTDC_TT_BankToFuture '0'
#define THOST_FTDC_TT_FutureToBank '1'

typedef char TThostFtdcTransferTypeType;

typedef char TThostFtdcFutureAccPwdType[17];

typedef char TThostFtdcCurrencyCodeType[4];

typedef char TThostFtdcRetCodeType[5];

typedef char TThostFtdcRetInfoType[129];

typedef char TThostFtdcTradeAmtType[20];

typedef char TThostFtdcUseAmtType[20];

typedef char TThostFtdcFetchAmtType[20];

#define THOST_FTDC_TVF_Invalid '0'
#define THOST_FTDC_TVF_Valid '1'
#define THOST_FTDC_TVF_Reverse '2'

typedef char TThostFtdcTransferValidFlagType;

typedef char TThostFtdcCertCodeType[21];

#define THOST_FTDC_RN_CD '0'
#define THOST_FTDC_RN_ZT '1'
#define THOST_FTDC_RN_QT '2'

typedef char TThostFtdcReasonType;

typedef char TThostFtdcFundProjectIDType[5];

#define THOST_FTDC_SEX_None '0'
#define THOST_FTDC_SEX_Man '1'
#define THOST_FTDC_SEX_Woman '2'

typedef char TThostFtdcSexType;

typedef char TThostFtdcProfessionType[101];

typedef char TThostFtdcNationalType[31];

typedef char TThostFtdcProvinceType[51];

typedef char TThostFtdcRegionType[16];

typedef char TThostFtdcCountryType[16];

typedef char TThostFtdcLicenseNOType[33];

typedef char TThostFtdcCompanyTypeType[16];

typedef char TThostFtdcBusinessScopeType[1001];

typedef char TThostFtdcCapitalCurrencyType[4];

#define THOST_FTDC_UT_Investor '0'
#define THOST_FTDC_UT_Operator '1'
#define THOST_FTDC_UT_SuperUser '2'

typedef char TThostFtdcUserTypeType;

typedef char TThostFtdcBranchIDType[9];

#define THOST_FTDC_RATETYPE_MarginRate '2'

typedef char TThostFtdcRateTypeType;

#define THOST_FTDC_NOTETYPE_TradeSettleBill '1'
#define THOST_FTDC_NOTETYPE_TradeSettleMonth '2'
#define THOST_FTDC_NOTETYPE_CallMarginNotes '3'
#define THOST_FTDC_NOTETYPE_ForceCloseNotes '4'
#define THOST_FTDC_NOTETYPE_TradeNotes '5'
#define THOST_FTDC_NOTETYPE_DelivNotes '6'

typedef char TThostFtdcNoteTypeType;

#define THOST_FTDC_SBS_Day '1'
#define THOST_FTDC_SBS_Volume '2'

typedef char TThostFtdcSettlementStyleType;

typedef char TThostFtdcBrokerDNSType[256];

typedef char TThostFtdcSentenceType[501];

#define THOST_FTDC_ST_Day '0'
#define THOST_FTDC_ST_Month '1'

typedef char TThostFtdcSettlementBillTypeType;

#define THOST_FTDC_URT_Logon '1'
#define THOST_FTDC_URT_Transfer '2'
#define THOST_FTDC_URT_EMail '3'
#define THOST_FTDC_URT_Fax '4'
#define THOST_FTDC_URT_ConditionOrder '5'

typedef char TThostFtdcUserRightTypeType;

#define THOST_FTDC_MPT_PreSettlementPrice '1'
#define THOST_FTDC_MPT_SettlementPrice '2'
#define THOST_FTDC_MPT_AveragePrice '3'
#define THOST_FTDC_MPT_OpenPrice '4'

typedef char TThostFtdcMarginPriceTypeType;

#define THOST_FTDC_BGS_None '0'
#define THOST_FTDC_BGS_NoGenerated '1'
#define THOST_FTDC_BGS_Generated '2'

typedef char TThostFtdcBillGenStatusType;

#define THOST_FTDC_AT_HandlePositionAlgo '1'
#define THOST_FTDC_AT_FindMarginRateAlgo '2'

typedef char TThostFtdcAlgoTypeType;

#define THOST_FTDC_HPA_Base '1'
#define THOST_FTDC_HPA_DCE '2'
#define THOST_FTDC_HPA_CZCE '3'

typedef char TThostFtdcHandlePositionAlgoIDType;

#define THOST_FTDC_FMRA_Base '1'
#define THOST_FTDC_FMRA_DCE '2'
#define THOST_FTDC_FMRA_CZCE '3'

typedef char TThostFtdcFindMarginRateAlgoIDType;

#define THOST_FTDC_HTAA_Base '1'
#define THOST_FTDC_HTAA_DCE '2'
#define THOST_FTDC_HTAA_CZCE '3'

typedef char TThostFtdcHandleTradingAccountAlgoIDType;

#define THOST_FTDC_PST_Order '1'
#define THOST_FTDC_PST_Open '2'
#define THOST_FTDC_PST_Fund '3'
#define THOST_FTDC_PST_Settlement '4'
#define THOST_FTDC_PST_Company '5'
#define THOST_FTDC_PST_Corporation '6'
#define THOST_FTDC_PST_LinkMan '7'
#define THOST_FTDC_PST_Ledger '8'
#define THOST_FTDC_PST_Trustee '9'
#define THOST_FTDC_PST_TrusteeCorporation 'A'
#define THOST_FTDC_PST_TrusteeOpen 'B'
#define THOST_FTDC_PST_TrusteeContact 'C'
#define THOST_FTDC_PST_ForeignerRefer 'D'
#define THOST_FTDC_PST_CorporationRefer 'E'

typedef char TThostFtdcPersonTypeType;

#define THOST_FTDC_QIR_All '1'
#define THOST_FTDC_QIR_Group '2'
#define THOST_FTDC_QIR_Single '3'

typedef char TThostFtdcQueryInvestorRangeType;

#define THOST_FTDC_IRS_Normal '1'
#define THOST_FTDC_IRS_Warn '2'
#define THOST_FTDC_IRS_Call '3'
#define THOST_FTDC_IRS_Force '4'
#define THOST_FTDC_IRS_Exception '5'

typedef char TThostFtdcInvestorRiskStatusType;

typedef int TThostFtdcLegIDType;

typedef int TThostFtdcLegMultipleType;

typedef int TThostFtdcImplyLevelType;

typedef char TThostFtdcClearAccountType[33];

typedef char TThostFtdcOrganNOType[6];

typedef char TThostFtdcClearbarchIDType[6];

#define THOST_FTDC_UET_Login '1'
#define THOST_FTDC_UET_Logout '2'
#define THOST_FTDC_UET_Trading '3'
#define THOST_FTDC_UET_TradingError '4'
#define THOST_FTDC_UET_UpdatePassword '5'
#define THOST_FTDC_UET_Authenticate '6'
#define THOST_FTDC_UET_Other '9'

typedef char TThostFtdcUserEventTypeType;

typedef char TThostFtdcUserEventInfoType[1025];

#define THOST_FTDC_ICS_Close '0'
#define THOST_FTDC_ICS_CloseToday '1'

typedef char TThostFtdcCloseStyleType;

#define THOST_FTDC_SM_Non '0'
#define THOST_FTDC_SM_Instrument '1'
#define THOST_FTDC_SM_Product '2'
#define THOST_FTDC_SM_Investor '3'

typedef char TThostFtdcStatModeType;

#define THOST_FTDC_PAOS_NotSend '1'
#define THOST_FTDC_PAOS_Send '2'
#define THOST_FTDC_PAOS_Deleted '3'

typedef char TThostFtdcParkedOrderStatusType;

typedef char TThostFtdcParkedOrderIDType[13];

typedef char TThostFtdcParkedOrderActionIDType[13];

#define THOST_FTDC_VDS_Dealing '1'
#define THOST_FTDC_VDS_DeaclSucceed '2'

typedef char TThostFtdcVirDealStatusType;

#define THOST_FTDC_ORGS_Standard '0'
#define THOST_FTDC_ORGS_ESunny '1'
#define THOST_FTDC_ORGS_KingStarV6 '2'

typedef char TThostFtdcOrgSystemIDType;

#define THOST_FTDC_VTS_NaturalDeal '0'
#define THOST_FTDC_VTS_SucceedEnd '1'
#define THOST_FTDC_VTS_FailedEND '2'
#define THOST_FTDC_VTS_Exception '3'
#define THOST_FTDC_VTS_ManualDeal '4'
#define THOST_FTDC_VTS_MesException '5'
#define THOST_FTDC_VTS_SysException '6'

typedef char TThostFtdcVirTradeStatusType;

#define THOST_FTDC_VBAT_BankBook '1'
#define THOST_FTDC_VBAT_BankCard '2'
#define THOST_FTDC_VBAT_CreditCard '3'

typedef char TThostFtdcVirBankAccTypeType;

#define THOST_FTDC_VMS_Natural '0'
#define THOST_FTDC_VMS_Canceled '9'

typedef char TThostFtdcVirementStatusType;

#define THOST_FTDC_VAA_NoAvailAbility '0'
#define THOST_FTDC_VAA_AvailAbility '1'
#define THOST_FTDC_VAA_Repeal '2'

typedef char TThostFtdcVirementAvailAbilityType;

#define THOST_FTDC_VTC_BankBankToFuture '102001'
#define THOST_FTDC_VTC_BankFutureToBank '102002'
#define THOST_FTDC_VTC_FutureBankToFuture '202001'
#define THOST_FTDC_VTC_FutureFutureToBank '202002'

typedef char TThostFtdcVirementTradeCodeType;

typedef char TThostFtdcPhotoTypeNameType[41];

typedef char TThostFtdcPhotoTypeIDType[5];

typedef char TThostFtdcPhotoNameType[161];

typedef int TThostFtdcTopicIDType;

typedef char TThostFtdcReportTypeIDType[3];

typedef char TThostFtdcCharacterIDType[5];

typedef char TThostFtdcAMLParamIDType[21];

typedef char TThostFtdcAMLInvestorTypeType[3];

typedef char TThostFtdcAMLIdCardTypeType[3];

typedef char TThostFtdcAMLTradeDirectType[3];

typedef char TThostFtdcAMLTradeModelType[3];

typedef char TThostFtdcAMLParamIDType[21];

typedef double TThostFtdcAMLOpParamValueType;

typedef char TThostFtdcAMLCustomerCardTypeType[81];

typedef char TThostFtdcAMLInstitutionNameType[65];

typedef char TThostFtdcAMLDistrictIDType[7];

typedef char TThostFtdcAMLRelationShipType[3];

typedef char TThostFtdcAMLInstitutionTypeType[3];

typedef char TThostFtdcAMLInstitutionIDType[13];

typedef char TThostFtdcAMLAccountTypeType[5];

typedef char TThostFtdcAMLTradingTypeType[7];

typedef char TThostFtdcAMLTransactClassType[7];

typedef char TThostFtdcAMLCapitalIOType[3];

typedef char TThostFtdcAMLSiteType[10];

typedef char TThostFtdcAMLCapitalPurposeType[129];

typedef char TThostFtdcAMLReportTypeType[2];

typedef char TThostFtdcAMLSerialNoType[5];

typedef char TThostFtdcAMLStatusType[2];

#define THOST_FTDC_GEN_Program '0'
#define THOST_FTDC_GEN_HandWork '1'

typedef char TThostFtdcAMLGenStatusType;

typedef char TThostFtdcAMLSeqCodeType[65];

typedef char TThostFtdcAMLFileNameType[257];

typedef double TThostFtdcAMLMoneyType;

typedef int TThostFtdcAMLFileAmountType;

typedef char TThostFtdcCFMMCKeyType[21];

typedef char TThostFtdcCFMMCTokenType[21];

#define THOST_FTDC_CFMMCKK_REQUEST 'R'
#define THOST_FTDC_CFMMCKK_AUTO 'A'
#define THOST_FTDC_CFMMCKK_MANUAL 'M'

typedef char TThostFtdcCFMMCKeyKindType;

typedef char TThostFtdcAMLReportNameType[81];

typedef char TThostFtdcIndividualNameType[51];

typedef char TThostFtdcCurrencyIDType[4];

typedef char TThostFtdcCustNumberType[36];

typedef char TThostFtdcOrganCodeType[36];

typedef char TThostFtdcOrganNameType[71];

typedef char TThostFtdcSuperOrganCodeType[12];

typedef char TThostFtdcSubBranchIDType[31];

typedef char TThostFtdcSubBranchNameType[71];

typedef char TThostFtdcBranchNetCodeType[31];

typedef char TThostFtdcBranchNetNameType[71];

typedef char TThostFtdcOrganFlagType[2];

typedef char TThostFtdcBankCodingForFutureType[33];

typedef char TThostFtdcBankReturnCodeType[7];

typedef char TThostFtdcPlateReturnCodeType[5];

typedef char TThostFtdcBankSubBranchIDType[31];

typedef char TThostFtdcFutureBranchIDType[31];

typedef char TThostFtdcReturnCodeType[7];

typedef char TThostFtdcOperatorCodeType[17];

typedef char TThostFtdcClearDepIDType[6];

typedef char TThostFtdcClearBrchIDType[6];

typedef char TThostFtdcClearNameType[71];

typedef char TThostFtdcBankAccountNameType[71];

typedef char TThostFtdcInvDepIDType[6];

typedef char TThostFtdcInvBrchIDType[6];

typedef char TThostFtdcMessageFormatVersionType[36];

typedef char TThostFtdcDigestType[36];

typedef char TThostFtdcAuthenticDataType[129];

typedef char TThostFtdcPasswordKeyType[129];

typedef char TThostFtdcFutureAccountNameType[129];

typedef char TThostFtdcMobilePhoneType[21];

typedef char TThostFtdcFutureMainKeyType[129];

typedef char TThostFtdcFutureWorkKeyType[129];

typedef char TThostFtdcFutureTransKeyType[129];

typedef char TThostFtdcBankMainKeyType[129];

typedef char TThostFtdcBankWorkKeyType[129];

typedef char TThostFtdcBankTransKeyType[129];

typedef char TThostFtdcBankServerDescriptionType[129];

typedef char TThostFtdcAddInfoType[129];

typedef char TThostFtdcDescrInfoForReturnCodeType[129];

typedef char TThostFtdcCountryCodeType[21];

typedef int TThostFtdcSerialType;

typedef int TThostFtdcPlateSerialType;

typedef char TThostFtdcBankSerialType[13];

typedef int TThostFtdcCorrectSerialType;

typedef int TThostFtdcFutureSerialType;

typedef int TThostFtdcApplicationIDType;

typedef int TThostFtdcBankProxyIDType;

typedef int TThostFtdcFBTCoreIDType;

typedef int TThostFtdcServerPortType;

typedef int TThostFtdcRepealedTimesType;

typedef int TThostFtdcRepealTimeIntervalType;

typedef int TThostFtdcTotalTimesType;

typedef int TThostFtdcFBTRequestIDType;

typedef int TThostFtdcTIDType;

typedef double TThostFtdcTradeAmountType;

typedef double TThostFtdcCustFeeType;

typedef double TThostFtdcFutureFeeType;

typedef double TThostFtdcSingleMaxAmtType;

typedef double TThostFtdcSingleMinAmtType;

typedef double TThostFtdcTotalAmtType;

#define THOST_FTDC_CFT_IDCard '0'
#define THOST_FTDC_CFT_Passport '1'
#define THOST_FTDC_CFT_OfficerIDCard '2'
#define THOST_FTDC_CFT_SoldierIDCard '3'
#define THOST_FTDC_CFT_HomeComingCard '4'
#define THOST_FTDC_CFT_HouseholdRegister  '5'
#define THOST_FTDC_CFT_LicenseNo '6'
#define THOST_FTDC_CFT_InstitutionCodeCard '7'
#define THOST_FTDC_CFT_TempLicenseNo '8'
#define THOST_FTDC_CFT_NoEnterpriseLicenseNo '9'
#define THOST_FTDC_CFT_OtherCard 'x'
#define THOST_FTDC_CFT_SuperDepAgree 'a'

typedef char TThostFtdcCertificationTypeType;

#define THOST_FTDC_FBC_Others '0'
#define THOST_FTDC_FBC_TransferDetails '1'
#define THOST_FTDC_FBC_CustAccStatus '2'
#define THOST_FTDC_FBC_AccountTradeDetails '3'
#define THOST_FTDC_FBC_FutureAccountChangeInfoDetails '4'
#define THOST_FTDC_FBC_CustMoneyDetail '5'
#define THOST_FTDC_FBC_CustCancelAccountInfo '6'
#define THOST_FTDC_FBC_CustMoneyResult '7'
#define THOST_FTDC_FBC_OthersExceptionResult '8'
#define THOST_FTDC_FBC_CustInterestNetMoneyDetails '9'
#define THOST_FTDC_FBC_CustMoneySendAndReceiveDetails 'a'
#define THOST_FTDC_FBC_CorporationMoneyTotal 'b'
#define THOST_FTDC_FBC_MainbodyMoneyTotal 'c'
#define THOST_FTDC_FBC_MainPartMonitorData 'd'
#define THOST_FTDC_FBC_PreparationMoney 'e'
#define THOST_FTDC_FBC_BankMoneyMonitorData 'f'

typedef char TThostFtdcFileBusinessCodeType;

#define THOST_FTDC_CEC_Exchange '1'
#define THOST_FTDC_CEC_Cash '2'

typedef char TThostFtdcCashExchangeCodeType;

#define THOST_FTDC_YNI_Yes '0'
#define THOST_FTDC_YNI_No '1'

typedef char TThostFtdcYesNoIndicatorType;

#define THOST_FTDC_BLT_CurrentMoney '0'
#define THOST_FTDC_BLT_UsableMoney '1'
#define THOST_FTDC_BLT_FetchableMoney '2'
#define THOST_FTDC_BLT_FreezeMoney '3'

typedef char TThostFtdcBanlanceTypeType;

#define THOST_FTDC_GD_Unknown '0'
#define THOST_FTDC_GD_Male '1'
#define THOST_FTDC_GD_Female '2'

typedef char TThostFtdcGenderType;

#define THOST_FTDC_FPF_BEN '0'
#define THOST_FTDC_FPF_OUR '1'
#define THOST_FTDC_FPF_SHA '2'

typedef char TThostFtdcFeePayFlagType;

#define THOST_FTDC_PWKT_ExchangeKey '0'
#define THOST_FTDC_PWKT_PassWordKey '1'
#define THOST_FTDC_PWKT_MACKey '2'
#define THOST_FTDC_PWKT_MessageKey '3'

typedef char TThostFtdcPassWordKeyTypeType;

#define THOST_FTDC_PWT_Query '0'
#define THOST_FTDC_PWT_Fetch '1'
#define THOST_FTDC_PWT_Transfer '2'
#define THOST_FTDC_PWT_Trade '3'

typedef char TThostFtdcFBTPassWordTypeType;

#define THOST_FTDC_EM_NoEncry '0'
#define THOST_FTDC_EM_DES '1'
#define THOST_FTDC_EM_3DES '2'

typedef char TThostFtdcFBTEncryModeType;

#define THOST_FTDC_BRF_BankNotNeedRepeal '0'
#define THOST_FTDC_BRF_BankWaitingRepeal '1'
#define THOST_FTDC_BRF_BankBeenRepealed '2'

typedef char TThostFtdcBankRepealFlagType;

#define THOST_FTDC_BRORF_BrokerNotNeedRepeal '0'
#define THOST_FTDC_BRORF_BrokerWaitingRepeal '1'
#define THOST_FTDC_BRORF_BrokerBeenRepealed '2'

typedef char TThostFtdcBrokerRepealFlagType;

#define THOST_FTDC_TS_Bank '0'
#define THOST_FTDC_TS_Future '1'
#define THOST_FTDC_TS_Store '2'

typedef char TThostFtdcInstitutionTypeType;

#define THOST_FTDC_LF_Yes '0'
#define THOST_FTDC_LF_No '1'

typedef char TThostFtdcLastFragmentType;

#define THOST_FTDC_BAS_Normal '0'
#define THOST_FTDC_BAS_Freeze '1'
#define THOST_FTDC_BAS_ReportLoss '2'

typedef char TThostFtdcBankAccStatusType;

#define THOST_FTDC_MAS_Normal '0'
#define THOST_FTDC_MAS_Cancel '1'

typedef char TThostFtdcMoneyAccountStatusType;

#define THOST_FTDC_MSS_Point '0'
#define THOST_FTDC_MSS_PrePoint '1'
#define THOST_FTDC_MSS_CancelPoint '2'

typedef char TThostFtdcManageStatusType;

#define THOST_FTDC_SYT_FutureBankTransfer '0'
#define THOST_FTDC_SYT_StockBankTransfer '1'
#define THOST_FTDC_SYT_TheThirdPartStore '2'

typedef char TThostFtdcSystemTypeType;

#define THOST_FTDC_TEF_NormalProcessing '0'
#define THOST_FTDC_TEF_Success '1'
#define THOST_FTDC_TEF_Failed '2'
#define THOST_FTDC_TEF_Abnormal '3'
#define THOST_FTDC_TEF_ManualProcessedForException '4'
#define THOST_FTDC_TEF_CommuFailedNeedManualProcess '5'
#define THOST_FTDC_TEF_SysErrorNeedManualProcess '6'

typedef char TThostFtdcTxnEndFlagType;

#define THOST_FTDC_PSS_NotProcess '0'
#define THOST_FTDC_PSS_StartProcess '1'
#define THOST_FTDC_PSS_Finished '2'

typedef char TThostFtdcProcessStatusType;

#define THOST_FTDC_CUSTT_Person '0'
#define THOST_FTDC_CUSTT_Institution '1'

typedef char TThostFtdcCustTypeType;

#define THOST_FTDC_FBTTD_FromBankToFuture '1'
#define THOST_FTDC_FBTTD_FromFutureToBank '2'

typedef char TThostFtdcFBTTransferDirectionType;

#define THOST_FTDC_OOD_Open '1'
#define THOST_FTDC_OOD_Destroy '0'

typedef char TThostFtdcOpenOrDestroyType;

#define THOST_FTDC_AVAF_Invalid '0'
#define THOST_FTDC_AVAF_Valid '1'
#define THOST_FTDC_AVAF_Repeal '2'

typedef char TThostFtdcAvailabilityFlagType;

#define THOST_FTDC_OT_Bank '1'
#define THOST_FTDC_OT_Future '2'
#define THOST_FTDC_OT_PlateForm '9'

typedef char TThostFtdcOrganTypeType;

#define THOST_FTDC_OL_HeadQuarters '1'
#define THOST_FTDC_OL_Branch '2'

typedef char TThostFtdcOrganLevelType;

#define THOST_FTDC_PID_FutureProtocal '0'
#define THOST_FTDC_PID_ICBCProtocal '1'
#define THOST_FTDC_PID_ABCProtocal '2'
#define THOST_FTDC_PID_CBCProtocal '3'
#define THOST_FTDC_PID_CCBProtocal '4'
#define THOST_FTDC_PID_BOCOMProtocal '5'
#define THOST_FTDC_PID_FBTPlateFormProtocal 'X'

typedef char TThostFtdcProtocalIDType;

#define THOST_FTDC_CM_ShortConnect '0'
#define THOST_FTDC_CM_LongConnect '1'

typedef char TThostFtdcConnectModeType;

#define THOST_FTDC_SRM_ASync '0'
#define THOST_FTDC_SRM_Sync '1'

typedef char TThostFtdcSyncModeType;

#define THOST_FTDC_BAT_BankBook '1'
#define THOST_FTDC_BAT_SavingCard '2'
#define THOST_FTDC_BAT_CreditCard '3'

typedef char TThostFtdcBankAccTypeType;

#define THOST_FTDC_FAT_BankBook '1'
#define THOST_FTDC_FAT_SavingCard '2'
#define THOST_FTDC_FAT_CreditCard '3'

typedef char TThostFtdcFutureAccTypeType;

#define THOST_FTDC_OS_Ready '0'
#define THOST_FTDC_OS_CheckIn '1'
#define THOST_FTDC_OS_CheckOut '2'
#define THOST_FTDC_OS_CheckFileArrived '3'
#define THOST_FTDC_OS_CheckDetail '4'
#define THOST_FTDC_OS_DayEndClean '5'
#define THOST_FTDC_OS_Invalid '9'

typedef char TThostFtdcOrganStatusType;

#define THOST_FTDC_CCBFM_ByAmount '1'
#define THOST_FTDC_CCBFM_ByMonth '2'

typedef char TThostFtdcCCBFeeModeType;

#define THOST_FTDC_CAPIT_Client '1'
#define THOST_FTDC_CAPIT_Server '2'
#define THOST_FTDC_CAPIT_UserApi '3'

typedef char TThostFtdcCommApiTypeType;

typedef int TThostFtdcServiceIDType;

typedef int TThostFtdcServiceLineNoType;

typedef char TThostFtdcServiceNameType[61];

#define THOST_FTDC_LS_Connected '1'
#define THOST_FTDC_LS_Disconnected '2'

typedef char TThostFtdcLinkStatusType;

typedef int TThostFtdcCommApiPointerType;

#define THOST_FTDC_BPWDF_NoCheck '0'
#define THOST_FTDC_BPWDF_BlankCheck '1'
#define THOST_FTDC_BPWDF_EncryptCheck '2'

typedef char TThostFtdcPwdFlagType;

#define THOST_FTDC_SAT_AccountID '1'
#define THOST_FTDC_SAT_CardID '2'
#define THOST_FTDC_SAT_SHStockholderID '3'
#define THOST_FTDC_SAT_SZStockholderID '4'

typedef char TThostFtdcSecuAccTypeType;

#define THOST_FTDC_TRFS_Normal '0'
#define THOST_FTDC_TRFS_Repealed '1'

typedef char TThostFtdcTransferStatusType;

#define THOST_FTDC_SPTYPE_Broker '0'
#define THOST_FTDC_SPTYPE_Bank '1'

typedef char TThostFtdcSponsorTypeType;

#define THOST_FTDC_REQRSP_Request '0'
#define THOST_FTDC_REQRSP_Response '1'

typedef char TThostFtdcReqRspTypeType;

#define THOST_FTDC_FBTUET_SignIn '0'
#define THOST_FTDC_FBTUET_FromBankToFuture '1'
#define THOST_FTDC_FBTUET_FromFutureToBank '2'
#define THOST_FTDC_FBTUET_OpenAccount '3'
#define THOST_FTDC_FBTUET_CancelAccount '4'
#define THOST_FTDC_FBTUET_ChangeAccount '5'
#define THOST_FTDC_FBTUET_RepealFromBankToFuture '6'
#define THOST_FTDC_FBTUET_RepealFromFutureToBank '7'
#define THOST_FTDC_FBTUET_QueryBankAccount '8'
#define THOST_FTDC_FBTUET_QueryFutureAccount '9'
#define THOST_FTDC_FBTUET_SignOut 'A'
#define THOST_FTDC_FBTUET_SyncKey 'B'
#define THOST_FTDC_FBTUET_ReserveOpenAccount 'C'
#define THOST_FTDC_FBTUET_CancelReserveOpenAccount 'D'
#define THOST_FTDC_FBTUET_ReserveOpenAccountConfirm 'E'
#define THOST_FTDC_FBTUET_Other 'Z'

typedef char TThostFtdcFBTUserEventTypeType;

typedef char TThostFtdcBankIDByBankType[21];

typedef char TThostFtdcBankOperNoType[4];

typedef char TThostFtdcBankCustNoType[21];

typedef int TThostFtdcDBOPSeqNoType;

typedef char TThostFtdcTableNameType[61];

typedef char TThostFtdcPKNameType[201];

typedef char TThostFtdcPKValueType[501];

#define THOST_FTDC_DBOP_Insert '0'
#define THOST_FTDC_DBOP_Update '1'
#define THOST_FTDC_DBOP_Delete '2'

typedef char TThostFtdcDBOperationType;

#define THOST_FTDC_SYNF_Yes '0'
#define THOST_FTDC_SYNF_No '1'

typedef char TThostFtdcSyncFlagType;

typedef char TThostFtdcTargetIDType[4];

#define THOST_FTDC_SYNT_OneOffSync '0'
#define THOST_FTDC_SYNT_TimerSync '1'
#define THOST_FTDC_SYNT_TimerFullSync '2'

typedef char TThostFtdcSyncTypeType;

typedef char TThostFtdcFBETimeType[7];

typedef char TThostFtdcFBEBankNoType[13];

typedef char TThostFtdcFBECertNoType[13];

#define THOST_FTDC_FBEDIR_Settlement '0'
#define THOST_FTDC_FBEDIR_Sale '1'

typedef char TThostFtdcExDirectionType;

typedef char TThostFtdcFBEBankAccountType[33];

typedef char TThostFtdcFBEBankAccountNameType[61];

typedef double TThostFtdcFBEAmtType;

typedef char TThostFtdcFBEBusinessTypeType[3];

typedef char TThostFtdcFBEPostScriptType[61];

typedef char TThostFtdcFBERemarkType[71];

typedef double TThostFtdcExRateType;

#define THOST_FTDC_FBERES_Success '0'
#define THOST_FTDC_FBERES_InsufficientBalance '1'
#define THOST_FTDC_FBERES_UnknownTrading '8'
#define THOST_FTDC_FBERES_Fail 'x'

typedef char TThostFtdcFBEResultFlagType;

typedef char TThostFtdcFBERtnMsgType[61];

typedef char TThostFtdcFBEExtendMsgType[61];

typedef char TThostFtdcFBEBusinessSerialType[31];

typedef char TThostFtdcFBESystemSerialType[21];

typedef int TThostFtdcFBETotalExCntType;

#define THOST_FTDC_FBEES_Normal '0'
#define THOST_FTDC_FBEES_ReExchange '1'

typedef char TThostFtdcFBEExchStatusType;

#define THOST_FTDC_FBEFG_DataPackage '0'
#define THOST_FTDC_FBEFG_File '1'

typedef char TThostFtdcFBEFileFlagType;

#define THOST_FTDC_FBEAT_NotTrade '0'
#define THOST_FTDC_FBEAT_Trade '1'

typedef char TThostFtdcFBEAlreadyTradeType;

typedef char TThostFtdcFBEOpenBankType[61];

#define THOST_FTDC_FBEUET_SignIn '0'
#define THOST_FTDC_FBEUET_Exchange '1'
#define THOST_FTDC_FBEUET_ReExchange '2'
#define THOST_FTDC_FBEUET_QueryBankAccount '3'
#define THOST_FTDC_FBEUET_QueryExchDetial '4'
#define THOST_FTDC_FBEUET_QueryExchSummary '5'
#define THOST_FTDC_FBEUET_QueryExchRate '6'
#define THOST_FTDC_FBEUET_CheckBankAccount '7'
#define THOST_FTDC_FBEUET_SignOut '8'
#define THOST_FTDC_FBEUET_Other 'Z'

typedef char TThostFtdcFBEUserEventTypeType;

typedef char TThostFtdcFBEFileNameType[21];

typedef char TThostFtdcFBEBatchSerialType[21];

#define THOST_FTDC_FBERF_UnProcessed '0'
#define THOST_FTDC_FBERF_WaitSend '1'
#define THOST_FTDC_FBERF_SendSuccess '2'
#define THOST_FTDC_FBERF_SendFailed '3'
#define THOST_FTDC_FBERF_WaitReSend '4'

typedef char TThostFtdcFBEReqFlagType;

#define THOST_FTDC_NC_NOERROR '0'
#define THOST_FTDC_NC_Warn '1'
#define THOST_FTDC_NC_Call '2'
#define THOST_FTDC_NC_Force '3'
#define THOST_FTDC_NC_CHUANCANG '4'
#define THOST_FTDC_NC_Exception '5'

typedef char TThostFtdcNotifyClassType;

typedef char TThostFtdcRiskNofityInfoType[257];

typedef char TThostFtdcForceCloseSceneIdType[24];

#define THOST_FTDC_FCT_Manual '0'
#define THOST_FTDC_FCT_Single '1'
#define THOST_FTDC_FCT_Group '2'

typedef char TThostFtdcForceCloseTypeType;

typedef char TThostFtdcInstrumentIDsType[101];

#define THOST_FTDC_RNM_System '0'
#define THOST_FTDC_RNM_SMS '1'
#define THOST_FTDC_RNM_EMail '2'
#define THOST_FTDC_RNM_Manual '3'

typedef char TThostFtdcRiskNotifyMethodType;

#define THOST_FTDC_RNS_NotGen '0'
#define THOST_FTDC_RNS_Generated '1'
#define THOST_FTDC_RNS_SendError '2'
#define THOST_FTDC_RNS_SendOk '3'
#define THOST_FTDC_RNS_Received '4'
#define THOST_FTDC_RNS_Confirmed '5'

typedef char TThostFtdcRiskNotifyStatusType;

#define THOST_FTDC_RUE_ExportData '0'

typedef char TThostFtdcRiskUserEventType;

typedef int TThostFtdcParamIDType;

typedef char TThostFtdcParamNameType[41];

typedef char TThostFtdcParamValueType[41];

#define THOST_FTDC_COST_LastPriceAsc '0'
#define THOST_FTDC_COST_LastPriceDesc '1'
#define THOST_FTDC_COST_AskPriceAsc '2'
#define THOST_FTDC_COST_AskPriceDesc '3'
#define THOST_FTDC_COST_BidPriceAsc '4'
#define THOST_FTDC_COST_BidPriceDesc '5'

typedef char TThostFtdcConditionalOrderSortTypeType;

#define THOST_FTDC_UOAST_NoSend '0'
#define THOST_FTDC_UOAST_Sended '1'
#define THOST_FTDC_UOAST_Generated '2'
#define THOST_FTDC_UOAST_SendFail '3'
#define THOST_FTDC_UOAST_Success '4'
#define THOST_FTDC_UOAST_Fail '5'
#define THOST_FTDC_UOAST_Cancel '6'

typedef char TThostFtdcSendTypeType;

#define THOST_FTDC_UOACS_NoApply '1'
#define THOST_FTDC_UOACS_Submited '2'
#define THOST_FTDC_UOACS_Sended '3'
#define THOST_FTDC_UOACS_Success '4'
#define THOST_FTDC_UOACS_Refuse '5'
#define THOST_FTDC_UOACS_Cancel '6'

typedef char TThostFtdcClientIDStatusType;

typedef char TThostFtdcIndustryIDType[17];

typedef char TThostFtdcQuestionIDType[5];

typedef char TThostFtdcQuestionContentType[41];

typedef char TThostFtdcOptionIDType[13];

typedef char TThostFtdcOptionContentType[61];

#define THOST_FTDC_QT_Radio '1'
#define THOST_FTDC_QT_Option '2'
#define THOST_FTDC_QT_Blank '3'

typedef char TThostFtdcQuestionTypeType;

typedef char TThostFtdcProcessIDType[33];

typedef int TThostFtdcSeqNoType;

typedef char TThostFtdcUOAProcessStatusType[3];

typedef char TThostFtdcProcessTypeType[3];

#define THOST_FTDC_BT_Request '1'
#define THOST_FTDC_BT_Response '2'
#define THOST_FTDC_BT_Notice '3'

typedef char TThostFtdcBusinessTypeType;

#define THOST_FTDC_CRC_Success '0'
#define THOST_FTDC_CRC_Working '1'
#define THOST_FTDC_CRC_InfoFail '2'
#define THOST_FTDC_CRC_IDCardFail '3'
#define THOST_FTDC_CRC_OtherFail '4'

typedef char TThostFtdcCfmmcReturnCodeType;

typedef int TThostFtdcExReturnCodeType;

#define THOST_FTDC_CfMMCCT_All '0'
#define THOST_FTDC_CfMMCCT_Person '1'
#define THOST_FTDC_CfMMCCT_Company '2'
#define THOST_FTDC_CfMMCCT_Other '3'
#define THOST_FTDC_CfMMCCT_SpecialOrgan '4'
#define THOST_FTDC_CfMMCCT_Asset '5'

typedef char TThostFtdcClientTypeType;

#define THOST_FTDC_EIDT_SHFE 'S'
#define THOST_FTDC_EIDT_CZCE 'Z'
#define THOST_FTDC_EIDT_DCE 'D'
#define THOST_FTDC_EIDT_CFFEX 'J'
#define THOST_FTDC_EIDT_INE 'N'

typedef char TThostFtdcExchangeIDTypeType;

#define THOST_FTDC_ECIDT_Hedge '1'
#define THOST_FTDC_ECIDT_Arbitrage '2'
#define THOST_FTDC_ECIDT_Speculation '3'

typedef char TThostFtdcExClientIDTypeType;

typedef char TThostFtdcClientClassifyType[11];

typedef char TThostFtdcUOAOrganTypeType[11];

typedef char TThostFtdcUOACountryCodeType[11];

typedef char TThostFtdcAreaCodeType[11];

typedef char TThostFtdcFuturesIDType[21];

typedef char TThostFtdcCffmcDateType[11];

typedef char TThostFtdcCffmcTimeType[11];

typedef char TThostFtdcNocIDType[21];

#define THOST_FTDC_UF_NoUpdate '0'
#define THOST_FTDC_UF_Success '1'
#define THOST_FTDC_UF_Fail '2'
#define THOST_FTDC_UF_TCSuccess '3'
#define THOST_FTDC_UF_TCFail '4'
#define THOST_FTDC_UF_Cancel '5'

typedef char TThostFtdcUpdateFlagType;

#define THOST_FTDC_AOID_OpenInvestor '1'
#define THOST_FTDC_AOID_ModifyIDCard '2'
#define THOST_FTDC_AOID_ModifyNoIDCard '3'
#define THOST_FTDC_AOID_ApplyTradingCode '4'
#define THOST_FTDC_AOID_CancelTradingCode '5'
#define THOST_FTDC_AOID_CancelInvestor '6'
#define THOST_FTDC_AOID_FreezeAccount '8'
#define THOST_FTDC_AOID_ActiveFreezeAccount '9'

typedef char TThostFtdcApplyOperateIDType;

#define THOST_FTDC_ASID_NoComplete '1'
#define THOST_FTDC_ASID_Submited '2'
#define THOST_FTDC_ASID_Checked '3'
#define THOST_FTDC_ASID_Refused '4'
#define THOST_FTDC_ASID_Deleted '5'

typedef char TThostFtdcApplyStatusIDType;

#define THOST_FTDC_UOASM_ByAPI '1'
#define THOST_FTDC_UOASM_ByFile '2'

typedef char TThostFtdcSendMethodType;

typedef char TThostFtdcEventTypeType[33];

#define THOST_FTDC_EvM_ADD '1'
#define THOST_FTDC_EvM_UPDATE '2'
#define THOST_FTDC_EvM_DELETE '3'
#define THOST_FTDC_EvM_CHECK '4'
#define THOST_FTDC_EvM_COPY '5'
#define THOST_FTDC_EvM_CANCEL '6'
#define THOST_FTDC_EvM_Reverse '7'

typedef char TThostFtdcEventModeType;

#define THOST_FTDC_UOAA_ASR '1'
#define THOST_FTDC_UOAA_ASNR '2'
#define THOST_FTDC_UOAA_NSAR '3'
#define THOST_FTDC_UOAA_NSR '4'

typedef char TThostFtdcUOAAutoSendType;

typedef int TThostFtdcQueryDepthType;

typedef int TThostFtdcDataCenterIDType;

#define THOST_FTDC_EvM_InvestorGroupFlow '1'
#define THOST_FTDC_EvM_InvestorRate '2'
#define THOST_FTDC_EvM_InvestorCommRateModel '3'

typedef char TThostFtdcFlowIDType;

#define THOST_FTDC_CL_Zero '0'
#define THOST_FTDC_CL_One '1'
#define THOST_FTDC_CL_Two '2'

typedef char TThostFtdcCheckLevelType;

typedef int TThostFtdcCheckNoType;

#define THOST_FTDC_CHS_Init '0'
#define THOST_FTDC_CHS_Checking '1'
#define THOST_FTDC_CHS_Checked '2'
#define THOST_FTDC_CHS_Refuse '3'
#define THOST_FTDC_CHS_Cancel '4'

typedef char TThostFtdcCheckStatusType;

#define THOST_FTDC_CHU_Unused '0'
#define THOST_FTDC_CHU_Used '1'
#define THOST_FTDC_CHU_Fail '2'

typedef char TThostFtdcUsedStatusType;

typedef char TThostFtdcRateTemplateNameType[61];

typedef char TThostFtdcPropertyStringType[2049];

#define THOST_FTDC_BAO_ByAccProperty '0'
#define THOST_FTDC_BAO_ByFBTransfer '1'

typedef char TThostFtdcBankAcountOriginType;

#define THOST_FTDC_MBTS_ByInstrument '0'
#define THOST_FTDC_MBTS_ByDayInsPrc '1'
#define THOST_FTDC_MBTS_ByDayIns '2'

typedef char TThostFtdcMonthBillTradeSumType;

#define THOST_FTDC_FTC_BankLaunchBankToBroker '102001'
#define THOST_FTDC_FTC_BrokerLaunchBankToBroker '202001'
#define THOST_FTDC_FTC_BankLaunchBrokerToBank '102002'
#define THOST_FTDC_FTC_BrokerLaunchBrokerToBank '202002'

typedef char TThostFtdcFBTTradeCodeEnumType;

typedef char TThostFtdcRateTemplateIDType[9];

typedef char TThostFtdcRiskRateType[21];

typedef int TThostFtdcTimestampType;

typedef char TThostFtdcInvestorIDRuleNameType[61];

typedef char TThostFtdcInvestorIDRuleExprType[513];

typedef int TThostFtdcLastDriftType;

typedef int TThostFtdcLastSuccessType;

typedef char TThostFtdcAuthKeyType[41];

typedef char TThostFtdcSerialNumberType[17];

#define THOST_FTDC_OTP_NONE '0'
#define THOST_FTDC_OTP_TOTP '1'

typedef char TThostFtdcOTPTypeType;

typedef char TThostFtdcOTPVendorsIDType[2];

typedef char TThostFtdcOTPVendorsNameType[61];

#define THOST_FTDC_OTPS_Unused '0'
#define THOST_FTDC_OTPS_Used '1'
#define THOST_FTDC_OTPS_Disuse '2'

typedef char TThostFtdcOTPStatusType;

#define THOST_FTDC_BUT_Investor '1'
#define THOST_FTDC_BUT_BrokerUser '2'

typedef char TThostFtdcBrokerUserTypeType;

#define THOST_FTDC_FUTT_Commodity '1'
#define THOST_FTDC_FUTT_Financial '2'

typedef char TThostFtdcFutureTypeType;

#define THOST_FTDC_FET_Restriction '0'
#define THOST_FTDC_FET_TodayRestriction '1'
#define THOST_FTDC_FET_Transfer '2'
#define THOST_FTDC_FET_Credit '3'
#define THOST_FTDC_FET_InvestorWithdrawAlm '4'
#define THOST_FTDC_FET_BankRestriction '5'
#define THOST_FTDC_FET_Accountregister '6'
#define THOST_FTDC_FET_ExchangeFundIO '7'
#define THOST_FTDC_FET_InvestorFundIO '8'

typedef char TThostFtdcFundEventTypeType;

#define THOST_FTDC_AST_FBTransfer '0'
#define THOST_FTDC_AST_ManualEntry '1'

typedef char TThostFtdcAccountSourceTypeType;

#define THOST_FTDC_CST_UnifyAccount '0'
#define THOST_FTDC_CST_ManualEntry '1'

typedef char TThostFtdcCodeSourceTypeType;

#define THOST_FTDC_UR_All '0'
#define THOST_FTDC_UR_Single '1'

typedef char TThostFtdcUserRangeType;

typedef char TThostFtdcTimeSpanType[9];

typedef char TThostFtdcImportSequenceIDType[17];

#define THOST_FTDC_BG_Investor '2'
#define THOST_FTDC_BG_Group '1'

typedef char TThostFtdcByGroupType;

#define THOST_FTDC_TSSM_Instrument '1'
#define THOST_FTDC_TSSM_Product '2'
#define THOST_FTDC_TSSM_Exchange '3'

typedef char TThostFtdcTradeSumStatModeType;

typedef int TThostFtdcComTypeType;

typedef char TThostFtdcUserProductIDType[33];

typedef char TThostFtdcUserProductNameType[65];

typedef char TThostFtdcUserProductMemoType[129];

typedef char TThostFtdcCSRCCancelFlagType[2];

typedef char TThostFtdcCSRCDateType[11];

typedef char TThostFtdcCSRCInvestorNameType[201];

typedef char TThostFtdcCSRCOpenInvestorNameType[101];

typedef char TThostFtdcCSRCInvestorIDType[13];

typedef char TThostFtdcCSRCIdentifiedCardNoType[51];

typedef char TThostFtdcCSRCClientIDType[11];

typedef char TThostFtdcCSRCBankFlagType[3];

typedef char TThostFtdcCSRCBankAccountType[23];

typedef char TThostFtdcCSRCOpenNameType[401];

typedef char TThostFtdcCSRCMemoType[101];

typedef char TThostFtdcCSRCTimeType[11];

typedef char TThostFtdcCSRCTradeIDType[21];

typedef char TThostFtdcCSRCExchangeInstIDType[31];

typedef char TThostFtdcCSRCMortgageNameType[7];

typedef char TThostFtdcCSRCReasonType[3];

typedef char TThostFtdcIsSettlementType[2];

typedef double TThostFtdcCSRCMoneyType;

typedef double TThostFtdcCSRCPriceType;

typedef char TThostFtdcCSRCOptionsTypeType[2];

typedef double TThostFtdcCSRCStrikePriceType;

typedef char TThostFtdcCSRCTargetProductIDType[3];

typedef char TThostFtdcCSRCTargetInstrIDType[31];

typedef char TThostFtdcCommModelNameType[161];

typedef char TThostFtdcCommModelMemoType[1025];

#define THOST_FTDC_ESM_Relative '1'
#define THOST_FTDC_ESM_Typical '2'

typedef char TThostFtdcExprSetModeType;

#define THOST_FTDC_RIR_All '1'
#define THOST_FTDC_RIR_Model '2'
#define THOST_FTDC_RIR_Single '3'

typedef char TThostFtdcRateInvestorRangeType;

typedef char TThostFtdcAgentBrokerIDType[13];

typedef int TThostFtdcDRIdentityIDType;

typedef char TThostFtdcDRIdentityNameType[65];

typedef char TThostFtdcDBLinkIDType[31];

#define THOST_FTDC_SDS_Initialize '0'
#define THOST_FTDC_SDS_Settlementing '1'
#define THOST_FTDC_SDS_Settlemented '2'

typedef char TThostFtdcSyncDataStatusType;

#define THOST_FTDC_TSRC_NORMAL '0'
#define THOST_FTDC_TSRC_QUERY '1'

typedef char TThostFtdcTradeSourceType;

#define THOST_FTDC_FSM_Product '1'
#define THOST_FTDC_FSM_Exchange '2'
#define THOST_FTDC_FSM_All '3'

typedef char TThostFtdcFlexStatModeType;

#define THOST_FTDC_BIR_Property '1'
#define THOST_FTDC_BIR_All '2'

typedef char TThostFtdcByInvestorRangeType;

typedef char TThostFtdcSRiskRateType[21];

typedef int TThostFtdcSequenceNo12Type;

#define THOST_FTDC_PIR_All '1'
#define THOST_FTDC_PIR_Property '2'
#define THOST_FTDC_PIR_Single '3'

typedef char TThostFtdcPropertyInvestorRangeType;

#define THOST_FTDC_FIS_NoCreate '0'
#define THOST_FTDC_FIS_Created '1'
#define THOST_FTDC_FIS_Failed '2'

typedef char TThostFtdcFileStatusType;

#define THOST_FTDC_FGS_FileTransmit '0'
#define THOST_FTDC_FGS_FileGen '1'

typedef char TThostFtdcFileGenStyleType;

#define THOST_FTDC_SoM_Add '1'
#define THOST_FTDC_SoM_Update '2'
#define THOST_FTDC_SoM_Delete '3'
#define THOST_FTDC_SoM_Copy '4'
#define THOST_FTDC_SoM_AcTive '5'
#define THOST_FTDC_SoM_CanCel '6'
#define THOST_FTDC_SoM_ReSet '7'

typedef char TThostFtdcSysOperModeType;

#define THOST_FTDC_SoT_UpdatePassword '0'
#define THOST_FTDC_SoT_UserDepartment '1'
#define THOST_FTDC_SoT_RoleManager '2'
#define THOST_FTDC_SoT_RoleFunction '3'
#define THOST_FTDC_SoT_BaseParam '4'
#define THOST_FTDC_SoT_SetUserID '5'
#define THOST_FTDC_SoT_SetUserRole '6'
#define THOST_FTDC_SoT_UserIpRestriction '7'
#define THOST_FTDC_SoT_DepartmentManager '8'
#define THOST_FTDC_SoT_DepartmentCopy '9'
#define THOST_FTDC_SoT_Tradingcode 'A'
#define THOST_FTDC_SoT_InvestorStatus 'B'
#define THOST_FTDC_SoT_InvestorAuthority 'C'
#define THOST_FTDC_SoT_PropertySet 'D'
#define THOST_FTDC_SoT_ReSetInvestorPasswd 'E'
#define THOST_FTDC_SoT_InvestorPersonalityInfo 'F'

typedef char TThostFtdcSysOperTypeType;

#define THOST_FTDC_CSRCQ_Current '0'
#define THOST_FTDC_CSRCQ_History '1'

typedef char TThostFtdcCSRCDataQueyTypeType;

#define THOST_FTDC_FRS_Normal '1'
#define THOST_FTDC_FRS_Freeze '0'

typedef char TThostFtdcFreezeStatusType;

#define THOST_FTDC_STST_Standard '0'
#define THOST_FTDC_STST_NonStandard '1'

typedef char TThostFtdcStandardStatusType;

typedef char TThostFtdcCSRCFreezeStatusType[2];

#define THOST_FTDC_RPT_Freeze '1'
#define THOST_FTDC_RPT_FreezeActive '2'
#define THOST_FTDC_RPT_OpenLimit '3'
#define THOST_FTDC_RPT_RelieveOpenLimit '4'

typedef char TThostFtdcRightParamTypeType;

typedef char TThostFtdcRightTemplateIDType[9];

typedef char TThostFtdcRightTemplateNameType[61];

#define THOST_FTDC_AMLDS_Normal '0'
#define THOST_FTDC_AMLDS_Deleted '1'

typedef char TThostFtdcDataStatusType;

#define THOST_FTDC_AMLCHS_Init '0'
#define THOST_FTDC_AMLCHS_Checking '1'
#define THOST_FTDC_AMLCHS_Checked '2'
#define THOST_FTDC_AMLCHS_RefuseReport '3'

typedef char TThostFtdcAMLCheckStatusType;

#define THOST_FTDC_AMLDT_DrawDay '0'
#define THOST_FTDC_AMLDT_TouchDay '1'

typedef char TThostFtdcAmlDateTypeType;

#define THOST_FTDC_AMLCL_CheckLevel0 '0'
#define THOST_FTDC_AMLCL_CheckLevel1 '1'
#define THOST_FTDC_AMLCL_CheckLevel2 '2'
#define THOST_FTDC_AMLCL_CheckLevel3 '3'

typedef char TThostFtdcAmlCheckLevelType;

typedef char TThostFtdcAmlCheckFlowType[2];

typedef char TThostFtdcDataTypeType[129];

#define THOST_FTDC_EFT_CSV '0'
#define THOST_FTDC_EFT_EXCEL '1'
#define THOST_FTDC_EFT_DBF '2'

typedef char TThostFtdcExportFileTypeType;

#define THOST_FTDC_SMT_Before '1'
#define THOST_FTDC_SMT_Settlement '2'
#define THOST_FTDC_SMT_After '3'
#define THOST_FTDC_SMT_Settlemented '4'

typedef char TThostFtdcSettleManagerTypeType;

typedef char TThostFtdcSettleManagerIDType[33];

typedef char TThostFtdcSettleManagerNameType[129];

#define THOST_FTDC_SML_Must '1'
#define THOST_FTDC_SML_Alarm '2'
#define THOST_FTDC_SML_Prompt '3'
#define THOST_FTDC_SML_Ignore '4'

typedef char TThostFtdcSettleManagerLevelType;

#define THOST_FTDC_SMG_Exhcange '1'
#define THOST_FTDC_SMG_ASP '2'
#define THOST_FTDC_SMG_CSRC '3'

typedef char TThostFtdcSettleManagerGroupType;

typedef char TThostFtdcCheckResultMemoType[1025];

typedef char TThostFtdcFunctionUrlType[1025];

typedef char TThostFtdcAuthInfoType[129];

typedef char TThostFtdcAuthCodeType[17];

#define THOST_FTDC_LUT_Repeatable '1'
#define THOST_FTDC_LUT_Unrepeatable '2'

typedef char TThostFtdcLimitUseTypeType;

#define THOST_FTDC_DAR_Settle '1'
#define THOST_FTDC_DAR_Exchange '2'
#define THOST_FTDC_DAR_CSRC '3'

typedef char TThostFtdcDataResourceType;

#define THOST_FTDC_MGT_ExchMarginRate '0'
#define THOST_FTDC_MGT_InstrMarginRate '1'
#define THOST_FTDC_MGT_InstrMarginRateTrade '2'

typedef char TThostFtdcMarginTypeType;

#define THOST_FTDC_ACT_Intraday '1'
#define THOST_FTDC_ACT_Long '2'

typedef char TThostFtdcActiveTypeType;

#define THOST_FTDC_MRT_Exchange '1'
#define THOST_FTDC_MRT_Investor '2'
#define THOST_FTDC_MRT_InvestorTrade '3'

typedef char TThostFtdcMarginRateTypeType;

#define THOST_FTDC_BUS_UnBak '0'
#define THOST_FTDC_BUS_BakUp '1'
#define THOST_FTDC_BUS_BakUped '2'
#define THOST_FTDC_BUS_BakFail '3'

typedef char TThostFtdcBackUpStatusType;

#define THOST_FTDC_SIS_UnInitialize '0'
#define THOST_FTDC_SIS_Initialize '1'
#define THOST_FTDC_SIS_Initialized '2'

typedef char TThostFtdcInitSettlementType;

#define THOST_FTDC_SRS_NoCreate '0'
#define THOST_FTDC_SRS_Create '1'
#define THOST_FTDC_SRS_Created '2'
#define THOST_FTDC_SRS_CreateFail '3'

typedef char TThostFtdcReportStatusType;

#define THOST_FTDC_SSS_UnSaveData '0'
#define THOST_FTDC_SSS_SaveDatad '1'

typedef char TThostFtdcSaveStatusType;

#define THOST_FTDC_SAS_UnArchived '0'
#define THOST_FTDC_SAS_Archiving '1'
#define THOST_FTDC_SAS_Archived '2'
#define THOST_FTDC_SAS_ArchiveFail '3'

typedef char TThostFtdcSettArchiveStatusType;

#define THOST_FTDC_CTPT_Unkown '0'
#define THOST_FTDC_CTPT_MainCenter '1'
#define THOST_FTDC_CTPT_BackUp '2'

typedef char TThostFtdcCTPTypeType;

typedef char TThostFtdcToolIDType[9];

typedef char TThostFtdcToolNameType[81];

#define THOST_FTDC_CDT_Normal '0'
#define THOST_FTDC_CDT_SpecFirst '1'

typedef char TThostFtdcCloseDealTypeType;

#define THOST_FTDC_MFUR_None '0'
#define THOST_FTDC_MFUR_Margin '1'
#define THOST_FTDC_MFUR_All '2'
#define THOST_FTDC_MFUR_CNY3 '3'

typedef char TThostFtdcMortgageFundUseRangeType;

typedef double TThostFtdcCurrencyUnitType;

typedef double TThostFtdcExchangeRateType;

#define THOST_FTDC_SPT_CzceHedge '1'
#define THOST_FTDC_SPT_IneForeignCurrency '2'
#define THOST_FTDC_SPT_DceOpenClose '3'

typedef char TThostFtdcSpecProductTypeType;

#define THOST_FTDC_FMT_Mortgage '1'
#define THOST_FTDC_FMT_Redemption '2'

typedef char TThostFtdcFundMortgageTypeType;

#define THOST_FTDC_ASPI_BaseMargin '1'
#define THOST_FTDC_ASPI_LowestInterest '2'

typedef char TThostFtdcAccountSettlementParamIDType;

typedef char TThostFtdcCurrencyNameType[31];

typedef char TThostFtdcCurrencySignType[4];

#define THOST_FTDC_FMD_In '1'
#define THOST_FTDC_FMD_Out '2'

typedef char TThostFtdcFundMortDirectionType;

#define THOST_FTDC_BT_Profit '0'
#define THOST_FTDC_BT_Loss '1'
#define THOST_FTDC_BT_Other 'Z'

typedef char TThostFtdcBusinessClassType;

#define THOST_FTDC_SST_Manual '0'
#define THOST_FTDC_SST_Automatic '1'

typedef char TThostFtdcSwapSourceTypeType;

#define THOST_FTDC_CED_Settlement '0'
#define THOST_FTDC_CED_Sale '1'

typedef char TThostFtdcCurrExDirectionType;

#define THOST_FTDC_CSS_Entry '1'
#define THOST_FTDC_CSS_Approve '2'
#define THOST_FTDC_CSS_Refuse '3'
#define THOST_FTDC_CSS_Revoke '4'
#define THOST_FTDC_CSS_Send '5'
#define THOST_FTDC_CSS_Success '6'
#define THOST_FTDC_CSS_Failure '7'

typedef char TThostFtdcCurrencySwapStatusType;

typedef char TThostFtdcCurrExchCertNoType[13];

typedef char TThostFtdcBatchSerialNoType[21];

#define THOST_FTDC_REQF_NoSend '0'
#define THOST_FTDC_REQF_SendSuccess '1'
#define THOST_FTDC_REQF_SendFailed '2'
#define THOST_FTDC_REQF_WaitReSend '3'

typedef char TThostFtdcReqFlagType;

#define THOST_FTDC_RESF_Success '0'
#define THOST_FTDC_RESF_InsuffiCient '1'
#define THOST_FTDC_RESF_UnKnown '8'

typedef char TThostFtdcResFlagType;

typedef char TThostFtdcPageControlType[2];

typedef int TThostFtdcRecordCountType;

typedef char TThostFtdcCurrencySwapMemoType[101];

#define THOST_FTDC_EXS_Before '0'
#define THOST_FTDC_EXS_After '1'

typedef char TThostFtdcExStatusType;

#define THOST_FTDC_CR_Domestic '1'
#define THOST_FTDC_CR_GMT '2'
#define THOST_FTDC_CR_Foreign '3'

typedef char TThostFtdcClientRegionType;

typedef char TThostFtdcWorkPlaceType[101];

typedef char TThostFtdcBusinessPeriodType[21];

typedef char TThostFtdcWebSiteType[101];

typedef char TThostFtdcUOAIdCardTypeType[3];

typedef char TThostFtdcClientModeType[3];

typedef char TThostFtdcInvestorFullNameType[101];

typedef char TThostFtdcUOABrokerIDType[11];

typedef char TThostFtdcUOAZipCodeType[11];

typedef char TThostFtdcUOAEMailType[101];

typedef char TThostFtdcOldCityType[41];

typedef char TThostFtdcCorporateIdentifiedCardNoType[101];

#define THOST_FTDC_HB_No '0'
#define THOST_FTDC_HB_Yes '1'

typedef char TThostFtdcHasBoardType;

#define THOST_FTDC_SM_Normal '1'
#define THOST_FTDC_SM_Emerge '2'
#define THOST_FTDC_SM_Restore '3'

typedef char TThostFtdcStartModeType;

#define THOST_FTDC_TPT_Full '1'
#define THOST_FTDC_TPT_Increment '2'
#define THOST_FTDC_TPT_BackUp '3'

typedef char TThostFtdcTemplateTypeType;

#define THOST_FTDC_LM_Trade '0'
#define THOST_FTDC_LM_Transfer '1'

typedef char TThostFtdcLoginModeType;

#define THOST_FTDC_CPT_Instrument '1'
#define THOST_FTDC_CPT_Margin '2'

typedef char TThostFtdcPromptTypeType;

typedef char TThostFtdcLedgerManageIDType[51];

typedef char TThostFtdcInvestVarietyType[101];

typedef char TThostFtdcBankAccountTypeType[2];

typedef char TThostFtdcLedgerManageBankType[101];

typedef char TThostFtdcCffexDepartmentNameType[101];

typedef char TThostFtdcCffexDepartmentCodeType[9];

#define THOST_FTDC_HT_Yes '1'
#define THOST_FTDC_HT_No '0'

typedef char TThostFtdcHasTrusteeType;

typedef char TThostFtdcCSRCMemo1Type[41];

typedef char TThostFtdcAssetmgrCFullNameType[101];

typedef char TThostFtdcAssetmgrApprovalNOType[51];

typedef char TThostFtdcAssetmgrMgrNameType[401];

#define THOST_FTDC_AMT_Bank '1'
#define THOST_FTDC_AMT_Securities '2'
#define THOST_FTDC_AMT_Fund '3'
#define THOST_FTDC_AMT_Insurance '4'
#define THOST_FTDC_AMT_Trust '5'
#define THOST_FTDC_AMT_Other '9'

typedef char TThostFtdcAmTypeType;

typedef char TThostFtdcCSRCAmTypeType[5];

#define THOST_FTDC_CFIOT_FundIO '0'
#define THOST_FTDC_CFIOT_SwapCurrency '1'

typedef char TThostFtdcCSRCFundIOTypeType;

#define THOST_FTDC_CAT_Futures '1'
#define THOST_FTDC_CAT_AssetmgrFuture '2'
#define THOST_FTDC_CAT_AssetmgrTrustee '3'
#define THOST_FTDC_CAT_AssetmgrTransfer '4'

typedef char TThostFtdcCusAccountTypeType;

typedef char TThostFtdcCSRCNationalType[4];

typedef char TThostFtdcCSRCSecAgentIDType[11];

#define THOST_FTDC_LT_Chinese '1'
#define THOST_FTDC_LT_English '2'

typedef char TThostFtdcLanguageTypeType;

typedef char TThostFtdcAmAccountType[23];

#define THOST_FTDC_AMCT_Person '1'
#define THOST_FTDC_AMCT_Organ '2'
#define THOST_FTDC_AMCT_SpecialOrgan '4'

typedef char TThostFtdcAssetmgrClientTypeType;

#define THOST_FTDC_ASST_Futures '3'
#define THOST_FTDC_ASST_SpecialOrgan '4'

typedef char TThostFtdcAssetmgrTypeType;

typedef char TThostFtdcUOMType[11];

typedef char TThostFtdcSHFEInstLifePhaseType[3];

typedef char TThostFtdcSHFEProductClassType[11];

typedef char TThostFtdcPriceDecimalType[2];

typedef char TThostFtdcInTheMoneyFlagType[2];

#define THOST_FTDC_CIT_HasExch '0'
#define THOST_FTDC_CIT_HasATP '1'
#define THOST_FTDC_CIT_HasDiff '2'

typedef char TThostFtdcCheckInstrTypeType;

#define THOST_FTDC_DT_HandDeliv '1'
#define THOST_FTDC_DT_PersonDeliv '2'

typedef char TThostFtdcDeliveryTypeType;

typedef double TThostFtdcBigMoneyType;

#define THOST_FTDC_MMSA_NO '0'
#define THOST_FTDC_MMSA_YES '1'

typedef char TThostFtdcMaxMarginSideAlgorithmType;

#define THOST_FTDC_CACT_Person '0'
#define THOST_FTDC_CACT_Company '1'
#define THOST_FTDC_CACT_Other '2'

typedef char TThostFtdcDAClientTypeType;

typedef char TThostFtdcCombinInstrIDType[61];

typedef char TThostFtdcCombinSettlePriceType[61];

typedef int TThostFtdcDCEPriorityType;

typedef int TThostFtdcTradeGroupIDType;

typedef int TThostFtdcIsCheckPrepaType;

#define THOST_FTDC_UOAAT_Futures '1'
#define THOST_FTDC_UOAAT_SpecialOrgan '2'

typedef char TThostFtdcUOAAssetmgrTypeType;

#define THOST_FTDC_DEN_Buy '0'
#define THOST_FTDC_DEN_Sell '1'

typedef char TThostFtdcDirectionEnType;

#define THOST_FTDC_OFEN_Open '0'
#define THOST_FTDC_OFEN_Close '1'
#define THOST_FTDC_OFEN_ForceClose '2'
#define THOST_FTDC_OFEN_CloseToday '3'
#define THOST_FTDC_OFEN_CloseYesterday '4'
#define THOST_FTDC_OFEN_ForceOff '5'
#define THOST_FTDC_OFEN_LocalForceClose '6'

typedef char TThostFtdcOffsetFlagEnType;

#define THOST_FTDC_HFEN_Speculation '1'
#define THOST_FTDC_HFEN_Arbitrage '2'
#define THOST_FTDC_HFEN_Hedge '3'

typedef char TThostFtdcHedgeFlagEnType;

#define THOST_FTDC_FIOTEN_FundIO '1'
#define THOST_FTDC_FIOTEN_Transfer '2'
#define THOST_FTDC_FIOTEN_SwapCurrency '3'

typedef char TThostFtdcFundIOTypeEnType;

#define THOST_FTDC_FTEN_Deposite '1'
#define THOST_FTDC_FTEN_ItemFund '2'
#define THOST_FTDC_FTEN_Company '3'
#define THOST_FTDC_FTEN_InnerTransfer '4'

typedef char TThostFtdcFundTypeEnType;

#define THOST_FTDC_FDEN_In '1'
#define THOST_FTDC_FDEN_Out '2'

typedef char TThostFtdcFundDirectionEnType;

#define THOST_FTDC_FMDEN_In '1'
#define THOST_FTDC_FMDEN_Out '2'

typedef char TThostFtdcFundMortDirectionEnType;

typedef char TThostFtdcSwapBusinessTypeType[3];

#define THOST_FTDC_CP_CallOptions '1'
#define THOST_FTDC_CP_PutOptions '2'

typedef char TThostFtdcOptionsTypeType;

#define THOST_FTDC_STM_Continental '0'
#define THOST_FTDC_STM_American '1'
#define THOST_FTDC_STM_Bermuda '2'

typedef char TThostFtdcStrikeModeType;

#define THOST_FTDC_STT_Hedge '0'
#define THOST_FTDC_STT_Match '1'

typedef char TThostFtdcStrikeTypeType;

#define THOST_FTDC_APPT_NotStrikeNum '4'

typedef char TThostFtdcApplyTypeType;

#define THOST_FTDC_GUDS_Gen '0'
#define THOST_FTDC_GUDS_Hand '1'

typedef char TThostFtdcGiveUpDataSourceType;

typedef char TThostFtdcExecOrderSysIDType[21];

#define THOST_FTDC_OER_NoExec 'n'
#define THOST_FTDC_OER_Canceled 'c'
#define THOST_FTDC_OER_OK '0'
#define THOST_FTDC_OER_NoPosition '1'
#define THOST_FTDC_OER_NoDeposit '2'
#define THOST_FTDC_OER_NoParticipant '3'
#define THOST_FTDC_OER_NoClient '4'
#define THOST_FTDC_OER_NoInstrument '6'
#define THOST_FTDC_OER_NoRight '7'
#define THOST_FTDC_OER_InvalidVolume '8'
#define THOST_FTDC_OER_NoEnoughHistoryTrade '9'
#define THOST_FTDC_OER_Unknown 'a'

typedef char TThostFtdcExecResultType;

typedef int TThostFtdcStrikeSequenceType;

typedef char TThostFtdcStrikeTimeType[13];

#define THOST_FTDC_COMBT_Future '0'
#define THOST_FTDC_COMBT_BUL '1'
#define THOST_FTDC_COMBT_BER '2'
#define THOST_FTDC_COMBT_STD '3'
#define THOST_FTDC_COMBT_STG '4'
#define THOST_FTDC_COMBT_PRT '5'
#define THOST_FTDC_COMBT_CLD '6'

typedef char TThostFtdcCombinationTypeType;

#define THOST_FTDC_ORPT_PreSettlementPrice '1'
#define THOST_FTDC_ORPT_OpenPrice '4'
#define THOST_FTDC_ORPT_MaxPreSettlementPrice '5'

typedef char TThostFtdcOptionRoyaltyPriceTypeType;

#define THOST_FTDC_BLAG_Default '1'
#define THOST_FTDC_BLAG_IncludeOptValLost '2'

typedef char TThostFtdcBalanceAlgorithmType;

#define THOST_FTDC_ACTP_Exec '1'
#define THOST_FTDC_ACTP_Abandon '2'

typedef char TThostFtdcActionTypeType;

#define THOST_FTDC_FQST_Submitted 'a'
#define THOST_FTDC_FQST_Accepted 'b'
#define THOST_FTDC_FQST_Rejected 'c'

typedef char TThostFtdcForQuoteStatusType;

#define THOST_FTDC_VM_Absolute '0'
#define THOST_FTDC_VM_Ratio '1'

typedef char TThostFtdcValueMethodType;

#define THOST_FTDC_EOPF_Reserve '0'
#define THOST_FTDC_EOPF_UnReserve '1'

typedef char TThostFtdcExecOrderPositionFlagType;

#define THOST_FTDC_EOCF_AutoClose '0'
#define THOST_FTDC_EOCF_NotToClose '1'

typedef char TThostFtdcExecOrderCloseFlagType;

#define THOST_FTDC_PTE_Futures '1'
#define THOST_FTDC_PTE_Options '2'

typedef char TThostFtdcProductTypeType;

#define THOST_FTDC_CUFN_CUFN_O 'O'
#define THOST_FTDC_CUFN_CUFN_T 'T'
#define THOST_FTDC_CUFN_CUFN_P 'P'
#define THOST_FTDC_CUFN_CUFN_N 'N'
#define THOST_FTDC_CUFN_CUFN_L 'L'
#define THOST_FTDC_CUFN_CUFN_F 'F'
#define THOST_FTDC_CUFN_CUFN_C 'C'
#define THOST_FTDC_CUFN_CUFN_M 'M'

typedef char TThostFtdcCZCEUploadFileNameType;

#define THOST_FTDC_DUFN_DUFN_O 'O'
#define THOST_FTDC_DUFN_DUFN_T 'T'
#define THOST_FTDC_DUFN_DUFN_P 'P'
#define THOST_FTDC_DUFN_DUFN_F 'F'
#define THOST_FTDC_DUFN_DUFN_C 'C'
#define THOST_FTDC_DUFN_DUFN_D 'D'
#define THOST_FTDC_DUFN_DUFN_M 'M'
#define THOST_FTDC_DUFN_DUFN_S 'S'

typedef char TThostFtdcDCEUploadFileNameType;

#define THOST_FTDC_SUFN_SUFN_O 'O'
#define THOST_FTDC_SUFN_SUFN_T 'T'
#define THOST_FTDC_SUFN_SUFN_P 'P'
#define THOST_FTDC_SUFN_SUFN_F 'F'

typedef char TThostFtdcSHFEUploadFileNameType;

#define THOST_FTDC_CFUFN_SUFN_T 'T'
#define THOST_FTDC_CFUFN_SUFN_P 'P'
#define THOST_FTDC_CFUFN_SUFN_F 'F'
#define THOST_FTDC_CFUFN_SUFN_S 'S'

typedef char TThostFtdcCFFEXUploadFileNameType;

#define THOST_FTDC_CMDR_Comb '0'
#define THOST_FTDC_CMDR_UnComb '1'

typedef char TThostFtdcCombDirectionType;

#define THOST_FTDC_STOV_RealValue '1'
#define THOST_FTDC_STOV_ProfitValue '2'
#define THOST_FTDC_STOV_RealRatio '3'
#define THOST_FTDC_STOV_ProfitRatio '4'

typedef char TThostFtdcStrikeOffsetTypeType;

#define THOST_FTDC_ROAST_Processing '0'
#define THOST_FTDC_ROAST_Cancelled '1'
#define THOST_FTDC_ROAST_Opened '2'
#define THOST_FTDC_ROAST_Invalid '3'

typedef char TThostFtdcReserveOpenAccStasType;

typedef char TThostFtdcLoginRemarkType[36];

typedef char TThostFtdcInvestUnitIDType[17];

typedef int TThostFtdcBulletinIDType;

typedef char TThostFtdcNewsTypeType[3];

typedef char TThostFtdcNewsUrgencyType;

typedef char TThostFtdcAbstractType[81];

typedef char TThostFtdcComeFromType[21];

typedef char TThostFtdcURLLinkType[201];

typedef char TThostFtdcLongIndividualNameType[161];

typedef char TThostFtdcLongFBEBankAccountNameType[161];

typedef char TThostFtdcDateTimeType[17];

#define THOST_FTDC_WPSR_Lib '1'
#define THOST_FTDC_WPSR_Manual '2'

typedef char TThostFtdcWeakPasswordSourceType;

typedef char TThostFtdcRandomStringType[17];

#define THOST_FTDC_OSCF_CloseSelfOptionPosition '1'
#define THOST_FTDC_OSCF_ReserveOptionPosition '2'
#define THOST_FTDC_OSCF_SellCloseSelfFuturePosition '3'
#define THOST_FTDC_OSCF_ReserveFuturePosition '4'

typedef char TThostFtdcOptSelfCloseFlagType;

#define THOST_FTDC_BZTP_Future '1'
#define THOST_FTDC_BZTP_Stock '2'

typedef char TThostFtdcBizTypeType;

#define THOST_FTDC_APP_TYPE_Investor '1'
#define THOST_FTDC_APP_TYPE_InvestorRelay '2'
#define THOST_FTDC_APP_TYPE_OperatorRelay '3'
#define THOST_FTDC_APP_TYPE_UnKnown '4'

typedef char TThostFtdcAppTypeType;

typedef char TThostFtdcAppIDType[33];

typedef int TThostFtdcSystemInfoLenType;

typedef int TThostFtdcAdditionalInfoLenType;

typedef char TThostFtdcClientSystemInfoType[273];

typedef char TThostFtdcAdditionalInfoType[261];

typedef char TThostFtdcBase64ClientSystemInfoType[365];

typedef char TThostFtdcBase64AdditionalInfoType[349];

typedef int TThostFtdcCurrentAuthMethodType;

typedef int TThostFtdcCaptchaInfoLenType;

typedef char TThostFtdcCaptchaInfoType[2561];

typedef int TThostFtdcUserTextSeqType;

typedef char TThostFtdcHandshakeDataType[301];

typedef int TThostFtdcHandshakeDataLenType;

typedef char TThostFtdcCryptoKeyVersionType[31];

typedef int TThostFtdcRsaKeyVersionType;

typedef char TThostFtdcSoftwareProviderIDType[22];

typedef char TThostFtdcCollectTimeType[21];

typedef int TThostFtdcQueryFreqType;

#define THOST_FTDC_RV_Right '0'
#define THOST_FTDC_RV_Refuse '1'

typedef char TThostFtdcResponseValueType;

#define THOST_FTDC_OTC_TRDT_Block '0'
#define THOST_FTDC_OTC_TRDT_EFP '1'

typedef char TThostFtdcOTCTradeTypeType;

#define THOST_FTDC_OTC_MT_DV01 '1'
#define THOST_FTDC_OTC_MT_ParValue '2'

typedef char TThostFtdcMatchTypeType;

typedef char TThostFtdcOTCTraderIDType[31];

typedef double TThostFtdcRiskValueType;

typedef char TThostFtdcIDBNameType[100];

#endif
