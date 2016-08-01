//行情API转PyCTP

#ifndef PYCTP_MDAPI_H
#define PYCTP_MDAPI_H

#include <structmember.h>
#include <ThostFtdcMdApi.h>

// 行情Py结构类
struct CTP_THOST_FTDC_MD_API
{
	PyObject_HEAD
		/* Type-specific fields go here. */
		CThostFtdcMdApi *api; /* 行情api */
	CThostFtdcMdSpi *spi; /* 行情回调spi */
	PyObject *pySpi;	   /* py代码回调 */
};

///创建MdApi
///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
///@return 创建出的UserApi
///modify for udp marketdata
PyObject *CTP_THOST_FTDC_MD_API_CreateFtdcMdApi(PyTypeObject *type, PyObject *args);

///获取API的版本信息
///@retrun 获取到的版本号
PyObject *CTP_THOST_FTDC_MD_API_GetApiVersion(PyObject *self, PyObject *args);

///删除接口对象本身
///@remark 不再使用本接口对象时,调用该函数删除接口对象
PyObject *CTP_THOST_FTDC_MD_API_Release(PyObject *self, PyObject *args);

///初始化
///@remark 初始化运行环境,只有调用后,接口才开始工作
PyObject *CTP_THOST_FTDC_MD_API_Init(PyObject *self, PyObject *args);

///等待接口线程结束运行
///@return 线程退出代码
PyObject *CTP_THOST_FTDC_MD_API_Join(PyObject *self, PyObject *args);

///获取当前交易日
///@retrun 获取到的交易日
///@remark 只有登录成功后,才能得到正确的交易日
PyObject *CTP_THOST_FTDC_MD_API_GetTradingDay(PyObject *self, PyObject *args);

///注册前置机网络地址
///@param pszFrontAddress：前置机网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
PyObject *CTP_THOST_FTDC_MD_API_RegisterFront(PyObject *self, PyObject *args);

///注册名字服务器网络地址
///@param pszNsAddress：名字服务器网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
///@remark RegisterNameServer优先于RegisterFront
PyObject *CTP_THOST_FTDC_MD_API_RegisterNameServer(PyObject *self, PyObject *args);

///注册名字服务器用户信息
///@param pFensUserInfo：用户信息。
PyObject *CTP_THOST_FTDC_MD_API_RegisterFensUserInfo(PyObject *self, PyObject *args);

///注册回调接口
///@param pSpi 派生自回调接口类的实例
PyObject *CTP_THOST_FTDC_MD_API_RegisterSpi(PyObject *self, PyObject *args);

///订阅行情。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
PyObject *CTP_THOST_FTDC_MD_API_SubscribeMarketData(PyObject *self, PyObject *args);

///退订行情。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
PyObject *CTP_THOST_FTDC_MD_API_UnSubscribeMarketData(PyObject *self, PyObject *args);

///订阅询价。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
PyObject *CTP_THOST_FTDC_MD_API_SubscribeForQuoteRsp(PyObject *self, PyObject *args);

///退订询价。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
PyObject *CTP_THOST_FTDC_MD_API_UnSubscribeForQuoteRsp(PyObject *self, PyObject *args);

///用户登录请求
PyObject *CTP_THOST_FTDC_MD_API_ReqUserLogin(PyObject *self, PyObject *args);

///登出请求
PyObject *CTP_THOST_FTDC_MD_API_ReqUserLogout(PyObject *self, PyObject *args);

///回收对象资源
void CTP_THOST_FTDC_MD_API_dealloc(PyObject *self);

// API属性
extern PyMemberDef CTP_THOST_FTDC_MD_API_members[];

// API方法
extern PyMethodDef CTP_THOST_FTDC_MD_API_methods[];

// 行情结构py类型定义
extern PyTypeObject CTP_THOST_FTDC_MD_API_TYPE;

class CTP_THOST_FTDC_MD_SPI : public CThostFtdcMdSpi
{
protected:
	CTP_THOST_FTDC_MD_API *api;
public:
	CTP_THOST_FTDC_MD_SPI(CTP_THOST_FTDC_MD_API *mdapi) : api(mdapi) {}
	virtual ~CTP_THOST_FTDC_MD_SPI() {}

	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	virtual void OnFrontConnected();

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	virtual void OnFrontDisconnected(int nReason);

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	virtual void OnHeartBeatWarning(int nTimeLapse);

	///登录请求响应
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///登出请求响应
	virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///错误应答
	virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///订阅行情应答
	virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///取消订阅行情应答
	virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///订阅询价应答
	virtual void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///取消订阅询价应答
	virtual void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///深度行情通知
	virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);

	///询价通知
	virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp);
};

#endif
