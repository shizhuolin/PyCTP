#pragma once
#include "stdafx.h"
#include <list>
#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include "ThostFtdcTraderApi.h"
#include "ThostFtdcMdApi.h"
#include "DataCollect.h"
#include <conio.h>
#include "getconfig.h"
#include "traderApi.h"
#include "traderSpi.h"
#include "define.h"
#include <vector>
#include <map>
#include "time.h"

using namespace std;
FILE *logfile;

// 报单录入操作是否完成的标志
// Create a manual reset event with no signal
HANDLE g_hEvent = CreateEvent(NULL, false, false, NULL);
/// 会员代码
TThostFtdcBrokerIDType g_chBrokerID;
/// 交易用户代码
TThostFtdcUserIDType g_chUserID;
/// 交易用户密码
TThostFtdcPasswordType g_chPassword;
/// 交易所代码
TThostFtdcExchangeIDType g_chExchangeID;
///合约代码
TThostFtdcInstrumentIDType	g_chInstrumentID;
///投资者代码
TThostFtdcInvestorIDType g_chInvestorID;
///预埋撤单编号
TThostFtdcParkedOrderActionIDType	g_chParkedOrderActionID1;
///预埋报单编号
TThostFtdcParkedOrderIDType	g_chParkedOrderID1;
///报单引用
TThostFtdcOrderRefType	g_chOrderRef;
///前置编号
TThostFtdcFrontIDType	g_chFrontID;
///会话编号
TThostFtdcSessionIDType	g_chSessionID;
///报单编号
TThostFtdcOrderSysIDType	g_chOrderSysID;
///止损价
TThostFtdcPriceType	g_chStopPrice;
///报价引用
TThostFtdcOrderRefType	g_chQuoteRef;
int FrontID = 0;
int SessionID = 0;
int Limitprice = 0;
int nRequestID = 0;
int chioce_action = 0;//为0则全部报
int OrderRef_num = 0;

vector<string> vector_OrderSysID;
vector<string> vector_ExchangeID;
vector<string> vector_InstrumentID;
vector<string> vector_OrderRef;
vector<int> vector_FrontID;
vector<int> vector_SessionID;
vector<string> md_InstrumentID;
int action_number;

///执行宣告引用
TThostFtdcOrderRefType	g_NewExecOrderRef;
///执行宣告编号
TThostFtdcExecOrderSysIDType	g_NewExecOrderSysID;
///前置编号
TThostFtdcFrontIDType	g_NewFrontID;
///会话编号
TThostFtdcSessionIDType	g_NewSessionID;

//期权自对冲响应通知
///期权自对冲编号
TThostFtdcOrderSysIDType	g_chOptionSelfCloseSysID;
///期权自对冲引用
TThostFtdcOrderRefType	g_chOptionSelfCloseRef;
///用户端产品信息
TThostFtdcProductInfoType	g_chUserProductInfo;
///认证码
TThostFtdcAuthCodeType	g_chAuthCode;
///App代码
TThostFtdcAppIDType	g_chAppID;

HANDLE xinhao = CreateEvent(NULL, false, false, NULL);

CTraderApi *pUserApi = new CTraderApi;

//行情类
class CSimpleMdHandler : public CThostFtdcMdSpi
{
public:
	// 构造函数，需要一个有效的指向CThostFtdcMduserApi实例的指针
	CSimpleMdHandler(CThostFtdcMdApi *pUserApi) : m_pUserMdApi(pUserApi) {}
	~CSimpleMdHandler() {}
	// 当客户端与交易托管系统建立起通信连接，客户端需要进行登录
	void deletemyself()
	{
		delete this;
	}

	virtual void OnFrontConnected()
	{
		strcpy_s(g_chBrokerID, getConfig("config", "BrokerID").c_str());
		strcpy_s(g_chUserID, getConfig("config", "UserID").c_str());
		strcpy_s(g_chPassword, getConfig("config", "Password").c_str());
		//SetEvent(xinhao);
		LOG("<OnFrontConnected>\n");
		LOG("</OnFrontConnected>\n");
		SetEvent(xinhao);
		//ReqUserLogin();
	}

	void RegisterFensUserInfo()
	{
		strcpy_s(g_chBrokerID, getConfig("config", "BrokerID").c_str());
		strcpy_s(g_chUserID, getConfig("config", "UserID").c_str());
		CThostFtdcFensUserInfoField pFens = { 0 };
		strcpy_s(pFens.BrokerID, g_chBrokerID);
		strcpy_s(pFens.UserID, g_chUserID);
		pFens.LoginMode = THOST_FTDC_LM_Trade;
		m_pUserMdApi->RegisterFensUserInfo(&pFens);
	}

	void ReqUserLogin()
	{
		CThostFtdcReqUserLoginField reqUserLogin = { 0 };
		strcpy_s(reqUserLogin.BrokerID, g_chBrokerID);
		//strcpy_s(reqUserLogin.UserID, g_chUserID);
		//strcpy_s(reqUserLogin.UserID, g_chPassword);
		int num = m_pUserMdApi->ReqUserLogin(&reqUserLogin, 2);
		LOG("\tlogin num = %d\n", num);
	}

	void ReqUserLogout()
	{
		CThostFtdcUserLogoutField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		int num = m_pUserMdApi->ReqUserLogout(&a, 1);
		LOG("\tlogout num = %d\n", num);
	}

	virtual void OnHeartBeatWarning(int nTimeLapse)
	{
		LOG("<OnHeartBeatWarning>\n");
		LOG("\tnTimeLapse [%d]\n", nTimeLapse);
		LOG("</OnHeartBeatWarning>\n");
	}

	// 当客户端与交易托管系统通信连接断开时，该方法被调用
	virtual void OnFrontDisconnected(int nReason)
	{
		// 当发生这个情况后，API会自动重新连接，客户端可不做处理
		LOG("<OnFrontDisconnected>\n");
		LOG("\tnReason= = [%d]", nReason);
		LOG("</OnFrontDisconnected>\n");
	}

	// 当客户端发出登录请求之后，该方法会被调用，通知客户端登录是否成功
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspUserLogin>\n");
		if (pRspUserLogin)
		{
			LOG("\tTradingDay [%s]\n", pRspUserLogin->TradingDay);
			LOG("\tLoginTime [%s]\n", pRspUserLogin->LoginTime);
			LOG("\tBrokerID [%s]\n", pRspUserLogin->BrokerID);
			LOG("\tUserID [%s]\n", pRspUserLogin->UserID);
			LOG("\tSystemName [%s]\n", pRspUserLogin->SystemName);
			LOG("\tMaxOrderRef [%s]\n", pRspUserLogin->MaxOrderRef);
			LOG("\tSHFETime [%s]\n", pRspUserLogin->SHFETime);
			LOG("\tDCETime [%s]\n", pRspUserLogin->DCETime);
			LOG("\tCZCETime [%s]\n", pRspUserLogin->CZCETime);
			LOG("\tFFEXTime [%s]\n", pRspUserLogin->FFEXTime);
			LOG("\tINETime [%s]\n", pRspUserLogin->INETime);
			LOG("\tFrontID [%d]\n", pRspUserLogin->FrontID);
			LOG("\tSessionID [%d]\n", pRspUserLogin->SessionID);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID [%d]\n", nRequestID);
		LOG("\tbIsLast [%d]\n", bIsLast);
		LOG("</OnRspUserLogin>\n");
		if (pRspInfo->ErrorID != 0) {
			// 端登失败，客户端需进行错误处理
			LOG("\tFailed to login, errorcode=%d errormsg=%s requestid=%d chain = %d",
				pRspInfo->ErrorID, pRspInfo->ErrorMsg, nRequestID, bIsLast);
			cin.get();
			cin.ignore();
			exit(-1);
		}
		SetEvent(xinhao);
	}

	///登出请求响应
	virtual void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
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
		SetEvent(xinhao);
		//pUserApi->Release();
	}

	void UnSubscribeMarketData()
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
				int result = m_pUserMdApi->UnSubscribeMarketData(ppInstrumentID, a);
				LOG((result == 0) ? "退订行情请求1......发送成功\n" : "退订行情请求1......发送失败，错误序号=[%d]\n", result);
			}
			else if (count1 == md_InstrumentID.size() / 500)
			{
				int count2 = 0;
				for (count2; count2 < md_InstrumentID.size() % 500; count2++)
				{
					ppInstrumentID[count2] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
					md_num++;
				}
				int result = m_pUserMdApi->UnSubscribeMarketData(ppInstrumentID, count2);
				LOG((result == 0) ? "退订行情请求2......发送成功\n" : "退订行情请求2......发送失败，错误序号=[%d]\n", result);
			}
		}
	}

	virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspUnSubMarketData>\n");
		if (pSpecificInstrument)
		{
			LOG("\tInstrumentID [%s]\n", pSpecificInstrument->InstrumentID);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID [%d]\n", nRequestID);
		LOG("\tbIsLast [%d]\n", bIsLast);
		LOG("</OnRspUnSubMarketData>\n");
		if (bIsLast)
		{
			SetEvent(xinhao);
		}
	};

	void SubscribeMarketData()//收行情
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
				LOG((result == 0) ? "订阅行情请求1......发送成功\n" : "订阅行情请求1......发送失败，错误序号=[%d]\n", result);
			}
			else if (count1 == md_InstrumentID.size() / 500)
			{
				int count2 = 0;
				for (count2; count2 < md_InstrumentID.size() % 500; count2++)
				{
					ppInstrumentID[count2] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
					md_num++;
				}
				int result = m_pUserMdApi->SubscribeMarketData(ppInstrumentID, count2);
				LOG((result == 0) ? "订阅行情请求2......发送成功\n" : "订阅行情请求2......发送失败，错误序号=[%d]\n", result);
			}
		}
	}

	virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspSubMarketData>\n");
		if (pSpecificInstrument)
		{
			LOG("\tInstrumentID [%s]\n", pSpecificInstrument->InstrumentID);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID [%d]\n", nRequestID);
		LOG("\tbIsLast [%d]\n", bIsLast);
		LOG("</OnRspSubMarketData>\n");
		if (bIsLast)
		{
			SetEvent(xinhao);
		}
	};

	///深度行情通知
	virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
	{
		//获取系统时间
		SYSTEMTIME sys;
		GetLocalTime(&sys);
		LOG("%02d:%02d:%02d.%03d\t",
			sys.wHour,
			sys.wMinute,
			sys.wSecond,
			sys.wMilliseconds);
		LOG("<OnRtnDepthMarketData>");
		if (pDepthMarketData)
		{
			LOG("\tTradingDay [%s]\n", pDepthMarketData->TradingDay);
			LOG("\tInstrumentID [%s]", pDepthMarketData->InstrumentID);
			LOG("\tExchangeID [%s]", pDepthMarketData->ExchangeID);
			LOG("\tExchangeInstID [%s]\n", pDepthMarketData->ExchangeInstID);
			LOG("\tUpdateTime [%s]", pDepthMarketData->UpdateTime);
			LOG("\tActionDay [%s]\n", pDepthMarketData->ActionDay);
			LOG("\tVolume [%d]\n", pDepthMarketData->Volume);
			LOG("\tUpdateMillisec [%d]", pDepthMarketData->UpdateMillisec);
			LOG("\tBidVolume1 [%d]\n", pDepthMarketData->BidVolume1);
			LOG("\tAskVolume1 [%d]\n", pDepthMarketData->AskVolume1);
			LOG("\tBidVolume2 [%d]\n", pDepthMarketData->BidVolume2);
			LOG("\tAskVolume2 [%d]\n", pDepthMarketData->AskVolume2);
			LOG("\tBidVolume3 [%d]\n", pDepthMarketData->BidVolume3);
			LOG("\tAskVolume3 [%d]\n", pDepthMarketData->AskVolume3);
			LOG("\tBidVolume4 [%d]\n", pDepthMarketData->BidVolume4);
			LOG("\tAskVolume4 [%d]\n", pDepthMarketData->AskVolume4);
			LOG("\tBidVolume5 [%d]\n", pDepthMarketData->BidVolume5);
			LOG("\tAskVolume5 [%d]\n", pDepthMarketData->AskVolume5);
			LOG("\tLastPrice [%.8lf]\n", (pDepthMarketData->LastPrice > 10000000) ? 0 : pDepthMarketData->LastPrice);
			LOG("\tPreSettlementPrice [%.8lf]\n", (pDepthMarketData->PreSettlementPrice > 10000000) ? 0 : pDepthMarketData->PreSettlementPrice);
			LOG("\tPreClosePrice [%.8lf]\n", (pDepthMarketData->PreClosePrice > 10000000) ? 0 : pDepthMarketData->PreClosePrice);
			LOG("\tPreOpenInterest [%.8lf]\n", (pDepthMarketData->PreOpenInterest > 10000000) ? 0 : pDepthMarketData->PreOpenInterest);
			LOG("\tOpenPrice [%.8lf]\n", (pDepthMarketData->OpenPrice > 10000000) ? 0 : pDepthMarketData->OpenPrice);
			LOG("\tHighestPrice [%.8lf]\n", (pDepthMarketData->HighestPrice > 10000000) ? 0 : pDepthMarketData->HighestPrice);
			LOG("\tLowestPrice [%.8lf]\n", (pDepthMarketData->LowestPrice > 10000000) ? 0 : pDepthMarketData->LowestPrice);
			LOG("\tTurnover [%.8lf]\n", (pDepthMarketData->Turnover > 10000000) ? 0 : pDepthMarketData->Turnover);
			LOG("\tOpenInterest [%.8lf]\n", (pDepthMarketData->OpenInterest > 10000000) ? 0 : pDepthMarketData->OpenInterest);
			LOG("\tClosePrice [%.8lf]\n", (pDepthMarketData->ClosePrice > 10000000) ? 0 : pDepthMarketData->ClosePrice);
			LOG("\tSettlementPrice [%.8lf]\n", (pDepthMarketData->SettlementPrice > 10000000) ? 0 : pDepthMarketData->SettlementPrice);
			LOG("\tUpperLimitPrice [%.8lf]\n", (pDepthMarketData->UpperLimitPrice > 10000000) ? 0 : pDepthMarketData->UpperLimitPrice);
			LOG("\tLowerLimitPrice [%.8lf]\n", (pDepthMarketData->LowerLimitPrice > 10000000) ? 0 : pDepthMarketData->LowerLimitPrice);
			LOG("\tPreDelta [%.8lf]\n", (pDepthMarketData->PreDelta > 10000000) ? 0 : pDepthMarketData->PreDelta);
			LOG("\tCurrDelta [%.8lf]\n", (pDepthMarketData->CurrDelta > 10000000) ? 0 : pDepthMarketData->CurrDelta);
			LOG("\tBidPrice1 [%.8lf]\n", (pDepthMarketData->BidPrice1 > 10000000) ? 0 : pDepthMarketData->BidPrice1);
			LOG("\tAskPrice1 [%.8lf]\n", (pDepthMarketData->AskPrice1 > 10000000) ? 0 : pDepthMarketData->AskPrice1);
			LOG("\tBidPrice2 [%.8lf]\n", (pDepthMarketData->BidPrice2 > 10000000) ? 0 : pDepthMarketData->BidPrice2);
			LOG("\tAskPrice2 [%.8lf]\n", (pDepthMarketData->AskPrice2 > 10000000) ? 0 : pDepthMarketData->AskPrice2);
			LOG("\tBidPrice3 [%.8lf]\n", (pDepthMarketData->BidPrice3 > 10000000) ? 0 : pDepthMarketData->BidPrice3);
			LOG("\tAskPrice3 [%.8lf]\n", (pDepthMarketData->AskPrice3 > 10000000) ? 0 : pDepthMarketData->AskPrice3);
			LOG("\tBidPrice4 [%.8lf]\n", (pDepthMarketData->BidPrice4 > 10000000) ? 0 : pDepthMarketData->BidPrice4);
			LOG("\tAskPrice4 [%.8lf]\n", (pDepthMarketData->AskPrice4 > 10000000) ? 0 : pDepthMarketData->AskPrice4);
			LOG("\tBidPrice5 [%.8lf]\n", (pDepthMarketData->BidPrice5 > 10000000) ? 0 : pDepthMarketData->BidPrice5);
			LOG("\tAskPrice5 [%.8lf]\n", (pDepthMarketData->AskPrice5 > 10000000) ? 0 : pDepthMarketData->AskPrice5);
			LOG("\tAveragePrice [%.8lf]\n", (pDepthMarketData->AveragePrice > 10000000) ? 0 : pDepthMarketData->AveragePrice);
		}
		LOG("</OnRtnDepthMarketData>\n");
	};

	///订阅询价请求
	void SubscribeForQuoteRsp()
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
				int result = m_pUserMdApi->SubscribeForQuoteRsp(ppInstrumentID, a);
				LOG((result == 0) ? "订阅询价请求1......发送成功\n" : "订阅询价请求1......发送失败，错误序号=[%d]\n", result);
			}
			else if (count1 == md_InstrumentID.size() / 500)
			{
				int count2 = 0;
				for (count2; count2 < md_InstrumentID.size() % 500; count2++)
				{
					ppInstrumentID[count2] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
					md_num++;
				}
				int result = m_pUserMdApi->SubscribeForQuoteRsp(ppInstrumentID, count2);
				LOG((result == 0) ? "订阅询价请求2......发送成功\n" : "订阅询价请求2......发送失败，错误序号=[%d]\n", result);
			}
		}
	}

	virtual void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspSubForQuoteRsp>\n");
		if (pSpecificInstrument)
		{
			LOG("\tInstrumentID [%s]\n", pSpecificInstrument->InstrumentID);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID [%d]\n", nRequestID);
		LOG("\tbIsLast [%d]\n", bIsLast);
		LOG("</OnRspSubForQuoteRsp>\n");
		if (bIsLast)
		{
			SetEvent(xinhao);
		}
	};

	void UnSubscribeForQuoteRsp()
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
				int result = m_pUserMdApi->UnSubscribeForQuoteRsp(ppInstrumentID, a);
				LOG((result == 0) ? "退订询价请求1......发送成功\n" : "退订询价请求1......发送失败，错误序号=[%d]\n", result);
			}
			else if (count1 == md_InstrumentID.size() / 500)
			{
				int count2 = 0;
				for (count2; count2 < md_InstrumentID.size() % 500; count2++)
				{
					ppInstrumentID[count2] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
					md_num++;
				}
				int result = m_pUserMdApi->UnSubscribeForQuoteRsp(ppInstrumentID, count2);
				LOG((result == 0) ? "退订询价请求2......发送成功\n" : "退订询价请求2......发送失败，错误序号=[%d]\n", result);
			}
		}
	}

	virtual void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspUnSubForQuoteRsp>\n");
		if (pSpecificInstrument)
		{
			LOG("\tInstrumentID [%s]\n", pSpecificInstrument->InstrumentID);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID [%d]\n", nRequestID);
		LOG("\tbIsLast [%d]\n", bIsLast);
		LOG("</OnRspUnSubForQuoteRsp>\n");
		if (bIsLast)
		{
			SetEvent(xinhao);
		}
	};

	///询价通知
	virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
	{
		LOG("<OnRtnForQuoteRsp>\n");
		if (pForQuoteRsp)
		{
			LOG("\tTradingDay [%s]\n", pForQuoteRsp->TradingDay);
			LOG("\tInstrumentID [%s]\n", pForQuoteRsp->InstrumentID);
			LOG("\tForQuoteSysID [%s]\n", pForQuoteRsp->ForQuoteSysID);
			LOG("\tForQuoteTime [%s]\n", pForQuoteRsp->ForQuoteTime);
			LOG("\tActionDay [%s]\n", pForQuoteRsp->ActionDay);
			LOG("\tExchangeID [%s]\n", pForQuoteRsp->ExchangeID);
		}
		LOG("</OnRtnForQuoteRsp>\n");
	}

	void ReqQryMulticastInstrument()
	{
		string new_TopicID;
		LOG("请输入TopicID的值:\n");
		cin >> new_TopicID;

		CThostFtdcQryMulticastInstrumentField a = { 0 };
		a.TopicID = atoi(new_TopicID.c_str());
		//strcpy_s(a.InstrumentID, "");
		int b = m_pUserMdApi->ReqQryMulticastInstrument(&a, nRequestID++);
		LOG((b == 0) ? "请求查询组播合约......发送成功\n" : "请求查询组播合约......发送失败，序号=[%d]\n", b);
	}

	virtual void OnRspQryMulticastInstrument(CThostFtdcMulticastInstrumentField *pMulticastInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		LOG("<OnRspQryMulticastInstrument>\n");
		if (pMulticastInstrument)
		{
			LOG("\tInstrumentID [%s]\n", pMulticastInstrument->InstrumentID);
			LOG("\tTopicID [%d]\n", pMulticastInstrument->TopicID);
			LOG("\tInstrumentNo [%d]\n", pMulticastInstrument->InstrumentNo);
			LOG("\tVolumeMultiple [%d]\n", pMulticastInstrument->VolumeMultiple);
			LOG("\tCodePrice [%.8lf]\n", (pMulticastInstrument->CodePrice > 10000000) ? 0 : pMulticastInstrument->CodePrice);
			LOG("\tPriceTick [%.8lf]\n", (pMulticastInstrument->PriceTick > 10000000) ? 0 : pMulticastInstrument->PriceTick);
		}
		if (pRspInfo)
		{
			LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
			LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
		}
		LOG("\tnRequestID [%d]\n", nRequestID);
		LOG("\tbIsLast [%d]\n", bIsLast);
		LOG("</OnRspQryMulticastInstrument>\n");
	};

private:
	// 指向CThostFtdcMduserApi实例的指针
	CThostFtdcMdApi *m_pUserMdApi;
};

//交易类
class CSimpleHandler : public CTraderSpi
{
public:
	CSimpleHandler(CThostFtdcTraderApi *pUserApi) :
		m_pUserApi(pUserApi) {}
	~CSimpleHandler() {}
	virtual void OnFrontConnected()
	{
		printf("ThreadID: %d\n", GetCurrentThreadId()); //经测试这个函数速度更快
		LOG("<OnFrontConnected>\n");
		LOG("</OnFrontConnected>\n");
		strcpy_s(g_chBrokerID, getConfig("config", "BrokerID").c_str());
		strcpy_s(g_chUserID, getConfig("config", "UserID").c_str());
		strcpy_s(g_chPassword, getConfig("config", "Password").c_str());
		strcpy_s(g_chInvestorID, getConfig("config", "InvestorID").c_str());
		strcpy_s(g_chAuthCode, getConfig("config", "AuthCode").c_str());
		strcpy_s(g_chAppID, getConfig("config", "AppID").c_str());
		strcpy_s(g_chInstrumentID, getConfig("config", "InstrumentID").c_str());
		strcpy_s(g_chExchangeID, getConfig("config", "ExchangeID").c_str());

		strcpy_s(g_NewExecOrderRef, "");
		strcpy_s(g_NewExecOrderSysID, "");
		g_NewFrontID = 0;
		g_NewSessionID = 0;
		SetEvent(g_hEvent);
	}

	//请求查询银期签约关系
	void ReqQryAccountregister()
	{
		CThostFtdcQryAccountregisterField a = { 0 };
		//strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.AccountID, g_chInvestorID);
		//strcpy_s(a.BankID, "3");
		//strcpy_s(a.BankBranchID, "0740");
		//strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqQryAccountregister(&a, nRequestID++);
		LOG((b == 0) ? "请求查询银期签约关系......发送成功\n" : "请求查询银期签约关系......发送失败，序号=[%d]\n", b);
	}

	//请求查询签约银行
	void ReqQryContractBank()
	{
		CThostFtdcQryContractBankField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.BankID, "");
		int b = m_pUserApi->ReqQryContractBank(&a, nRequestID++);
		LOG((b == 0) ? "请求查询银期签约关系......发送成功\n" : "请求查询银期签约关系......发送失败，序号=[%d]\n", b);
	}

	void ReqQryDepthMarketData()
	{
		CThostFtdcQryDepthMarketDataField a = { 0 };
		//strcpy_s(a.ExchangeID, "SHFE");
		//strcpy_s(a.BankID, g_chBrokerID);
		int b = m_pUserApi->ReqQryDepthMarketData(&a, nRequestID++);
		LOG((b == 0) ? "请求查询行情......发送成功\n" : "请求查询行情......发送失败，序号=[%d]\n", b);
	}

	//请求查询经纪公司交易算法
	void ReqQryBrokerTradingAlgos()
	{
		CThostFtdcQryBrokerTradingAlgosField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.ExchangeID, g_chExchangeID);
		//strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryBrokerTradingAlgos(&a, nRequestID++);
		LOG((b == 0) ? "请求查询经纪公司交易算法......发送成功\n" : "请求查询经纪公司交易算法......发送失败，序号=[%d]\n", b);
	}

	//请求查询保证金监管系统经纪公司资金账户密钥
	void ReqQryCFMMCTradingAccountKey()
	{
		CThostFtdcQryCFMMCTradingAccountKeyField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chUserID);
		int b = m_pUserApi->ReqQryCFMMCTradingAccountKey(&a, nRequestID++);
		LOG((b == 0) ? "请求查询保证金监管系统经纪公司资金账户密钥......发送成功\n" : "请求查询保证金监管系统经纪公司资金账户密钥......发送失败，序号=[%d]\n", b);
	}

	//客户端认证
	void ReqAuthenticate()
	{
		strcpy_s(g_chAuthCode, getConfig("config", "AuthCode").c_str());
		strcpy_s(g_chAppID, getConfig("config", "AppID").c_str());

		CThostFtdcReqAuthenticateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.AuthCode, g_chAuthCode);
		strcpy_s(a.AppID, g_chAppID);
		//strcpy_s(a.UserProductInfo, g_chAppID);
		int b = m_pUserApi->ReqAuthenticate(&a, nRequestID++);
		printf("\t客户端认证 = [%d]\n", b);
	}

	///客户端认证响应
	virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo,
		int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspAuthenticate(pRspAuthenticateField, pRspInfo, nRequestID, bIsLast);
		SetEvent(g_hEvent);
	}

	void RegisterFensUserInfo()
	{
		CThostFtdcFensUserInfoField pFensUserInfo = { 0 };
		strcpy_s(pFensUserInfo.BrokerID, getConfig("config", "BrokerID").c_str());
		strcpy_s(pFensUserInfo.UserID, getConfig("config", "UserID").c_str());
		pFensUserInfo.LoginMode = THOST_FTDC_LM_Trade;
		m_pUserApi->RegisterFensUserInfo(&pFensUserInfo);
	}

	virtual void OnFrontDisconnected(int nReason)
	{
		LOG("<OnFrontDisconnected>\n");
		LOG("\tnReason = %d\n", nReason);
		LOG("</OnFrontDisconnected>\n");
	}

	void ReqUserLogin()
	{
		CThostFtdcReqUserLoginField reqUserLogin = { 0 };
		strcpy_s(reqUserLogin.BrokerID, g_chBrokerID);
		strcpy_s(reqUserLogin.UserID, g_chUserID);
		strcpy_s(reqUserLogin.Password, g_chPassword);
		//strcpy_s(reqUserLogin.ClientIPAddress, "::c0a8:0101");
		strcpy_s(reqUserLogin.LoginRemark, "test");
		// 发出登陆请求
		m_pUserApi->ReqUserLogin(&reqUserLogin, nRequestID++);
	}

	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		//pUserApi->Release();
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

	///登出请求响应
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
		SetEvent(g_hEvent);
	}

	///请求确认结算单
	void ReqSettlementInfoConfirm()
	{
		CThostFtdcSettlementInfoConfirmField Confirm = { 0 };
		///经纪公司代码
		strcpy_s(Confirm.BrokerID, g_chBrokerID);
		///投资者代码
		strcpy_s(Confirm.InvestorID, g_chInvestorID);
		int b = m_pUserApi->ReqSettlementInfoConfirm(&Confirm, nRequestID++);
		LOG((b == 0) ? "请求确认结算单......发送成功\n" : "请求确认结算单......发送失败，序号=[%d]\n", b);
	}

	///投资者结算结果确认响应
	virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspSettlementInfoConfirm(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
		SetEvent(g_hEvent);
	}

	///用户口令更新请求
	void ReqUserPasswordUpdate()
	{
		string newpassword;
		LOG("请输入新登录密码：\n");
		cin >> newpassword;
		CThostFtdcUserPasswordUpdateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.OldPassword, g_chPassword);
		strcpy_s(a.NewPassword, newpassword.c_str());
		int b = m_pUserApi->ReqUserPasswordUpdate(&a, nRequestID++);
		LOG((b == 0) ? "用户口令更新请求......发送成功\n" : "用户口令更新请求......发送失败，序号=[%d]\n", b);
	}

	///用户口令更新请求响应
	virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspUserPasswordUpdate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
		SetEvent(g_hEvent);
	}

	///资金账户口令更新请求
	void ReqTradingAccountPasswordUpdate()
	{
		string newpassword;
		LOG("请输入新资金密码：\n");
		cin >> newpassword;
		CThostFtdcTradingAccountPasswordUpdateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.AccountID, g_chInvestorID);
		strcpy_s(a.OldPassword, g_chPassword);
		strcpy_s(a.NewPassword, newpassword.c_str());
		strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqTradingAccountPasswordUpdate(&a, nRequestID++);
		LOG((b == 0) ? "资金账户口令更新请求......发送成功\n" : "资金账户口令更新请求......发送失败，序号=[%d]\n", b);
	}

	///资金账户口令更新请求响应
	virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
		SetEvent(g_hEvent);
	}

	///预埋单录入//限价单
	void ReqParkedOrderInsert()
	{
		int limitprice = 0;
		LOG("请输入限价单价格：(默认0)\n");
		cin >> limitprice;
		CThostFtdcParkedOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, a.OrderRef, 10);
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
		LOG((b == 0) ? "请求录入预埋单......发送成功\n" : "请求录入预埋单......发送失败，序号=[%d]\n", b);
	}

	///预埋撤单录入请求
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
		LOG((b == 0) ? "请求录入预埋撤单......发送成功\n" : "请求录入预埋撤单......发送失败，序号=[%d]\n", b);
	}

	///请求删除预埋单
	void ReqRemoveParkedOrder()
	{
		CThostFtdcRemoveParkedOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.ParkedOrderID, g_chParkedOrderID1);
		int b = m_pUserApi->ReqRemoveParkedOrder(&a, nRequestID++);
		LOG((b == 0) ? "请求删除预埋单......发送成功\n" : "请求删除预埋单......发送失败，序号=[%d]\n", b);
	}

	///请求删除预埋撤单
	void ReqRemoveParkedOrderAction()
	{
		CThostFtdcRemoveParkedOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.ParkedOrderActionID, g_chParkedOrderActionID1);
		int b = m_pUserApi->ReqRemoveParkedOrderAction(&a, nRequestID++);
		LOG((b == 0) ? "请求删除预埋撤单......发送成功\n" : "请求删除预埋撤单......发送失败，序号=[%d]\n", b);
	}

	///报入大商所市价止损单
	void ReqOrderInsert_dce()
	{
		system("cls");
		string new_limitprice;
		LOG("请输入止盈价格：\n");
		cin >> new_limitprice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef,"");
		//strcpy_s(ord.OrderRef, itoa(OrderRef_num));
		ord.OrderPriceType = THOST_FTDC_OPT_AnyPrice;
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;

		int num1;
	Direction:LOG("请选择买卖方向\t1.买\t2.卖\n");
		cin >> num1;
		if (num1 == 1) {
			ord.Direction = THOST_FTDC_D_Buy;//买
		}
		else if (num1 == 2) {
			ord.Direction = THOST_FTDC_D_Sell;//卖
		}
		else {
			LOG("输入错误请重新输入\n");
			_getch();
			goto Direction;
		}
		int num2;
	CombOffsetFlag:LOG("请输入开平方向\t1.开仓\t2.平仓\t3.强平\t4.平今\t5.平昨\t6.强减\t7.本地强平\n");
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
			LOG("输入错误请重新输入\n");
			_getch();
			goto CombOffsetFlag;
		}
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		ord.LimitPrice = 0;
		//ord.LimitPrice = 598;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///当日有效
		ord.VolumeCondition = THOST_FTDC_VC_AV;///任何数量
		ord.MinVolume = 0;
		ord.ContingentCondition = THOST_FTDC_CC_Touch;
		ord.StopPrice = atoi(new_limitprice.c_str());
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 1;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}


	///报单录入请求
	void ReqOrderInsert_Ordinary()
	{
		system("cls");
		string new_limitprice;
		LOG("请输入指定价格：\n");
		cin >> new_limitprice;

		CThostFtdcInputOrderField ord = { 0 };
		ord.RequestID = 1234;
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef,10);
		//strcpy_s(ord.OrderRef,"");
		//strcpy_s(ord.OrderRef, itoa(OrderRef_num));
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		
		int num1;
	Direction:LOG("请选择买卖方向\t1.买\t2.卖\n");
		cin >> num1;
		if(num1==1){
			ord.Direction = THOST_FTDC_D_Buy;//买
		}
		else if (num1 == 2) {
			ord.Direction = THOST_FTDC_D_Sell;//卖
		}
		else {
			LOG("输入错误请重新输入\n");
			_getch();
			goto Direction;
		}
		int num2;
	CombOffsetFlag:LOG("请输入开平方向\t1.开仓\t2.平仓\t3.强平\t4.平今\t5.平昨\t6.强减\t7.本地强平\n");
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
			LOG("输入错误请重新输入\n");
			_getch();
			goto CombOffsetFlag;
		}
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		ord.LimitPrice = atoi(new_limitprice.c_str());
		//ord.LimitPrice = 598;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///当日有效
		ord.VolumeCondition = THOST_FTDC_VC_AV;///任何数量
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_LackDeposit;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	///大商所止损单
	void ReqOrderInsert_Touch()
	{
		int new_limitprice;
		LOG("请输入指定价格limitprice：\n");
		cin >> new_limitprice;

		int new_StopPrice;
		LOG("请输入指定价格stopprice：\n");
		cin >> new_StopPrice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//买
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///当日有效
		ord.VolumeCondition = THOST_FTDC_VC_AV;///任何数量
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Touch;
		ord.StopPrice = new_StopPrice;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	///大商所止盈单
	void ReqOrderInsert_TouchProfit()
	{
		int new_limitprice;
		LOG("请输入指定价格limitprice：\n");
		cin >> new_limitprice;

		int new_StopPrice;
		LOG("请输入指定价格stopprice：\n");
		cin >> new_StopPrice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//买
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///当日有效
		ord.VolumeCondition = THOST_FTDC_VC_AV;///全部数量
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_TouchProfit;
		ord.StopPrice = new_StopPrice;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	//全成全撤 FOK
	void ReqOrderInsert_VC_CV()
	{
		int new_limitprice;
		LOG("请输入指定价格：\n");
		cin >> new_limitprice;

		int insert_num;
		LOG("请输入下单数量：\n");
		cin >> insert_num;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//买
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = insert_num;
		ord.TimeCondition = THOST_FTDC_TC_IOC;///当日有效
		ord.VolumeCondition = THOST_FTDC_VC_CV;///全部数量
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	//部成部撤 FAK
	void ReqOrderInsert_VC_AV()
	{
		int new_limitprice;
		LOG("请输入指定价格：\n");
		cin >> new_limitprice;

		int insert_num;
		LOG("请输入下单数量：\n");
		cin >> insert_num;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//买
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = insert_num;
		ord.TimeCondition = THOST_FTDC_TC_IOC;///立即完成，否则撤销
		ord.VolumeCondition = THOST_FTDC_VC_MV;///任何数量
		ord.MinVolume = 2;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	//市价单
	void ReqOrderInsert_AnyPrice()
	{
		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_AnyPrice;
		ord.Direction = THOST_FTDC_D_Buy;//买
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.LimitPrice = 0;//价格
		ord.VolumeTotalOriginal = 40;
		ord.TimeCondition = THOST_FTDC_TC_IOC;///立即完成，否则撤销
		ord.VolumeCondition = THOST_FTDC_VC_AV;///任何数量
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;//立即
		//ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;//非强平
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	//市价转限价单(中金所)
	void ReqOrderInsert_BestPrice()
	{
		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_BestPrice;
		ord.Direction = THOST_FTDC_D_Buy;//买
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		//ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///当日有效
		ord.VolumeCondition = THOST_FTDC_VC_AV;///任何数量
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	//套利指令
	void ReqOrderInsert_Arbitrage()
	{
		int new_limitprice;
		LOG("请输入指定价格：\n");
		cin >> new_limitprice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//买
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///当日有效
		ord.VolumeCondition = THOST_FTDC_VC_AV;///任何数量
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	//互换单
	void ReqOrderInsert_IsSwapOrder()
	{
		int new_limitprice;
		LOG("请输入指定价格：\n");
		cin >> new_limitprice;

		CThostFtdcInputOrderField ord = { 0 };
		strcpy_s(ord.BrokerID, g_chBrokerID);
		strcpy_s(ord.InvestorID, g_chInvestorID);
		strcpy_s(ord.InstrumentID, g_chInstrumentID);
		strcpy_s(ord.UserID, g_chUserID);
		OrderRef_num++;
		itoa(OrderRef_num, ord.OrderRef, 10);
		//strcpy_s(ord.OrderRef, "");
		ord.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		ord.Direction = THOST_FTDC_D_Buy;//买
		ord.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		ord.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		ord.LimitPrice = atoi(getConfig("config", "LimitPrice").c_str());
		//ord.LimitPrice = new_limitprice;
		ord.VolumeTotalOriginal = 1;
		ord.TimeCondition = THOST_FTDC_TC_GFD;///当日有效
		ord.VolumeCondition = THOST_FTDC_VC_AV;///任何数量
		ord.MinVolume = 1;
		ord.ContingentCondition = THOST_FTDC_CC_Immediately;
		ord.StopPrice = 0;
		ord.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
		ord.IsAutoSuspend = 0;
		ord.IsSwapOrder = 1;//互换单标志
		strcpy_s(ord.ExchangeID, g_chExchangeID);
		int a = m_pUserApi->ReqOrderInsert(&ord, 1);
		LOG((a == 0) ? "报单录入请求限价单......发送成功\n" : "报单录入请求限价单......发送失败，序号=[%d]\n", a);
	}

	///申请组合录入请求
	void ReqCombActionInsert()
	{
		CThostFtdcInputCombActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		//strcpy_s(a.CombActionRef,"");//组合引用
		a.Direction = THOST_FTDC_D_Sell;//买
		a.Volume = 1;
		a.CombDirection = THOST_FTDC_CMDR_Comb;
		a.HedgeFlag = THOST_FTDC_HF_Speculation;//投机
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int ab = m_pUserApi->ReqCombActionInsert(&a, nRequestID++);
		LOG((ab == 0) ? "申请组合录入请求......发送成功\n" : "申请组合录入请求......发送失败，序号=[%d]\n", ab);
	}

	///报单操作请求
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
		LOG((ab == 0) ? "报单操作请求......发送成功\n" : "报单操作请求......发送失败，序号=[%d]\n", ab);
	}

	///执行宣告录入请求
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
		OrderInsert.OffsetFlag = THOST_FTDC_OF_Close;//开平标志
		OrderInsert.HedgeFlag = THOST_FTDC_HF_Speculation;//投机套保标志
		if (a == 0) {
			OrderInsert.ActionType = THOST_FTDC_ACTP_Exec;//执行类型类型
		}
		if (a == 1) {
			OrderInsert.ActionType = THOST_FTDC_ACTP_Abandon;//执行类型类型
		}
		OrderInsert.PosiDirection = THOST_FTDC_PD_Long;//持仓多空方向类型
		OrderInsert.ReservePositionFlag = THOST_FTDC_EOPF_Reserve;//期权行权后是否保留期货头寸的标记类型
		//OrderInsert.ReservePositionFlag = THOST_FTDC_EOPF_UnReserve;//不保留头寸
		OrderInsert.CloseFlag = THOST_FTDC_EOCF_NotToClose;//期权行权后生成的头寸是否自动平仓类型
		//OrderInsert.CloseFlag = THOST_FTDC_EOCF_AutoClose;//自动平仓
		//strcpy_s(OrderInsert.InvestUnitID, "");AccountID
		//strcpy_s(OrderInsert.AccountID, "");
		//strcpy_s(OrderInsert.CurrencyID, "CNY");
		//strcpy_s(OrderInsert.ClientID, "");
		int b = m_pUserApi->ReqExecOrderInsert(&OrderInsert, 1);
		LOG((b == 0) ? "执行宣告录入请求......发送成功\n" : "执行宣告录入请求......发送失败，错误序号=[%d]\n", b);
	}

	///执行宣告操作请求
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
		a.ActionFlag = THOST_FTDC_AF_Delete;//删除
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		//strcpy_s(a.InvestUnitID, "");
		//strcpy_s(a.IPAddress, "");
		//strcpy_s(a.MacAddress, "");
		int b = m_pUserApi->ReqExecOrderAction(&a, 1);
		LOG((b == 0) ? "执行宣告操作请求......发送成功\n" : "执行宣告操作请求......发送失败，错误序号=[%d]\n", b);
	}

	//批量报单操作请求
	void ReqBatchOrderAction()
	{
		CThostFtdcInputBatchOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//a.OrderActionRef = 1;
		a.FrontID = g_chFrontID;
		//a.SessionID = g_chSessionID;
		strcpy_s(a.ExchangeID,g_chExchangeID);
		strcpy_s(a.UserID,g_chUserID);
		int ab = m_pUserApi->ReqBatchOrderAction(&a, nRequestID++);
		LOG((ab == 0) ? "批量报单操作请求......发送成功\n" : "批量报单操作请求......发送失败，序号=[%d]\n", ab);
	}

	///请求查询报单
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
		//strcpy_s(a.ExchangeID, g_chExchangeID);
		int ab = m_pUserApi->ReqQryOrder(&a, nRequestID++);
		LOG((ab == 0) ? "请求查询报单......发送成功\n" : "请求查询报单......发送失败，序号=[%d]\n", ab);
	}

	///报单录入请求
	void ReqOrderInsert_Condition(int select_num)
	{
		string limit_price;
		LOG("请输入指定价格(limitprice):\n");
		cin >> limit_price;

		string stop_price;
		LOG("请输入触发价格(stopprice):\n");
		cin >> stop_price;

		CThostFtdcInputOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.UserID, g_chUserID);
		a.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
		a.Direction = THOST_FTDC_D_Buy;//买
		//a.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
		a.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
		strcpy_s(a.CombOffsetFlag, "0");
		strcpy_s(a.CombHedgeFlag, "1");
		a.LimitPrice = atoi(limit_price.c_str());
		a.VolumeTotalOriginal = 1;
		a.TimeCondition = THOST_FTDC_TC_GFD;
		//a.VolumeCondition = THOST_FTDC_VC_AV;
		a.VolumeCondition = THOST_FTDC_VC_MV;
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
		LOG((ab == 0) ? "请求报入条件单......发送成功\n" : "请求报入条件单......发送失败，序号=[%d]\n", ab);
	}

	///报单操作请求
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
		LOG((ab == 0) ? "请求撤销条件单......发送成功\n" : "请求撤销条件单......发送失败，序号=[%d]\n", ab);
	}

	//撤销查询的报单
	void ReqOrderAction_forqry(int action_num)
	{
		CThostFtdcInputOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.UserID, g_chUserID);

		strcpy_s(a.OrderSysID, vector_OrderSysID.at(action_num - 1).c_str());
		strcpy_s(a.ExchangeID, vector_ExchangeID.at(action_num - 1).c_str());
		strcpy_s(a.InstrumentID, vector_InstrumentID.at(action_num - 1).c_str());

		strcpy_s(a.OrderRef, vector_OrderRef.at(action_num - 1).c_str());
		a.FrontID = vector_FrontID.at(action_num - 1);
		a.SessionID = vector_SessionID.at(action_num - 1);

		a.ActionFlag = THOST_FTDC_AF_Delete;
		int ab = m_pUserApi->ReqOrderAction(&a, nRequestID++);
		LOG((ab == 0) ? "请求撤销条件单......发送成功\n" : "请求撤销条件单......发送失败，错误序号=[%d]\n", ab);
	}

	///请求查询成交
	void ReqQryTrade()
	{
		CThostFtdcQryTradeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		string instr;
		instr.clear();
		LOG("请输入合约代码(不输入则为空)\n");
		cin.ignore();
		getline(cin, instr);
		strcpy_s(a.InstrumentID, instr.c_str());

		string Exch;
		Exch.clear();
		LOG("请输入交易所代码(不输入则为空)\n");
		//cin.ignore();
		getline(cin, Exch);
		strcpy_s(a.ExchangeID, Exch.c_str());
		/*strcpy_s(a.TradeID, "");
		strcpy_s(a.TradeTimeStart, "");
		strcpy_s(a.TradeTimeEnd, "");*/
		int b = m_pUserApi->ReqQryTrade(&a, nRequestID++);
		LOG((b == 0) ? "请求查询成交......发送成功\n" : "请求查询成交......发送失败，错误序号=[%d]\n", b);
	}

	///请求查询预埋单
	void ReqQryParkedOrder()
	{
		CThostFtdcQryParkedOrderField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int ab = m_pUserApi->ReqQryParkedOrder(&a, nRequestID++);
		LOG((ab == 0) ? "请求查询预埋单......发送成功\n" : "请求查询预埋单......发送失败，序号=[%d]\n", ab);
	}

	//请求查询服务器预埋撤单
	void ReqQryParkedOrderAction()
	{
		CThostFtdcQryParkedOrderActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int ab = m_pUserApi->ReqQryParkedOrderAction(&a, nRequestID++);
		LOG((ab == 0) ? "请求查询服务器预埋撤单......发送成功\n" : "请求查询服务器预埋撤单......发送失败，序号=[%d]\n", ab);
	}

	//请求查询资金账户
	void ReqQryTradingAccount()
	{
		CThostFtdcQryTradingAccountField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.CurrencyID, "CNY");
		int ab = m_pUserApi->ReqQryTradingAccount(&a, nRequestID++);
		LOG((ab == 0) ? "请求查询资金账户......发送成功\n" : "请求查询资金账户......发送失败，序号=[%d]\n", ab);
	}

	///请求查询资金账户响应
	virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspQryTradingAccount(pTradingAccount, pRspInfo, nRequestID, bIsLast);
	};

	//请求查询投资者持仓
	void ReqQryInvestorPosition()
	{
		CThostFtdcQryInvestorPositionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
	/*	string instr;
		instr.clear();
		cin.ignore();
		LOG("请输入合约代码(不输入则为空)：\n");
		getline(cin, instr);
		strcpy_s(a.InstrumentID, instr.c_str());*/
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		/*string exch;
		exch.clear();
		cin.ignore();
		LOG("请输入交易所代码(不输入则为空)：\n");
		getline(cin, exch);
		strcpy_s(a.ExchangeID, exch.c_str());*/
		//strcpy_s(a.InstrumentID, "SPD");
		int b = m_pUserApi->ReqQryInvestorPosition(&a, nRequestID++);
		LOG((b == 0) ? "请求查询投资者持仓......发送成功\n" : "请求查询投资者持仓......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询投资者持仓明细
	void ReqQryInvestorPositionDetail()
	{
		CThostFtdcQryInvestorPositionDetailField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		/*string instr;
		instr.clear();
		cin.ignore();
		LOG("请输入合约代码(不输入则为空)\n");
		getline(cin, instr);
		strcpy_s(a.InstrumentID, instr.c_str());*/

		strcpy_s(a.InstrumentID, g_chInstrumentID);
		/*string exch;
		exch.clear();
		cin.ignore();
		LOG("请输入交易所代码(不输入则为空)：\n");
		getline(cin, exch);
		strcpy_s(a.ExchangeID, exch.c_str());*/

		//strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryInvestorPositionDetail(&a, nRequestID++);
		LOG((b == 0) ? "请求查询投资者持仓明细......发送成功\n" : "请求查询投资者持仓明细......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询交易所保证金率
	void ReqQryExchangeMarginRate()
	{
		CThostFtdcQryExchangeMarginRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		a.HedgeFlag = THOST_FTDC_HF_Speculation;//投机
		int b = m_pUserApi->ReqQryExchangeMarginRate(&a, nRequestID++);
		LOG((b == 0) ? "请求查询交易所保证金率......发送成功\n" : "请求查询交易所保证金率......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询合约保证金率
	void ReqQryInstrumentMarginRate()
	{
		CThostFtdcQryInstrumentMarginRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.ExchangeID,g_chExchangeID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		a.HedgeFlag = THOST_FTDC_HF_Speculation;//投机
		int b = m_pUserApi->ReqQryInstrumentMarginRate(&a, nRequestID++);
		LOG((b == 0) ? "请求查询合约保证金率......发送成功\n" : "请求查询合约保证金率......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询合约手续费率
	void ReqQryInstrumentCommissionRate()
	{
		CThostFtdcQryInstrumentCommissionRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int b = m_pUserApi->ReqQryInstrumentCommissionRate(&a, nRequestID++);
		LOG((b == 0) ? "请求查询合约手续费率......发送成功\n" : "请求查询合约手续费率......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询做市商合约手续费率
	void ReqQryMMInstrumentCommissionRate()
	{
		CThostFtdcQryMMInstrumentCommissionRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryMMInstrumentCommissionRate(&a, nRequestID++);
		LOG((b == 0) ? "请求查询做市商合约手续费率......发送成功\n" : "请求查询做市商合约手续费率......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询做市商期权合约手续费
	void ReqQryMMOptionInstrCommRate()
	{
		CThostFtdcQryMMOptionInstrCommRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryMMOptionInstrCommRate(&a, nRequestID++);
		LOG((b == 0) ? "请求查询做市商期权合约手续费......发送成功\n" : "请求查询做市商期权合约手续费......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询报单手续费
	void ReqQryInstrumentOrderCommRate()
	{
		CThostFtdcQryInstrumentOrderCommRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryInstrumentOrderCommRate(&a, nRequestID++);
		LOG((b == 0) ? "请求查询报单手续费......发送成功\n" : "请求查询报单手续费......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询期权合约手续费
	void ReqQryOptionInstrCommRate()
	{
		CThostFtdcQryOptionInstrCommRateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		string Inst;
		string Exch;
		string InvestUnit;
		LOG("请输入合约代码:(不填则为空)");
		cin >> Inst;
		LOG("请输入交易所代码:(不填则为空)");
		cin >> Exch;
		LOG("请输入投资者单元代码:(不填则为空)");
		cin >> InvestUnit;
		strcpy_s(a.InstrumentID, Inst.c_str());
		strcpy_s(a.ExchangeID, Exch.c_str());
		strcpy_s(a.InvestUnitID, InvestUnit.c_str());
		int b = m_pUserApi->ReqQryOptionInstrCommRate(&a, nRequestID++);
		LOG((b == 0) ? "请求查询期权合约手续费......发送成功\n" : "请求查询期权合约手续费......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询合约
	void ReqQryInstrument()
	{
		CThostFtdcQryInstrumentField a = { 0 };
		strcpy_s(a.ExchangeID, g_chExchangeID);
		//strcpy_s(a.InstrumentID, g_chInstrumentID);
		//strcpy_s(a.ExchangeInstID,"");
		//strcpy_s(a.ProductID, "a");
		int b = m_pUserApi->ReqQryInstrument(&a, nRequestID++);
		LOG((b == 0) ? "请求查询合约......发送成功\n" : "请求查询合约......发送失败，错误序号=[%d]\n", b);
	}

	///请求查询合约响应
	virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspQryInstrument(pInstrument, pRspInfo, nRequestID, bIsLast);
		if (pInstrument)
		{
			md_InstrumentID.push_back(pInstrument->InstrumentID);
		}
		if (bIsLast)
		{
			SetEvent(xinhao);
		}
	}

	//请求查询投资者结算结果
	void ReqQrySettlementInfo()
	{
		CThostFtdcQrySettlementInfoField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		string Traday;
		LOG("请输入交易日期或者交易月份(例如:20180101,月份则201801):");
		cin >> Traday;
		strcpy_s(a.TradingDay, Traday.c_str());
		int b = m_pUserApi->ReqQrySettlementInfo(&a, nRequestID++);
		LOG((b == 0) ? "请求查询投资者结算结果......发送成功\n" : "请求查询投资者结算结果......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询转帐流水
	void ReqQryTransferSerial()
	{
		CThostFtdcQryTransferSerialField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.AccountID, g_chInvestorID);
	cir1:int bankid;
		LOG("请输入你需要的查询的银行\n");
		LOG("1.工商银行\n");
		LOG("2.农业银行\n");
		LOG("3.中国银行\n");
		LOG("5.交通银行\n");
		LOG("6.招商银行\n");
		LOG("7.兴业银行\n");
		LOG("8.浦发银行\n");
		LOG("9.民生银行\n");
		LOG("10.光大银行\n");
		LOG("11.中信银行\n");
		LOG("12.汇丰银行\n");
		LOG("13.平安银行\n");
		LOG("14.农发银行\n");
		LOG("15.星展银行\n");
		LOG("16.广发银行\n");
		cin >> bankid;
		if (bankid == 1 | 2 | 3 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16)
		{
			//strcpy_s(a.BankID, itoa(bankid, a.BankID, 10));///银行代码
			itoa(bankid, a.BankID, 10);
		}
		else
		{
			LOG("请重新输入银行代码。\n");
			goto cir1;
		}
		int choos;
	curr:LOG("请输入币种代码\t1.CNY\t2.USD\n");
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
			LOG("请输入正确的序号\n");
			_getch();
			goto curr;
		}
		int b = m_pUserApi->ReqQryTransferSerial(&a, nRequestID++);
		LOG((b == 0) ? "请求查询转帐流水......发送成功\n" : "请求查询转帐流水......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询产品
	void ReqQryProduct()
	{
		CThostFtdcQryProductField a = { 0 };
		strcpy_s(a.ProductID, "sc");
		a.ProductClass = THOST_FTDC_PC_Futures;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		m_pUserApi->ReqQryProduct(&a, nRequestID++);
	}

	//请求查询转帐银行
	void ReqQryTransferBank()
	{
		CThostFtdcQryTransferBankField a = { 0 };
		strcpy_s(a.BankID,"3");
		int b = m_pUserApi->ReqQryTransferBank(&a, nRequestID++);
		LOG((b == 0) ? "请求查询转帐银行......发送成功\n" : "请求查询转帐银行......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询交易通知
	void ReqQryTradingNotice()
	{
		CThostFtdcQryTradingNoticeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		int b = m_pUserApi->ReqQryTradingNotice(&a, nRequestID++);
		LOG((b == 0) ? "请求查询交易通知......发送成功\n" : "请求查询交易通知......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询客户通知
	void ReqQryNotice()
	{
		CThostFtdcQryNoticeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		int b = m_pUserApi->ReqQryNotice(&a, nRequestID++);
		LOG((b == 0) ? "请求查询客户通知......发送成功\n" : "请求查询客户通知......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询交易编码
	void ReqQryTradingCode()
	{
		CThostFtdcQryTradingCodeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		a.ClientIDType = THOST_FTDC_CIDT_Speculation;
		int b = m_pUserApi->ReqQryTradingCode(&a, nRequestID++);
		LOG((b == 0) ? "请求查询交易编码......发送成功\n" : "请求查询交易编码......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询结算信息确认
	void ReqQrySettlementInfoConfirm()
	{
		CThostFtdcQrySettlementInfoConfirmField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.AccountID, g_chInvestorID);
		strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqQrySettlementInfoConfirm(&a, nRequestID++);
		LOG((b == 0) ? "请求查询结算信息确认......发送成功\n" : "请求查询结算信息确认......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询产品组
	void ReqQryProductGroup()
	{
		CThostFtdcQryProductGroupField a = { 0 };
		strcpy_s(a.ExchangeID, g_chExchangeID);
		//strcpy_s(a.ProductID, g_chInstrumentID);
		int b = m_pUserApi->ReqQryProductGroup(&a, nRequestID++);
		LOG((b == 0) ? "请求查询产品组......发送成功\n" : "请求查询产品组......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询投资者单元
	void ReqQryInvestUnit()
	{
		CThostFtdcQryInvestUnitField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.InvestorID, g_chUserID);
		//strcpy_s(a.InvestUnitID, "");
		int b = m_pUserApi->ReqQryInvestUnit(&a, nRequestID++);
		LOG((b == 0) ? "请求查询投资者单元......发送成功\n" : "请求查询投资者单元......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询经纪公司交易参数
	void ReqQryBrokerTradingParams()
	{
		CThostFtdcQryBrokerTradingParamsField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqQryBrokerTradingParams(&a, nRequestID++);
		LOG((b == 0) ? "请求查询经纪公司交易参数......发送成功\n" : "请求查询经纪公司交易参数......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询询价
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
		LOG((b == 0) ? "请求查询询价......发送成功\n" : "请求查询询价......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询报价
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
		LOG((b == 0) ? "请求查询询价......发送成功\n" : "请求查询询价......发送失败，错误序号=[%d]\n", b);
	}

	///询价录入请求
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
		LOG((b == 0) ? "询价录入请求......发送成功\n" : "询价录入请求......发送失败，错误序号=[%d]\n", b);
	}

	///做市商报价录入请求
	void ReqQuoteInsert()
	{
	choose:int choose_Flag;
		LOG("请确认开平标志\t1.开仓\t2.平仓\n");
		cin >> choose_Flag;

		if (choose_Flag != 1 && choose_Flag!=2)
		{
			LOG("请重新选择开平标志\n");
			_getch();
			choose_Flag = NULL;
			goto choose;
		}

		int price_bid;
		LOG("请输入买方向价格：\n");
		cin >> price_bid;

		int price_ask;
		LOG("请输入卖方向价格：\n");
		cin >> price_ask;
		LOG("买卖数量默认是1。\n");
		string quoteref;
		LOG("请输入quoteref序号：\n");
		cin >> quoteref;
		string AskOrderRef;
		string BidOrderRef;
		LOG("请输入AskOrderRef序号:\n");
		cin >> AskOrderRef;
		LOG("请输入BidOrderRef序号:\n");
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
			t.AskOffsetFlag = THOST_FTDC_OF_Open;///卖开平标志
			t.BidOffsetFlag = THOST_FTDC_OF_Open;///买开平标志
		}
		else if (choose_Flag ==2)
		{
			t.AskOffsetFlag = THOST_FTDC_OF_Close;///卖开平标志
			t.BidOffsetFlag = THOST_FTDC_OF_Close;///买开平标志
		}
		t.AskHedgeFlag = THOST_FTDC_HF_Hedge;///卖投机套保标志
		t.BidHedgeFlag = THOST_FTDC_HF_Hedge;///买投机套保标志

		strcpy_s(t.AskOrderRef, AskOrderRef.c_str());///衍生卖报单引用
		strcpy_s(t.BidOrderRef, BidOrderRef.c_str());///衍生买报单引用
		//strcpy_s(t.ForQuoteSysID, "");///应价编号
		//strcpy_s(t.InvestUnitID, "1");///投资单元代码
		timing tt;
		tt.start();//开始
		int a = m_pUserApi->ReqQuoteInsert(&t, 1);
		tt.end();
		LOG("延时为 = [%.8lf]ms\n", tt.gettime * 1000);
		LOG((a == 0) ? "做市商报价录入请求......发送成功\n" : "做市商报价录入请求......发送失败，错误序号=[%d]\n", a);
	}

	///报价通知
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

	//报价撤销
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

	//查询最大报单数量请求
	void ReqQryMaxOrderVolume()
	{
		CThostFtdcQryMaxOrderVolumeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		a.Direction = THOST_FTDC_D_Buy;
		a.OffsetFlag = THOST_FTDC_OF_Open;
		a.HedgeFlag = THOST_FTDC_HF_Speculation;
		a.MaxVolume = 1;
		strcpy_s(a.BrokerID, g_chBrokerID);
		int b = m_pUserApi->ReqQryMaxOrderVolume(&a, nRequestID++);
		LOG((b == 0) ? "查询最大报单数量请求......发送成功\n" : "查询最大报单数量请求......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询监控中心用户令牌
	void ReqQueryCFMMCTradingAccountToken()
	{
		CThostFtdcQueryCFMMCTradingAccountTokenField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.InvestUnitID, "");
		int b = m_pUserApi->ReqQueryCFMMCTradingAccountToken(&a, nRequestID++);
		LOG((b == 0) ? "请求查询监控中心用户令牌......发送成功\n" : "请求查询监控中心用户令牌......发送失败，错误序号=[%d]\n", b);
	}

	///保证金监控中心用户令牌
	virtual void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken)
	{
		string web_address;
		web_address = "https://investorservice.cfmmc.com/loginByKey.do?companyID=";
		web_address.append(pCFMMCTradingAccountToken->ParticipantID);
		web_address.append("&userid=");
		web_address.append(pCFMMCTradingAccountToken->AccountID);
		web_address.append("&keyid=");
		int Key = pCFMMCTradingAccountToken->KeyID;
		std::stringstream kk;
		std::string k;
		kk << Key;
		kk >> k;
		web_address.append(k);
		web_address.append("&passwd=");
		web_address.append(pCFMMCTradingAccountToken->Token);
		LOG("web地址为:%s\n",web_address.c_str());
	};


	///报单操作错误回报
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

	///报单录入请求响应
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

	///报单录入错误回报
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

	///报单通知
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
			if (pOrder->OrderStatus == THOST_FTDC_OST_AllTraded)///全部成交
			{
				LOG("报单全部成交\n\n");
				//SetEvent(g_hEvent);
			}if (pOrder->OrderStatus == THOST_FTDC_OST_PartTradedQueueing)///部分成交还在队列中
			{
				LOG("部分成交还在队列中\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_PartTradedNotQueueing)///部分成交不在队列中
			{
				LOG("部分成交不在队列中\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_NoTradeQueueing)///未成交还在队列中
			{
				chioce_action = 0;
				LOG("未成交还在队列中\n\n");
				
			}if (pOrder->OrderStatus == THOST_FTDC_OST_NoTradeNotQueueing)///未成交不在队列中
			{
				LOG("未成交不在队列中\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_Canceled)///撤单
			{
				LOG("撤单\n\n");
				//SetEvent(g_hEvent);
				//CSimpleHandler::ReqQryTradingAccount();
			}if (pOrder->OrderStatus == THOST_FTDC_OST_Unknown)///未知
			{
				LOG("未知\n\n");
				//CSimpleHandler::ReqQryTradingAccount();
			}if (pOrder->OrderStatus == THOST_FTDC_OST_NotTouched)///尚未触发
			{
				chioce_action = 1;
				LOG("尚未触发\n\n");
			}if (pOrder->OrderStatus == THOST_FTDC_OST_Touched)///已触发
			{
				LOG("已触发\n\n");
			}
		}
	}

	///删除预埋单响应
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

	///删除预埋撤单响应
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

	///预埋单录入请求响应
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

	///预埋撤单录入请求响应
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

	///请求查询预埋撤单响应
	virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspQryParkedOrderAction(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
	}

	///请求查询预埋单响应
	virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		CTraderSpi::OnRspQryParkedOrder(pParkedOrder,pRspInfo,nRequestID,bIsLast);
	}

	///请求查询报单响应
	virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		if (pOrder) {
			vector_OrderSysID.push_back(pOrder->OrderSysID);
			vector_ExchangeID.push_back(pOrder->ExchangeID);
			vector_InstrumentID.push_back(pOrder->InstrumentID);
			vector_OrderRef.push_back(pOrder->OrderRef);
			vector_FrontID.push_back(pOrder->FrontID);
			vector_SessionID.push_back(pOrder->SessionID);
		}
		CTraderSpi::OnRspQryOrder(pOrder,pRspInfo,nRequestID,bIsLast);
		action_number++;
		LOG("\n查询序号：\"%d\"\n\n", action_number);
	}

	///执行宣告通知
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

	//期货发起查询银行余额请求
	void ReqQueryBankAccountMoneyByFuture()
	{
		CThostFtdcReqQueryAccountField a = { 0 };
		int b = m_pUserApi->ReqQueryBankAccountMoneyByFuture(&a, nRequestID++);
		LOG((b == 0) ? "期货发起查询银行余额请求......发送成功\n" : "期货发起查询银行余额请求......发送失败，错误序号=[%d]\n", b);
	}

	//期货发起银行资金转期货请求
	void ReqFromBankToFutureByFuture()
	{
		int output_num;
		LOG("请输入转账金额:");
		cin >> output_num;

		CThostFtdcReqTransferField a = { 0 };
		strcpy_s(a.TradeCode, "202001");///业务功能码
	int bankid = 0;
		while (bankid != 1 & 2 & 3 & 5 & 6 & 7 & 8 & 9 & 10 & 11 & 12 & 13 & 14 & 15 & 16) {
			LOG("请输入你需要的转账的银行\n");
			LOG("1.工商银行\n");
			LOG("2.农业银行\n");
			LOG("3.中国银行\n");
			LOG("5.交通银行\n");
			LOG("6.招商银行\n");
			LOG("7.兴业银行\n");
			LOG("8.浦发银行\n");
			LOG("9.民生银行\n");
			LOG("10.光大银行\n");
			LOG("11.中信银行\n");
			LOG("12.汇丰银行\n");
			LOG("13.平安银行\n");
			LOG("14.农发银行\n");
			LOG("15.星展银行\n");
			LOG("16.广发银行\n");
			cin >> bankid;
			if (bankid == 1 | 2 | 3 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16)
			{
				//strcpy_s(a.BankID, itoa(bankid, a.BankID, 10));///银行代码
				itoa(bankid, a.BankID, 10);
			}
			else
			{
				LOG("请重新输入银行代码。\n");
				_getch();
			}
		}
		
		
		strcpy_s(a.BankBranchID, "0000");///期商代码
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.TradeDate, "20170829");///交易日期
		//strcpy_s(a.TradeTime, "09:00:00");
		//strcpy_s(a.BankSerial, "6889");///银行流水号
		//strcpy_s(a.TradingDay, "20170829");///交易系统日期 
		//a.PlateSerial = 5;///银期平台消息流水号
		a.LastFragment = THOST_FTDC_LF_Yes;///最后分片标志 '0'=是最后分片
		a.SessionID = SessionID;
		//strcpy_s(a.CustomerName, "");///客户姓名
		a.IdCardType = THOST_FTDC_ICT_IDCard;///证件类型
		a.CustType = THOST_FTDC_CUSTT_Person;///客户类型
		//strcpy_s(a.IdentifiedCardNo, "310115198704111914");///证件号码
		/*strcpy_s(a.BankAccount, "123456789");
		strcpy_s(a.BankPassWord, "123456");///银行密码*/
		//strcpy_s(a.BankAccount, "621485212110224187");
		//strcpy_s(a.BankPassWord, "092812");///银行密码--不需要银行卡密码
		strcpy_s(a.AccountID, g_chInvestorID);///投资者帐号
		//strcpy_s(a.Password, "092812");///期货密码--资金密码
		strcpy_s(a.Password, "123456");///期货密码--资金密码
		//a.InstallID = 1;///安装编号
		//a.FutureSerial = 0;///期货公司流水号
		a.VerifyCertNoFlag = THOST_FTDC_YNI_No;///验证客户证件号码标志
		strcpy_s(a.CurrencyID, "CNY");///币种代码
		a.TradeAmount = output_num;///转帐金额
		//a.FutureFetchAmount = 0;///期货可取金额
		//a.CustFee = 0;///应收客户费用
		//a.BrokerFee = 0;///应收期货公司费用
		a.SecuPwdFlag = THOST_FTDC_BPWDF_BlankCheck;///期货资金密码核对标志
		//a.RequestID = 0;///请求编号
		//a.TID = 0;///交易ID
		int b = m_pUserApi->ReqFromBankToFutureByFuture(&a, 1);
		LOG((b == 0) ? "期货发起银行资金转期货请求......发送成功\n" : "期货发起银行资金转期货请求......发送失败，错误序号=[%d]\n", b);
	}

	//期货发起期货资金转银行请求
	void ReqFromFutureToBankByFuture()
	{
		int output_num;
		LOG("请输入转账金额:");
		cin >> output_num;

		CThostFtdcReqTransferField a = { 0 };
		strcpy_s(a.TradeCode, "202002");///业务功能码
		bankid_new:int bankid = 0;
		LOG("请输入你需要的转账的银行\n");
		LOG("1.工商银行\n");
		LOG("2.农业银行\n");
		LOG("3.中国银行\n");
		LOG("5.交通银行\n");
		LOG("6.招商银行\n");
		LOG("7.兴业银行\n");
		LOG("8.浦发银行\n");
		LOG("9.民生银行\n");
		LOG("10.光大银行\n");
		LOG("11.中信银行\n");
		LOG("12.汇丰银行\n");
		LOG("13.平安银行\n");
		LOG("14.农发银行\n");
		LOG("15.星展银行\n");
		LOG("16.广发银行\n");
		cin >> bankid;
		if (bankid == 1 | 2 | 3 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16)
		{
			//strcpy_s(a.BankID, itoa(bankid, a.BankID, 10));///银行代码
			itoa(bankid, a.BankID, 10);
		}
		else {
			LOG("请输入正确的编号\n");
			_getch();
			goto bankid_new;
		}
		strcpy_s(a.BankBranchID, "0000");///期商代码
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.BankBranchID, "0000");///银行分支机构代码
		//strcpy_s(a.TradeDate, "20170829");///交易日期
		//strcpy_s(a.TradeTime, "09:00:00");
		//strcpy_s(a.BankSerial, "");///银行流水号
		//strcpy_s(a.TradingDay, "20170829");///交易系统日期 
		//a.PlateSerial= 0;///银期平台消息流水号
		a.LastFragment = THOST_FTDC_LF_Yes;///最后分片标志 '0'=是最后分片
		a.SessionID = SessionID;
		//strcpy_s(a.CustomerName, "");///客户姓名
		a.IdCardType = THOST_FTDC_ICT_IDCard;///证件类型
		strcpy_s(a.IdentifiedCardNo, "310115198704111914");///证件号码
		strcpy_s(a.BankAccount, "123456789");///银行帐号
		//strcpy_s(a.BankPassWord, "123456");///银行密码
		strcpy_s(a.AccountID, g_chInvestorID);///投资者帐号
		strcpy_s(a.Password, "123456");///期货密码
		a.InstallID = 1;///安装编号
		a.CustType = THOST_FTDC_CUSTT_Person;
		//a.FutureSerial = 0;///期货公司流水号
		a.VerifyCertNoFlag = THOST_FTDC_YNI_No;///验证客户证件号码标志
		strcpy_s(a.CurrencyID, "CNY");///币种代码
		a.TradeAmount = output_num;///转帐金额
		a.FutureFetchAmount = 0;///期货可取金额
		a.CustFee = 0;///应收客户费用
		a.BrokerFee = 0;///应收期货公司费用
		//a.SecuPwdFlag = THOST_FTDC_BPWDF_BlankCheck;///期货资金密码核对标志
		a.RequestID = 0;///请求编号
		a.TID = 0;///交易ID
		int b = m_pUserApi->ReqFromFutureToBankByFuture(&a, 1);
		LOG((b == 0) ? "期货发起期货资金转银行请求......发送成功\n" : "期货发起期货资金转银行请求......发送失败，错误序号=[%d]\n", b);
	}

	//期权自对冲录入请求
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
			LOG("请选择投机套保标志\n1.投机\t2.套利\t3.套保\t4.做市商\n");
			cin >> choose_1;
			if (choose_1 == 1) { a.HedgeFlag = THOST_FTDC_HF_Speculation; }
			else if (choose_1 == 2) { a.HedgeFlag = THOST_FTDC_HF_Arbitrage; }
			else if (choose_1 == 3) { a.HedgeFlag = THOST_FTDC_HF_Hedge; }
			else if (choose_1 == 4) { a.HedgeFlag = THOST_FTDC_HF_MarketMaker; }
			else {
				LOG("选项错误，请重新选择。\n");
				_getch();
			}
		}
		
		int choose_2 = 0;
		while (choose_2 != 1 && choose_2 != 2 && choose_2 != 3) {
			LOG("请选择期权行权的头寸是否自对冲标志\n1.自对冲期权仓位\t2.保留期权仓位\t3.自对冲卖方履约后的期货仓位\n");
			cin >> choose_2;
			if (choose_2 == 1) { a.OptSelfCloseFlag = THOST_FTDC_OSCF_CloseSelfOptionPosition; }
			else if (choose_2 == 2) { a.OptSelfCloseFlag = THOST_FTDC_OSCF_ReserveOptionPosition; }
			else if (choose_2 == 3) { a.OptSelfCloseFlag = THOST_FTDC_OSCF_SellCloseSelfFuturePosition; }
			else {
				LOG("选项错误，请重新选择。\n");
				_getch();
				continue;
			}
		}

		strcpy_s(a.ExchangeID, g_chExchangeID);
		string accountid_new;
		LOG("请输入资金账号:\n");
		cin >> accountid_new;
		strcpy_s(a.AccountID, accountid_new.c_str());
		strcpy_s(a.CurrencyID, "CNY");
		int b = m_pUserApi->ReqOptionSelfCloseInsert(&a, 1);
		LOG((b == 0) ? "期权自对冲录入请求......发送成功\n" : "期权自对冲录入请求......发送失败，错误序号=[%d]\n", b);
	}

	///期权自对冲通知
	virtual void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose)
	{
		if (pOptionSelfClose) {
			g_chFrontID = pOptionSelfClose->FrontID;
			g_chSessionID = pOptionSelfClose->SessionID;
			strcpy_s(g_chOptionSelfCloseSysID, pOptionSelfClose->OptionSelfCloseSysID);//期权自对冲编号
			strcpy_s(g_chOptionSelfCloseRef, pOptionSelfClose->OptionSelfCloseRef);//期权自对冲引用
		}
		CTraderSpi::OnRtnOptionSelfClose(pOptionSelfClose);
	}

	//期权自对冲操作请求
	void ReqOptionSelfCloseAction()
	{
		CThostFtdcInputOptionSelfCloseActionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		//strcpy_s(a.OptionSelfCloseSysID, g_chOptionSelfCloseSysID);//期权自对冲编号
		strcpy_s(a.OptionSelfCloseRef, g_chOptionSelfCloseRef);//期权自对冲引用
		//a.FrontID = g_chFrontID;
		//a.SessionID = g_chSessionID;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		a.ActionFlag = THOST_FTDC_AF_Delete;
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		int b = m_pUserApi->ReqOptionSelfCloseAction(&a, 1);
		LOG((b == 0) ? "期权自对冲操作请求......发送成功\n" : "期权自对冲操作请求......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询期权自对冲
	void ReqQryOptionSelfClose()
	{
		CThostFtdcQryOptionSelfCloseField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID, g_chInstrumentID);
		strcpy_s(a.ExchangeID, g_chExchangeID);
		int b = m_pUserApi->ReqQryOptionSelfClose(&a, 1);
		LOG((b == 0) ? "请求查询期权自对冲......发送成功\n" : "请求查询期权自对冲......发送失败，错误序号=[%d]\n", b);
	}

	///请求查询期权自对冲响应
	virtual void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		if (pOptionSelfClose) {
			g_chFrontID = pOptionSelfClose->FrontID;
			g_chSessionID = pOptionSelfClose->SessionID;
			strcpy_s(g_chOptionSelfCloseSysID, pOptionSelfClose->OptionSelfCloseSysID);//期权自对冲编号
			strcpy_s(g_chOptionSelfCloseRef, pOptionSelfClose->OptionSelfCloseRef);//期权自对冲引用
		}
		CTraderSpi::OnRspQryOptionSelfClose(pOptionSelfClose, pRspInfo, nRequestID, bIsLast);
	}

	///请求查询执行宣告
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
		LOG((b == 0) ? "执行宣告查询......发送成功\n" : "执行宣告查询......发送失败，错误序号=[%d]\n", b);
	}

	///查询二代资金账户
	void ReqQrySecAgentTradingAccount()
	{
		CThostFtdcQryTradingAccountField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.CurrencyID, "CNY");
		a.BizType = THOST_FTDC_BZTP_Future;
		strcpy_s(a.AccountID, g_chInvestorID);
		int b = m_pUserApi->ReqQrySecAgentTradingAccount(&a, 1);
		LOG((b == 0) ? "查询二代资金账户......发送成功\n" : "查询二代资金账户......发送失败，错误序号=[%d]\n", b);
	}

	///请求查询二级代理商资金校验模式
	void ReqQrySecAgentCheckMode()
	{
		CThostFtdcQrySecAgentCheckModeField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		int b = m_pUserApi->ReqQrySecAgentCheckMode(&a, 1);
		LOG((b == 0) ? "请求查询二级代理商资金校验模式......发送成功\n" : "请求查询二级代理商资金校验模式......发送失败，错误序号=[%d]\n", b);
	}

	///注册用户终端信息，用于中继服务器多连接模式
	///需要在终端认证成功后，用户登录前调用该接口
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
		LOG("请输入ip地址(不输入则为空)\n");
		getline(cin, ip);
		strcpy_s(a.ClientPublicIP, ip.c_str());*/
		strcpy_s(a.ClientPublicIP, "192.168.0.1");//ip地址

		//int Port;
		//Port = 0;
		//cin.ignore();
		//LOG("请输入端口号\n");
		//cin >> Port;
		//a.ClientIPPort = Port;//端口号
		a.ClientIPPort = 51305;//端口号

		/*string LoginTime;
		LoginTime.clear();
		cin.ignore();
		LOG("请输入登录时间(不输入则为空)\n");
		getline(cin, LoginTime);
		strcpy_s(a.ClientPublicIP, LoginTime.c_str());*/
		//strcpy_s(a.ClientLoginTime, "20190121");
		strcpy_s(a.ClientAppID, g_chAppID);
		int b = m_pUserApi->RegisterUserSystemInfo(&a);
		LOG((b == 0) ? "注册用户终端信息......发送成功\n" : "注册用户终端信息......发送失败，错误序号=[%d]\n", b);
	}

	///上报用户终端信息，用于中继服务器操作员登录模式
	///操作员登录后，可以多次调用该接口上报客户信息
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
		LOG("请输入ip地址(不输入则为空)\n");
		getline(cin, ip);
		strcpy_s(a.ClientPublicIP, ip.c_str());*/
		strcpy_s(a.ClientPublicIP, "192.168.0.1");//ip地址

		//int Port;
		//Port = 0;
		//cin.ignore();
		//LOG("请输入端口号\n");
		//cin >> Port;
		//a.ClientIPPort = Port;//端口号
		a.ClientIPPort = 51305;//端口号

		/*string LoginTime;
		LoginTime.clear();
		cin.ignore();
		LOG("请输入登录时间(不输入则为空)\n");
		getline(cin, LoginTime);
		strcpy_s(a.ClientPublicIP, LoginTime.c_str());*/
		strcpy_s(a.ClientLoginTime, "20190121");
		strcpy_s(a.ClientAppID, g_chAppID);
		int b = m_pUserApi->SubmitUserSystemInfo(&a);
		LOG((b == 0) ? "注册用户终端信息......发送成功\n" : "注册用户终端信息......发送失败，错误序号=[%d]\n", b);
	}

	//void test()
	//{
	//	char pSystemInfo[344];
	//	int len;
	//	CTP_GetSystemInfoUnAesEncode(pSystemInfo,len);
	//	//printf("a = %d\n",a);
	//	printf("pSystemInfo = %s\nlen = %d\n",pSystemInfo,len);
	//}

	///查询用户当前支持的认证模式
	void ReqUserAuthMethod()
	{
		CThostFtdcReqUserAuthMethodField a = { 0 };
		strcpy_s(a.TradingDay, "20190308");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		int b = m_pUserApi->ReqUserAuthMethod(&a, nRequestID++);
		LOG((b == 0) ? "查询用户当前支持的认证模式......发送成功\n" : "查询用户当前支持的认证模式......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询交易员报盘机
	void ReqQryTraderOffer()
	{
		CThostFtdcQryTraderOfferField a = {0};
		strcpy_s(a.ExchangeID,"SHFE");
		//strcpy_s(a.ParticipantID, "SHFE");
		//strcpy_s(a.TraderID, "SHFE");
		int b = m_pUserApi->ReqQryTraderOffer(&a, nRequestID++);
		LOG((b == 0) ? "请求查询交易员报盘机......发送成功\n" : "请求查询交易员报盘机......发送失败，错误序号=[%d]\n", b);
	}

	///用户发出获取图形验证码请求
	void ReqGenUserCaptcha()
	{
		CThostFtdcReqGenUserCaptchaField a = { 0 };
		strcpy_s(a.TradingDay, "");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		int b = m_pUserApi->ReqGenUserCaptcha(&a, nRequestID++);
		LOG((b == 0) ? "用户发出获取图形验证码请求......发送成功\n" : "用户发出获取图形验证码请求......发送失败，错误序号=[%d]\n", b);
	}

	///用户发出获取短信验证码请求
	void ReqGenUserText()
	{
		CThostFtdcReqGenUserTextField a = { 0 };
		strcpy_s(a.TradingDay, "");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		int b = m_pUserApi->ReqGenUserText(&a, nRequestID++);
		LOG((b == 0) ? "用户发出获取短信验证码请求......发送成功\n" : "用户发出获取短信验证码请求......发送失败，错误序号=[%d]\n", b);
	}

	///用户发出带有图片验证码的登陆请求
	void ReqUserLoginWithCaptcha()
	{
		CThostFtdcReqUserLoginWithCaptchaField a = { 0 };
		strcpy_s(a.TradingDay, "");
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.Password, g_chPassword);
		strcpy_s(a.UserProductInfo, "");
		strcpy_s(a.InterfaceProductInfo, "");
		strcpy_s(a.ProtocolInfo, "");//协议信息
		strcpy_s(a.MacAddress, "");//Mac地址
		strcpy_s(a.ClientIPAddress, "");//终端IP地址
		strcpy_s(a.LoginRemark, "");//登录主备
		strcpy_s(a.Captcha, "");//图形验证码的文字内容
		a.ClientIPPort = 10203;
		int b = m_pUserApi->ReqUserLoginWithCaptcha(&a, nRequestID++);
		LOG((b == 0) ? "用户发出带有图片验证码的登陆请求......发送成功\n" : "用户发出带有图片验证码的登陆请求......发送失败，错误序号=[%d]\n", b);
	}

	///用户发出带有短信验证码的登陆请求
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
		LOG((b == 0) ? "用户发出带有短信验证码的登陆请求......发送成功\n" : 
			"用户发出带有短信验证码的登陆请求......发送失败，错误序号=[%d]\n", b);
	}

	///用户发出带有动态口令的登陆请求
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
		LOG((b == 0) ? "用户发出带有动态口令的登陆请求......发送成功\n" : "用户发出带有动态口令的登陆请求......发送失败，错误序号=[%d]\n", b);
	}

	///请求查询二级代理商信息
	void ReqQrySecAgentTradeInfo()
	{
		CThostFtdcQrySecAgentTradeInfoField a = { 0 };
		strcpy_s(a.BrokerID, "");
		strcpy_s(a.BrokerSecAgentID, "");
		int b = m_pUserApi->ReqQrySecAgentTradeInfo(&a, nRequestID++);
		LOG((b == 0) ? "请求查询二级代理商信息......发送成功\n" : "请求查询二级代理商信息......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询分类合约
	void ReqQryClassifiedInstrument()
	{
		CThostFtdcQryClassifiedInstrumentField a = { 0 };
		//strcpy_s(a.InstrumentID,"");
		//strcpy_s(a.ExchangeID,"INE");
		//strcpy_s(a.ExchangeInstID,"");
		//strcpy_s(a.ProductID,"nr");
		a.TradingType = THOST_FTDC_TD_TRADE;
		a.ClassType = THOST_FTDC_INS_FUTURE;
		int b = m_pUserApi->ReqQryClassifiedInstrument(&a, nRequestID++);
		LOG((b == 0) ? "请求查询分类合约......发送成功\n" : "请求查询分类合约......发送失败，错误序号=[%d]\n", b);
	}

	//请求组合优惠比例
	void ReqQryCombPromotionParam()
	{
		CThostFtdcQryCombPromotionParamField a = { 0 };
		strcpy_s(a.ExchangeID,"DCE");
		strcpy_s(a.InstrumentID,"SPD m_o&m_o");
		int b = m_pUserApi->ReqQryCombPromotionParam(&a, nRequestID++);
		LOG((b == 0) ? "请求组合优惠比例......发送成功\n" : "请求组合优惠比例......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询投资者品种/跨品种保证金
	void ReqQryInvestorProductGroupMargin()
	{
		CThostFtdcQryInvestorProductGroupMarginField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		a.HedgeFlag = THOST_FTDC_HF_Speculation;
		strcpy_s(a.ExchangeID, g_chExchangeID);
		strcpy_s(a.ProductGroupID, g_chInstrumentID);
		strcpy_s(a.reserve1,g_chInstrumentID);
		int b = m_pUserApi->ReqQryInvestorProductGroupMargin(&a, nRequestID++);
		LOG((b == 0) ? "请求查询投资者品种/跨品种保证金......发送成功\n" : "请求查询投资者品种/跨品种保证金......发送失败，错误序号=[%d]\n", b);
	}

	//请求查询交易所调整保证金率
	void ReqQryExchangeMarginRateAdjust()
	{
		CThostFtdcQryExchangeMarginRateAdjustField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		//strcpy_s(a.reserve1, "");
		a.HedgeFlag = THOST_FTDC_HF_Speculation;
		strcpy_s(a.InstrumentID,g_chInstrumentID);
		int b = m_pUserApi->ReqQryExchangeMarginRateAdjust(&a, nRequestID++);
		LOG((b == 0) ? "请求查询交易所调整保证金率......发送成功\n" : "请求查询交易所调整保证金率......发送失败，错误序号=[%d]\n", b);
	}

	///投资者风险结算持仓查询
	void ReqQryRiskSettleInvstPosition()
	{
		CThostFtdcQryRiskSettleInvstPositionField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.InvestorID, g_chInvestorID);
		strcpy_s(a.InstrumentID,g_chInstrumentID);
		int b = m_pUserApi->ReqQryRiskSettleInvstPosition(&a, nRequestID++);
		LOG((b == 0) ? "投资者风险结算持仓查询......发送成功\n" : "投资者风险结算持仓查询......发送失败，错误序号=[%d]\n", b);
	}

	///风险结算产品查询
	void ReqQryRiskSettleProductStatus()
	{
		CThostFtdcQryRiskSettleProductStatusField a = { 0 };
		strcpy_s(a.ProductID, g_chBrokerID);
		int b = m_pUserApi->ReqQryRiskSettleProductStatus(&a, nRequestID++);
		LOG((b == 0) ? "风险结算产品查询......发送成功\n" : "风险结算产品查询......发送失败，错误序号=[%d]\n", b);
	}


private:
	CThostFtdcTraderApi *m_pUserApi;
};
