#pragma once
#include "stdafx.h"
#include <list>
#include <iostream>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include "ThostFtdcTraderApi.h"
#include "ThostFtdcMdApi.h"
#include "DataCollect.h""

#include <conio.h>
#include "getconfig.h"
#include "traderApi.h"
#include "define.h"
#include "traderSpi.h"
#include <vector>
#include <map>

using namespace std;
FILE *logfile;

// ����¼������Ƿ���ɵı�־
// Create a manual reset event with no signal
HANDLE g_hEvent = CreateEvent(NULL, false, false, NULL);
/// ��Ա����
TThostFtdcBrokerIDType g_chBrokerID;
/// �����û�����
TThostFtdcUserIDType g_chUserID;
/// �����û�����
TThostFtdcPasswordType g_chPassword;
/// ����������
TThostFtdcExchangeIDType g_chExchangeID;
///��Լ����
TThostFtdcInstrumentIDType	g_chInstrumentID;
///Ͷ���ߴ���
TThostFtdcInvestorIDType g_chInvestorID;
///Ԥ�񳷵����
TThostFtdcParkedOrderActionIDType	g_chParkedOrderActionID1;
///Ԥ�񱨵����
TThostFtdcParkedOrderIDType	g_chParkedOrderID1;
///��������
TThostFtdcOrderRefType	g_chOrderRef;
///ǰ�ñ��
TThostFtdcFrontIDType	g_chFrontID;
///�Ự���
TThostFtdcSessionIDType	g_chSessionID;
///�������
TThostFtdcOrderSysIDType	g_chOrderSysID;
///ֹ���
TThostFtdcPriceType	g_chStopPrice;
///��������
TThostFtdcOrderRefType	g_chQuoteRef;
int FrontID = 0;
int SessionID = 0;
int Limitprice = 0;
int nRequestID = 0;
int chioce_action = 0;//Ϊ0��ȫ����

vector<string> vector_OrderSysID;
vector<string> vector_ExchangeID;
vector<string> vector_InstrumentID;
vector<string> md_InstrumentID;
int action_number;

///ִ����������
TThostFtdcOrderRefType	g_NewExecOrderRef;
///ִ��������
TThostFtdcExecOrderSysIDType	g_NewExecOrderSysID;
///ǰ�ñ��
TThostFtdcFrontIDType	g_NewFrontID;
///�Ự���
TThostFtdcSessionIDType	g_NewSessionID;

//��Ȩ�ԶԳ���Ӧ֪ͨ
///��Ȩ�ԶԳ���
TThostFtdcOrderSysIDType	g_chOptionSelfCloseSysID;
///��Ȩ�ԶԳ�����
TThostFtdcOrderRefType	g_chOptionSelfCloseRef;
///�û��˲�Ʒ��Ϣ
TThostFtdcProductInfoType	g_chUserProductInfo;
///��֤��
TThostFtdcAuthCodeType	g_chAuthCode;
///App����
TThostFtdcAppIDType	g_chAppID;

HANDLE xinhao = CreateEvent(NULL, false, false, NULL);

CTraderApi *pUserApi = new CTraderApi;

//������
class CSimpleMdHandler : public CThostFtdcMdSpi
{
public:
	// ���캯������Ҫһ����Ч��ָ��CThostFtdcMduserApiʵ����ָ��
	CSimpleMdHandler(CThostFtdcMdApi *pUserApi) : m_pUserMdApi(pUserApi) {}
	~CSimpleMdHandler() {}
	// ���ͻ����뽻���й�ϵͳ������ͨ�����ӣ��ͻ�����Ҫ���е�¼
	virtual void OnFrontConnected()
	{
		/*strcpy_s(g_chBrokerID, getConfig("config", "BrokerID").c_str());
		strcpy_s(g_chUserID, getConfig("config", "UserID").c_str());
		strcpy_s(g_chPassword, getConfig("config", "Password").c_str());*/
		ReqUserLogin();
	}

	void ReqUserLogin()
	{
		CThostFtdcReqUserLoginField reqUserLogin;
		int num = m_pUserMdApi->ReqUserLogin(&reqUserLogin, 0);
		LOG("\tlogin num = %d\n", num);
	}

	// ���ͻ����뽻���й�ϵͳͨ�����ӶϿ�ʱ���÷���������
	virtual void OnFrontDisconnected(int nReason)
	{
		// ��������������API���Զ��������ӣ��ͻ��˿ɲ�������
		LOG("<OnFrontDisconnected>\n");
		LOG("\tnReason= = [%d]", nReason);
		LOG("</OnFrontDisconnected>\n");
	}

	// ���ͻ��˷�����¼����֮�󣬸÷����ᱻ���ã�֪ͨ�ͻ��˵�¼�Ƿ�ɹ�
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("OnRspUserLogin:\n");
		LOG("\tErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID,
			pRspInfo->ErrorMsg);
		LOG("\tRequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
		if (pRspInfo->ErrorID != 0) {
			// �˵�ʧ�ܣ��ͻ�������д�����
			LOG("\tFailed to login, errorcode=%d errormsg=%s requestid=%d chain = %d",
				pRspInfo->ErrorID, pRspInfo->ErrorMsg, nRequestID, bIsLast);
			exit(-1);
		}
		SetEvent(xinhao);
		//SubscribeMarketData();//��������
		//SubscribeForQuoteRsp();//ѯ������
	}

	void SubscribeMarketData()//������
	{
		int md_num = 0;
		char **ppInstrumentID = new char*[5000];
		for (int count1 = 0; count1 <= md_InstrumentID.size() / 500; count1++)
		{
			if (count1 < md_InstrumentID.size() / 500)
			{
				int a = 0;
				for (a; a < 500; a++)
				{
					ppInstrumentID[a] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
					md_num++;
				}
				int result = m_pUserMdApi->SubscribeMarketData(ppInstrumentID, a);
				LOG((result == 0) ? "������������1......���ͳɹ�\n" : "������������1......����ʧ�ܣ��������=[%d]\n", result);
			}
			else if (count1 = md_InstrumentID.size() / 500)
			{
				int count2 = 0;
				for (count2; count2 < md_InstrumentID.size() % 500; count2++)
				{
					ppInstrumentID[count2] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
					md_num++;
				}
				int result = m_pUserMdApi->SubscribeMarketData(ppInstrumentID, count2);
				LOG((result == 0) ? "������������2......���ͳɹ�\n" : "������������2......����ʧ�ܣ��������=[%d]\n", result);
			}
		}
	}

	///��������Ӧ��
	virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspSubMarketData>\n");
		if (pSpecificInstrument)
		{
			LOG("\tInstrumentID = [%s]\n", pSpecificInstrument->InstrumentID);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg = [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID = [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID = [%d]\n", nRequestID);
		LOG("\tbIsLast = [%d]\n", bIsLast);
		LOG("</OnRspSubMarketData>\n");
	}

	///�������֪ͨ
	virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
	{
		LOG("<OnRtnDepthMarketData>\n");
		if (pDepthMarketData)
		{
			LOG("\tInstrumentID = [%s]\n", pDepthMarketData->InstrumentID);
			LOG("\tExchangeID = [%s]\n", pDepthMarketData->ExchangeID);
			LOG("\tLastPrice = [%.8lf]\n", pDepthMarketData->LastPrice);
			LOG("\tPreSettlementPrice = [%.8lf]\n", pDepthMarketData->PreSettlementPrice);
			LOG("\tOpenPrice = [%.8lf]\n", pDepthMarketData->OpenPrice);
			LOG("\tVolume = [%d]\n", pDepthMarketData->Volume);
			LOG("\tTurnover = [%.8lf]\n", pDepthMarketData->Turnover);
			LOG("\tOpenInterest = [%d]\n", pDepthMarketData->OpenInterest);
		}
		LOG("</OnRtnDepthMarketData>\n");
	}

	///����ѯ������
	void SubscribeForQuoteRsp()
	{
		LOG("�����ж���ѯ������\n");
		char **ppInstrumentID = new char*[50];
		string g_chInstrumentID = getConfig("config", "InstrumentID");
		ppInstrumentID[0] = const_cast<char *>(g_chInstrumentID.c_str());
		int result = m_pUserMdApi->SubscribeForQuoteRsp(ppInstrumentID, 1);
	}

	///����ѯ��Ӧ��
	virtual void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
	{
		LOG("<OnRspSubForQuoteRsp>\n");
		if (pSpecificInstrument)
		{
			LOG("\tInstrumentID = [%s]\n", pSpecificInstrument->InstrumentID);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg = [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID = [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID = [%d]\n", nRequestID);
		LOG("\tbIsLast = [%d]\n", bIsLast);
		LOG("</OnRspSubForQuoteRsp>\n");
		SetEvent(xinhao);
	}


	///ѯ��֪ͨ
	virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
	{
		LOG("<OnRtnForQuoteRsp>\n");
		if (pForQuoteRsp)
		{
			LOG("\tTradingDay = [%s]\n", pForQuoteRsp->TradingDay);
			LOG("\tInstrumentID = [%s]\n", pForQuoteRsp->InstrumentID);
			LOG("\tForQuoteSysID = [%s]\n", pForQuoteRsp->ForQuoteSysID);
			LOG("\tForQuoteTime = [%s]\n", pForQuoteRsp->ForQuoteTime);
			LOG("\tActionDay = [%s]\n", pForQuoteRsp->ActionDay);
			LOG("\tExchangeID = [%s]\n", pForQuoteRsp->ExchangeID);
		}
		LOG("</OnRtnForQuoteRsp>\n");
		SetEvent(xinhao);
	}

private:
	// ָ��CThostFtdcMduserApiʵ����ָ��
	CThostFtdcMdApi *m_pUserMdApi;
};

//������
class CSimpleHandler : public CTraderSpi
{
public:
	CSimpleHandler(CThostFtdcTraderApi *pUserApi) :
		m_pUserApi(pUserApi) {}
	~CSimpleHandler() {}
	virtual void OnFrontConnected()
	{
		strcpy_s(g_chBrokerID, getConfig("config", "BrokerID").c_str());
		strcpy_s(g_chUserID, getConfig("config", "UserID").c_str());
		strcpy_s(g_chPassword, getConfig("config", "Password").c_str());
		strcpy_s(g_chInvestorID, getConfig("config", "InvestorID").c_str());
		strcpy_s(g_chAuthCode, getConfig("config", "AuthCode").c_str());
		strcpy_s(g_chAppID, getConfig("config", "AppID").c_str());

		//strcpy_s(g_NewExecOrderRef, "");
		//strcpy_s(g_NewExecOrderSysID, "");
		g_NewFrontID = 0;
		g_NewSessionID = 0;
		//ReqUserLogin();
		//ReqAuthenticate();
		SetEvent(g_hEvent);
	}

	//�ͻ�����֤
	void ReqAuthenticate()
	{
		//strcpy_s(g_chUserProductInfo, getConfig("config", "UserProductInfo").c_str());
		strcpy_s(g_chAuthCode, getConfig("config", "AuthCode").c_str());
		strcpy_s(g_chAppID, getConfig("config", "AppID").c_str());

		CThostFtdcReqAuthenticateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		//strcpy_s(a.UserProductInfo, "");
		strcpy_s(a.AuthCode, g_chAuthCode);
		strcpy_s(a.AppID, g_chAppID);
		int b = m_pUserApi->ReqAuthenticate(&a, 1);
		printf("\t�ͻ�����֤ = [%d]\n", b);
	}

	///�ͻ�����֤��Ӧ
	virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspAuthenticate(pRspAuthenticateField, pRspInfo, nRequestID, bIsLast);
		SetEvent(g_hEvent);
	}

	void RegisterFensUserInfo()
	{
		CThostFtdcFensUserInfoField pFensUserInfo = { 0 };
		strcpy_s(pFensUserInfo.BrokerID, g_chBrokerID);
		strcpy_s(pFensUserInfo.UserID, g_chUserID);
		pFensUserInfo.LoginMode = THOST_FTDC_LM_Trade;
		m_pUserApi->RegisterFensUserInfo(&pFensUserInfo);
	}

	/*virtual void OnFrontDisconnected(int nReason)
	{
		LOG("<OnFrontDisconnected>\n");
		LOG("\tnReason = %d\n", nReason);
		LOG("</OnFrontDisconnected>\n");
	}*/

	void ReqUserLogin()
	{
		CThostFtdcReqUserLoginField reqUserLogin = { 0 };
		strcpy_s(reqUserLogin.BrokerID, g_chBrokerID);
		strcpy_s(reqUserLogin.UserID, g_chUserID);
		strcpy_s(reqUserLogin.Password, g_chPassword);
		//strcpy_s(reqUserLogin.ClientIPAddress, "::c0a8:0101");
		//strcpy_s(reqUserLogin.UserProductInfo, "123");
		// ������½����
		m_pUserApi->ReqUserLogin(&reqUserLogin, nRequestID++);
	}

	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		FrontID = pRspUserLogin->FrontID;
		SessionID = pRspUserLogin->SessionID;
		CTraderSpi::OnRspUserLogin(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
		if (pRspInfo->ErrorID != 0)
		//if (pRspInfo)
		{
			LOG("\tFailed to login, errorcode=[%d]\n \terrormsg=[%s]\n \trequestid = [%d]\n \tchain = [%d]\n",
				pRspInfo->ErrorID, pRspInfo->ErrorMsg, nRequestID, bIsLast);
			//exit(-1);
		}
		SetEvent(g_hEvent);
	}

	void ReqUserLogout()
	{
		CThostFtdcUserLogoutField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		m_pUserApi->ReqUserLogout(&a, nRequestID++);
	}

	///�ǳ�������Ӧ
	virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspUserLogout>\n");
		if (pUserLogout)
		{
			LOG("\tBrokerID [%s]\n", pUserLogout->BrokerID);
			LOG("\tUserID [%s]\n", pUserLogout->UserID);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID [%d]\n", nRequestID);
		LOG("\tbIsLast [%d]\n", bIsLast);
		LOG("</OnRspUserLogout>\n");
		pUserApi->Release();
	}

	///����ȷ�Ͻ��㵥
	void ReqSettlementInfoConfirm()
	{
		CThostFtdcSettlementInfoConfirmField Confirm = { 0 };
		///���͹�˾����
		strcpy_s(Confirm.BrokerID, g_chBrokerID);
		///Ͷ���ߴ���
		strcpy_s(Confirm.InvestorID, g_chUserID);
		m_pUserApi->ReqSettlementInfoConfirm(&Confirm, nRequestID++);
	}

	///Ͷ���߽�����ȷ����Ӧ
	virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspSettlementInfoConfirm(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
		SetEvent(g_hEvent);
	}

	///�û������������
	void ReqUserPasswordUpdate()
	{
		string newpassword;
		LOG("�������µ�¼���룺\n");
		cin >> newpassword;
		CThostFtdcUserPasswordUpdateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.OldPassword, g_chPassword);
		strcpy_s(a.NewPassword, newpassword.c_str());
		int b = m_pUserApi->ReqUserPasswordUpdate(&a, nRequestID++);
		LOG((b == 0) ? "�û������������......���ͳɹ�\n" : "�û������������......����ʧ�ܣ����=[%d]\n", b);
	}

	///�û��������������Ӧ
	virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspUserPasswordUpdate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
		SetEvent(g_hEvent);
	}

	///�ʽ��˻������������
	void ReqTradingAccountPasswordUpdate()
	{
		string newpassword;
		LOG("���������ʽ����룺\n");
		cin >> newpassword;
		CThostFtdcTradingAccountPasswordUpdateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.AccountID, g_chInvestorID);
		strcpy_s(a.OldPassword, g_chPassword);
		strcpy_s(a.NewPassword, newpassword.c_str());
		strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqTradingAccountPasswordUpdate(&a, nRequestID++);
		LOG((b == 0) ? "�ʽ��˻������������......���ͳɹ�\n" : "�ʽ��˻������������......����ʧ�ܣ����=[%d]\n", b);
	}

	///�ʽ��˻��������������Ӧ
	virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
		SetEvent(g_hEvent);
	}

	///Ԥ��¼��//�޼۵�
	void ReqParkedOrderInsert()
	{
		int limitprice = 0;
		LOG("�������޼۵��۸�(Ĭ��0)\n");
		cin >> limitprice;
		CThostFtdcParkedOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.UserID, g_chUserID);
		a.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		a.Direction = THOST_FTDC_D_Buy;
		a.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		a.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		a.LimitPrice = limitprice;
		a.VolumeTotalOriginal = 1;
		a.TimeCondition = THOST_FTDC_TC_GFD;
		a.VolumeCondition = THOST_FTDC_VC_AV;
		a.MinVolume = 1;
		a.ContingentCondition = THOST_FTDC_CC_Immediately;
		a.StopPrice = 0;
		a.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		a.IsAutoSuspend = 0;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int b = m_pUserApi->ReqParkedOrderInsert(&a, nRequestID++);
		LOG((b == 0) ? "����¼��Ԥ��......���ͳɹ�\n" : "����¼��Ԥ��......����ʧ�ܣ����=[%d]\n", b);
	}

	///Ԥ�񳷵�¼������
	void ReqParkedOrderAction()
	{
		CThostFtdcParkedOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.OrderRef, "          15");
		strcpy_s(a.ExchangeID, g_chExchangeID);
		/*a.FrontID = 1;
		a.SessionID = -287506422;*/
		strcpy_s(a.OrderSysID, g_chOrderSysID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		a.ActionFlag = THOST_FTDC_AF_Delete;
		int b = m_pUserApi->ReqParkedOrderAction(&a, nRequestID++);
		LOG((b == 0) ? "����¼��Ԥ�񳷵�......���ͳɹ�\n" : "����¼��Ԥ�񳷵�......����ʧ�ܣ����=[%d]\n", b);
	}

	///����ɾ��Ԥ��
	void ReqRemoveParkedOrder()
	{
		CThostFtdcRemoveParkedOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.ParkedOrderID, g_chParkedOrderID1);
		int b = m_pUserApi->ReqRemoveParkedOrder(&a, nRequestID++);
		LOG((b == 0) ? "����ɾ��Ԥ��......���ͳɹ�\n" : "����ɾ��Ԥ��......����ʧ�ܣ����=[%d]\n", b);
	}

	///����ɾ��Ԥ�񳷵�
	void ReqRemoveParkedOrderAction()
	{
		CThostFtdcRemoveParkedOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.ParkedOrderActionID, g_chParkedOrderActionID1);
		int b = m_pUserApi->ReqRemoveParkedOrderAction(&a, nRequestID++);
		LOG((b == 0) ? "����ɾ��Ԥ�񳷵�......���ͳɹ�\n" : "����ɾ��Ԥ�񳷵�......����ʧ�ܣ����=[%d]\n", b);
	}

	///����¼������
	void ReqOrderInsert_Ordinary()
	{
		system("cls");
		string new_limitprice;
		LOG("������ָ���۸�\n");
		cin >> new_limitprice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		
		int num1;
	Direction:LOG("��ѡ����������\t1.��\t2.��\n");
		cin >> num1;
		if(num1==1){
			ord.Direction = THOST_FTDC_D_Buy;//��
		}
		else if (num1 == 2) {
			ord.Direction = THOST_FTDC_D_Sell;//��
		}
		else {
			LOG("�����������������\n");
			_getch();
			goto Direction;
		}

		int num2;
	CombOffsetFlag:LOG("�����뿪ƽ����\t1.����\t2.ƽ��\t3.ǿƽ\t4.ƽ��\t5.ƽ��\t6.ǿ��\t7.����ǿƽ\n");
		cin >> num2;
		if (num2 == 1) {
			ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		}
		else if (num2 == 2) {
			ord.CombOffsetFlag[0] = THOST_FTDC_OF_Close;
		}
		else if (num2 == 3) {
			ord.CombOffsetFlag[0] = THOST_FTDC_OF_ForceClose;
		}
		else if (num2 == 4) {
			ord.CombOffsetFlag[0] = THOST_FTDC_OF_CloseToday;
		}
		else if (num2 == 5) {
			ord.CombOffsetFlag[0] = THOST_FTDC_OF_CloseYesterday;
		}
		else if (num2 == 6) {
			ord.CombOffsetFlag[0] = THOST_FTDC_OF_ForceOff;
		}
		else if (num2 == 7) {
			ord.CombOffsetFlag[0] = THOST_FTDC_OF_LocalForceClose;
		}
		else {
			LOG("�����������������\n");
			_getch();
			goto CombOffsetFlag;
		}

		//ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		strcpy_s(ord.CombHedgeFlag, "1");
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		ord.LimitPrice = atoi(new_limitprice.c_str());
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///������Ч
		ord.VolumeCondition = THOST_FTDC_VC_CV;///ȫ������
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	///������ֹ��
	void ReqOrderInsert_Touch()
	{
		int new_limitprice;
		LOG("������ָ���۸�limitprice��\n");
		cin >> new_limitprice;

		int new_StopPrice;
		LOG("������ָ���۸�stopprice��\n");
		cin >> new_StopPrice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//��
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///������Ч
		ord.VolumeCondition = THOST_FTDC_VC_AV;///�κ�����
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Touch;
		ord.StopPrice = new_StopPrice;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	///������ֹӯ��
	void ReqOrderInsert_TouchProfit()
	{
		int new_limitprice;
		LOG("������ָ���۸�limitprice��\n");
		cin >> new_limitprice;

		int new_StopPrice;
		LOG("������ָ���۸�stopprice��\n");
		cin >> new_StopPrice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//��
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///������Ч
		ord.VolumeCondition = THOST_FTDC_VC_AV;///ȫ������
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_TouchProfit;
		ord.StopPrice = new_StopPrice;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	//ȫ��ȫ��
	void ReqOrderInsert_VC_CV()
	{
		int new_limitprice;
		LOG("������ָ���۸�\n");
		cin >> new_limitprice;

		int insert_num;
		LOG("�������µ�������\n");
		cin >> insert_num;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//��
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = insert_num;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///������Ч
		ord.VolumeCondition = THOST_FTDC_VC_CV;///ȫ������
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	//���ɲ���
	void ReqOrderInsert_VC_AV()
	{
		int new_limitprice;
		LOG("������ָ���۸�\n");
		cin >> new_limitprice;

		int insert_num;
		LOG("�������µ�������\n");
		cin >> insert_num;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//��
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = insert_num;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///������Ч
		ord.VolumeCondition = THOST_FTDC_VC_AV;///�κ�����
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	//�м۵�
	void ReqOrderInsert_AnyPrice()
	{
		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_AnyPrice;
		ord.Direction = THOST_FTDC_D_Buy;//��
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.LimitPrice = 0;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_IOC;///������ɣ�������
		ord.VolumeCondition = THOST_FTDC_VC_AV;///�κ�����
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		//ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	//�м�ת�޼۵�(�н���)
	void ReqOrderInsert_BestPrice()
	{
		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_BestPrice;
		ord.Direction = THOST_FTDC_D_Buy;//��
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///������Ч
		ord.VolumeCondition = THOST_FTDC_VC_AV;///�κ�����
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	//����ָ��
	void ReqOrderInsert_Arbitrage()
	{
		int new_limitprice;
		LOG("������ָ���۸�\n");
		cin >> new_limitprice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//��
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///������Ч
		ord.VolumeCondition = THOST_FTDC_VC_AV;///�κ�����
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	//������
	void ReqOrderInsert_IsSwapOrder()
	{
		int new_limitprice;
		LOG("������ָ���۸�\n");
		cin >> new_limitprice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//��
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///������Ч
		ord.VolumeCondition = THOST_FTDC_VC_AV;///�κ�����
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		ord.IsSwapOrder = 1;//��������־
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "����¼�������޼۵�......���ͳɹ�\n" : "����¼�������޼۵�......����ʧ�ܣ����=[%d]\n", a);
	}

	///������������
	void ReqOrderAction_Ordinary()
	{
		CThostFtdcInputOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		a.OrderActionRef = 1;
		strcpy_s(a.OrderRef, g_chOrderRef);
		//a.FrontID = g_chFrontID;
		//a.SessionID = g_chSessionID;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.OrderSysID, g_chOrderSysID);
		a.ActionFlag = THOST_FTDC_AF_Delete;
		strcpy_s(a.UserID, g_chUserID);
		int ab = m_pUserApi->ReqOrderAction(&a, nRequestID++);
		LOG((ab == 0) ? "������������......���ͳɹ�\n" : "������������......����ʧ�ܣ����=[%d]\n", ab);
	}

	///ִ������¼������
	void ReqExecOrderInsert(int a)
	{
		CThostFtdcInputExecOrderField OrderInsert = { 0 };
		strcpy_s(OrderInsert.BrokerID, g_chBrokerID);
		strcpy_s(OrderInsert.InvestorID, g_chInvestorID);
		strcpy_s(OrderInsert.InstrumentID, g_chInstrumentID);
		strcpy_s(OrderInsert.ExchangeID, g_chExchangeID);
		//strcpy_s(OrderInsert.ExecOrderRef, "00001");
		strcpy_s(OrderInsert.UserID, g_chUserID);
		OrderInsert.Volume = 1;
		OrderInsert.RequestID = 1;
		OrderInsert.OffsetFlag = THOST_FTDC_OF_Close;//��ƽ��־
		OrderInsert.HedgeFlag = THOST_FTDC_HF_Speculation;//Ͷ���ױ���־
		if (a == 0) {
			OrderInsert.ActionType = THOST_FTDC_ACTP_Exec;//ִ����������
		}
		if (a == 1) {
			OrderInsert.ActionType = THOST_FTDC_ACTP_Abandon;//ִ����������
		}
		OrderInsert.PosiDirection = THOST_FTDC_PD_Long;//�ֲֶ�շ�������
		OrderInsert.ReservePositionFlag = THOST_FTDC_EOPF_Reserve;//��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı������
		//OrderInsert.ReservePositionFlag = THOST_FTDC_EOPF_UnReserve;//������ͷ��
		OrderInsert.CloseFlag = THOST_FTDC_EOCF_NotToClose;//��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ������
		//OrderInsert.CloseFlag = THOST_FTDC_EOCF_AutoClose;//�Զ�ƽ��
		//strcpy_s(OrderInsert.InvestUnitID, "");AccountID
		//strcpy_s(OrderInsert.AccountID, "");
		//strcpy_s(OrderInsert.CurrencyID, "CNY");
		//strcpy_s(OrderInsert.ClientID, "");
		int b = m_pUserApi->ReqExecOrderInsert(&OrderInsert, 1);
		LOG((b == 0) ? "ִ������¼������......���ͳɹ�\n" : "ִ������¼������......����ʧ�ܣ��������=[%d]\n", b);
	}

	///ִ�������������
	void ReqExecOrderAction()
	{
		CThostFtdcInputExecOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		a.ExecOrderActionRef = 1;
		strcpy_s(a.ExecOrderRef, g_NewExecOrderRef);
		a.FrontID = g_NewFrontID;
		a.SessionID = g_NewSessionID;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		strcpy_s(a.ExecOrderSysID, g_NewExecOrderSysID);
		a.ActionFlag = THOST_FTDC_AF_Delete;//ɾ��
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		//strcpy_s(a.InvestUnitID, "");
		//strcpy_s(a.IPAddress, "");
		//strcpy_s(a.MacAddress, "");
		int b = m_pUserApi->ReqExecOrderAction(&a, 1);
		LOG((b == 0) ? "ִ�������������......���ͳɹ�\n" : "ִ�������������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//����������������
	void ReqBatchOrderAction()
	{
		CThostFtdcInputBatchOrderActionField a = { 0 };

	}

	///�����ѯ����
	void ReqQryOrder()
	{
		action_number = 0;
		vector_OrderSysID.clear();
		vector_ExchangeID.clear();
		vector_InstrumentID.clear();
		CThostFtdcQryOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int ab = m_pUserApi->ReqQryOrder(&a, nRequestID++);
		LOG((ab == 0) ? "�����ѯ����......���ͳɹ�\n" : "�����ѯ����......����ʧ�ܣ����=[%d]\n", ab);
	}

	///����¼������
	void ReqOrderInsert_Condition(int select_num)
	{
		string limit_price;
		LOG("������ָ���۸�(limitprice):\n");
		cin >> limit_price;

		string stop_price;
		LOG("�����봥���۸�(stopprice):\n");
		cin >> stop_price;

		CThostFtdcInputOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.UserID, g_chUserID);
		a.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		a.Direction = THOST_FTDC_D_Buy;//��
		//a.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		a.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		strcpy_s(a.CombOffsetFlag, "0");
		strcpy_s(a.CombHedgeFlag, "1");
		a.LimitPrice = atoi(limit_price.c_str());
		a.VolumeTotalOriginal = 1;
		a.TimeCondition = THOST_FTDC_TC_GFD;
		a.VolumeCondition = THOST_FTDC_VC_AV;
		a.MinVolume = 0;
		if (select_num == 1)
		{
			a.ContingentCondition = THOST_FTDC_CC_LastPriceGreaterThanStopPrice;
		}
		else if (select_num == 2)
		{
			a.ContingentCondition = THOST_FTDC_CC_LastPriceGreaterEqualStopPrice;
		}
		else if (select_num == 3)
		{
			a.ContingentCondition = THOST_FTDC_CC_LastPriceLesserThanStopPrice;
		}
		else if (select_num == 4)
		{
			a.ContingentCondition = THOST_FTDC_CC_LastPriceLesserEqualStopPrice;
		}
		else if (select_num == 5)
		{
			a.ContingentCondition = THOST_FTDC_CC_AskPriceGreaterThanStopPrice;
		}
		else if (select_num == 6)
		{
			a.ContingentCondition = THOST_FTDC_CC_AskPriceGreaterEqualStopPrice;
		}
		else if (select_num == 7)
		{
			a.ContingentCondition = THOST_FTDC_CC_AskPriceLesserThanStopPrice;
		}
		else if (select_num == 8)
		{
			a.ContingentCondition = THOST_FTDC_CC_AskPriceLesserEqualStopPrice;
		}
		else if (select_num == 9)
		{
			a.ContingentCondition = THOST_FTDC_CC_BidPriceGreaterThanStopPrice;
		}
		else if (select_num == 10)
		{
			a.ContingentCondition = THOST_FTDC_CC_BidPriceGreaterEqualStopPrice;
		}
		else if (select_num == 11)
		{
			a.ContingentCondition = THOST_FTDC_CC_BidPriceLesserThanStopPrice;
		}
		else if (select_num == 12)
		{
			a.ContingentCondition = THOST_FTDC_CC_BidPriceLesserEqualStopPrice;
		}
		a.StopPrice = atoi(stop_price.c_str());
		//itoa(a.StopPrice, const_cast<char *>(getConfig("config", "StopPrice").c_str()), 10);
		a.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		a.IsAutoSuspend = 0;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int ab = m_pUserApi->ReqOrderInsert(&a, nRequestID++);
		LOG((ab == 0) ? "������������......���ͳɹ�\n" : "������������......����ʧ�ܣ����=[%d]\n", ab);
	}

	///������������
	void ReqOrderAction_Condition()
	{
		CThostFtdcInputOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.UserID, g_chUserID);
		if (chioce_action == 0)
		{
			a.FrontID = g_chFrontID;
			a.SessionID = g_chSessionID;
			strcpy_s(a.OrderRef, g_chOrderRef);
		}
		if (chioce_action == 1)
		{
			strcpy_s(a.OrderSysID, g_chOrderSysID);
		}
		strcpy_s(a.ExchangeID, g_chExchangeID);
		a.ActionFlag = THOST_FTDC_AF_Delete;
		int ab = m_pUserApi->ReqOrderAction(&a, nRequestID++);
		LOG((ab == 0) ? "������������......���ͳɹ�\n" : "������������......����ʧ�ܣ����=[%d]\n", ab);
	}

	//������ѯ�ı���
	void ReqOrderAction_forqry(int action_num)
	{
		CThostFtdcInputOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.UserID, g_chUserID);

		strcpy_s(a.OrderSysID, vector_OrderSysID.at(action_num - 1).c_str());
		strcpy_s(a.ExchangeID, vector_ExchangeID.at(action_num - 1).c_str());
		strcpy_s(a.InstrumentID, vector_InstrumentID.at(action_num - 1).c_str());

		a.ActionFlag = THOST_FTDC_AF_Delete;
		int ab = m_pUserApi->ReqOrderAction(&a, nRequestID++);
		LOG((ab == 0) ? "������������......���ͳɹ�\n" : "������������......����ʧ�ܣ��������=[%d]\n", ab);
	}

	///�����ѯ�ɽ�
	void ReqQryTrade()
	{
		CThostFtdcQryTradeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		string instr;
		instr.clear();
		LOG("�������Լ����(��������Ϊ��)\n");
		cin.ignore();
		getline(cin, instr);
		strcpy_s(a.InstrumentID, instr.c_str());

		string Exch;
		Exch.clear();
		LOG("�����뽻��������(��������Ϊ��)\n");
		//cin.ignore();
		getline(cin, Exch);
		strcpy_s(a.ExchangeID, Exch.c_str());
		/*strcpy_s(a.TradeID, "");
		strcpy_s(a.TradeTimeStart, "");
		strcpy_s(a.TradeTimeEnd, "");*/
		int b = m_pUserApi->ReqQryTrade(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ�ɽ�......���ͳɹ�\n" : "�����ѯ�ɽ�......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�����ѯԤ��
	void ReqQryParkedOrder()
	{
		CThostFtdcQryParkedOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int ab = m_pUserApi->ReqQryParkedOrder(&a, nRequestID++);
		LOG((ab == 0) ? "�����ѯԤ��......���ͳɹ�\n" : "�����ѯԤ��......����ʧ�ܣ����=[%d]\n", ab);
	}

	//�����ѯ������Ԥ�񳷵�
	void ReqQryParkedOrderAction()
	{
		CThostFtdcQryParkedOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int ab = m_pUserApi->ReqQryParkedOrderAction(&a, nRequestID++);
		LOG((ab == 0) ? "�����ѯ������Ԥ�񳷵�......���ͳɹ�\n" : "�����ѯ������Ԥ�񳷵�......����ʧ�ܣ����=[%d]\n", ab);
	}

	//�����ѯ�ʽ��˻�
	void ReqQryTradingAccount()
	{
		CThostFtdcQryTradingAccountField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.CurrencyID, "CNY");
		int ab = m_pUserApi->ReqQryTradingAccount(&a, nRequestID++);
		LOG((ab == 0) ? "�����ѯ�ʽ��˻�......���ͳɹ�\n" : "�����ѯ�ʽ��˻�......����ʧ�ܣ����=[%d]\n", ab);
	}

	//�����ѯͶ���ֲ߳�
	void ReqQryInvestorPosition()
	{
		CThostFtdcQryInvestorPositionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		string instr;
		instr.clear();
		cin.ignore();
		LOG("�������Լ����(��������Ϊ��)��\n");
		getline(cin, instr);
		strcpy_s(a.InstrumentID, instr.c_str());

		string exch;
		exch.clear();
		cin.ignore();
		LOG("�����뽻��������(��������Ϊ��)��\n");
		getline(cin, exch);
		strcpy_s(a.ExchangeID, exch.c_str());
		//strcpy_s(a.InstrumentID, "SPD");
		int b = m_pUserApi->ReqQryInvestorPosition(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯͶ���ֲ߳�......���ͳɹ�\n" : "�����ѯͶ���ֲ߳�......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯͶ���ֲ߳���ϸ
	void ReqQryInvestorPositionDetail()
	{
		CThostFtdcQryInvestorPositionDetailField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		string instr;
		instr.clear();
		cin.ignore();
		LOG("�������Լ����(��������Ϊ��)\n");
		getline(cin, instr);
		strcpy_s(a.InstrumentID, instr.c_str());
		string exch;
		exch.clear();
		cin.ignore();
		LOG("�����뽻��������(��������Ϊ��)��\n");
		getline(cin, exch);
		strcpy_s(a.ExchangeID, exch.c_str());
		//strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryInvestorPositionDetail(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯͶ���ֲ߳���ϸ......���ͳɹ�\n" : "�����ѯͶ���ֲ߳���ϸ......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��������֤����
	void ReqQryExchangeMarginRate()
	{
		CThostFtdcQryExchangeMarginRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		a.HedgeFlag = THOST_FTDC_HF_Speculation;//Ͷ��
		int b = m_pUserApi->ReqQryExchangeMarginRate(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ��������֤����......���ͳɹ�\n" : "�����ѯ��������֤����......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��Լ��֤����
	void ReqQryInstrumentMarginRate()
	{
		CThostFtdcQryInstrumentMarginRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		a.HedgeFlag = THOST_FTDC_HF_Speculation;//Ͷ��
		int b = m_pUserApi->ReqQryInstrumentMarginRate(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ��Լ��֤����......���ͳɹ�\n" : "�����ѯ��Լ��֤����......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��Լ��������
	void ReqQryInstrumentCommissionRate()
	{
		CThostFtdcQryInstrumentCommissionRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryInstrumentCommissionRate(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ��Լ��������......���ͳɹ�\n" : "�����ѯ��Լ��������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ�����̺�Լ��������
	void ReqQryMMInstrumentCommissionRate()
	{
		CThostFtdcQryMMInstrumentCommissionRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryMMInstrumentCommissionRate(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ�����̺�Լ��������......���ͳɹ�\n" : "�����ѯ�����̺�Լ��������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��������Ȩ��Լ������
	void ReqQryMMOptionInstrCommRate()
	{
		CThostFtdcQryMMOptionInstrCommRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryMMOptionInstrCommRate(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ��������Ȩ��Լ������......���ͳɹ�\n" : "�����ѯ��������Ȩ��Լ������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ����������
	void ReqQryInstrumentOrderCommRate()
	{
		CThostFtdcQryInstrumentOrderCommRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryInstrumentOrderCommRate(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ����������......���ͳɹ�\n" : "�����ѯ����������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��Ȩ��Լ������
	void ReqQryOptionInstrCommRate()
	{
		CThostFtdcQryOptionInstrCommRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		string Inst;
		string Exch;
		string InvestUnit;
		LOG("�������Լ����:(������Ϊ��)");
		cin >> Inst;
		LOG("�����뽻��������:(������Ϊ��)");
		cin >> Exch;
		LOG("������Ͷ���ߵ�Ԫ����:(������Ϊ��)");
		cin >> InvestUnit;
		strcpy_s(a.InstrumentID, Inst.c_str());
		strcpy_s(a.ExchangeID, Exch.c_str());
		strcpy_s(a.InvestUnitID, InvestUnit.c_str());
		int b = m_pUserApi->ReqQryOptionInstrCommRate(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ��Ȩ��Լ������......���ͳɹ�\n" : "�����ѯ��Ȩ��Լ������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��Լ
	void ReqQryInstrument()
	{
		CThostFtdcQryInstrumentField a = { 0 };
		strcpy_s(a.ExchangeID, g_chExchangeID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		//strcpy_s(a.ExchangeInstID,"");
		//strcpy_s(a.ProductID, "m");
		int b = m_pUserApi->ReqQryInstrument(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ��Լ......���ͳɹ�\n" : "�����ѯ��Լ......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�����ѯ��Լ��Ӧ
	virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspQryInstrument>\n");
		if (pInstrument)
		{
			md_InstrumentID.push_back(pInstrument->InstrumentID);
			LOG("\tInstrumentID [%s]\n", pInstrument->InstrumentID);
			LOG("\tExchangeID [%s]\n", pInstrument->ExchangeID);
			LOG("\tInstrumentName [%s]\n", pInstrument->InstrumentName);
			LOG("\tExchangeInstID [%s]\n", pInstrument->ExchangeInstID);
			LOG("\tProductID [%s]\n", pInstrument->ProductID);
			LOG("\tCreateDate [%s]\n", pInstrument->CreateDate);
			/*LOG("\tOpenDate [%s]\n", pInstrument->OpenDate);
			LOG("\tExpireDate [%s]\n", pInstrument->ExpireDate);
			LOG("\tStartDelivDate [%s]\n", pInstrument->StartDelivDate);
			LOG("\tEndDelivDate [%s]\n", pInstrument->EndDelivDate);
			LOG("\tUnderlyingInstrID [%s]\n", pInstrument->UnderlyingInstrID);
			LOG("\tDeliveryYear [%d]\n", pInstrument->DeliveryYear);
			LOG("\tDeliveryMonth [%d]\n", pInstrument->DeliveryMonth);
			LOG("\tMaxMarketOrderVolume [%d]\n", pInstrument->MaxMarketOrderVolume);
			LOG("\tMinMarketOrderVolume [%d]\n", pInstrument->MinMarketOrderVolume);
			LOG("\tMaxLimitOrderVolume [%d]\n", pInstrument->MaxLimitOrderVolume);
			LOG("\tMinLimitOrderVolume [%d]\n", pInstrument->MinLimitOrderVolume);
			LOG("\tVolumeMultiple [%d]\n", pInstrument->VolumeMultiple);
			LOG("\tIsTrading [%d]\n", pInstrument->IsTrading);
			LOG("\tProductClass [%c]\n", pInstrument->ProductClass);
			LOG("\tInstLifePhase [%c]\n", pInstrument->InstLifePhase);
			LOG("\tPositionType [%c]\n", pInstrument->PositionType);
			LOG("\tPositionDateType [%c]\n", pInstrument->PositionDateType);
			LOG("\tMaxMarginSideAlgorithm [%c]\n", pInstrument->MaxMarginSideAlgorithm);
			LOG("\tOptionsType [%c]\n", pInstrument->OptionsType);
			LOG("\tCombinationType [%c]\n", pInstrument->CombinationType);
			LOG("\tPriceTick [%.8lf]\n", pInstrument->PriceTick);
			LOG("\tLongMarginRatio [%.8lf]\n", pInstrument->LongMarginRatio);
			LOG("\tShortMarginRatio [%.8lf]\n", pInstrument->ShortMarginRatio);
			LOG("\tStrikePrice [%.8lf]\n", pInstrument->StrikePrice);
			LOG("\tUnderlyingMultiple [%.8lf]\n", pInstrument->UnderlyingMultiple);*/
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID [%d]\n", nRequestID);
		LOG("\tbIsLast [%d]\n", bIsLast);
		LOG("</OnRspQryInstrument>\n");
		if (bIsLast)
		{
			SetEvent(xinhao);
		}
	}

	//�����ѯͶ���߽�����
	void ReqQrySettlementInfo()
	{
		CThostFtdcQrySettlementInfoField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		string Traday;
		LOG("�����뽻�����ڻ��߽����·�(����:20180101,�·���201801):");
		cin >> Traday;
		strcpy_s(a.TradingDay, Traday.c_str());
		int b = m_pUserApi->ReqQrySettlementInfo(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯͶ���߽�����......���ͳɹ�\n" : "�����ѯͶ���߽�����......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯת����ˮ
	void ReqQryTransferSerial()
	{
		CThostFtdcQryTransferSerialField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.AccountID, g_chInvestorID);
	cir1:int bankid;
		LOG("����������Ҫ�Ĳ�ѯ������\n");
		LOG("1.��������\n");
		LOG("2.ũҵ����\n");
		LOG("3.�й�����\n");
		LOG("5.��ͨ����\n");
		LOG("6.��������\n");
		LOG("7.��ҵ����\n");
		LOG("8.�ַ�����\n");
		LOG("9.��������\n");
		LOG("10.�������\n");
		LOG("11.��������\n");
		LOG("12.�������\n");
		LOG("13.ƽ������\n");
		LOG("14.ũ������\n");
		LOG("15.��չ����\n");
		LOG("16.�㷢����\n");
		cin >> bankid;
		if (bankid == 1 | 2 | 3 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16)
		{
			//strcpy_s(a.BankID, itoa(bankid, a.BankID, 10));///���д���
			itoa(bankid, a.BankID, 10);
		}
		else
		{
			LOG("�������������д��롣\n");
			goto cir1;
		}
		int choos;
	curr:LOG("��������ִ���\t1.CNY\t2.USD\n");
		cin >> choos;
		switch (choos)
		{
		case 1:
			strcpy_s(a.CurrencyID, "CNY");
			break;
		case 2:
			strcpy_s(a.CurrencyID, "USD");
			break;
		default:
			LOG("��������ȷ�����\n");
			_getch();
			goto curr;
		}
		int b = m_pUserApi->ReqQryTransferSerial(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯת����ˮ......���ͳɹ�\n" : "�����ѯת����ˮ......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��Ʒ
	void ReqQryProduct()
	{
		CThostFtdcQryProductField a = { 0 };
		strcpy_s(a.ProductID, "sc");
		a.ProductClass = THOST_FTDC_PC_Futures;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		m_pUserApi->ReqQryProduct(&a, nRequestID++);
	}

	//�����ѯת������
	void ReqQryTransferBank()
	{
		CThostFtdcQryTransferBankField a = { 0 };
		strcpy_s(a.BankID,"3");
		int b = m_pUserApi->ReqQryTransferBank(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯת������......���ͳɹ�\n" : "�����ѯת������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ����֪ͨ
	void ReqQryTradingNotice()
	{
		CThostFtdcQryTradingNoticeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		int b = m_pUserApi->ReqQryTradingNotice(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ����֪ͨ......���ͳɹ�\n" : "�����ѯ����֪ͨ......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ���ױ���
	void ReqQryTradingCode()
	{
		CThostFtdcQryTradingCodeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		a.ClientIDType = THOST_FTDC_CIDT_Speculation;
		int b = m_pUserApi->ReqQryTradingCode(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ���ױ���......���ͳɹ�\n" : "�����ѯ���ױ���......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ������Ϣȷ��
	void ReqQrySettlementInfoConfirm()
	{
		CThostFtdcQrySettlementInfoConfirmField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.AccountID, g_chInvestorID);
		strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqQrySettlementInfoConfirm(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ������Ϣȷ��......���ͳɹ�\n" : "�����ѯ������Ϣȷ��......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��Ʒ��
	void ReqQryProductGroup()
	{
		CThostFtdcQryProductGroupField a = { 0 };

	}

	//�����ѯͶ���ߵ�Ԫ
	void ReqQryInvestUnit()
	{
		CThostFtdcQryInvestUnitField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.InvestorID, "00402");
		//strcpy_s(a.InvestorID, g_chInvestorID);
		int b = m_pUserApi->ReqQryInvestUnit(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯͶ���ߵ�Ԫ......���ͳɹ�\n" : "�����ѯͶ���ߵ�Ԫ......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ���͹�˾���ײ���
	void ReqQryBrokerTradingParams()
	{
		CThostFtdcQryBrokerTradingParamsField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqQryBrokerTradingParams(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ���͹�˾���ײ���......���ͳɹ�\n" : "�����ѯ���͹�˾���ײ���......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯѯ��
	void ReqQryForQuote()
	{
		CThostFtdcQryForQuoteField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		strcpy_s(a.InsertTimeStart, "");
		strcpy_s(a.InsertTimeEnd, "");
		strcpy_s(a.InvestUnitID, "");
		int b = m_pUserApi->ReqQryForQuote(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯѯ��......���ͳɹ�\n" : "�����ѯѯ��......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ����
	void ReqQryQuote()
	{
		CThostFtdcQryQuoteField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		strcpy_s(a.QuoteSysID, "");
		strcpy_s(a.InsertTimeStart, "");
		strcpy_s(a.InsertTimeEnd, "");
		strcpy_s(a.InvestUnitID, "");
		int b = m_pUserApi->ReqQryQuote(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯѯ��......���ͳɹ�\n" : "�����ѯѯ��......����ʧ�ܣ��������=[%d]\n", b);
	}

	///ѯ��¼������
	void ReqForQuoteInsert()
	{
		CThostFtdcInputForQuoteField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		//strcpy_s(a.ForQuoteRef, "");
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		//strcpy_s(a.InvestUnitID, "");
		//strcpy_s(a.IPAddress, "");
		//strcpy_s(a.MacAddress, "");
		int b = m_pUserApi->ReqForQuoteInsert(&a, nRequestID++);
		LOG((b == 0) ? "ѯ��¼������......���ͳɹ�\n" : "ѯ��¼������......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�����̱���¼������
	void ReqQuoteInsert()
	{
	choose:int choose_Flag;
		LOG("��ȷ�Ͽ�ƽ��־\t1.����\t2.ƽ��\n");
		cin >> choose_Flag;

		if (choose_Flag != 1 && choose_Flag!=2)
		{
			LOG("������ѡ��ƽ��־\n");
			_getch();
			choose_Flag = NULL;
			goto choose;
		}

		int price_bid;
		LOG("����������۸�\n");
		cin >> price_bid;

		int price_ask;
		LOG("������������۸�\n");
		cin >> price_ask;
		LOG("��������Ĭ����1��\n");
		string quoteref;
		LOG("������quoteref��ţ�\n");
		cin >> quoteref;
		string AskOrderRef;
		string BidOrderRef;
		LOG("������AskOrderRef���:\n");
		cin >> AskOrderRef;
		LOG("������BidOrderRef���:\n");
		cin >> BidOrderRef;
		_getch();
		CThostFtdcInputQuoteField t = { 0 };
		strcpy_s(t.BrokerID, g_chBrokerID);
		strcpy_s(t.InvestorID, g_chInvestorID);
		strcpy_s(t.InstrumentID, g_chInstrumentID);
		strcpy_s(t.ExchangeID, g_chExchangeID);
		
		strcpy_s(t.QuoteRef, quoteref.c_str());
		strcpy_s(t.UserID, g_chUserID);
		t.AskPrice = price_ask;
		t.BidPrice = price_bid;
		t.AskVolume = 1;
		t.BidVolume = 1;
		if (choose_Flag ==1)
		{
			t.AskOffsetFlag = THOST_FTDC_OF_Open;///����ƽ��־
			t.BidOffsetFlag = THOST_FTDC_OF_Open;///��ƽ��־
		}
		else if (choose_Flag ==2)
		{
			t.AskOffsetFlag = THOST_FTDC_OF_Close;///����ƽ��־
			t.BidOffsetFlag = THOST_FTDC_OF_Close;///��ƽ��־
		}
		t.AskHedgeFlag = THOST_FTDC_HF_Speculation;///��Ͷ���ױ���־
		t.BidHedgeFlag = THOST_FTDC_HF_Speculation;///��Ͷ���ױ���־

		strcpy_s(t.AskOrderRef, AskOrderRef.c_str());///��������������
		strcpy_s(t.BidOrderRef, BidOrderRef.c_str());///�����򱨵�����
		//strcpy_s(t.ForQuoteSysID, "");///Ӧ�۱��
		//strcpy_s(t.InvestUnitID, "1");///Ͷ�ʵ�Ԫ����
		int a = m_pUserApi->ReqQuoteInsert(&t, 1);
		LOG((a == 0) ? "�����̱���¼������......���ͳɹ�\n" : "�����̱���¼������......����ʧ�ܣ��������=[%d]\n", a);
	}

	///����֪ͨ
	virtual void OnRtnQuote(CThostFtdcQuoteField *pQuote) 
	{
		if (pQuote && strcmp(pQuote->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			CTraderSpi::OnRtnQuote(pQuote);
			//SetEvent(g_hEvent);
		}
	}

	//���۳���
	void ReqQuoteAction()
	{
		CThostFtdcInputQuoteActionField t = { 0 };
		strcpy_s(t.BrokerID, g_chBrokerID);
		strcpy_s(t.InvestorID, "00404");
		//strcpy_s(t.UserID, g_chUserID);
		strcpy_s(t.ExchangeID, "SHFE");
		strcpy_s(t.QuoteRef, "           8");
		t.FrontID = 7;
		t.SessionID = 1879781311;
		t.ActionFlag = THOST_FTDC_AF_Delete;
		strcpy_s(t.InstrumentID, "cu1905C55000");
		int a = m_pUserApi->ReqQuoteAction(&t, 1);
		printf("m_pUserApi->ReqQuoteAction = [%d]", a);
	}

	//��ѯ��󱨵���������
	void ReqQueryMaxOrderVolume()
	{
		CThostFtdcQueryMaxOrderVolumeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		a.Direction = THOST_FTDC_D_Buy;
		a.OffsetFlag = THOST_FTDC_OF_Open;
		a.HedgeFlag = THOST_FTDC_HF_Speculation;
		a.MaxVolume = 1;
		strcpy_s(a.BrokerID, g_chBrokerID);
		int b = m_pUserApi->ReqQueryMaxOrderVolume(&a, nRequestID++);
		LOG((b == 0) ? "��ѯ��󱨵���������......���ͳɹ�\n" : "��ѯ��󱨵���������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��������û�����
	void ReqQueryCFMMCTradingAccountToken()
	{
		CThostFtdcQueryCFMMCTradingAccountTokenField a = { 0 };

	}

	

	///������������ر�
	virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
	{
		if (pOrderAction && strcmp(pOrderAction->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			CTraderSpi::OnErrRtnOrderAction(pOrderAction,pRspInfo);
			SetEvent(g_hEvent);
		}
	}

	///����¼��������Ӧ
	virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
	{
		if (pInputOrder && strcmp(pInputOrder->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			CTraderSpi::OnRspOrderInsert(pInputOrder,pRspInfo,nRequestID,bIsLast);
		}
	}

	///����¼�����ر�
	virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
	{
		if (pInputOrder && strcmp(pInputOrder->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			CTraderSpi::OnErrRtnOrderInsert(pInputOrder, pRspInfo);
			SetEvent(g_hEvent);
		}
	}

	///����֪ͨ
	virtual void OnRtnOrder(CThostFtdcOrderField *pOrder)
	{
		if (pOrder && strcmp(pOrder->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			CTraderSpi::OnRtnOrder(pOrder);
			strcpy_s(g_chOrderSysID, pOrder->OrderSysID);
			g_chFrontID = pOrder->FrontID;
			g_chSessionID = pOrder->SessionID;
			strcpy_s(g_chOrderRef, pOrder->OrderRef);
			strcpy_s(g_chExchangeID, pOrder->ExchangeID);
			if (pOrder->OrderStatus == THOST_FTDC_OST_AllTraded)///ȫ���ɽ�
			{
				LOG("����ȫ���ɽ�\n\n");
				//SetEvent(g_hEvent);
			}if (pOrder->OrderStatus == THOST_FTDC_OST_PartTradedQueueing)///���ֳɽ����ڶ�����
			{
				LOG("���ֳɽ����ڶ�����\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_PartTradedNotQueueing)///���ֳɽ����ڶ�����
			{
				LOG("���ֳɽ����ڶ�����\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_NoTradeQueueing)///δ�ɽ����ڶ�����
			{
				chioce_action = 0;
				LOG("δ�ɽ����ڶ�����\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_NoTradeNotQueueing)///δ�ɽ����ڶ�����
			{
				LOG("δ�ɽ����ڶ�����\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_Canceled)///����
			{
				LOG("����\n\n");
				//SetEvent(g_hEvent);
			}if (pOrder->OrderStatus == THOST_FTDC_OST_Unknown)///δ֪
			{
				LOG("δ֪\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_NotTouched)///��δ����
			{
				chioce_action = 1;
				LOG("��δ����\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_Touched)///�Ѵ���
			{
				LOG("�Ѵ���\n\n");
			}
		}
	}

	///ɾ��Ԥ����Ӧ
	virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
	{
		if (pRemoveParkedOrder && strcmp(pRemoveParkedOrder->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			strcpy_s(g_chParkedOrderID1, pRemoveParkedOrder->ParkedOrderID);
			CTraderSpi::OnRspRemoveParkedOrder(pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast);
			SetEvent(g_hEvent);
		}
	}

	///ɾ��Ԥ�񳷵���Ӧ
	virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
	{
		if (pRemoveParkedOrderAction && strcmp(pRemoveParkedOrderAction->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			strcpy_s(g_chParkedOrderActionID1, pRemoveParkedOrderAction->ParkedOrderActionID);
			CTraderSpi::OnRspRemoveParkedOrderAction(pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast);
			SetEvent(g_hEvent);
		}
	}

	///Ԥ��¼��������Ӧ
	virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
	{
		if (pParkedOrder && strcmp(pParkedOrder->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			strcpy_s(g_chParkedOrderID1, pParkedOrder->ParkedOrderID);
			CTraderSpi::OnRspParkedOrderInsert(pParkedOrder, pRspInfo, nRequestID, bIsLast);
			SetEvent(g_hEvent);
		}
	}

	///Ԥ�񳷵�¼��������Ӧ
	virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
	{
		if (pParkedOrderAction && strcmp(pParkedOrderAction->InvestorID, g_chInvestorID) != 0)
		{
			return;
		}
		else
		{
			strcpy_s(g_chParkedOrderActionID1, pParkedOrderAction->ParkedOrderActionID);
			CTraderSpi::OnRspParkedOrderAction(pParkedOrderAction,pRspInfo,nRequestID,bIsLast);
			SetEvent(g_hEvent);
		}
	}

	///�����ѯԤ�񳷵���Ӧ
	virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspQryParkedOrderAction(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
	}

	///�����ѯԤ����Ӧ
	virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspQryParkedOrder(pParkedOrder,pRspInfo,nRequestID,bIsLast);
	}

	///�����ѯ������Ӧ
	virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		if (pOrder) {
			vector_OrderSysID.push_back(pOrder->OrderSysID);
			vector_ExchangeID.push_back(pOrder->ExchangeID);
			vector_InstrumentID.push_back(pOrder->InstrumentID);
		}
		CTraderSpi::OnRspQryOrder(pOrder,pRspInfo,nRequestID,bIsLast);
		action_number++;
		LOG("\n��ѯ��ţ�\"%d\"\n\n", action_number);
	}

	///ִ������֪ͨ
	virtual void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) 
	{
		if (pExecOrder) {
			strcpy_s(g_NewExecOrderRef, pExecOrder->ExecOrderRef);
			strcpy_s(g_NewExecOrderSysID, pExecOrder->ExecOrderSysID);
			g_NewFrontID = pExecOrder->FrontID;
			g_NewSessionID = pExecOrder->SessionID;
		}
		CTraderSpi::OnRtnExecOrder(pExecOrder);
	}

	//�ڻ������ѯ�����������
	void ReqQueryBankAccountMoneyByFuture()
	{
		CThostFtdcReqQueryAccountField a = { 0 };
		int b = m_pUserApi->ReqQueryBankAccountMoneyByFuture(&a, nRequestID++);
		LOG((b == 0) ? "�ڻ������ѯ�����������......���ͳɹ�\n" : "�ڻ������ѯ�����������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�ڻ����������ʽ�ת�ڻ�����
	void ReqFromBankToFutureByFuture()
	{
		int output_num;
		LOG("������ת�˽��:");
		cin >> output_num;

		CThostFtdcReqTransferField a = { 0 };
		strcpy_s(a.TradeCode, "202001");///ҵ������
	int bankid = 0;
		while (bankid != 1 & 2 & 3 & 5 & 6 & 7 & 8 & 9 & 10 & 11 & 12 & 13 & 14 & 15 & 16) {
			LOG("����������Ҫ��ת�˵�����\n");
			LOG("1.��������\n");
			LOG("2.ũҵ����\n");
			LOG("3.�й�����\n");
			LOG("5.��ͨ����\n");
			LOG("6.��������\n");
			LOG("7.��ҵ����\n");
			LOG("8.�ַ�����\n");
			LOG("9.��������\n");
			LOG("10.�������\n");
			LOG("11.��������\n");
			LOG("12.�������\n");
			LOG("13.ƽ������\n");
			LOG("14.ũ������\n");
			LOG("15.��չ����\n");
			LOG("16.�㷢����\n");
			cin >> bankid;
			if (bankid == 1 | 2 | 3 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16)
			{
				//strcpy_s(a.BankID, itoa(bankid, a.BankID, 10));///���д���
				itoa(bankid, a.BankID, 10);
			}
			else
			{
				LOG("�������������д��롣\n");
				_getch();
			}
		}
		
		
		strcpy_s(a.BankBranchID, "0000");///���̴���
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.TradeDate, "20170829");///��������
		strcpy_s(a.TradeTime, "09:00:00");
		strcpy_s(a.BankSerial, "6889");///������ˮ��
		strcpy_s(a.TradingDay, "20170829");///����ϵͳ���� 
		a.PlateSerial = 5;///����ƽ̨��Ϣ��ˮ��
		a.LastFragment = THOST_FTDC_LF_Yes;///����Ƭ��־ '0'=������Ƭ
		a.SessionID = SessionID;
		//strcpy_s(a.CustomerName, "");///�ͻ�����
		a.IdCardType = THOST_FTDC_ICT_IDCard;///֤������
		a.CustType = THOST_FTDC_CUSTT_Person;///�ͻ�����
		//strcpy_s(a.IdentifiedCardNo, "310115198706241914");///֤������
		/*strcpy_s(a.BankAccount, "123456789");
		strcpy_s(a.BankPassWord, "123456");///��������*/
		strcpy_s(a.BankAccount, "621485212110187");
		//strcpy_s(a.BankPassWord, "092812");///��������--����Ҫ���п�����
		strcpy_s(a.AccountID, g_chInvestorID);///Ͷ�����ʺ�
		//strcpy_s(a.Password, "092812");///�ڻ�����--�ʽ�����
		strcpy_s(a.Password, "123456");///�ڻ�����--�ʽ�����
		a.InstallID = 1;///��װ���
		a.FutureSerial = 0;///�ڻ���˾��ˮ��
		a.VerifyCertNoFlag = THOST_FTDC_YNI_No;///��֤�ͻ�֤�������־
		strcpy_s(a.CurrencyID, "CNY");///���ִ���
		a.TradeAmount = output_num;///ת�ʽ��
		a.FutureFetchAmount = 0;///�ڻ���ȡ���
		a.CustFee = 0;///Ӧ�տͻ�����
		a.BrokerFee = 0;///Ӧ���ڻ���˾����
		a.SecuPwdFlag = THOST_FTDC_BPWDF_BlankCheck;///�ڻ��ʽ�����˶Ա�־
		a.RequestID = 0;///������
		a.TID = 0;///����ID
		int b = m_pUserApi->ReqFromBankToFutureByFuture(&a, 1);
		LOG((b == 0) ? "�ڻ����������ʽ�ת�ڻ�����......���ͳɹ�\n" : "�ڻ����������ʽ�ת�ڻ�����......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�ڻ������ڻ��ʽ�ת��������
	void ReqFromFutureToBankByFuture()
	{
		int output_num;
		LOG("������ת�˽��:");
		cin >> output_num;

		CThostFtdcReqTransferField a = { 0 };
		strcpy_s(a.TradeCode, "202002");///ҵ������
		bankid_new:int bankid = 0;
		LOG("����������Ҫ��ת�˵�����\n");
		LOG("1.��������\n");
		LOG("2.ũҵ����\n");
		LOG("3.�й�����\n");
		LOG("5.��ͨ����\n");
		LOG("6.��������\n");
		LOG("7.��ҵ����\n");
		LOG("8.�ַ�����\n");
		LOG("9.��������\n");
		LOG("10.�������\n");
		LOG("11.��������\n");
		LOG("12.�������\n");
		LOG("13.ƽ������\n");
		LOG("14.ũ������\n");
		LOG("15.��չ����\n");
		LOG("16.�㷢����\n");
		cin >> bankid;
		if (bankid == 1 | 2 | 3 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16)
		{
			//strcpy_s(a.BankID, itoa(bankid, a.BankID, 10));///���д���
			itoa(bankid, a.BankID, 10);
		}
		else {
			LOG("��������ȷ�ı��\n");
			_getch();
			goto bankid_new;
		}
		strcpy_s(a.BankBranchID, "0000");///���̴���
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.BankBranchID, "0000");///���з�֧��������
		//strcpy_s(a.TradeDate, "20170829");///��������
		//strcpy_s(a.TradeTime, "09:00:00");
		//strcpy_s(a.BankSerial, "");///������ˮ��
		//strcpy_s(a.TradingDay, "20170829");///����ϵͳ���� 
		//a.PlateSerial= 0;///����ƽ̨��Ϣ��ˮ��
		a.LastFragment = THOST_FTDC_LF_Yes;///����Ƭ��־ '0'=������Ƭ
		a.SessionID = SessionID;
		//strcpy_s(a.CustomerName, "");///�ͻ�����
		a.IdCardType = THOST_FTDC_ICT_IDCard;///֤������
		strcpy_s(a.IdentifiedCardNo, "310115198706241914");///֤������
		strcpy_s(a.BankAccount, "123456789");///�����ʺ�
		//strcpy_s(a.BankPassWord, "123456");///��������
		strcpy_s(a.AccountID, g_chInvestorID);///Ͷ�����ʺ�
		strcpy_s(a.Password, "123456");///�ڻ�����
		a.InstallID = 1;///��װ���
		a.CustType = THOST_FTDC_CUSTT_Person;
		//a.FutureSerial = 0;///�ڻ���˾��ˮ��
		a.VerifyCertNoFlag = THOST_FTDC_YNI_No;///��֤�ͻ�֤�������־
		strcpy_s(a.CurrencyID, "CNY");///���ִ���
		a.TradeAmount = output_num;///ת�ʽ��
		a.FutureFetchAmount = 0;///�ڻ���ȡ���
		a.CustFee = 0;///Ӧ�տͻ�����
		a.BrokerFee = 0;///Ӧ���ڻ���˾����
		//a.SecuPwdFlag = THOST_FTDC_BPWDF_BlankCheck;///�ڻ��ʽ�����˶Ա�־
		a.RequestID = 0;///������
		a.TID = 0;///����ID
		int b = m_pUserApi->ReqFromFutureToBankByFuture(&a, 1);
		LOG((b == 0) ? "�ڻ������ڻ��ʽ�ת��������......���ͳɹ�\n" : "�ڻ������ڻ��ʽ�ת��������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//��Ȩ�ԶԳ�¼������
	void ReqOptionSelfCloseInsert()
	{
		CThostFtdcInputOptionSelfCloseField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.OptionSelfCloseRef, "1");
		strcpy_s(a.UserID, g_chUserID);
		a.Volume = 1;
		
		int choose_1 = 0;
		while (choose_1 != 1 && choose_1 != 2 && choose_1 != 3 && choose_1 != 4) {
			LOG("��ѡ��Ͷ���ױ���־\n1.Ͷ��\t2.����\t3.�ױ�\t4.������\n");
			cin >> choose_1;
			if (choose_1 == 1) { a.HedgeFlag = THOST_FTDC_HF_Speculation; }
			else if (choose_1 == 2) { a.HedgeFlag = THOST_FTDC_HF_Arbitrage; }
			else if (choose_1 == 3) { a.HedgeFlag = THOST_FTDC_HF_Hedge; }
			else if (choose_1 == 4) { a.HedgeFlag = THOST_FTDC_HF_MarketMaker; }
			else {
				LOG("ѡ�����������ѡ��\n");
				_getch();
			}
		}
		
		int choose_2 = 0;
		while (choose_2 != 1 && choose_2 != 2 && choose_2 != 3) {
			LOG("��ѡ����Ȩ��Ȩ��ͷ���Ƿ��ԶԳ��־\n1.�ԶԳ���Ȩ��λ\t2.������Ȩ��λ\t3.�ԶԳ�������Լ����ڻ���λ\n");
			cin >> choose_2;
			if (choose_2 == 1) { a.OptSelfCloseFlag = THOST_FTDC_OSCF_CloseSelfOptionPosition; }
			else if (choose_2 == 2) { a.OptSelfCloseFlag = THOST_FTDC_OSCF_ReserveOptionPosition; }
			else if (choose_2 == 3) { a.OptSelfCloseFlag = THOST_FTDC_OSCF_SellCloseSelfFuturePosition; }
			else {
				LOG("ѡ�����������ѡ��\n");
				_getch();
				continue;
			}
		}

		strcpy_s(a.ExchangeID, g_chExchangeID);
		string accountid_new;
		LOG("�������ʽ��˺�:\n");
		cin >> accountid_new;
		strcpy_s(a.AccountID, accountid_new.c_str());
		strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqOptionSelfCloseInsert(&a, 1);
		LOG((b == 0) ? "��Ȩ�ԶԳ�¼������......���ͳɹ�\n" : "��Ȩ�ԶԳ�¼������......����ʧ�ܣ��������=[%d]\n", b);
	}

	///��Ȩ�ԶԳ�֪ͨ
	virtual void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose)
	{
		if (pOptionSelfClose) {
			g_chFrontID = pOptionSelfClose->FrontID;
			g_chSessionID = pOptionSelfClose->SessionID;
			strcpy_s(g_chOptionSelfCloseSysID, pOptionSelfClose->OptionSelfCloseSysID);//��Ȩ�ԶԳ���
			strcpy_s(g_chOptionSelfCloseRef, pOptionSelfClose->OptionSelfCloseRef);//��Ȩ�ԶԳ�����
		}
		CTraderSpi::OnRtnOptionSelfClose(pOptionSelfClose);
	}

	//��Ȩ�ԶԳ��������
	void ReqOptionSelfCloseAction()
	{
		CThostFtdcInputOptionSelfCloseActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.OptionSelfCloseSysID, g_chOptionSelfCloseSysID);//��Ȩ�ԶԳ���
		strcpy_s(a.OptionSelfCloseRef, g_chOptionSelfCloseRef);//��Ȩ�ԶԳ�����
		//a.FrontID = g_chFrontID;
		//a.SessionID = g_chSessionID;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		a.ActionFlag = THOST_FTDC_AF_Delete;
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqOptionSelfCloseAction(&a, 1);
		LOG((b == 0) ? "��Ȩ�ԶԳ��������......���ͳɹ�\n" : "��Ȩ�ԶԳ��������......����ʧ�ܣ��������=[%d]\n", b);
	}

	//�����ѯ��Ȩ�ԶԳ�
	void ReqQryOptionSelfClose()
	{
		CThostFtdcQryOptionSelfCloseField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int b = m_pUserApi->ReqQryOptionSelfClose(&a, 1);
		LOG((b == 0) ? "�����ѯ��Ȩ�ԶԳ�......���ͳɹ�\n" : "�����ѯ��Ȩ�ԶԳ�......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�����ѯ��Ȩ�ԶԳ���Ӧ
	virtual void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		if (pOptionSelfClose) {
			g_chFrontID = pOptionSelfClose->FrontID;
			g_chSessionID = pOptionSelfClose->SessionID;
			strcpy_s(g_chOptionSelfCloseSysID, pOptionSelfClose->OptionSelfCloseSysID);//��Ȩ�ԶԳ���
			strcpy_s(g_chOptionSelfCloseRef, pOptionSelfClose->OptionSelfCloseRef);//��Ȩ�ԶԳ�����
		}
		CTraderSpi::OnRspQryOptionSelfClose(pOptionSelfClose, pRspInfo, nRequestID, bIsLast);
	}

	///�����ѯִ������
	void ReqQryExecOrder()
	{
		CThostFtdcQryExecOrderField a = { 0 }; 
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		strcpy_s(a.ExecOrderSysID, "");
		strcpy_s(a.InsertTimeStart, "");
		strcpy_s(a.InsertTimeEnd, "");
		int b = m_pUserApi->ReqQryExecOrder(&a, 1);
		LOG((b == 0) ? "ִ�������ѯ......���ͳɹ�\n" : "ִ�������ѯ......����ʧ�ܣ��������=[%d]\n", b);
	}

	///��ѯ�����ʽ��˻�
	void ReqQrySecAgentTradingAccount()
	{
		CThostFtdcQryTradingAccountField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.CurrencyID, "CNY");
		a.BizType = THOST_FTDC_BZTP_Future;
		strcpy_s(a.AccountID, g_chInvestorID);
		int b = m_pUserApi->ReqQrySecAgentTradingAccount(&a, 1);
		LOG((b == 0) ? "��ѯ�����ʽ��˻�......���ͳɹ�\n" : "��ѯ�����ʽ��˻�......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�����ѯ�����������ʽ�У��ģʽ
	void ReqQrySecAgentCheckMode()
	{
		CThostFtdcQrySecAgentCheckModeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		int b = m_pUserApi->ReqQrySecAgentCheckMode(&a, 1);
		LOG((b == 0) ? "�����ѯ�����������ʽ�У��ģʽ......���ͳɹ�\n" : "�����ѯ�����������ʽ�У��ģʽ......����ʧ�ܣ��������=[%d]\n", b);
	}

	///ע���û��ն���Ϣ�������м̷�����������ģʽ
	///��Ҫ���ն���֤�ɹ����û���¼ǰ���øýӿ�
	void RegisterUserSystemInfo()
	{
		char pSystemInfo[344];
		int len;
		CTP_GetSystemInfo(pSystemInfo, len);

		CThostFtdcUserSystemInfoField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		memcpy(a.ClientSystemInfo, pSystemInfo, len);
		a.ClientSystemInfoLen = len;

		/*string ip;
		ip.clear();
		cin.ignore();
		LOG("������ip��ַ(��������Ϊ��)\n");
		getline(cin, ip);
		strcpy_s(a.ClientPublicIP, ip.c_str());*/
		strcpy_s(a.ClientPublicIP, "192.168.0.1");//ip��ַ

		//int Port;
		//Port = 0;
		//cin.ignore();
		//LOG("������˿ں�\n");
		//cin >> Port;
		//a.ClientIPPort = Port;//�˿ں�
		a.ClientIPPort = 51305;//�˿ں�

		/*string LoginTime;
		LoginTime.clear();
		cin.ignore();
		LOG("�������¼ʱ��(��������Ϊ��)\n");
		getline(cin, LoginTime);
		strcpy_s(a.ClientPublicIP, LoginTime.c_str());*/
		strcpy_s(a.ClientLoginTime, "20190121");
		strcpy_s(a.ClientAppID, g_chAppID);
		int b = m_pUserApi->RegisterUserSystemInfo(&a);
		LOG((b == 0) ? "ע���û��ն���Ϣ......���ͳɹ�\n" : "ע���û��ն���Ϣ......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�ϱ��û��ն���Ϣ�������м̷���������Ա��¼ģʽ
	///����Ա��¼�󣬿��Զ�ε��øýӿ��ϱ��ͻ���Ϣ
	void SubmitUserSystemInfo()
	{
		char pSystemInfo[344];
		int len;
		CTP_GetSystemInfo(pSystemInfo, len);

		CThostFtdcUserSystemInfoField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		memcpy(a.ClientSystemInfo, pSystemInfo, len);
		a.ClientSystemInfoLen = len;

		/*string ip;
		ip.clear();
		cin.ignore();
		LOG("������ip��ַ(��������Ϊ��)\n");
		getline(cin, ip);
		strcpy_s(a.ClientPublicIP, ip.c_str());*/
		strcpy_s(a.ClientPublicIP, "192.168.0.1");//ip��ַ

		//int Port;
		//Port = 0;
		//cin.ignore();
		//LOG("������˿ں�\n");
		//cin >> Port;
		//a.ClientIPPort = Port;//�˿ں�
		a.ClientIPPort = 51305;//�˿ں�

		/*string LoginTime;
		LoginTime.clear();
		cin.ignore();
		LOG("�������¼ʱ��(��������Ϊ��)\n");
		getline(cin, LoginTime);
		strcpy_s(a.ClientPublicIP, LoginTime.c_str());*/
		strcpy_s(a.ClientLoginTime, "20190121");
		strcpy_s(a.ClientAppID, g_chAppID);
		int b = m_pUserApi->SubmitUserSystemInfo(&a);
		LOG((b == 0) ? "ע���û��ն���Ϣ......���ͳɹ�\n" : "ע���û��ն���Ϣ......����ʧ�ܣ��������=[%d]\n", b);
	}

	///��ѯ�û���ǰ֧�ֵ���֤ģʽ
	void ReqUserAuthMethod()
	{
		CThostFtdcReqUserAuthMethodField a = { 0 };
		strcpy_s(a.TradingDay, "20190308");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		int b = m_pUserApi->ReqUserAuthMethod(&a, nRequestID++);
		LOG((b == 0) ? "��ѯ�û���ǰ֧�ֵ���֤ģʽ......���ͳɹ�\n" : "��ѯ�û���ǰ֧�ֵ���֤ģʽ......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�û�������ȡͼ����֤������
	void ReqGenUserCaptcha()
	{
		CThostFtdcReqGenUserCaptchaField a = { 0 };
		strcpy_s(a.TradingDay, "");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		int b = m_pUserApi->ReqGenUserCaptcha(&a, nRequestID++);
		LOG((b == 0) ? "�û�������ȡͼ����֤������......���ͳɹ�\n" : "�û�������ȡͼ����֤������......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�û�������ȡ������֤������
	void ReqGenUserText()
	{
		CThostFtdcReqGenUserTextField a = { 0 };
		strcpy_s(a.TradingDay, "");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		int b = m_pUserApi->ReqGenUserText(&a, nRequestID++);
		LOG((b == 0) ? "�û�������ȡ������֤������......���ͳɹ�\n" : "�û�������ȡ������֤������......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�û���������ͼƬ��֤��ĵ�½����
	void ReqUserLoginWithCaptcha()
	{
		CThostFtdcReqUserLoginWithCaptchaField a = { 0 };
		strcpy_s(a.TradingDay, "");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.Password, g_chPassword);
		strcpy_s(a.UserProductInfo, "");
		strcpy_s(a.InterfaceProductInfo, "");
		strcpy_s(a.ProtocolInfo, "");//Э����Ϣ
		strcpy_s(a.MacAddress, "");//Mac��ַ
		strcpy_s(a.ClientIPAddress, "");//�ն�IP��ַ
		strcpy_s(a.LoginRemark, "");//��¼����
		strcpy_s(a.Captcha, "");//ͼ����֤�����������
		a.ClientIPPort = 10203;
		int b = m_pUserApi->ReqUserLoginWithCaptcha(&a, nRequestID++);
		LOG((b == 0) ? "�û���������ͼƬ��֤��ĵ�½����......���ͳɹ�\n" : "�û���������ͼƬ��֤��ĵ�½����......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�û��������ж�����֤��ĵ�½����
	void ReqUserLoginWithText()
	{
		CThostFtdcReqUserLoginWithTextField a = { 0 };
		strcpy_s(a.TradingDay, "");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.Password, g_chPassword);
		strcpy_s(a.UserProductInfo, "");
		strcpy_s(a.InterfaceProductInfo, "");
		strcpy_s(a.MacAddress, "");
		strcpy_s(a.ClientIPAddress, "");
		strcpy_s(a.LoginRemark, "");
		strcpy_s(a.Text, "");
		a.ClientIPPort = 10000;
		int b = m_pUserApi->ReqUserLoginWithText(&a, nRequestID++);
		LOG((b == 0) ? "�û��������ж�����֤��ĵ�½����......���ͳɹ�\n" : 
			"�û��������ж�����֤��ĵ�½����......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�û��������ж�̬����ĵ�½����
	void ReqUserLoginWithOTP()
	{
		CThostFtdcReqUserLoginWithOTPField a = { 0 };
		strcpy_s(a.TradingDay, "");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.Password, g_chPassword);
		strcpy_s(a.UserProductInfo, "");
		strcpy_s(a.InterfaceProductInfo, "");
		strcpy_s(a.MacAddress, "");
		strcpy_s(a.ClientIPAddress, "");
		strcpy_s(a.LoginRemark, "");
		strcpy_s(a.OTPPassword, "");
		a.ClientIPPort = 10000;
		int b = m_pUserApi->ReqUserLoginWithOTP(&a, nRequestID++);
		LOG((b == 0) ? "�û��������ж�̬����ĵ�½����......���ͳɹ�\n" : "�û��������ж�̬����ĵ�½����......����ʧ�ܣ��������=[%d]\n", b);
	}

	///�����ѯ������������Ϣ
	void ReqQrySecAgentTradeInfo()
	{
		CThostFtdcQrySecAgentTradeInfoField a = { 0 };
		strcpy_s(a.BrokerID, "");
		strcpy_s(a.BrokerSecAgentID, "");
		int b = m_pUserApi->ReqQrySecAgentTradeInfo(&a, nRequestID++);
		LOG((b == 0) ? "�����ѯ������������Ϣ......���ͳɹ�\n" : "�����ѯ������������Ϣ......����ʧ�ܣ��������=[%d]\n", b);
	}



private:
	CThostFtdcTraderApi *m_pUserApi;
};
