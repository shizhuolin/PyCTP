#pragma  once
#include "stdafx.h"
#include "traderApi.h"
#include <stdio.h>
#include "define.h"

CThostFtdcTraderApi* CTraderApi::CreateFtdcTraderApi(const char *pszFlowPath /*= ""*/)
{
	return m_pApi = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath);
}

const char * CTraderApi::GetApiVersion()
{
	return m_pApi->GetApiVersion();
}

/////////////////////////////////////////////////////////////////////////////以下可替换模板

void CTraderApi::Release()
{
	LOG("<Release>\n");
	LOG("</Release>\n");

	m_pApi->Release();
};
 
void CTraderApi::Init()
{
	LOG("<Init>\n");
	LOG("</Init>\n");

	m_pApi->Init();
};
 
int CTraderApi::Join()
{
	LOG("<Join>\n");
	LOG("</Join>\n");

	return m_pApi->Join();
};
const char *CTraderApi::GetTradingDay()
{
	LOG("<GetTradingDay>\n");
	LOG("</GetTradingDay>\n");

	return m_pApi->GetTradingDay();
};
 
void CTraderApi::RegisterFront(char *pszFrontAddress)
{
	LOG("<RegisterFront>\n");
	LOG("\tpszFrontAddress [%s]\n",pszFrontAddress);
	LOG("</RegisterFront>\n");

	m_pApi->RegisterFront(pszFrontAddress);
}
 
void CTraderApi::RegisterNameServer(char *pszNsAddress)
{
	LOG("<RegisterNameServer>\n");
	LOG("\tpszNsAddress [%s]\n",pszNsAddress);
	LOG("</RegisterNameServer>\n");

	m_pApi->RegisterNameServer(pszNsAddress);
}
 
void CTraderApi::RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo)
{
	LOG("<RegisterFensUserInfo>\n");
	if ( pFensUserInfo)
	{
		LOG("\tBrokerID [%s]\n", pFensUserInfo->BrokerID);
		LOG("\tUserID [%s]\n", pFensUserInfo->UserID);
		LOG("\tLoginMode [%c]\n", pFensUserInfo->LoginMode);
	}
	LOG("</RegisterFensUserInfo>\n");

	m_pApi->RegisterFensUserInfo( pFensUserInfo);
};
 
void CTraderApi::RegisterSpi(CThostFtdcTraderSpi *pSpi)
{
	LOG("<RegisterSpi>\n");
	if (pSpi)
	{
	}
	LOG("</RegisterSpi>\n");

	m_pApi->RegisterSpi(pSpi);
};
 
void CTraderApi::SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType)
{
	LOG("<SubscribePrivateTopic>\n");
	LOG("\tnResumeType [%d]\n",nResumeType);
	LOG("</SubscribePrivateTopic>\n");

	m_pApi->SubscribePrivateTopic(nResumeType);
}
 
void CTraderApi::SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType)
{
	LOG("<SubscribePublicTopic>\n");
	LOG("\tnResumeType [%d]\n",nResumeType);
	LOG("</SubscribePublicTopic>\n");

	m_pApi->SubscribePublicTopic(nResumeType);
}
 
int CTraderApi::ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID)
{
	LOG("<ReqAuthenticate>\n");
	if (pReqAuthenticateField)
	{
		LOG("\tBrokerID [%s]\n",pReqAuthenticateField->BrokerID);
		LOG("\tUserID [%s]\n",pReqAuthenticateField->UserID);
		LOG("\tUserProductInfo [%s]\n",pReqAuthenticateField->UserProductInfo);
		LOG("\tAuthCode [%s]\n",pReqAuthenticateField->AuthCode);
		LOG("\tAppID [%s]\n",pReqAuthenticateField->AppID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqAuthenticate>\n");

	return m_pApi->ReqAuthenticate(pReqAuthenticateField, nRequestID);
};
 

int CTraderApi::RegisterUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo)
{
	LOG("<RegisterUserSystemInfo>\n");
	if (pUserSystemInfo)
	{
		LOG("\tBrokerID [%s]\n",pUserSystemInfo->BrokerID);
		LOG("\tUserID [%s]\n",pUserSystemInfo->UserID);
		LOG("\tClientSystemInfo [%s]\n",pUserSystemInfo->ClientSystemInfo);
		LOG("\tClientPublicIP [%s]\n",pUserSystemInfo->ClientPublicIP);
		LOG("\tClientLoginTime [%s]\n",pUserSystemInfo->ClientLoginTime);
		LOG("\tClientAppID [%s]\n",pUserSystemInfo->ClientAppID);
		LOG("\tClientSystemInfoLen [%d]\n",pUserSystemInfo->ClientSystemInfoLen);
		LOG("\tClientIPPort [%d]\n",pUserSystemInfo->ClientIPPort);
	}
	LOG("</RegisterUserSystemInfo>\n");

	return m_pApi->RegisterUserSystemInfo(pUserSystemInfo);
};
 
int CTraderApi::SubmitUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo)
{
	LOG("<SubmitUserSystemInfo>\n");
	if (pUserSystemInfo)
	{
		LOG("\tBrokerID [%s]\n",pUserSystemInfo->BrokerID);
		LOG("\tUserID [%s]\n",pUserSystemInfo->UserID);
		LOG("\tClientSystemInfo [%s]\n",pUserSystemInfo->ClientSystemInfo);
		LOG("\tClientPublicIP [%s]\n",pUserSystemInfo->ClientPublicIP);
		LOG("\tClientLoginTime [%s]\n",pUserSystemInfo->ClientLoginTime);
		LOG("\tClientAppID [%s]\n",pUserSystemInfo->ClientAppID);
		LOG("\tClientSystemInfoLen [%d]\n",pUserSystemInfo->ClientSystemInfoLen);
		LOG("\tClientIPPort [%d]\n",pUserSystemInfo->ClientIPPort);
	}
	LOG("</SubmitUserSystemInfo>\n");

	return m_pApi->SubmitUserSystemInfo(pUserSystemInfo);
};
 
int CTraderApi::ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
{
	LOG("<ReqUserLogin>\n");
	if (pReqUserLoginField)
	{
		LOG("\tTradingDay [%s]\n",pReqUserLoginField->TradingDay);
		LOG("\tBrokerID [%s]\n",pReqUserLoginField->BrokerID);
		LOG("\tUserID [%s]\n",pReqUserLoginField->UserID);
		LOG("\tPassword [%s]\n",pReqUserLoginField->Password);
		LOG("\tUserProductInfo [%s]\n",pReqUserLoginField->UserProductInfo);
		LOG("\tInterfaceProductInfo [%s]\n",pReqUserLoginField->InterfaceProductInfo);
		LOG("\tProtocolInfo [%s]\n",pReqUserLoginField->ProtocolInfo);
		LOG("\tMacAddress [%s]\n",pReqUserLoginField->MacAddress);
		LOG("\tOneTimePassword [%s]\n",pReqUserLoginField->OneTimePassword);
		LOG("\tClientIPAddress [%s]\n",pReqUserLoginField->ClientIPAddress);
		LOG("\tLoginRemark [%s]\n",pReqUserLoginField->LoginRemark);
		LOG("\tClientIPPort [%d]\n",pReqUserLoginField->ClientIPPort);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqUserLogin>\n");

	return m_pApi->ReqUserLogin(pReqUserLoginField, nRequestID);
};
 

int CTraderApi::ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
{
	LOG("<ReqUserLogout>\n");
	if (pUserLogout)
	{
		LOG("\tBrokerID [%s]\n",pUserLogout->BrokerID);
		LOG("\tUserID [%s]\n",pUserLogout->UserID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqUserLogout>\n");

	return m_pApi->ReqUserLogout(pUserLogout, nRequestID);
};
 

int CTraderApi::ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID)
{
	LOG("<ReqUserPasswordUpdate>\n");
	if (pUserPasswordUpdate)
	{
		LOG("\tBrokerID [%s]\n",pUserPasswordUpdate->BrokerID);
		LOG("\tUserID [%s]\n",pUserPasswordUpdate->UserID);
		LOG("\tOldPassword [%s]\n",pUserPasswordUpdate->OldPassword);
		LOG("\tNewPassword [%s]\n",pUserPasswordUpdate->NewPassword);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqUserPasswordUpdate>\n");

	return m_pApi->ReqUserPasswordUpdate(pUserPasswordUpdate, nRequestID);
};
 

int CTraderApi::ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID)
{
	LOG("<ReqTradingAccountPasswordUpdate>\n");
	if (pTradingAccountPasswordUpdate)
	{
		LOG("\tBrokerID [%s]\n",pTradingAccountPasswordUpdate->BrokerID);
		LOG("\tAccountID [%s]\n",pTradingAccountPasswordUpdate->AccountID);
		LOG("\tOldPassword [%s]\n",pTradingAccountPasswordUpdate->OldPassword);
		LOG("\tNewPassword [%s]\n",pTradingAccountPasswordUpdate->NewPassword);
		LOG("\tCurrencyID [%s]\n",pTradingAccountPasswordUpdate->CurrencyID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqTradingAccountPasswordUpdate>\n");

	return m_pApi->ReqTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, nRequestID);
};
 

int CTraderApi::ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField *pReqUserAuthMethod, int nRequestID)
{
	LOG("<ReqUserAuthMethod>\n");
	if (pReqUserAuthMethod)
	{
		LOG("\tTradingDay [%s]\n",pReqUserAuthMethod->TradingDay);
		LOG("\tBrokerID [%s]\n",pReqUserAuthMethod->BrokerID);
		LOG("\tUserID [%s]\n",pReqUserAuthMethod->UserID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqUserAuthMethod>\n");

	return m_pApi->ReqUserAuthMethod(pReqUserAuthMethod, nRequestID);
};
 

int CTraderApi::ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField *pReqGenUserCaptcha, int nRequestID)
{
	LOG("<ReqGenUserCaptcha>\n");
	if (pReqGenUserCaptcha)
	{
		LOG("\tTradingDay [%s]\n",pReqGenUserCaptcha->TradingDay);
		LOG("\tBrokerID [%s]\n",pReqGenUserCaptcha->BrokerID);
		LOG("\tUserID [%s]\n",pReqGenUserCaptcha->UserID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqGenUserCaptcha>\n");

	return m_pApi->ReqGenUserCaptcha(pReqGenUserCaptcha, nRequestID);
};
 

int CTraderApi::ReqGenUserText(CThostFtdcReqGenUserTextField *pReqGenUserText, int nRequestID)
{
	LOG("<ReqGenUserText>\n");
	if (pReqGenUserText)
	{
		LOG("\tTradingDay [%s]\n",pReqGenUserText->TradingDay);
		LOG("\tBrokerID [%s]\n",pReqGenUserText->BrokerID);
		LOG("\tUserID [%s]\n",pReqGenUserText->UserID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqGenUserText>\n");

	return m_pApi->ReqGenUserText(pReqGenUserText, nRequestID);
};
 

int CTraderApi::ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField *pReqUserLoginWithCaptcha, int nRequestID)
{
	LOG("<ReqUserLoginWithCaptcha>\n");
	if (pReqUserLoginWithCaptcha)
	{
		LOG("\tTradingDay [%s]\n",pReqUserLoginWithCaptcha->TradingDay);
		LOG("\tBrokerID [%s]\n",pReqUserLoginWithCaptcha->BrokerID);
		LOG("\tUserID [%s]\n",pReqUserLoginWithCaptcha->UserID);
		LOG("\tPassword [%s]\n",pReqUserLoginWithCaptcha->Password);
		LOG("\tUserProductInfo [%s]\n",pReqUserLoginWithCaptcha->UserProductInfo);
		LOG("\tInterfaceProductInfo [%s]\n",pReqUserLoginWithCaptcha->InterfaceProductInfo);
		LOG("\tProtocolInfo [%s]\n",pReqUserLoginWithCaptcha->ProtocolInfo);
		LOG("\tMacAddress [%s]\n",pReqUserLoginWithCaptcha->MacAddress);
		LOG("\tClientIPAddress [%s]\n",pReqUserLoginWithCaptcha->ClientIPAddress);
		LOG("\tLoginRemark [%s]\n",pReqUserLoginWithCaptcha->LoginRemark);
		LOG("\tCaptcha [%s]\n",pReqUserLoginWithCaptcha->Captcha);
		LOG("\tClientIPPort [%d]\n",pReqUserLoginWithCaptcha->ClientIPPort);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqUserLoginWithCaptcha>\n");

	return m_pApi->ReqUserLoginWithCaptcha(pReqUserLoginWithCaptcha, nRequestID);
};
 

int CTraderApi::ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField *pReqUserLoginWithText, int nRequestID)
{
	LOG("<ReqUserLoginWithText>\n");
	if (pReqUserLoginWithText)
	{
		LOG("\tTradingDay [%s]\n",pReqUserLoginWithText->TradingDay);
		LOG("\tBrokerID [%s]\n",pReqUserLoginWithText->BrokerID);
		LOG("\tUserID [%s]\n",pReqUserLoginWithText->UserID);
		LOG("\tPassword [%s]\n",pReqUserLoginWithText->Password);
		LOG("\tUserProductInfo [%s]\n",pReqUserLoginWithText->UserProductInfo);
		LOG("\tInterfaceProductInfo [%s]\n",pReqUserLoginWithText->InterfaceProductInfo);
		LOG("\tProtocolInfo [%s]\n",pReqUserLoginWithText->ProtocolInfo);
		LOG("\tMacAddress [%s]\n",pReqUserLoginWithText->MacAddress);
		LOG("\tClientIPAddress [%s]\n",pReqUserLoginWithText->ClientIPAddress);
		LOG("\tLoginRemark [%s]\n",pReqUserLoginWithText->LoginRemark);
		LOG("\tText [%s]\n",pReqUserLoginWithText->Text);
		LOG("\tClientIPPort [%d]\n",pReqUserLoginWithText->ClientIPPort);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqUserLoginWithText>\n");

	return m_pApi->ReqUserLoginWithText(pReqUserLoginWithText, nRequestID);
};
 

int CTraderApi::ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField *pReqUserLoginWithOTP, int nRequestID)
{
	LOG("<ReqUserLoginWithOTP>\n");
	if (pReqUserLoginWithOTP)
	{
		LOG("\tTradingDay [%s]\n",pReqUserLoginWithOTP->TradingDay);
		LOG("\tBrokerID [%s]\n",pReqUserLoginWithOTP->BrokerID);
		LOG("\tUserID [%s]\n",pReqUserLoginWithOTP->UserID);
		LOG("\tPassword [%s]\n",pReqUserLoginWithOTP->Password);
		LOG("\tUserProductInfo [%s]\n",pReqUserLoginWithOTP->UserProductInfo);
		LOG("\tInterfaceProductInfo [%s]\n",pReqUserLoginWithOTP->InterfaceProductInfo);
		LOG("\tProtocolInfo [%s]\n",pReqUserLoginWithOTP->ProtocolInfo);
		LOG("\tMacAddress [%s]\n",pReqUserLoginWithOTP->MacAddress);
		LOG("\tClientIPAddress [%s]\n",pReqUserLoginWithOTP->ClientIPAddress);
		LOG("\tLoginRemark [%s]\n",pReqUserLoginWithOTP->LoginRemark);
		LOG("\tOTPPassword [%s]\n",pReqUserLoginWithOTP->OTPPassword);
		LOG("\tClientIPPort [%d]\n",pReqUserLoginWithOTP->ClientIPPort);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqUserLoginWithOTP>\n");

	return m_pApi->ReqUserLoginWithOTP(pReqUserLoginWithOTP, nRequestID);
};
 

int CTraderApi::ReqOrderInsert(CThostFtdcInputOrderField *pInputOrder, int nRequestID)
{
	LOG("<ReqOrderInsert>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqOrderInsert>\n");

	return m_pApi->ReqOrderInsert(pInputOrder, nRequestID);
};
 

int CTraderApi::ReqParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, int nRequestID)
{
	LOG("<ReqParkedOrderInsert>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqParkedOrderInsert>\n");

	return m_pApi->ReqParkedOrderInsert(pParkedOrder, nRequestID);
};
 

int CTraderApi::ReqParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID)
{
	LOG("<ReqParkedOrderAction>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqParkedOrderAction>\n");

	return m_pApi->ReqParkedOrderAction(pParkedOrderAction, nRequestID);
};
 

int CTraderApi::ReqOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID)
{
	LOG("<ReqOrderAction>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqOrderAction>\n");

	return m_pApi->ReqOrderAction(pInputOrderAction, nRequestID);
};
 

int CTraderApi::ReqQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID)
{
	LOG("<ReqQueryMaxOrderVolume>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQueryMaxOrderVolume>\n");

	return m_pApi->ReqQueryMaxOrderVolume(pQueryMaxOrderVolume, nRequestID);
};
 

int CTraderApi::ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID)
{
	LOG("<ReqSettlementInfoConfirm>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqSettlementInfoConfirm>\n");

	return m_pApi->ReqSettlementInfoConfirm(pSettlementInfoConfirm, nRequestID);
};
 

int CTraderApi::ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID)
{
	LOG("<ReqRemoveParkedOrder>\n");
	if (pRemoveParkedOrder)
	{
		LOG("\tBrokerID [%s]\n",pRemoveParkedOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pRemoveParkedOrder->InvestorID);
		LOG("\tParkedOrderID [%s]\n",pRemoveParkedOrder->ParkedOrderID);
		LOG("\tInvestUnitID [%s]\n",pRemoveParkedOrder->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqRemoveParkedOrder>\n");

	return m_pApi->ReqRemoveParkedOrder(pRemoveParkedOrder, nRequestID);
};
 

int CTraderApi::ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID)
{
	LOG("<ReqRemoveParkedOrderAction>\n");
	if (pRemoveParkedOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pRemoveParkedOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pRemoveParkedOrderAction->InvestorID);
		LOG("\tParkedOrderActionID [%s]\n",pRemoveParkedOrderAction->ParkedOrderActionID);
		LOG("\tInvestUnitID [%s]\n",pRemoveParkedOrderAction->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqRemoveParkedOrderAction>\n");

	return m_pApi->ReqRemoveParkedOrderAction(pRemoveParkedOrderAction, nRequestID);
};
 

int CTraderApi::ReqExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, int nRequestID)
{
	LOG("<ReqExecOrderInsert>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqExecOrderInsert>\n");

	return m_pApi->ReqExecOrderInsert(pInputExecOrder, nRequestID);
};
 

int CTraderApi::ReqExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID)
{
	LOG("<ReqExecOrderAction>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqExecOrderAction>\n");

	return m_pApi->ReqExecOrderAction(pInputExecOrderAction, nRequestID);
};
 

int CTraderApi::ReqForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, int nRequestID)
{
	LOG("<ReqForQuoteInsert>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqForQuoteInsert>\n");

	return m_pApi->ReqForQuoteInsert(pInputForQuote, nRequestID);
};
 

int CTraderApi::ReqQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, int nRequestID)
{
	LOG("<ReqQuoteInsert>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQuoteInsert>\n");

	return m_pApi->ReqQuoteInsert(pInputQuote, nRequestID);
};
 

int CTraderApi::ReqQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID)
{
	LOG("<ReqQuoteAction>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQuoteAction>\n");

	return m_pApi->ReqQuoteAction(pInputQuoteAction, nRequestID);
};
 

int CTraderApi::ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, int nRequestID)
{
	LOG("<ReqBatchOrderAction>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqBatchOrderAction>\n");

	return m_pApi->ReqBatchOrderAction(pInputBatchOrderAction, nRequestID);
};
 

int CTraderApi::ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, int nRequestID)
{
	LOG("<ReqOptionSelfCloseInsert>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqOptionSelfCloseInsert>\n");

	return m_pApi->ReqOptionSelfCloseInsert(pInputOptionSelfClose, nRequestID);
};
 

int CTraderApi::ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, int nRequestID)
{
	LOG("<ReqOptionSelfCloseAction>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqOptionSelfCloseAction>\n");

	return m_pApi->ReqOptionSelfCloseAction(pInputOptionSelfCloseAction, nRequestID);
};
 

int CTraderApi::ReqCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, int nRequestID)
{
	LOG("<ReqCombActionInsert>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqCombActionInsert>\n");

	return m_pApi->ReqCombActionInsert(pInputCombAction, nRequestID);
};
 

int CTraderApi::ReqQryOrder(CThostFtdcQryOrderField *pQryOrder, int nRequestID)
{
	LOG("<ReqQryOrder>\n");
	if (pQryOrder)
	{
		LOG("\tBrokerID [%s]\n",pQryOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryOrder->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryOrder->ExchangeID);
		LOG("\tOrderSysID [%s]\n",pQryOrder->OrderSysID);
		LOG("\tInsertTimeStart [%s]\n",pQryOrder->InsertTimeStart);
		LOG("\tInsertTimeEnd [%s]\n",pQryOrder->InsertTimeEnd);
		LOG("\tInvestUnitID [%s]\n",pQryOrder->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryOrder>\n");

	return m_pApi->ReqQryOrder(pQryOrder, nRequestID);
};
 

int CTraderApi::ReqQryTrade(CThostFtdcQryTradeField *pQryTrade, int nRequestID)
{
	LOG("<ReqQryTrade>\n");
	if (pQryTrade)
	{
		LOG("\tBrokerID [%s]\n",pQryTrade->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryTrade->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryTrade->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryTrade->ExchangeID);
		LOG("\tTradeID [%s]\n",pQryTrade->TradeID);
		LOG("\tTradeTimeStart [%s]\n",pQryTrade->TradeTimeStart);
		LOG("\tTradeTimeEnd [%s]\n",pQryTrade->TradeTimeEnd);
		LOG("\tInvestUnitID [%s]\n",pQryTrade->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryTrade>\n");

	return m_pApi->ReqQryTrade(pQryTrade, nRequestID);
};
 

int CTraderApi::ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID)
{
	LOG("<ReqQryInvestorPosition>\n");
	if (pQryInvestorPosition)
	{
		LOG("\tBrokerID [%s]\n",pQryInvestorPosition->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInvestorPosition->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryInvestorPosition->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryInvestorPosition->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryInvestorPosition->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInvestorPosition>\n");

	return m_pApi->ReqQryInvestorPosition(pQryInvestorPosition, nRequestID);
};
 

int CTraderApi::ReqQryTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
{
	LOG("<ReqQryTradingAccount>\n");
	if (pQryTradingAccount)
	{
		LOG("\tBrokerID [%s]\n",pQryTradingAccount->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryTradingAccount->InvestorID);
		LOG("\tCurrencyID [%s]\n",pQryTradingAccount->CurrencyID);
		LOG("\tAccountID [%s]\n",pQryTradingAccount->AccountID);
		LOG("\tBizType [%c]\n",pQryTradingAccount->BizType);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryTradingAccount>\n");

	return m_pApi->ReqQryTradingAccount(pQryTradingAccount, nRequestID);
};
 

int CTraderApi::ReqQryInvestor(CThostFtdcQryInvestorField *pQryInvestor, int nRequestID)
{
	LOG("<ReqQryInvestor>\n");
	if (pQryInvestor)
	{
		LOG("\tBrokerID [%s]\n",pQryInvestor->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInvestor->InvestorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInvestor>\n");

	return m_pApi->ReqQryInvestor(pQryInvestor, nRequestID);
};
 

int CTraderApi::ReqQryTradingCode(CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID)
{
	LOG("<ReqQryTradingCode>\n");
	if (pQryTradingCode)
	{
		LOG("\tBrokerID [%s]\n",pQryTradingCode->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryTradingCode->InvestorID);
		LOG("\tExchangeID [%s]\n",pQryTradingCode->ExchangeID);
		LOG("\tClientID [%s]\n",pQryTradingCode->ClientID);
		LOG("\tInvestUnitID [%s]\n",pQryTradingCode->InvestUnitID);
		LOG("\tClientIDType [%c]\n",pQryTradingCode->ClientIDType);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryTradingCode>\n");

	return m_pApi->ReqQryTradingCode(pQryTradingCode, nRequestID);
};
 

int CTraderApi::ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID)
{
	LOG("<ReqQryInstrumentMarginRate>\n");
	if (pQryInstrumentMarginRate)
	{
		LOG("\tBrokerID [%s]\n",pQryInstrumentMarginRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInstrumentMarginRate->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryInstrumentMarginRate->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryInstrumentMarginRate->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryInstrumentMarginRate->InvestUnitID);
		LOG("\tHedgeFlag [%c]\n",pQryInstrumentMarginRate->HedgeFlag);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInstrumentMarginRate>\n");

	return m_pApi->ReqQryInstrumentMarginRate(pQryInstrumentMarginRate, nRequestID);
};
 

int CTraderApi::ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID)
{
	LOG("<ReqQryInstrumentCommissionRate>\n");
	if (pQryInstrumentCommissionRate)
	{
		LOG("\tBrokerID [%s]\n",pQryInstrumentCommissionRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInstrumentCommissionRate->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryInstrumentCommissionRate->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryInstrumentCommissionRate->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryInstrumentCommissionRate->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInstrumentCommissionRate>\n");

	return m_pApi->ReqQryInstrumentCommissionRate(pQryInstrumentCommissionRate, nRequestID);
};
 

int CTraderApi::ReqQryExchange(CThostFtdcQryExchangeField *pQryExchange, int nRequestID)
{
	LOG("<ReqQryExchange>\n");
	if (pQryExchange)
	{
		LOG("\tExchangeID [%s]\n",pQryExchange->ExchangeID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryExchange>\n");

	return m_pApi->ReqQryExchange(pQryExchange, nRequestID);
};
 

int CTraderApi::ReqQryProduct(CThostFtdcQryProductField *pQryProduct, int nRequestID)
{
	LOG("<ReqQryProduct>\n");
	if (pQryProduct)
	{
		LOG("\tProductID [%s]\n",pQryProduct->ProductID);
		LOG("\tExchangeID [%s]\n",pQryProduct->ExchangeID);
		LOG("\tProductClass [%c]\n",pQryProduct->ProductClass);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryProduct>\n");

	return m_pApi->ReqQryProduct(pQryProduct, nRequestID);
};
 

int CTraderApi::ReqQryInstrument(CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID)
{
	LOG("<ReqQryInstrument>\n");
	if (pQryInstrument)
	{
		LOG("\tInstrumentID [%s]\n",pQryInstrument->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryInstrument->ExchangeID);
		LOG("\tExchangeInstID [%s]\n",pQryInstrument->ExchangeInstID);
		LOG("\tProductID [%s]\n",pQryInstrument->ProductID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInstrument>\n");

	return m_pApi->ReqQryInstrument(pQryInstrument, nRequestID);
};
 

int CTraderApi::ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID)
{
	LOG("<ReqQryDepthMarketData>\n");
	if (pQryDepthMarketData)
	{
		LOG("\tInstrumentID [%s]\n",pQryDepthMarketData->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryDepthMarketData->ExchangeID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryDepthMarketData>\n");

	return m_pApi->ReqQryDepthMarketData(pQryDepthMarketData, nRequestID);
};
 

int CTraderApi::ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID)
{
	LOG("<ReqQrySettlementInfo>\n");
	if (pQrySettlementInfo)
	{
		LOG("\tBrokerID [%s]\n",pQrySettlementInfo->BrokerID);
		LOG("\tInvestorID [%s]\n",pQrySettlementInfo->InvestorID);
		LOG("\tTradingDay [%s]\n",pQrySettlementInfo->TradingDay);
		LOG("\tAccountID [%s]\n",pQrySettlementInfo->AccountID);
		LOG("\tCurrencyID [%s]\n",pQrySettlementInfo->CurrencyID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQrySettlementInfo>\n");

	return m_pApi->ReqQrySettlementInfo(pQrySettlementInfo, nRequestID);
};
 

int CTraderApi::ReqQryTransferBank(CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID)
{
	LOG("<ReqQryTransferBank>\n");
	if (pQryTransferBank)
	{
		LOG("\tBankID [%s]\n",pQryTransferBank->BankID);
		LOG("\tBankBrchID [%s]\n",pQryTransferBank->BankBrchID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryTransferBank>\n");

	return m_pApi->ReqQryTransferBank(pQryTransferBank, nRequestID);
};
 

int CTraderApi::ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID)
{
	LOG("<ReqQryInvestorPositionDetail>\n");
	if (pQryInvestorPositionDetail)
	{
		LOG("\tBrokerID [%s]\n",pQryInvestorPositionDetail->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInvestorPositionDetail->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryInvestorPositionDetail->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryInvestorPositionDetail->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryInvestorPositionDetail->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInvestorPositionDetail>\n");

	return m_pApi->ReqQryInvestorPositionDetail(pQryInvestorPositionDetail, nRequestID);
};
 

int CTraderApi::ReqQryNotice(CThostFtdcQryNoticeField *pQryNotice, int nRequestID)
{
	LOG("<ReqQryNotice>\n");
	if (pQryNotice)
	{
		LOG("\tBrokerID [%s]\n",pQryNotice->BrokerID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryNotice>\n");

	return m_pApi->ReqQryNotice(pQryNotice, nRequestID);
};
 

int CTraderApi::ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID)
{
	LOG("<ReqQrySettlementInfoConfirm>\n");
	if (pQrySettlementInfoConfirm)
	{
		LOG("\tBrokerID [%s]\n",pQrySettlementInfoConfirm->BrokerID);
		LOG("\tInvestorID [%s]\n",pQrySettlementInfoConfirm->InvestorID);
		LOG("\tAccountID [%s]\n",pQrySettlementInfoConfirm->AccountID);
		LOG("\tCurrencyID [%s]\n",pQrySettlementInfoConfirm->CurrencyID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQrySettlementInfoConfirm>\n");

	return m_pApi->ReqQrySettlementInfoConfirm(pQrySettlementInfoConfirm, nRequestID);
};
 

int CTraderApi::ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID)
{
	LOG("<ReqQryInvestorPositionCombineDetail>\n");
	if (pQryInvestorPositionCombineDetail)
	{
		LOG("\tBrokerID [%s]\n",pQryInvestorPositionCombineDetail->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInvestorPositionCombineDetail->InvestorID);
		LOG("\tCombInstrumentID [%s]\n",pQryInvestorPositionCombineDetail->CombInstrumentID);
		LOG("\tExchangeID [%s]\n",pQryInvestorPositionCombineDetail->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryInvestorPositionCombineDetail->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInvestorPositionCombineDetail>\n");

	return m_pApi->ReqQryInvestorPositionCombineDetail(pQryInvestorPositionCombineDetail, nRequestID);
};
 

int CTraderApi::ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID)
{
	LOG("<ReqQryCFMMCTradingAccountKey>\n");
	if (pQryCFMMCTradingAccountKey)
	{
		LOG("\tBrokerID [%s]\n",pQryCFMMCTradingAccountKey->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryCFMMCTradingAccountKey->InvestorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryCFMMCTradingAccountKey>\n");

	return m_pApi->ReqQryCFMMCTradingAccountKey(pQryCFMMCTradingAccountKey, nRequestID);
};
 

int CTraderApi::ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID)
{
	LOG("<ReqQryEWarrantOffset>\n");
	if (pQryEWarrantOffset)
	{
		LOG("\tBrokerID [%s]\n",pQryEWarrantOffset->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryEWarrantOffset->InvestorID);
		LOG("\tExchangeID [%s]\n",pQryEWarrantOffset->ExchangeID);
		LOG("\tInstrumentID [%s]\n",pQryEWarrantOffset->InstrumentID);
		LOG("\tInvestUnitID [%s]\n",pQryEWarrantOffset->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryEWarrantOffset>\n");

	return m_pApi->ReqQryEWarrantOffset(pQryEWarrantOffset, nRequestID);
};
 

int CTraderApi::ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField *pQryInvestorProductGroupMargin, int nRequestID)
{
	LOG("<ReqQryInvestorProductGroupMargin>\n");
	if (pQryInvestorProductGroupMargin)
	{
		LOG("\tBrokerID [%s]\n",pQryInvestorProductGroupMargin->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInvestorProductGroupMargin->InvestorID);
		LOG("\tProductGroupID [%s]\n",pQryInvestorProductGroupMargin->ProductGroupID);
		LOG("\tExchangeID [%s]\n",pQryInvestorProductGroupMargin->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryInvestorProductGroupMargin->InvestUnitID);
		LOG("\tHedgeFlag [%c]\n",pQryInvestorProductGroupMargin->HedgeFlag);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInvestorProductGroupMargin>\n");

	return m_pApi->ReqQryInvestorProductGroupMargin(pQryInvestorProductGroupMargin, nRequestID);
};
 

int CTraderApi::ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField *pQryExchangeMarginRate, int nRequestID)
{
	LOG("<ReqQryExchangeMarginRate>\n");
	if (pQryExchangeMarginRate)
	{
		LOG("\tBrokerID [%s]\n",pQryExchangeMarginRate->BrokerID);
		LOG("\tInstrumentID [%s]\n",pQryExchangeMarginRate->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryExchangeMarginRate->ExchangeID);
		LOG("\tHedgeFlag [%c]\n",pQryExchangeMarginRate->HedgeFlag);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryExchangeMarginRate>\n");

	return m_pApi->ReqQryExchangeMarginRate(pQryExchangeMarginRate, nRequestID);
};
 

int CTraderApi::ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField *pQryExchangeMarginRateAdjust, int nRequestID)
{
	LOG("<ReqQryExchangeMarginRateAdjust>\n");
	if (pQryExchangeMarginRateAdjust)
	{
		LOG("\tBrokerID [%s]\n",pQryExchangeMarginRateAdjust->BrokerID);
		LOG("\tInstrumentID [%s]\n",pQryExchangeMarginRateAdjust->InstrumentID);
		LOG("\tHedgeFlag [%c]\n",pQryExchangeMarginRateAdjust->HedgeFlag);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryExchangeMarginRateAdjust>\n");

	return m_pApi->ReqQryExchangeMarginRateAdjust(pQryExchangeMarginRateAdjust, nRequestID);
};
 

int CTraderApi::ReqQryExchangeRate(CThostFtdcQryExchangeRateField *pQryExchangeRate, int nRequestID)
{
	LOG("<ReqQryExchangeRate>\n");
	if (pQryExchangeRate)
	{
		LOG("\tBrokerID [%s]\n",pQryExchangeRate->BrokerID);
		LOG("\tFromCurrencyID [%s]\n",pQryExchangeRate->FromCurrencyID);
		LOG("\tToCurrencyID [%s]\n",pQryExchangeRate->ToCurrencyID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryExchangeRate>\n");

	return m_pApi->ReqQryExchangeRate(pQryExchangeRate, nRequestID);
};
 

int CTraderApi::ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField *pQrySecAgentACIDMap, int nRequestID)
{
	LOG("<ReqQrySecAgentACIDMap>\n");
	if (pQrySecAgentACIDMap)
	{
		LOG("\tBrokerID [%s]\n",pQrySecAgentACIDMap->BrokerID);
		LOG("\tUserID [%s]\n",pQrySecAgentACIDMap->UserID);
		LOG("\tAccountID [%s]\n",pQrySecAgentACIDMap->AccountID);
		LOG("\tCurrencyID [%s]\n",pQrySecAgentACIDMap->CurrencyID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQrySecAgentACIDMap>\n");

	return m_pApi->ReqQrySecAgentACIDMap(pQrySecAgentACIDMap, nRequestID);
};
 

int CTraderApi::ReqQryProductExchRate(CThostFtdcQryProductExchRateField *pQryProductExchRate, int nRequestID)
{
	LOG("<ReqQryProductExchRate>\n");
	if (pQryProductExchRate)
	{
		LOG("\tProductID [%s]\n",pQryProductExchRate->ProductID);
		LOG("\tExchangeID [%s]\n",pQryProductExchRate->ExchangeID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryProductExchRate>\n");

	return m_pApi->ReqQryProductExchRate(pQryProductExchRate, nRequestID);
};
 

int CTraderApi::ReqQryProductGroup(CThostFtdcQryProductGroupField *pQryProductGroup, int nRequestID)
{
	LOG("<ReqQryProductGroup>\n");
	if (pQryProductGroup)
	{
		LOG("\tProductID [%s]\n",pQryProductGroup->ProductID);
		LOG("\tExchangeID [%s]\n",pQryProductGroup->ExchangeID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryProductGroup>\n");

	return m_pApi->ReqQryProductGroup(pQryProductGroup, nRequestID);
};
 

int CTraderApi::ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField *pQryMMInstrumentCommissionRate, int nRequestID)
{
	LOG("<ReqQryMMInstrumentCommissionRate>\n");
	if (pQryMMInstrumentCommissionRate)
	{
		LOG("\tBrokerID [%s]\n",pQryMMInstrumentCommissionRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryMMInstrumentCommissionRate->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryMMInstrumentCommissionRate->InstrumentID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryMMInstrumentCommissionRate>\n");

	return m_pApi->ReqQryMMInstrumentCommissionRate(pQryMMInstrumentCommissionRate, nRequestID);
};
 

int CTraderApi::ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField *pQryMMOptionInstrCommRate, int nRequestID)
{
	LOG("<ReqQryMMOptionInstrCommRate>\n");
	if (pQryMMOptionInstrCommRate)
	{
		LOG("\tBrokerID [%s]\n",pQryMMOptionInstrCommRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryMMOptionInstrCommRate->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryMMOptionInstrCommRate->InstrumentID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryMMOptionInstrCommRate>\n");

	return m_pApi->ReqQryMMOptionInstrCommRate(pQryMMOptionInstrCommRate, nRequestID);
};
 

int CTraderApi::ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField *pQryInstrumentOrderCommRate, int nRequestID)
{
	LOG("<ReqQryInstrumentOrderCommRate>\n");
	if (pQryInstrumentOrderCommRate)
	{
		LOG("\tBrokerID [%s]\n",pQryInstrumentOrderCommRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInstrumentOrderCommRate->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryInstrumentOrderCommRate->InstrumentID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInstrumentOrderCommRate>\n");

	return m_pApi->ReqQryInstrumentOrderCommRate(pQryInstrumentOrderCommRate, nRequestID);
};
 

int CTraderApi::ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
{
	LOG("<ReqQrySecAgentTradingAccount>\n");
	if (pQryTradingAccount)
	{
		LOG("\tBrokerID [%s]\n",pQryTradingAccount->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryTradingAccount->InvestorID);
		LOG("\tCurrencyID [%s]\n",pQryTradingAccount->CurrencyID);
		LOG("\tAccountID [%s]\n",pQryTradingAccount->AccountID);
		LOG("\tBizType [%c]\n",pQryTradingAccount->BizType);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQrySecAgentTradingAccount>\n");

	return m_pApi->ReqQrySecAgentTradingAccount(pQryTradingAccount, nRequestID);
};
 

int CTraderApi::ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField *pQrySecAgentCheckMode, int nRequestID)
{
	LOG("<ReqQrySecAgentCheckMode>\n");
	if (pQrySecAgentCheckMode)
	{
		LOG("\tBrokerID [%s]\n",pQrySecAgentCheckMode->BrokerID);
		LOG("\tInvestorID [%s]\n",pQrySecAgentCheckMode->InvestorID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQrySecAgentCheckMode>\n");

	return m_pApi->ReqQrySecAgentCheckMode(pQrySecAgentCheckMode, nRequestID);
};
 

int CTraderApi::ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField *pQrySecAgentTradeInfo, int nRequestID)
{
	LOG("<ReqQrySecAgentTradeInfo>\n");
	if (pQrySecAgentTradeInfo)
	{
		LOG("\tBrokerID [%s]\n",pQrySecAgentTradeInfo->BrokerID);
		LOG("\tBrokerSecAgentID [%s]\n",pQrySecAgentTradeInfo->BrokerSecAgentID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQrySecAgentTradeInfo>\n");

	return m_pApi->ReqQrySecAgentTradeInfo(pQrySecAgentTradeInfo, nRequestID);
};
 

int CTraderApi::ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField *pQryOptionInstrTradeCost, int nRequestID)
{
	LOG("<ReqQryOptionInstrTradeCost>\n");
	if (pQryOptionInstrTradeCost)
	{
		LOG("\tBrokerID [%s]\n",pQryOptionInstrTradeCost->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryOptionInstrTradeCost->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryOptionInstrTradeCost->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryOptionInstrTradeCost->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryOptionInstrTradeCost->InvestUnitID);
		LOG("\tHedgeFlag [%c]\n",pQryOptionInstrTradeCost->HedgeFlag);
		LOG("\tInputPrice [%.8lf]\n",pQryOptionInstrTradeCost->InputPrice);
		LOG("\tUnderlyingPrice [%.8lf]\n",pQryOptionInstrTradeCost->UnderlyingPrice);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryOptionInstrTradeCost>\n");

	return m_pApi->ReqQryOptionInstrTradeCost(pQryOptionInstrTradeCost, nRequestID);
};
 

int CTraderApi::ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField *pQryOptionInstrCommRate, int nRequestID)
{
	LOG("<ReqQryOptionInstrCommRate>\n");
	if (pQryOptionInstrCommRate)
	{
		LOG("\tBrokerID [%s]\n",pQryOptionInstrCommRate->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryOptionInstrCommRate->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryOptionInstrCommRate->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryOptionInstrCommRate->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryOptionInstrCommRate->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryOptionInstrCommRate>\n");

	return m_pApi->ReqQryOptionInstrCommRate(pQryOptionInstrCommRate, nRequestID);
};
 

int CTraderApi::ReqQryExecOrder(CThostFtdcQryExecOrderField *pQryExecOrder, int nRequestID)
{
	LOG("<ReqQryExecOrder>\n");
	if (pQryExecOrder)
	{
		LOG("\tBrokerID [%s]\n",pQryExecOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryExecOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryExecOrder->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryExecOrder->ExchangeID);
		LOG("\tExecOrderSysID [%s]\n",pQryExecOrder->ExecOrderSysID);
		LOG("\tInsertTimeStart [%s]\n",pQryExecOrder->InsertTimeStart);
		LOG("\tInsertTimeEnd [%s]\n",pQryExecOrder->InsertTimeEnd);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryExecOrder>\n");

	return m_pApi->ReqQryExecOrder(pQryExecOrder, nRequestID);
};
 

int CTraderApi::ReqQryForQuote(CThostFtdcQryForQuoteField *pQryForQuote, int nRequestID)
{
	LOG("<ReqQryForQuote>\n");
	if (pQryForQuote)
	{
		LOG("\tBrokerID [%s]\n",pQryForQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryForQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryForQuote->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryForQuote->ExchangeID);
		LOG("\tInsertTimeStart [%s]\n",pQryForQuote->InsertTimeStart);
		LOG("\tInsertTimeEnd [%s]\n",pQryForQuote->InsertTimeEnd);
		LOG("\tInvestUnitID [%s]\n",pQryForQuote->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryForQuote>\n");

	return m_pApi->ReqQryForQuote(pQryForQuote, nRequestID);
};
 

int CTraderApi::ReqQryQuote(CThostFtdcQryQuoteField *pQryQuote, int nRequestID)
{
	LOG("<ReqQryQuote>\n");
	if (pQryQuote)
	{
		LOG("\tBrokerID [%s]\n",pQryQuote->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryQuote->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryQuote->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryQuote->ExchangeID);
		LOG("\tQuoteSysID [%s]\n",pQryQuote->QuoteSysID);
		LOG("\tInsertTimeStart [%s]\n",pQryQuote->InsertTimeStart);
		LOG("\tInsertTimeEnd [%s]\n",pQryQuote->InsertTimeEnd);
		LOG("\tInvestUnitID [%s]\n",pQryQuote->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryQuote>\n");

	return m_pApi->ReqQryQuote(pQryQuote, nRequestID);
};
 

int CTraderApi::ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField *pQryOptionSelfClose, int nRequestID)
{
	LOG("<ReqQryOptionSelfClose>\n");
	if (pQryOptionSelfClose)
	{
		LOG("\tBrokerID [%s]\n",pQryOptionSelfClose->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryOptionSelfClose->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryOptionSelfClose->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryOptionSelfClose->ExchangeID);
		LOG("\tOptionSelfCloseSysID [%s]\n",pQryOptionSelfClose->OptionSelfCloseSysID);
		LOG("\tInsertTimeStart [%s]\n",pQryOptionSelfClose->InsertTimeStart);
		LOG("\tInsertTimeEnd [%s]\n",pQryOptionSelfClose->InsertTimeEnd);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryOptionSelfClose>\n");

	return m_pApi->ReqQryOptionSelfClose(pQryOptionSelfClose, nRequestID);
};
 

int CTraderApi::ReqQryInvestUnit(CThostFtdcQryInvestUnitField *pQryInvestUnit, int nRequestID)
{
	LOG("<ReqQryInvestUnit>\n");
	if (pQryInvestUnit)
	{
		LOG("\tBrokerID [%s]\n",pQryInvestUnit->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryInvestUnit->InvestorID);
		LOG("\tInvestUnitID [%s]\n",pQryInvestUnit->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryInvestUnit>\n");

	return m_pApi->ReqQryInvestUnit(pQryInvestUnit, nRequestID);
};
 

int CTraderApi::ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField *pQryCombInstrumentGuard, int nRequestID)
{
	LOG("<ReqQryCombInstrumentGuard>\n");
	if (pQryCombInstrumentGuard)
	{
		LOG("\tBrokerID [%s]\n",pQryCombInstrumentGuard->BrokerID);
		LOG("\tInstrumentID [%s]\n",pQryCombInstrumentGuard->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryCombInstrumentGuard->ExchangeID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryCombInstrumentGuard>\n");

	return m_pApi->ReqQryCombInstrumentGuard(pQryCombInstrumentGuard, nRequestID);
};
 

int CTraderApi::ReqQryCombAction(CThostFtdcQryCombActionField *pQryCombAction, int nRequestID)
{
	LOG("<ReqQryCombAction>\n");
	if (pQryCombAction)
	{
		LOG("\tBrokerID [%s]\n",pQryCombAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryCombAction->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryCombAction->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryCombAction->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryCombAction->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryCombAction>\n");

	return m_pApi->ReqQryCombAction(pQryCombAction, nRequestID);
};
 

int CTraderApi::ReqQryTransferSerial(CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID)
{
	LOG("<ReqQryTransferSerial>\n");
	if (pQryTransferSerial)
	{
		LOG("\tBrokerID [%s]\n",pQryTransferSerial->BrokerID);
		LOG("\tAccountID [%s]\n",pQryTransferSerial->AccountID);
		LOG("\tBankID [%s]\n",pQryTransferSerial->BankID);
		LOG("\tCurrencyID [%s]\n",pQryTransferSerial->CurrencyID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryTransferSerial>\n");

	return m_pApi->ReqQryTransferSerial(pQryTransferSerial, nRequestID);
};
 

int CTraderApi::ReqQryAccountregister(CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID)
{
	LOG("<ReqQryAccountregister>\n");
	if (pQryAccountregister)
	{
		LOG("\tBrokerID [%s]\n",pQryAccountregister->BrokerID);
		LOG("\tAccountID [%s]\n",pQryAccountregister->AccountID);
		LOG("\tBankID [%s]\n",pQryAccountregister->BankID);
		LOG("\tBankBranchID [%s]\n",pQryAccountregister->BankBranchID);
		LOG("\tCurrencyID [%s]\n",pQryAccountregister->CurrencyID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryAccountregister>\n");

	return m_pApi->ReqQryAccountregister(pQryAccountregister, nRequestID);
};
 

int CTraderApi::ReqQryContractBank(CThostFtdcQryContractBankField *pQryContractBank, int nRequestID)
{
	LOG("<ReqQryContractBank>\n");
	if (pQryContractBank)
	{
		LOG("\tBrokerID [%s]\n",pQryContractBank->BrokerID);
		LOG("\tBankID [%s]\n",pQryContractBank->BankID);
		LOG("\tBankBrchID [%s]\n",pQryContractBank->BankBrchID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryContractBank>\n");

	return m_pApi->ReqQryContractBank(pQryContractBank, nRequestID);
};
 

int CTraderApi::ReqQryParkedOrder(CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID)
{
	LOG("<ReqQryParkedOrder>\n");
	if (pQryParkedOrder)
	{
		LOG("\tBrokerID [%s]\n",pQryParkedOrder->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryParkedOrder->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryParkedOrder->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryParkedOrder->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryParkedOrder->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryParkedOrder>\n");

	return m_pApi->ReqQryParkedOrder(pQryParkedOrder, nRequestID);
};
 

int CTraderApi::ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID)
{
	LOG("<ReqQryParkedOrderAction>\n");
	if (pQryParkedOrderAction)
	{
		LOG("\tBrokerID [%s]\n",pQryParkedOrderAction->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryParkedOrderAction->InvestorID);
		LOG("\tInstrumentID [%s]\n",pQryParkedOrderAction->InstrumentID);
		LOG("\tExchangeID [%s]\n",pQryParkedOrderAction->ExchangeID);
		LOG("\tInvestUnitID [%s]\n",pQryParkedOrderAction->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryParkedOrderAction>\n");

	return m_pApi->ReqQryParkedOrderAction(pQryParkedOrderAction, nRequestID);
};
 

int CTraderApi::ReqQryTradingNotice(CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID)
{
	LOG("<ReqQryTradingNotice>\n");
	if (pQryTradingNotice)
	{
		LOG("\tBrokerID [%s]\n",pQryTradingNotice->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryTradingNotice->InvestorID);
		LOG("\tInvestUnitID [%s]\n",pQryTradingNotice->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryTradingNotice>\n");

	return m_pApi->ReqQryTradingNotice(pQryTradingNotice, nRequestID);
};
 

int CTraderApi::ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID)
{
	LOG("<ReqQryBrokerTradingParams>\n");
	if (pQryBrokerTradingParams)
	{
		LOG("\tBrokerID [%s]\n",pQryBrokerTradingParams->BrokerID);
		LOG("\tInvestorID [%s]\n",pQryBrokerTradingParams->InvestorID);
		LOG("\tCurrencyID [%s]\n",pQryBrokerTradingParams->CurrencyID);
		LOG("\tAccountID [%s]\n",pQryBrokerTradingParams->AccountID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryBrokerTradingParams>\n");

	return m_pApi->ReqQryBrokerTradingParams(pQryBrokerTradingParams, nRequestID);
};
 

int CTraderApi::ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID)
{
	LOG("<ReqQryBrokerTradingAlgos>\n");
	if (pQryBrokerTradingAlgos)
	{
		LOG("\tBrokerID [%s]\n",pQryBrokerTradingAlgos->BrokerID);
		LOG("\tExchangeID [%s]\n",pQryBrokerTradingAlgos->ExchangeID);
		LOG("\tInstrumentID [%s]\n",pQryBrokerTradingAlgos->InstrumentID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQryBrokerTradingAlgos>\n");

	return m_pApi->ReqQryBrokerTradingAlgos(pQryBrokerTradingAlgos, nRequestID);
};
 

int CTraderApi::ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, int nRequestID)
{
	LOG("<ReqQueryCFMMCTradingAccountToken>\n");
	if (pQueryCFMMCTradingAccountToken)
	{
		LOG("\tBrokerID [%s]\n",pQueryCFMMCTradingAccountToken->BrokerID);
		LOG("\tInvestorID [%s]\n",pQueryCFMMCTradingAccountToken->InvestorID);
		LOG("\tInvestUnitID [%s]\n",pQueryCFMMCTradingAccountToken->InvestUnitID);
	}
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQueryCFMMCTradingAccountToken>\n");

	return m_pApi->ReqQueryCFMMCTradingAccountToken(pQueryCFMMCTradingAccountToken, nRequestID);
};
 

int CTraderApi::ReqFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	LOG("<ReqFromBankToFutureByFuture>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqFromBankToFutureByFuture>\n");

	return m_pApi->ReqFromBankToFutureByFuture(pReqTransfer, nRequestID);
};
 

int CTraderApi::ReqFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	LOG("<ReqFromFutureToBankByFuture>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqFromFutureToBankByFuture>\n");

	return m_pApi->ReqFromFutureToBankByFuture(pReqTransfer, nRequestID);
};
 

int CTraderApi::ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID)
{
	LOG("<ReqQueryBankAccountMoneyByFuture>\n");
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
	LOG("\tnRequestID [%d]\n",nRequestID);
	LOG("</ReqQueryBankAccountMoneyByFuture>\n");

	return m_pApi->ReqQueryBankAccountMoneyByFuture(pReqQueryAccount, nRequestID);
};
 

