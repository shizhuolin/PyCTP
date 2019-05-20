
#if !defined(THOST_FTDCMDAPI_H)
#define THOST_FTDCMDAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ThostFtdcUserApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_MD_API_EXPORT
#define MD_API_EXPORT __declspec(dllexport)
#else
#define MD_API_EXPORT __declspec(dllimport)
#endif
#else
#define MD_API_EXPORT 
#endif

class CThostFtdcMdSpi
{
public:
	virtual void OnFrontConnected(){};
	
	virtual void OnFrontDisconnected(int nReason){};
		
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	

	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	virtual void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	virtual void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) {};

	virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) {};
};

class MD_API_EXPORT CThostFtdcMdApi
{
public:
	static CThostFtdcMdApi *CreateFtdcMdApi(const char *pszFlowPath = "", const bool bIsUsingUdp=false, const bool bIsMulticast=false);
	
	static const char *GetApiVersion();
	
	virtual void Release() = 0;
	
	virtual void Init() = 0;
	
	virtual int Join() = 0;
	
	virtual const char *GetTradingDay() = 0;
	
	virtual void RegisterFront(char *pszFrontAddress) = 0;
	
	virtual void RegisterNameServer(char *pszNsAddress) = 0;
	
	virtual void RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo) = 0;
	
	virtual void RegisterSpi(CThostFtdcMdSpi *pSpi) = 0;
	
	virtual int SubscribeMarketData(char *ppInstrumentID[], int nCount) = 0;

	virtual int UnSubscribeMarketData(char *ppInstrumentID[], int nCount) = 0;
	
	virtual int SubscribeForQuoteRsp(char *ppInstrumentID[], int nCount) = 0;

	virtual int UnSubscribeForQuoteRsp(char *ppInstrumentID[], int nCount) = 0;

	virtual int ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
	

	virtual int ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID) = 0;
protected:
	~CThostFtdcMdApi(){};
};

#endif
