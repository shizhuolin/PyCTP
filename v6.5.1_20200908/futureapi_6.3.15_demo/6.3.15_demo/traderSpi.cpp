#pragma  once
#include "stdafx.h"
#include "traderSpi.h"
#include <stdio.h>
#include "define.h"

void CTraderSpi::OnFrontConnected()
{
	LOG("<OnFrontConnected>\n");
	LOG("</OnFrontConnected>\n");
};

void CTraderSpi::OnFrontDisconnected(int nReason)
{
	LOG("<OnFrontDisconnected>\n");
	LOG("\tnReason [%d]\n",nReason);
	LOG("</OnFrontDisconnected>\n");
}

void CTraderSpi::OnHeartBeatWarning(int nTimeLapse)
{
	LOG("<OnHeartBeatWarning>\n");
	LOG("\tnTimeLapse [%d]\n",nTimeLapse);
	LOG("</OnHeartBeatWarning>\n");
}

void CTraderSpi::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspAuthenticate>\n");
	if (pRspAuthenticateField)
	{
		LOG("\tBrokerID [%s]\n",pRspAuthenticateField->BrokerID);
		LOG("\tUserID [%s]\n",pRspAuthenticateField->UserID);
		LOG("\tUserProductInfo [%s]\n",pRspAuthenticateField->UserProductInfo);
		LOG("\tAppID [%s]\n",pRspAuthenticateField->AppID);
		LOG("\tAppType [%c]\n",pRspAuthenticateField->AppType);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspAuthenticate>\n");
};

void CTraderSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspUserLogin>\n");
	if (pRspUserLogin)
	{
		LOG("\tTradingDay [%s]\n",pRspUserLogin->TradingDay);
		LOG("\tLoginTime [%s]\n",pRspUserLogin->LoginTime);
		LOG("\tBrokerID [%s]\n",pRspUserLogin->BrokerID);
		LOG("\tUserID [%s]\n",pRspUserLogin->UserID);
		LOG("\tSystemName [%s]\n",pRspUserLogin->SystemName);
		LOG("\tMaxOrderRef [%s]\n",pRspUserLogin->MaxOrderRef);
		LOG("\tSHFETime [%s]\n",pRspUserLogin->SHFETime);
		LOG("\tDCETime [%s]\n",pRspUserLogin->DCETime);
		LOG("\tCZCETime [%s]\n",pRspUserLogin->CZCETime);
		LOG("\tFFEXTime [%s]\n",pRspUserLogin->FFEXTime);
		LOG("\tINETime [%s]\n",pRspUserLogin->INETime);
		LOG("\tFrontID [%d]\n",pRspUserLogin->FrontID);
		LOG("\tSessionID [%d]\n",pRspUserLogin->SessionID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspUserLogin>\n");
};

void CTraderSpi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspUserLogout>\n");
	if (pUserLogout)
	{
		LOG("\tBrokerID [%s]\n",pUserLogout->BrokerID);
		LOG("\tUserID [%s]\n",pUserLogout->UserID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspUserLogout>\n");
};

void CTraderSpi::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspUserPasswordUpdate>\n");
	if (pUserPasswordUpdate)
	{
		LOG("\tBrokerID [%s]\n",pUserPasswordUpdate->BrokerID);
		LOG("\tUserID [%s]\n",pUserPasswordUpdate->UserID);
		LOG("\tOldPassword [%s]\n",pUserPasswordUpdate->OldPassword);
		LOG("\tNewPassword [%s]\n",pUserPasswordUpdate->NewPassword);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspUserPasswordUpdate>\n");
};

void CTraderSpi::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspTradingAccountPasswordUpdate>\n");
	if (pTradingAccountPasswordUpdate)
	{
		LOG("\tBrokerID [%s]\n",pTradingAccountPasswordUpdate->BrokerID);
		LOG("\tAccountID [%s]\n",pTradingAccountPasswordUpdate->AccountID);
		LOG("\tOldPassword [%s]\n",pTradingAccountPasswordUpdate->OldPassword);
		LOG("\tNewPassword [%s]\n",pTradingAccountPasswordUpdate->NewPassword);
		LOG("\tCurrencyID [%s]\n",pTradingAccountPasswordUpdate->CurrencyID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspTradingAccountPasswordUpdate>\n");
};

void CTraderSpi::OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspUserAuthMethod>\n");
	if (pRspUserAuthMethod)
	{
		LOG("\tUsableAuthMethod [%d]\n",pRspUserAuthMethod->UsableAuthMethod);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspUserAuthMethod>\n");
};

void CTraderSpi::OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspGenUserCaptcha>\n");
	if (pRspGenUserCaptcha)
	{
		LOG("\tBrokerID [%s]\n",pRspGenUserCaptcha->BrokerID);
		LOG("\tUserID [%s]\n",pRspGenUserCaptcha->UserID);
		LOG("\tCaptchaInfo [%s]\n",pRspGenUserCaptcha->CaptchaInfo);
		LOG("\tCaptchaInfoLen [%d]\n",pRspGenUserCaptcha->CaptchaInfoLen);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspGenUserCaptcha>\n");
};

void CTraderSpi::OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspGenUserText>\n");
	if (pRspGenUserText)
	{
		LOG("\tUserTextSeq [%d]\n",pRspGenUserText->UserTextSeq);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspGenUserText>\n");
};

void CTraderSpi::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspOrderInsert>\n");
	if (pInputOrder)
	{
		LOG("\tBrokerID [%s]\n",pInputOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputOrder->InstrumentID);
		LOG("\tOrderRef [%s]\n",pInputOrder->OrderRef);
		LOG("\tUserID [%s]\n",pInputOrder->UserID);
		LOG("\tCombOffsetFlag [%s]\n",pInputOrder->CombOffsetFlag);
		LOG("\tCombHedgeFlag [%s]\n",pInputOrder->CombHedgeFlag);
		LOG("\tGTDDate [%s]\n",pInputOrder->GTDDate);
		LOG("\tBusinessUnit [%s]\n",pInputOrder->BusinessUnit);
		LOG("\tExchangeID [%s]\n",pInputOrder->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pInputOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pInputOrder->CurrencyID);
		LOG("\tClientID [%s]\n",pInputOrder->ClientID);
		LOG("\tIPAddress [%s]\n",pInputOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputOrder->MacAddress);
		LOG("\tVolumeTotalOriginal [%d]\n",pInputOrder->VolumeTotalOriginal);
		LOG("\tMinVolume [%d]\n",pInputOrder->MinVolume);
		LOG("\tIsAutoSuspend [%d]\n",pInputOrder->IsAutoSuspend);
		LOG("\tRequestID [%d]\n",pInputOrder->RequestID);
		LOG("\tUserForceClose [%d]\n",pInputOrder->UserForceClose);
		LOG("\tIsSwapOrder [%d]\n",pInputOrder->IsSwapOrder);
		LOG("\tOrderPriceType [%c]\n",pInputOrder->OrderPriceType);
		LOG("\tDirection [%c]\n",pInputOrder->Direction);
		LOG("\tTimeCondition [%c]\n",pInputOrder->TimeCondition);
		LOG("\tVolumeCondition [%c]\n",pInputOrder->VolumeCondition);
		LOG("\tContingentCondition [%c]\n",pInputOrder->ContingentCondition);
		LOG("\tForceCloseReason [%c]\n",pInputOrder->ForceCloseReason);
		LOG("\tLimitPrice [%.8lf]\n",pInputOrder->LimitPrice);
		LOG("\tStopPrice [%.8lf]\n",pInputOrder->StopPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspOrderInsert>\n");
};

void CTraderSpi::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspParkedOrderInsert>\n");
	if (pParkedOrder)
	{
		LOG("\tBrokerID [%s]\n",pParkedOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pParkedOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pParkedOrder->InstrumentID);
		LOG("\tOrderRef [%s]\n",pParkedOrder->OrderRef);
		LOG("\tUserID [%s]\n",pParkedOrder->UserID);
		LOG("\tCombOffsetFlag [%s]\n",pParkedOrder->CombOffsetFlag);
		LOG("\tCombHedgeFlag [%s]\n",pParkedOrder->CombHedgeFlag);
		LOG("\tGTDDate [%s]\n",pParkedOrder->GTDDate);
		LOG("\tBusinessUnit [%s]\n",pParkedOrder->BusinessUnit);
		LOG("\tExchangeID [%s]\n",pParkedOrder->ExchangeID);
		LOG("\tParkedOrderID [%s]\n",pParkedOrder->ParkedOrderID);
		LOG("\tErrorMsg [%s]\n",pParkedOrder->ErrorMsg);
		LOG("\tAccountID [%s]\n",pParkedOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pParkedOrder->CurrencyID);
		LOG("\tClientID [%s]\n",pParkedOrder->ClientID);
		LOG("\tInvestUnitID [%s]\n",pParkedOrder->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pParkedOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pParkedOrder->MacAddress);
		LOG("\tVolumeTotalOriginal [%d]\n",pParkedOrder->VolumeTotalOriginal);
		LOG("\tMinVolume [%d]\n",pParkedOrder->MinVolume);
		LOG("\tIsAutoSuspend [%d]\n",pParkedOrder->IsAutoSuspend);
		LOG("\tRequestID [%d]\n",pParkedOrder->RequestID);
		LOG("\tUserForceClose [%d]\n",pParkedOrder->UserForceClose);
		LOG("\tErrorID [%d]\n",pParkedOrder->ErrorID);
		LOG("\tIsSwapOrder [%d]\n",pParkedOrder->IsSwapOrder);
		LOG("\tOrderPriceType [%c]\n",pParkedOrder->OrderPriceType);
		LOG("\tDirection [%c]\n",pParkedOrder->Direction);
		LOG("\tTimeCondition [%c]\n",pParkedOrder->TimeCondition);
		LOG("\tVolumeCondition [%c]\n",pParkedOrder->VolumeCondition);
		LOG("\tContingentCondition [%c]\n",pParkedOrder->ContingentCondition);
		LOG("\tForceCloseReason [%c]\n",pParkedOrder->ForceCloseReason);
		LOG("\tUserType [%c]\n",pParkedOrder->UserType);
		LOG("\tStatus [%c]\n",pParkedOrder->Status);
		LOG("\tLimitPrice [%.8lf]\n",pParkedOrder->LimitPrice);
		LOG("\tStopPrice [%.8lf]\n",pParkedOrder->StopPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspParkedOrderInsert>\n");
};

void CTraderSpi::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspParkedOrderAction>\n");
	if (pParkedOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pParkedOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pParkedOrderAction->InvestorID);
		LOG("\tOrderRef [%s]\n",pParkedOrderAction->OrderRef);
		LOG("\tExchangeID [%s]\n",pParkedOrderAction->ExchangeID);
		LOG("\tOrderSysID [%s]\n",pParkedOrderAction->OrderSysID);
		LOG("\tUserID [%s]\n",pParkedOrderAction->UserID);
		LOG("\tInstrumentID [%s]\n",pParkedOrderAction->InstrumentID);
		LOG("\tParkedOrderActionID [%s]\n",pParkedOrderAction->ParkedOrderActionID);
		LOG("\tErrorMsg [%s]\n",pParkedOrderAction->ErrorMsg);
		LOG("\tInvestUnitID [%s]\n",pParkedOrderAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pParkedOrderAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pParkedOrderAction->MacAddress);
		LOG("\tOrderActionRef [%d]\n",pParkedOrderAction->OrderActionRef);
		LOG("\tRequestID [%d]\n",pParkedOrderAction->RequestID);
		LOG("\tFrontID [%d]\n",pParkedOrderAction->FrontID);
		LOG("\tSessionID [%d]\n",pParkedOrderAction->SessionID);
		LOG("\tVolumeChange [%d]\n",pParkedOrderAction->VolumeChange);
		LOG("\tErrorID [%d]\n",pParkedOrderAction->ErrorID);
		LOG("\tActionFlag [%c]\n",pParkedOrderAction->ActionFlag);
		LOG("\tUserType [%c]\n",pParkedOrderAction->UserType);
		LOG("\tStatus [%c]\n",pParkedOrderAction->Status);
		LOG("\tLimitPrice [%.8lf]\n",pParkedOrderAction->LimitPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspParkedOrderAction>\n");
};

void CTraderSpi::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspOrderAction>\n");
	if (pInputOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pInputOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputOrderAction->InvestorID);
		LOG("\tOrderRef [%s]\n",pInputOrderAction->OrderRef);
		LOG("\tExchangeID [%s]\n",pInputOrderAction->ExchangeID);
		LOG("\tOrderSysID [%s]\n",pInputOrderAction->OrderSysID);
		LOG("\tUserID [%s]\n",pInputOrderAction->UserID);
		LOG("\tInstrumentID [%s]\n",pInputOrderAction->InstrumentID);
		LOG("\tInvestUnitID [%s]\n",pInputOrderAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pInputOrderAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputOrderAction->MacAddress);
		LOG("\tOrderActionRef [%d]\n",pInputOrderAction->OrderActionRef);
		LOG("\tRequestID [%d]\n",pInputOrderAction->RequestID);
		LOG("\tFrontID [%d]\n",pInputOrderAction->FrontID);
		LOG("\tSessionID [%d]\n",pInputOrderAction->SessionID);
		LOG("\tVolumeChange [%d]\n",pInputOrderAction->VolumeChange);
		LOG("\tActionFlag [%c]\n",pInputOrderAction->ActionFlag);
		LOG("\tLimitPrice [%.8lf]\n",pInputOrderAction->LimitPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspOrderAction>\n");
};

void CTraderSpi::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQueryMaxOrderVolume>\n");
	if (pQueryMaxOrderVolume)
	{
		LOG("\tBrokerID [%s]\n",pQueryMaxOrderVolume->BrokerID);
		LOG("\tInvestorID [%s]\n",pQueryMaxOrderVolume->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQueryMaxOrderVolume->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQueryMaxOrderVolume->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQueryMaxOrderVolume->InvestUnitID);
		LOG("\tMaxVolume [%d]\n",pQueryMaxOrderVolume->MaxVolume);
		LOG("\tDirection [%c]\n",pQueryMaxOrderVolume->Direction);
		LOG("\tOffsetFlag [%c]\n",pQueryMaxOrderVolume->OffsetFlag);
		LOG("\tHedgeFlag [%c]\n",pQueryMaxOrderVolume->HedgeFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQueryMaxOrderVolume>\n");
};

void CTraderSpi::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspSettlementInfoConfirm>\n");
	if (pSettlementInfoConfirm)
	{
		LOG("\tBrokerID [%s]\n",pSettlementInfoConfirm->BrokerID);
		LOG("\tInvestorID [%s]\n",pSettlementInfoConfirm->InvestorID);
		LOG("\tConfirmDate [%s]\n",pSettlementInfoConfirm->ConfirmDate);
		LOG("\tConfirmTime [%s]\n",pSettlementInfoConfirm->ConfirmTime);
		LOG("\tAccountID [%s]\n",pSettlementInfoConfirm->AccountID);
		LOG("\tCurrencyID [%s]\n",pSettlementInfoConfirm->CurrencyID);
		LOG("\tSettlementID [%d]\n",pSettlementInfoConfirm->SettlementID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspSettlementInfoConfirm>\n");
};

void CTraderSpi::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspRemoveParkedOrder>\n");
	if (pRemoveParkedOrder)
	{
		LOG("\tBrokerID [%s]\n",pRemoveParkedOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pRemoveParkedOrder->InvestorID);
		LOG("\tParkedOrderID [%s]\n",pRemoveParkedOrder->ParkedOrderID);
		LOG("\tInvestUnitID [%s]\n",pRemoveParkedOrder->InvestUnitID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspRemoveParkedOrder>\n");
};

void CTraderSpi::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspRemoveParkedOrderAction>\n");
	if (pRemoveParkedOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pRemoveParkedOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pRemoveParkedOrderAction->InvestorID);
		LOG("\tParkedOrderActionID [%s]\n",pRemoveParkedOrderAction->ParkedOrderActionID);
		LOG("\tInvestUnitID [%s]\n",pRemoveParkedOrderAction->InvestUnitID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspRemoveParkedOrderAction>\n");
};

void CTraderSpi::OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspExecOrderInsert>\n");
	if (pInputExecOrder)
	{
		LOG("\tBrokerID [%s]\n",pInputExecOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputExecOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputExecOrder->InstrumentID);
		LOG("\tExecOrderRef [%s]\n",pInputExecOrder->ExecOrderRef);
		LOG("\tUserID [%s]\n",pInputExecOrder->UserID);
		LOG("\tBusinessUnit [%s]\n",pInputExecOrder->BusinessUnit);
		LOG("\tExchangeID [%s]\n",pInputExecOrder->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputExecOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pInputExecOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pInputExecOrder->CurrencyID);
		LOG("\tClientID [%s]\n",pInputExecOrder->ClientID);
		LOG("\tIPAddress [%s]\n",pInputExecOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputExecOrder->MacAddress);
		LOG("\tVolume [%d]\n",pInputExecOrder->Volume);
		LOG("\tRequestID [%d]\n",pInputExecOrder->RequestID);
		LOG("\tOffsetFlag [%c]\n",pInputExecOrder->OffsetFlag);
		LOG("\tHedgeFlag [%c]\n",pInputExecOrder->HedgeFlag);
		LOG("\tActionType [%c]\n",pInputExecOrder->ActionType);
		LOG("\tPosiDirection [%c]\n",pInputExecOrder->PosiDirection);
		LOG("\tReservePositionFlag [%c]\n",pInputExecOrder->ReservePositionFlag);
		LOG("\tCloseFlag [%c]\n",pInputExecOrder->CloseFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspExecOrderInsert>\n");
};

void CTraderSpi::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspExecOrderAction>\n");
	if (pInputExecOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pInputExecOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputExecOrderAction->InvestorID);
		LOG("\tExecOrderRef [%s]\n",pInputExecOrderAction->ExecOrderRef);
		LOG("\tExchangeID [%s]\n",pInputExecOrderAction->ExchangeID);
		LOG("\tExecOrderSysID [%s]\n",pInputExecOrderAction->ExecOrderSysID);
		LOG("\tUserID [%s]\n",pInputExecOrderAction->UserID);
		LOG("\tInstrumentID [%s]\n",pInputExecOrderAction->InstrumentID);
		LOG("\tInvestUnitID [%s]\n",pInputExecOrderAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pInputExecOrderAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputExecOrderAction->MacAddress);
		LOG("\tExecOrderActionRef [%d]\n",pInputExecOrderAction->ExecOrderActionRef);
		LOG("\tRequestID [%d]\n",pInputExecOrderAction->RequestID);
		LOG("\tFrontID [%d]\n",pInputExecOrderAction->FrontID);
		LOG("\tSessionID [%d]\n",pInputExecOrderAction->SessionID);
		LOG("\tActionFlag [%c]\n",pInputExecOrderAction->ActionFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspExecOrderAction>\n");
};

void CTraderSpi::OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspForQuoteInsert>\n");
	if (pInputForQuote)
	{
		LOG("\tBrokerID [%s]\n",pInputForQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputForQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputForQuote->InstrumentID);
		LOG("\tForQuoteRef [%s]\n",pInputForQuote->ForQuoteRef);
		LOG("\tUserID [%s]\n",pInputForQuote->UserID);
		LOG("\tExchangeID [%s]\n",pInputForQuote->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputForQuote->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pInputForQuote->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputForQuote->MacAddress);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspForQuoteInsert>\n");
};

void CTraderSpi::OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQuoteInsert>\n");
	if (pInputQuote)
	{
		LOG("\tBrokerID [%s]\n",pInputQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputQuote->InstrumentID);
		LOG("\tQuoteRef [%s]\n",pInputQuote->QuoteRef);
		LOG("\tUserID [%s]\n",pInputQuote->UserID);
		LOG("\tBusinessUnit [%s]\n",pInputQuote->BusinessUnit);
		LOG("\tAskOrderRef [%s]\n",pInputQuote->AskOrderRef);
		LOG("\tBidOrderRef [%s]\n",pInputQuote->BidOrderRef);
		LOG("\tForQuoteSysID [%s]\n",pInputQuote->ForQuoteSysID);
		LOG("\tExchangeID [%s]\n",pInputQuote->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputQuote->InvestUnitID);
		LOG("\tClientID [%s]\n",pInputQuote->ClientID);
		LOG("\tIPAddress [%s]\n",pInputQuote->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputQuote->MacAddress);
		LOG("\tAskVolume [%d]\n",pInputQuote->AskVolume);
		LOG("\tBidVolume [%d]\n",pInputQuote->BidVolume);
		LOG("\tRequestID [%d]\n",pInputQuote->RequestID);
		LOG("\tAskOffsetFlag [%c]\n",pInputQuote->AskOffsetFlag);
		LOG("\tBidOffsetFlag [%c]\n",pInputQuote->BidOffsetFlag);
		LOG("\tAskHedgeFlag [%c]\n",pInputQuote->AskHedgeFlag);
		LOG("\tBidHedgeFlag [%c]\n",pInputQuote->BidHedgeFlag);
		LOG("\tAskPrice [%.8lf]\n",pInputQuote->AskPrice);
		LOG("\tBidPrice [%.8lf]\n",pInputQuote->BidPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQuoteInsert>\n");
};

void CTraderSpi::OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQuoteAction>\n");
	if (pInputQuoteAction)
	{
		LOG("\tBrokerID [%s]\n",pInputQuoteAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputQuoteAction->InvestorID);
		LOG("\tQuoteRef [%s]\n",pInputQuoteAction->QuoteRef);
		LOG("\tExchangeID [%s]\n",pInputQuoteAction->ExchangeID);
		LOG("\tQuoteSysID [%s]\n",pInputQuoteAction->QuoteSysID);
		LOG("\tUserID [%s]\n",pInputQuoteAction->UserID);
		LOG("\tInstrumentID [%s]\n",pInputQuoteAction->InstrumentID);
		LOG("\tInvestUnitID [%s]\n",pInputQuoteAction->InvestUnitID);
		LOG("\tClientID [%s]\n",pInputQuoteAction->ClientID);
		LOG("\tIPAddress [%s]\n",pInputQuoteAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputQuoteAction->MacAddress);
		LOG("\tQuoteActionRef [%d]\n",pInputQuoteAction->QuoteActionRef);
		LOG("\tRequestID [%d]\n",pInputQuoteAction->RequestID);
		LOG("\tFrontID [%d]\n",pInputQuoteAction->FrontID);
		LOG("\tSessionID [%d]\n",pInputQuoteAction->SessionID);
		LOG("\tActionFlag [%c]\n",pInputQuoteAction->ActionFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQuoteAction>\n");
};

void CTraderSpi::OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspBatchOrderAction>\n");
	if (pInputBatchOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pInputBatchOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputBatchOrderAction->InvestorID);
		LOG("\tExchangeID [%s]\n",pInputBatchOrderAction->ExchangeID);
		LOG("\tUserID [%s]\n",pInputBatchOrderAction->UserID);
		LOG("\tInvestUnitID [%s]\n",pInputBatchOrderAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pInputBatchOrderAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputBatchOrderAction->MacAddress);
		LOG("\tOrderActionRef [%d]\n",pInputBatchOrderAction->OrderActionRef);
		LOG("\tRequestID [%d]\n",pInputBatchOrderAction->RequestID);
		LOG("\tFrontID [%d]\n",pInputBatchOrderAction->FrontID);
		LOG("\tSessionID [%d]\n",pInputBatchOrderAction->SessionID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspBatchOrderAction>\n");
};

void CTraderSpi::OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspOptionSelfCloseInsert>\n");
	if (pInputOptionSelfClose)
	{
		LOG("\tBrokerID [%s]\n",pInputOptionSelfClose->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputOptionSelfClose->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputOptionSelfClose->InstrumentID);
		LOG("\tOptionSelfCloseRef [%s]\n",pInputOptionSelfClose->OptionSelfCloseRef);
		LOG("\tUserID [%s]\n",pInputOptionSelfClose->UserID);
		LOG("\tBusinessUnit [%s]\n",pInputOptionSelfClose->BusinessUnit);
		LOG("\tExchangeID [%s]\n",pInputOptionSelfClose->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputOptionSelfClose->InvestUnitID);
		LOG("\tAccountID [%s]\n",pInputOptionSelfClose->AccountID);
		LOG("\tCurrencyID [%s]\n",pInputOptionSelfClose->CurrencyID);
		LOG("\tClientID [%s]\n",pInputOptionSelfClose->ClientID);
		LOG("\tIPAddress [%s]\n",pInputOptionSelfClose->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputOptionSelfClose->MacAddress);
		LOG("\tVolume [%d]\n",pInputOptionSelfClose->Volume);
		LOG("\tRequestID [%d]\n",pInputOptionSelfClose->RequestID);
		LOG("\tHedgeFlag [%c]\n",pInputOptionSelfClose->HedgeFlag);
		LOG("\tOptSelfCloseFlag [%c]\n",pInputOptionSelfClose->OptSelfCloseFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspOptionSelfCloseInsert>\n");
};

void CTraderSpi::OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspOptionSelfCloseAction>\n");
	if (pInputOptionSelfCloseAction)
	{
		LOG("\tBrokerID [%s]\n",pInputOptionSelfCloseAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputOptionSelfCloseAction->InvestorID);
		LOG("\tOptionSelfCloseRef [%s]\n",pInputOptionSelfCloseAction->OptionSelfCloseRef);
		LOG("\tExchangeID [%s]\n",pInputOptionSelfCloseAction->ExchangeID);
		LOG("\tOptionSelfCloseSysID [%s]\n",pInputOptionSelfCloseAction->OptionSelfCloseSysID);
		LOG("\tUserID [%s]\n",pInputOptionSelfCloseAction->UserID);
		LOG("\tInstrumentID [%s]\n",pInputOptionSelfCloseAction->InstrumentID);
		LOG("\tInvestUnitID [%s]\n",pInputOptionSelfCloseAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pInputOptionSelfCloseAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputOptionSelfCloseAction->MacAddress);
		LOG("\tOptionSelfCloseActionRef [%d]\n",pInputOptionSelfCloseAction->OptionSelfCloseActionRef);
		LOG("\tRequestID [%d]\n",pInputOptionSelfCloseAction->RequestID);
		LOG("\tFrontID [%d]\n",pInputOptionSelfCloseAction->FrontID);
		LOG("\tSessionID [%d]\n",pInputOptionSelfCloseAction->SessionID);
		LOG("\tActionFlag [%c]\n",pInputOptionSelfCloseAction->ActionFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspOptionSelfCloseAction>\n");
};

void CTraderSpi::OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspCombActionInsert>\n");
	if (pInputCombAction)
	{
		LOG("\tBrokerID [%s]\n",pInputCombAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputCombAction->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputCombAction->InstrumentID);
		LOG("\tCombActionRef [%s]\n",pInputCombAction->CombActionRef);
		LOG("\tUserID [%s]\n",pInputCombAction->UserID);
		LOG("\tExchangeID [%s]\n",pInputCombAction->ExchangeID);
		LOG("\tIPAddress [%s]\n",pInputCombAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputCombAction->MacAddress);
		LOG("\tInvestUnitID [%s]\n",pInputCombAction->InvestUnitID);
		LOG("\tVolume [%d]\n",pInputCombAction->Volume);
		LOG("\tDirection [%c]\n",pInputCombAction->Direction);
		LOG("\tCombDirection [%c]\n",pInputCombAction->CombDirection);
		LOG("\tHedgeFlag [%c]\n",pInputCombAction->HedgeFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspCombActionInsert>\n");
};

void CTraderSpi::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryOrder>\n");
	if (pOrder)
	{
		LOG("\tBrokerID [%s]\n",pOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pOrder->InstrumentID);
		LOG("\tOrderRef [%s]\n",pOrder->OrderRef);
		LOG("\tUserID [%s]\n",pOrder->UserID);
		LOG("\tCombOffsetFlag [%s]\n",pOrder->CombOffsetFlag);
		LOG("\tCombHedgeFlag [%s]\n",pOrder->CombHedgeFlag);
		LOG("\tGTDDate [%s]\n",pOrder->GTDDate);
		LOG("\tBusinessUnit [%s]\n",pOrder->BusinessUnit);
		LOG("\tOrderLocalID [%s]\n",pOrder->OrderLocalID);
		LOG("\tExchangeID [%s]\n",pOrder->ExchangeID);
		LOG("\tParticipantID [%s]\n",pOrder->ParticipantID);
		LOG("\tClientID [%s]\n",pOrder->ClientID);
		LOG("\tExchangeInstID [%s]\n",pOrder->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pOrder->TraderID);
		LOG("\tTradingDay [%s]\n",pOrder->TradingDay);
		LOG("\tOrderSysID [%s]\n",pOrder->OrderSysID);
		LOG("\tInsertDate [%s]\n",pOrder->InsertDate);
		LOG("\tInsertTime [%s]\n",pOrder->InsertTime);
		LOG("\tActiveTime [%s]\n",pOrder->ActiveTime);
		LOG("\tSuspendTime [%s]\n",pOrder->SuspendTime);
		LOG("\tUpdateTime [%s]\n",pOrder->UpdateTime);
		LOG("\tCancelTime [%s]\n",pOrder->CancelTime);
		LOG("\tActiveTraderID [%s]\n",pOrder->ActiveTraderID);
		LOG("\tClearingPartID [%s]\n",pOrder->ClearingPartID);
		LOG("\tUserProductInfo [%s]\n",pOrder->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pOrder->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pOrder->ActiveUserID);
		LOG("\tRelativeOrderSysID [%s]\n",pOrder->RelativeOrderSysID);
		LOG("\tBranchID [%s]\n",pOrder->BranchID);
		LOG("\tInvestUnitID [%s]\n",pOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pOrder->CurrencyID);
		LOG("\tIPAddress [%s]\n",pOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pOrder->MacAddress);
		LOG("\tVolumeTotalOriginal [%d]\n",pOrder->VolumeTotalOriginal);
		LOG("\tMinVolume [%d]\n",pOrder->MinVolume);
		LOG("\tIsAutoSuspend [%d]\n",pOrder->IsAutoSuspend);
		LOG("\tRequestID [%d]\n",pOrder->RequestID);
		LOG("\tInstallID [%d]\n",pOrder->InstallID);
		LOG("\tNotifySequence [%d]\n",pOrder->NotifySequence);
		LOG("\tSettlementID [%d]\n",pOrder->SettlementID);
		LOG("\tVolumeTraded [%d]\n",pOrder->VolumeTraded);
		LOG("\tVolumeTotal [%d]\n",pOrder->VolumeTotal);
		LOG("\tSequenceNo [%d]\n",pOrder->SequenceNo);
		LOG("\tFrontID [%d]\n",pOrder->FrontID);
		LOG("\tSessionID [%d]\n",pOrder->SessionID);
		LOG("\tUserForceClose [%d]\n",pOrder->UserForceClose);
		LOG("\tBrokerOrderSeq [%d]\n",pOrder->BrokerOrderSeq);
		LOG("\tZCETotalTradedVolume [%d]\n",pOrder->ZCETotalTradedVolume);
		LOG("\tIsSwapOrder [%d]\n",pOrder->IsSwapOrder);
		LOG("\tOrderPriceType [%c]\n",pOrder->OrderPriceType);
		LOG("\tDirection [%c]\n",pOrder->Direction);
		LOG("\tTimeCondition [%c]\n",pOrder->TimeCondition);
		LOG("\tVolumeCondition [%c]\n",pOrder->VolumeCondition);
		LOG("\tContingentCondition [%c]\n",pOrder->ContingentCondition);
		LOG("\tForceCloseReason [%c]\n",pOrder->ForceCloseReason);
		LOG("\tOrderSubmitStatus [%c]\n",pOrder->OrderSubmitStatus);
		LOG("\tOrderSource [%c]\n",pOrder->OrderSource);
		LOG("\tOrderStatus [%c]\n",pOrder->OrderStatus);
		LOG("\tOrderType [%c]\n",pOrder->OrderType);
		LOG("\tLimitPrice [%.8lf]\n",pOrder->LimitPrice);
		LOG("\tStopPrice [%.8lf]\n",pOrder->StopPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryOrder>\n");
};

void CTraderSpi::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryTrade>\n");
	if (pTrade)
	{
		LOG("\tBrokerID [%s]\n",pTrade->BrokerID);
		LOG("\tInvestorID [%s]\n",pTrade->InvestorID);
		LOG("\tInstrumentID [%s]\n",pTrade->InstrumentID);
		LOG("\tOrderRef [%s]\n",pTrade->OrderRef);
		LOG("\tUserID [%s]\n",pTrade->UserID);
		LOG("\tExchangeID [%s]\n",pTrade->ExchangeID);
		LOG("\tTradeID [%s]\n",pTrade->TradeID);
		LOG("\tOrderSysID [%s]\n",pTrade->OrderSysID);
		LOG("\tParticipantID [%s]\n",pTrade->ParticipantID);
		LOG("\tClientID [%s]\n",pTrade->ClientID);
		LOG("\tExchangeInstID [%s]\n",pTrade->ExchangeInstID);
		LOG("\tTradeDate [%s]\n",pTrade->TradeDate);
		LOG("\tTradeTime [%s]\n",pTrade->TradeTime);
		LOG("\tTraderID [%s]\n",pTrade->TraderID);
		LOG("\tOrderLocalID [%s]\n",pTrade->OrderLocalID);
		LOG("\tClearingPartID [%s]\n",pTrade->ClearingPartID);
		LOG("\tBusinessUnit [%s]\n",pTrade->BusinessUnit);
		LOG("\tTradingDay [%s]\n",pTrade->TradingDay);
		LOG("\tInvestUnitID [%s]\n",pTrade->InvestUnitID);
		LOG("\tVolume [%d]\n",pTrade->Volume);
		LOG("\tSequenceNo [%d]\n",pTrade->SequenceNo);
		LOG("\tSettlementID [%d]\n",pTrade->SettlementID);
		LOG("\tBrokerOrderSeq [%d]\n",pTrade->BrokerOrderSeq);
		LOG("\tDirection [%c]\n",pTrade->Direction);
		LOG("\tTradingRole [%c]\n",pTrade->TradingRole);
		LOG("\tOffsetFlag [%c]\n",pTrade->OffsetFlag);
		LOG("\tHedgeFlag [%c]\n",pTrade->HedgeFlag);
		LOG("\tTradeType [%c]\n",pTrade->TradeType);
		LOG("\tPriceSource [%c]\n",pTrade->PriceSource);
		LOG("\tTradeSource [%c]\n",pTrade->TradeSource);
		LOG("\tPrice [%.8lf]\n",pTrade->Price);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryTrade>\n");
};

void CTraderSpi::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInvestorPosition>\n");
	if (pInvestorPosition)
	{
		LOG("\tInstrumentID [%s]\n",pInvestorPosition->InstrumentID);
		LOG("\tBrokerID [%s]\n",pInvestorPosition->BrokerID);
		LOG("\tInvestorID [%s]\n",pInvestorPosition->InvestorID);
		LOG("\tTradingDay [%s]\n",pInvestorPosition->TradingDay);
		LOG("\tExchangeID [%s]\n",pInvestorPosition->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInvestorPosition->InvestUnitID);
		LOG("\tYdPosition [%d]\n",pInvestorPosition->YdPosition);
		LOG("\tPosition [%d]\n",pInvestorPosition->Position);
		LOG("\tLongFrozen [%d]\n",pInvestorPosition->LongFrozen);
		LOG("\tShortFrozen [%d]\n",pInvestorPosition->ShortFrozen);
		LOG("\tOpenVolume [%d]\n",pInvestorPosition->OpenVolume);
		LOG("\tCloseVolume [%d]\n",pInvestorPosition->CloseVolume);
		LOG("\tSettlementID [%d]\n",pInvestorPosition->SettlementID);
		LOG("\tCombPosition [%d]\n",pInvestorPosition->CombPosition);
		LOG("\tCombLongFrozen [%d]\n",pInvestorPosition->CombLongFrozen);
		LOG("\tCombShortFrozen [%d]\n",pInvestorPosition->CombShortFrozen);
		LOG("\tTodayPosition [%d]\n",pInvestorPosition->TodayPosition);
		LOG("\tStrikeFrozen [%d]\n",pInvestorPosition->StrikeFrozen);
		LOG("\tAbandonFrozen [%d]\n",pInvestorPosition->AbandonFrozen);
		LOG("\tYdStrikeFrozen [%d]\n",pInvestorPosition->YdStrikeFrozen);
		LOG("\tPosiDirection [%c]\n",pInvestorPosition->PosiDirection);
		LOG("\tHedgeFlag [%c]\n",pInvestorPosition->HedgeFlag);
		LOG("\tPositionDate [%c]\n",pInvestorPosition->PositionDate);
		LOG("\tLongFrozenAmount [%.8lf]\n",pInvestorPosition->LongFrozenAmount);
		LOG("\tShortFrozenAmount [%.8lf]\n",pInvestorPosition->ShortFrozenAmount);
		LOG("\tOpenAmount [%.8lf]\n",pInvestorPosition->OpenAmount);
		LOG("\tCloseAmount [%.8lf]\n",pInvestorPosition->CloseAmount);
		LOG("\tPositionCost [%.8lf]\n",pInvestorPosition->PositionCost);
		LOG("\tPreMargin [%.8lf]\n",pInvestorPosition->PreMargin);
		LOG("\tUseMargin [%.8lf]\n",pInvestorPosition->UseMargin);
		LOG("\tFrozenMargin [%.8lf]\n",pInvestorPosition->FrozenMargin);
		LOG("\tFrozenCash [%.8lf]\n",pInvestorPosition->FrozenCash);
		LOG("\tFrozenCommission [%.8lf]\n",pInvestorPosition->FrozenCommission);
		LOG("\tCashIn [%.8lf]\n",pInvestorPosition->CashIn);
		LOG("\tCommission [%.8lf]\n",pInvestorPosition->Commission);
		LOG("\tCloseProfit [%.8lf]\n",pInvestorPosition->CloseProfit);
		LOG("\tPositionProfit [%.8lf]\n",pInvestorPosition->PositionProfit);
		LOG("\tPreSettlementPrice [%.8lf]\n",pInvestorPosition->PreSettlementPrice);
		LOG("\tSettlementPrice [%.8lf]\n",pInvestorPosition->SettlementPrice);
		LOG("\tOpenCost [%.8lf]\n",pInvestorPosition->OpenCost);
		LOG("\tExchangeMargin [%.8lf]\n",pInvestorPosition->ExchangeMargin);
		LOG("\tCloseProfitByDate [%.8lf]\n",pInvestorPosition->CloseProfitByDate);
		LOG("\tCloseProfitByTrade [%.8lf]\n",pInvestorPosition->CloseProfitByTrade);
		LOG("\tMarginRateByMoney [%.8lf]\n",pInvestorPosition->MarginRateByMoney);
		LOG("\tMarginRateByVolume [%.8lf]\n",pInvestorPosition->MarginRateByVolume);
		LOG("\tStrikeFrozenAmount [%.8lf]\n",pInvestorPosition->StrikeFrozenAmount);
		LOG("\tPositionCostOffset [%.8lf]\n",pInvestorPosition->PositionCostOffset);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInvestorPosition>\n");
};

void CTraderSpi::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryTradingAccount>\n");
	if (pTradingAccount)
	{
		LOG("\tBrokerID [%s]\n",pTradingAccount->BrokerID);
		LOG("\tAccountID [%s]\n",pTradingAccount->AccountID);
		LOG("\tTradingDay [%s]\n",pTradingAccount->TradingDay);
		LOG("\tCurrencyID [%s]\n",pTradingAccount->CurrencyID);
		LOG("\tSettlementID [%d]\n",pTradingAccount->SettlementID);
		LOG("\tBizType [%c]\n",pTradingAccount->BizType);
		LOG("\tPreMortgage [%.8lf]\n",pTradingAccount->PreMortgage);
		LOG("\tPreCredit [%.8lf]\n",pTradingAccount->PreCredit);
		LOG("\tPreDeposit [%.8lf]\n",pTradingAccount->PreDeposit);
		LOG("\tPreBalance [%.8lf]\n",pTradingAccount->PreBalance);
		LOG("\tPreMargin [%.8lf]\n",pTradingAccount->PreMargin);
		LOG("\tInterestBase [%.8lf]\n",pTradingAccount->InterestBase);
		LOG("\tInterest [%.8lf]\n",pTradingAccount->Interest);
		LOG("\tDeposit [%.8lf]\n",pTradingAccount->Deposit);
		LOG("\tWithdraw [%.8lf]\n",pTradingAccount->Withdraw);
		LOG("\tFrozenMargin [%.8lf]\n",pTradingAccount->FrozenMargin);
		LOG("\tFrozenCash [%.8lf]\n",pTradingAccount->FrozenCash);
		LOG("\tFrozenCommission [%.8lf]\n",pTradingAccount->FrozenCommission);
		LOG("\tCurrMargin [%.8lf]\n",pTradingAccount->CurrMargin);
		LOG("\tCashIn [%.8lf]\n",pTradingAccount->CashIn);
		LOG("\tCommission [%.8lf]\n",pTradingAccount->Commission);
		LOG("\tCloseProfit [%.8lf]\n",pTradingAccount->CloseProfit);
		LOG("\tPositionProfit [%.8lf]\n",pTradingAccount->PositionProfit);
		LOG("\tBalance [%.8lf]\n",pTradingAccount->Balance);
		LOG("\tAvailable [%.8lf]\n",pTradingAccount->Available);
		LOG("\tWithdrawQuota [%.8lf]\n",pTradingAccount->WithdrawQuota);
		LOG("\tReserve [%.8lf]\n",pTradingAccount->Reserve);
		LOG("\tCredit [%.8lf]\n",pTradingAccount->Credit);
		LOG("\tMortgage [%.8lf]\n",pTradingAccount->Mortgage);
		LOG("\tExchangeMargin [%.8lf]\n",pTradingAccount->ExchangeMargin);
		LOG("\tDeliveryMargin [%.8lf]\n",pTradingAccount->DeliveryMargin);
		LOG("\tExchangeDeliveryMargin [%.8lf]\n",pTradingAccount->ExchangeDeliveryMargin);
		LOG("\tReserveBalance [%.8lf]\n",pTradingAccount->ReserveBalance);
		LOG("\tPreFundMortgageIn [%.8lf]\n",pTradingAccount->PreFundMortgageIn);
		LOG("\tPreFundMortgageOut [%.8lf]\n",pTradingAccount->PreFundMortgageOut);
		LOG("\tFundMortgageIn [%.8lf]\n",pTradingAccount->FundMortgageIn);
		LOG("\tFundMortgageOut [%.8lf]\n",pTradingAccount->FundMortgageOut);
		LOG("\tFundMortgageAvailable [%.8lf]\n",pTradingAccount->FundMortgageAvailable);
		LOG("\tMortgageableFund [%.8lf]\n",pTradingAccount->MortgageableFund);
		LOG("\tSpecProductMargin [%.8lf]\n",pTradingAccount->SpecProductMargin);
		LOG("\tSpecProductFrozenMargin [%.8lf]\n",pTradingAccount->SpecProductFrozenMargin);
		LOG("\tSpecProductCommission [%.8lf]\n",pTradingAccount->SpecProductCommission);
		LOG("\tSpecProductFrozenCommission [%.8lf]\n",pTradingAccount->SpecProductFrozenCommission);
		LOG("\tSpecProductPositionProfit [%.8lf]\n",pTradingAccount->SpecProductPositionProfit);
		LOG("\tSpecProductCloseProfit [%.8lf]\n",pTradingAccount->SpecProductCloseProfit);
		LOG("\tSpecProductPositionProfitByAlg [%.8lf]\n",pTradingAccount->SpecProductPositionProfitByAlg);
		LOG("\tSpecProductExchangeMargin [%.8lf]\n",pTradingAccount->SpecProductExchangeMargin);
		LOG("\tFrozenSwap [%.8lf]\n",pTradingAccount->FrozenSwap);
		LOG("\tRemainSwap [%.8lf]\n",pTradingAccount->RemainSwap);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryTradingAccount>\n");
};

void CTraderSpi::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInvestor>\n");
	if (pInvestor)
	{
		LOG("\tInvestorID [%s]\n",pInvestor->InvestorID);
		LOG("\tBrokerID [%s]\n",pInvestor->BrokerID);
		LOG("\tInvestorGroupID [%s]\n",pInvestor->InvestorGroupID);
		LOG("\tInvestorName [%s]\n",pInvestor->InvestorName);
		LOG("\tIdentifiedCardNo [%s]\n",pInvestor->IdentifiedCardNo);
		LOG("\tTelephone [%s]\n",pInvestor->Telephone);
		LOG("\tAddress [%s]\n",pInvestor->Address);
		LOG("\tOpenDate [%s]\n",pInvestor->OpenDate);
		LOG("\tMobile [%s]\n",pInvestor->Mobile);
		LOG("\tCommModelID [%s]\n",pInvestor->CommModelID);
		LOG("\tMarginModelID [%s]\n",pInvestor->MarginModelID);
		LOG("\tIsActive [%d]\n",pInvestor->IsActive);
		LOG("\tIdentifiedCardType [%c]\n",pInvestor->IdentifiedCardType);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInvestor>\n");
};

void CTraderSpi::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryTradingCode>\n");
	if (pTradingCode)
	{
		LOG("\tInvestorID [%s]\n",pTradingCode->InvestorID);
		LOG("\tBrokerID [%s]\n",pTradingCode->BrokerID);
		LOG("\tExchangeID [%s]\n",pTradingCode->ExchangeID);
		LOG("\tClientID [%s]\n",pTradingCode->ClientID);
		LOG("\tBranchID [%s]\n",pTradingCode->BranchID);
		LOG("\tInvestUnitID [%s]\n",pTradingCode->InvestUnitID);
		LOG("\tIsActive [%d]\n",pTradingCode->IsActive);
		LOG("\tClientIDType [%c]\n",pTradingCode->ClientIDType);
		LOG("\tBizType [%c]\n",pTradingCode->BizType);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryTradingCode>\n");
};

void CTraderSpi::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInstrumentMarginRate>\n");
	if (pInstrumentMarginRate)
	{
		LOG("\tInstrumentID [%s]\n",pInstrumentMarginRate->InstrumentID);
		LOG("\tBrokerID [%s]\n",pInstrumentMarginRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pInstrumentMarginRate->InvestorID);
		LOG("\tExchangeID [%s]\n",pInstrumentMarginRate->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInstrumentMarginRate->InvestUnitID);
		LOG("\tIsRelative [%d]\n",pInstrumentMarginRate->IsRelative);
		LOG("\tInvestorRange [%c]\n",pInstrumentMarginRate->InvestorRange);
		LOG("\tHedgeFlag [%c]\n",pInstrumentMarginRate->HedgeFlag);
		LOG("\tLongMarginRatioByMoney [%.8lf]\n",pInstrumentMarginRate->LongMarginRatioByMoney);
		LOG("\tLongMarginRatioByVolume [%.8lf]\n",pInstrumentMarginRate->LongMarginRatioByVolume);
		LOG("\tShortMarginRatioByMoney [%.8lf]\n",pInstrumentMarginRate->ShortMarginRatioByMoney);
		LOG("\tShortMarginRatioByVolume [%.8lf]\n",pInstrumentMarginRate->ShortMarginRatioByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInstrumentMarginRate>\n");
};

void CTraderSpi::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInstrumentCommissionRate>\n");
	if (pInstrumentCommissionRate)
	{
		LOG("\tInstrumentID [%s]\n",pInstrumentCommissionRate->InstrumentID);
		LOG("\tBrokerID [%s]\n",pInstrumentCommissionRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pInstrumentCommissionRate->InvestorID);
		LOG("\tExchangeID [%s]\n",pInstrumentCommissionRate->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInstrumentCommissionRate->InvestUnitID);
		LOG("\tInvestorRange [%c]\n",pInstrumentCommissionRate->InvestorRange);
		LOG("\tBizType [%c]\n",pInstrumentCommissionRate->BizType);
		LOG("\tOpenRatioByMoney [%.8lf]\n",pInstrumentCommissionRate->OpenRatioByMoney);
		LOG("\tOpenRatioByVolume [%.8lf]\n",pInstrumentCommissionRate->OpenRatioByVolume);
		LOG("\tCloseRatioByMoney [%.8lf]\n",pInstrumentCommissionRate->CloseRatioByMoney);
		LOG("\tCloseRatioByVolume [%.8lf]\n",pInstrumentCommissionRate->CloseRatioByVolume);
		LOG("\tCloseTodayRatioByMoney [%.8lf]\n",pInstrumentCommissionRate->CloseTodayRatioByMoney);
		LOG("\tCloseTodayRatioByVolume [%.8lf]\n",pInstrumentCommissionRate->CloseTodayRatioByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInstrumentCommissionRate>\n");
};

void CTraderSpi::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryExchange>\n");
	if (pExchange)
	{
		LOG("\tExchangeID [%s]\n",pExchange->ExchangeID);
		LOG("\tExchangeName [%s]\n",pExchange->ExchangeName);
		LOG("\tExchangeProperty [%c]\n",pExchange->ExchangeProperty);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryExchange>\n");
};

void CTraderSpi::OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryProduct>\n");
	if (pProduct)
	{
		LOG("\tProductID [%s]\n",pProduct->ProductID);
		LOG("\tProductName [%s]\n",pProduct->ProductName);
		LOG("\tExchangeID [%s]\n",pProduct->ExchangeID);
		LOG("\tTradeCurrencyID [%s]\n",pProduct->TradeCurrencyID);
		LOG("\tExchangeProductID [%s]\n",pProduct->ExchangeProductID);
		LOG("\tVolumeMultiple [%d]\n",pProduct->VolumeMultiple);
		LOG("\tMaxMarketOrderVolume [%d]\n",pProduct->MaxMarketOrderVolume);
		LOG("\tMinMarketOrderVolume [%d]\n",pProduct->MinMarketOrderVolume);
		LOG("\tMaxLimitOrderVolume [%d]\n",pProduct->MaxLimitOrderVolume);
		LOG("\tMinLimitOrderVolume [%d]\n",pProduct->MinLimitOrderVolume);
		LOG("\tProductClass [%c]\n",pProduct->ProductClass);
		LOG("\tPositionType [%c]\n",pProduct->PositionType);
		LOG("\tPositionDateType [%c]\n",pProduct->PositionDateType);
		LOG("\tCloseDealType [%c]\n",pProduct->CloseDealType);
		LOG("\tMortgageFundUseRange [%c]\n",pProduct->MortgageFundUseRange);
		LOG("\tPriceTick [%.8lf]\n",pProduct->PriceTick);
		LOG("\tUnderlyingMultiple [%.8lf]\n",pProduct->UnderlyingMultiple);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryProduct>\n");
};

void CTraderSpi::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInstrument>\n");
	if (pInstrument)
	{
		LOG("\tInstrumentID [%s]\n",pInstrument->InstrumentID);
		LOG("\tExchangeID [%s]\n",pInstrument->ExchangeID);
		LOG("\tInstrumentName [%s]\n",pInstrument->InstrumentName);
		LOG("\tExchangeInstID [%s]\n",pInstrument->ExchangeInstID);
		LOG("\tProductID [%s]\n",pInstrument->ProductID);
		LOG("\tCreateDate [%s]\n",pInstrument->CreateDate);
		LOG("\tOpenDate [%s]\n",pInstrument->OpenDate);
		LOG("\tExpireDate [%s]\n",pInstrument->ExpireDate);
		LOG("\tStartDelivDate [%s]\n",pInstrument->StartDelivDate);
		LOG("\tEndDelivDate [%s]\n",pInstrument->EndDelivDate);
		LOG("\tUnderlyingInstrID [%s]\n",pInstrument->UnderlyingInstrID);
		LOG("\tDeliveryYear [%d]\n",pInstrument->DeliveryYear);
		LOG("\tDeliveryMonth [%d]\n",pInstrument->DeliveryMonth);
		LOG("\tMaxMarketOrderVolume [%d]\n",pInstrument->MaxMarketOrderVolume);
		LOG("\tMinMarketOrderVolume [%d]\n",pInstrument->MinMarketOrderVolume);
		LOG("\tMaxLimitOrderVolume [%d]\n",pInstrument->MaxLimitOrderVolume);
		LOG("\tMinLimitOrderVolume [%d]\n",pInstrument->MinLimitOrderVolume);
		LOG("\tVolumeMultiple [%d]\n",pInstrument->VolumeMultiple);
		LOG("\tIsTrading [%d]\n",pInstrument->IsTrading);
		LOG("\tProductClass [%c]\n",pInstrument->ProductClass);
		LOG("\tInstLifePhase [%c]\n",pInstrument->InstLifePhase);
		LOG("\tPositionType [%c]\n",pInstrument->PositionType);
		LOG("\tPositionDateType [%c]\n",pInstrument->PositionDateType);
		LOG("\tMaxMarginSideAlgorithm [%c]\n",pInstrument->MaxMarginSideAlgorithm);
		LOG("\tOptionsType [%c]\n",pInstrument->OptionsType);
		LOG("\tCombinationType [%c]\n",pInstrument->CombinationType);
		LOG("\tPriceTick [%.8lf]\n",pInstrument->PriceTick);
		LOG("\tLongMarginRatio [%.8lf]\n",pInstrument->LongMarginRatio);
		LOG("\tShortMarginRatio [%.8lf]\n",pInstrument->ShortMarginRatio);
		LOG("\tStrikePrice [%.8lf]\n",pInstrument->StrikePrice);
		LOG("\tUnderlyingMultiple [%.8lf]\n",pInstrument->UnderlyingMultiple);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInstrument>\n");
};

void CTraderSpi::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryDepthMarketData>\n");
	if (pDepthMarketData)
	{
		LOG("\tTradingDay [%s]\n",pDepthMarketData->TradingDay);
		LOG("\tInstrumentID [%s]\n",pDepthMarketData->InstrumentID);
		LOG("\tExchangeID [%s]\n",pDepthMarketData->ExchangeID);
		LOG("\tExchangeInstID [%s]\n",pDepthMarketData->ExchangeInstID);
		LOG("\tUpdateTime [%s]\n",pDepthMarketData->UpdateTime);
		LOG("\tActionDay [%s]\n",pDepthMarketData->ActionDay);
		LOG("\tVolume [%d]\n",pDepthMarketData->Volume);
		LOG("\tUpdateMillisec [%d]\n",pDepthMarketData->UpdateMillisec);
		LOG("\tBidVolume1 [%d]\n",pDepthMarketData->BidVolume1);
		LOG("\tAskVolume1 [%d]\n",pDepthMarketData->AskVolume1);
		LOG("\tBidVolume2 [%d]\n",pDepthMarketData->BidVolume2);
		LOG("\tAskVolume2 [%d]\n",pDepthMarketData->AskVolume2);
		LOG("\tBidVolume3 [%d]\n",pDepthMarketData->BidVolume3);
		LOG("\tAskVolume3 [%d]\n",pDepthMarketData->AskVolume3);
		LOG("\tBidVolume4 [%d]\n",pDepthMarketData->BidVolume4);
		LOG("\tAskVolume4 [%d]\n",pDepthMarketData->AskVolume4);
		LOG("\tBidVolume5 [%d]\n",pDepthMarketData->BidVolume5);
		LOG("\tAskVolume5 [%d]\n",pDepthMarketData->AskVolume5);
		LOG("\tLastPrice [%.8lf]\n",pDepthMarketData->LastPrice);
		LOG("\tPreSettlementPrice [%.8lf]\n",pDepthMarketData->PreSettlementPrice);
		LOG("\tPreClosePrice [%.8lf]\n",pDepthMarketData->PreClosePrice);
		LOG("\tPreOpenInterest [%.8lf]\n",pDepthMarketData->PreOpenInterest);
		LOG("\tOpenPrice [%.8lf]\n",pDepthMarketData->OpenPrice);
		LOG("\tHighestPrice [%.8lf]\n",pDepthMarketData->HighestPrice);
		LOG("\tLowestPrice [%.8lf]\n",pDepthMarketData->LowestPrice);
		LOG("\tTurnover [%.8lf]\n",pDepthMarketData->Turnover);
		LOG("\tOpenInterest [%.8lf]\n",pDepthMarketData->OpenInterest);
		LOG("\tClosePrice [%.8lf]\n",pDepthMarketData->ClosePrice);
		LOG("\tSettlementPrice [%.8lf]\n",pDepthMarketData->SettlementPrice);
		LOG("\tUpperLimitPrice [%.8lf]\n",pDepthMarketData->UpperLimitPrice);
		LOG("\tLowerLimitPrice [%.8lf]\n",pDepthMarketData->LowerLimitPrice);
		LOG("\tPreDelta [%.8lf]\n",pDepthMarketData->PreDelta);
		LOG("\tCurrDelta [%.8lf]\n",pDepthMarketData->CurrDelta);
		LOG("\tBidPrice1 [%.8lf]\n",pDepthMarketData->BidPrice1);
		LOG("\tAskPrice1 [%.8lf]\n",pDepthMarketData->AskPrice1);
		LOG("\tBidPrice2 [%.8lf]\n",pDepthMarketData->BidPrice2);
		LOG("\tAskPrice2 [%.8lf]\n",pDepthMarketData->AskPrice2);
		LOG("\tBidPrice3 [%.8lf]\n",pDepthMarketData->BidPrice3);
		LOG("\tAskPrice3 [%.8lf]\n",pDepthMarketData->AskPrice3);
		LOG("\tBidPrice4 [%.8lf]\n",pDepthMarketData->BidPrice4);
		LOG("\tAskPrice4 [%.8lf]\n",pDepthMarketData->AskPrice4);
		LOG("\tBidPrice5 [%.8lf]\n",pDepthMarketData->BidPrice5);
		LOG("\tAskPrice5 [%.8lf]\n",pDepthMarketData->AskPrice5);
		LOG("\tAveragePrice [%.8lf]\n",pDepthMarketData->AveragePrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryDepthMarketData>\n");
};

void CTraderSpi::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQrySettlementInfo>\n");
	if (pSettlementInfo)
	{
		LOG("\tTradingDay [%s]\n",pSettlementInfo->TradingDay);
		LOG("\tBrokerID [%s]\n",pSettlementInfo->BrokerID);
		LOG("\tInvestorID [%s]\n",pSettlementInfo->InvestorID);
		LOG("\tContent [%s]\n",pSettlementInfo->Content);
		LOG("\tAccountID [%s]\n",pSettlementInfo->AccountID);
		LOG("\tCurrencyID [%s]\n",pSettlementInfo->CurrencyID);
		LOG("\tSettlementID [%d]\n",pSettlementInfo->SettlementID);
		LOG("\tSequenceNo [%d]\n",pSettlementInfo->SequenceNo);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQrySettlementInfo>\n");
};

void CTraderSpi::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryTransferBank>\n");
	if (pTransferBank)
	{
		LOG("\tBankID [%s]\n",pTransferBank->BankID);
		LOG("\tBankBrchID [%s]\n",pTransferBank->BankBrchID);
		LOG("\tBankName [%s]\n",pTransferBank->BankName);
		LOG("\tIsActive [%d]\n",pTransferBank->IsActive);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryTransferBank>\n");
};

void CTraderSpi::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInvestorPositionDetail>\n");
	if (pInvestorPositionDetail)
	{
		LOG("\tInstrumentID [%s]\n",pInvestorPositionDetail->InstrumentID);
		LOG("\tBrokerID [%s]\n",pInvestorPositionDetail->BrokerID);
		LOG("\tInvestorID [%s]\n",pInvestorPositionDetail->InvestorID);
		LOG("\tOpenDate [%s]\n",pInvestorPositionDetail->OpenDate);
		LOG("\tTradeID [%s]\n",pInvestorPositionDetail->TradeID);
		LOG("\tTradingDay [%s]\n",pInvestorPositionDetail->TradingDay);
		LOG("\tCombInstrumentID [%s]\n",pInvestorPositionDetail->CombInstrumentID);
		LOG("\tExchangeID [%s]\n",pInvestorPositionDetail->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInvestorPositionDetail->InvestUnitID);
		LOG("\tVolume [%d]\n",pInvestorPositionDetail->Volume);
		LOG("\tSettlementID [%d]\n",pInvestorPositionDetail->SettlementID);
		LOG("\tCloseVolume [%d]\n",pInvestorPositionDetail->CloseVolume);
		LOG("\tTimeFirstVolume [%d]\n",pInvestorPositionDetail->TimeFirstVolume);
		LOG("\tHedgeFlag [%c]\n",pInvestorPositionDetail->HedgeFlag);
		LOG("\tDirection [%c]\n",pInvestorPositionDetail->Direction);
		LOG("\tTradeType [%c]\n",pInvestorPositionDetail->TradeType);
		LOG("\tOpenPrice [%.8lf]\n",pInvestorPositionDetail->OpenPrice);
		LOG("\tCloseProfitByDate [%.8lf]\n",pInvestorPositionDetail->CloseProfitByDate);
		LOG("\tCloseProfitByTrade [%.8lf]\n",pInvestorPositionDetail->CloseProfitByTrade);
		LOG("\tPositionProfitByDate [%.8lf]\n",pInvestorPositionDetail->PositionProfitByDate);
		LOG("\tPositionProfitByTrade [%.8lf]\n",pInvestorPositionDetail->PositionProfitByTrade);
		LOG("\tMargin [%.8lf]\n",pInvestorPositionDetail->Margin);
		LOG("\tExchMargin [%.8lf]\n",pInvestorPositionDetail->ExchMargin);
		LOG("\tMarginRateByMoney [%.8lf]\n",pInvestorPositionDetail->MarginRateByMoney);
		LOG("\tMarginRateByVolume [%.8lf]\n",pInvestorPositionDetail->MarginRateByVolume);
		LOG("\tLastSettlementPrice [%.8lf]\n",pInvestorPositionDetail->LastSettlementPrice);
		LOG("\tSettlementPrice [%.8lf]\n",pInvestorPositionDetail->SettlementPrice);
		LOG("\tCloseAmount [%.8lf]\n",pInvestorPositionDetail->CloseAmount);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInvestorPositionDetail>\n");
};

void CTraderSpi::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryNotice>\n");
	if (pNotice)
	{
		LOG("\tBrokerID [%s]\n",pNotice->BrokerID);
		LOG("\tContent [%s]\n",pNotice->Content);
		LOG("\tSequenceLabel [%s]\n",pNotice->SequenceLabel);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryNotice>\n");
};

void CTraderSpi::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQrySettlementInfoConfirm>\n");
	if (pSettlementInfoConfirm)
	{
		LOG("\tBrokerID [%s]\n",pSettlementInfoConfirm->BrokerID);
		LOG("\tInvestorID [%s]\n",pSettlementInfoConfirm->InvestorID);
		LOG("\tConfirmDate [%s]\n",pSettlementInfoConfirm->ConfirmDate);
		LOG("\tConfirmTime [%s]\n",pSettlementInfoConfirm->ConfirmTime);
		LOG("\tAccountID [%s]\n",pSettlementInfoConfirm->AccountID);
		LOG("\tCurrencyID [%s]\n",pSettlementInfoConfirm->CurrencyID);
		LOG("\tSettlementID [%d]\n",pSettlementInfoConfirm->SettlementID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQrySettlementInfoConfirm>\n");
};

void CTraderSpi::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInvestorPositionCombineDetail>\n");
	if (pInvestorPositionCombineDetail)
	{
		LOG("\tTradingDay [%s]\n",pInvestorPositionCombineDetail->TradingDay);
		LOG("\tOpenDate [%s]\n",pInvestorPositionCombineDetail->OpenDate);
		LOG("\tExchangeID [%s]\n",pInvestorPositionCombineDetail->ExchangeID);
		LOG("\tBrokerID [%s]\n",pInvestorPositionCombineDetail->BrokerID);
		LOG("\tInvestorID [%s]\n",pInvestorPositionCombineDetail->InvestorID);
		LOG("\tComTradeID [%s]\n",pInvestorPositionCombineDetail->ComTradeID);
		LOG("\tTradeID [%s]\n",pInvestorPositionCombineDetail->TradeID);
		LOG("\tInstrumentID [%s]\n",pInvestorPositionCombineDetail->InstrumentID);
		LOG("\tCombInstrumentID [%s]\n",pInvestorPositionCombineDetail->CombInstrumentID);
		LOG("\tInvestUnitID [%s]\n",pInvestorPositionCombineDetail->InvestUnitID);
		LOG("\tSettlementID [%d]\n",pInvestorPositionCombineDetail->SettlementID);
		LOG("\tTotalAmt [%d]\n",pInvestorPositionCombineDetail->TotalAmt);
		LOG("\tLegID [%d]\n",pInvestorPositionCombineDetail->LegID);
		LOG("\tLegMultiple [%d]\n",pInvestorPositionCombineDetail->LegMultiple);
		LOG("\tTradeGroupID [%d]\n",pInvestorPositionCombineDetail->TradeGroupID);
		LOG("\tHedgeFlag [%c]\n",pInvestorPositionCombineDetail->HedgeFlag);
		LOG("\tDirection [%c]\n",pInvestorPositionCombineDetail->Direction);
		LOG("\tMargin [%.8lf]\n",pInvestorPositionCombineDetail->Margin);
		LOG("\tExchMargin [%.8lf]\n",pInvestorPositionCombineDetail->ExchMargin);
		LOG("\tMarginRateByMoney [%.8lf]\n",pInvestorPositionCombineDetail->MarginRateByMoney);
		LOG("\tMarginRateByVolume [%.8lf]\n",pInvestorPositionCombineDetail->MarginRateByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInvestorPositionCombineDetail>\n");
};

void CTraderSpi::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryCFMMCTradingAccountKey>\n");
	if (pCFMMCTradingAccountKey)
	{
		LOG("\tBrokerID [%s]\n",pCFMMCTradingAccountKey->BrokerID);
		LOG("\tParticipantID [%s]\n",pCFMMCTradingAccountKey->ParticipantID);
		LOG("\tAccountID [%s]\n",pCFMMCTradingAccountKey->AccountID);
		LOG("\tCurrentKey [%s]\n",pCFMMCTradingAccountKey->CurrentKey);
		LOG("\tKeyID [%d]\n",pCFMMCTradingAccountKey->KeyID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryCFMMCTradingAccountKey>\n");
};

void CTraderSpi::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryEWarrantOffset>\n");
	if (pEWarrantOffset)
	{
		LOG("\tTradingDay [%s]\n",pEWarrantOffset->TradingDay);
		LOG("\tBrokerID [%s]\n",pEWarrantOffset->BrokerID);
		LOG("\tInvestorID [%s]\n",pEWarrantOffset->InvestorID);
		LOG("\tExchangeID [%s]\n",pEWarrantOffset->ExchangeID);
		LOG("\tInstrumentID [%s]\n",pEWarrantOffset->InstrumentID);
		LOG("\tInvestUnitID [%s]\n",pEWarrantOffset->InvestUnitID);
		LOG("\tVolume [%d]\n",pEWarrantOffset->Volume);
		LOG("\tDirection [%c]\n",pEWarrantOffset->Direction);
		LOG("\tHedgeFlag [%c]\n",pEWarrantOffset->HedgeFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryEWarrantOffset>\n");
};

void CTraderSpi::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInvestorProductGroupMargin>\n");
	if (pInvestorProductGroupMargin)
	{
		LOG("\tProductGroupID [%s]\n",pInvestorProductGroupMargin->ProductGroupID);
		LOG("\tBrokerID [%s]\n",pInvestorProductGroupMargin->BrokerID);
		LOG("\tInvestorID [%s]\n",pInvestorProductGroupMargin->InvestorID);
		LOG("\tTradingDay [%s]\n",pInvestorProductGroupMargin->TradingDay);
		LOG("\tExchangeID [%s]\n",pInvestorProductGroupMargin->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInvestorProductGroupMargin->InvestUnitID);
		LOG("\tSettlementID [%d]\n",pInvestorProductGroupMargin->SettlementID);
		LOG("\tHedgeFlag [%c]\n",pInvestorProductGroupMargin->HedgeFlag);
		LOG("\tFrozenMargin [%.8lf]\n",pInvestorProductGroupMargin->FrozenMargin);
		LOG("\tLongFrozenMargin [%.8lf]\n",pInvestorProductGroupMargin->LongFrozenMargin);
		LOG("\tShortFrozenMargin [%.8lf]\n",pInvestorProductGroupMargin->ShortFrozenMargin);
		LOG("\tUseMargin [%.8lf]\n",pInvestorProductGroupMargin->UseMargin);
		LOG("\tLongUseMargin [%.8lf]\n",pInvestorProductGroupMargin->LongUseMargin);
		LOG("\tShortUseMargin [%.8lf]\n",pInvestorProductGroupMargin->ShortUseMargin);
		LOG("\tExchMargin [%.8lf]\n",pInvestorProductGroupMargin->ExchMargin);
		LOG("\tLongExchMargin [%.8lf]\n",pInvestorProductGroupMargin->LongExchMargin);
		LOG("\tShortExchMargin [%.8lf]\n",pInvestorProductGroupMargin->ShortExchMargin);
		LOG("\tCloseProfit [%.8lf]\n",pInvestorProductGroupMargin->CloseProfit);
		LOG("\tFrozenCommission [%.8lf]\n",pInvestorProductGroupMargin->FrozenCommission);
		LOG("\tCommission [%.8lf]\n",pInvestorProductGroupMargin->Commission);
		LOG("\tFrozenCash [%.8lf]\n",pInvestorProductGroupMargin->FrozenCash);
		LOG("\tCashIn [%.8lf]\n",pInvestorProductGroupMargin->CashIn);
		LOG("\tPositionProfit [%.8lf]\n",pInvestorProductGroupMargin->PositionProfit);
		LOG("\tOffsetAmount [%.8lf]\n",pInvestorProductGroupMargin->OffsetAmount);
		LOG("\tLongOffsetAmount [%.8lf]\n",pInvestorProductGroupMargin->LongOffsetAmount);
		LOG("\tShortOffsetAmount [%.8lf]\n",pInvestorProductGroupMargin->ShortOffsetAmount);
		LOG("\tExchOffsetAmount [%.8lf]\n",pInvestorProductGroupMargin->ExchOffsetAmount);
		LOG("\tLongExchOffsetAmount [%.8lf]\n",pInvestorProductGroupMargin->LongExchOffsetAmount);
		LOG("\tShortExchOffsetAmount [%.8lf]\n",pInvestorProductGroupMargin->ShortExchOffsetAmount);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInvestorProductGroupMargin>\n");
};

void CTraderSpi::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryExchangeMarginRate>\n");
	if (pExchangeMarginRate)
	{
		LOG("\tBrokerID [%s]\n",pExchangeMarginRate->BrokerID);
		LOG("\tInstrumentID [%s]\n",pExchangeMarginRate->InstrumentID);
		LOG("\tExchangeID [%s]\n",pExchangeMarginRate->ExchangeID);
		LOG("\tHedgeFlag [%c]\n",pExchangeMarginRate->HedgeFlag);
		LOG("\tLongMarginRatioByMoney [%.8lf]\n",pExchangeMarginRate->LongMarginRatioByMoney);
		LOG("\tLongMarginRatioByVolume [%.8lf]\n",pExchangeMarginRate->LongMarginRatioByVolume);
		LOG("\tShortMarginRatioByMoney [%.8lf]\n",pExchangeMarginRate->ShortMarginRatioByMoney);
		LOG("\tShortMarginRatioByVolume [%.8lf]\n",pExchangeMarginRate->ShortMarginRatioByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryExchangeMarginRate>\n");
};

void CTraderSpi::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryExchangeMarginRateAdjust>\n");
	if (pExchangeMarginRateAdjust)
	{
		LOG("\tBrokerID [%s]\n",pExchangeMarginRateAdjust->BrokerID);
		LOG("\tInstrumentID [%s]\n",pExchangeMarginRateAdjust->InstrumentID);
		LOG("\tHedgeFlag [%c]\n",pExchangeMarginRateAdjust->HedgeFlag);
		LOG("\tLongMarginRatioByMoney [%.8lf]\n",pExchangeMarginRateAdjust->LongMarginRatioByMoney);
		LOG("\tLongMarginRatioByVolume [%.8lf]\n",pExchangeMarginRateAdjust->LongMarginRatioByVolume);
		LOG("\tShortMarginRatioByMoney [%.8lf]\n",pExchangeMarginRateAdjust->ShortMarginRatioByMoney);
		LOG("\tShortMarginRatioByVolume [%.8lf]\n",pExchangeMarginRateAdjust->ShortMarginRatioByVolume);
		LOG("\tExchLongMarginRatioByMoney [%.8lf]\n",pExchangeMarginRateAdjust->ExchLongMarginRatioByMoney);
		LOG("\tExchLongMarginRatioByVolume [%.8lf]\n",pExchangeMarginRateAdjust->ExchLongMarginRatioByVolume);
		LOG("\tExchShortMarginRatioByMoney [%.8lf]\n",pExchangeMarginRateAdjust->ExchShortMarginRatioByMoney);
		LOG("\tExchShortMarginRatioByVolume [%.8lf]\n",pExchangeMarginRateAdjust->ExchShortMarginRatioByVolume);
		LOG("\tNoLongMarginRatioByMoney [%.8lf]\n",pExchangeMarginRateAdjust->NoLongMarginRatioByMoney);
		LOG("\tNoLongMarginRatioByVolume [%.8lf]\n",pExchangeMarginRateAdjust->NoLongMarginRatioByVolume);
		LOG("\tNoShortMarginRatioByMoney [%.8lf]\n",pExchangeMarginRateAdjust->NoShortMarginRatioByMoney);
		LOG("\tNoShortMarginRatioByVolume [%.8lf]\n",pExchangeMarginRateAdjust->NoShortMarginRatioByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryExchangeMarginRateAdjust>\n");
};

void CTraderSpi::OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryExchangeRate>\n");
	if (pExchangeRate)
	{
		LOG("\tBrokerID [%s]\n",pExchangeRate->BrokerID);
		LOG("\tFromCurrencyID [%s]\n",pExchangeRate->FromCurrencyID);
		LOG("\tToCurrencyID [%s]\n",pExchangeRate->ToCurrencyID);
		LOG("\tFromCurrencyUnit [%.8lf]\n",pExchangeRate->FromCurrencyUnit);
		LOG("\tExchangeRate [%.8lf]\n",pExchangeRate->ExchangeRate);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryExchangeRate>\n");
};

void CTraderSpi::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQrySecAgentACIDMap>\n");
	if (pSecAgentACIDMap)
	{
		LOG("\tBrokerID [%s]\n",pSecAgentACIDMap->BrokerID);
		LOG("\tUserID [%s]\n",pSecAgentACIDMap->UserID);
		LOG("\tAccountID [%s]\n",pSecAgentACIDMap->AccountID);
		LOG("\tCurrencyID [%s]\n",pSecAgentACIDMap->CurrencyID);
		LOG("\tBrokerSecAgentID [%s]\n",pSecAgentACIDMap->BrokerSecAgentID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQrySecAgentACIDMap>\n");
};

void CTraderSpi::OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryProductExchRate>\n");
	if (pProductExchRate)
	{
		LOG("\tProductID [%s]\n",pProductExchRate->ProductID);
		LOG("\tQuoteCurrencyID [%s]\n",pProductExchRate->QuoteCurrencyID);
		LOG("\tExchangeID [%s]\n",pProductExchRate->ExchangeID);
		LOG("\tExchangeRate [%.8lf]\n",pProductExchRate->ExchangeRate);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryProductExchRate>\n");
};

void CTraderSpi::OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryProductGroup>\n");
	if (pProductGroup)
	{
		LOG("\tProductID [%s]\n",pProductGroup->ProductID);
		LOG("\tExchangeID [%s]\n",pProductGroup->ExchangeID);
		LOG("\tProductGroupID [%s]\n",pProductGroup->ProductGroupID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryProductGroup>\n");
};

void CTraderSpi::OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryMMInstrumentCommissionRate>\n");
	if (pMMInstrumentCommissionRate)
	{
		LOG("\tInstrumentID [%s]\n",pMMInstrumentCommissionRate->InstrumentID);
		LOG("\tBrokerID [%s]\n",pMMInstrumentCommissionRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pMMInstrumentCommissionRate->InvestorID);
		LOG("\tInvestorRange [%c]\n",pMMInstrumentCommissionRate->InvestorRange);
		LOG("\tOpenRatioByMoney [%.8lf]\n",pMMInstrumentCommissionRate->OpenRatioByMoney);
		LOG("\tOpenRatioByVolume [%.8lf]\n",pMMInstrumentCommissionRate->OpenRatioByVolume);
		LOG("\tCloseRatioByMoney [%.8lf]\n",pMMInstrumentCommissionRate->CloseRatioByMoney);
		LOG("\tCloseRatioByVolume [%.8lf]\n",pMMInstrumentCommissionRate->CloseRatioByVolume);
		LOG("\tCloseTodayRatioByMoney [%.8lf]\n",pMMInstrumentCommissionRate->CloseTodayRatioByMoney);
		LOG("\tCloseTodayRatioByVolume [%.8lf]\n",pMMInstrumentCommissionRate->CloseTodayRatioByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryMMInstrumentCommissionRate>\n");
};

void CTraderSpi::OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryMMOptionInstrCommRate>\n");
	if (pMMOptionInstrCommRate)
	{
		LOG("\tInstrumentID [%s]\n",pMMOptionInstrCommRate->InstrumentID);
		LOG("\tBrokerID [%s]\n",pMMOptionInstrCommRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pMMOptionInstrCommRate->InvestorID);
		LOG("\tInvestorRange [%c]\n",pMMOptionInstrCommRate->InvestorRange);
		LOG("\tOpenRatioByMoney [%.8lf]\n",pMMOptionInstrCommRate->OpenRatioByMoney);
		LOG("\tOpenRatioByVolume [%.8lf]\n",pMMOptionInstrCommRate->OpenRatioByVolume);
		LOG("\tCloseRatioByMoney [%.8lf]\n",pMMOptionInstrCommRate->CloseRatioByMoney);
		LOG("\tCloseRatioByVolume [%.8lf]\n",pMMOptionInstrCommRate->CloseRatioByVolume);
		LOG("\tCloseTodayRatioByMoney [%.8lf]\n",pMMOptionInstrCommRate->CloseTodayRatioByMoney);
		LOG("\tCloseTodayRatioByVolume [%.8lf]\n",pMMOptionInstrCommRate->CloseTodayRatioByVolume);
		LOG("\tStrikeRatioByMoney [%.8lf]\n",pMMOptionInstrCommRate->StrikeRatioByMoney);
		LOG("\tStrikeRatioByVolume [%.8lf]\n",pMMOptionInstrCommRate->StrikeRatioByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryMMOptionInstrCommRate>\n");
};

void CTraderSpi::OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInstrumentOrderCommRate>\n");
	if (pInstrumentOrderCommRate)
	{
		LOG("\tInstrumentID [%s]\n",pInstrumentOrderCommRate->InstrumentID);
		LOG("\tBrokerID [%s]\n",pInstrumentOrderCommRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pInstrumentOrderCommRate->InvestorID);
		LOG("\tExchangeID [%s]\n",pInstrumentOrderCommRate->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInstrumentOrderCommRate->InvestUnitID);
		LOG("\tInvestorRange [%c]\n",pInstrumentOrderCommRate->InvestorRange);
		LOG("\tHedgeFlag [%c]\n",pInstrumentOrderCommRate->HedgeFlag);
		LOG("\tOrderCommByVolume [%.8lf]\n",pInstrumentOrderCommRate->OrderCommByVolume);
		LOG("\tOrderActionCommByVolume [%.8lf]\n",pInstrumentOrderCommRate->OrderActionCommByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInstrumentOrderCommRate>\n");
};

void CTraderSpi::OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQrySecAgentTradingAccount>\n");
	if (pTradingAccount)
	{
		LOG("\tBrokerID [%s]\n",pTradingAccount->BrokerID);
		LOG("\tAccountID [%s]\n",pTradingAccount->AccountID);
		LOG("\tTradingDay [%s]\n",pTradingAccount->TradingDay);
		LOG("\tCurrencyID [%s]\n",pTradingAccount->CurrencyID);
		LOG("\tSettlementID [%d]\n",pTradingAccount->SettlementID);
		LOG("\tBizType [%c]\n",pTradingAccount->BizType);
		LOG("\tPreMortgage [%.8lf]\n",pTradingAccount->PreMortgage);
		LOG("\tPreCredit [%.8lf]\n",pTradingAccount->PreCredit);
		LOG("\tPreDeposit [%.8lf]\n",pTradingAccount->PreDeposit);
		LOG("\tPreBalance [%.8lf]\n",pTradingAccount->PreBalance);
		LOG("\tPreMargin [%.8lf]\n",pTradingAccount->PreMargin);
		LOG("\tInterestBase [%.8lf]\n",pTradingAccount->InterestBase);
		LOG("\tInterest [%.8lf]\n",pTradingAccount->Interest);
		LOG("\tDeposit [%.8lf]\n",pTradingAccount->Deposit);
		LOG("\tWithdraw [%.8lf]\n",pTradingAccount->Withdraw);
		LOG("\tFrozenMargin [%.8lf]\n",pTradingAccount->FrozenMargin);
		LOG("\tFrozenCash [%.8lf]\n",pTradingAccount->FrozenCash);
		LOG("\tFrozenCommission [%.8lf]\n",pTradingAccount->FrozenCommission);
		LOG("\tCurrMargin [%.8lf]\n",pTradingAccount->CurrMargin);
		LOG("\tCashIn [%.8lf]\n",pTradingAccount->CashIn);
		LOG("\tCommission [%.8lf]\n",pTradingAccount->Commission);
		LOG("\tCloseProfit [%.8lf]\n",pTradingAccount->CloseProfit);
		LOG("\tPositionProfit [%.8lf]\n",pTradingAccount->PositionProfit);
		LOG("\tBalance [%.8lf]\n",pTradingAccount->Balance);
		LOG("\tAvailable [%.8lf]\n",pTradingAccount->Available);
		LOG("\tWithdrawQuota [%.8lf]\n",pTradingAccount->WithdrawQuota);
		LOG("\tReserve [%.8lf]\n",pTradingAccount->Reserve);
		LOG("\tCredit [%.8lf]\n",pTradingAccount->Credit);
		LOG("\tMortgage [%.8lf]\n",pTradingAccount->Mortgage);
		LOG("\tExchangeMargin [%.8lf]\n",pTradingAccount->ExchangeMargin);
		LOG("\tDeliveryMargin [%.8lf]\n",pTradingAccount->DeliveryMargin);
		LOG("\tExchangeDeliveryMargin [%.8lf]\n",pTradingAccount->ExchangeDeliveryMargin);
		LOG("\tReserveBalance [%.8lf]\n",pTradingAccount->ReserveBalance);
		LOG("\tPreFundMortgageIn [%.8lf]\n",pTradingAccount->PreFundMortgageIn);
		LOG("\tPreFundMortgageOut [%.8lf]\n",pTradingAccount->PreFundMortgageOut);
		LOG("\tFundMortgageIn [%.8lf]\n",pTradingAccount->FundMortgageIn);
		LOG("\tFundMortgageOut [%.8lf]\n",pTradingAccount->FundMortgageOut);
		LOG("\tFundMortgageAvailable [%.8lf]\n",pTradingAccount->FundMortgageAvailable);
		LOG("\tMortgageableFund [%.8lf]\n",pTradingAccount->MortgageableFund);
		LOG("\tSpecProductMargin [%.8lf]\n",pTradingAccount->SpecProductMargin);
		LOG("\tSpecProductFrozenMargin [%.8lf]\n",pTradingAccount->SpecProductFrozenMargin);
		LOG("\tSpecProductCommission [%.8lf]\n",pTradingAccount->SpecProductCommission);
		LOG("\tSpecProductFrozenCommission [%.8lf]\n",pTradingAccount->SpecProductFrozenCommission);
		LOG("\tSpecProductPositionProfit [%.8lf]\n",pTradingAccount->SpecProductPositionProfit);
		LOG("\tSpecProductCloseProfit [%.8lf]\n",pTradingAccount->SpecProductCloseProfit);
		LOG("\tSpecProductPositionProfitByAlg [%.8lf]\n",pTradingAccount->SpecProductPositionProfitByAlg);
		LOG("\tSpecProductExchangeMargin [%.8lf]\n",pTradingAccount->SpecProductExchangeMargin);
		LOG("\tFrozenSwap [%.8lf]\n",pTradingAccount->FrozenSwap);
		LOG("\tRemainSwap [%.8lf]\n",pTradingAccount->RemainSwap);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQrySecAgentTradingAccount>\n");
};

void CTraderSpi::OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQrySecAgentCheckMode>\n");
	if (pSecAgentCheckMode)
	{
		LOG("\tInvestorID [%s]\n",pSecAgentCheckMode->InvestorID);
		LOG("\tBrokerID [%s]\n",pSecAgentCheckMode->BrokerID);
		LOG("\tCurrencyID [%s]\n",pSecAgentCheckMode->CurrencyID);
		LOG("\tBrokerSecAgentID [%s]\n",pSecAgentCheckMode->BrokerSecAgentID);
		LOG("\tCheckSelfAccount [%d]\n",pSecAgentCheckMode->CheckSelfAccount);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQrySecAgentCheckMode>\n");
};

void CTraderSpi::OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQrySecAgentTradeInfo>\n");
	if (pSecAgentTradeInfo)
	{
		LOG("\tBrokerID [%s]\n",pSecAgentTradeInfo->BrokerID);
		LOG("\tBrokerSecAgentID [%s]\n",pSecAgentTradeInfo->BrokerSecAgentID);
		LOG("\tInvestorID [%s]\n",pSecAgentTradeInfo->InvestorID);
		LOG("\tLongCustomerName [%s]\n",pSecAgentTradeInfo->LongCustomerName);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQrySecAgentTradeInfo>\n");
};

void CTraderSpi::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryOptionInstrTradeCost>\n");
	if (pOptionInstrTradeCost)
	{
		LOG("\tBrokerID [%s]\n",pOptionInstrTradeCost->BrokerID);
		LOG("\tInvestorID [%s]\n",pOptionInstrTradeCost->InvestorID);
		LOG("\tInstrumentID [%s]\n",pOptionInstrTradeCost->InstrumentID);
		LOG("\tExchangeID [%s]\n",pOptionInstrTradeCost->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pOptionInstrTradeCost->InvestUnitID);
		LOG("\tHedgeFlag [%c]\n",pOptionInstrTradeCost->HedgeFlag);
		LOG("\tFixedMargin [%.8lf]\n",pOptionInstrTradeCost->FixedMargin);
		LOG("\tMiniMargin [%.8lf]\n",pOptionInstrTradeCost->MiniMargin);
		LOG("\tRoyalty [%.8lf]\n",pOptionInstrTradeCost->Royalty);
		LOG("\tExchFixedMargin [%.8lf]\n",pOptionInstrTradeCost->ExchFixedMargin);
		LOG("\tExchMiniMargin [%.8lf]\n",pOptionInstrTradeCost->ExchMiniMargin);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryOptionInstrTradeCost>\n");
};

void CTraderSpi::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryOptionInstrCommRate>\n");
	if (pOptionInstrCommRate)
	{
		LOG("\tInstrumentID [%s]\n",pOptionInstrCommRate->InstrumentID);
		LOG("\tBrokerID [%s]\n",pOptionInstrCommRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pOptionInstrCommRate->InvestorID);
		LOG("\tExchangeID [%s]\n",pOptionInstrCommRate->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pOptionInstrCommRate->InvestUnitID);
		LOG("\tInvestorRange [%c]\n",pOptionInstrCommRate->InvestorRange);
		LOG("\tOpenRatioByMoney [%.8lf]\n",pOptionInstrCommRate->OpenRatioByMoney);
		LOG("\tOpenRatioByVolume [%.8lf]\n",pOptionInstrCommRate->OpenRatioByVolume);
		LOG("\tCloseRatioByMoney [%.8lf]\n",pOptionInstrCommRate->CloseRatioByMoney);
		LOG("\tCloseRatioByVolume [%.8lf]\n",pOptionInstrCommRate->CloseRatioByVolume);
		LOG("\tCloseTodayRatioByMoney [%.8lf]\n",pOptionInstrCommRate->CloseTodayRatioByMoney);
		LOG("\tCloseTodayRatioByVolume [%.8lf]\n",pOptionInstrCommRate->CloseTodayRatioByVolume);
		LOG("\tStrikeRatioByMoney [%.8lf]\n",pOptionInstrCommRate->StrikeRatioByMoney);
		LOG("\tStrikeRatioByVolume [%.8lf]\n",pOptionInstrCommRate->StrikeRatioByVolume);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryOptionInstrCommRate>\n");
};

void CTraderSpi::OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryExecOrder>\n");
	if (pExecOrder)
	{
		LOG("\tBrokerID [%s]\n",pExecOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pExecOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pExecOrder->InstrumentID);
		LOG("\tExecOrderRef [%s]\n",pExecOrder->ExecOrderRef);
		LOG("\tUserID [%s]\n",pExecOrder->UserID);
		LOG("\tBusinessUnit [%s]\n",pExecOrder->BusinessUnit);
		LOG("\tExecOrderLocalID [%s]\n",pExecOrder->ExecOrderLocalID);
		LOG("\tExchangeID [%s]\n",pExecOrder->ExchangeID);
		LOG("\tParticipantID [%s]\n",pExecOrder->ParticipantID);
		LOG("\tClientID [%s]\n",pExecOrder->ClientID);
		LOG("\tExchangeInstID [%s]\n",pExecOrder->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pExecOrder->TraderID);
		LOG("\tTradingDay [%s]\n",pExecOrder->TradingDay);
		LOG("\tExecOrderSysID [%s]\n",pExecOrder->ExecOrderSysID);
		LOG("\tInsertDate [%s]\n",pExecOrder->InsertDate);
		LOG("\tInsertTime [%s]\n",pExecOrder->InsertTime);
		LOG("\tCancelTime [%s]\n",pExecOrder->CancelTime);
		LOG("\tClearingPartID [%s]\n",pExecOrder->ClearingPartID);
		LOG("\tUserProductInfo [%s]\n",pExecOrder->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pExecOrder->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pExecOrder->ActiveUserID);
		LOG("\tBranchID [%s]\n",pExecOrder->BranchID);
		LOG("\tInvestUnitID [%s]\n",pExecOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pExecOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pExecOrder->CurrencyID);
		LOG("\tIPAddress [%s]\n",pExecOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pExecOrder->MacAddress);
		LOG("\tVolume [%d]\n",pExecOrder->Volume);
		LOG("\tRequestID [%d]\n",pExecOrder->RequestID);
		LOG("\tInstallID [%d]\n",pExecOrder->InstallID);
		LOG("\tNotifySequence [%d]\n",pExecOrder->NotifySequence);
		LOG("\tSettlementID [%d]\n",pExecOrder->SettlementID);
		LOG("\tSequenceNo [%d]\n",pExecOrder->SequenceNo);
		LOG("\tFrontID [%d]\n",pExecOrder->FrontID);
		LOG("\tSessionID [%d]\n",pExecOrder->SessionID);
		LOG("\tBrokerExecOrderSeq [%d]\n",pExecOrder->BrokerExecOrderSeq);
		LOG("\tOffsetFlag [%c]\n",pExecOrder->OffsetFlag);
		LOG("\tHedgeFlag [%c]\n",pExecOrder->HedgeFlag);
		LOG("\tActionType [%c]\n",pExecOrder->ActionType);
		LOG("\tPosiDirection [%c]\n",pExecOrder->PosiDirection);
		LOG("\tReservePositionFlag [%c]\n",pExecOrder->ReservePositionFlag);
		LOG("\tCloseFlag [%c]\n",pExecOrder->CloseFlag);
		LOG("\tOrderSubmitStatus [%c]\n",pExecOrder->OrderSubmitStatus);
		LOG("\tExecResult [%c]\n",pExecOrder->ExecResult);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryExecOrder>\n");
};

void CTraderSpi::OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryForQuote>\n");
	if (pForQuote)
	{
		LOG("\tBrokerID [%s]\n",pForQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pForQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pForQuote->InstrumentID);
		LOG("\tForQuoteRef [%s]\n",pForQuote->ForQuoteRef);
		LOG("\tUserID [%s]\n",pForQuote->UserID);
		LOG("\tForQuoteLocalID [%s]\n",pForQuote->ForQuoteLocalID);
		LOG("\tExchangeID [%s]\n",pForQuote->ExchangeID);
		LOG("\tParticipantID [%s]\n",pForQuote->ParticipantID);
		LOG("\tClientID [%s]\n",pForQuote->ClientID);
		LOG("\tExchangeInstID [%s]\n",pForQuote->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pForQuote->TraderID);
		LOG("\tInsertDate [%s]\n",pForQuote->InsertDate);
		LOG("\tInsertTime [%s]\n",pForQuote->InsertTime);
		LOG("\tStatusMsg [%s]\n",pForQuote->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pForQuote->ActiveUserID);
		LOG("\tInvestUnitID [%s]\n",pForQuote->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pForQuote->IPAddress);
		LOG("\tMacAddress [%s]\n",pForQuote->MacAddress);
		LOG("\tInstallID [%d]\n",pForQuote->InstallID);
		LOG("\tFrontID [%d]\n",pForQuote->FrontID);
		LOG("\tSessionID [%d]\n",pForQuote->SessionID);
		LOG("\tBrokerForQutoSeq [%d]\n",pForQuote->BrokerForQutoSeq);
		LOG("\tForQuoteStatus [%c]\n",pForQuote->ForQuoteStatus);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryForQuote>\n");
};

void CTraderSpi::OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryQuote>\n");
	if (pQuote)
	{
		LOG("\tBrokerID [%s]\n",pQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQuote->InstrumentID);
		LOG("\tQuoteRef [%s]\n",pQuote->QuoteRef);
		LOG("\tUserID [%s]\n",pQuote->UserID);
		LOG("\tBusinessUnit [%s]\n",pQuote->BusinessUnit);
		LOG("\tQuoteLocalID [%s]\n",pQuote->QuoteLocalID);
		LOG("\tExchangeID [%s]\n",pQuote->ExchangeID);
		LOG("\tParticipantID [%s]\n",pQuote->ParticipantID);
		LOG("\tClientID [%s]\n",pQuote->ClientID);
		LOG("\tExchangeInstID [%s]\n",pQuote->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pQuote->TraderID);
		LOG("\tTradingDay [%s]\n",pQuote->TradingDay);
		LOG("\tQuoteSysID [%s]\n",pQuote->QuoteSysID);
		LOG("\tInsertDate [%s]\n",pQuote->InsertDate);
		LOG("\tInsertTime [%s]\n",pQuote->InsertTime);
		LOG("\tCancelTime [%s]\n",pQuote->CancelTime);
		LOG("\tClearingPartID [%s]\n",pQuote->ClearingPartID);
		LOG("\tAskOrderSysID [%s]\n",pQuote->AskOrderSysID);
		LOG("\tBidOrderSysID [%s]\n",pQuote->BidOrderSysID);
		LOG("\tUserProductInfo [%s]\n",pQuote->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pQuote->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pQuote->ActiveUserID);
		LOG("\tAskOrderRef [%s]\n",pQuote->AskOrderRef);
		LOG("\tBidOrderRef [%s]\n",pQuote->BidOrderRef);
		LOG("\tForQuoteSysID [%s]\n",pQuote->ForQuoteSysID);
		LOG("\tBranchID [%s]\n",pQuote->BranchID);
		LOG("\tInvestUnitID [%s]\n",pQuote->InvestUnitID);
		LOG("\tAccountID [%s]\n",pQuote->AccountID);
		LOG("\tCurrencyID [%s]\n",pQuote->CurrencyID);
		LOG("\tIPAddress [%s]\n",pQuote->IPAddress);
		LOG("\tMacAddress [%s]\n",pQuote->MacAddress);
		LOG("\tAskVolume [%d]\n",pQuote->AskVolume);
		LOG("\tBidVolume [%d]\n",pQuote->BidVolume);
		LOG("\tRequestID [%d]\n",pQuote->RequestID);
		LOG("\tInstallID [%d]\n",pQuote->InstallID);
		LOG("\tNotifySequence [%d]\n",pQuote->NotifySequence);
		LOG("\tSettlementID [%d]\n",pQuote->SettlementID);
		LOG("\tSequenceNo [%d]\n",pQuote->SequenceNo);
		LOG("\tFrontID [%d]\n",pQuote->FrontID);
		LOG("\tSessionID [%d]\n",pQuote->SessionID);
		LOG("\tBrokerQuoteSeq [%d]\n",pQuote->BrokerQuoteSeq);
		LOG("\tAskOffsetFlag [%c]\n",pQuote->AskOffsetFlag);
		LOG("\tBidOffsetFlag [%c]\n",pQuote->BidOffsetFlag);
		LOG("\tAskHedgeFlag [%c]\n",pQuote->AskHedgeFlag);
		LOG("\tBidHedgeFlag [%c]\n",pQuote->BidHedgeFlag);
		LOG("\tOrderSubmitStatus [%c]\n",pQuote->OrderSubmitStatus);
		LOG("\tQuoteStatus [%c]\n",pQuote->QuoteStatus);
		LOG("\tAskPrice [%.8lf]\n",pQuote->AskPrice);
		LOG("\tBidPrice [%.8lf]\n",pQuote->BidPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryQuote>\n");
};

void CTraderSpi::OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryOptionSelfClose>\n");
	if (pOptionSelfClose)
	{
		LOG("\tBrokerID [%s]\n",pOptionSelfClose->BrokerID);
		LOG("\tInvestorID [%s]\n",pOptionSelfClose->InvestorID);
		LOG("\tInstrumentID [%s]\n",pOptionSelfClose->InstrumentID);
		LOG("\tOptionSelfCloseRef [%s]\n",pOptionSelfClose->OptionSelfCloseRef);
		LOG("\tUserID [%s]\n",pOptionSelfClose->UserID);
		LOG("\tBusinessUnit [%s]\n",pOptionSelfClose->BusinessUnit);
		LOG("\tOptionSelfCloseLocalID [%s]\n",pOptionSelfClose->OptionSelfCloseLocalID);
		LOG("\tExchangeID [%s]\n",pOptionSelfClose->ExchangeID);
		LOG("\tParticipantID [%s]\n",pOptionSelfClose->ParticipantID);
		LOG("\tClientID [%s]\n",pOptionSelfClose->ClientID);
		LOG("\tExchangeInstID [%s]\n",pOptionSelfClose->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pOptionSelfClose->TraderID);
		LOG("\tTradingDay [%s]\n",pOptionSelfClose->TradingDay);
		LOG("\tOptionSelfCloseSysID [%s]\n",pOptionSelfClose->OptionSelfCloseSysID);
		LOG("\tInsertDate [%s]\n",pOptionSelfClose->InsertDate);
		LOG("\tInsertTime [%s]\n",pOptionSelfClose->InsertTime);
		LOG("\tCancelTime [%s]\n",pOptionSelfClose->CancelTime);
		LOG("\tClearingPartID [%s]\n",pOptionSelfClose->ClearingPartID);
		LOG("\tUserProductInfo [%s]\n",pOptionSelfClose->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pOptionSelfClose->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pOptionSelfClose->ActiveUserID);
		LOG("\tBranchID [%s]\n",pOptionSelfClose->BranchID);
		LOG("\tInvestUnitID [%s]\n",pOptionSelfClose->InvestUnitID);
		LOG("\tAccountID [%s]\n",pOptionSelfClose->AccountID);
		LOG("\tCurrencyID [%s]\n",pOptionSelfClose->CurrencyID);
		LOG("\tIPAddress [%s]\n",pOptionSelfClose->IPAddress);
		LOG("\tMacAddress [%s]\n",pOptionSelfClose->MacAddress);
		LOG("\tVolume [%d]\n",pOptionSelfClose->Volume);
		LOG("\tRequestID [%d]\n",pOptionSelfClose->RequestID);
		LOG("\tInstallID [%d]\n",pOptionSelfClose->InstallID);
		LOG("\tNotifySequence [%d]\n",pOptionSelfClose->NotifySequence);
		LOG("\tSettlementID [%d]\n",pOptionSelfClose->SettlementID);
		LOG("\tSequenceNo [%d]\n",pOptionSelfClose->SequenceNo);
		LOG("\tFrontID [%d]\n",pOptionSelfClose->FrontID);
		LOG("\tSessionID [%d]\n",pOptionSelfClose->SessionID);
		LOG("\tBrokerOptionSelfCloseSeq [%d]\n",pOptionSelfClose->BrokerOptionSelfCloseSeq);
		LOG("\tHedgeFlag [%c]\n",pOptionSelfClose->HedgeFlag);
		LOG("\tOptSelfCloseFlag [%c]\n",pOptionSelfClose->OptSelfCloseFlag);
		LOG("\tOrderSubmitStatus [%c]\n",pOptionSelfClose->OrderSubmitStatus);
		LOG("\tExecResult [%c]\n",pOptionSelfClose->ExecResult);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryOptionSelfClose>\n");
};

void CTraderSpi::OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryInvestUnit>\n");
	if (pInvestUnit)
	{
		LOG("\tBrokerID [%s]\n",pInvestUnit->BrokerID);
		LOG("\tInvestorID [%s]\n",pInvestUnit->InvestorID);
		LOG("\tInvestUnitID [%s]\n",pInvestUnit->InvestUnitID);
		LOG("\tInvestorUnitName [%s]\n",pInvestUnit->InvestorUnitName);
		LOG("\tInvestorGroupID [%s]\n",pInvestUnit->InvestorGroupID);
		LOG("\tCommModelID [%s]\n",pInvestUnit->CommModelID);
		LOG("\tMarginModelID [%s]\n",pInvestUnit->MarginModelID);
		LOG("\tAccountID [%s]\n",pInvestUnit->AccountID);
		LOG("\tCurrencyID [%s]\n",pInvestUnit->CurrencyID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryInvestUnit>\n");
};

void CTraderSpi::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryCombInstrumentGuard>\n");
	if (pCombInstrumentGuard)
	{
		LOG("\tBrokerID [%s]\n",pCombInstrumentGuard->BrokerID);
		LOG("\tInstrumentID [%s]\n",pCombInstrumentGuard->InstrumentID);
		LOG("\tExchangeID [%s]\n",pCombInstrumentGuard->ExchangeID);
		LOG("\tGuarantRatio [%.8lf]\n",pCombInstrumentGuard->GuarantRatio);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryCombInstrumentGuard>\n");
};

void CTraderSpi::OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryCombAction>\n");
	if (pCombAction)
	{
		LOG("\tBrokerID [%s]\n",pCombAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pCombAction->InvestorID);
		LOG("\tInstrumentID [%s]\n",pCombAction->InstrumentID);
		LOG("\tCombActionRef [%s]\n",pCombAction->CombActionRef);
		LOG("\tUserID [%s]\n",pCombAction->UserID);
		LOG("\tActionLocalID [%s]\n",pCombAction->ActionLocalID);
		LOG("\tExchangeID [%s]\n",pCombAction->ExchangeID);
		LOG("\tParticipantID [%s]\n",pCombAction->ParticipantID);
		LOG("\tClientID [%s]\n",pCombAction->ClientID);
		LOG("\tExchangeInstID [%s]\n",pCombAction->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pCombAction->TraderID);
		LOG("\tTradingDay [%s]\n",pCombAction->TradingDay);
		LOG("\tUserProductInfo [%s]\n",pCombAction->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pCombAction->StatusMsg);
		LOG("\tIPAddress [%s]\n",pCombAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pCombAction->MacAddress);
		LOG("\tComTradeID [%s]\n",pCombAction->ComTradeID);
		LOG("\tBranchID [%s]\n",pCombAction->BranchID);
		LOG("\tInvestUnitID [%s]\n",pCombAction->InvestUnitID);
		LOG("\tVolume [%d]\n",pCombAction->Volume);
		LOG("\tInstallID [%d]\n",pCombAction->InstallID);
		LOG("\tNotifySequence [%d]\n",pCombAction->NotifySequence);
		LOG("\tSettlementID [%d]\n",pCombAction->SettlementID);
		LOG("\tSequenceNo [%d]\n",pCombAction->SequenceNo);
		LOG("\tFrontID [%d]\n",pCombAction->FrontID);
		LOG("\tSessionID [%d]\n",pCombAction->SessionID);
		LOG("\tDirection [%c]\n",pCombAction->Direction);
		LOG("\tCombDirection [%c]\n",pCombAction->CombDirection);
		LOG("\tHedgeFlag [%c]\n",pCombAction->HedgeFlag);
		LOG("\tActionStatus [%c]\n",pCombAction->ActionStatus);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryCombAction>\n");
};

void CTraderSpi::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryTransferSerial>\n");
	if (pTransferSerial)
	{
		LOG("\tTradeDate [%s]\n",pTransferSerial->TradeDate);
		LOG("\tTradingDay [%s]\n",pTransferSerial->TradingDay);
		LOG("\tTradeTime [%s]\n",pTransferSerial->TradeTime);
		LOG("\tTradeCode [%s]\n",pTransferSerial->TradeCode);
		LOG("\tBankID [%s]\n",pTransferSerial->BankID);
		LOG("\tBankBranchID [%s]\n",pTransferSerial->BankBranchID);
		LOG("\tBankAccount [%s]\n",pTransferSerial->BankAccount);
		LOG("\tBankSerial [%s]\n",pTransferSerial->BankSerial);
		LOG("\tBrokerID [%s]\n",pTransferSerial->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pTransferSerial->BrokerBranchID);
		LOG("\tAccountID [%s]\n",pTransferSerial->AccountID);
		LOG("\tInvestorID [%s]\n",pTransferSerial->InvestorID);
		LOG("\tIdentifiedCardNo [%s]\n",pTransferSerial->IdentifiedCardNo);
		LOG("\tCurrencyID [%s]\n",pTransferSerial->CurrencyID);
		LOG("\tOperatorCode [%s]\n",pTransferSerial->OperatorCode);
		LOG("\tBankNewAccount [%s]\n",pTransferSerial->BankNewAccount);
		LOG("\tErrorMsg [%s]\n",pTransferSerial->ErrorMsg);
		LOG("\tPlateSerial [%d]\n",pTransferSerial->PlateSerial);
		LOG("\tSessionID [%d]\n",pTransferSerial->SessionID);
		LOG("\tFutureSerial [%d]\n",pTransferSerial->FutureSerial);
		LOG("\tErrorID [%d]\n",pTransferSerial->ErrorID);
		LOG("\tBankAccType [%c]\n",pTransferSerial->BankAccType);
		LOG("\tFutureAccType [%c]\n",pTransferSerial->FutureAccType);
		LOG("\tIdCardType [%c]\n",pTransferSerial->IdCardType);
		LOG("\tAvailabilityFlag [%c]\n",pTransferSerial->AvailabilityFlag);
		LOG("\tTradeAmount [%.8lf]\n",pTransferSerial->TradeAmount);
		LOG("\tCustFee [%.8lf]\n",pTransferSerial->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pTransferSerial->BrokerFee);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryTransferSerial>\n");
};

void CTraderSpi::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryAccountregister>\n");
	if (pAccountregister)
	{
		LOG("\tTradeDay [%s]\n",pAccountregister->TradeDay);
		LOG("\tBankID [%s]\n",pAccountregister->BankID);
		LOG("\tBankBranchID [%s]\n",pAccountregister->BankBranchID);
		LOG("\tBankAccount [%s]\n",pAccountregister->BankAccount);
		LOG("\tBrokerID [%s]\n",pAccountregister->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pAccountregister->BrokerBranchID);
		LOG("\tAccountID [%s]\n",pAccountregister->AccountID);
		LOG("\tIdentifiedCardNo [%s]\n",pAccountregister->IdentifiedCardNo);
		LOG("\tCustomerName [%s]\n",pAccountregister->CustomerName);
		LOG("\tCurrencyID [%s]\n",pAccountregister->CurrencyID);
		LOG("\tRegDate [%s]\n",pAccountregister->RegDate);
		LOG("\tOutDate [%s]\n",pAccountregister->OutDate);
		LOG("\tLongCustomerName [%s]\n",pAccountregister->LongCustomerName);
		LOG("\tTID [%d]\n",pAccountregister->TID);
		LOG("\tIdCardType [%c]\n",pAccountregister->IdCardType);
		LOG("\tOpenOrDestroy [%c]\n",pAccountregister->OpenOrDestroy);
		LOG("\tCustType [%c]\n",pAccountregister->CustType);
		LOG("\tBankAccType [%c]\n",pAccountregister->BankAccType);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryAccountregister>\n");
};

void CTraderSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspError>\n");
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspError>\n");
};
void CTraderSpi::OnRtnOrder(CThostFtdcOrderField *pOrder) 
{
	LOG("<OnRtnOrder>\n");
	if (pOrder)
	{
		LOG("\tBrokerID [%s]\n",pOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pOrder->InstrumentID);
		LOG("\tOrderRef [%s]\n",pOrder->OrderRef);
		LOG("\tUserID [%s]\n",pOrder->UserID);
		LOG("\tCombOffsetFlag [%s]\n",pOrder->CombOffsetFlag);
		LOG("\tCombHedgeFlag [%s]\n",pOrder->CombHedgeFlag);
		LOG("\tGTDDate [%s]\n",pOrder->GTDDate);
		LOG("\tBusinessUnit [%s]\n",pOrder->BusinessUnit);
		LOG("\tOrderLocalID [%s]\n",pOrder->OrderLocalID);
		LOG("\tExchangeID [%s]\n",pOrder->ExchangeID);
		LOG("\tParticipantID [%s]\n",pOrder->ParticipantID);
		LOG("\tClientID [%s]\n",pOrder->ClientID);
		LOG("\tExchangeInstID [%s]\n",pOrder->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pOrder->TraderID);
		LOG("\tTradingDay [%s]\n",pOrder->TradingDay);
		LOG("\tOrderSysID [%s]\n",pOrder->OrderSysID);
		LOG("\tInsertDate [%s]\n",pOrder->InsertDate);
		LOG("\tInsertTime [%s]\n",pOrder->InsertTime);
		LOG("\tActiveTime [%s]\n",pOrder->ActiveTime);
		LOG("\tSuspendTime [%s]\n",pOrder->SuspendTime);
		LOG("\tUpdateTime [%s]\n",pOrder->UpdateTime);
		LOG("\tCancelTime [%s]\n",pOrder->CancelTime);
		LOG("\tActiveTraderID [%s]\n",pOrder->ActiveTraderID);
		LOG("\tClearingPartID [%s]\n",pOrder->ClearingPartID);
		LOG("\tUserProductInfo [%s]\n",pOrder->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pOrder->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pOrder->ActiveUserID);
		LOG("\tRelativeOrderSysID [%s]\n",pOrder->RelativeOrderSysID);
		LOG("\tBranchID [%s]\n",pOrder->BranchID);
		LOG("\tInvestUnitID [%s]\n",pOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pOrder->CurrencyID);
		LOG("\tIPAddress [%s]\n",pOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pOrder->MacAddress);
		LOG("\tVolumeTotalOriginal [%d]\n",pOrder->VolumeTotalOriginal);
		LOG("\tMinVolume [%d]\n",pOrder->MinVolume);
		LOG("\tIsAutoSuspend [%d]\n",pOrder->IsAutoSuspend);
		LOG("\tRequestID [%d]\n",pOrder->RequestID);
		LOG("\tInstallID [%d]\n",pOrder->InstallID);
		LOG("\tNotifySequence [%d]\n",pOrder->NotifySequence);
		LOG("\tSettlementID [%d]\n",pOrder->SettlementID);
		LOG("\tVolumeTraded [%d]\n",pOrder->VolumeTraded);
		LOG("\tVolumeTotal [%d]\n",pOrder->VolumeTotal);
		LOG("\tSequenceNo [%d]\n",pOrder->SequenceNo);
		LOG("\tFrontID [%d]\n",pOrder->FrontID);
		LOG("\tSessionID [%d]\n",pOrder->SessionID);
		LOG("\tUserForceClose [%d]\n",pOrder->UserForceClose);
		LOG("\tBrokerOrderSeq [%d]\n",pOrder->BrokerOrderSeq);
		LOG("\tZCETotalTradedVolume [%d]\n",pOrder->ZCETotalTradedVolume);
		LOG("\tIsSwapOrder [%d]\n",pOrder->IsSwapOrder);
		LOG("\tOrderPriceType [%c]\n",pOrder->OrderPriceType);
		LOG("\tDirection [%c]\n",pOrder->Direction);
		LOG("\tTimeCondition [%c]\n",pOrder->TimeCondition);
		LOG("\tVolumeCondition [%c]\n",pOrder->VolumeCondition);
		LOG("\tContingentCondition [%c]\n",pOrder->ContingentCondition);
		LOG("\tForceCloseReason [%c]\n",pOrder->ForceCloseReason);
		LOG("\tOrderSubmitStatus [%c]\n",pOrder->OrderSubmitStatus);
		LOG("\tOrderSource [%c]\n",pOrder->OrderSource);
		LOG("\tOrderStatus [%c]\n",pOrder->OrderStatus);
		LOG("\tOrderType [%c]\n",pOrder->OrderType);
		LOG("\tLimitPrice [%.8lf]\n",pOrder->LimitPrice);
		LOG("\tStopPrice [%.8lf]\n",pOrder->StopPrice);
	}
	LOG("</OnRtnOrder>\n");
};
void CTraderSpi::OnRtnTrade(CThostFtdcTradeField *pTrade) 
{
	LOG("<OnRtnTrade>\n");
	if (pTrade)
	{
		LOG("\tBrokerID [%s]\n",pTrade->BrokerID);
		LOG("\tInvestorID [%s]\n",pTrade->InvestorID);
		LOG("\tInstrumentID [%s]\n",pTrade->InstrumentID);
		LOG("\tOrderRef [%s]\n",pTrade->OrderRef);
		LOG("\tUserID [%s]\n",pTrade->UserID);
		LOG("\tExchangeID [%s]\n",pTrade->ExchangeID);
		LOG("\tTradeID [%s]\n",pTrade->TradeID);
		LOG("\tOrderSysID [%s]\n",pTrade->OrderSysID);
		LOG("\tParticipantID [%s]\n",pTrade->ParticipantID);
		LOG("\tClientID [%s]\n",pTrade->ClientID);
		LOG("\tExchangeInstID [%s]\n",pTrade->ExchangeInstID);
		LOG("\tTradeDate [%s]\n",pTrade->TradeDate);
		LOG("\tTradeTime [%s]\n",pTrade->TradeTime);
		LOG("\tTraderID [%s]\n",pTrade->TraderID);
		LOG("\tOrderLocalID [%s]\n",pTrade->OrderLocalID);
		LOG("\tClearingPartID [%s]\n",pTrade->ClearingPartID);
		LOG("\tBusinessUnit [%s]\n",pTrade->BusinessUnit);
		LOG("\tTradingDay [%s]\n",pTrade->TradingDay);
		LOG("\tInvestUnitID [%s]\n",pTrade->InvestUnitID);
		LOG("\tVolume [%d]\n",pTrade->Volume);
		LOG("\tSequenceNo [%d]\n",pTrade->SequenceNo);
		LOG("\tSettlementID [%d]\n",pTrade->SettlementID);
		LOG("\tBrokerOrderSeq [%d]\n",pTrade->BrokerOrderSeq);
		LOG("\tDirection [%c]\n",pTrade->Direction);
		LOG("\tTradingRole [%c]\n",pTrade->TradingRole);
		LOG("\tOffsetFlag [%c]\n",pTrade->OffsetFlag);
		LOG("\tHedgeFlag [%c]\n",pTrade->HedgeFlag);
		LOG("\tTradeType [%c]\n",pTrade->TradeType);
		LOG("\tPriceSource [%c]\n",pTrade->PriceSource);
		LOG("\tTradeSource [%c]\n",pTrade->TradeSource);
		LOG("\tPrice [%.8lf]\n",pTrade->Price);
	}
	LOG("</OnRtnTrade>\n");
};
void CTraderSpi::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnOrderInsert>\n");
	if (pInputOrder)
	{
		LOG("\tBrokerID [%s]\n",pInputOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputOrder->InstrumentID);
		LOG("\tOrderRef [%s]\n",pInputOrder->OrderRef);
		LOG("\tUserID [%s]\n",pInputOrder->UserID);
		LOG("\tCombOffsetFlag [%s]\n",pInputOrder->CombOffsetFlag);
		LOG("\tCombHedgeFlag [%s]\n",pInputOrder->CombHedgeFlag);
		LOG("\tGTDDate [%s]\n",pInputOrder->GTDDate);
		LOG("\tBusinessUnit [%s]\n",pInputOrder->BusinessUnit);
		LOG("\tExchangeID [%s]\n",pInputOrder->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pInputOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pInputOrder->CurrencyID);
		LOG("\tClientID [%s]\n",pInputOrder->ClientID);
		LOG("\tIPAddress [%s]\n",pInputOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputOrder->MacAddress);
		LOG("\tVolumeTotalOriginal [%d]\n",pInputOrder->VolumeTotalOriginal);
		LOG("\tMinVolume [%d]\n",pInputOrder->MinVolume);
		LOG("\tIsAutoSuspend [%d]\n",pInputOrder->IsAutoSuspend);
		LOG("\tRequestID [%d]\n",pInputOrder->RequestID);
		LOG("\tUserForceClose [%d]\n",pInputOrder->UserForceClose);
		LOG("\tIsSwapOrder [%d]\n",pInputOrder->IsSwapOrder);
		LOG("\tOrderPriceType [%c]\n",pInputOrder->OrderPriceType);
		LOG("\tDirection [%c]\n",pInputOrder->Direction);
		LOG("\tTimeCondition [%c]\n",pInputOrder->TimeCondition);
		LOG("\tVolumeCondition [%c]\n",pInputOrder->VolumeCondition);
		LOG("\tContingentCondition [%c]\n",pInputOrder->ContingentCondition);
		LOG("\tForceCloseReason [%c]\n",pInputOrder->ForceCloseReason);
		LOG("\tLimitPrice [%.8lf]\n",pInputOrder->LimitPrice);
		LOG("\tStopPrice [%.8lf]\n",pInputOrder->StopPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnOrderInsert>\n");
};
void CTraderSpi::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnOrderAction>\n");
	if (pOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pOrderAction->InvestorID);
		LOG("\tOrderRef [%s]\n",pOrderAction->OrderRef);
		LOG("\tExchangeID [%s]\n",pOrderAction->ExchangeID);
		LOG("\tOrderSysID [%s]\n",pOrderAction->OrderSysID);
		LOG("\tActionDate [%s]\n",pOrderAction->ActionDate);
		LOG("\tActionTime [%s]\n",pOrderAction->ActionTime);
		LOG("\tTraderID [%s]\n",pOrderAction->TraderID);
		LOG("\tOrderLocalID [%s]\n",pOrderAction->OrderLocalID);
		LOG("\tActionLocalID [%s]\n",pOrderAction->ActionLocalID);
		LOG("\tParticipantID [%s]\n",pOrderAction->ParticipantID);
		LOG("\tClientID [%s]\n",pOrderAction->ClientID);
		LOG("\tBusinessUnit [%s]\n",pOrderAction->BusinessUnit);
		LOG("\tUserID [%s]\n",pOrderAction->UserID);
		LOG("\tStatusMsg [%s]\n",pOrderAction->StatusMsg);
		LOG("\tInstrumentID [%s]\n",pOrderAction->InstrumentID);
		LOG("\tBranchID [%s]\n",pOrderAction->BranchID);
		LOG("\tInvestUnitID [%s]\n",pOrderAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pOrderAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pOrderAction->MacAddress);
		LOG("\tOrderActionRef [%d]\n",pOrderAction->OrderActionRef);
		LOG("\tRequestID [%d]\n",pOrderAction->RequestID);
		LOG("\tFrontID [%d]\n",pOrderAction->FrontID);
		LOG("\tSessionID [%d]\n",pOrderAction->SessionID);
		LOG("\tVolumeChange [%d]\n",pOrderAction->VolumeChange);
		LOG("\tInstallID [%d]\n",pOrderAction->InstallID);
		LOG("\tActionFlag [%c]\n",pOrderAction->ActionFlag);
		LOG("\tOrderActionStatus [%c]\n",pOrderAction->OrderActionStatus);
		LOG("\tLimitPrice [%.8lf]\n",pOrderAction->LimitPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnOrderAction>\n");
};
void CTraderSpi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) 
{
	LOG("<OnRtnInstrumentStatus>\n");
	if (pInstrumentStatus)
	{
		LOG("\tExchangeID [%s]\n",pInstrumentStatus->ExchangeID);
		LOG("\tExchangeInstID [%s]\n",pInstrumentStatus->ExchangeInstID);
		LOG("\tSettlementGroupID [%s]\n",pInstrumentStatus->SettlementGroupID);
		LOG("\tInstrumentID [%s]\n",pInstrumentStatus->InstrumentID);
		LOG("\tEnterTime [%s]\n",pInstrumentStatus->EnterTime);
		LOG("\tTradingSegmentSN [%d]\n",pInstrumentStatus->TradingSegmentSN);
		LOG("\tInstrumentStatus [%c]\n",pInstrumentStatus->InstrumentStatus);
		LOG("\tEnterReason [%c]\n",pInstrumentStatus->EnterReason);
	}
	LOG("</OnRtnInstrumentStatus>\n");
};
void CTraderSpi::OnRtnBulletin(CThostFtdcBulletinField *pBulletin) 
{
	LOG("<OnRtnBulletin>\n");
	if (pBulletin)
	{
		LOG("\tExchangeID [%s]\n",pBulletin->ExchangeID);
		LOG("\tTradingDay [%s]\n",pBulletin->TradingDay);
		LOG("\tNewsType [%s]\n",pBulletin->NewsType);
		LOG("\tSendTime [%s]\n",pBulletin->SendTime);
		LOG("\tAbstract [%s]\n",pBulletin->Abstract);
		LOG("\tComeFrom [%s]\n",pBulletin->ComeFrom);
		LOG("\tContent [%s]\n",pBulletin->Content);
		LOG("\tURLLink [%s]\n",pBulletin->URLLink);
		LOG("\tMarketID [%s]\n",pBulletin->MarketID);
		LOG("\tBulletinID [%d]\n",pBulletin->BulletinID);
		LOG("\tSequenceNo [%d]\n",pBulletin->SequenceNo);
		LOG("\tNewsUrgency [%c]\n",pBulletin->NewsUrgency);
	}
	LOG("</OnRtnBulletin>\n");
};
void CTraderSpi::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) 
{
	LOG("<OnRtnTradingNotice>\n");
	if (pTradingNoticeInfo)
	{
		LOG("\tBrokerID [%s]\n",pTradingNoticeInfo->BrokerID);
		LOG("\tInvestorID [%s]\n",pTradingNoticeInfo->InvestorID);
		LOG("\tSendTime [%s]\n",pTradingNoticeInfo->SendTime);
		LOG("\tFieldContent [%s]\n",pTradingNoticeInfo->FieldContent);
		LOG("\tInvestUnitID [%s]\n",pTradingNoticeInfo->InvestUnitID);
		LOG("\tSequenceNo [%d]\n",pTradingNoticeInfo->SequenceNo);
		LOG("\tSequenceSeries [%d]\n",pTradingNoticeInfo->SequenceSeries);
	}
	LOG("</OnRtnTradingNotice>\n");
};
void CTraderSpi::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) 
{
	LOG("<OnRtnErrorConditionalOrder>\n");
	if (pErrorConditionalOrder)
	{
		LOG("\tBrokerID [%s]\n",pErrorConditionalOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pErrorConditionalOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pErrorConditionalOrder->InstrumentID);
		LOG("\tOrderRef [%s]\n",pErrorConditionalOrder->OrderRef);
		LOG("\tUserID [%s]\n",pErrorConditionalOrder->UserID);
		LOG("\tCombOffsetFlag [%s]\n",pErrorConditionalOrder->CombOffsetFlag);
		LOG("\tCombHedgeFlag [%s]\n",pErrorConditionalOrder->CombHedgeFlag);
		LOG("\tGTDDate [%s]\n",pErrorConditionalOrder->GTDDate);
		LOG("\tBusinessUnit [%s]\n",pErrorConditionalOrder->BusinessUnit);
		LOG("\tOrderLocalID [%s]\n",pErrorConditionalOrder->OrderLocalID);
		LOG("\tExchangeID [%s]\n",pErrorConditionalOrder->ExchangeID);
		LOG("\tParticipantID [%s]\n",pErrorConditionalOrder->ParticipantID);
		LOG("\tClientID [%s]\n",pErrorConditionalOrder->ClientID);
		LOG("\tExchangeInstID [%s]\n",pErrorConditionalOrder->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pErrorConditionalOrder->TraderID);
		LOG("\tTradingDay [%s]\n",pErrorConditionalOrder->TradingDay);
		LOG("\tOrderSysID [%s]\n",pErrorConditionalOrder->OrderSysID);
		LOG("\tInsertDate [%s]\n",pErrorConditionalOrder->InsertDate);
		LOG("\tInsertTime [%s]\n",pErrorConditionalOrder->InsertTime);
		LOG("\tActiveTime [%s]\n",pErrorConditionalOrder->ActiveTime);
		LOG("\tSuspendTime [%s]\n",pErrorConditionalOrder->SuspendTime);
		LOG("\tUpdateTime [%s]\n",pErrorConditionalOrder->UpdateTime);
		LOG("\tCancelTime [%s]\n",pErrorConditionalOrder->CancelTime);
		LOG("\tActiveTraderID [%s]\n",pErrorConditionalOrder->ActiveTraderID);
		LOG("\tClearingPartID [%s]\n",pErrorConditionalOrder->ClearingPartID);
		LOG("\tUserProductInfo [%s]\n",pErrorConditionalOrder->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pErrorConditionalOrder->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pErrorConditionalOrder->ActiveUserID);
		LOG("\tRelativeOrderSysID [%s]\n",pErrorConditionalOrder->RelativeOrderSysID);
		LOG("\tErrorMsg [%s]\n",pErrorConditionalOrder->ErrorMsg);
		LOG("\tBranchID [%s]\n",pErrorConditionalOrder->BranchID);
		LOG("\tInvestUnitID [%s]\n",pErrorConditionalOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pErrorConditionalOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pErrorConditionalOrder->CurrencyID);
		LOG("\tIPAddress [%s]\n",pErrorConditionalOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pErrorConditionalOrder->MacAddress);
		LOG("\tVolumeTotalOriginal [%d]\n",pErrorConditionalOrder->VolumeTotalOriginal);
		LOG("\tMinVolume [%d]\n",pErrorConditionalOrder->MinVolume);
		LOG("\tIsAutoSuspend [%d]\n",pErrorConditionalOrder->IsAutoSuspend);
		LOG("\tRequestID [%d]\n",pErrorConditionalOrder->RequestID);
		LOG("\tInstallID [%d]\n",pErrorConditionalOrder->InstallID);
		LOG("\tNotifySequence [%d]\n",pErrorConditionalOrder->NotifySequence);
		LOG("\tSettlementID [%d]\n",pErrorConditionalOrder->SettlementID);
		LOG("\tVolumeTraded [%d]\n",pErrorConditionalOrder->VolumeTraded);
		LOG("\tVolumeTotal [%d]\n",pErrorConditionalOrder->VolumeTotal);
		LOG("\tSequenceNo [%d]\n",pErrorConditionalOrder->SequenceNo);
		LOG("\tFrontID [%d]\n",pErrorConditionalOrder->FrontID);
		LOG("\tSessionID [%d]\n",pErrorConditionalOrder->SessionID);
		LOG("\tUserForceClose [%d]\n",pErrorConditionalOrder->UserForceClose);
		LOG("\tBrokerOrderSeq [%d]\n",pErrorConditionalOrder->BrokerOrderSeq);
		LOG("\tZCETotalTradedVolume [%d]\n",pErrorConditionalOrder->ZCETotalTradedVolume);
		LOG("\tErrorID [%d]\n",pErrorConditionalOrder->ErrorID);
		LOG("\tIsSwapOrder [%d]\n",pErrorConditionalOrder->IsSwapOrder);
		LOG("\tOrderPriceType [%c]\n",pErrorConditionalOrder->OrderPriceType);
		LOG("\tDirection [%c]\n",pErrorConditionalOrder->Direction);
		LOG("\tTimeCondition [%c]\n",pErrorConditionalOrder->TimeCondition);
		LOG("\tVolumeCondition [%c]\n",pErrorConditionalOrder->VolumeCondition);
		LOG("\tContingentCondition [%c]\n",pErrorConditionalOrder->ContingentCondition);
		LOG("\tForceCloseReason [%c]\n",pErrorConditionalOrder->ForceCloseReason);
		LOG("\tOrderSubmitStatus [%c]\n",pErrorConditionalOrder->OrderSubmitStatus);
		LOG("\tOrderSource [%c]\n",pErrorConditionalOrder->OrderSource);
		LOG("\tOrderStatus [%c]\n",pErrorConditionalOrder->OrderStatus);
		LOG("\tOrderType [%c]\n",pErrorConditionalOrder->OrderType);
		LOG("\tLimitPrice [%.8lf]\n",pErrorConditionalOrder->LimitPrice);
		LOG("\tStopPrice [%.8lf]\n",pErrorConditionalOrder->StopPrice);
	}
	LOG("</OnRtnErrorConditionalOrder>\n");
};
void CTraderSpi::OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) 
{
	LOG("<OnRtnExecOrder>\n");
	if (pExecOrder)
	{
		LOG("\tBrokerID [%s]\n",pExecOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pExecOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pExecOrder->InstrumentID);
		LOG("\tExecOrderRef [%s]\n",pExecOrder->ExecOrderRef);
		LOG("\tUserID [%s]\n",pExecOrder->UserID);
		LOG("\tBusinessUnit [%s]\n",pExecOrder->BusinessUnit);
		LOG("\tExecOrderLocalID [%s]\n",pExecOrder->ExecOrderLocalID);
		LOG("\tExchangeID [%s]\n",pExecOrder->ExchangeID);
		LOG("\tParticipantID [%s]\n",pExecOrder->ParticipantID);
		LOG("\tClientID [%s]\n",pExecOrder->ClientID);
		LOG("\tExchangeInstID [%s]\n",pExecOrder->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pExecOrder->TraderID);
		LOG("\tTradingDay [%s]\n",pExecOrder->TradingDay);
		LOG("\tExecOrderSysID [%s]\n",pExecOrder->ExecOrderSysID);
		LOG("\tInsertDate [%s]\n",pExecOrder->InsertDate);
		LOG("\tInsertTime [%s]\n",pExecOrder->InsertTime);
		LOG("\tCancelTime [%s]\n",pExecOrder->CancelTime);
		LOG("\tClearingPartID [%s]\n",pExecOrder->ClearingPartID);
		LOG("\tUserProductInfo [%s]\n",pExecOrder->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pExecOrder->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pExecOrder->ActiveUserID);
		LOG("\tBranchID [%s]\n",pExecOrder->BranchID);
		LOG("\tInvestUnitID [%s]\n",pExecOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pExecOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pExecOrder->CurrencyID);
		LOG("\tIPAddress [%s]\n",pExecOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pExecOrder->MacAddress);
		LOG("\tVolume [%d]\n",pExecOrder->Volume);
		LOG("\tRequestID [%d]\n",pExecOrder->RequestID);
		LOG("\tInstallID [%d]\n",pExecOrder->InstallID);
		LOG("\tNotifySequence [%d]\n",pExecOrder->NotifySequence);
		LOG("\tSettlementID [%d]\n",pExecOrder->SettlementID);
		LOG("\tSequenceNo [%d]\n",pExecOrder->SequenceNo);
		LOG("\tFrontID [%d]\n",pExecOrder->FrontID);
		LOG("\tSessionID [%d]\n",pExecOrder->SessionID);
		LOG("\tBrokerExecOrderSeq [%d]\n",pExecOrder->BrokerExecOrderSeq);
		LOG("\tOffsetFlag [%c]\n",pExecOrder->OffsetFlag);
		LOG("\tHedgeFlag [%c]\n",pExecOrder->HedgeFlag);
		LOG("\tActionType [%c]\n",pExecOrder->ActionType);
		LOG("\tPosiDirection [%c]\n",pExecOrder->PosiDirection);
		LOG("\tReservePositionFlag [%c]\n",pExecOrder->ReservePositionFlag);
		LOG("\tCloseFlag [%c]\n",pExecOrder->CloseFlag);
		LOG("\tOrderSubmitStatus [%c]\n",pExecOrder->OrderSubmitStatus);
		LOG("\tExecResult [%c]\n",pExecOrder->ExecResult);
	}
	LOG("</OnRtnExecOrder>\n");
};
void CTraderSpi::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnExecOrderInsert>\n");
	if (pInputExecOrder)
	{
		LOG("\tBrokerID [%s]\n",pInputExecOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputExecOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputExecOrder->InstrumentID);
		LOG("\tExecOrderRef [%s]\n",pInputExecOrder->ExecOrderRef);
		LOG("\tUserID [%s]\n",pInputExecOrder->UserID);
		LOG("\tBusinessUnit [%s]\n",pInputExecOrder->BusinessUnit);
		LOG("\tExchangeID [%s]\n",pInputExecOrder->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputExecOrder->InvestUnitID);
		LOG("\tAccountID [%s]\n",pInputExecOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pInputExecOrder->CurrencyID);
		LOG("\tClientID [%s]\n",pInputExecOrder->ClientID);
		LOG("\tIPAddress [%s]\n",pInputExecOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputExecOrder->MacAddress);
		LOG("\tVolume [%d]\n",pInputExecOrder->Volume);
		LOG("\tRequestID [%d]\n",pInputExecOrder->RequestID);
		LOG("\tOffsetFlag [%c]\n",pInputExecOrder->OffsetFlag);
		LOG("\tHedgeFlag [%c]\n",pInputExecOrder->HedgeFlag);
		LOG("\tActionType [%c]\n",pInputExecOrder->ActionType);
		LOG("\tPosiDirection [%c]\n",pInputExecOrder->PosiDirection);
		LOG("\tReservePositionFlag [%c]\n",pInputExecOrder->ReservePositionFlag);
		LOG("\tCloseFlag [%c]\n",pInputExecOrder->CloseFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnExecOrderInsert>\n");
};
void CTraderSpi::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnExecOrderAction>\n");
	if (pExecOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pExecOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pExecOrderAction->InvestorID);
		LOG("\tExecOrderRef [%s]\n",pExecOrderAction->ExecOrderRef);
		LOG("\tExchangeID [%s]\n",pExecOrderAction->ExchangeID);
		LOG("\tExecOrderSysID [%s]\n",pExecOrderAction->ExecOrderSysID);
		LOG("\tActionDate [%s]\n",pExecOrderAction->ActionDate);
		LOG("\tActionTime [%s]\n",pExecOrderAction->ActionTime);
		LOG("\tTraderID [%s]\n",pExecOrderAction->TraderID);
		LOG("\tExecOrderLocalID [%s]\n",pExecOrderAction->ExecOrderLocalID);
		LOG("\tActionLocalID [%s]\n",pExecOrderAction->ActionLocalID);
		LOG("\tParticipantID [%s]\n",pExecOrderAction->ParticipantID);
		LOG("\tClientID [%s]\n",pExecOrderAction->ClientID);
		LOG("\tBusinessUnit [%s]\n",pExecOrderAction->BusinessUnit);
		LOG("\tUserID [%s]\n",pExecOrderAction->UserID);
		LOG("\tStatusMsg [%s]\n",pExecOrderAction->StatusMsg);
		LOG("\tInstrumentID [%s]\n",pExecOrderAction->InstrumentID);
		LOG("\tBranchID [%s]\n",pExecOrderAction->BranchID);
		LOG("\tInvestUnitID [%s]\n",pExecOrderAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pExecOrderAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pExecOrderAction->MacAddress);
		LOG("\tExecOrderActionRef [%d]\n",pExecOrderAction->ExecOrderActionRef);
		LOG("\tRequestID [%d]\n",pExecOrderAction->RequestID);
		LOG("\tFrontID [%d]\n",pExecOrderAction->FrontID);
		LOG("\tSessionID [%d]\n",pExecOrderAction->SessionID);
		LOG("\tInstallID [%d]\n",pExecOrderAction->InstallID);
		LOG("\tActionFlag [%c]\n",pExecOrderAction->ActionFlag);
		LOG("\tOrderActionStatus [%c]\n",pExecOrderAction->OrderActionStatus);
		LOG("\tActionType [%c]\n",pExecOrderAction->ActionType);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnExecOrderAction>\n");
};
void CTraderSpi::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnForQuoteInsert>\n");
	if (pInputForQuote)
	{
		LOG("\tBrokerID [%s]\n",pInputForQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputForQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputForQuote->InstrumentID);
		LOG("\tForQuoteRef [%s]\n",pInputForQuote->ForQuoteRef);
		LOG("\tUserID [%s]\n",pInputForQuote->UserID);
		LOG("\tExchangeID [%s]\n",pInputForQuote->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputForQuote->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pInputForQuote->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputForQuote->MacAddress);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnForQuoteInsert>\n");
};
void CTraderSpi::OnRtnQuote(CThostFtdcQuoteField *pQuote) 
{
	LOG("<OnRtnQuote>\n");
	if (pQuote)
	{
		LOG("\tBrokerID [%s]\n",pQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQuote->InstrumentID);
		LOG("\tQuoteRef [%s]\n",pQuote->QuoteRef);
		LOG("\tUserID [%s]\n",pQuote->UserID);
		LOG("\tBusinessUnit [%s]\n",pQuote->BusinessUnit);
		LOG("\tQuoteLocalID [%s]\n",pQuote->QuoteLocalID);
		LOG("\tExchangeID [%s]\n",pQuote->ExchangeID);
		LOG("\tParticipantID [%s]\n",pQuote->ParticipantID);
		LOG("\tClientID [%s]\n",pQuote->ClientID);
		LOG("\tExchangeInstID [%s]\n",pQuote->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pQuote->TraderID);
		LOG("\tTradingDay [%s]\n",pQuote->TradingDay);
		LOG("\tQuoteSysID [%s]\n",pQuote->QuoteSysID);
		LOG("\tInsertDate [%s]\n",pQuote->InsertDate);
		LOG("\tInsertTime [%s]\n",pQuote->InsertTime);
		LOG("\tCancelTime [%s]\n",pQuote->CancelTime);
		LOG("\tClearingPartID [%s]\n",pQuote->ClearingPartID);
		LOG("\tAskOrderSysID [%s]\n",pQuote->AskOrderSysID);
		LOG("\tBidOrderSysID [%s]\n",pQuote->BidOrderSysID);
		LOG("\tUserProductInfo [%s]\n",pQuote->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pQuote->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pQuote->ActiveUserID);
		LOG("\tAskOrderRef [%s]\n",pQuote->AskOrderRef);
		LOG("\tBidOrderRef [%s]\n",pQuote->BidOrderRef);
		LOG("\tForQuoteSysID [%s]\n",pQuote->ForQuoteSysID);
		LOG("\tBranchID [%s]\n",pQuote->BranchID);
		LOG("\tInvestUnitID [%s]\n",pQuote->InvestUnitID);
		LOG("\tAccountID [%s]\n",pQuote->AccountID);
		LOG("\tCurrencyID [%s]\n",pQuote->CurrencyID);
		LOG("\tIPAddress [%s]\n",pQuote->IPAddress);
		LOG("\tMacAddress [%s]\n",pQuote->MacAddress);
		LOG("\tAskVolume [%d]\n",pQuote->AskVolume);
		LOG("\tBidVolume [%d]\n",pQuote->BidVolume);
		LOG("\tRequestID [%d]\n",pQuote->RequestID);
		LOG("\tInstallID [%d]\n",pQuote->InstallID);
		LOG("\tNotifySequence [%d]\n",pQuote->NotifySequence);
		LOG("\tSettlementID [%d]\n",pQuote->SettlementID);
		LOG("\tSequenceNo [%d]\n",pQuote->SequenceNo);
		LOG("\tFrontID [%d]\n",pQuote->FrontID);
		LOG("\tSessionID [%d]\n",pQuote->SessionID);
		LOG("\tBrokerQuoteSeq [%d]\n",pQuote->BrokerQuoteSeq);
		LOG("\tAskOffsetFlag [%c]\n",pQuote->AskOffsetFlag);
		LOG("\tBidOffsetFlag [%c]\n",pQuote->BidOffsetFlag);
		LOG("\tAskHedgeFlag [%c]\n",pQuote->AskHedgeFlag);
		LOG("\tBidHedgeFlag [%c]\n",pQuote->BidHedgeFlag);
		LOG("\tOrderSubmitStatus [%c]\n",pQuote->OrderSubmitStatus);
		LOG("\tQuoteStatus [%c]\n",pQuote->QuoteStatus);
		LOG("\tAskPrice [%.8lf]\n",pQuote->AskPrice);
		LOG("\tBidPrice [%.8lf]\n",pQuote->BidPrice);
	}
	LOG("</OnRtnQuote>\n");
};
void CTraderSpi::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnQuoteInsert>\n");
	if (pInputQuote)
	{
		LOG("\tBrokerID [%s]\n",pInputQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputQuote->InstrumentID);
		LOG("\tQuoteRef [%s]\n",pInputQuote->QuoteRef);
		LOG("\tUserID [%s]\n",pInputQuote->UserID);
		LOG("\tBusinessUnit [%s]\n",pInputQuote->BusinessUnit);
		LOG("\tAskOrderRef [%s]\n",pInputQuote->AskOrderRef);
		LOG("\tBidOrderRef [%s]\n",pInputQuote->BidOrderRef);
		LOG("\tForQuoteSysID [%s]\n",pInputQuote->ForQuoteSysID);
		LOG("\tExchangeID [%s]\n",pInputQuote->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputQuote->InvestUnitID);
		LOG("\tClientID [%s]\n",pInputQuote->ClientID);
		LOG("\tIPAddress [%s]\n",pInputQuote->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputQuote->MacAddress);
		LOG("\tAskVolume [%d]\n",pInputQuote->AskVolume);
		LOG("\tBidVolume [%d]\n",pInputQuote->BidVolume);
		LOG("\tRequestID [%d]\n",pInputQuote->RequestID);
		LOG("\tAskOffsetFlag [%c]\n",pInputQuote->AskOffsetFlag);
		LOG("\tBidOffsetFlag [%c]\n",pInputQuote->BidOffsetFlag);
		LOG("\tAskHedgeFlag [%c]\n",pInputQuote->AskHedgeFlag);
		LOG("\tBidHedgeFlag [%c]\n",pInputQuote->BidHedgeFlag);
		LOG("\tAskPrice [%.8lf]\n",pInputQuote->AskPrice);
		LOG("\tBidPrice [%.8lf]\n",pInputQuote->BidPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnQuoteInsert>\n");
};
void CTraderSpi::OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnQuoteAction>\n");
	if (pQuoteAction)
	{
		LOG("\tBrokerID [%s]\n",pQuoteAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pQuoteAction->InvestorID);
		LOG("\tQuoteRef [%s]\n",pQuoteAction->QuoteRef);
		LOG("\tExchangeID [%s]\n",pQuoteAction->ExchangeID);
		LOG("\tQuoteSysID [%s]\n",pQuoteAction->QuoteSysID);
		LOG("\tActionDate [%s]\n",pQuoteAction->ActionDate);
		LOG("\tActionTime [%s]\n",pQuoteAction->ActionTime);
		LOG("\tTraderID [%s]\n",pQuoteAction->TraderID);
		LOG("\tQuoteLocalID [%s]\n",pQuoteAction->QuoteLocalID);
		LOG("\tActionLocalID [%s]\n",pQuoteAction->ActionLocalID);
		LOG("\tParticipantID [%s]\n",pQuoteAction->ParticipantID);
		LOG("\tClientID [%s]\n",pQuoteAction->ClientID);
		LOG("\tBusinessUnit [%s]\n",pQuoteAction->BusinessUnit);
		LOG("\tUserID [%s]\n",pQuoteAction->UserID);
		LOG("\tStatusMsg [%s]\n",pQuoteAction->StatusMsg);
		LOG("\tInstrumentID [%s]\n",pQuoteAction->InstrumentID);
		LOG("\tBranchID [%s]\n",pQuoteAction->BranchID);
		LOG("\tInvestUnitID [%s]\n",pQuoteAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pQuoteAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pQuoteAction->MacAddress);
		LOG("\tQuoteActionRef [%d]\n",pQuoteAction->QuoteActionRef);
		LOG("\tRequestID [%d]\n",pQuoteAction->RequestID);
		LOG("\tFrontID [%d]\n",pQuoteAction->FrontID);
		LOG("\tSessionID [%d]\n",pQuoteAction->SessionID);
		LOG("\tInstallID [%d]\n",pQuoteAction->InstallID);
		LOG("\tActionFlag [%c]\n",pQuoteAction->ActionFlag);
		LOG("\tOrderActionStatus [%c]\n",pQuoteAction->OrderActionStatus);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnQuoteAction>\n");
};
void CTraderSpi::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) 
{
	LOG("<OnRtnForQuoteRsp>\n");
	if (pForQuoteRsp)
	{
		LOG("\tTradingDay [%s]\n",pForQuoteRsp->TradingDay);
		LOG("\tInstrumentID [%s]\n",pForQuoteRsp->InstrumentID);
		LOG("\tForQuoteSysID [%s]\n",pForQuoteRsp->ForQuoteSysID);
		LOG("\tForQuoteTime [%s]\n",pForQuoteRsp->ForQuoteTime);
		LOG("\tActionDay [%s]\n",pForQuoteRsp->ActionDay);
		LOG("\tExchangeID [%s]\n",pForQuoteRsp->ExchangeID);
	}
	LOG("</OnRtnForQuoteRsp>\n");
};
void CTraderSpi::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) 
{
	LOG("<OnRtnCFMMCTradingAccountToken>\n");
	if (pCFMMCTradingAccountToken)
	{
		LOG("\tBrokerID [%s]\n",pCFMMCTradingAccountToken->BrokerID);
		LOG("\tParticipantID [%s]\n",pCFMMCTradingAccountToken->ParticipantID);
		LOG("\tAccountID [%s]\n",pCFMMCTradingAccountToken->AccountID);
		LOG("\tToken [%s]\n",pCFMMCTradingAccountToken->Token);
		LOG("\tKeyID [%d]\n",pCFMMCTradingAccountToken->KeyID);
	}
	LOG("</OnRtnCFMMCTradingAccountToken>\n");
};
void CTraderSpi::OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnBatchOrderAction>\n");
	if (pBatchOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pBatchOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pBatchOrderAction->InvestorID);
		LOG("\tExchangeID [%s]\n",pBatchOrderAction->ExchangeID);
		LOG("\tActionDate [%s]\n",pBatchOrderAction->ActionDate);
		LOG("\tActionTime [%s]\n",pBatchOrderAction->ActionTime);
		LOG("\tTraderID [%s]\n",pBatchOrderAction->TraderID);
		LOG("\tActionLocalID [%s]\n",pBatchOrderAction->ActionLocalID);
		LOG("\tParticipantID [%s]\n",pBatchOrderAction->ParticipantID);
		LOG("\tClientID [%s]\n",pBatchOrderAction->ClientID);
		LOG("\tBusinessUnit [%s]\n",pBatchOrderAction->BusinessUnit);
		LOG("\tUserID [%s]\n",pBatchOrderAction->UserID);
		LOG("\tStatusMsg [%s]\n",pBatchOrderAction->StatusMsg);
		LOG("\tInvestUnitID [%s]\n",pBatchOrderAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pBatchOrderAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pBatchOrderAction->MacAddress);
		LOG("\tOrderActionRef [%d]\n",pBatchOrderAction->OrderActionRef);
		LOG("\tRequestID [%d]\n",pBatchOrderAction->RequestID);
		LOG("\tFrontID [%d]\n",pBatchOrderAction->FrontID);
		LOG("\tSessionID [%d]\n",pBatchOrderAction->SessionID);
		LOG("\tInstallID [%d]\n",pBatchOrderAction->InstallID);
		LOG("\tOrderActionStatus [%c]\n",pBatchOrderAction->OrderActionStatus);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnBatchOrderAction>\n");
};
void CTraderSpi::OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose) 
{
	LOG("<OnRtnOptionSelfClose>\n");
	if (pOptionSelfClose)
	{
		LOG("\tBrokerID [%s]\n",pOptionSelfClose->BrokerID);
		LOG("\tInvestorID [%s]\n",pOptionSelfClose->InvestorID);
		LOG("\tInstrumentID [%s]\n",pOptionSelfClose->InstrumentID);
		LOG("\tOptionSelfCloseRef [%s]\n",pOptionSelfClose->OptionSelfCloseRef);
		LOG("\tUserID [%s]\n",pOptionSelfClose->UserID);
		LOG("\tBusinessUnit [%s]\n",pOptionSelfClose->BusinessUnit);
		LOG("\tOptionSelfCloseLocalID [%s]\n",pOptionSelfClose->OptionSelfCloseLocalID);
		LOG("\tExchangeID [%s]\n",pOptionSelfClose->ExchangeID);
		LOG("\tParticipantID [%s]\n",pOptionSelfClose->ParticipantID);
		LOG("\tClientID [%s]\n",pOptionSelfClose->ClientID);
		LOG("\tExchangeInstID [%s]\n",pOptionSelfClose->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pOptionSelfClose->TraderID);
		LOG("\tTradingDay [%s]\n",pOptionSelfClose->TradingDay);
		LOG("\tOptionSelfCloseSysID [%s]\n",pOptionSelfClose->OptionSelfCloseSysID);
		LOG("\tInsertDate [%s]\n",pOptionSelfClose->InsertDate);
		LOG("\tInsertTime [%s]\n",pOptionSelfClose->InsertTime);
		LOG("\tCancelTime [%s]\n",pOptionSelfClose->CancelTime);
		LOG("\tClearingPartID [%s]\n",pOptionSelfClose->ClearingPartID);
		LOG("\tUserProductInfo [%s]\n",pOptionSelfClose->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pOptionSelfClose->StatusMsg);
		LOG("\tActiveUserID [%s]\n",pOptionSelfClose->ActiveUserID);
		LOG("\tBranchID [%s]\n",pOptionSelfClose->BranchID);
		LOG("\tInvestUnitID [%s]\n",pOptionSelfClose->InvestUnitID);
		LOG("\tAccountID [%s]\n",pOptionSelfClose->AccountID);
		LOG("\tCurrencyID [%s]\n",pOptionSelfClose->CurrencyID);
		LOG("\tIPAddress [%s]\n",pOptionSelfClose->IPAddress);
		LOG("\tMacAddress [%s]\n",pOptionSelfClose->MacAddress);
		LOG("\tVolume [%d]\n",pOptionSelfClose->Volume);
		LOG("\tRequestID [%d]\n",pOptionSelfClose->RequestID);
		LOG("\tInstallID [%d]\n",pOptionSelfClose->InstallID);
		LOG("\tNotifySequence [%d]\n",pOptionSelfClose->NotifySequence);
		LOG("\tSettlementID [%d]\n",pOptionSelfClose->SettlementID);
		LOG("\tSequenceNo [%d]\n",pOptionSelfClose->SequenceNo);
		LOG("\tFrontID [%d]\n",pOptionSelfClose->FrontID);
		LOG("\tSessionID [%d]\n",pOptionSelfClose->SessionID);
		LOG("\tBrokerOptionSelfCloseSeq [%d]\n",pOptionSelfClose->BrokerOptionSelfCloseSeq);
		LOG("\tHedgeFlag [%c]\n",pOptionSelfClose->HedgeFlag);
		LOG("\tOptSelfCloseFlag [%c]\n",pOptionSelfClose->OptSelfCloseFlag);
		LOG("\tOrderSubmitStatus [%c]\n",pOptionSelfClose->OrderSubmitStatus);
		LOG("\tExecResult [%c]\n",pOptionSelfClose->ExecResult);
	}
	LOG("</OnRtnOptionSelfClose>\n");
};
void CTraderSpi::OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnOptionSelfCloseInsert>\n");
	if (pInputOptionSelfClose)
	{
		LOG("\tBrokerID [%s]\n",pInputOptionSelfClose->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputOptionSelfClose->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputOptionSelfClose->InstrumentID);
		LOG("\tOptionSelfCloseRef [%s]\n",pInputOptionSelfClose->OptionSelfCloseRef);
		LOG("\tUserID [%s]\n",pInputOptionSelfClose->UserID);
		LOG("\tBusinessUnit [%s]\n",pInputOptionSelfClose->BusinessUnit);
		LOG("\tExchangeID [%s]\n",pInputOptionSelfClose->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pInputOptionSelfClose->InvestUnitID);
		LOG("\tAccountID [%s]\n",pInputOptionSelfClose->AccountID);
		LOG("\tCurrencyID [%s]\n",pInputOptionSelfClose->CurrencyID);
		LOG("\tClientID [%s]\n",pInputOptionSelfClose->ClientID);
		LOG("\tIPAddress [%s]\n",pInputOptionSelfClose->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputOptionSelfClose->MacAddress);
		LOG("\tVolume [%d]\n",pInputOptionSelfClose->Volume);
		LOG("\tRequestID [%d]\n",pInputOptionSelfClose->RequestID);
		LOG("\tHedgeFlag [%c]\n",pInputOptionSelfClose->HedgeFlag);
		LOG("\tOptSelfCloseFlag [%c]\n",pInputOptionSelfClose->OptSelfCloseFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnOptionSelfCloseInsert>\n");
};
void CTraderSpi::OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnOptionSelfCloseAction>\n");
	if (pOptionSelfCloseAction)
	{
		LOG("\tBrokerID [%s]\n",pOptionSelfCloseAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pOptionSelfCloseAction->InvestorID);
		LOG("\tOptionSelfCloseRef [%s]\n",pOptionSelfCloseAction->OptionSelfCloseRef);
		LOG("\tExchangeID [%s]\n",pOptionSelfCloseAction->ExchangeID);
		LOG("\tOptionSelfCloseSysID [%s]\n",pOptionSelfCloseAction->OptionSelfCloseSysID);
		LOG("\tActionDate [%s]\n",pOptionSelfCloseAction->ActionDate);
		LOG("\tActionTime [%s]\n",pOptionSelfCloseAction->ActionTime);
		LOG("\tTraderID [%s]\n",pOptionSelfCloseAction->TraderID);
		LOG("\tOptionSelfCloseLocalID [%s]\n",pOptionSelfCloseAction->OptionSelfCloseLocalID);
		LOG("\tActionLocalID [%s]\n",pOptionSelfCloseAction->ActionLocalID);
		LOG("\tParticipantID [%s]\n",pOptionSelfCloseAction->ParticipantID);
		LOG("\tClientID [%s]\n",pOptionSelfCloseAction->ClientID);
		LOG("\tBusinessUnit [%s]\n",pOptionSelfCloseAction->BusinessUnit);
		LOG("\tUserID [%s]\n",pOptionSelfCloseAction->UserID);
		LOG("\tStatusMsg [%s]\n",pOptionSelfCloseAction->StatusMsg);
		LOG("\tInstrumentID [%s]\n",pOptionSelfCloseAction->InstrumentID);
		LOG("\tBranchID [%s]\n",pOptionSelfCloseAction->BranchID);
		LOG("\tInvestUnitID [%s]\n",pOptionSelfCloseAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pOptionSelfCloseAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pOptionSelfCloseAction->MacAddress);
		LOG("\tOptionSelfCloseActionRef [%d]\n",pOptionSelfCloseAction->OptionSelfCloseActionRef);
		LOG("\tRequestID [%d]\n",pOptionSelfCloseAction->RequestID);
		LOG("\tFrontID [%d]\n",pOptionSelfCloseAction->FrontID);
		LOG("\tSessionID [%d]\n",pOptionSelfCloseAction->SessionID);
		LOG("\tInstallID [%d]\n",pOptionSelfCloseAction->InstallID);
		LOG("\tActionFlag [%c]\n",pOptionSelfCloseAction->ActionFlag);
		LOG("\tOrderActionStatus [%c]\n",pOptionSelfCloseAction->OrderActionStatus);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnOptionSelfCloseAction>\n");
};
void CTraderSpi::OnRtnCombAction(CThostFtdcCombActionField *pCombAction) 
{
	LOG("<OnRtnCombAction>\n");
	if (pCombAction)
	{
		LOG("\tBrokerID [%s]\n",pCombAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pCombAction->InvestorID);
		LOG("\tInstrumentID [%s]\n",pCombAction->InstrumentID);
		LOG("\tCombActionRef [%s]\n",pCombAction->CombActionRef);
		LOG("\tUserID [%s]\n",pCombAction->UserID);
		LOG("\tActionLocalID [%s]\n",pCombAction->ActionLocalID);
		LOG("\tExchangeID [%s]\n",pCombAction->ExchangeID);
		LOG("\tParticipantID [%s]\n",pCombAction->ParticipantID);
		LOG("\tClientID [%s]\n",pCombAction->ClientID);
		LOG("\tExchangeInstID [%s]\n",pCombAction->ExchangeInstID);
		LOG("\tTraderID [%s]\n",pCombAction->TraderID);
		LOG("\tTradingDay [%s]\n",pCombAction->TradingDay);
		LOG("\tUserProductInfo [%s]\n",pCombAction->UserProductInfo);
		LOG("\tStatusMsg [%s]\n",pCombAction->StatusMsg);
		LOG("\tIPAddress [%s]\n",pCombAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pCombAction->MacAddress);
		LOG("\tComTradeID [%s]\n",pCombAction->ComTradeID);
		LOG("\tBranchID [%s]\n",pCombAction->BranchID);
		LOG("\tInvestUnitID [%s]\n",pCombAction->InvestUnitID);
		LOG("\tVolume [%d]\n",pCombAction->Volume);
		LOG("\tInstallID [%d]\n",pCombAction->InstallID);
		LOG("\tNotifySequence [%d]\n",pCombAction->NotifySequence);
		LOG("\tSettlementID [%d]\n",pCombAction->SettlementID);
		LOG("\tSequenceNo [%d]\n",pCombAction->SequenceNo);
		LOG("\tFrontID [%d]\n",pCombAction->FrontID);
		LOG("\tSessionID [%d]\n",pCombAction->SessionID);
		LOG("\tDirection [%c]\n",pCombAction->Direction);
		LOG("\tCombDirection [%c]\n",pCombAction->CombDirection);
		LOG("\tHedgeFlag [%c]\n",pCombAction->HedgeFlag);
		LOG("\tActionStatus [%c]\n",pCombAction->ActionStatus);
	}
	LOG("</OnRtnCombAction>\n");
};
void CTraderSpi::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnCombActionInsert>\n");
	if (pInputCombAction)
	{
		LOG("\tBrokerID [%s]\n",pInputCombAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pInputCombAction->InvestorID);
		LOG("\tInstrumentID [%s]\n",pInputCombAction->InstrumentID);
		LOG("\tCombActionRef [%s]\n",pInputCombAction->CombActionRef);
		LOG("\tUserID [%s]\n",pInputCombAction->UserID);
		LOG("\tExchangeID [%s]\n",pInputCombAction->ExchangeID);
		LOG("\tIPAddress [%s]\n",pInputCombAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pInputCombAction->MacAddress);
		LOG("\tInvestUnitID [%s]\n",pInputCombAction->InvestUnitID);
		LOG("\tVolume [%d]\n",pInputCombAction->Volume);
		LOG("\tDirection [%c]\n",pInputCombAction->Direction);
		LOG("\tCombDirection [%c]\n",pInputCombAction->CombDirection);
		LOG("\tHedgeFlag [%c]\n",pInputCombAction->HedgeFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnCombActionInsert>\n");
};
void CTraderSpi::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryContractBank>\n");
	if (pContractBank)
	{
		LOG("\tBrokerID [%s]\n",pContractBank->BrokerID);
		LOG("\tBankID [%s]\n",pContractBank->BankID);
		LOG("\tBankBrchID [%s]\n",pContractBank->BankBrchID);
		LOG("\tBankName [%s]\n",pContractBank->BankName);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryContractBank>\n");
};

void CTraderSpi::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryParkedOrder>\n");
	if (pParkedOrder)
	{
		LOG("\tBrokerID [%s]\n",pParkedOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pParkedOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pParkedOrder->InstrumentID);
		LOG("\tOrderRef [%s]\n",pParkedOrder->OrderRef);
		LOG("\tUserID [%s]\n",pParkedOrder->UserID);
		LOG("\tCombOffsetFlag [%s]\n",pParkedOrder->CombOffsetFlag);
		LOG("\tCombHedgeFlag [%s]\n",pParkedOrder->CombHedgeFlag);
		LOG("\tGTDDate [%s]\n",pParkedOrder->GTDDate);
		LOG("\tBusinessUnit [%s]\n",pParkedOrder->BusinessUnit);
		LOG("\tExchangeID [%s]\n",pParkedOrder->ExchangeID);
		LOG("\tParkedOrderID [%s]\n",pParkedOrder->ParkedOrderID);
		LOG("\tErrorMsg [%s]\n",pParkedOrder->ErrorMsg);
		LOG("\tAccountID [%s]\n",pParkedOrder->AccountID);
		LOG("\tCurrencyID [%s]\n",pParkedOrder->CurrencyID);
		LOG("\tClientID [%s]\n",pParkedOrder->ClientID);
		LOG("\tInvestUnitID [%s]\n",pParkedOrder->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pParkedOrder->IPAddress);
		LOG("\tMacAddress [%s]\n",pParkedOrder->MacAddress);
		LOG("\tVolumeTotalOriginal [%d]\n",pParkedOrder->VolumeTotalOriginal);
		LOG("\tMinVolume [%d]\n",pParkedOrder->MinVolume);
		LOG("\tIsAutoSuspend [%d]\n",pParkedOrder->IsAutoSuspend);
		LOG("\tRequestID [%d]\n",pParkedOrder->RequestID);
		LOG("\tUserForceClose [%d]\n",pParkedOrder->UserForceClose);
		LOG("\tErrorID [%d]\n",pParkedOrder->ErrorID);
		LOG("\tIsSwapOrder [%d]\n",pParkedOrder->IsSwapOrder);
		LOG("\tOrderPriceType [%c]\n",pParkedOrder->OrderPriceType);
		LOG("\tDirection [%c]\n",pParkedOrder->Direction);
		LOG("\tTimeCondition [%c]\n",pParkedOrder->TimeCondition);
		LOG("\tVolumeCondition [%c]\n",pParkedOrder->VolumeCondition);
		LOG("\tContingentCondition [%c]\n",pParkedOrder->ContingentCondition);
		LOG("\tForceCloseReason [%c]\n",pParkedOrder->ForceCloseReason);
		LOG("\tUserType [%c]\n",pParkedOrder->UserType);
		LOG("\tStatus [%c]\n",pParkedOrder->Status);
		LOG("\tLimitPrice [%.8lf]\n",pParkedOrder->LimitPrice);
		LOG("\tStopPrice [%.8lf]\n",pParkedOrder->StopPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryParkedOrder>\n");
};

void CTraderSpi::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryParkedOrderAction>\n");
	if (pParkedOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pParkedOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pParkedOrderAction->InvestorID);
		LOG("\tOrderRef [%s]\n",pParkedOrderAction->OrderRef);
		LOG("\tExchangeID [%s]\n",pParkedOrderAction->ExchangeID);
		LOG("\tOrderSysID [%s]\n",pParkedOrderAction->OrderSysID);
		LOG("\tUserID [%s]\n",pParkedOrderAction->UserID);
		LOG("\tInstrumentID [%s]\n",pParkedOrderAction->InstrumentID);
		LOG("\tParkedOrderActionID [%s]\n",pParkedOrderAction->ParkedOrderActionID);
		LOG("\tErrorMsg [%s]\n",pParkedOrderAction->ErrorMsg);
		LOG("\tInvestUnitID [%s]\n",pParkedOrderAction->InvestUnitID);
		LOG("\tIPAddress [%s]\n",pParkedOrderAction->IPAddress);
		LOG("\tMacAddress [%s]\n",pParkedOrderAction->MacAddress);
		LOG("\tOrderActionRef [%d]\n",pParkedOrderAction->OrderActionRef);
		LOG("\tRequestID [%d]\n",pParkedOrderAction->RequestID);
		LOG("\tFrontID [%d]\n",pParkedOrderAction->FrontID);
		LOG("\tSessionID [%d]\n",pParkedOrderAction->SessionID);
		LOG("\tVolumeChange [%d]\n",pParkedOrderAction->VolumeChange);
		LOG("\tErrorID [%d]\n",pParkedOrderAction->ErrorID);
		LOG("\tActionFlag [%c]\n",pParkedOrderAction->ActionFlag);
		LOG("\tUserType [%c]\n",pParkedOrderAction->UserType);
		LOG("\tStatus [%c]\n",pParkedOrderAction->Status);
		LOG("\tLimitPrice [%.8lf]\n",pParkedOrderAction->LimitPrice);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryParkedOrderAction>\n");
};

void CTraderSpi::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryTradingNotice>\n");
	if (pTradingNotice)
	{
		LOG("\tBrokerID [%s]\n",pTradingNotice->BrokerID);
		LOG("\tInvestorID [%s]\n",pTradingNotice->InvestorID);
		LOG("\tUserID [%s]\n",pTradingNotice->UserID);
		LOG("\tSendTime [%s]\n",pTradingNotice->SendTime);
		LOG("\tFieldContent [%s]\n",pTradingNotice->FieldContent);
		LOG("\tInvestUnitID [%s]\n",pTradingNotice->InvestUnitID);
		LOG("\tSequenceNo [%d]\n",pTradingNotice->SequenceNo);
		LOG("\tInvestorRange [%c]\n",pTradingNotice->InvestorRange);
		LOG("\tSequenceSeries [%d]\n",pTradingNotice->SequenceSeries);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryTradingNotice>\n");
};

void CTraderSpi::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryBrokerTradingParams>\n");
	if (pBrokerTradingParams)
	{
		LOG("\tBrokerID [%s]\n",pBrokerTradingParams->BrokerID);
		LOG("\tInvestorID [%s]\n",pBrokerTradingParams->InvestorID);
		LOG("\tCurrencyID [%s]\n",pBrokerTradingParams->CurrencyID);
		LOG("\tAccountID [%s]\n",pBrokerTradingParams->AccountID);
		LOG("\tMarginPriceType [%c]\n",pBrokerTradingParams->MarginPriceType);
		LOG("\tAlgorithm [%c]\n",pBrokerTradingParams->Algorithm);
		LOG("\tAvailIncludeCloseProfit [%c]\n",pBrokerTradingParams->AvailIncludeCloseProfit);
		LOG("\tOptionRoyaltyPriceType [%c]\n",pBrokerTradingParams->OptionRoyaltyPriceType);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryBrokerTradingParams>\n");
};

void CTraderSpi::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQryBrokerTradingAlgos>\n");
	if (pBrokerTradingAlgos)
	{
		LOG("\tBrokerID [%s]\n",pBrokerTradingAlgos->BrokerID);
		LOG("\tExchangeID [%s]\n",pBrokerTradingAlgos->ExchangeID);
		LOG("\tInstrumentID [%s]\n",pBrokerTradingAlgos->InstrumentID);
		LOG("\tHandlePositionAlgoID [%c]\n",pBrokerTradingAlgos->HandlePositionAlgoID);
		LOG("\tFindMarginRateAlgoID [%c]\n",pBrokerTradingAlgos->FindMarginRateAlgoID);
		LOG("\tHandleTradingAccountAlgoID [%c]\n",pBrokerTradingAlgos->HandleTradingAccountAlgoID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQryBrokerTradingAlgos>\n");
};

void CTraderSpi::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQueryCFMMCTradingAccountToken>\n");
	if (pQueryCFMMCTradingAccountToken)
	{
		LOG("\tBrokerID [%s]\n",pQueryCFMMCTradingAccountToken->BrokerID);
		LOG("\tInvestorID [%s]\n",pQueryCFMMCTradingAccountToken->InvestorID);
		LOG("\tInvestUnitID [%s]\n",pQueryCFMMCTradingAccountToken->InvestUnitID);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQueryCFMMCTradingAccountToken>\n");
};

void CTraderSpi::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) 
{
	LOG("<OnRtnFromBankToFutureByBank>\n");
	if (pRspTransfer)
	{
		LOG("\tTradeCode [%s]\n",pRspTransfer->TradeCode);
		LOG("\tBankID [%s]\n",pRspTransfer->BankID);
		LOG("\tBankBranchID [%s]\n",pRspTransfer->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspTransfer->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspTransfer->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspTransfer->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspTransfer->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspTransfer->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspTransfer->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspTransfer->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspTransfer->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspTransfer->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspTransfer->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspTransfer->AccountID);
		LOG("\tPassword [%s]\n",pRspTransfer->Password);
		LOG("\tUserID [%s]\n",pRspTransfer->UserID);
		LOG("\tCurrencyID [%s]\n",pRspTransfer->CurrencyID);
		LOG("\tMessage [%s]\n",pRspTransfer->Message);
		LOG("\tDigest [%s]\n",pRspTransfer->Digest);
		LOG("\tDeviceID [%s]\n",pRspTransfer->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspTransfer->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspTransfer->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspTransfer->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspTransfer->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspTransfer->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pRspTransfer->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspTransfer->SessionID);
		LOG("\tInstallID [%d]\n",pRspTransfer->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspTransfer->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspTransfer->RequestID);
		LOG("\tTID [%d]\n",pRspTransfer->TID);
		LOG("\tErrorID [%d]\n",pRspTransfer->ErrorID);
		LOG("\tLastFragment [%c]\n",pRspTransfer->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspTransfer->IdCardType);
		LOG("\tCustType [%c]\n",pRspTransfer->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspTransfer->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspTransfer->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspTransfer->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspTransfer->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspTransfer->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspTransfer->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspTransfer->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspTransfer->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspTransfer->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspTransfer->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspTransfer->BrokerFee);
	}
	LOG("</OnRtnFromBankToFutureByBank>\n");
};
void CTraderSpi::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) 
{
	LOG("<OnRtnFromFutureToBankByBank>\n");
	if (pRspTransfer)
	{
		LOG("\tTradeCode [%s]\n",pRspTransfer->TradeCode);
		LOG("\tBankID [%s]\n",pRspTransfer->BankID);
		LOG("\tBankBranchID [%s]\n",pRspTransfer->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspTransfer->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspTransfer->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspTransfer->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspTransfer->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspTransfer->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspTransfer->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspTransfer->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspTransfer->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspTransfer->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspTransfer->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspTransfer->AccountID);
		LOG("\tPassword [%s]\n",pRspTransfer->Password);
		LOG("\tUserID [%s]\n",pRspTransfer->UserID);
		LOG("\tCurrencyID [%s]\n",pRspTransfer->CurrencyID);
		LOG("\tMessage [%s]\n",pRspTransfer->Message);
		LOG("\tDigest [%s]\n",pRspTransfer->Digest);
		LOG("\tDeviceID [%s]\n",pRspTransfer->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspTransfer->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspTransfer->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspTransfer->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspTransfer->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspTransfer->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pRspTransfer->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspTransfer->SessionID);
		LOG("\tInstallID [%d]\n",pRspTransfer->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspTransfer->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspTransfer->RequestID);
		LOG("\tTID [%d]\n",pRspTransfer->TID);
		LOG("\tErrorID [%d]\n",pRspTransfer->ErrorID);
		LOG("\tLastFragment [%c]\n",pRspTransfer->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspTransfer->IdCardType);
		LOG("\tCustType [%c]\n",pRspTransfer->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspTransfer->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspTransfer->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspTransfer->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspTransfer->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspTransfer->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspTransfer->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspTransfer->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspTransfer->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspTransfer->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspTransfer->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspTransfer->BrokerFee);
	}
	LOG("</OnRtnFromFutureToBankByBank>\n");
};
void CTraderSpi::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) 
{
	LOG("<OnRtnRepealFromBankToFutureByBank>\n");
	if (pRspRepeal)
	{
		LOG("\tBankRepealSerial [%s]\n",pRspRepeal->BankRepealSerial);
		LOG("\tTradeCode [%s]\n",pRspRepeal->TradeCode);
		LOG("\tBankID [%s]\n",pRspRepeal->BankID);
		LOG("\tBankBranchID [%s]\n",pRspRepeal->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspRepeal->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspRepeal->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspRepeal->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspRepeal->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspRepeal->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspRepeal->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspRepeal->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspRepeal->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspRepeal->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspRepeal->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspRepeal->AccountID);
		LOG("\tPassword [%s]\n",pRspRepeal->Password);
		LOG("\tUserID [%s]\n",pRspRepeal->UserID);
		LOG("\tCurrencyID [%s]\n",pRspRepeal->CurrencyID);
		LOG("\tMessage [%s]\n",pRspRepeal->Message);
		LOG("\tDigest [%s]\n",pRspRepeal->Digest);
		LOG("\tDeviceID [%s]\n",pRspRepeal->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspRepeal->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspRepeal->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspRepeal->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspRepeal->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspRepeal->LongCustomerName);
		LOG("\tRepealTimeInterval [%d]\n",pRspRepeal->RepealTimeInterval);
		LOG("\tRepealedTimes [%d]\n",pRspRepeal->RepealedTimes);
		LOG("\tPlateRepealSerial [%d]\n",pRspRepeal->PlateRepealSerial);
		LOG("\tFutureRepealSerial [%d]\n",pRspRepeal->FutureRepealSerial);
		LOG("\tPlateSerial [%d]\n",pRspRepeal->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspRepeal->SessionID);
		LOG("\tInstallID [%d]\n",pRspRepeal->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspRepeal->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspRepeal->RequestID);
		LOG("\tTID [%d]\n",pRspRepeal->TID);
		LOG("\tErrorID [%d]\n",pRspRepeal->ErrorID);
		LOG("\tBankRepealFlag [%c]\n",pRspRepeal->BankRepealFlag);
		LOG("\tBrokerRepealFlag [%c]\n",pRspRepeal->BrokerRepealFlag);
		LOG("\tLastFragment [%c]\n",pRspRepeal->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspRepeal->IdCardType);
		LOG("\tCustType [%c]\n",pRspRepeal->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspRepeal->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspRepeal->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspRepeal->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspRepeal->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspRepeal->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspRepeal->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspRepeal->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspRepeal->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspRepeal->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspRepeal->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspRepeal->BrokerFee);
	}
	LOG("</OnRtnRepealFromBankToFutureByBank>\n");
};
void CTraderSpi::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) 
{
	LOG("<OnRtnRepealFromFutureToBankByBank>\n");
	if (pRspRepeal)
	{
		LOG("\tBankRepealSerial [%s]\n",pRspRepeal->BankRepealSerial);
		LOG("\tTradeCode [%s]\n",pRspRepeal->TradeCode);
		LOG("\tBankID [%s]\n",pRspRepeal->BankID);
		LOG("\tBankBranchID [%s]\n",pRspRepeal->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspRepeal->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspRepeal->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspRepeal->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspRepeal->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspRepeal->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspRepeal->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspRepeal->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspRepeal->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspRepeal->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspRepeal->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspRepeal->AccountID);
		LOG("\tPassword [%s]\n",pRspRepeal->Password);
		LOG("\tUserID [%s]\n",pRspRepeal->UserID);
		LOG("\tCurrencyID [%s]\n",pRspRepeal->CurrencyID);
		LOG("\tMessage [%s]\n",pRspRepeal->Message);
		LOG("\tDigest [%s]\n",pRspRepeal->Digest);
		LOG("\tDeviceID [%s]\n",pRspRepeal->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspRepeal->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspRepeal->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspRepeal->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspRepeal->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspRepeal->LongCustomerName);
		LOG("\tRepealTimeInterval [%d]\n",pRspRepeal->RepealTimeInterval);
		LOG("\tRepealedTimes [%d]\n",pRspRepeal->RepealedTimes);
		LOG("\tPlateRepealSerial [%d]\n",pRspRepeal->PlateRepealSerial);
		LOG("\tFutureRepealSerial [%d]\n",pRspRepeal->FutureRepealSerial);
		LOG("\tPlateSerial [%d]\n",pRspRepeal->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspRepeal->SessionID);
		LOG("\tInstallID [%d]\n",pRspRepeal->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspRepeal->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspRepeal->RequestID);
		LOG("\tTID [%d]\n",pRspRepeal->TID);
		LOG("\tErrorID [%d]\n",pRspRepeal->ErrorID);
		LOG("\tBankRepealFlag [%c]\n",pRspRepeal->BankRepealFlag);
		LOG("\tBrokerRepealFlag [%c]\n",pRspRepeal->BrokerRepealFlag);
		LOG("\tLastFragment [%c]\n",pRspRepeal->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspRepeal->IdCardType);
		LOG("\tCustType [%c]\n",pRspRepeal->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspRepeal->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspRepeal->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspRepeal->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspRepeal->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspRepeal->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspRepeal->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspRepeal->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspRepeal->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspRepeal->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspRepeal->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspRepeal->BrokerFee);
	}
	LOG("</OnRtnRepealFromFutureToBankByBank>\n");
};
void CTraderSpi::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) 
{
	LOG("<OnRtnFromBankToFutureByFuture>\n");
	if (pRspTransfer)
	{
		LOG("\tTradeCode [%s]\n",pRspTransfer->TradeCode);
		LOG("\tBankID [%s]\n",pRspTransfer->BankID);
		LOG("\tBankBranchID [%s]\n",pRspTransfer->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspTransfer->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspTransfer->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspTransfer->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspTransfer->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspTransfer->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspTransfer->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspTransfer->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspTransfer->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspTransfer->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspTransfer->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspTransfer->AccountID);
		LOG("\tPassword [%s]\n",pRspTransfer->Password);
		LOG("\tUserID [%s]\n",pRspTransfer->UserID);
		LOG("\tCurrencyID [%s]\n",pRspTransfer->CurrencyID);
		LOG("\tMessage [%s]\n",pRspTransfer->Message);
		LOG("\tDigest [%s]\n",pRspTransfer->Digest);
		LOG("\tDeviceID [%s]\n",pRspTransfer->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspTransfer->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspTransfer->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspTransfer->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspTransfer->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspTransfer->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pRspTransfer->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspTransfer->SessionID);
		LOG("\tInstallID [%d]\n",pRspTransfer->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspTransfer->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspTransfer->RequestID);
		LOG("\tTID [%d]\n",pRspTransfer->TID);
		LOG("\tErrorID [%d]\n",pRspTransfer->ErrorID);
		LOG("\tLastFragment [%c]\n",pRspTransfer->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspTransfer->IdCardType);
		LOG("\tCustType [%c]\n",pRspTransfer->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspTransfer->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspTransfer->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspTransfer->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspTransfer->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspTransfer->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspTransfer->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspTransfer->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspTransfer->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspTransfer->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspTransfer->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspTransfer->BrokerFee);
	}
	LOG("</OnRtnFromBankToFutureByFuture>\n");
};
void CTraderSpi::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) 
{
	LOG("<OnRtnFromFutureToBankByFuture>\n");
	if (pRspTransfer)
	{
		LOG("\tTradeCode [%s]\n",pRspTransfer->TradeCode);
		LOG("\tBankID [%s]\n",pRspTransfer->BankID);
		LOG("\tBankBranchID [%s]\n",pRspTransfer->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspTransfer->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspTransfer->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspTransfer->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspTransfer->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspTransfer->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspTransfer->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspTransfer->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspTransfer->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspTransfer->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspTransfer->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspTransfer->AccountID);
		LOG("\tPassword [%s]\n",pRspTransfer->Password);
		LOG("\tUserID [%s]\n",pRspTransfer->UserID);
		LOG("\tCurrencyID [%s]\n",pRspTransfer->CurrencyID);
		LOG("\tMessage [%s]\n",pRspTransfer->Message);
		LOG("\tDigest [%s]\n",pRspTransfer->Digest);
		LOG("\tDeviceID [%s]\n",pRspTransfer->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspTransfer->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspTransfer->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspTransfer->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspTransfer->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspTransfer->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pRspTransfer->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspTransfer->SessionID);
		LOG("\tInstallID [%d]\n",pRspTransfer->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspTransfer->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspTransfer->RequestID);
		LOG("\tTID [%d]\n",pRspTransfer->TID);
		LOG("\tErrorID [%d]\n",pRspTransfer->ErrorID);
		LOG("\tLastFragment [%c]\n",pRspTransfer->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspTransfer->IdCardType);
		LOG("\tCustType [%c]\n",pRspTransfer->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspTransfer->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspTransfer->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspTransfer->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspTransfer->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspTransfer->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspTransfer->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspTransfer->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspTransfer->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspTransfer->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspTransfer->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspTransfer->BrokerFee);
	}
	LOG("</OnRtnFromFutureToBankByFuture>\n");
};
void CTraderSpi::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) 
{
	LOG("<OnRtnRepealFromBankToFutureByFutureManual>\n");
	if (pRspRepeal)
	{
		LOG("\tBankRepealSerial [%s]\n",pRspRepeal->BankRepealSerial);
		LOG("\tTradeCode [%s]\n",pRspRepeal->TradeCode);
		LOG("\tBankID [%s]\n",pRspRepeal->BankID);
		LOG("\tBankBranchID [%s]\n",pRspRepeal->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspRepeal->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspRepeal->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspRepeal->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspRepeal->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspRepeal->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspRepeal->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspRepeal->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspRepeal->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspRepeal->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspRepeal->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspRepeal->AccountID);
		LOG("\tPassword [%s]\n",pRspRepeal->Password);
		LOG("\tUserID [%s]\n",pRspRepeal->UserID);
		LOG("\tCurrencyID [%s]\n",pRspRepeal->CurrencyID);
		LOG("\tMessage [%s]\n",pRspRepeal->Message);
		LOG("\tDigest [%s]\n",pRspRepeal->Digest);
		LOG("\tDeviceID [%s]\n",pRspRepeal->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspRepeal->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspRepeal->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspRepeal->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspRepeal->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspRepeal->LongCustomerName);
		LOG("\tRepealTimeInterval [%d]\n",pRspRepeal->RepealTimeInterval);
		LOG("\tRepealedTimes [%d]\n",pRspRepeal->RepealedTimes);
		LOG("\tPlateRepealSerial [%d]\n",pRspRepeal->PlateRepealSerial);
		LOG("\tFutureRepealSerial [%d]\n",pRspRepeal->FutureRepealSerial);
		LOG("\tPlateSerial [%d]\n",pRspRepeal->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspRepeal->SessionID);
		LOG("\tInstallID [%d]\n",pRspRepeal->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspRepeal->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspRepeal->RequestID);
		LOG("\tTID [%d]\n",pRspRepeal->TID);
		LOG("\tErrorID [%d]\n",pRspRepeal->ErrorID);
		LOG("\tBankRepealFlag [%c]\n",pRspRepeal->BankRepealFlag);
		LOG("\tBrokerRepealFlag [%c]\n",pRspRepeal->BrokerRepealFlag);
		LOG("\tLastFragment [%c]\n",pRspRepeal->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspRepeal->IdCardType);
		LOG("\tCustType [%c]\n",pRspRepeal->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspRepeal->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspRepeal->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspRepeal->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspRepeal->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspRepeal->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspRepeal->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspRepeal->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspRepeal->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspRepeal->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspRepeal->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspRepeal->BrokerFee);
	}
	LOG("</OnRtnRepealFromBankToFutureByFutureManual>\n");
};
void CTraderSpi::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) 
{
	LOG("<OnRtnRepealFromFutureToBankByFutureManual>\n");
	if (pRspRepeal)
	{
		LOG("\tBankRepealSerial [%s]\n",pRspRepeal->BankRepealSerial);
		LOG("\tTradeCode [%s]\n",pRspRepeal->TradeCode);
		LOG("\tBankID [%s]\n",pRspRepeal->BankID);
		LOG("\tBankBranchID [%s]\n",pRspRepeal->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspRepeal->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspRepeal->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspRepeal->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspRepeal->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspRepeal->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspRepeal->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspRepeal->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspRepeal->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspRepeal->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspRepeal->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspRepeal->AccountID);
		LOG("\tPassword [%s]\n",pRspRepeal->Password);
		LOG("\tUserID [%s]\n",pRspRepeal->UserID);
		LOG("\tCurrencyID [%s]\n",pRspRepeal->CurrencyID);
		LOG("\tMessage [%s]\n",pRspRepeal->Message);
		LOG("\tDigest [%s]\n",pRspRepeal->Digest);
		LOG("\tDeviceID [%s]\n",pRspRepeal->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspRepeal->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspRepeal->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspRepeal->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspRepeal->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspRepeal->LongCustomerName);
		LOG("\tRepealTimeInterval [%d]\n",pRspRepeal->RepealTimeInterval);
		LOG("\tRepealedTimes [%d]\n",pRspRepeal->RepealedTimes);
		LOG("\tPlateRepealSerial [%d]\n",pRspRepeal->PlateRepealSerial);
		LOG("\tFutureRepealSerial [%d]\n",pRspRepeal->FutureRepealSerial);
		LOG("\tPlateSerial [%d]\n",pRspRepeal->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspRepeal->SessionID);
		LOG("\tInstallID [%d]\n",pRspRepeal->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspRepeal->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspRepeal->RequestID);
		LOG("\tTID [%d]\n",pRspRepeal->TID);
		LOG("\tErrorID [%d]\n",pRspRepeal->ErrorID);
		LOG("\tBankRepealFlag [%c]\n",pRspRepeal->BankRepealFlag);
		LOG("\tBrokerRepealFlag [%c]\n",pRspRepeal->BrokerRepealFlag);
		LOG("\tLastFragment [%c]\n",pRspRepeal->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspRepeal->IdCardType);
		LOG("\tCustType [%c]\n",pRspRepeal->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspRepeal->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspRepeal->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspRepeal->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspRepeal->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspRepeal->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspRepeal->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspRepeal->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspRepeal->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspRepeal->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspRepeal->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspRepeal->BrokerFee);
	}
	LOG("</OnRtnRepealFromFutureToBankByFutureManual>\n");
};
void CTraderSpi::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) 
{
	LOG("<OnRtnQueryBankBalanceByFuture>\n");
	if (pNotifyQueryAccount)
	{
		LOG("\tTradeCode [%s]\n",pNotifyQueryAccount->TradeCode);
		LOG("\tBankID [%s]\n",pNotifyQueryAccount->BankID);
		LOG("\tBankBranchID [%s]\n",pNotifyQueryAccount->BankBranchID);
		LOG("\tBrokerID [%s]\n",pNotifyQueryAccount->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pNotifyQueryAccount->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pNotifyQueryAccount->TradeDate);
		LOG("\tTradeTime [%s]\n",pNotifyQueryAccount->TradeTime);
		LOG("\tBankSerial [%s]\n",pNotifyQueryAccount->BankSerial);
		LOG("\tTradingDay [%s]\n",pNotifyQueryAccount->TradingDay);
		LOG("\tCustomerName [%s]\n",pNotifyQueryAccount->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pNotifyQueryAccount->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pNotifyQueryAccount->BankAccount);
		LOG("\tBankPassWord [%s]\n",pNotifyQueryAccount->BankPassWord);
		LOG("\tAccountID [%s]\n",pNotifyQueryAccount->AccountID);
		LOG("\tPassword [%s]\n",pNotifyQueryAccount->Password);
		LOG("\tUserID [%s]\n",pNotifyQueryAccount->UserID);
		LOG("\tCurrencyID [%s]\n",pNotifyQueryAccount->CurrencyID);
		LOG("\tDigest [%s]\n",pNotifyQueryAccount->Digest);
		LOG("\tDeviceID [%s]\n",pNotifyQueryAccount->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pNotifyQueryAccount->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pNotifyQueryAccount->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pNotifyQueryAccount->OperNo);
		LOG("\tErrorMsg [%s]\n",pNotifyQueryAccount->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pNotifyQueryAccount->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pNotifyQueryAccount->PlateSerial);
		LOG("\tSessionID [%d]\n",pNotifyQueryAccount->SessionID);
		LOG("\tFutureSerial [%d]\n",pNotifyQueryAccount->FutureSerial);
		LOG("\tInstallID [%d]\n",pNotifyQueryAccount->InstallID);
		LOG("\tRequestID [%d]\n",pNotifyQueryAccount->RequestID);
		LOG("\tTID [%d]\n",pNotifyQueryAccount->TID);
		LOG("\tErrorID [%d]\n",pNotifyQueryAccount->ErrorID);
		LOG("\tLastFragment [%c]\n",pNotifyQueryAccount->LastFragment);
		LOG("\tIdCardType [%c]\n",pNotifyQueryAccount->IdCardType);
		LOG("\tCustType [%c]\n",pNotifyQueryAccount->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pNotifyQueryAccount->VerifyCertNoFlag);
		LOG("\tBankAccType [%c]\n",pNotifyQueryAccount->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pNotifyQueryAccount->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pNotifyQueryAccount->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pNotifyQueryAccount->SecuPwdFlag);
		LOG("\tBankUseAmount [%.8lf]\n",pNotifyQueryAccount->BankUseAmount);
		LOG("\tBankFetchAmount [%.8lf]\n",pNotifyQueryAccount->BankFetchAmount);
	}
	LOG("</OnRtnQueryBankBalanceByFuture>\n");
};
void CTraderSpi::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnBankToFutureByFuture>\n");
	if (pReqTransfer)
	{
		LOG("\tTradeCode [%s]\n",pReqTransfer->TradeCode);
		LOG("\tBankID [%s]\n",pReqTransfer->BankID);
		LOG("\tBankBranchID [%s]\n",pReqTransfer->BankBranchID);
		LOG("\tBrokerID [%s]\n",pReqTransfer->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pReqTransfer->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pReqTransfer->TradeDate);
		LOG("\tTradeTime [%s]\n",pReqTransfer->TradeTime);
		LOG("\tBankSerial [%s]\n",pReqTransfer->BankSerial);
		LOG("\tTradingDay [%s]\n",pReqTransfer->TradingDay);
		LOG("\tCustomerName [%s]\n",pReqTransfer->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pReqTransfer->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pReqTransfer->BankAccount);
		LOG("\tBankPassWord [%s]\n",pReqTransfer->BankPassWord);
		LOG("\tAccountID [%s]\n",pReqTransfer->AccountID);
		LOG("\tPassword [%s]\n",pReqTransfer->Password);
		LOG("\tUserID [%s]\n",pReqTransfer->UserID);
		LOG("\tCurrencyID [%s]\n",pReqTransfer->CurrencyID);
		LOG("\tMessage [%s]\n",pReqTransfer->Message);
		LOG("\tDigest [%s]\n",pReqTransfer->Digest);
		LOG("\tDeviceID [%s]\n",pReqTransfer->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pReqTransfer->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pReqTransfer->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pReqTransfer->OperNo);
		LOG("\tLongCustomerName [%s]\n",pReqTransfer->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pReqTransfer->PlateSerial);
		LOG("\tSessionID [%d]\n",pReqTransfer->SessionID);
		LOG("\tInstallID [%d]\n",pReqTransfer->InstallID);
		LOG("\tFutureSerial [%d]\n",pReqTransfer->FutureSerial);
		LOG("\tRequestID [%d]\n",pReqTransfer->RequestID);
		LOG("\tTID [%d]\n",pReqTransfer->TID);
		LOG("\tLastFragment [%c]\n",pReqTransfer->LastFragment);
		LOG("\tIdCardType [%c]\n",pReqTransfer->IdCardType);
		LOG("\tCustType [%c]\n",pReqTransfer->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pReqTransfer->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pReqTransfer->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pReqTransfer->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pReqTransfer->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pReqTransfer->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pReqTransfer->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pReqTransfer->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pReqTransfer->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pReqTransfer->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pReqTransfer->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pReqTransfer->BrokerFee);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnBankToFutureByFuture>\n");
};
void CTraderSpi::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnFutureToBankByFuture>\n");
	if (pReqTransfer)
	{
		LOG("\tTradeCode [%s]\n",pReqTransfer->TradeCode);
		LOG("\tBankID [%s]\n",pReqTransfer->BankID);
		LOG("\tBankBranchID [%s]\n",pReqTransfer->BankBranchID);
		LOG("\tBrokerID [%s]\n",pReqTransfer->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pReqTransfer->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pReqTransfer->TradeDate);
		LOG("\tTradeTime [%s]\n",pReqTransfer->TradeTime);
		LOG("\tBankSerial [%s]\n",pReqTransfer->BankSerial);
		LOG("\tTradingDay [%s]\n",pReqTransfer->TradingDay);
		LOG("\tCustomerName [%s]\n",pReqTransfer->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pReqTransfer->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pReqTransfer->BankAccount);
		LOG("\tBankPassWord [%s]\n",pReqTransfer->BankPassWord);
		LOG("\tAccountID [%s]\n",pReqTransfer->AccountID);
		LOG("\tPassword [%s]\n",pReqTransfer->Password);
		LOG("\tUserID [%s]\n",pReqTransfer->UserID);
		LOG("\tCurrencyID [%s]\n",pReqTransfer->CurrencyID);
		LOG("\tMessage [%s]\n",pReqTransfer->Message);
		LOG("\tDigest [%s]\n",pReqTransfer->Digest);
		LOG("\tDeviceID [%s]\n",pReqTransfer->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pReqTransfer->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pReqTransfer->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pReqTransfer->OperNo);
		LOG("\tLongCustomerName [%s]\n",pReqTransfer->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pReqTransfer->PlateSerial);
		LOG("\tSessionID [%d]\n",pReqTransfer->SessionID);
		LOG("\tInstallID [%d]\n",pReqTransfer->InstallID);
		LOG("\tFutureSerial [%d]\n",pReqTransfer->FutureSerial);
		LOG("\tRequestID [%d]\n",pReqTransfer->RequestID);
		LOG("\tTID [%d]\n",pReqTransfer->TID);
		LOG("\tLastFragment [%c]\n",pReqTransfer->LastFragment);
		LOG("\tIdCardType [%c]\n",pReqTransfer->IdCardType);
		LOG("\tCustType [%c]\n",pReqTransfer->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pReqTransfer->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pReqTransfer->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pReqTransfer->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pReqTransfer->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pReqTransfer->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pReqTransfer->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pReqTransfer->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pReqTransfer->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pReqTransfer->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pReqTransfer->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pReqTransfer->BrokerFee);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnFutureToBankByFuture>\n");
};
void CTraderSpi::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnRepealBankToFutureByFutureManual>\n");
	if (pReqRepeal)
	{
		LOG("\tBankRepealSerial [%s]\n",pReqRepeal->BankRepealSerial);
		LOG("\tTradeCode [%s]\n",pReqRepeal->TradeCode);
		LOG("\tBankID [%s]\n",pReqRepeal->BankID);
		LOG("\tBankBranchID [%s]\n",pReqRepeal->BankBranchID);
		LOG("\tBrokerID [%s]\n",pReqRepeal->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pReqRepeal->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pReqRepeal->TradeDate);
		LOG("\tTradeTime [%s]\n",pReqRepeal->TradeTime);
		LOG("\tBankSerial [%s]\n",pReqRepeal->BankSerial);
		LOG("\tTradingDay [%s]\n",pReqRepeal->TradingDay);
		LOG("\tCustomerName [%s]\n",pReqRepeal->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pReqRepeal->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pReqRepeal->BankAccount);
		LOG("\tBankPassWord [%s]\n",pReqRepeal->BankPassWord);
		LOG("\tAccountID [%s]\n",pReqRepeal->AccountID);
		LOG("\tPassword [%s]\n",pReqRepeal->Password);
		LOG("\tUserID [%s]\n",pReqRepeal->UserID);
		LOG("\tCurrencyID [%s]\n",pReqRepeal->CurrencyID);
		LOG("\tMessage [%s]\n",pReqRepeal->Message);
		LOG("\tDigest [%s]\n",pReqRepeal->Digest);
		LOG("\tDeviceID [%s]\n",pReqRepeal->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pReqRepeal->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pReqRepeal->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pReqRepeal->OperNo);
		LOG("\tLongCustomerName [%s]\n",pReqRepeal->LongCustomerName);
		LOG("\tRepealTimeInterval [%d]\n",pReqRepeal->RepealTimeInterval);
		LOG("\tRepealedTimes [%d]\n",pReqRepeal->RepealedTimes);
		LOG("\tPlateRepealSerial [%d]\n",pReqRepeal->PlateRepealSerial);
		LOG("\tFutureRepealSerial [%d]\n",pReqRepeal->FutureRepealSerial);
		LOG("\tPlateSerial [%d]\n",pReqRepeal->PlateSerial);
		LOG("\tSessionID [%d]\n",pReqRepeal->SessionID);
		LOG("\tInstallID [%d]\n",pReqRepeal->InstallID);
		LOG("\tFutureSerial [%d]\n",pReqRepeal->FutureSerial);
		LOG("\tRequestID [%d]\n",pReqRepeal->RequestID);
		LOG("\tTID [%d]\n",pReqRepeal->TID);
		LOG("\tBankRepealFlag [%c]\n",pReqRepeal->BankRepealFlag);
		LOG("\tBrokerRepealFlag [%c]\n",pReqRepeal->BrokerRepealFlag);
		LOG("\tLastFragment [%c]\n",pReqRepeal->LastFragment);
		LOG("\tIdCardType [%c]\n",pReqRepeal->IdCardType);
		LOG("\tCustType [%c]\n",pReqRepeal->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pReqRepeal->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pReqRepeal->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pReqRepeal->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pReqRepeal->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pReqRepeal->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pReqRepeal->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pReqRepeal->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pReqRepeal->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pReqRepeal->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pReqRepeal->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pReqRepeal->BrokerFee);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnRepealBankToFutureByFutureManual>\n");
};
void CTraderSpi::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnRepealFutureToBankByFutureManual>\n");
	if (pReqRepeal)
	{
		LOG("\tBankRepealSerial [%s]\n",pReqRepeal->BankRepealSerial);
		LOG("\tTradeCode [%s]\n",pReqRepeal->TradeCode);
		LOG("\tBankID [%s]\n",pReqRepeal->BankID);
		LOG("\tBankBranchID [%s]\n",pReqRepeal->BankBranchID);
		LOG("\tBrokerID [%s]\n",pReqRepeal->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pReqRepeal->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pReqRepeal->TradeDate);
		LOG("\tTradeTime [%s]\n",pReqRepeal->TradeTime);
		LOG("\tBankSerial [%s]\n",pReqRepeal->BankSerial);
		LOG("\tTradingDay [%s]\n",pReqRepeal->TradingDay);
		LOG("\tCustomerName [%s]\n",pReqRepeal->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pReqRepeal->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pReqRepeal->BankAccount);
		LOG("\tBankPassWord [%s]\n",pReqRepeal->BankPassWord);
		LOG("\tAccountID [%s]\n",pReqRepeal->AccountID);
		LOG("\tPassword [%s]\n",pReqRepeal->Password);
		LOG("\tUserID [%s]\n",pReqRepeal->UserID);
		LOG("\tCurrencyID [%s]\n",pReqRepeal->CurrencyID);
		LOG("\tMessage [%s]\n",pReqRepeal->Message);
		LOG("\tDigest [%s]\n",pReqRepeal->Digest);
		LOG("\tDeviceID [%s]\n",pReqRepeal->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pReqRepeal->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pReqRepeal->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pReqRepeal->OperNo);
		LOG("\tLongCustomerName [%s]\n",pReqRepeal->LongCustomerName);
		LOG("\tRepealTimeInterval [%d]\n",pReqRepeal->RepealTimeInterval);
		LOG("\tRepealedTimes [%d]\n",pReqRepeal->RepealedTimes);
		LOG("\tPlateRepealSerial [%d]\n",pReqRepeal->PlateRepealSerial);
		LOG("\tFutureRepealSerial [%d]\n",pReqRepeal->FutureRepealSerial);
		LOG("\tPlateSerial [%d]\n",pReqRepeal->PlateSerial);
		LOG("\tSessionID [%d]\n",pReqRepeal->SessionID);
		LOG("\tInstallID [%d]\n",pReqRepeal->InstallID);
		LOG("\tFutureSerial [%d]\n",pReqRepeal->FutureSerial);
		LOG("\tRequestID [%d]\n",pReqRepeal->RequestID);
		LOG("\tTID [%d]\n",pReqRepeal->TID);
		LOG("\tBankRepealFlag [%c]\n",pReqRepeal->BankRepealFlag);
		LOG("\tBrokerRepealFlag [%c]\n",pReqRepeal->BrokerRepealFlag);
		LOG("\tLastFragment [%c]\n",pReqRepeal->LastFragment);
		LOG("\tIdCardType [%c]\n",pReqRepeal->IdCardType);
		LOG("\tCustType [%c]\n",pReqRepeal->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pReqRepeal->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pReqRepeal->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pReqRepeal->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pReqRepeal->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pReqRepeal->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pReqRepeal->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pReqRepeal->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pReqRepeal->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pReqRepeal->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pReqRepeal->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pReqRepeal->BrokerFee);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnRepealFutureToBankByFutureManual>\n");
};
void CTraderSpi::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) 
{
	LOG("<OnErrRtnQueryBankBalanceByFuture>\n");
	if (pReqQueryAccount)
	{
		LOG("\tTradeCode [%s]\n",pReqQueryAccount->TradeCode);
		LOG("\tBankID [%s]\n",pReqQueryAccount->BankID);
		LOG("\tBankBranchID [%s]\n",pReqQueryAccount->BankBranchID);
		LOG("\tBrokerID [%s]\n",pReqQueryAccount->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pReqQueryAccount->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pReqQueryAccount->TradeDate);
		LOG("\tTradeTime [%s]\n",pReqQueryAccount->TradeTime);
		LOG("\tBankSerial [%s]\n",pReqQueryAccount->BankSerial);
		LOG("\tTradingDay [%s]\n",pReqQueryAccount->TradingDay);
		LOG("\tCustomerName [%s]\n",pReqQueryAccount->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pReqQueryAccount->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pReqQueryAccount->BankAccount);
		LOG("\tBankPassWord [%s]\n",pReqQueryAccount->BankPassWord);
		LOG("\tAccountID [%s]\n",pReqQueryAccount->AccountID);
		LOG("\tPassword [%s]\n",pReqQueryAccount->Password);
		LOG("\tUserID [%s]\n",pReqQueryAccount->UserID);
		LOG("\tCurrencyID [%s]\n",pReqQueryAccount->CurrencyID);
		LOG("\tDigest [%s]\n",pReqQueryAccount->Digest);
		LOG("\tDeviceID [%s]\n",pReqQueryAccount->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pReqQueryAccount->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pReqQueryAccount->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pReqQueryAccount->OperNo);
		LOG("\tLongCustomerName [%s]\n",pReqQueryAccount->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pReqQueryAccount->PlateSerial);
		LOG("\tSessionID [%d]\n",pReqQueryAccount->SessionID);
		LOG("\tFutureSerial [%d]\n",pReqQueryAccount->FutureSerial);
		LOG("\tInstallID [%d]\n",pReqQueryAccount->InstallID);
		LOG("\tRequestID [%d]\n",pReqQueryAccount->RequestID);
		LOG("\tTID [%d]\n",pReqQueryAccount->TID);
		LOG("\tLastFragment [%c]\n",pReqQueryAccount->LastFragment);
		LOG("\tIdCardType [%c]\n",pReqQueryAccount->IdCardType);
		LOG("\tCustType [%c]\n",pReqQueryAccount->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pReqQueryAccount->VerifyCertNoFlag);
		LOG("\tBankAccType [%c]\n",pReqQueryAccount->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pReqQueryAccount->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pReqQueryAccount->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pReqQueryAccount->SecuPwdFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("</OnErrRtnQueryBankBalanceByFuture>\n");
};
void CTraderSpi::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) 
{
	LOG("<OnRtnRepealFromBankToFutureByFuture>\n");
	if (pRspRepeal)
	{
		LOG("\tBankRepealSerial [%s]\n",pRspRepeal->BankRepealSerial);
		LOG("\tTradeCode [%s]\n",pRspRepeal->TradeCode);
		LOG("\tBankID [%s]\n",pRspRepeal->BankID);
		LOG("\tBankBranchID [%s]\n",pRspRepeal->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspRepeal->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspRepeal->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspRepeal->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspRepeal->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspRepeal->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspRepeal->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspRepeal->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspRepeal->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspRepeal->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspRepeal->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspRepeal->AccountID);
		LOG("\tPassword [%s]\n",pRspRepeal->Password);
		LOG("\tUserID [%s]\n",pRspRepeal->UserID);
		LOG("\tCurrencyID [%s]\n",pRspRepeal->CurrencyID);
		LOG("\tMessage [%s]\n",pRspRepeal->Message);
		LOG("\tDigest [%s]\n",pRspRepeal->Digest);
		LOG("\tDeviceID [%s]\n",pRspRepeal->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspRepeal->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspRepeal->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspRepeal->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspRepeal->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspRepeal->LongCustomerName);
		LOG("\tRepealTimeInterval [%d]\n",pRspRepeal->RepealTimeInterval);
		LOG("\tRepealedTimes [%d]\n",pRspRepeal->RepealedTimes);
		LOG("\tPlateRepealSerial [%d]\n",pRspRepeal->PlateRepealSerial);
		LOG("\tFutureRepealSerial [%d]\n",pRspRepeal->FutureRepealSerial);
		LOG("\tPlateSerial [%d]\n",pRspRepeal->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspRepeal->SessionID);
		LOG("\tInstallID [%d]\n",pRspRepeal->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspRepeal->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspRepeal->RequestID);
		LOG("\tTID [%d]\n",pRspRepeal->TID);
		LOG("\tErrorID [%d]\n",pRspRepeal->ErrorID);
		LOG("\tBankRepealFlag [%c]\n",pRspRepeal->BankRepealFlag);
		LOG("\tBrokerRepealFlag [%c]\n",pRspRepeal->BrokerRepealFlag);
		LOG("\tLastFragment [%c]\n",pRspRepeal->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspRepeal->IdCardType);
		LOG("\tCustType [%c]\n",pRspRepeal->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspRepeal->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspRepeal->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspRepeal->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspRepeal->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspRepeal->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspRepeal->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspRepeal->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspRepeal->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspRepeal->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspRepeal->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspRepeal->BrokerFee);
	}
	LOG("</OnRtnRepealFromBankToFutureByFuture>\n");
};
void CTraderSpi::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) 
{
	LOG("<OnRtnRepealFromFutureToBankByFuture>\n");
	if (pRspRepeal)
	{
		LOG("\tBankRepealSerial [%s]\n",pRspRepeal->BankRepealSerial);
		LOG("\tTradeCode [%s]\n",pRspRepeal->TradeCode);
		LOG("\tBankID [%s]\n",pRspRepeal->BankID);
		LOG("\tBankBranchID [%s]\n",pRspRepeal->BankBranchID);
		LOG("\tBrokerID [%s]\n",pRspRepeal->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pRspRepeal->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pRspRepeal->TradeDate);
		LOG("\tTradeTime [%s]\n",pRspRepeal->TradeTime);
		LOG("\tBankSerial [%s]\n",pRspRepeal->BankSerial);
		LOG("\tTradingDay [%s]\n",pRspRepeal->TradingDay);
		LOG("\tCustomerName [%s]\n",pRspRepeal->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pRspRepeal->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pRspRepeal->BankAccount);
		LOG("\tBankPassWord [%s]\n",pRspRepeal->BankPassWord);
		LOG("\tAccountID [%s]\n",pRspRepeal->AccountID);
		LOG("\tPassword [%s]\n",pRspRepeal->Password);
		LOG("\tUserID [%s]\n",pRspRepeal->UserID);
		LOG("\tCurrencyID [%s]\n",pRspRepeal->CurrencyID);
		LOG("\tMessage [%s]\n",pRspRepeal->Message);
		LOG("\tDigest [%s]\n",pRspRepeal->Digest);
		LOG("\tDeviceID [%s]\n",pRspRepeal->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pRspRepeal->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pRspRepeal->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pRspRepeal->OperNo);
		LOG("\tErrorMsg [%s]\n",pRspRepeal->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pRspRepeal->LongCustomerName);
		LOG("\tRepealTimeInterval [%d]\n",pRspRepeal->RepealTimeInterval);
		LOG("\tRepealedTimes [%d]\n",pRspRepeal->RepealedTimes);
		LOG("\tPlateRepealSerial [%d]\n",pRspRepeal->PlateRepealSerial);
		LOG("\tFutureRepealSerial [%d]\n",pRspRepeal->FutureRepealSerial);
		LOG("\tPlateSerial [%d]\n",pRspRepeal->PlateSerial);
		LOG("\tSessionID [%d]\n",pRspRepeal->SessionID);
		LOG("\tInstallID [%d]\n",pRspRepeal->InstallID);
		LOG("\tFutureSerial [%d]\n",pRspRepeal->FutureSerial);
		LOG("\tRequestID [%d]\n",pRspRepeal->RequestID);
		LOG("\tTID [%d]\n",pRspRepeal->TID);
		LOG("\tErrorID [%d]\n",pRspRepeal->ErrorID);
		LOG("\tBankRepealFlag [%c]\n",pRspRepeal->BankRepealFlag);
		LOG("\tBrokerRepealFlag [%c]\n",pRspRepeal->BrokerRepealFlag);
		LOG("\tLastFragment [%c]\n",pRspRepeal->LastFragment);
		LOG("\tIdCardType [%c]\n",pRspRepeal->IdCardType);
		LOG("\tCustType [%c]\n",pRspRepeal->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pRspRepeal->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pRspRepeal->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pRspRepeal->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pRspRepeal->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pRspRepeal->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pRspRepeal->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pRspRepeal->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pRspRepeal->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pRspRepeal->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pRspRepeal->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pRspRepeal->BrokerFee);
	}
	LOG("</OnRtnRepealFromFutureToBankByFuture>\n");
};
void CTraderSpi::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspFromBankToFutureByFuture>\n");
	if (pReqTransfer)
	{
		LOG("\tTradeCode [%s]\n",pReqTransfer->TradeCode);
		LOG("\tBankID [%s]\n",pReqTransfer->BankID);
		LOG("\tBankBranchID [%s]\n",pReqTransfer->BankBranchID);
		LOG("\tBrokerID [%s]\n",pReqTransfer->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pReqTransfer->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pReqTransfer->TradeDate);
		LOG("\tTradeTime [%s]\n",pReqTransfer->TradeTime);
		LOG("\tBankSerial [%s]\n",pReqTransfer->BankSerial);
		LOG("\tTradingDay [%s]\n",pReqTransfer->TradingDay);
		LOG("\tCustomerName [%s]\n",pReqTransfer->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pReqTransfer->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pReqTransfer->BankAccount);
		LOG("\tBankPassWord [%s]\n",pReqTransfer->BankPassWord);
		LOG("\tAccountID [%s]\n",pReqTransfer->AccountID);
		LOG("\tPassword [%s]\n",pReqTransfer->Password);
		LOG("\tUserID [%s]\n",pReqTransfer->UserID);
		LOG("\tCurrencyID [%s]\n",pReqTransfer->CurrencyID);
		LOG("\tMessage [%s]\n",pReqTransfer->Message);
		LOG("\tDigest [%s]\n",pReqTransfer->Digest);
		LOG("\tDeviceID [%s]\n",pReqTransfer->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pReqTransfer->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pReqTransfer->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pReqTransfer->OperNo);
		LOG("\tLongCustomerName [%s]\n",pReqTransfer->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pReqTransfer->PlateSerial);
		LOG("\tSessionID [%d]\n",pReqTransfer->SessionID);
		LOG("\tInstallID [%d]\n",pReqTransfer->InstallID);
		LOG("\tFutureSerial [%d]\n",pReqTransfer->FutureSerial);
		LOG("\tRequestID [%d]\n",pReqTransfer->RequestID);
		LOG("\tTID [%d]\n",pReqTransfer->TID);
		LOG("\tLastFragment [%c]\n",pReqTransfer->LastFragment);
		LOG("\tIdCardType [%c]\n",pReqTransfer->IdCardType);
		LOG("\tCustType [%c]\n",pReqTransfer->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pReqTransfer->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pReqTransfer->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pReqTransfer->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pReqTransfer->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pReqTransfer->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pReqTransfer->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pReqTransfer->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pReqTransfer->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pReqTransfer->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pReqTransfer->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pReqTransfer->BrokerFee);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspFromBankToFutureByFuture>\n");
};

void CTraderSpi::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspFromFutureToBankByFuture>\n");
	if (pReqTransfer)
	{
		LOG("\tTradeCode [%s]\n",pReqTransfer->TradeCode);
		LOG("\tBankID [%s]\n",pReqTransfer->BankID);
		LOG("\tBankBranchID [%s]\n",pReqTransfer->BankBranchID);
		LOG("\tBrokerID [%s]\n",pReqTransfer->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pReqTransfer->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pReqTransfer->TradeDate);
		LOG("\tTradeTime [%s]\n",pReqTransfer->TradeTime);
		LOG("\tBankSerial [%s]\n",pReqTransfer->BankSerial);
		LOG("\tTradingDay [%s]\n",pReqTransfer->TradingDay);
		LOG("\tCustomerName [%s]\n",pReqTransfer->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pReqTransfer->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pReqTransfer->BankAccount);
		LOG("\tBankPassWord [%s]\n",pReqTransfer->BankPassWord);
		LOG("\tAccountID [%s]\n",pReqTransfer->AccountID);
		LOG("\tPassword [%s]\n",pReqTransfer->Password);
		LOG("\tUserID [%s]\n",pReqTransfer->UserID);
		LOG("\tCurrencyID [%s]\n",pReqTransfer->CurrencyID);
		LOG("\tMessage [%s]\n",pReqTransfer->Message);
		LOG("\tDigest [%s]\n",pReqTransfer->Digest);
		LOG("\tDeviceID [%s]\n",pReqTransfer->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pReqTransfer->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pReqTransfer->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pReqTransfer->OperNo);
		LOG("\tLongCustomerName [%s]\n",pReqTransfer->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pReqTransfer->PlateSerial);
		LOG("\tSessionID [%d]\n",pReqTransfer->SessionID);
		LOG("\tInstallID [%d]\n",pReqTransfer->InstallID);
		LOG("\tFutureSerial [%d]\n",pReqTransfer->FutureSerial);
		LOG("\tRequestID [%d]\n",pReqTransfer->RequestID);
		LOG("\tTID [%d]\n",pReqTransfer->TID);
		LOG("\tLastFragment [%c]\n",pReqTransfer->LastFragment);
		LOG("\tIdCardType [%c]\n",pReqTransfer->IdCardType);
		LOG("\tCustType [%c]\n",pReqTransfer->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pReqTransfer->VerifyCertNoFlag);
		LOG("\tFeePayFlag [%c]\n",pReqTransfer->FeePayFlag);
		LOG("\tBankAccType [%c]\n",pReqTransfer->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pReqTransfer->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pReqTransfer->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pReqTransfer->SecuPwdFlag);
		LOG("\tTransferStatus [%c]\n",pReqTransfer->TransferStatus);
		LOG("\tTradeAmount [%.8lf]\n",pReqTransfer->TradeAmount);
		LOG("\tFutureFetchAmount [%.8lf]\n",pReqTransfer->FutureFetchAmount);
		LOG("\tCustFee [%.8lf]\n",pReqTransfer->CustFee);
		LOG("\tBrokerFee [%.8lf]\n",pReqTransfer->BrokerFee);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspFromFutureToBankByFuture>\n");
};

void CTraderSpi::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	LOG("<OnRspQueryBankAccountMoneyByFuture>\n");
	if (pReqQueryAccount)
	{
		LOG("\tTradeCode [%s]\n",pReqQueryAccount->TradeCode);
		LOG("\tBankID [%s]\n",pReqQueryAccount->BankID);
		LOG("\tBankBranchID [%s]\n",pReqQueryAccount->BankBranchID);
		LOG("\tBrokerID [%s]\n",pReqQueryAccount->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pReqQueryAccount->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pReqQueryAccount->TradeDate);
		LOG("\tTradeTime [%s]\n",pReqQueryAccount->TradeTime);
		LOG("\tBankSerial [%s]\n",pReqQueryAccount->BankSerial);
		LOG("\tTradingDay [%s]\n",pReqQueryAccount->TradingDay);
		LOG("\tCustomerName [%s]\n",pReqQueryAccount->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pReqQueryAccount->IdentifiedCardNo);
		LOG("\tBankAccount [%s]\n",pReqQueryAccount->BankAccount);
		LOG("\tBankPassWord [%s]\n",pReqQueryAccount->BankPassWord);
		LOG("\tAccountID [%s]\n",pReqQueryAccount->AccountID);
		LOG("\tPassword [%s]\n",pReqQueryAccount->Password);
		LOG("\tUserID [%s]\n",pReqQueryAccount->UserID);
		LOG("\tCurrencyID [%s]\n",pReqQueryAccount->CurrencyID);
		LOG("\tDigest [%s]\n",pReqQueryAccount->Digest);
		LOG("\tDeviceID [%s]\n",pReqQueryAccount->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pReqQueryAccount->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pReqQueryAccount->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pReqQueryAccount->OperNo);
		LOG("\tLongCustomerName [%s]\n",pReqQueryAccount->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pReqQueryAccount->PlateSerial);
		LOG("\tSessionID [%d]\n",pReqQueryAccount->SessionID);
		LOG("\tFutureSerial [%d]\n",pReqQueryAccount->FutureSerial);
		LOG("\tInstallID [%d]\n",pReqQueryAccount->InstallID);
		LOG("\tRequestID [%d]\n",pReqQueryAccount->RequestID);
		LOG("\tTID [%d]\n",pReqQueryAccount->TID);
		LOG("\tLastFragment [%c]\n",pReqQueryAccount->LastFragment);
		LOG("\tIdCardType [%c]\n",pReqQueryAccount->IdCardType);
		LOG("\tCustType [%c]\n",pReqQueryAccount->CustType);
		LOG("\tVerifyCertNoFlag [%c]\n",pReqQueryAccount->VerifyCertNoFlag);
		LOG("\tBankAccType [%c]\n",pReqQueryAccount->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pReqQueryAccount->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pReqQueryAccount->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pReqQueryAccount->SecuPwdFlag);
	}
	if (pRspInfo)
	{
		LOG("\tErrorMsg [%s]\n",pRspInfo->ErrorMsg);
		LOG("\tErrorID [%d]\n",pRspInfo->ErrorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("\tbIsLast [%d]\n",bIsLast);
	LOG("</OnRspQueryBankAccountMoneyByFuture>\n");
};

void CTraderSpi::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) 
{
	LOG("<OnRtnOpenAccountByBank>\n");
	if (pOpenAccount)
	{
		LOG("\tTradeCode [%s]\n",pOpenAccount->TradeCode);
		LOG("\tBankID [%s]\n",pOpenAccount->BankID);
		LOG("\tBankBranchID [%s]\n",pOpenAccount->BankBranchID);
		LOG("\tBrokerID [%s]\n",pOpenAccount->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pOpenAccount->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pOpenAccount->TradeDate);
		LOG("\tTradeTime [%s]\n",pOpenAccount->TradeTime);
		LOG("\tBankSerial [%s]\n",pOpenAccount->BankSerial);
		LOG("\tTradingDay [%s]\n",pOpenAccount->TradingDay);
		LOG("\tCustomerName [%s]\n",pOpenAccount->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pOpenAccount->IdentifiedCardNo);
		LOG("\tCountryCode [%s]\n",pOpenAccount->CountryCode);
		LOG("\tAddress [%s]\n",pOpenAccount->Address);
		LOG("\tZipCode [%s]\n",pOpenAccount->ZipCode);
		LOG("\tTelephone [%s]\n",pOpenAccount->Telephone);
		LOG("\tMobilePhone [%s]\n",pOpenAccount->MobilePhone);
		LOG("\tFax [%s]\n",pOpenAccount->Fax);
		LOG("\tEMail [%s]\n",pOpenAccount->EMail);
		LOG("\tBankAccount [%s]\n",pOpenAccount->BankAccount);
		LOG("\tBankPassWord [%s]\n",pOpenAccount->BankPassWord);
		LOG("\tAccountID [%s]\n",pOpenAccount->AccountID);
		LOG("\tPassword [%s]\n",pOpenAccount->Password);
		LOG("\tCurrencyID [%s]\n",pOpenAccount->CurrencyID);
		LOG("\tDigest [%s]\n",pOpenAccount->Digest);
		LOG("\tDeviceID [%s]\n",pOpenAccount->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pOpenAccount->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pOpenAccount->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pOpenAccount->OperNo);
		LOG("\tUserID [%s]\n",pOpenAccount->UserID);
		LOG("\tErrorMsg [%s]\n",pOpenAccount->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pOpenAccount->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pOpenAccount->PlateSerial);
		LOG("\tSessionID [%d]\n",pOpenAccount->SessionID);
		LOG("\tInstallID [%d]\n",pOpenAccount->InstallID);
		LOG("\tTID [%d]\n",pOpenAccount->TID);
		LOG("\tErrorID [%d]\n",pOpenAccount->ErrorID);
		LOG("\tLastFragment [%c]\n",pOpenAccount->LastFragment);
		LOG("\tIdCardType [%c]\n",pOpenAccount->IdCardType);
		LOG("\tGender [%c]\n",pOpenAccount->Gender);
		LOG("\tCustType [%c]\n",pOpenAccount->CustType);
		LOG("\tMoneyAccountStatus [%c]\n",pOpenAccount->MoneyAccountStatus);
		LOG("\tVerifyCertNoFlag [%c]\n",pOpenAccount->VerifyCertNoFlag);
		LOG("\tCashExchangeCode [%c]\n",pOpenAccount->CashExchangeCode);
		LOG("\tBankAccType [%c]\n",pOpenAccount->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pOpenAccount->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pOpenAccount->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pOpenAccount->SecuPwdFlag);
	}
	LOG("</OnRtnOpenAccountByBank>\n");
};
void CTraderSpi::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) 
{
	LOG("<OnRtnCancelAccountByBank>\n");
	if (pCancelAccount)
	{
		LOG("\tTradeCode [%s]\n",pCancelAccount->TradeCode);
		LOG("\tBankID [%s]\n",pCancelAccount->BankID);
		LOG("\tBankBranchID [%s]\n",pCancelAccount->BankBranchID);
		LOG("\tBrokerID [%s]\n",pCancelAccount->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pCancelAccount->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pCancelAccount->TradeDate);
		LOG("\tTradeTime [%s]\n",pCancelAccount->TradeTime);
		LOG("\tBankSerial [%s]\n",pCancelAccount->BankSerial);
		LOG("\tTradingDay [%s]\n",pCancelAccount->TradingDay);
		LOG("\tCustomerName [%s]\n",pCancelAccount->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pCancelAccount->IdentifiedCardNo);
		LOG("\tCountryCode [%s]\n",pCancelAccount->CountryCode);
		LOG("\tAddress [%s]\n",pCancelAccount->Address);
		LOG("\tZipCode [%s]\n",pCancelAccount->ZipCode);
		LOG("\tTelephone [%s]\n",pCancelAccount->Telephone);
		LOG("\tMobilePhone [%s]\n",pCancelAccount->MobilePhone);
		LOG("\tFax [%s]\n",pCancelAccount->Fax);
		LOG("\tEMail [%s]\n",pCancelAccount->EMail);
		LOG("\tBankAccount [%s]\n",pCancelAccount->BankAccount);
		LOG("\tBankPassWord [%s]\n",pCancelAccount->BankPassWord);
		LOG("\tAccountID [%s]\n",pCancelAccount->AccountID);
		LOG("\tPassword [%s]\n",pCancelAccount->Password);
		LOG("\tCurrencyID [%s]\n",pCancelAccount->CurrencyID);
		LOG("\tDigest [%s]\n",pCancelAccount->Digest);
		LOG("\tDeviceID [%s]\n",pCancelAccount->DeviceID);
		LOG("\tBrokerIDByBank [%s]\n",pCancelAccount->BrokerIDByBank);
		LOG("\tBankSecuAcc [%s]\n",pCancelAccount->BankSecuAcc);
		LOG("\tOperNo [%s]\n",pCancelAccount->OperNo);
		LOG("\tUserID [%s]\n",pCancelAccount->UserID);
		LOG("\tErrorMsg [%s]\n",pCancelAccount->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pCancelAccount->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pCancelAccount->PlateSerial);
		LOG("\tSessionID [%d]\n",pCancelAccount->SessionID);
		LOG("\tInstallID [%d]\n",pCancelAccount->InstallID);
		LOG("\tTID [%d]\n",pCancelAccount->TID);
		LOG("\tErrorID [%d]\n",pCancelAccount->ErrorID);
		LOG("\tLastFragment [%c]\n",pCancelAccount->LastFragment);
		LOG("\tIdCardType [%c]\n",pCancelAccount->IdCardType);
		LOG("\tGender [%c]\n",pCancelAccount->Gender);
		LOG("\tCustType [%c]\n",pCancelAccount->CustType);
		LOG("\tMoneyAccountStatus [%c]\n",pCancelAccount->MoneyAccountStatus);
		LOG("\tVerifyCertNoFlag [%c]\n",pCancelAccount->VerifyCertNoFlag);
		LOG("\tCashExchangeCode [%c]\n",pCancelAccount->CashExchangeCode);
		LOG("\tBankAccType [%c]\n",pCancelAccount->BankAccType);
		LOG("\tBankSecuAccType [%c]\n",pCancelAccount->BankSecuAccType);
		LOG("\tBankPwdFlag [%c]\n",pCancelAccount->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pCancelAccount->SecuPwdFlag);
	}
	LOG("</OnRtnCancelAccountByBank>\n");
};
void CTraderSpi::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) 
{
	LOG("<OnRtnChangeAccountByBank>\n");
	if (pChangeAccount)
	{
		LOG("\tTradeCode [%s]\n",pChangeAccount->TradeCode);
		LOG("\tBankID [%s]\n",pChangeAccount->BankID);
		LOG("\tBankBranchID [%s]\n",pChangeAccount->BankBranchID);
		LOG("\tBrokerID [%s]\n",pChangeAccount->BrokerID);
		LOG("\tBrokerBranchID [%s]\n",pChangeAccount->BrokerBranchID);
		LOG("\tTradeDate [%s]\n",pChangeAccount->TradeDate);
		LOG("\tTradeTime [%s]\n",pChangeAccount->TradeTime);
		LOG("\tBankSerial [%s]\n",pChangeAccount->BankSerial);
		LOG("\tTradingDay [%s]\n",pChangeAccount->TradingDay);
		LOG("\tCustomerName [%s]\n",pChangeAccount->CustomerName);
		LOG("\tIdentifiedCardNo [%s]\n",pChangeAccount->IdentifiedCardNo);
		LOG("\tCountryCode [%s]\n",pChangeAccount->CountryCode);
		LOG("\tAddress [%s]\n",pChangeAccount->Address);
		LOG("\tZipCode [%s]\n",pChangeAccount->ZipCode);
		LOG("\tTelephone [%s]\n",pChangeAccount->Telephone);
		LOG("\tMobilePhone [%s]\n",pChangeAccount->MobilePhone);
		LOG("\tFax [%s]\n",pChangeAccount->Fax);
		LOG("\tEMail [%s]\n",pChangeAccount->EMail);
		LOG("\tBankAccount [%s]\n",pChangeAccount->BankAccount);
		LOG("\tBankPassWord [%s]\n",pChangeAccount->BankPassWord);
		LOG("\tNewBankAccount [%s]\n",pChangeAccount->NewBankAccount);
		LOG("\tNewBankPassWord [%s]\n",pChangeAccount->NewBankPassWord);
		LOG("\tAccountID [%s]\n",pChangeAccount->AccountID);
		LOG("\tPassword [%s]\n",pChangeAccount->Password);
		LOG("\tCurrencyID [%s]\n",pChangeAccount->CurrencyID);
		LOG("\tBrokerIDByBank [%s]\n",pChangeAccount->BrokerIDByBank);
		LOG("\tDigest [%s]\n",pChangeAccount->Digest);
		LOG("\tErrorMsg [%s]\n",pChangeAccount->ErrorMsg);
		LOG("\tLongCustomerName [%s]\n",pChangeAccount->LongCustomerName);
		LOG("\tPlateSerial [%d]\n",pChangeAccount->PlateSerial);
		LOG("\tSessionID [%d]\n",pChangeAccount->SessionID);
		LOG("\tInstallID [%d]\n",pChangeAccount->InstallID);
		LOG("\tTID [%d]\n",pChangeAccount->TID);
		LOG("\tErrorID [%d]\n",pChangeAccount->ErrorID);
		LOG("\tLastFragment [%c]\n",pChangeAccount->LastFragment);
		LOG("\tIdCardType [%c]\n",pChangeAccount->IdCardType);
		LOG("\tGender [%c]\n",pChangeAccount->Gender);
		LOG("\tCustType [%c]\n",pChangeAccount->CustType);
		LOG("\tMoneyAccountStatus [%c]\n",pChangeAccount->MoneyAccountStatus);
		LOG("\tBankAccType [%c]\n",pChangeAccount->BankAccType);
		LOG("\tVerifyCertNoFlag [%c]\n",pChangeAccount->VerifyCertNoFlag);
		LOG("\tBankPwdFlag [%c]\n",pChangeAccount->BankPwdFlag);
		LOG("\tSecuPwdFlag [%c]\n",pChangeAccount->SecuPwdFlag);
	}
	LOG("</OnRtnChangeAccountByBank>\n");
};
