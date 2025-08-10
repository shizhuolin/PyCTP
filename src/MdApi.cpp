
#include "stdafx.h"
#include "MdApi.h"
#include "UserApiStruct.h"
#include <structmember.h>

#define PyCTP_MD_FUNCTION_MAGIC(_in_fun) PyCTP_FUNCTION_MAGIC(CTP_THOST_FTDC_MD_API, _in_fun)
#define PyCTP_MD_FUNCTION_MAGIC_INT(_in_fun) PyCTP_FUNCTION_MAGIC_INT(CTP_THOST_FTDC_MD_API, _in_fun)
#define PyCTP_MD_FUNCTION_MAGIC_STRING(_in_fun) PyCTP_FUNCTION_MAGIC_STRING(CTP_THOST_FTDC_MD_API, _in_fun)
#define PyCTP_MD_FUNCTION_MAGIC_VOID_STRING(_in_fun) PyCTP_FUNCTION_MAGIC_VOID_STRING(CTP_THOST_FTDC_MD_API, _in_fun)
#define PyCTP_MD_FUNCTION_MAGIC_VOID_STRUCT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_VOID_STRUCT(CTP_THOST_FTDC_MD_API, _in_fun, _in_type)
#define PyCTP_MD_FUNCTION_MAGIC_INT_STRUCT_INT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_INT_STRUCT_INT(CTP_THOST_FTDC_MD_API, _in_fun, _in_type)
#define PyCTP_MD_FUNCTION_MAGIC_INT_SUBSCRIBE(_in_fun) PyCTP_FUNCTION_MAGIC_INT_SUBSCRIBE(CTP_THOST_FTDC_MD_API, _in_fun)

namespace {
    class CTP_THOST_FTDC_MD_SPI : public CThostFtdcMdSpi
    {
        protected:

            CTP_THOST_FTDC_MD_API *api;

        public:

            CTP_THOST_FTDC_MD_SPI(CTP_THOST_FTDC_MD_API *mdapi) : api(mdapi) {}

            virtual ~CTP_THOST_FTDC_MD_SPI() {}


            ///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
			virtual void OnFrontConnected() {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyObject *result = NULL; 

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), NULL);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnFrontConnected"), NULL);
                if(!result) PyErr_Print();

					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
			///@param nReason 错误原因
			///        0x1001 网络读失败
			///        0x1002 网络写失败
			///        0x2001 接收心跳超时
			///        0x2002 发送心跳失败
			///        0x2003 收到错误报文
			virtual void OnFrontDisconnected(int nReason) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyObject *PynReason = NULL; 
			    PyObject *result = NULL; 

                PynReason = PyLong_FromLong(nReason);
                if(!PynReason) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PynReason);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnFrontDisconnected"), const_cast<char *>("O"), PynReason);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PynReason);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///心跳超时警告。当长时间未收到报文时，该方法被调用。
			///@param nTimeLapse 距离上次接收报文的时间
			virtual void OnHeartBeatWarning(int nTimeLapse) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyObject *PynTimeLapse = NULL; 
			    PyObject *result = NULL; 

                PynTimeLapse = PyLong_FromLong(nTimeLapse);
                if(!PynTimeLapse) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PynTimeLapse);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnHeartBeatWarning"), const_cast<char *>("O"), PynTimeLapse);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PynTimeLapse);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///登录请求响应
			virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspUserLoginField *PypRspUserLogin = NULL; 
			    PyObject *PypRspUserLogin_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRspUserLogin = PyObject_New(PyCThostFtdcRspUserLoginField, &PyCThostFtdcRspUserLoginFieldType);
                if (!PypRspUserLogin) goto cleanup;
                PypRspUserLogin_callarg = (PyObject *)PypRspUserLogin;
                if (pRspUserLogin) { PypRspUserLogin->data = *pRspUserLogin; } else { PypRspUserLogin_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRspUserLogin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserLogin"), const_cast<char *>("OOOO"), PypRspUserLogin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspUserLogin);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///登出请求响应
			virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcUserLogoutField *PypUserLogout = NULL; 
			    PyObject *PypUserLogout_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypUserLogout = PyObject_New(PyCThostFtdcUserLogoutField, &PyCThostFtdcUserLogoutFieldType);
                if (!PypUserLogout) goto cleanup;
                PypUserLogout_callarg = (PyObject *)PypUserLogout;
                if (pUserLogout) { PypUserLogout->data = *pUserLogout; } else { PypUserLogout_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypUserLogout_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserLogout"), const_cast<char *>("OOOO"), PypUserLogout_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypUserLogout);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询组播合约响应
			virtual void OnRspQryMulticastInstrument(CThostFtdcMulticastInstrumentField *pMulticastInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcMulticastInstrumentField *PypMulticastInstrument = NULL; 
			    PyObject *PypMulticastInstrument_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypMulticastInstrument = PyObject_New(PyCThostFtdcMulticastInstrumentField, &PyCThostFtdcMulticastInstrumentFieldType);
                if (!PypMulticastInstrument) goto cleanup;
                PypMulticastInstrument_callarg = (PyObject *)PypMulticastInstrument;
                if (pMulticastInstrument) { PypMulticastInstrument->data = *pMulticastInstrument; } else { PypMulticastInstrument_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypMulticastInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryMulticastInstrument"), const_cast<char *>("OOOO"), PypMulticastInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypMulticastInstrument);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///错误应答
			virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOO"), PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspError"), const_cast<char *>("OOO"), PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///订阅行情应答
			virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSpecificInstrumentField *PypSpecificInstrument = NULL; 
			    PyObject *PypSpecificInstrument_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSpecificInstrument = PyObject_New(PyCThostFtdcSpecificInstrumentField, &PyCThostFtdcSpecificInstrumentFieldType);
                if (!PypSpecificInstrument) goto cleanup;
                PypSpecificInstrument_callarg = (PyObject *)PypSpecificInstrument;
                if (pSpecificInstrument) { PypSpecificInstrument->data = *pSpecificInstrument; } else { PypSpecificInstrument_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSpecificInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSubMarketData"), const_cast<char *>("OOOO"), PypSpecificInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSpecificInstrument);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///取消订阅行情应答
			virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSpecificInstrumentField *PypSpecificInstrument = NULL; 
			    PyObject *PypSpecificInstrument_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSpecificInstrument = PyObject_New(PyCThostFtdcSpecificInstrumentField, &PyCThostFtdcSpecificInstrumentFieldType);
                if (!PypSpecificInstrument) goto cleanup;
                PypSpecificInstrument_callarg = (PyObject *)PypSpecificInstrument;
                if (pSpecificInstrument) { PypSpecificInstrument->data = *pSpecificInstrument; } else { PypSpecificInstrument_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSpecificInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUnSubMarketData"), const_cast<char *>("OOOO"), PypSpecificInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSpecificInstrument);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///订阅询价应答
			virtual void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSpecificInstrumentField *PypSpecificInstrument = NULL; 
			    PyObject *PypSpecificInstrument_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSpecificInstrument = PyObject_New(PyCThostFtdcSpecificInstrumentField, &PyCThostFtdcSpecificInstrumentFieldType);
                if (!PypSpecificInstrument) goto cleanup;
                PypSpecificInstrument_callarg = (PyObject *)PypSpecificInstrument;
                if (pSpecificInstrument) { PypSpecificInstrument->data = *pSpecificInstrument; } else { PypSpecificInstrument_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSpecificInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSubForQuoteRsp"), const_cast<char *>("OOOO"), PypSpecificInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSpecificInstrument);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///取消订阅询价应答
			virtual void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSpecificInstrumentField *PypSpecificInstrument = NULL; 
			    PyObject *PypSpecificInstrument_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSpecificInstrument = PyObject_New(PyCThostFtdcSpecificInstrumentField, &PyCThostFtdcSpecificInstrumentFieldType);
                if (!PypSpecificInstrument) goto cleanup;
                PypSpecificInstrument_callarg = (PyObject *)PypSpecificInstrument;
                if (pSpecificInstrument) { PypSpecificInstrument->data = *pSpecificInstrument; } else { PypSpecificInstrument_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSpecificInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUnSubForQuoteRsp"), const_cast<char *>("OOOO"), PypSpecificInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSpecificInstrument);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///深度行情通知
			virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcDepthMarketDataField *PypDepthMarketData = NULL; 
			    PyObject *PypDepthMarketData_callarg = NULL; 
			    PyObject *result = NULL; 

                PypDepthMarketData = PyObject_New(PyCThostFtdcDepthMarketDataField, &PyCThostFtdcDepthMarketDataFieldType);
                if (!PypDepthMarketData) goto cleanup;
                PypDepthMarketData_callarg = (PyObject *)PypDepthMarketData;
                if (pDepthMarketData) { PypDepthMarketData->data = *pDepthMarketData; } else { PypDepthMarketData_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypDepthMarketData_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnDepthMarketData"), const_cast<char *>("O"), PypDepthMarketData_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypDepthMarketData);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///询价通知
			virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcForQuoteRspField *PypForQuoteRsp = NULL; 
			    PyObject *PypForQuoteRsp_callarg = NULL; 
			    PyObject *result = NULL; 

                PypForQuoteRsp = PyObject_New(PyCThostFtdcForQuoteRspField, &PyCThostFtdcForQuoteRspFieldType);
                if (!PypForQuoteRsp) goto cleanup;
                PypForQuoteRsp_callarg = (PyObject *)PypForQuoteRsp;
                if (pForQuoteRsp) { PypForQuoteRsp->data = *pForQuoteRsp; } else { PypForQuoteRsp_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypForQuoteRsp_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnForQuoteRsp"), const_cast<char *>("O"), PypForQuoteRsp_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypForQuoteRsp);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}


    };
};

///初始化
///@remark 初始化运行环境,只有调用后,接口才开始工作
PyCTP_MD_FUNCTION_MAGIC(Init) 

///等待接口线程结束运行
///@return 线程退出代码
PyCTP_MD_FUNCTION_MAGIC_INT(Join) 

///获取当前交易日
///@retrun 获取到的交易日
///@remark 只有登录成功后,才能得到正确的交易日
PyCTP_MD_FUNCTION_MAGIC_STRING(GetTradingDay) 

///注册前置机网络地址
///@param pszFrontAddress：前置机网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
PyCTP_MD_FUNCTION_MAGIC_VOID_STRING(RegisterFront) 

///注册名字服务器网络地址
///@param pszNsAddress：名字服务器网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
///@remark RegisterNameServer优先于RegisterFront
PyCTP_MD_FUNCTION_MAGIC_VOID_STRING(RegisterNameServer) 

///注册名字服务器用户信息
///@param pFensUserInfo：用户信息。
PyCTP_MD_FUNCTION_MAGIC_VOID_STRUCT(RegisterFensUserInfo, CThostFtdcFensUserInfoField) 

///订阅行情。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
PyCTP_MD_FUNCTION_MAGIC_INT_SUBSCRIBE(SubscribeMarketData) 

///退订行情。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
PyCTP_MD_FUNCTION_MAGIC_INT_SUBSCRIBE(UnSubscribeMarketData) 

///订阅询价。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
PyCTP_MD_FUNCTION_MAGIC_INT_SUBSCRIBE(SubscribeForQuoteRsp) 

///退订询价。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
PyCTP_MD_FUNCTION_MAGIC_INT_SUBSCRIBE(UnSubscribeForQuoteRsp) 

///用户登录请求
PyCTP_MD_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLogin, CThostFtdcReqUserLoginField) 

///登出请求
PyCTP_MD_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLogout, CThostFtdcUserLogoutField) 

///请求查询组播合约
PyCTP_MD_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryMulticastInstrument, CThostFtdcQryMulticastInstrumentField) 



static PyObject *CTP_THOST_FTDC_MD_API_CreateFtdcMdApi(PyTypeObject *type, PyObject *args)
{
	char *pszFlowPath = nullptr;
	bool bIsUsingUdp = false, bIsMulticast = false;
#if PY_MAJOR_VERSION >= 3
	if (!PyArg_ParseTuple(args, "|ypp", &pszFlowPath, &bIsUsingUdp, &bIsMulticast))
#else
    if (!PyArg_ParseTuple(args, "|spp", &pszFlowPath, &bIsUsingUdp, &bIsMulticast))
#endif
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	/* 构造api对象 */
	CTP_THOST_FTDC_MD_API *self = (CTP_THOST_FTDC_MD_API *) type->tp_alloc(type, 0);

	if(self==nullptr){
		PyErr_SetString(PyExc_RuntimeError, "don't create instance.");
		return nullptr;
	}

	/* 创建ctpapi实例 */
	self->api = CThostFtdcMdApi::CreateFtdcMdApi(pszFlowPath==nullptr? "":pszFlowPath, bIsUsingUdp, bIsMulticast);

	if(self->api == nullptr){
		PyErr_SetString(PyExc_RuntimeError, "CThostFtdcMdApi::CreateFtdcMdApi error.");
		Py_DECREF(self);
		return nullptr;
	}

	self->spi  = new CTP_THOST_FTDC_MD_SPI(self);
	self->api->RegisterSpi(self->spi);

	self->pySpi = Py_None;
	Py_INCREF(self->pySpi);

	return (PyObject *) self;
}

static PyObject *CTP_THOST_FTDC_MD_API_GetApiVersion(PyObject *self, PyObject *args)
{
	return PyBytes_FromString(CThostFtdcMdApi::GetApiVersion());
}

static PyObject *CTP_THOST_FTDC_MD_API_RegisterSpi(PyObject *self, PyObject *args)
{
	CTP_THOST_FTDC_MD_API *api = (CTP_THOST_FTDC_MD_API *) self;
	PyObject *tmp = api->pySpi;
	if (!PyArg_ParseTuple(args, "O", &api->pySpi))
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	Py_XDECREF(tmp);
	Py_INCREF(api->pySpi);

	Py_RETURN_NONE;
};

static PyObject *CTP_THOST_FTDC_MD_API_Release(PyObject *self, PyObject *args)
{
	CTP_THOST_FTDC_MD_API *obj = (CTP_THOST_FTDC_MD_API *) self;
	if(obj->api != nullptr)
	{
		obj->api->RegisterSpi(nullptr);
		obj->api->Release();
		obj->api = nullptr;
	}
	if(obj->spi != nullptr){
		delete dynamic_cast<CTP_THOST_FTDC_MD_SPI *>(obj->spi);
		obj->spi = nullptr;
	}
	Py_XDECREF(obj->pySpi);
	Py_RETURN_NONE;
};

static void CTP_THOST_FTDC_MD_API_dealloc(PyObject *self)
{
    PyObject *result = CTP_THOST_FTDC_MD_API_Release(self, NULL);
    Py_XDECREF(result);
	Py_TYPE(self)->tp_free(self);
}

static PyMemberDef CTP_THOST_FTDC_MD_API_members[] = {
	{NULL}  /* Sentinel */
};

static PyMethodDef CTP_THOST_FTDC_MD_API_methods[] = {
	///创建MdApi
	///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
	///@return 创建出的UserApi
	///modify for udp marketdata
	{"CreateFtdcMdApi", (PyCFunction) CTP_THOST_FTDC_MD_API_CreateFtdcMdApi, METH_VARARGS | METH_CLASS, NULL},

	///获取API的版本信息
	///@retrun 获取到的版本号
	{"GetApiVersion", CTP_THOST_FTDC_MD_API_GetApiVersion, METH_NOARGS | METH_STATIC, nullptr},

	///删除接口对象本身
	///@remark 不再使用本接口对象时,调用该函数删除接口对象
    {"Release", CTP_THOST_FTDC_MD_API_Release, METH_NOARGS, nullptr},

	///初始化
	///@remark 初始化运行环境,只有调用后,接口才开始工作
    {"Init", CTP_THOST_FTDC_MD_API_Init, METH_NOARGS, nullptr},

	///等待接口线程结束运行
	///@return 线程退出代码
    {"Join", CTP_THOST_FTDC_MD_API_Join, METH_NOARGS, nullptr},

	///获取当前交易日
	///@retrun 获取到的交易日
	///@remark 只有登录成功后,才能得到正确的交易日
    {"GetTradingDay", CTP_THOST_FTDC_MD_API_GetTradingDay, METH_NOARGS, nullptr},

	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
    {"RegisterFront", CTP_THOST_FTDC_MD_API_RegisterFront, METH_VARARGS, nullptr},

	///注册名字服务器网络地址
	///@param pszNsAddress：名字服务器网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
	///@remark RegisterNameServer优先于RegisterFront
    {"RegisterNameServer", CTP_THOST_FTDC_MD_API_RegisterNameServer, METH_VARARGS, nullptr},

	///注册名字服务器用户信息
	///@param pFensUserInfo：用户信息。
    {"RegisterFensUserInfo", CTP_THOST_FTDC_MD_API_RegisterFensUserInfo, METH_VARARGS, nullptr},

	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
    {"RegisterSpi", CTP_THOST_FTDC_MD_API_RegisterSpi, METH_VARARGS, nullptr},

	///订阅行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
    {"SubscribeMarketData", CTP_THOST_FTDC_MD_API_SubscribeMarketData, METH_VARARGS, nullptr},

	///退订行情。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
    {"UnSubscribeMarketData", CTP_THOST_FTDC_MD_API_UnSubscribeMarketData, METH_VARARGS, nullptr},

	///订阅询价。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
    {"SubscribeForQuoteRsp", CTP_THOST_FTDC_MD_API_SubscribeForQuoteRsp, METH_VARARGS, nullptr},

	///退订询价。
	///@param ppInstrumentID 合约ID
	///@param nCount 要订阅/退订行情的合约个数
	///@remark
    {"UnSubscribeForQuoteRsp", CTP_THOST_FTDC_MD_API_UnSubscribeForQuoteRsp, METH_VARARGS, nullptr},

	///用户登录请求
    {"ReqUserLogin", CTP_THOST_FTDC_MD_API_ReqUserLogin, METH_VARARGS, nullptr},

	///登出请求
    {"ReqUserLogout", CTP_THOST_FTDC_MD_API_ReqUserLogout, METH_VARARGS, nullptr},

	///请求查询组播合约
    {"ReqQryMulticastInstrument", CTP_THOST_FTDC_MD_API_ReqQryMulticastInstrument, METH_VARARGS, nullptr},


	{nullptr}  /* Sentinel */
};

PyTypeObject CTP_THOST_FTDC_MD_API_TYPE = {
	PyVarObject_HEAD_INIT(NULL, 0)
	"PyCTP.CThostFtdcMdApi",	/* tp_name */
	sizeof(struct CTP_THOST_FTDC_MD_API),/* tp_basicsize */
	0,                          /* tp_itemsize */
	CTP_THOST_FTDC_MD_API_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	0,                          /* tp_repr */
	0,                          /* tp_as_number */
	0,                          /* tp_as_sequence */
	0,                          /* tp_as_mapping */
	0,                          /* tp_hash  */
	0,                          /* tp_call */
	0,                          /* tp_str */
	0,                          /* tp_getattro */
	0,                          /* tp_setattro */
	0,                          /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE,/* tp_flags */
	"equivalent to CThostFtdcMdApi for cpp", /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	CTP_THOST_FTDC_MD_API_methods,/* tp_methods */
	CTP_THOST_FTDC_MD_API_members,/* tp_members */
	0,                          /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	0,							/* tp_init */
	0,                          /* tp_alloc */
	0,							/* tp_new */
};

int CTP_THOST_FTDC_MD_API_TYPE_init(PyObject *module) {

	/* 准备好对象使用 CTP_THOST_FTDC_MD_API_TYPE  */
	if (PyType_Ready(&CTP_THOST_FTDC_MD_API_TYPE) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMdApi");
		return -1;
	}

    Py_INCREF(&CTP_THOST_FTDC_MD_API_TYPE);
    if( PyModule_AddObject(module, "CThostFtdcMdApi", (PyObject *)&CTP_THOST_FTDC_MD_API_TYPE) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMdApi to module");
        Py_DECREF(&CTP_THOST_FTDC_MD_API_TYPE);
		return -1;
    }

    return 0;
}
