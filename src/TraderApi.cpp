
#include "stdafx.h"
#include "TraderApi.h"
#include "UserApiStruct.h"
#include <structmember.h>

#define PyCTP_TRADER_FUNCTION_MAGIC(_in_fun) PyCTP_FUNCTION_MAGIC(CTP_THOST_FTDC_TRADER_API, _in_fun)
#define PyCTP_TRADER_FUNCTION_MAGIC_INT(_in_fun) PyCTP_FUNCTION_MAGIC_INT(CTP_THOST_FTDC_TRADER_API, _in_fun)
#define PyCTP_TRADER_FUNCTION_MAGIC_STRING(_in_fun) PyCTP_FUNCTION_MAGIC_STRING(CTP_THOST_FTDC_TRADER_API, _in_fun)
#define PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRING(_in_fun) PyCTP_FUNCTION_MAGIC_VOID_STRING(CTP_THOST_FTDC_TRADER_API, _in_fun)
#define PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRUCT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_VOID_STRUCT(CTP_THOST_FTDC_TRADER_API, _in_fun, _in_type)
#define PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_INT_STRUCT(CTP_THOST_FTDC_TRADER_API, _in_fun, _in_type)
#define PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(_in_fun, _in_type) PyCTP_FUNCTION_MAGIC_INT_STRUCT_INT(CTP_THOST_FTDC_TRADER_API, _in_fun, _in_type)

namespace {
    class CTP_THOST_FTDC_TRADER_SPI : public CThostFtdcTraderSpi
    {
        protected:

            CTP_THOST_FTDC_TRADER_API *api;

        public:

            CTP_THOST_FTDC_TRADER_SPI(CTP_THOST_FTDC_TRADER_API *userapi): api(userapi) {};

            virtual ~CTP_THOST_FTDC_TRADER_SPI() {};


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

            ///客户端认证响应
			virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspAuthenticateField *PypRspAuthenticateField = NULL; 
			    PyObject *PypRspAuthenticateField_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRspAuthenticateField = PyObject_New(PyCThostFtdcRspAuthenticateField, &PyCThostFtdcRspAuthenticateFieldType);
                if (!PypRspAuthenticateField) goto cleanup;
                PypRspAuthenticateField_callarg = (PyObject *)PypRspAuthenticateField;
                if (pRspAuthenticateField) { PypRspAuthenticateField->data = *pRspAuthenticateField; } else { PypRspAuthenticateField_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRspAuthenticateField_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspAuthenticate"), const_cast<char *>("OOOO"), PypRspAuthenticateField_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspAuthenticateField);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
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

            ///用户口令更新请求响应
			virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcUserPasswordUpdateField *PypUserPasswordUpdate = NULL; 
			    PyObject *PypUserPasswordUpdate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypUserPasswordUpdate = PyObject_New(PyCThostFtdcUserPasswordUpdateField, &PyCThostFtdcUserPasswordUpdateFieldType);
                if (!PypUserPasswordUpdate) goto cleanup;
                PypUserPasswordUpdate_callarg = (PyObject *)PypUserPasswordUpdate;
                if (pUserPasswordUpdate) { PypUserPasswordUpdate->data = *pUserPasswordUpdate; } else { PypUserPasswordUpdate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypUserPasswordUpdate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserPasswordUpdate"), const_cast<char *>("OOOO"), PypUserPasswordUpdate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypUserPasswordUpdate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///资金账户口令更新请求响应
			virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTradingAccountPasswordUpdateField *PypTradingAccountPasswordUpdate = NULL; 
			    PyObject *PypTradingAccountPasswordUpdate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTradingAccountPasswordUpdate = PyObject_New(PyCThostFtdcTradingAccountPasswordUpdateField, &PyCThostFtdcTradingAccountPasswordUpdateFieldType);
                if (!PypTradingAccountPasswordUpdate) goto cleanup;
                PypTradingAccountPasswordUpdate_callarg = (PyObject *)PypTradingAccountPasswordUpdate;
                if (pTradingAccountPasswordUpdate) { PypTradingAccountPasswordUpdate->data = *pTradingAccountPasswordUpdate; } else { PypTradingAccountPasswordUpdate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTradingAccountPasswordUpdate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspTradingAccountPasswordUpdate"), const_cast<char *>("OOOO"), PypTradingAccountPasswordUpdate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTradingAccountPasswordUpdate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///查询用户当前支持的认证模式的回复
			virtual void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspUserAuthMethodField *PypRspUserAuthMethod = NULL; 
			    PyObject *PypRspUserAuthMethod_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRspUserAuthMethod = PyObject_New(PyCThostFtdcRspUserAuthMethodField, &PyCThostFtdcRspUserAuthMethodFieldType);
                if (!PypRspUserAuthMethod) goto cleanup;
                PypRspUserAuthMethod_callarg = (PyObject *)PypRspUserAuthMethod;
                if (pRspUserAuthMethod) { PypRspUserAuthMethod->data = *pRspUserAuthMethod; } else { PypRspUserAuthMethod_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRspUserAuthMethod_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserAuthMethod"), const_cast<char *>("OOOO"), PypRspUserAuthMethod_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspUserAuthMethod);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///获取图形验证码请求的回复
			virtual void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspGenUserCaptchaField *PypRspGenUserCaptcha = NULL; 
			    PyObject *PypRspGenUserCaptcha_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRspGenUserCaptcha = PyObject_New(PyCThostFtdcRspGenUserCaptchaField, &PyCThostFtdcRspGenUserCaptchaFieldType);
                if (!PypRspGenUserCaptcha) goto cleanup;
                PypRspGenUserCaptcha_callarg = (PyObject *)PypRspGenUserCaptcha;
                if (pRspGenUserCaptcha) { PypRspGenUserCaptcha->data = *pRspGenUserCaptcha; } else { PypRspGenUserCaptcha_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRspGenUserCaptcha_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspGenUserCaptcha"), const_cast<char *>("OOOO"), PypRspGenUserCaptcha_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspGenUserCaptcha);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///获取短信验证码请求的回复
			virtual void OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspGenUserTextField *PypRspGenUserText = NULL; 
			    PyObject *PypRspGenUserText_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRspGenUserText = PyObject_New(PyCThostFtdcRspGenUserTextField, &PyCThostFtdcRspGenUserTextFieldType);
                if (!PypRspGenUserText) goto cleanup;
                PypRspGenUserText_callarg = (PyObject *)PypRspGenUserText;
                if (pRspGenUserText) { PypRspGenUserText->data = *pRspGenUserText; } else { PypRspGenUserText_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRspGenUserText_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspGenUserText"), const_cast<char *>("OOOO"), PypRspGenUserText_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspGenUserText);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报单录入请求响应
			virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOrderField *PypInputOrder = NULL; 
			    PyObject *PypInputOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputOrder = PyObject_New(PyCThostFtdcInputOrderField, &PyCThostFtdcInputOrderFieldType);
                if (!PypInputOrder) goto cleanup;
                PypInputOrder_callarg = (PyObject *)PypInputOrder;
                if (pInputOrder) { PypInputOrder->data = *pInputOrder; } else { PypInputOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOrderInsert"), const_cast<char *>("OOOO"), PypInputOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOrder);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///预埋单录入请求响应
			virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcParkedOrderField *PypParkedOrder = NULL; 
			    PyObject *PypParkedOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypParkedOrder = PyObject_New(PyCThostFtdcParkedOrderField, &PyCThostFtdcParkedOrderFieldType);
                if (!PypParkedOrder) goto cleanup;
                PypParkedOrder_callarg = (PyObject *)PypParkedOrder;
                if (pParkedOrder) { PypParkedOrder->data = *pParkedOrder; } else { PypParkedOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypParkedOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspParkedOrderInsert"), const_cast<char *>("OOOO"), PypParkedOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypParkedOrder);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///预埋撤单录入请求响应
			virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcParkedOrderActionField *PypParkedOrderAction = NULL; 
			    PyObject *PypParkedOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypParkedOrderAction = PyObject_New(PyCThostFtdcParkedOrderActionField, &PyCThostFtdcParkedOrderActionFieldType);
                if (!PypParkedOrderAction) goto cleanup;
                PypParkedOrderAction_callarg = (PyObject *)PypParkedOrderAction;
                if (pParkedOrderAction) { PypParkedOrderAction->data = *pParkedOrderAction; } else { PypParkedOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypParkedOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspParkedOrderAction"), const_cast<char *>("OOOO"), PypParkedOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypParkedOrderAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报单操作请求响应
			virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOrderActionField *PypInputOrderAction = NULL; 
			    PyObject *PypInputOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputOrderAction = PyObject_New(PyCThostFtdcInputOrderActionField, &PyCThostFtdcInputOrderActionFieldType);
                if (!PypInputOrderAction) goto cleanup;
                PypInputOrderAction_callarg = (PyObject *)PypInputOrderAction;
                if (pInputOrderAction) { PypInputOrderAction->data = *pInputOrderAction; } else { PypInputOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOrderAction"), const_cast<char *>("OOOO"), PypInputOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOrderAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///查询最大报单数量响应
			virtual void OnRspQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField *pQryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcQryMaxOrderVolumeField *PypQryMaxOrderVolume = NULL; 
			    PyObject *PypQryMaxOrderVolume_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypQryMaxOrderVolume = PyObject_New(PyCThostFtdcQryMaxOrderVolumeField, &PyCThostFtdcQryMaxOrderVolumeFieldType);
                if (!PypQryMaxOrderVolume) goto cleanup;
                PypQryMaxOrderVolume_callarg = (PyObject *)PypQryMaxOrderVolume;
                if (pQryMaxOrderVolume) { PypQryMaxOrderVolume->data = *pQryMaxOrderVolume; } else { PypQryMaxOrderVolume_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypQryMaxOrderVolume_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryMaxOrderVolume"), const_cast<char *>("OOOO"), PypQryMaxOrderVolume_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypQryMaxOrderVolume);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者结算结果确认响应
			virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSettlementInfoConfirmField *PypSettlementInfoConfirm = NULL; 
			    PyObject *PypSettlementInfoConfirm_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSettlementInfoConfirm = PyObject_New(PyCThostFtdcSettlementInfoConfirmField, &PyCThostFtdcSettlementInfoConfirmFieldType);
                if (!PypSettlementInfoConfirm) goto cleanup;
                PypSettlementInfoConfirm_callarg = (PyObject *)PypSettlementInfoConfirm;
                if (pSettlementInfoConfirm) { PypSettlementInfoConfirm->data = *pSettlementInfoConfirm; } else { PypSettlementInfoConfirm_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSettlementInfoConfirm_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSettlementInfoConfirm"), const_cast<char *>("OOOO"), PypSettlementInfoConfirm_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSettlementInfoConfirm);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///删除预埋单响应
			virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRemoveParkedOrderField *PypRemoveParkedOrder = NULL; 
			    PyObject *PypRemoveParkedOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRemoveParkedOrder = PyObject_New(PyCThostFtdcRemoveParkedOrderField, &PyCThostFtdcRemoveParkedOrderFieldType);
                if (!PypRemoveParkedOrder) goto cleanup;
                PypRemoveParkedOrder_callarg = (PyObject *)PypRemoveParkedOrder;
                if (pRemoveParkedOrder) { PypRemoveParkedOrder->data = *pRemoveParkedOrder; } else { PypRemoveParkedOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRemoveParkedOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspRemoveParkedOrder"), const_cast<char *>("OOOO"), PypRemoveParkedOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRemoveParkedOrder);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///删除预埋撤单响应
			virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRemoveParkedOrderActionField *PypRemoveParkedOrderAction = NULL; 
			    PyObject *PypRemoveParkedOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRemoveParkedOrderAction = PyObject_New(PyCThostFtdcRemoveParkedOrderActionField, &PyCThostFtdcRemoveParkedOrderActionFieldType);
                if (!PypRemoveParkedOrderAction) goto cleanup;
                PypRemoveParkedOrderAction_callarg = (PyObject *)PypRemoveParkedOrderAction;
                if (pRemoveParkedOrderAction) { PypRemoveParkedOrderAction->data = *pRemoveParkedOrderAction; } else { PypRemoveParkedOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRemoveParkedOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspRemoveParkedOrderAction"), const_cast<char *>("OOOO"), PypRemoveParkedOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRemoveParkedOrderAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///执行宣告录入请求响应
			virtual void OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputExecOrderField *PypInputExecOrder = NULL; 
			    PyObject *PypInputExecOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputExecOrder = PyObject_New(PyCThostFtdcInputExecOrderField, &PyCThostFtdcInputExecOrderFieldType);
                if (!PypInputExecOrder) goto cleanup;
                PypInputExecOrder_callarg = (PyObject *)PypInputExecOrder;
                if (pInputExecOrder) { PypInputExecOrder->data = *pInputExecOrder; } else { PypInputExecOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputExecOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspExecOrderInsert"), const_cast<char *>("OOOO"), PypInputExecOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputExecOrder);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///执行宣告操作请求响应
			virtual void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputExecOrderActionField *PypInputExecOrderAction = NULL; 
			    PyObject *PypInputExecOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputExecOrderAction = PyObject_New(PyCThostFtdcInputExecOrderActionField, &PyCThostFtdcInputExecOrderActionFieldType);
                if (!PypInputExecOrderAction) goto cleanup;
                PypInputExecOrderAction_callarg = (PyObject *)PypInputExecOrderAction;
                if (pInputExecOrderAction) { PypInputExecOrderAction->data = *pInputExecOrderAction; } else { PypInputExecOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputExecOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspExecOrderAction"), const_cast<char *>("OOOO"), PypInputExecOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputExecOrderAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///询价录入请求响应
			virtual void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputForQuoteField *PypInputForQuote = NULL; 
			    PyObject *PypInputForQuote_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputForQuote = PyObject_New(PyCThostFtdcInputForQuoteField, &PyCThostFtdcInputForQuoteFieldType);
                if (!PypInputForQuote) goto cleanup;
                PypInputForQuote_callarg = (PyObject *)PypInputForQuote;
                if (pInputForQuote) { PypInputForQuote->data = *pInputForQuote; } else { PypInputForQuote_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputForQuote_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspForQuoteInsert"), const_cast<char *>("OOOO"), PypInputForQuote_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputForQuote);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报价录入请求响应
			virtual void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputQuoteField *PypInputQuote = NULL; 
			    PyObject *PypInputQuote_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputQuote = PyObject_New(PyCThostFtdcInputQuoteField, &PyCThostFtdcInputQuoteFieldType);
                if (!PypInputQuote) goto cleanup;
                PypInputQuote_callarg = (PyObject *)PypInputQuote;
                if (pInputQuote) { PypInputQuote->data = *pInputQuote; } else { PypInputQuote_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputQuote_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQuoteInsert"), const_cast<char *>("OOOO"), PypInputQuote_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputQuote);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报价操作请求响应
			virtual void OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputQuoteActionField *PypInputQuoteAction = NULL; 
			    PyObject *PypInputQuoteAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputQuoteAction = PyObject_New(PyCThostFtdcInputQuoteActionField, &PyCThostFtdcInputQuoteActionFieldType);
                if (!PypInputQuoteAction) goto cleanup;
                PypInputQuoteAction_callarg = (PyObject *)PypInputQuoteAction;
                if (pInputQuoteAction) { PypInputQuoteAction->data = *pInputQuoteAction; } else { PypInputQuoteAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputQuoteAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQuoteAction"), const_cast<char *>("OOOO"), PypInputQuoteAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputQuoteAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///批量报单操作请求响应
			virtual void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputBatchOrderActionField *PypInputBatchOrderAction = NULL; 
			    PyObject *PypInputBatchOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputBatchOrderAction = PyObject_New(PyCThostFtdcInputBatchOrderActionField, &PyCThostFtdcInputBatchOrderActionFieldType);
                if (!PypInputBatchOrderAction) goto cleanup;
                PypInputBatchOrderAction_callarg = (PyObject *)PypInputBatchOrderAction;
                if (pInputBatchOrderAction) { PypInputBatchOrderAction->data = *pInputBatchOrderAction; } else { PypInputBatchOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputBatchOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspBatchOrderAction"), const_cast<char *>("OOOO"), PypInputBatchOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputBatchOrderAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期权自对冲录入请求响应
			virtual void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOptionSelfCloseField *PypInputOptionSelfClose = NULL; 
			    PyObject *PypInputOptionSelfClose_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputOptionSelfClose = PyObject_New(PyCThostFtdcInputOptionSelfCloseField, &PyCThostFtdcInputOptionSelfCloseFieldType);
                if (!PypInputOptionSelfClose) goto cleanup;
                PypInputOptionSelfClose_callarg = (PyObject *)PypInputOptionSelfClose;
                if (pInputOptionSelfClose) { PypInputOptionSelfClose->data = *pInputOptionSelfClose; } else { PypInputOptionSelfClose_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputOptionSelfClose_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOptionSelfCloseInsert"), const_cast<char *>("OOOO"), PypInputOptionSelfClose_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOptionSelfClose);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期权自对冲操作请求响应
			virtual void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOptionSelfCloseActionField *PypInputOptionSelfCloseAction = NULL; 
			    PyObject *PypInputOptionSelfCloseAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputOptionSelfCloseAction = PyObject_New(PyCThostFtdcInputOptionSelfCloseActionField, &PyCThostFtdcInputOptionSelfCloseActionFieldType);
                if (!PypInputOptionSelfCloseAction) goto cleanup;
                PypInputOptionSelfCloseAction_callarg = (PyObject *)PypInputOptionSelfCloseAction;
                if (pInputOptionSelfCloseAction) { PypInputOptionSelfCloseAction->data = *pInputOptionSelfCloseAction; } else { PypInputOptionSelfCloseAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputOptionSelfCloseAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOptionSelfCloseAction"), const_cast<char *>("OOOO"), PypInputOptionSelfCloseAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOptionSelfCloseAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///申请组合录入请求响应
			virtual void OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputCombActionField *PypInputCombAction = NULL; 
			    PyObject *PypInputCombAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputCombAction = PyObject_New(PyCThostFtdcInputCombActionField, &PyCThostFtdcInputCombActionFieldType);
                if (!PypInputCombAction) goto cleanup;
                PypInputCombAction_callarg = (PyObject *)PypInputCombAction;
                if (pInputCombAction) { PypInputCombAction->data = *pInputCombAction; } else { PypInputCombAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputCombAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspCombActionInsert"), const_cast<char *>("OOOO"), PypInputCombAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputCombAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询报单响应
			virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOrderField *PypOrder = NULL; 
			    PyObject *PypOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypOrder = PyObject_New(PyCThostFtdcOrderField, &PyCThostFtdcOrderFieldType);
                if (!PypOrder) goto cleanup;
                PypOrder_callarg = (PyObject *)PypOrder;
                if (pOrder) { PypOrder->data = *pOrder; } else { PypOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOrder"), const_cast<char *>("OOOO"), PypOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOrder);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询成交响应
			virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTradeField *PypTrade = NULL; 
			    PyObject *PypTrade_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTrade = PyObject_New(PyCThostFtdcTradeField, &PyCThostFtdcTradeFieldType);
                if (!PypTrade) goto cleanup;
                PypTrade_callarg = (PyObject *)PypTrade;
                if (pTrade) { PypTrade->data = *pTrade; } else { PypTrade_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTrade_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTrade"), const_cast<char *>("OOOO"), PypTrade_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTrade);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询投资者持仓响应
			virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorPositionField *PypInvestorPosition = NULL; 
			    PyObject *PypInvestorPosition_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorPosition = PyObject_New(PyCThostFtdcInvestorPositionField, &PyCThostFtdcInvestorPositionFieldType);
                if (!PypInvestorPosition) goto cleanup;
                PypInvestorPosition_callarg = (PyObject *)PypInvestorPosition;
                if (pInvestorPosition) { PypInvestorPosition->data = *pInvestorPosition; } else { PypInvestorPosition_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorPosition_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPosition"), const_cast<char *>("OOOO"), PypInvestorPosition_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorPosition);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询资金账户响应
			virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTradingAccountField *PypTradingAccount = NULL; 
			    PyObject *PypTradingAccount_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTradingAccount = PyObject_New(PyCThostFtdcTradingAccountField, &PyCThostFtdcTradingAccountFieldType);
                if (!PypTradingAccount) goto cleanup;
                PypTradingAccount_callarg = (PyObject *)PypTradingAccount;
                if (pTradingAccount) { PypTradingAccount->data = *pTradingAccount; } else { PypTradingAccount_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTradingAccount_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingAccount"), const_cast<char *>("OOOO"), PypTradingAccount_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTradingAccount);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询投资者响应
			virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorField *PypInvestor = NULL; 
			    PyObject *PypInvestor_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestor = PyObject_New(PyCThostFtdcInvestorField, &PyCThostFtdcInvestorFieldType);
                if (!PypInvestor) goto cleanup;
                PypInvestor_callarg = (PyObject *)PypInvestor;
                if (pInvestor) { PypInvestor->data = *pInvestor; } else { PypInvestor_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestor_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestor"), const_cast<char *>("OOOO"), PypInvestor_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestor);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询交易编码响应
			virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTradingCodeField *PypTradingCode = NULL; 
			    PyObject *PypTradingCode_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTradingCode = PyObject_New(PyCThostFtdcTradingCodeField, &PyCThostFtdcTradingCodeFieldType);
                if (!PypTradingCode) goto cleanup;
                PypTradingCode_callarg = (PyObject *)PypTradingCode;
                if (pTradingCode) { PypTradingCode->data = *pTradingCode; } else { PypTradingCode_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTradingCode_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingCode"), const_cast<char *>("OOOO"), PypTradingCode_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTradingCode);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询合约保证金率响应
			virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInstrumentMarginRateField *PypInstrumentMarginRate = NULL; 
			    PyObject *PypInstrumentMarginRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInstrumentMarginRate = PyObject_New(PyCThostFtdcInstrumentMarginRateField, &PyCThostFtdcInstrumentMarginRateFieldType);
                if (!PypInstrumentMarginRate) goto cleanup;
                PypInstrumentMarginRate_callarg = (PyObject *)PypInstrumentMarginRate;
                if (pInstrumentMarginRate) { PypInstrumentMarginRate->data = *pInstrumentMarginRate; } else { PypInstrumentMarginRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInstrumentMarginRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrumentMarginRate"), const_cast<char *>("OOOO"), PypInstrumentMarginRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInstrumentMarginRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询合约手续费率响应
			virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInstrumentCommissionRateField *PypInstrumentCommissionRate = NULL; 
			    PyObject *PypInstrumentCommissionRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInstrumentCommissionRate = PyObject_New(PyCThostFtdcInstrumentCommissionRateField, &PyCThostFtdcInstrumentCommissionRateFieldType);
                if (!PypInstrumentCommissionRate) goto cleanup;
                PypInstrumentCommissionRate_callarg = (PyObject *)PypInstrumentCommissionRate;
                if (pInstrumentCommissionRate) { PypInstrumentCommissionRate->data = *pInstrumentCommissionRate; } else { PypInstrumentCommissionRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInstrumentCommissionRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrumentCommissionRate"), const_cast<char *>("OOOO"), PypInstrumentCommissionRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInstrumentCommissionRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询交易所响应
			virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcExchangeField *PypExchange = NULL; 
			    PyObject *PypExchange_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypExchange = PyObject_New(PyCThostFtdcExchangeField, &PyCThostFtdcExchangeFieldType);
                if (!PypExchange) goto cleanup;
                PypExchange_callarg = (PyObject *)PypExchange;
                if (pExchange) { PypExchange->data = *pExchange; } else { PypExchange_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypExchange_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchange"), const_cast<char *>("OOOO"), PypExchange_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypExchange);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询产品响应
			virtual void OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcProductField *PypProduct = NULL; 
			    PyObject *PypProduct_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypProduct = PyObject_New(PyCThostFtdcProductField, &PyCThostFtdcProductFieldType);
                if (!PypProduct) goto cleanup;
                PypProduct_callarg = (PyObject *)PypProduct;
                if (pProduct) { PypProduct->data = *pProduct; } else { PypProduct_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypProduct_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProduct"), const_cast<char *>("OOOO"), PypProduct_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypProduct);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询合约响应
			virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInstrumentField *PypInstrument = NULL; 
			    PyObject *PypInstrument_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInstrument = PyObject_New(PyCThostFtdcInstrumentField, &PyCThostFtdcInstrumentFieldType);
                if (!PypInstrument) goto cleanup;
                PypInstrument_callarg = (PyObject *)PypInstrument;
                if (pInstrument) { PypInstrument->data = *pInstrument; } else { PypInstrument_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrument"), const_cast<char *>("OOOO"), PypInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInstrument);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询行情响应
			virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcDepthMarketDataField *PypDepthMarketData = NULL; 
			    PyObject *PypDepthMarketData_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypDepthMarketData = PyObject_New(PyCThostFtdcDepthMarketDataField, &PyCThostFtdcDepthMarketDataFieldType);
                if (!PypDepthMarketData) goto cleanup;
                PypDepthMarketData_callarg = (PyObject *)PypDepthMarketData;
                if (pDepthMarketData) { PypDepthMarketData->data = *pDepthMarketData; } else { PypDepthMarketData_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypDepthMarketData_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryDepthMarketData"), const_cast<char *>("OOOO"), PypDepthMarketData_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypDepthMarketData);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询交易员报盘机响应
			virtual void OnRspQryTraderOffer(CThostFtdcTraderOfferField *pTraderOffer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTraderOfferField *PypTraderOffer = NULL; 
			    PyObject *PypTraderOffer_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTraderOffer = PyObject_New(PyCThostFtdcTraderOfferField, &PyCThostFtdcTraderOfferFieldType);
                if (!PypTraderOffer) goto cleanup;
                PypTraderOffer_callarg = (PyObject *)PypTraderOffer;
                if (pTraderOffer) { PypTraderOffer->data = *pTraderOffer; } else { PypTraderOffer_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTraderOffer_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTraderOffer"), const_cast<char *>("OOOO"), PypTraderOffer_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTraderOffer);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询投资者结算结果响应
			virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSettlementInfoField *PypSettlementInfo = NULL; 
			    PyObject *PypSettlementInfo_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSettlementInfo = PyObject_New(PyCThostFtdcSettlementInfoField, &PyCThostFtdcSettlementInfoFieldType);
                if (!PypSettlementInfo) goto cleanup;
                PypSettlementInfo_callarg = (PyObject *)PypSettlementInfo;
                if (pSettlementInfo) { PypSettlementInfo->data = *pSettlementInfo; } else { PypSettlementInfo_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSettlementInfo_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySettlementInfo"), const_cast<char *>("OOOO"), PypSettlementInfo_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSettlementInfo);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询转帐银行响应
			virtual void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTransferBankField *PypTransferBank = NULL; 
			    PyObject *PypTransferBank_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTransferBank = PyObject_New(PyCThostFtdcTransferBankField, &PyCThostFtdcTransferBankFieldType);
                if (!PypTransferBank) goto cleanup;
                PypTransferBank_callarg = (PyObject *)PypTransferBank;
                if (pTransferBank) { PypTransferBank->data = *pTransferBank; } else { PypTransferBank_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTransferBank_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTransferBank"), const_cast<char *>("OOOO"), PypTransferBank_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTransferBank);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询投资者持仓明细响应
			virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorPositionDetailField *PypInvestorPositionDetail = NULL; 
			    PyObject *PypInvestorPositionDetail_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorPositionDetail = PyObject_New(PyCThostFtdcInvestorPositionDetailField, &PyCThostFtdcInvestorPositionDetailFieldType);
                if (!PypInvestorPositionDetail) goto cleanup;
                PypInvestorPositionDetail_callarg = (PyObject *)PypInvestorPositionDetail;
                if (pInvestorPositionDetail) { PypInvestorPositionDetail->data = *pInvestorPositionDetail; } else { PypInvestorPositionDetail_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorPositionDetail_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPositionDetail"), const_cast<char *>("OOOO"), PypInvestorPositionDetail_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorPositionDetail);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询客户通知响应
			virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcNoticeField *PypNotice = NULL; 
			    PyObject *PypNotice_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypNotice = PyObject_New(PyCThostFtdcNoticeField, &PyCThostFtdcNoticeFieldType);
                if (!PypNotice) goto cleanup;
                PypNotice_callarg = (PyObject *)PypNotice;
                if (pNotice) { PypNotice->data = *pNotice; } else { PypNotice_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypNotice_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryNotice"), const_cast<char *>("OOOO"), PypNotice_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypNotice);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询结算信息确认响应
			virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSettlementInfoConfirmField *PypSettlementInfoConfirm = NULL; 
			    PyObject *PypSettlementInfoConfirm_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSettlementInfoConfirm = PyObject_New(PyCThostFtdcSettlementInfoConfirmField, &PyCThostFtdcSettlementInfoConfirmFieldType);
                if (!PypSettlementInfoConfirm) goto cleanup;
                PypSettlementInfoConfirm_callarg = (PyObject *)PypSettlementInfoConfirm;
                if (pSettlementInfoConfirm) { PypSettlementInfoConfirm->data = *pSettlementInfoConfirm; } else { PypSettlementInfoConfirm_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSettlementInfoConfirm_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySettlementInfoConfirm"), const_cast<char *>("OOOO"), PypSettlementInfoConfirm_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSettlementInfoConfirm);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询投资者持仓明细响应
			virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorPositionCombineDetailField *PypInvestorPositionCombineDetail = NULL; 
			    PyObject *PypInvestorPositionCombineDetail_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorPositionCombineDetail = PyObject_New(PyCThostFtdcInvestorPositionCombineDetailField, &PyCThostFtdcInvestorPositionCombineDetailFieldType);
                if (!PypInvestorPositionCombineDetail) goto cleanup;
                PypInvestorPositionCombineDetail_callarg = (PyObject *)PypInvestorPositionCombineDetail;
                if (pInvestorPositionCombineDetail) { PypInvestorPositionCombineDetail->data = *pInvestorPositionCombineDetail; } else { PypInvestorPositionCombineDetail_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorPositionCombineDetail_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPositionCombineDetail"), const_cast<char *>("OOOO"), PypInvestorPositionCombineDetail_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorPositionCombineDetail);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///查询保证金监管系统经纪公司资金账户密钥响应
			virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCFMMCTradingAccountKeyField *PypCFMMCTradingAccountKey = NULL; 
			    PyObject *PypCFMMCTradingAccountKey_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypCFMMCTradingAccountKey = PyObject_New(PyCThostFtdcCFMMCTradingAccountKeyField, &PyCThostFtdcCFMMCTradingAccountKeyFieldType);
                if (!PypCFMMCTradingAccountKey) goto cleanup;
                PypCFMMCTradingAccountKey_callarg = (PyObject *)PypCFMMCTradingAccountKey;
                if (pCFMMCTradingAccountKey) { PypCFMMCTradingAccountKey->data = *pCFMMCTradingAccountKey; } else { PypCFMMCTradingAccountKey_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypCFMMCTradingAccountKey_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCFMMCTradingAccountKey"), const_cast<char *>("OOOO"), PypCFMMCTradingAccountKey_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCFMMCTradingAccountKey);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询仓单折抵信息响应
			virtual void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcEWarrantOffsetField *PypEWarrantOffset = NULL; 
			    PyObject *PypEWarrantOffset_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypEWarrantOffset = PyObject_New(PyCThostFtdcEWarrantOffsetField, &PyCThostFtdcEWarrantOffsetFieldType);
                if (!PypEWarrantOffset) goto cleanup;
                PypEWarrantOffset_callarg = (PyObject *)PypEWarrantOffset;
                if (pEWarrantOffset) { PypEWarrantOffset->data = *pEWarrantOffset; } else { PypEWarrantOffset_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypEWarrantOffset_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryEWarrantOffset"), const_cast<char *>("OOOO"), PypEWarrantOffset_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypEWarrantOffset);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询投资者品种/跨品种保证金响应
			virtual void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorProductGroupMarginField *PypInvestorProductGroupMargin = NULL; 
			    PyObject *PypInvestorProductGroupMargin_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorProductGroupMargin = PyObject_New(PyCThostFtdcInvestorProductGroupMarginField, &PyCThostFtdcInvestorProductGroupMarginFieldType);
                if (!PypInvestorProductGroupMargin) goto cleanup;
                PypInvestorProductGroupMargin_callarg = (PyObject *)PypInvestorProductGroupMargin;
                if (pInvestorProductGroupMargin) { PypInvestorProductGroupMargin->data = *pInvestorProductGroupMargin; } else { PypInvestorProductGroupMargin_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorProductGroupMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProductGroupMargin"), const_cast<char *>("OOOO"), PypInvestorProductGroupMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorProductGroupMargin);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询交易所保证金率响应
			virtual void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcExchangeMarginRateField *PypExchangeMarginRate = NULL; 
			    PyObject *PypExchangeMarginRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypExchangeMarginRate = PyObject_New(PyCThostFtdcExchangeMarginRateField, &PyCThostFtdcExchangeMarginRateFieldType);
                if (!PypExchangeMarginRate) goto cleanup;
                PypExchangeMarginRate_callarg = (PyObject *)PypExchangeMarginRate;
                if (pExchangeMarginRate) { PypExchangeMarginRate->data = *pExchangeMarginRate; } else { PypExchangeMarginRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypExchangeMarginRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeMarginRate"), const_cast<char *>("OOOO"), PypExchangeMarginRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypExchangeMarginRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询交易所调整保证金率响应
			virtual void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcExchangeMarginRateAdjustField *PypExchangeMarginRateAdjust = NULL; 
			    PyObject *PypExchangeMarginRateAdjust_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypExchangeMarginRateAdjust = PyObject_New(PyCThostFtdcExchangeMarginRateAdjustField, &PyCThostFtdcExchangeMarginRateAdjustFieldType);
                if (!PypExchangeMarginRateAdjust) goto cleanup;
                PypExchangeMarginRateAdjust_callarg = (PyObject *)PypExchangeMarginRateAdjust;
                if (pExchangeMarginRateAdjust) { PypExchangeMarginRateAdjust->data = *pExchangeMarginRateAdjust; } else { PypExchangeMarginRateAdjust_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypExchangeMarginRateAdjust_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeMarginRateAdjust"), const_cast<char *>("OOOO"), PypExchangeMarginRateAdjust_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypExchangeMarginRateAdjust);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询汇率响应
			virtual void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcExchangeRateField *PypExchangeRate = NULL; 
			    PyObject *PypExchangeRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypExchangeRate = PyObject_New(PyCThostFtdcExchangeRateField, &PyCThostFtdcExchangeRateFieldType);
                if (!PypExchangeRate) goto cleanup;
                PypExchangeRate_callarg = (PyObject *)PypExchangeRate;
                if (pExchangeRate) { PypExchangeRate->data = *pExchangeRate; } else { PypExchangeRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypExchangeRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeRate"), const_cast<char *>("OOOO"), PypExchangeRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypExchangeRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询二级代理操作员银期权限响应
			virtual void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSecAgentACIDMapField *PypSecAgentACIDMap = NULL; 
			    PyObject *PypSecAgentACIDMap_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSecAgentACIDMap = PyObject_New(PyCThostFtdcSecAgentACIDMapField, &PyCThostFtdcSecAgentACIDMapFieldType);
                if (!PypSecAgentACIDMap) goto cleanup;
                PypSecAgentACIDMap_callarg = (PyObject *)PypSecAgentACIDMap;
                if (pSecAgentACIDMap) { PypSecAgentACIDMap->data = *pSecAgentACIDMap; } else { PypSecAgentACIDMap_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSecAgentACIDMap_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentACIDMap"), const_cast<char *>("OOOO"), PypSecAgentACIDMap_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSecAgentACIDMap);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询产品报价汇率
			virtual void OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcProductExchRateField *PypProductExchRate = NULL; 
			    PyObject *PypProductExchRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypProductExchRate = PyObject_New(PyCThostFtdcProductExchRateField, &PyCThostFtdcProductExchRateFieldType);
                if (!PypProductExchRate) goto cleanup;
                PypProductExchRate_callarg = (PyObject *)PypProductExchRate;
                if (pProductExchRate) { PypProductExchRate->data = *pProductExchRate; } else { PypProductExchRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypProductExchRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProductExchRate"), const_cast<char *>("OOOO"), PypProductExchRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypProductExchRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询产品组
			virtual void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcProductGroupField *PypProductGroup = NULL; 
			    PyObject *PypProductGroup_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypProductGroup = PyObject_New(PyCThostFtdcProductGroupField, &PyCThostFtdcProductGroupFieldType);
                if (!PypProductGroup) goto cleanup;
                PypProductGroup_callarg = (PyObject *)PypProductGroup;
                if (pProductGroup) { PypProductGroup->data = *pProductGroup; } else { PypProductGroup_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypProductGroup_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProductGroup"), const_cast<char *>("OOOO"), PypProductGroup_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypProductGroup);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询做市商合约手续费率响应
			virtual void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcMMInstrumentCommissionRateField *PypMMInstrumentCommissionRate = NULL; 
			    PyObject *PypMMInstrumentCommissionRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypMMInstrumentCommissionRate = PyObject_New(PyCThostFtdcMMInstrumentCommissionRateField, &PyCThostFtdcMMInstrumentCommissionRateFieldType);
                if (!PypMMInstrumentCommissionRate) goto cleanup;
                PypMMInstrumentCommissionRate_callarg = (PyObject *)PypMMInstrumentCommissionRate;
                if (pMMInstrumentCommissionRate) { PypMMInstrumentCommissionRate->data = *pMMInstrumentCommissionRate; } else { PypMMInstrumentCommissionRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypMMInstrumentCommissionRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryMMInstrumentCommissionRate"), const_cast<char *>("OOOO"), PypMMInstrumentCommissionRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypMMInstrumentCommissionRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询做市商期权合约手续费响应
			virtual void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcMMOptionInstrCommRateField *PypMMOptionInstrCommRate = NULL; 
			    PyObject *PypMMOptionInstrCommRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypMMOptionInstrCommRate = PyObject_New(PyCThostFtdcMMOptionInstrCommRateField, &PyCThostFtdcMMOptionInstrCommRateFieldType);
                if (!PypMMOptionInstrCommRate) goto cleanup;
                PypMMOptionInstrCommRate_callarg = (PyObject *)PypMMOptionInstrCommRate;
                if (pMMOptionInstrCommRate) { PypMMOptionInstrCommRate->data = *pMMOptionInstrCommRate; } else { PypMMOptionInstrCommRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypMMOptionInstrCommRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryMMOptionInstrCommRate"), const_cast<char *>("OOOO"), PypMMOptionInstrCommRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypMMOptionInstrCommRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询报单手续费响应
			virtual void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInstrumentOrderCommRateField *PypInstrumentOrderCommRate = NULL; 
			    PyObject *PypInstrumentOrderCommRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInstrumentOrderCommRate = PyObject_New(PyCThostFtdcInstrumentOrderCommRateField, &PyCThostFtdcInstrumentOrderCommRateFieldType);
                if (!PypInstrumentOrderCommRate) goto cleanup;
                PypInstrumentOrderCommRate_callarg = (PyObject *)PypInstrumentOrderCommRate;
                if (pInstrumentOrderCommRate) { PypInstrumentOrderCommRate->data = *pInstrumentOrderCommRate; } else { PypInstrumentOrderCommRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInstrumentOrderCommRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrumentOrderCommRate"), const_cast<char *>("OOOO"), PypInstrumentOrderCommRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInstrumentOrderCommRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询资金账户响应
			virtual void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTradingAccountField *PypTradingAccount = NULL; 
			    PyObject *PypTradingAccount_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTradingAccount = PyObject_New(PyCThostFtdcTradingAccountField, &PyCThostFtdcTradingAccountFieldType);
                if (!PypTradingAccount) goto cleanup;
                PypTradingAccount_callarg = (PyObject *)PypTradingAccount;
                if (pTradingAccount) { PypTradingAccount->data = *pTradingAccount; } else { PypTradingAccount_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTradingAccount_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentTradingAccount"), const_cast<char *>("OOOO"), PypTradingAccount_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTradingAccount);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询二级代理商资金校验模式响应
			virtual void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSecAgentCheckModeField *PypSecAgentCheckMode = NULL; 
			    PyObject *PypSecAgentCheckMode_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSecAgentCheckMode = PyObject_New(PyCThostFtdcSecAgentCheckModeField, &PyCThostFtdcSecAgentCheckModeFieldType);
                if (!PypSecAgentCheckMode) goto cleanup;
                PypSecAgentCheckMode_callarg = (PyObject *)PypSecAgentCheckMode;
                if (pSecAgentCheckMode) { PypSecAgentCheckMode->data = *pSecAgentCheckMode; } else { PypSecAgentCheckMode_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSecAgentCheckMode_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentCheckMode"), const_cast<char *>("OOOO"), PypSecAgentCheckMode_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSecAgentCheckMode);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询二级代理商信息响应
			virtual void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSecAgentTradeInfoField *PypSecAgentTradeInfo = NULL; 
			    PyObject *PypSecAgentTradeInfo_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSecAgentTradeInfo = PyObject_New(PyCThostFtdcSecAgentTradeInfoField, &PyCThostFtdcSecAgentTradeInfoFieldType);
                if (!PypSecAgentTradeInfo) goto cleanup;
                PypSecAgentTradeInfo_callarg = (PyObject *)PypSecAgentTradeInfo;
                if (pSecAgentTradeInfo) { PypSecAgentTradeInfo->data = *pSecAgentTradeInfo; } else { PypSecAgentTradeInfo_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSecAgentTradeInfo_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentTradeInfo"), const_cast<char *>("OOOO"), PypSecAgentTradeInfo_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSecAgentTradeInfo);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询期权交易成本响应
			virtual void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOptionInstrTradeCostField *PypOptionInstrTradeCost = NULL; 
			    PyObject *PypOptionInstrTradeCost_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypOptionInstrTradeCost = PyObject_New(PyCThostFtdcOptionInstrTradeCostField, &PyCThostFtdcOptionInstrTradeCostFieldType);
                if (!PypOptionInstrTradeCost) goto cleanup;
                PypOptionInstrTradeCost_callarg = (PyObject *)PypOptionInstrTradeCost;
                if (pOptionInstrTradeCost) { PypOptionInstrTradeCost->data = *pOptionInstrTradeCost; } else { PypOptionInstrTradeCost_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypOptionInstrTradeCost_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOptionInstrTradeCost"), const_cast<char *>("OOOO"), PypOptionInstrTradeCost_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOptionInstrTradeCost);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询期权合约手续费响应
			virtual void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOptionInstrCommRateField *PypOptionInstrCommRate = NULL; 
			    PyObject *PypOptionInstrCommRate_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypOptionInstrCommRate = PyObject_New(PyCThostFtdcOptionInstrCommRateField, &PyCThostFtdcOptionInstrCommRateFieldType);
                if (!PypOptionInstrCommRate) goto cleanup;
                PypOptionInstrCommRate_callarg = (PyObject *)PypOptionInstrCommRate;
                if (pOptionInstrCommRate) { PypOptionInstrCommRate->data = *pOptionInstrCommRate; } else { PypOptionInstrCommRate_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypOptionInstrCommRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOptionInstrCommRate"), const_cast<char *>("OOOO"), PypOptionInstrCommRate_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOptionInstrCommRate);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询执行宣告响应
			virtual void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcExecOrderField *PypExecOrder = NULL; 
			    PyObject *PypExecOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypExecOrder = PyObject_New(PyCThostFtdcExecOrderField, &PyCThostFtdcExecOrderFieldType);
                if (!PypExecOrder) goto cleanup;
                PypExecOrder_callarg = (PyObject *)PypExecOrder;
                if (pExecOrder) { PypExecOrder->data = *pExecOrder; } else { PypExecOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypExecOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExecOrder"), const_cast<char *>("OOOO"), PypExecOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypExecOrder);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询询价响应
			virtual void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcForQuoteField *PypForQuote = NULL; 
			    PyObject *PypForQuote_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypForQuote = PyObject_New(PyCThostFtdcForQuoteField, &PyCThostFtdcForQuoteFieldType);
                if (!PypForQuote) goto cleanup;
                PypForQuote_callarg = (PyObject *)PypForQuote;
                if (pForQuote) { PypForQuote->data = *pForQuote; } else { PypForQuote_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypForQuote_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryForQuote"), const_cast<char *>("OOOO"), PypForQuote_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypForQuote);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询报价响应
			virtual void OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcQuoteField *PypQuote = NULL; 
			    PyObject *PypQuote_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypQuote = PyObject_New(PyCThostFtdcQuoteField, &PyCThostFtdcQuoteFieldType);
                if (!PypQuote) goto cleanup;
                PypQuote_callarg = (PyObject *)PypQuote;
                if (pQuote) { PypQuote->data = *pQuote; } else { PypQuote_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypQuote_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryQuote"), const_cast<char *>("OOOO"), PypQuote_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypQuote);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询期权自对冲响应
			virtual void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOptionSelfCloseField *PypOptionSelfClose = NULL; 
			    PyObject *PypOptionSelfClose_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypOptionSelfClose = PyObject_New(PyCThostFtdcOptionSelfCloseField, &PyCThostFtdcOptionSelfCloseFieldType);
                if (!PypOptionSelfClose) goto cleanup;
                PypOptionSelfClose_callarg = (PyObject *)PypOptionSelfClose;
                if (pOptionSelfClose) { PypOptionSelfClose->data = *pOptionSelfClose; } else { PypOptionSelfClose_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypOptionSelfClose_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOptionSelfClose"), const_cast<char *>("OOOO"), PypOptionSelfClose_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOptionSelfClose);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询投资单元响应
			virtual void OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestUnitField *PypInvestUnit = NULL; 
			    PyObject *PypInvestUnit_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestUnit = PyObject_New(PyCThostFtdcInvestUnitField, &PyCThostFtdcInvestUnitFieldType);
                if (!PypInvestUnit) goto cleanup;
                PypInvestUnit_callarg = (PyObject *)PypInvestUnit;
                if (pInvestUnit) { PypInvestUnit->data = *pInvestUnit; } else { PypInvestUnit_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestUnit_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestUnit"), const_cast<char *>("OOOO"), PypInvestUnit_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestUnit);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询组合合约安全系数响应
			virtual void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCombInstrumentGuardField *PypCombInstrumentGuard = NULL; 
			    PyObject *PypCombInstrumentGuard_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypCombInstrumentGuard = PyObject_New(PyCThostFtdcCombInstrumentGuardField, &PyCThostFtdcCombInstrumentGuardFieldType);
                if (!PypCombInstrumentGuard) goto cleanup;
                PypCombInstrumentGuard_callarg = (PyObject *)PypCombInstrumentGuard;
                if (pCombInstrumentGuard) { PypCombInstrumentGuard->data = *pCombInstrumentGuard; } else { PypCombInstrumentGuard_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypCombInstrumentGuard_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombInstrumentGuard"), const_cast<char *>("OOOO"), PypCombInstrumentGuard_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCombInstrumentGuard);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询申请组合响应
			virtual void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCombActionField *PypCombAction = NULL; 
			    PyObject *PypCombAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypCombAction = PyObject_New(PyCThostFtdcCombActionField, &PyCThostFtdcCombActionFieldType);
                if (!PypCombAction) goto cleanup;
                PypCombAction_callarg = (PyObject *)PypCombAction;
                if (pCombAction) { PypCombAction->data = *pCombAction; } else { PypCombAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypCombAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombAction"), const_cast<char *>("OOOO"), PypCombAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCombAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询转帐流水响应
			virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTransferSerialField *PypTransferSerial = NULL; 
			    PyObject *PypTransferSerial_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTransferSerial = PyObject_New(PyCThostFtdcTransferSerialField, &PyCThostFtdcTransferSerialFieldType);
                if (!PypTransferSerial) goto cleanup;
                PypTransferSerial_callarg = (PyObject *)PypTransferSerial;
                if (pTransferSerial) { PypTransferSerial->data = *pTransferSerial; } else { PypTransferSerial_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTransferSerial_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTransferSerial"), const_cast<char *>("OOOO"), PypTransferSerial_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTransferSerial);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询银期签约关系响应
			virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcAccountregisterField *PypAccountregister = NULL; 
			    PyObject *PypAccountregister_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypAccountregister = PyObject_New(PyCThostFtdcAccountregisterField, &PyCThostFtdcAccountregisterFieldType);
                if (!PypAccountregister) goto cleanup;
                PypAccountregister_callarg = (PyObject *)PypAccountregister;
                if (pAccountregister) { PypAccountregister->data = *pAccountregister; } else { PypAccountregister_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypAccountregister_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryAccountregister"), const_cast<char *>("OOOO"), PypAccountregister_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypAccountregister);
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

            ///报单通知
			virtual void OnRtnOrder(CThostFtdcOrderField *pOrder) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOrderField *PypOrder = NULL; 
			    PyObject *PypOrder_callarg = NULL; 
			    PyObject *result = NULL; 

                PypOrder = PyObject_New(PyCThostFtdcOrderField, &PyCThostFtdcOrderFieldType);
                if (!PypOrder) goto cleanup;
                PypOrder_callarg = (PyObject *)PypOrder;
                if (pOrder) { PypOrder->data = *pOrder; } else { PypOrder_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypOrder_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOrder"), const_cast<char *>("O"), PypOrder_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOrder);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///成交通知
			virtual void OnRtnTrade(CThostFtdcTradeField *pTrade) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTradeField *PypTrade = NULL; 
			    PyObject *PypTrade_callarg = NULL; 
			    PyObject *result = NULL; 

                PypTrade = PyObject_New(PyCThostFtdcTradeField, &PyCThostFtdcTradeFieldType);
                if (!PypTrade) goto cleanup;
                PypTrade_callarg = (PyObject *)PypTrade;
                if (pTrade) { PypTrade->data = *pTrade; } else { PypTrade_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypTrade_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnTrade"), const_cast<char *>("O"), PypTrade_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTrade);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报单录入错误回报
			virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOrderField *PypInputOrder = NULL; 
			    PyObject *PypInputOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypInputOrder = PyObject_New(PyCThostFtdcInputOrderField, &PyCThostFtdcInputOrderFieldType);
                if (!PypInputOrder) goto cleanup;
                PypInputOrder_callarg = (PyObject *)PypInputOrder;
                if (pInputOrder) { PypInputOrder->data = *pInputOrder; } else { PypInputOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypInputOrder_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOrderInsert"), const_cast<char *>("OO"), PypInputOrder_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOrder);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报单操作错误回报
			virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOrderActionField *PypOrderAction = NULL; 
			    PyObject *PypOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypOrderAction = PyObject_New(PyCThostFtdcOrderActionField, &PyCThostFtdcOrderActionFieldType);
                if (!PypOrderAction) goto cleanup;
                PypOrderAction_callarg = (PyObject *)PypOrderAction;
                if (pOrderAction) { PypOrderAction->data = *pOrderAction; } else { PypOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypOrderAction_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOrderAction"), const_cast<char *>("OO"), PypOrderAction_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOrderAction);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///合约交易状态通知
			virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInstrumentStatusField *PypInstrumentStatus = NULL; 
			    PyObject *PypInstrumentStatus_callarg = NULL; 
			    PyObject *result = NULL; 

                PypInstrumentStatus = PyObject_New(PyCThostFtdcInstrumentStatusField, &PyCThostFtdcInstrumentStatusFieldType);
                if (!PypInstrumentStatus) goto cleanup;
                PypInstrumentStatus_callarg = (PyObject *)PypInstrumentStatus;
                if (pInstrumentStatus) { PypInstrumentStatus->data = *pInstrumentStatus; } else { PypInstrumentStatus_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypInstrumentStatus_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnInstrumentStatus"), const_cast<char *>("O"), PypInstrumentStatus_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInstrumentStatus);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///交易所公告通知
			virtual void OnRtnBulletin(CThostFtdcBulletinField *pBulletin) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcBulletinField *PypBulletin = NULL; 
			    PyObject *PypBulletin_callarg = NULL; 
			    PyObject *result = NULL; 

                PypBulletin = PyObject_New(PyCThostFtdcBulletinField, &PyCThostFtdcBulletinFieldType);
                if (!PypBulletin) goto cleanup;
                PypBulletin_callarg = (PyObject *)PypBulletin;
                if (pBulletin) { PypBulletin->data = *pBulletin; } else { PypBulletin_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypBulletin_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnBulletin"), const_cast<char *>("O"), PypBulletin_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypBulletin);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///交易通知
			virtual void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTradingNoticeInfoField *PypTradingNoticeInfo = NULL; 
			    PyObject *PypTradingNoticeInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypTradingNoticeInfo = PyObject_New(PyCThostFtdcTradingNoticeInfoField, &PyCThostFtdcTradingNoticeInfoFieldType);
                if (!PypTradingNoticeInfo) goto cleanup;
                PypTradingNoticeInfo_callarg = (PyObject *)PypTradingNoticeInfo;
                if (pTradingNoticeInfo) { PypTradingNoticeInfo->data = *pTradingNoticeInfo; } else { PypTradingNoticeInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypTradingNoticeInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnTradingNotice"), const_cast<char *>("O"), PypTradingNoticeInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTradingNoticeInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///提示条件单校验错误
			virtual void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcErrorConditionalOrderField *PypErrorConditionalOrder = NULL; 
			    PyObject *PypErrorConditionalOrder_callarg = NULL; 
			    PyObject *result = NULL; 

                PypErrorConditionalOrder = PyObject_New(PyCThostFtdcErrorConditionalOrderField, &PyCThostFtdcErrorConditionalOrderFieldType);
                if (!PypErrorConditionalOrder) goto cleanup;
                PypErrorConditionalOrder_callarg = (PyObject *)PypErrorConditionalOrder;
                if (pErrorConditionalOrder) { PypErrorConditionalOrder->data = *pErrorConditionalOrder; } else { PypErrorConditionalOrder_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypErrorConditionalOrder_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnErrorConditionalOrder"), const_cast<char *>("O"), PypErrorConditionalOrder_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypErrorConditionalOrder);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///执行宣告通知
			virtual void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcExecOrderField *PypExecOrder = NULL; 
			    PyObject *PypExecOrder_callarg = NULL; 
			    PyObject *result = NULL; 

                PypExecOrder = PyObject_New(PyCThostFtdcExecOrderField, &PyCThostFtdcExecOrderFieldType);
                if (!PypExecOrder) goto cleanup;
                PypExecOrder_callarg = (PyObject *)PypExecOrder;
                if (pExecOrder) { PypExecOrder->data = *pExecOrder; } else { PypExecOrder_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypExecOrder_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnExecOrder"), const_cast<char *>("O"), PypExecOrder_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypExecOrder);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///执行宣告录入错误回报
			virtual void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputExecOrderField *PypInputExecOrder = NULL; 
			    PyObject *PypInputExecOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypInputExecOrder = PyObject_New(PyCThostFtdcInputExecOrderField, &PyCThostFtdcInputExecOrderFieldType);
                if (!PypInputExecOrder) goto cleanup;
                PypInputExecOrder_callarg = (PyObject *)PypInputExecOrder;
                if (pInputExecOrder) { PypInputExecOrder->data = *pInputExecOrder; } else { PypInputExecOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypInputExecOrder_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnExecOrderInsert"), const_cast<char *>("OO"), PypInputExecOrder_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputExecOrder);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///执行宣告操作错误回报
			virtual void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcExecOrderActionField *PypExecOrderAction = NULL; 
			    PyObject *PypExecOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypExecOrderAction = PyObject_New(PyCThostFtdcExecOrderActionField, &PyCThostFtdcExecOrderActionFieldType);
                if (!PypExecOrderAction) goto cleanup;
                PypExecOrderAction_callarg = (PyObject *)PypExecOrderAction;
                if (pExecOrderAction) { PypExecOrderAction->data = *pExecOrderAction; } else { PypExecOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypExecOrderAction_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnExecOrderAction"), const_cast<char *>("OO"), PypExecOrderAction_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypExecOrderAction);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///询价录入错误回报
			virtual void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputForQuoteField *PypInputForQuote = NULL; 
			    PyObject *PypInputForQuote_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypInputForQuote = PyObject_New(PyCThostFtdcInputForQuoteField, &PyCThostFtdcInputForQuoteFieldType);
                if (!PypInputForQuote) goto cleanup;
                PypInputForQuote_callarg = (PyObject *)PypInputForQuote;
                if (pInputForQuote) { PypInputForQuote->data = *pInputForQuote; } else { PypInputForQuote_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypInputForQuote_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnForQuoteInsert"), const_cast<char *>("OO"), PypInputForQuote_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputForQuote);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报价通知
			virtual void OnRtnQuote(CThostFtdcQuoteField *pQuote) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcQuoteField *PypQuote = NULL; 
			    PyObject *PypQuote_callarg = NULL; 
			    PyObject *result = NULL; 

                PypQuote = PyObject_New(PyCThostFtdcQuoteField, &PyCThostFtdcQuoteFieldType);
                if (!PypQuote) goto cleanup;
                PypQuote_callarg = (PyObject *)PypQuote;
                if (pQuote) { PypQuote->data = *pQuote; } else { PypQuote_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypQuote_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnQuote"), const_cast<char *>("O"), PypQuote_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypQuote);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报价录入错误回报
			virtual void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputQuoteField *PypInputQuote = NULL; 
			    PyObject *PypInputQuote_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypInputQuote = PyObject_New(PyCThostFtdcInputQuoteField, &PyCThostFtdcInputQuoteFieldType);
                if (!PypInputQuote) goto cleanup;
                PypInputQuote_callarg = (PyObject *)PypInputQuote;
                if (pInputQuote) { PypInputQuote->data = *pInputQuote; } else { PypInputQuote_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypInputQuote_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQuoteInsert"), const_cast<char *>("OO"), PypInputQuote_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputQuote);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///报价操作错误回报
			virtual void OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcQuoteActionField *PypQuoteAction = NULL; 
			    PyObject *PypQuoteAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypQuoteAction = PyObject_New(PyCThostFtdcQuoteActionField, &PyCThostFtdcQuoteActionFieldType);
                if (!PypQuoteAction) goto cleanup;
                PypQuoteAction_callarg = (PyObject *)PypQuoteAction;
                if (pQuoteAction) { PypQuoteAction->data = *pQuoteAction; } else { PypQuoteAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypQuoteAction_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQuoteAction"), const_cast<char *>("OO"), PypQuoteAction_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypQuoteAction);
                    Py_XDECREF(PypRspInfo);
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

            ///保证金监控中心用户令牌
			virtual void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCFMMCTradingAccountTokenField *PypCFMMCTradingAccountToken = NULL; 
			    PyObject *PypCFMMCTradingAccountToken_callarg = NULL; 
			    PyObject *result = NULL; 

                PypCFMMCTradingAccountToken = PyObject_New(PyCThostFtdcCFMMCTradingAccountTokenField, &PyCThostFtdcCFMMCTradingAccountTokenFieldType);
                if (!PypCFMMCTradingAccountToken) goto cleanup;
                PypCFMMCTradingAccountToken_callarg = (PyObject *)PypCFMMCTradingAccountToken;
                if (pCFMMCTradingAccountToken) { PypCFMMCTradingAccountToken->data = *pCFMMCTradingAccountToken; } else { PypCFMMCTradingAccountToken_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypCFMMCTradingAccountToken_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCFMMCTradingAccountToken"), const_cast<char *>("O"), PypCFMMCTradingAccountToken_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCFMMCTradingAccountToken);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///批量报单操作错误回报
			virtual void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcBatchOrderActionField *PypBatchOrderAction = NULL; 
			    PyObject *PypBatchOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypBatchOrderAction = PyObject_New(PyCThostFtdcBatchOrderActionField, &PyCThostFtdcBatchOrderActionFieldType);
                if (!PypBatchOrderAction) goto cleanup;
                PypBatchOrderAction_callarg = (PyObject *)PypBatchOrderAction;
                if (pBatchOrderAction) { PypBatchOrderAction->data = *pBatchOrderAction; } else { PypBatchOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypBatchOrderAction_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnBatchOrderAction"), const_cast<char *>("OO"), PypBatchOrderAction_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypBatchOrderAction);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期权自对冲通知
			virtual void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOptionSelfCloseField *PypOptionSelfClose = NULL; 
			    PyObject *PypOptionSelfClose_callarg = NULL; 
			    PyObject *result = NULL; 

                PypOptionSelfClose = PyObject_New(PyCThostFtdcOptionSelfCloseField, &PyCThostFtdcOptionSelfCloseFieldType);
                if (!PypOptionSelfClose) goto cleanup;
                PypOptionSelfClose_callarg = (PyObject *)PypOptionSelfClose;
                if (pOptionSelfClose) { PypOptionSelfClose->data = *pOptionSelfClose; } else { PypOptionSelfClose_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypOptionSelfClose_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOptionSelfClose"), const_cast<char *>("O"), PypOptionSelfClose_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOptionSelfClose);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期权自对冲录入错误回报
			virtual void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOptionSelfCloseField *PypInputOptionSelfClose = NULL; 
			    PyObject *PypInputOptionSelfClose_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypInputOptionSelfClose = PyObject_New(PyCThostFtdcInputOptionSelfCloseField, &PyCThostFtdcInputOptionSelfCloseFieldType);
                if (!PypInputOptionSelfClose) goto cleanup;
                PypInputOptionSelfClose_callarg = (PyObject *)PypInputOptionSelfClose;
                if (pInputOptionSelfClose) { PypInputOptionSelfClose->data = *pInputOptionSelfClose; } else { PypInputOptionSelfClose_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypInputOptionSelfClose_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOptionSelfCloseInsert"), const_cast<char *>("OO"), PypInputOptionSelfClose_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOptionSelfClose);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期权自对冲操作错误回报
			virtual void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOptionSelfCloseActionField *PypOptionSelfCloseAction = NULL; 
			    PyObject *PypOptionSelfCloseAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypOptionSelfCloseAction = PyObject_New(PyCThostFtdcOptionSelfCloseActionField, &PyCThostFtdcOptionSelfCloseActionFieldType);
                if (!PypOptionSelfCloseAction) goto cleanup;
                PypOptionSelfCloseAction_callarg = (PyObject *)PypOptionSelfCloseAction;
                if (pOptionSelfCloseAction) { PypOptionSelfCloseAction->data = *pOptionSelfCloseAction; } else { PypOptionSelfCloseAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypOptionSelfCloseAction_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOptionSelfCloseAction"), const_cast<char *>("OO"), PypOptionSelfCloseAction_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOptionSelfCloseAction);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///申请组合通知
			virtual void OnRtnCombAction(CThostFtdcCombActionField *pCombAction) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCombActionField *PypCombAction = NULL; 
			    PyObject *PypCombAction_callarg = NULL; 
			    PyObject *result = NULL; 

                PypCombAction = PyObject_New(PyCThostFtdcCombActionField, &PyCThostFtdcCombActionFieldType);
                if (!PypCombAction) goto cleanup;
                PypCombAction_callarg = (PyObject *)PypCombAction;
                if (pCombAction) { PypCombAction->data = *pCombAction; } else { PypCombAction_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypCombAction_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCombAction"), const_cast<char *>("O"), PypCombAction_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCombAction);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///申请组合录入错误回报
			virtual void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputCombActionField *PypInputCombAction = NULL; 
			    PyObject *PypInputCombAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypInputCombAction = PyObject_New(PyCThostFtdcInputCombActionField, &PyCThostFtdcInputCombActionFieldType);
                if (!PypInputCombAction) goto cleanup;
                PypInputCombAction_callarg = (PyObject *)PypInputCombAction;
                if (pInputCombAction) { PypInputCombAction->data = *pInputCombAction; } else { PypInputCombAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypInputCombAction_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnCombActionInsert"), const_cast<char *>("OO"), PypInputCombAction_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputCombAction);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询签约银行响应
			virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcContractBankField *PypContractBank = NULL; 
			    PyObject *PypContractBank_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypContractBank = PyObject_New(PyCThostFtdcContractBankField, &PyCThostFtdcContractBankFieldType);
                if (!PypContractBank) goto cleanup;
                PypContractBank_callarg = (PyObject *)PypContractBank;
                if (pContractBank) { PypContractBank->data = *pContractBank; } else { PypContractBank_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypContractBank_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryContractBank"), const_cast<char *>("OOOO"), PypContractBank_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypContractBank);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询预埋单响应
			virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcParkedOrderField *PypParkedOrder = NULL; 
			    PyObject *PypParkedOrder_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypParkedOrder = PyObject_New(PyCThostFtdcParkedOrderField, &PyCThostFtdcParkedOrderFieldType);
                if (!PypParkedOrder) goto cleanup;
                PypParkedOrder_callarg = (PyObject *)PypParkedOrder;
                if (pParkedOrder) { PypParkedOrder->data = *pParkedOrder; } else { PypParkedOrder_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypParkedOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryParkedOrder"), const_cast<char *>("OOOO"), PypParkedOrder_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypParkedOrder);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询预埋撤单响应
			virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcParkedOrderActionField *PypParkedOrderAction = NULL; 
			    PyObject *PypParkedOrderAction_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypParkedOrderAction = PyObject_New(PyCThostFtdcParkedOrderActionField, &PyCThostFtdcParkedOrderActionFieldType);
                if (!PypParkedOrderAction) goto cleanup;
                PypParkedOrderAction_callarg = (PyObject *)PypParkedOrderAction;
                if (pParkedOrderAction) { PypParkedOrderAction->data = *pParkedOrderAction; } else { PypParkedOrderAction_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypParkedOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryParkedOrderAction"), const_cast<char *>("OOOO"), PypParkedOrderAction_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypParkedOrderAction);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询交易通知响应
			virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcTradingNoticeField *PypTradingNotice = NULL; 
			    PyObject *PypTradingNotice_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypTradingNotice = PyObject_New(PyCThostFtdcTradingNoticeField, &PyCThostFtdcTradingNoticeFieldType);
                if (!PypTradingNotice) goto cleanup;
                PypTradingNotice_callarg = (PyObject *)PypTradingNotice;
                if (pTradingNotice) { PypTradingNotice->data = *pTradingNotice; } else { PypTradingNotice_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypTradingNotice_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingNotice"), const_cast<char *>("OOOO"), PypTradingNotice_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypTradingNotice);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询经纪公司交易参数响应
			virtual void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcBrokerTradingParamsField *PypBrokerTradingParams = NULL; 
			    PyObject *PypBrokerTradingParams_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypBrokerTradingParams = PyObject_New(PyCThostFtdcBrokerTradingParamsField, &PyCThostFtdcBrokerTradingParamsFieldType);
                if (!PypBrokerTradingParams) goto cleanup;
                PypBrokerTradingParams_callarg = (PyObject *)PypBrokerTradingParams;
                if (pBrokerTradingParams) { PypBrokerTradingParams->data = *pBrokerTradingParams; } else { PypBrokerTradingParams_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypBrokerTradingParams_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryBrokerTradingParams"), const_cast<char *>("OOOO"), PypBrokerTradingParams_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypBrokerTradingParams);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询经纪公司交易算法响应
			virtual void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcBrokerTradingAlgosField *PypBrokerTradingAlgos = NULL; 
			    PyObject *PypBrokerTradingAlgos_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypBrokerTradingAlgos = PyObject_New(PyCThostFtdcBrokerTradingAlgosField, &PyCThostFtdcBrokerTradingAlgosFieldType);
                if (!PypBrokerTradingAlgos) goto cleanup;
                PypBrokerTradingAlgos_callarg = (PyObject *)PypBrokerTradingAlgos;
                if (pBrokerTradingAlgos) { PypBrokerTradingAlgos->data = *pBrokerTradingAlgos; } else { PypBrokerTradingAlgos_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypBrokerTradingAlgos_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryBrokerTradingAlgos"), const_cast<char *>("OOOO"), PypBrokerTradingAlgos_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypBrokerTradingAlgos);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询监控中心用户令牌
			virtual void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcQueryCFMMCTradingAccountTokenField *PypQueryCFMMCTradingAccountToken = NULL; 
			    PyObject *PypQueryCFMMCTradingAccountToken_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypQueryCFMMCTradingAccountToken = PyObject_New(PyCThostFtdcQueryCFMMCTradingAccountTokenField, &PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType);
                if (!PypQueryCFMMCTradingAccountToken) goto cleanup;
                PypQueryCFMMCTradingAccountToken_callarg = (PyObject *)PypQueryCFMMCTradingAccountToken;
                if (pQueryCFMMCTradingAccountToken) { PypQueryCFMMCTradingAccountToken->data = *pQueryCFMMCTradingAccountToken; } else { PypQueryCFMMCTradingAccountToken_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypQueryCFMMCTradingAccountToken_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQueryCFMMCTradingAccountToken"), const_cast<char *>("OOOO"), PypQueryCFMMCTradingAccountToken_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypQueryCFMMCTradingAccountToken);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///银行发起银行资金转期货通知
			virtual void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspTransferField *PypRspTransfer = NULL; 
			    PyObject *PypRspTransfer_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspTransfer = PyObject_New(PyCThostFtdcRspTransferField, &PyCThostFtdcRspTransferFieldType);
                if (!PypRspTransfer) goto cleanup;
                PypRspTransfer_callarg = (PyObject *)PypRspTransfer;
                if (pRspTransfer) { PypRspTransfer->data = *pRspTransfer; } else { PypRspTransfer_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspTransfer_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromBankToFutureByBank"), const_cast<char *>("O"), PypRspTransfer_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspTransfer);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///银行发起期货资金转银行通知
			virtual void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspTransferField *PypRspTransfer = NULL; 
			    PyObject *PypRspTransfer_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspTransfer = PyObject_New(PyCThostFtdcRspTransferField, &PyCThostFtdcRspTransferFieldType);
                if (!PypRspTransfer) goto cleanup;
                PypRspTransfer_callarg = (PyObject *)PypRspTransfer;
                if (pRspTransfer) { PypRspTransfer->data = *pRspTransfer; } else { PypRspTransfer_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspTransfer_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromFutureToBankByBank"), const_cast<char *>("O"), PypRspTransfer_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspTransfer);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///银行发起冲正银行转期货通知
			virtual void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspRepealField *PypRspRepeal = NULL; 
			    PyObject *PypRspRepeal_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspRepeal = PyObject_New(PyCThostFtdcRspRepealField, &PyCThostFtdcRspRepealFieldType);
                if (!PypRspRepeal) goto cleanup;
                PypRspRepeal_callarg = (PyObject *)PypRspRepeal;
                if (pRspRepeal) { PypRspRepeal->data = *pRspRepeal; } else { PypRspRepeal_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspRepeal_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByBank"), const_cast<char *>("O"), PypRspRepeal_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspRepeal);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///银行发起冲正期货转银行通知
			virtual void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspRepealField *PypRspRepeal = NULL; 
			    PyObject *PypRspRepeal_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspRepeal = PyObject_New(PyCThostFtdcRspRepealField, &PyCThostFtdcRspRepealFieldType);
                if (!PypRspRepeal) goto cleanup;
                PypRspRepeal_callarg = (PyObject *)PypRspRepeal;
                if (pRspRepeal) { PypRspRepeal->data = *pRspRepeal; } else { PypRspRepeal_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspRepeal_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByBank"), const_cast<char *>("O"), PypRspRepeal_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspRepeal);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起银行资金转期货通知
			virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspTransferField *PypRspTransfer = NULL; 
			    PyObject *PypRspTransfer_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspTransfer = PyObject_New(PyCThostFtdcRspTransferField, &PyCThostFtdcRspTransferFieldType);
                if (!PypRspTransfer) goto cleanup;
                PypRspTransfer_callarg = (PyObject *)PypRspTransfer;
                if (pRspTransfer) { PypRspTransfer->data = *pRspTransfer; } else { PypRspTransfer_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspTransfer_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromBankToFutureByFuture"), const_cast<char *>("O"), PypRspTransfer_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspTransfer);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起期货资金转银行通知
			virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspTransferField *PypRspTransfer = NULL; 
			    PyObject *PypRspTransfer_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspTransfer = PyObject_New(PyCThostFtdcRspTransferField, &PyCThostFtdcRspTransferFieldType);
                if (!PypRspTransfer) goto cleanup;
                PypRspTransfer_callarg = (PyObject *)PypRspTransfer;
                if (pRspTransfer) { PypRspTransfer->data = *pRspTransfer; } else { PypRspTransfer_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspTransfer_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromFutureToBankByFuture"), const_cast<char *>("O"), PypRspTransfer_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspTransfer);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
			virtual void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspRepealField *PypRspRepeal = NULL; 
			    PyObject *PypRspRepeal_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspRepeal = PyObject_New(PyCThostFtdcRspRepealField, &PyCThostFtdcRspRepealFieldType);
                if (!PypRspRepeal) goto cleanup;
                PypRspRepeal_callarg = (PyObject *)PypRspRepeal;
                if (pRspRepeal) { PypRspRepeal->data = *pRspRepeal; } else { PypRspRepeal_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspRepeal_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByFutureManual"), const_cast<char *>("O"), PypRspRepeal_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspRepeal);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
			virtual void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspRepealField *PypRspRepeal = NULL; 
			    PyObject *PypRspRepeal_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspRepeal = PyObject_New(PyCThostFtdcRspRepealField, &PyCThostFtdcRspRepealFieldType);
                if (!PypRspRepeal) goto cleanup;
                PypRspRepeal_callarg = (PyObject *)PypRspRepeal;
                if (pRspRepeal) { PypRspRepeal->data = *pRspRepeal; } else { PypRspRepeal_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspRepeal_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByFutureManual"), const_cast<char *>("O"), PypRspRepeal_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspRepeal);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起查询银行余额通知
			virtual void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcNotifyQueryAccountField *PypNotifyQueryAccount = NULL; 
			    PyObject *PypNotifyQueryAccount_callarg = NULL; 
			    PyObject *result = NULL; 

                PypNotifyQueryAccount = PyObject_New(PyCThostFtdcNotifyQueryAccountField, &PyCThostFtdcNotifyQueryAccountFieldType);
                if (!PypNotifyQueryAccount) goto cleanup;
                PypNotifyQueryAccount_callarg = (PyObject *)PypNotifyQueryAccount;
                if (pNotifyQueryAccount) { PypNotifyQueryAccount->data = *pNotifyQueryAccount; } else { PypNotifyQueryAccount_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypNotifyQueryAccount_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnQueryBankBalanceByFuture"), const_cast<char *>("O"), PypNotifyQueryAccount_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypNotifyQueryAccount);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起银行资金转期货错误回报
			virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcReqTransferField *PypReqTransfer = NULL; 
			    PyObject *PypReqTransfer_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypReqTransfer = PyObject_New(PyCThostFtdcReqTransferField, &PyCThostFtdcReqTransferFieldType);
                if (!PypReqTransfer) goto cleanup;
                PypReqTransfer_callarg = (PyObject *)PypReqTransfer;
                if (pReqTransfer) { PypReqTransfer->data = *pReqTransfer; } else { PypReqTransfer_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypReqTransfer_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnBankToFutureByFuture"), const_cast<char *>("OO"), PypReqTransfer_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypReqTransfer);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起期货资金转银行错误回报
			virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcReqTransferField *PypReqTransfer = NULL; 
			    PyObject *PypReqTransfer_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypReqTransfer = PyObject_New(PyCThostFtdcReqTransferField, &PyCThostFtdcReqTransferFieldType);
                if (!PypReqTransfer) goto cleanup;
                PypReqTransfer_callarg = (PyObject *)PypReqTransfer;
                if (pReqTransfer) { PypReqTransfer->data = *pReqTransfer; } else { PypReqTransfer_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypReqTransfer_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnFutureToBankByFuture"), const_cast<char *>("OO"), PypReqTransfer_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypReqTransfer);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///系统运行时期货端手工发起冲正银行转期货错误回报
			virtual void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcReqRepealField *PypReqRepeal = NULL; 
			    PyObject *PypReqRepeal_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypReqRepeal = PyObject_New(PyCThostFtdcReqRepealField, &PyCThostFtdcReqRepealFieldType);
                if (!PypReqRepeal) goto cleanup;
                PypReqRepeal_callarg = (PyObject *)PypReqRepeal;
                if (pReqRepeal) { PypReqRepeal->data = *pReqRepeal; } else { PypReqRepeal_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypReqRepeal_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnRepealBankToFutureByFutureManual"), const_cast<char *>("OO"), PypReqRepeal_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypReqRepeal);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///系统运行时期货端手工发起冲正期货转银行错误回报
			virtual void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcReqRepealField *PypReqRepeal = NULL; 
			    PyObject *PypReqRepeal_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypReqRepeal = PyObject_New(PyCThostFtdcReqRepealField, &PyCThostFtdcReqRepealFieldType);
                if (!PypReqRepeal) goto cleanup;
                PypReqRepeal_callarg = (PyObject *)PypReqRepeal;
                if (pReqRepeal) { PypReqRepeal->data = *pReqRepeal; } else { PypReqRepeal_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypReqRepeal_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnRepealFutureToBankByFutureManual"), const_cast<char *>("OO"), PypReqRepeal_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypReqRepeal);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起查询银行余额错误回报
			virtual void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcReqQueryAccountField *PypReqQueryAccount = NULL; 
			    PyObject *PypReqQueryAccount_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypReqQueryAccount = PyObject_New(PyCThostFtdcReqQueryAccountField, &PyCThostFtdcReqQueryAccountFieldType);
                if (!PypReqQueryAccount) goto cleanup;
                PypReqQueryAccount_callarg = (PyObject *)PypReqQueryAccount;
                if (pReqQueryAccount) { PypReqQueryAccount->data = *pReqQueryAccount; } else { PypReqQueryAccount_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypReqQueryAccount_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQueryBankBalanceByFuture"), const_cast<char *>("OO"), PypReqQueryAccount_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypReqQueryAccount);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
			virtual void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspRepealField *PypRspRepeal = NULL; 
			    PyObject *PypRspRepeal_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspRepeal = PyObject_New(PyCThostFtdcRspRepealField, &PyCThostFtdcRspRepealFieldType);
                if (!PypRspRepeal) goto cleanup;
                PypRspRepeal_callarg = (PyObject *)PypRspRepeal;
                if (pRspRepeal) { PypRspRepeal->data = *pRspRepeal; } else { PypRspRepeal_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspRepeal_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByFuture"), const_cast<char *>("O"), PypRspRepeal_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspRepeal);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
			virtual void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRspRepealField *PypRspRepeal = NULL; 
			    PyObject *PypRspRepeal_callarg = NULL; 
			    PyObject *result = NULL; 

                PypRspRepeal = PyObject_New(PyCThostFtdcRspRepealField, &PyCThostFtdcRspRepealFieldType);
                if (!PypRspRepeal) goto cleanup;
                PypRspRepeal_callarg = (PyObject *)PypRspRepeal;
                if (pRspRepeal) { PypRspRepeal->data = *pRspRepeal; } else { PypRspRepeal_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypRspRepeal_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByFuture"), const_cast<char *>("O"), PypRspRepeal_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRspRepeal);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起银行资金转期货应答
			virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcReqTransferField *PypReqTransfer = NULL; 
			    PyObject *PypReqTransfer_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypReqTransfer = PyObject_New(PyCThostFtdcReqTransferField, &PyCThostFtdcReqTransferFieldType);
                if (!PypReqTransfer) goto cleanup;
                PypReqTransfer_callarg = (PyObject *)PypReqTransfer;
                if (pReqTransfer) { PypReqTransfer->data = *pReqTransfer; } else { PypReqTransfer_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypReqTransfer_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspFromBankToFutureByFuture"), const_cast<char *>("OOOO"), PypReqTransfer_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypReqTransfer);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起期货资金转银行应答
			virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcReqTransferField *PypReqTransfer = NULL; 
			    PyObject *PypReqTransfer_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypReqTransfer = PyObject_New(PyCThostFtdcReqTransferField, &PyCThostFtdcReqTransferFieldType);
                if (!PypReqTransfer) goto cleanup;
                PypReqTransfer_callarg = (PyObject *)PypReqTransfer;
                if (pReqTransfer) { PypReqTransfer->data = *pReqTransfer; } else { PypReqTransfer_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypReqTransfer_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspFromFutureToBankByFuture"), const_cast<char *>("OOOO"), PypReqTransfer_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypReqTransfer);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///期货发起查询银行余额应答
			virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcReqQueryAccountField *PypReqQueryAccount = NULL; 
			    PyObject *PypReqQueryAccount_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypReqQueryAccount = PyObject_New(PyCThostFtdcReqQueryAccountField, &PyCThostFtdcReqQueryAccountFieldType);
                if (!PypReqQueryAccount) goto cleanup;
                PypReqQueryAccount_callarg = (PyObject *)PypReqQueryAccount;
                if (pReqQueryAccount) { PypReqQueryAccount->data = *pReqQueryAccount; } else { PypReqQueryAccount_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypReqQueryAccount_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQueryBankAccountMoneyByFuture"), const_cast<char *>("OOOO"), PypReqQueryAccount_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypReqQueryAccount);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///银行发起银期开户通知
			virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOpenAccountField *PypOpenAccount = NULL; 
			    PyObject *PypOpenAccount_callarg = NULL; 
			    PyObject *result = NULL; 

                PypOpenAccount = PyObject_New(PyCThostFtdcOpenAccountField, &PyCThostFtdcOpenAccountFieldType);
                if (!PypOpenAccount) goto cleanup;
                PypOpenAccount_callarg = (PyObject *)PypOpenAccount;
                if (pOpenAccount) { PypOpenAccount->data = *pOpenAccount; } else { PypOpenAccount_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypOpenAccount_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOpenAccountByBank"), const_cast<char *>("O"), PypOpenAccount_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOpenAccount);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///银行发起银期销户通知
			virtual void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCancelAccountField *PypCancelAccount = NULL; 
			    PyObject *PypCancelAccount_callarg = NULL; 
			    PyObject *result = NULL; 

                PypCancelAccount = PyObject_New(PyCThostFtdcCancelAccountField, &PyCThostFtdcCancelAccountFieldType);
                if (!PypCancelAccount) goto cleanup;
                PypCancelAccount_callarg = (PyObject *)PypCancelAccount;
                if (pCancelAccount) { PypCancelAccount->data = *pCancelAccount; } else { PypCancelAccount_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypCancelAccount_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCancelAccountByBank"), const_cast<char *>("O"), PypCancelAccount_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCancelAccount);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///银行发起变更银行账号通知
			virtual void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcChangeAccountField *PypChangeAccount = NULL; 
			    PyObject *PypChangeAccount_callarg = NULL; 
			    PyObject *result = NULL; 

                PypChangeAccount = PyObject_New(PyCThostFtdcChangeAccountField, &PyCThostFtdcChangeAccountFieldType);
                if (!PypChangeAccount) goto cleanup;
                PypChangeAccount_callarg = (PyObject *)PypChangeAccount;
                if (pChangeAccount) { PypChangeAccount->data = *pChangeAccount; } else { PypChangeAccount_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypChangeAccount_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnChangeAccountByBank"), const_cast<char *>("O"), PypChangeAccount_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypChangeAccount);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求查询分类合约响应
			virtual void OnRspQryClassifiedInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInstrumentField *PypInstrument = NULL; 
			    PyObject *PypInstrument_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInstrument = PyObject_New(PyCThostFtdcInstrumentField, &PyCThostFtdcInstrumentFieldType);
                if (!PypInstrument) goto cleanup;
                PypInstrument_callarg = (PyObject *)PypInstrument;
                if (pInstrument) { PypInstrument->data = *pInstrument; } else { PypInstrument_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryClassifiedInstrument"), const_cast<char *>("OOOO"), PypInstrument_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInstrument);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///请求组合优惠比例响应
			virtual void OnRspQryCombPromotionParam(CThostFtdcCombPromotionParamField *pCombPromotionParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCombPromotionParamField *PypCombPromotionParam = NULL; 
			    PyObject *PypCombPromotionParam_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypCombPromotionParam = PyObject_New(PyCThostFtdcCombPromotionParamField, &PyCThostFtdcCombPromotionParamFieldType);
                if (!PypCombPromotionParam) goto cleanup;
                PypCombPromotionParam_callarg = (PyObject *)PypCombPromotionParam;
                if (pCombPromotionParam) { PypCombPromotionParam->data = *pCombPromotionParam; } else { PypCombPromotionParam_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypCombPromotionParam_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombPromotionParam"), const_cast<char *>("OOOO"), PypCombPromotionParam_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCombPromotionParam);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者风险结算持仓查询响应
			virtual void OnRspQryRiskSettleInvstPosition(CThostFtdcRiskSettleInvstPositionField *pRiskSettleInvstPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRiskSettleInvstPositionField *PypRiskSettleInvstPosition = NULL; 
			    PyObject *PypRiskSettleInvstPosition_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRiskSettleInvstPosition = PyObject_New(PyCThostFtdcRiskSettleInvstPositionField, &PyCThostFtdcRiskSettleInvstPositionFieldType);
                if (!PypRiskSettleInvstPosition) goto cleanup;
                PypRiskSettleInvstPosition_callarg = (PyObject *)PypRiskSettleInvstPosition;
                if (pRiskSettleInvstPosition) { PypRiskSettleInvstPosition->data = *pRiskSettleInvstPosition; } else { PypRiskSettleInvstPosition_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRiskSettleInvstPosition_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRiskSettleInvstPosition"), const_cast<char *>("OOOO"), PypRiskSettleInvstPosition_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRiskSettleInvstPosition);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///风险结算产品查询响应
			virtual void OnRspQryRiskSettleProductStatus(CThostFtdcRiskSettleProductStatusField *pRiskSettleProductStatus, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRiskSettleProductStatusField *PypRiskSettleProductStatus = NULL; 
			    PyObject *PypRiskSettleProductStatus_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRiskSettleProductStatus = PyObject_New(PyCThostFtdcRiskSettleProductStatusField, &PyCThostFtdcRiskSettleProductStatusFieldType);
                if (!PypRiskSettleProductStatus) goto cleanup;
                PypRiskSettleProductStatus_callarg = (PyObject *)PypRiskSettleProductStatus;
                if (pRiskSettleProductStatus) { PypRiskSettleProductStatus->data = *pRiskSettleProductStatus; } else { PypRiskSettleProductStatus_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRiskSettleProductStatus_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRiskSettleProductStatus"), const_cast<char *>("OOOO"), PypRiskSettleProductStatus_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRiskSettleProductStatus);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///SPBM期货合约参数查询响应
			virtual void OnRspQrySPBMFutureParameter(CThostFtdcSPBMFutureParameterField *pSPBMFutureParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPBMFutureParameterField *PypSPBMFutureParameter = NULL; 
			    PyObject *PypSPBMFutureParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPBMFutureParameter = PyObject_New(PyCThostFtdcSPBMFutureParameterField, &PyCThostFtdcSPBMFutureParameterFieldType);
                if (!PypSPBMFutureParameter) goto cleanup;
                PypSPBMFutureParameter_callarg = (PyObject *)PypSPBMFutureParameter;
                if (pSPBMFutureParameter) { PypSPBMFutureParameter->data = *pSPBMFutureParameter; } else { PypSPBMFutureParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPBMFutureParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMFutureParameter"), const_cast<char *>("OOOO"), PypSPBMFutureParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPBMFutureParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///SPBM期权合约参数查询响应
			virtual void OnRspQrySPBMOptionParameter(CThostFtdcSPBMOptionParameterField *pSPBMOptionParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPBMOptionParameterField *PypSPBMOptionParameter = NULL; 
			    PyObject *PypSPBMOptionParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPBMOptionParameter = PyObject_New(PyCThostFtdcSPBMOptionParameterField, &PyCThostFtdcSPBMOptionParameterFieldType);
                if (!PypSPBMOptionParameter) goto cleanup;
                PypSPBMOptionParameter_callarg = (PyObject *)PypSPBMOptionParameter;
                if (pSPBMOptionParameter) { PypSPBMOptionParameter->data = *pSPBMOptionParameter; } else { PypSPBMOptionParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPBMOptionParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMOptionParameter"), const_cast<char *>("OOOO"), PypSPBMOptionParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPBMOptionParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///SPBM品种内对锁仓折扣参数查询响应
			virtual void OnRspQrySPBMIntraParameter(CThostFtdcSPBMIntraParameterField *pSPBMIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPBMIntraParameterField *PypSPBMIntraParameter = NULL; 
			    PyObject *PypSPBMIntraParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPBMIntraParameter = PyObject_New(PyCThostFtdcSPBMIntraParameterField, &PyCThostFtdcSPBMIntraParameterFieldType);
                if (!PypSPBMIntraParameter) goto cleanup;
                PypSPBMIntraParameter_callarg = (PyObject *)PypSPBMIntraParameter;
                if (pSPBMIntraParameter) { PypSPBMIntraParameter->data = *pSPBMIntraParameter; } else { PypSPBMIntraParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPBMIntraParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMIntraParameter"), const_cast<char *>("OOOO"), PypSPBMIntraParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPBMIntraParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///SPBM跨品种抵扣参数查询响应
			virtual void OnRspQrySPBMInterParameter(CThostFtdcSPBMInterParameterField *pSPBMInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPBMInterParameterField *PypSPBMInterParameter = NULL; 
			    PyObject *PypSPBMInterParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPBMInterParameter = PyObject_New(PyCThostFtdcSPBMInterParameterField, &PyCThostFtdcSPBMInterParameterFieldType);
                if (!PypSPBMInterParameter) goto cleanup;
                PypSPBMInterParameter_callarg = (PyObject *)PypSPBMInterParameter;
                if (pSPBMInterParameter) { PypSPBMInterParameter->data = *pSPBMInterParameter; } else { PypSPBMInterParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPBMInterParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMInterParameter"), const_cast<char *>("OOOO"), PypSPBMInterParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPBMInterParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///SPBM组合保证金套餐查询响应
			virtual void OnRspQrySPBMPortfDefinition(CThostFtdcSPBMPortfDefinitionField *pSPBMPortfDefinition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPBMPortfDefinitionField *PypSPBMPortfDefinition = NULL; 
			    PyObject *PypSPBMPortfDefinition_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPBMPortfDefinition = PyObject_New(PyCThostFtdcSPBMPortfDefinitionField, &PyCThostFtdcSPBMPortfDefinitionFieldType);
                if (!PypSPBMPortfDefinition) goto cleanup;
                PypSPBMPortfDefinition_callarg = (PyObject *)PypSPBMPortfDefinition;
                if (pSPBMPortfDefinition) { PypSPBMPortfDefinition->data = *pSPBMPortfDefinition; } else { PypSPBMPortfDefinition_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPBMPortfDefinition_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMPortfDefinition"), const_cast<char *>("OOOO"), PypSPBMPortfDefinition_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPBMPortfDefinition);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者SPBM套餐选择查询响应
			virtual void OnRspQrySPBMInvestorPortfDef(CThostFtdcSPBMInvestorPortfDefField *pSPBMInvestorPortfDef, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPBMInvestorPortfDefField *PypSPBMInvestorPortfDef = NULL; 
			    PyObject *PypSPBMInvestorPortfDef_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPBMInvestorPortfDef = PyObject_New(PyCThostFtdcSPBMInvestorPortfDefField, &PyCThostFtdcSPBMInvestorPortfDefFieldType);
                if (!PypSPBMInvestorPortfDef) goto cleanup;
                PypSPBMInvestorPortfDef_callarg = (PyObject *)PypSPBMInvestorPortfDef;
                if (pSPBMInvestorPortfDef) { PypSPBMInvestorPortfDef->data = *pSPBMInvestorPortfDef; } else { PypSPBMInvestorPortfDef_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPBMInvestorPortfDef_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMInvestorPortfDef"), const_cast<char *>("OOOO"), PypSPBMInvestorPortfDef_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPBMInvestorPortfDef);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者新型组合保证金系数查询响应
			virtual void OnRspQryInvestorPortfMarginRatio(CThostFtdcInvestorPortfMarginRatioField *pInvestorPortfMarginRatio, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorPortfMarginRatioField *PypInvestorPortfMarginRatio = NULL; 
			    PyObject *PypInvestorPortfMarginRatio_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorPortfMarginRatio = PyObject_New(PyCThostFtdcInvestorPortfMarginRatioField, &PyCThostFtdcInvestorPortfMarginRatioFieldType);
                if (!PypInvestorPortfMarginRatio) goto cleanup;
                PypInvestorPortfMarginRatio_callarg = (PyObject *)PypInvestorPortfMarginRatio;
                if (pInvestorPortfMarginRatio) { PypInvestorPortfMarginRatio->data = *pInvestorPortfMarginRatio; } else { PypInvestorPortfMarginRatio_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorPortfMarginRatio_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPortfMarginRatio"), const_cast<char *>("OOOO"), PypInvestorPortfMarginRatio_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorPortfMarginRatio);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者产品SPBM明细查询响应
			virtual void OnRspQryInvestorProdSPBMDetail(CThostFtdcInvestorProdSPBMDetailField *pInvestorProdSPBMDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorProdSPBMDetailField *PypInvestorProdSPBMDetail = NULL; 
			    PyObject *PypInvestorProdSPBMDetail_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorProdSPBMDetail = PyObject_New(PyCThostFtdcInvestorProdSPBMDetailField, &PyCThostFtdcInvestorProdSPBMDetailFieldType);
                if (!PypInvestorProdSPBMDetail) goto cleanup;
                PypInvestorProdSPBMDetail_callarg = (PyObject *)PypInvestorProdSPBMDetail;
                if (pInvestorProdSPBMDetail) { PypInvestorProdSPBMDetail->data = *pInvestorProdSPBMDetail; } else { PypInvestorProdSPBMDetail_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorProdSPBMDetail_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProdSPBMDetail"), const_cast<char *>("OOOO"), PypInvestorProdSPBMDetail_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorProdSPBMDetail);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者商品组SPMM记录查询响应
			virtual void OnRspQryInvestorCommoditySPMMMargin(CThostFtdcInvestorCommoditySPMMMarginField *pInvestorCommoditySPMMMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorCommoditySPMMMarginField *PypInvestorCommoditySPMMMargin = NULL; 
			    PyObject *PypInvestorCommoditySPMMMargin_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorCommoditySPMMMargin = PyObject_New(PyCThostFtdcInvestorCommoditySPMMMarginField, &PyCThostFtdcInvestorCommoditySPMMMarginFieldType);
                if (!PypInvestorCommoditySPMMMargin) goto cleanup;
                PypInvestorCommoditySPMMMargin_callarg = (PyObject *)PypInvestorCommoditySPMMMargin;
                if (pInvestorCommoditySPMMMargin) { PypInvestorCommoditySPMMMargin->data = *pInvestorCommoditySPMMMargin; } else { PypInvestorCommoditySPMMMargin_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorCommoditySPMMMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorCommoditySPMMMargin"), const_cast<char *>("OOOO"), PypInvestorCommoditySPMMMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorCommoditySPMMMargin);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者商品群SPMM记录查询响应
			virtual void OnRspQryInvestorCommodityGroupSPMMMargin(CThostFtdcInvestorCommodityGroupSPMMMarginField *pInvestorCommodityGroupSPMMMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorCommodityGroupSPMMMarginField *PypInvestorCommodityGroupSPMMMargin = NULL; 
			    PyObject *PypInvestorCommodityGroupSPMMMargin_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorCommodityGroupSPMMMargin = PyObject_New(PyCThostFtdcInvestorCommodityGroupSPMMMarginField, &PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType);
                if (!PypInvestorCommodityGroupSPMMMargin) goto cleanup;
                PypInvestorCommodityGroupSPMMMargin_callarg = (PyObject *)PypInvestorCommodityGroupSPMMMargin;
                if (pInvestorCommodityGroupSPMMMargin) { PypInvestorCommodityGroupSPMMMargin->data = *pInvestorCommodityGroupSPMMMargin; } else { PypInvestorCommodityGroupSPMMMargin_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorCommodityGroupSPMMMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorCommodityGroupSPMMMargin"), const_cast<char *>("OOOO"), PypInvestorCommodityGroupSPMMMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorCommodityGroupSPMMMargin);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///SPMM合约参数查询响应
			virtual void OnRspQrySPMMInstParam(CThostFtdcSPMMInstParamField *pSPMMInstParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPMMInstParamField *PypSPMMInstParam = NULL; 
			    PyObject *PypSPMMInstParam_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPMMInstParam = PyObject_New(PyCThostFtdcSPMMInstParamField, &PyCThostFtdcSPMMInstParamFieldType);
                if (!PypSPMMInstParam) goto cleanup;
                PypSPMMInstParam_callarg = (PyObject *)PypSPMMInstParam;
                if (pSPMMInstParam) { PypSPMMInstParam->data = *pSPMMInstParam; } else { PypSPMMInstParam_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPMMInstParam_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPMMInstParam"), const_cast<char *>("OOOO"), PypSPMMInstParam_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPMMInstParam);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///SPMM产品参数查询响应
			virtual void OnRspQrySPMMProductParam(CThostFtdcSPMMProductParamField *pSPMMProductParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPMMProductParamField *PypSPMMProductParam = NULL; 
			    PyObject *PypSPMMProductParam_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPMMProductParam = PyObject_New(PyCThostFtdcSPMMProductParamField, &PyCThostFtdcSPMMProductParamFieldType);
                if (!PypSPMMProductParam) goto cleanup;
                PypSPMMProductParam_callarg = (PyObject *)PypSPMMProductParam;
                if (pSPMMProductParam) { PypSPMMProductParam->data = *pSPMMProductParam; } else { PypSPMMProductParam_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPMMProductParam_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPMMProductParam"), const_cast<char *>("OOOO"), PypSPMMProductParam_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPMMProductParam);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///SPBM附加跨品种抵扣参数查询响应
			virtual void OnRspQrySPBMAddOnInterParameter(CThostFtdcSPBMAddOnInterParameterField *pSPBMAddOnInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcSPBMAddOnInterParameterField *PypSPBMAddOnInterParameter = NULL; 
			    PyObject *PypSPBMAddOnInterParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypSPBMAddOnInterParameter = PyObject_New(PyCThostFtdcSPBMAddOnInterParameterField, &PyCThostFtdcSPBMAddOnInterParameterFieldType);
                if (!PypSPBMAddOnInterParameter) goto cleanup;
                PypSPBMAddOnInterParameter_callarg = (PyObject *)PypSPBMAddOnInterParameter;
                if (pSPBMAddOnInterParameter) { PypSPBMAddOnInterParameter->data = *pSPBMAddOnInterParameter; } else { PypSPBMAddOnInterParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypSPBMAddOnInterParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMAddOnInterParameter"), const_cast<char *>("OOOO"), PypSPBMAddOnInterParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypSPBMAddOnInterParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RCAMS产品组合信息查询响应
			virtual void OnRspQryRCAMSCombProductInfo(CThostFtdcRCAMSCombProductInfoField *pRCAMSCombProductInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRCAMSCombProductInfoField *PypRCAMSCombProductInfo = NULL; 
			    PyObject *PypRCAMSCombProductInfo_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRCAMSCombProductInfo = PyObject_New(PyCThostFtdcRCAMSCombProductInfoField, &PyCThostFtdcRCAMSCombProductInfoFieldType);
                if (!PypRCAMSCombProductInfo) goto cleanup;
                PypRCAMSCombProductInfo_callarg = (PyObject *)PypRCAMSCombProductInfo;
                if (pRCAMSCombProductInfo) { PypRCAMSCombProductInfo->data = *pRCAMSCombProductInfo; } else { PypRCAMSCombProductInfo_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRCAMSCombProductInfo_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSCombProductInfo"), const_cast<char *>("OOOO"), PypRCAMSCombProductInfo_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRCAMSCombProductInfo);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RCAMS同合约风险对冲参数查询响应
			virtual void OnRspQryRCAMSInstrParameter(CThostFtdcRCAMSInstrParameterField *pRCAMSInstrParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRCAMSInstrParameterField *PypRCAMSInstrParameter = NULL; 
			    PyObject *PypRCAMSInstrParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRCAMSInstrParameter = PyObject_New(PyCThostFtdcRCAMSInstrParameterField, &PyCThostFtdcRCAMSInstrParameterFieldType);
                if (!PypRCAMSInstrParameter) goto cleanup;
                PypRCAMSInstrParameter_callarg = (PyObject *)PypRCAMSInstrParameter;
                if (pRCAMSInstrParameter) { PypRCAMSInstrParameter->data = *pRCAMSInstrParameter; } else { PypRCAMSInstrParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRCAMSInstrParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSInstrParameter"), const_cast<char *>("OOOO"), PypRCAMSInstrParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRCAMSInstrParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RCAMS品种内风险对冲参数查询响应
			virtual void OnRspQryRCAMSIntraParameter(CThostFtdcRCAMSIntraParameterField *pRCAMSIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRCAMSIntraParameterField *PypRCAMSIntraParameter = NULL; 
			    PyObject *PypRCAMSIntraParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRCAMSIntraParameter = PyObject_New(PyCThostFtdcRCAMSIntraParameterField, &PyCThostFtdcRCAMSIntraParameterFieldType);
                if (!PypRCAMSIntraParameter) goto cleanup;
                PypRCAMSIntraParameter_callarg = (PyObject *)PypRCAMSIntraParameter;
                if (pRCAMSIntraParameter) { PypRCAMSIntraParameter->data = *pRCAMSIntraParameter; } else { PypRCAMSIntraParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRCAMSIntraParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSIntraParameter"), const_cast<char *>("OOOO"), PypRCAMSIntraParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRCAMSIntraParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RCAMS跨品种风险折抵参数查询响应
			virtual void OnRspQryRCAMSInterParameter(CThostFtdcRCAMSInterParameterField *pRCAMSInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRCAMSInterParameterField *PypRCAMSInterParameter = NULL; 
			    PyObject *PypRCAMSInterParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRCAMSInterParameter = PyObject_New(PyCThostFtdcRCAMSInterParameterField, &PyCThostFtdcRCAMSInterParameterFieldType);
                if (!PypRCAMSInterParameter) goto cleanup;
                PypRCAMSInterParameter_callarg = (PyObject *)PypRCAMSInterParameter;
                if (pRCAMSInterParameter) { PypRCAMSInterParameter->data = *pRCAMSInterParameter; } else { PypRCAMSInterParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRCAMSInterParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSInterParameter"), const_cast<char *>("OOOO"), PypRCAMSInterParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRCAMSInterParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RCAMS空头期权风险调整参数查询响应
			virtual void OnRspQryRCAMSShortOptAdjustParam(CThostFtdcRCAMSShortOptAdjustParamField *pRCAMSShortOptAdjustParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRCAMSShortOptAdjustParamField *PypRCAMSShortOptAdjustParam = NULL; 
			    PyObject *PypRCAMSShortOptAdjustParam_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRCAMSShortOptAdjustParam = PyObject_New(PyCThostFtdcRCAMSShortOptAdjustParamField, &PyCThostFtdcRCAMSShortOptAdjustParamFieldType);
                if (!PypRCAMSShortOptAdjustParam) goto cleanup;
                PypRCAMSShortOptAdjustParam_callarg = (PyObject *)PypRCAMSShortOptAdjustParam;
                if (pRCAMSShortOptAdjustParam) { PypRCAMSShortOptAdjustParam->data = *pRCAMSShortOptAdjustParam; } else { PypRCAMSShortOptAdjustParam_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRCAMSShortOptAdjustParam_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSShortOptAdjustParam"), const_cast<char *>("OOOO"), PypRCAMSShortOptAdjustParam_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRCAMSShortOptAdjustParam);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RCAMS策略组合持仓查询响应
			virtual void OnRspQryRCAMSInvestorCombPosition(CThostFtdcRCAMSInvestorCombPositionField *pRCAMSInvestorCombPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRCAMSInvestorCombPositionField *PypRCAMSInvestorCombPosition = NULL; 
			    PyObject *PypRCAMSInvestorCombPosition_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRCAMSInvestorCombPosition = PyObject_New(PyCThostFtdcRCAMSInvestorCombPositionField, &PyCThostFtdcRCAMSInvestorCombPositionFieldType);
                if (!PypRCAMSInvestorCombPosition) goto cleanup;
                PypRCAMSInvestorCombPosition_callarg = (PyObject *)PypRCAMSInvestorCombPosition;
                if (pRCAMSInvestorCombPosition) { PypRCAMSInvestorCombPosition->data = *pRCAMSInvestorCombPosition; } else { PypRCAMSInvestorCombPosition_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRCAMSInvestorCombPosition_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSInvestorCombPosition"), const_cast<char *>("OOOO"), PypRCAMSInvestorCombPosition_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRCAMSInvestorCombPosition);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者品种RCAMS保证金查询响应
			virtual void OnRspQryInvestorProdRCAMSMargin(CThostFtdcInvestorProdRCAMSMarginField *pInvestorProdRCAMSMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorProdRCAMSMarginField *PypInvestorProdRCAMSMargin = NULL; 
			    PyObject *PypInvestorProdRCAMSMargin_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorProdRCAMSMargin = PyObject_New(PyCThostFtdcInvestorProdRCAMSMarginField, &PyCThostFtdcInvestorProdRCAMSMarginFieldType);
                if (!PypInvestorProdRCAMSMargin) goto cleanup;
                PypInvestorProdRCAMSMargin_callarg = (PyObject *)PypInvestorProdRCAMSMargin;
                if (pInvestorProdRCAMSMargin) { PypInvestorProdRCAMSMargin->data = *pInvestorProdRCAMSMargin; } else { PypInvestorProdRCAMSMargin_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorProdRCAMSMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProdRCAMSMargin"), const_cast<char *>("OOOO"), PypInvestorProdRCAMSMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorProdRCAMSMargin);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RULE合约保证金参数查询响应
			virtual void OnRspQryRULEInstrParameter(CThostFtdcRULEInstrParameterField *pRULEInstrParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRULEInstrParameterField *PypRULEInstrParameter = NULL; 
			    PyObject *PypRULEInstrParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRULEInstrParameter = PyObject_New(PyCThostFtdcRULEInstrParameterField, &PyCThostFtdcRULEInstrParameterFieldType);
                if (!PypRULEInstrParameter) goto cleanup;
                PypRULEInstrParameter_callarg = (PyObject *)PypRULEInstrParameter;
                if (pRULEInstrParameter) { PypRULEInstrParameter->data = *pRULEInstrParameter; } else { PypRULEInstrParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRULEInstrParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRULEInstrParameter"), const_cast<char *>("OOOO"), PypRULEInstrParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRULEInstrParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RULE品种内对锁仓折扣参数查询响应
			virtual void OnRspQryRULEIntraParameter(CThostFtdcRULEIntraParameterField *pRULEIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRULEIntraParameterField *PypRULEIntraParameter = NULL; 
			    PyObject *PypRULEIntraParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRULEIntraParameter = PyObject_New(PyCThostFtdcRULEIntraParameterField, &PyCThostFtdcRULEIntraParameterFieldType);
                if (!PypRULEIntraParameter) goto cleanup;
                PypRULEIntraParameter_callarg = (PyObject *)PypRULEIntraParameter;
                if (pRULEIntraParameter) { PypRULEIntraParameter->data = *pRULEIntraParameter; } else { PypRULEIntraParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRULEIntraParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRULEIntraParameter"), const_cast<char *>("OOOO"), PypRULEIntraParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRULEIntraParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///RULE跨品种抵扣参数查询响应
			virtual void OnRspQryRULEInterParameter(CThostFtdcRULEInterParameterField *pRULEInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcRULEInterParameterField *PypRULEInterParameter = NULL; 
			    PyObject *PypRULEInterParameter_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypRULEInterParameter = PyObject_New(PyCThostFtdcRULEInterParameterField, &PyCThostFtdcRULEInterParameterFieldType);
                if (!PypRULEInterParameter) goto cleanup;
                PypRULEInterParameter_callarg = (PyObject *)PypRULEInterParameter;
                if (pRULEInterParameter) { PypRULEInterParameter->data = *pRULEInterParameter; } else { PypRULEInterParameter_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypRULEInterParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRULEInterParameter"), const_cast<char *>("OOOO"), PypRULEInterParameter_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypRULEInterParameter);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者产品RULE保证金查询响应
			virtual void OnRspQryInvestorProdRULEMargin(CThostFtdcInvestorProdRULEMarginField *pInvestorProdRULEMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorProdRULEMarginField *PypInvestorProdRULEMargin = NULL; 
			    PyObject *PypInvestorProdRULEMargin_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorProdRULEMargin = PyObject_New(PyCThostFtdcInvestorProdRULEMarginField, &PyCThostFtdcInvestorProdRULEMarginFieldType);
                if (!PypInvestorProdRULEMargin) goto cleanup;
                PypInvestorProdRULEMargin_callarg = (PyObject *)PypInvestorProdRULEMargin;
                if (pInvestorProdRULEMargin) { PypInvestorProdRULEMargin->data = *pInvestorProdRULEMargin; } else { PypInvestorProdRULEMargin_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorProdRULEMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProdRULEMargin"), const_cast<char *>("OOOO"), PypInvestorProdRULEMargin_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorProdRULEMargin);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者新型组合保证金开关查询响应
			virtual void OnRspQryInvestorPortfSetting(CThostFtdcInvestorPortfSettingField *pInvestorPortfSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorPortfSettingField *PypInvestorPortfSetting = NULL; 
			    PyObject *PypInvestorPortfSetting_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorPortfSetting = PyObject_New(PyCThostFtdcInvestorPortfSettingField, &PyCThostFtdcInvestorPortfSettingFieldType);
                if (!PypInvestorPortfSetting) goto cleanup;
                PypInvestorPortfSetting_callarg = (PyObject *)PypInvestorPortfSetting;
                if (pInvestorPortfSetting) { PypInvestorPortfSetting->data = *pInvestorPortfSetting; } else { PypInvestorPortfSetting_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorPortfSetting_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPortfSetting"), const_cast<char *>("OOOO"), PypInvestorPortfSetting_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorPortfSetting);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者申报费阶梯收取记录查询响应
			virtual void OnRspQryInvestorInfoCommRec(CThostFtdcInvestorInfoCommRecField *pInvestorInfoCommRec, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInvestorInfoCommRecField *PypInvestorInfoCommRec = NULL; 
			    PyObject *PypInvestorInfoCommRec_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInvestorInfoCommRec = PyObject_New(PyCThostFtdcInvestorInfoCommRecField, &PyCThostFtdcInvestorInfoCommRecFieldType);
                if (!PypInvestorInfoCommRec) goto cleanup;
                PypInvestorInfoCommRec_callarg = (PyObject *)PypInvestorInfoCommRec;
                if (pInvestorInfoCommRec) { PypInvestorInfoCommRec->data = *pInvestorInfoCommRec; } else { PypInvestorInfoCommRec_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInvestorInfoCommRec_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorInfoCommRec"), const_cast<char *>("OOOO"), PypInvestorInfoCommRec_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInvestorInfoCommRec);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///组合腿信息查询响应
			virtual void OnRspQryCombLeg(CThostFtdcCombLegField *pCombLeg, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCombLegField *PypCombLeg = NULL; 
			    PyObject *PypCombLeg_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypCombLeg = PyObject_New(PyCThostFtdcCombLegField, &PyCThostFtdcCombLegFieldType);
                if (!PypCombLeg) goto cleanup;
                PypCombLeg_callarg = (PyObject *)PypCombLeg;
                if (pCombLeg) { PypCombLeg->data = *pCombLeg; } else { PypCombLeg_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypCombLeg_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombLeg"), const_cast<char *>("OOOO"), PypCombLeg_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCombLeg);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///对冲设置请求响应
			virtual void OnRspOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOffsetSettingField *PypInputOffsetSetting = NULL; 
			    PyObject *PypInputOffsetSetting_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputOffsetSetting = PyObject_New(PyCThostFtdcInputOffsetSettingField, &PyCThostFtdcInputOffsetSettingFieldType);
                if (!PypInputOffsetSetting) goto cleanup;
                PypInputOffsetSetting_callarg = (PyObject *)PypInputOffsetSetting;
                if (pInputOffsetSetting) { PypInputOffsetSetting->data = *pInputOffsetSetting; } else { PypInputOffsetSetting_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputOffsetSetting_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOffsetSetting"), const_cast<char *>("OOOO"), PypInputOffsetSetting_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOffsetSetting);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///对冲设置撤销请求响应
			virtual void OnRspCancelOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOffsetSettingField *PypInputOffsetSetting = NULL; 
			    PyObject *PypInputOffsetSetting_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypInputOffsetSetting = PyObject_New(PyCThostFtdcInputOffsetSettingField, &PyCThostFtdcInputOffsetSettingFieldType);
                if (!PypInputOffsetSetting) goto cleanup;
                PypInputOffsetSetting_callarg = (PyObject *)PypInputOffsetSetting;
                if (pInputOffsetSetting) { PypInputOffsetSetting->data = *pInputOffsetSetting; } else { PypInputOffsetSetting_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypInputOffsetSetting_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspCancelOffsetSetting"), const_cast<char *>("OOOO"), PypInputOffsetSetting_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOffsetSetting);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///对冲设置通知
			virtual void OnRtnOffsetSetting(CThostFtdcOffsetSettingField *pOffsetSetting) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOffsetSettingField *PypOffsetSetting = NULL; 
			    PyObject *PypOffsetSetting_callarg = NULL; 
			    PyObject *result = NULL; 

                PypOffsetSetting = PyObject_New(PyCThostFtdcOffsetSettingField, &PyCThostFtdcOffsetSettingFieldType);
                if (!PypOffsetSetting) goto cleanup;
                PypOffsetSetting_callarg = (PyObject *)PypOffsetSetting;
                if (pOffsetSetting) { PypOffsetSetting->data = *pOffsetSetting; } else { PypOffsetSetting_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), PypOffsetSetting_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOffsetSetting"), const_cast<char *>("O"), PypOffsetSetting_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOffsetSetting);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///对冲设置错误回报
			virtual void OnErrRtnOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcInputOffsetSettingField *PypInputOffsetSetting = NULL; 
			    PyObject *PypInputOffsetSetting_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypInputOffsetSetting = PyObject_New(PyCThostFtdcInputOffsetSettingField, &PyCThostFtdcInputOffsetSettingFieldType);
                if (!PypInputOffsetSetting) goto cleanup;
                PypInputOffsetSetting_callarg = (PyObject *)PypInputOffsetSetting;
                if (pInputOffsetSetting) { PypInputOffsetSetting->data = *pInputOffsetSetting; } else { PypInputOffsetSetting_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypInputOffsetSetting_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOffsetSetting"), const_cast<char *>("OO"), PypInputOffsetSetting_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypInputOffsetSetting);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///对冲设置撤销错误回报
			virtual void OnErrRtnCancelOffsetSetting(CThostFtdcCancelOffsetSettingField *pCancelOffsetSetting, CThostFtdcRspInfoField *pRspInfo) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcCancelOffsetSettingField *PypCancelOffsetSetting = NULL; 
			    PyObject *PypCancelOffsetSetting_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *result = NULL; 

                PypCancelOffsetSetting = PyObject_New(PyCThostFtdcCancelOffsetSettingField, &PyCThostFtdcCancelOffsetSettingFieldType);
                if (!PypCancelOffsetSetting) goto cleanup;
                PypCancelOffsetSetting_callarg = (PyObject *)PypCancelOffsetSetting;
                if (pCancelOffsetSetting) { PypCancelOffsetSetting->data = *pCancelOffsetSetting; } else { PypCancelOffsetSetting_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), PypCancelOffsetSetting_callarg, PypRspInfo_callarg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnCancelOffsetSetting"), const_cast<char *>("OO"), PypCancelOffsetSetting_callarg, PypRspInfo_callarg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypCancelOffsetSetting);
                    Py_XDECREF(PypRspInfo);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}

            ///投资者对冲设置查询响应
			virtual void OnRspQryOffsetSetting(CThostFtdcOffsetSettingField *pOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
                PyGILState_STATE gstate = PyGILState_Ensure();
			    PyCThostFtdcOffsetSettingField *PypOffsetSetting = NULL; 
			    PyObject *PypOffsetSetting_callarg = NULL; 
			    PyCThostFtdcRspInfoField *PypRspInfo = NULL; 
			    PyObject *PypRspInfo_callarg = NULL; 
			    PyObject *PynRequestID = NULL; 
			    PyObject *PybIsLast = NULL; 
			    PyObject *result = NULL; 

                PypOffsetSetting = PyObject_New(PyCThostFtdcOffsetSettingField, &PyCThostFtdcOffsetSettingFieldType);
                if (!PypOffsetSetting) goto cleanup;
                PypOffsetSetting_callarg = (PyObject *)PypOffsetSetting;
                if (pOffsetSetting) { PypOffsetSetting->data = *pOffsetSetting; } else { PypOffsetSetting_callarg = Py_None; }
                    
                PypRspInfo = PyObject_New(PyCThostFtdcRspInfoField, &PyCThostFtdcRspInfoFieldType);
                if (!PypRspInfo) goto cleanup;
                PypRspInfo_callarg = (PyObject *)PypRspInfo;
                if (pRspInfo) { PypRspInfo->data = *pRspInfo; } else { PypRspInfo_callarg = Py_None; }
                    
                PynRequestID = PyLong_FromLong(nRequestID);
                if(!PynRequestID) goto cleanup;
                    
                PybIsLast = PyBool_FromLong(bIsLast);
                if (!PybIsLast) goto cleanup;
                    
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), PypOffsetSetting_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOffsetSetting"), const_cast<char *>("OOOO"), PypOffsetSetting_callarg, PypRspInfo_callarg, PynRequestID, PybIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(PypOffsetSetting);
                    Py_XDECREF(PypRspInfo);
                    Py_XDECREF(PynRequestID);
                    Py_XDECREF(PybIsLast);
					Py_XDECREF(result);
					PyGILState_Release(gstate);
			}


	};
};

///初始化
///@remark 初始化运行环境,只有调用后,接口才开始工作
PyCTP_TRADER_FUNCTION_MAGIC(Init) 

///等待接口线程结束运行
///@return 线程退出代码
PyCTP_TRADER_FUNCTION_MAGIC_INT(Join) 

///获取当前交易日
///@retrun 获取到的交易日
///@remark 只有登录成功后,才能得到正确的交易日
PyCTP_TRADER_FUNCTION_MAGIC_STRING(GetTradingDay) 

///获取已连接的前置的信息
/// @param pFrontInfo：输入输出参数，用于存储获取到的前置信息，不能为空
/// @remark 连接成功后，可获取正确的前置地址信息
/// @remark 登录成功后，可获取正确的前置流控信息
PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRUCT(GetFrontInfo, CThostFtdcFrontInfoField) 

///注册前置机网络地址
///@param pszFrontAddress：前置机网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRING(RegisterFront) 

///注册名字服务器网络地址
///@param pszNsAddress：名字服务器网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
///@remark RegisterNameServer优先于RegisterFront
PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRING(RegisterNameServer) 

///注册名字服务器用户信息
///@param pFensUserInfo：用户信息。
PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRUCT(RegisterFensUserInfo, CThostFtdcFensUserInfoField) 

///客户端认证请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqAuthenticate, CThostFtdcReqAuthenticateField) 

///注册用户终端信息，用于中继服务器多连接模式
///需要在终端认证成功后，用户登录前调用该接口
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT(RegisterUserSystemInfo, CThostFtdcUserSystemInfoField) 

///上报用户终端信息，用于中继服务器操作员登录模式
///操作员登录后，可以多次调用该接口上报客户信息
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT(SubmitUserSystemInfo, CThostFtdcUserSystemInfoField) 

///用户登录请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLogin, CThostFtdcReqUserLoginField) 

///登出请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLogout, CThostFtdcUserLogoutField) 

///用户口令更新请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserPasswordUpdate, CThostFtdcUserPasswordUpdateField) 

///资金账户口令更新请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqTradingAccountPasswordUpdate, CThostFtdcTradingAccountPasswordUpdateField) 

///查询用户当前支持的认证模式
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserAuthMethod, CThostFtdcReqUserAuthMethodField) 

///用户发出获取图形验证码请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqGenUserCaptcha, CThostFtdcReqGenUserCaptchaField) 

///用户发出获取短信验证码请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqGenUserText, CThostFtdcReqGenUserTextField) 

///用户发出带有图片验证码的登陆请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLoginWithCaptcha, CThostFtdcReqUserLoginWithCaptchaField) 

///用户发出带有短信验证码的登陆请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLoginWithText, CThostFtdcReqUserLoginWithTextField) 

///用户发出带有动态口令的登陆请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqUserLoginWithOTP, CThostFtdcReqUserLoginWithOTPField) 

///报单录入请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqOrderInsert, CThostFtdcInputOrderField) 

///预埋单录入请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqParkedOrderInsert, CThostFtdcParkedOrderField) 

///预埋撤单录入请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqParkedOrderAction, CThostFtdcParkedOrderActionField) 

///报单操作请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqOrderAction, CThostFtdcInputOrderActionField) 

///查询最大报单数量请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryMaxOrderVolume, CThostFtdcQryMaxOrderVolumeField) 

///投资者结算结果确认
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqSettlementInfoConfirm, CThostFtdcSettlementInfoConfirmField) 

///请求删除预埋单
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqRemoveParkedOrder, CThostFtdcRemoveParkedOrderField) 

///请求删除预埋撤单
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqRemoveParkedOrderAction, CThostFtdcRemoveParkedOrderActionField) 

///执行宣告录入请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqExecOrderInsert, CThostFtdcInputExecOrderField) 

///执行宣告操作请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqExecOrderAction, CThostFtdcInputExecOrderActionField) 

///询价录入请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqForQuoteInsert, CThostFtdcInputForQuoteField) 

///报价录入请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQuoteInsert, CThostFtdcInputQuoteField) 

///报价操作请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQuoteAction, CThostFtdcInputQuoteActionField) 

///批量报单操作请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqBatchOrderAction, CThostFtdcInputBatchOrderActionField) 

///期权自对冲录入请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqOptionSelfCloseInsert, CThostFtdcInputOptionSelfCloseField) 

///期权自对冲操作请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqOptionSelfCloseAction, CThostFtdcInputOptionSelfCloseActionField) 

///申请组合录入请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqCombActionInsert, CThostFtdcInputCombActionField) 

///请求查询报单
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryOrder, CThostFtdcQryOrderField) 

///请求查询成交
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTrade, CThostFtdcQryTradeField) 

///请求查询投资者持仓
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorPosition, CThostFtdcQryInvestorPositionField) 

///请求查询资金账户
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTradingAccount, CThostFtdcQryTradingAccountField) 

///请求查询投资者
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestor, CThostFtdcQryInvestorField) 

///请求查询交易编码
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTradingCode, CThostFtdcQryTradingCodeField) 

///请求查询合约保证金率
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInstrumentMarginRate, CThostFtdcQryInstrumentMarginRateField) 

///请求查询合约手续费率
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInstrumentCommissionRate, CThostFtdcQryInstrumentCommissionRateField) 

///请求查询交易所
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExchange, CThostFtdcQryExchangeField) 

///请求查询产品
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryProduct, CThostFtdcQryProductField) 

///请求查询合约
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInstrument, CThostFtdcQryInstrumentField) 

///请求查询行情
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryDepthMarketData, CThostFtdcQryDepthMarketDataField) 

///请求查询交易员报盘机
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTraderOffer, CThostFtdcQryTraderOfferField) 

///请求查询投资者结算结果
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySettlementInfo, CThostFtdcQrySettlementInfoField) 

///请求查询转帐银行
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTransferBank, CThostFtdcQryTransferBankField) 

///请求查询投资者持仓明细
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorPositionDetail, CThostFtdcQryInvestorPositionDetailField) 

///请求查询客户通知
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryNotice, CThostFtdcQryNoticeField) 

///请求查询结算信息确认
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySettlementInfoConfirm, CThostFtdcQrySettlementInfoConfirmField) 

///请求查询投资者持仓明细
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorPositionCombineDetail, CThostFtdcQryInvestorPositionCombineDetailField) 

///请求查询保证金监管系统经纪公司资金账户密钥
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryCFMMCTradingAccountKey, CThostFtdcQryCFMMCTradingAccountKeyField) 

///请求查询仓单折抵信息
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryEWarrantOffset, CThostFtdcQryEWarrantOffsetField) 

///请求查询投资者品种/跨品种保证金
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorProductGroupMargin, CThostFtdcQryInvestorProductGroupMarginField) 

///请求查询交易所保证金率
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExchangeMarginRate, CThostFtdcQryExchangeMarginRateField) 

///请求查询交易所调整保证金率
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExchangeMarginRateAdjust, CThostFtdcQryExchangeMarginRateAdjustField) 

///请求查询汇率
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExchangeRate, CThostFtdcQryExchangeRateField) 

///请求查询二级代理操作员银期权限
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySecAgentACIDMap, CThostFtdcQrySecAgentACIDMapField) 

///请求查询产品报价汇率
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryProductExchRate, CThostFtdcQryProductExchRateField) 

///请求查询产品组
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryProductGroup, CThostFtdcQryProductGroupField) 

///请求查询做市商合约手续费率
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryMMInstrumentCommissionRate, CThostFtdcQryMMInstrumentCommissionRateField) 

///请求查询做市商期权合约手续费
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryMMOptionInstrCommRate, CThostFtdcQryMMOptionInstrCommRateField) 

///请求查询报单手续费
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInstrumentOrderCommRate, CThostFtdcQryInstrumentOrderCommRateField) 

///请求查询资金账户
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySecAgentTradingAccount, CThostFtdcQryTradingAccountField) 

///请求查询二级代理商资金校验模式
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySecAgentCheckMode, CThostFtdcQrySecAgentCheckModeField) 

///请求查询二级代理商信息
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySecAgentTradeInfo, CThostFtdcQrySecAgentTradeInfoField) 

///请求查询期权交易成本
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryOptionInstrTradeCost, CThostFtdcQryOptionInstrTradeCostField) 

///请求查询期权合约手续费
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryOptionInstrCommRate, CThostFtdcQryOptionInstrCommRateField) 

///请求查询执行宣告
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryExecOrder, CThostFtdcQryExecOrderField) 

///请求查询询价
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryForQuote, CThostFtdcQryForQuoteField) 

///请求查询报价
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryQuote, CThostFtdcQryQuoteField) 

///请求查询期权自对冲
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryOptionSelfClose, CThostFtdcQryOptionSelfCloseField) 

///请求查询投资单元
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestUnit, CThostFtdcQryInvestUnitField) 

///请求查询组合合约安全系数
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryCombInstrumentGuard, CThostFtdcQryCombInstrumentGuardField) 

///请求查询申请组合
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryCombAction, CThostFtdcQryCombActionField) 

///请求查询转帐流水
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTransferSerial, CThostFtdcQryTransferSerialField) 

///请求查询银期签约关系
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryAccountregister, CThostFtdcQryAccountregisterField) 

///请求查询签约银行
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryContractBank, CThostFtdcQryContractBankField) 

///请求查询预埋单
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryParkedOrder, CThostFtdcQryParkedOrderField) 

///请求查询预埋撤单
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryParkedOrderAction, CThostFtdcQryParkedOrderActionField) 

///请求查询交易通知
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryTradingNotice, CThostFtdcQryTradingNoticeField) 

///请求查询经纪公司交易参数
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryBrokerTradingParams, CThostFtdcQryBrokerTradingParamsField) 

///请求查询经纪公司交易算法
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryBrokerTradingAlgos, CThostFtdcQryBrokerTradingAlgosField) 

///请求查询监控中心用户令牌
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQueryCFMMCTradingAccountToken, CThostFtdcQueryCFMMCTradingAccountTokenField) 

///期货发起银行资金转期货请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqFromBankToFutureByFuture, CThostFtdcReqTransferField) 

///期货发起期货资金转银行请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqFromFutureToBankByFuture, CThostFtdcReqTransferField) 

///期货发起查询银行余额请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQueryBankAccountMoneyByFuture, CThostFtdcReqQueryAccountField) 

///请求查询分类合约
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryClassifiedInstrument, CThostFtdcQryClassifiedInstrumentField) 

///请求组合优惠比例
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryCombPromotionParam, CThostFtdcQryCombPromotionParamField) 

///投资者风险结算持仓查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRiskSettleInvstPosition, CThostFtdcQryRiskSettleInvstPositionField) 

///风险结算产品查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRiskSettleProductStatus, CThostFtdcQryRiskSettleProductStatusField) 

///SPBM期货合约参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPBMFutureParameter, CThostFtdcQrySPBMFutureParameterField) 

///SPBM期权合约参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPBMOptionParameter, CThostFtdcQrySPBMOptionParameterField) 

///SPBM品种内对锁仓折扣参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPBMIntraParameter, CThostFtdcQrySPBMIntraParameterField) 

///SPBM跨品种抵扣参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPBMInterParameter, CThostFtdcQrySPBMInterParameterField) 

///SPBM组合保证金套餐查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPBMPortfDefinition, CThostFtdcQrySPBMPortfDefinitionField) 

///投资者SPBM套餐选择查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPBMInvestorPortfDef, CThostFtdcQrySPBMInvestorPortfDefField) 

///投资者新型组合保证金系数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorPortfMarginRatio, CThostFtdcQryInvestorPortfMarginRatioField) 

///投资者产品SPBM明细查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorProdSPBMDetail, CThostFtdcQryInvestorProdSPBMDetailField) 

///投资者商品组SPMM记录查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorCommoditySPMMMargin, CThostFtdcQryInvestorCommoditySPMMMarginField) 

///投资者商品群SPMM记录查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorCommodityGroupSPMMMargin, CThostFtdcQryInvestorCommodityGroupSPMMMarginField) 

///SPMM合约参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPMMInstParam, CThostFtdcQrySPMMInstParamField) 

///SPMM产品参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPMMProductParam, CThostFtdcQrySPMMProductParamField) 

///SPBM附加跨品种抵扣参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQrySPBMAddOnInterParameter, CThostFtdcQrySPBMAddOnInterParameterField) 

///RCAMS产品组合信息查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRCAMSCombProductInfo, CThostFtdcQryRCAMSCombProductInfoField) 

///RCAMS同合约风险对冲参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRCAMSInstrParameter, CThostFtdcQryRCAMSInstrParameterField) 

///RCAMS品种内风险对冲参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRCAMSIntraParameter, CThostFtdcQryRCAMSIntraParameterField) 

///RCAMS跨品种风险折抵参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRCAMSInterParameter, CThostFtdcQryRCAMSInterParameterField) 

///RCAMS空头期权风险调整参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRCAMSShortOptAdjustParam, CThostFtdcQryRCAMSShortOptAdjustParamField) 

///RCAMS策略组合持仓查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRCAMSInvestorCombPosition, CThostFtdcQryRCAMSInvestorCombPositionField) 

///投资者品种RCAMS保证金查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorProdRCAMSMargin, CThostFtdcQryInvestorProdRCAMSMarginField) 

///RULE合约保证金参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRULEInstrParameter, CThostFtdcQryRULEInstrParameterField) 

///RULE品种内对锁仓折扣参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRULEIntraParameter, CThostFtdcQryRULEIntraParameterField) 

///RULE跨品种抵扣参数查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryRULEInterParameter, CThostFtdcQryRULEInterParameterField) 

///投资者产品RULE保证金查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorProdRULEMargin, CThostFtdcQryInvestorProdRULEMarginField) 

///投资者新型组合保证金开关查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorPortfSetting, CThostFtdcQryInvestorPortfSettingField) 

///投资者申报费阶梯收取记录查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryInvestorInfoCommRec, CThostFtdcQryInvestorInfoCommRecField) 

///组合腿信息查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryCombLeg, CThostFtdcQryCombLegField) 

///对冲设置请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqOffsetSetting, CThostFtdcInputOffsetSettingField) 

///对冲设置撤销请求
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqCancelOffsetSetting, CThostFtdcInputOffsetSettingField) 

///投资者对冲设置查询
PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT(ReqQryOffsetSetting, CThostFtdcQryOffsetSettingField) 



static PyObject *CTP_THOST_FTDC_TRADER_API_SubscribePrivateTopic(PyObject *self, PyObject *args)
{
	THOST_TE_RESUME_TYPE nResumeType;

	if (!PyArg_ParseTuple(args, const_cast<char *>("i"), &nResumeType))
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	((CTP_THOST_FTDC_TRADER_API *) self)->api->SubscribePrivateTopic(nResumeType);

	Py_RETURN_NONE;
};

static PyObject *CTP_THOST_FTDC_TRADER_API_SubscribePublicTopic(PyObject *self, PyObject *args)
{
	THOST_TE_RESUME_TYPE nResumeType;

	if (!PyArg_ParseTuple(args, const_cast<char *>("i"), &nResumeType))
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	((CTP_THOST_FTDC_TRADER_API *) self)->api->SubscribePublicTopic(nResumeType);

	Py_RETURN_NONE;
};

static PyObject *CTP_THOST_FTDC_TRADER_API_CreateFtdcTraderApi(PyTypeObject *type, PyObject *args)
{
	char *pszFlowPath = nullptr;
#if PY_MAJOR_VERSION >= 3
	if (!PyArg_ParseTuple(args, "|y", &pszFlowPath))
#else
    if (!PyArg_ParseTuple(args, "|s", &pszFlowPath))
#endif
	{
		PyErr_SetString(PyExc_ValueError, "parameter invalid.");
		return nullptr;
	}

	/* 构造api对象 */
	CTP_THOST_FTDC_TRADER_API *self = (CTP_THOST_FTDC_TRADER_API *)(type->tp_alloc(type, 0));

	if(self==nullptr)
	{
		PyErr_SetString(PyExc_RuntimeError, "don't create instance.");
		return nullptr;
	}

	/* 创建ctpapi实例 */
	self->api = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath == nullptr? "" : pszFlowPath);
	if(self->api == nullptr)
	{
		PyErr_SetString(PyExc_RuntimeError, "CThostFtdcTraderApi::CreateFtdcTraderApi error.");
		Py_DECREF(self);
		return nullptr;
	}

	self->spi  = new CTP_THOST_FTDC_TRADER_SPI(self);
	self->api->RegisterSpi(self->spi);

	self->pySpi = Py_None;
	Py_INCREF(self->pySpi);

	return (PyObject *) self;
}

static PyObject *CTP_THOST_FTDC_TRADER_API_GetApiVersion(PyObject *self, PyObject *args)
{
	return PyBytes_FromString(CThostFtdcTraderApi::GetApiVersion());
};

static PyObject *CTP_THOST_FTDC_TRADER_API_RegisterSpi(PyObject *self, PyObject *args)
{
	CTP_THOST_FTDC_TRADER_API *api = (CTP_THOST_FTDC_TRADER_API *) self;
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

static PyObject *CTP_THOST_FTDC_TRADER_API_Release(PyObject *self, PyObject *args)
{
	CTP_THOST_FTDC_TRADER_API *obj = (CTP_THOST_FTDC_TRADER_API *) self;
	if(obj->api != nullptr)
	{
		obj->api->RegisterSpi(nullptr);
		obj->api->Release();
		obj->api = nullptr;
	}
	if(obj->spi != nullptr){
		delete dynamic_cast<CTP_THOST_FTDC_TRADER_SPI *>(obj->spi);
		obj->spi = nullptr;
	}
	Py_XDECREF(obj->pySpi);
	Py_RETURN_NONE;
};

static void CTP_THOST_FTDC_TRADER_API_dealloc(PyObject *self)
{
    PyObject *result = CTP_THOST_FTDC_TRADER_API_Release(self, NULL);
    Py_XDECREF(result);
	Py_TYPE(self)->tp_free(self);
}

static PyMemberDef CTP_THOST_FTDC_TRADER_API_members[] = {
	{nullptr}  /* Sentinel */
};

PyMethodDef CTP_THOST_FTDC_TRADER_API_methods[] = {
	///创建TraderApi
	///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
	///@return 创建出的UserApi
	{"CreateFtdcTraderApi", (PyCFunction) CTP_THOST_FTDC_TRADER_API_CreateFtdcTraderApi, METH_VARARGS | METH_CLASS, nullptr},

	///获取API的版本信息
	///@retrun 获取到的版本号
	{"GetApiVersion", CTP_THOST_FTDC_TRADER_API_GetApiVersion, METH_NOARGS | METH_STATIC, nullptr},

	///删除接口对象本身
	///@remark 不再使用本接口对象时,调用该函数删除接口对象
    {"Release", CTP_THOST_FTDC_TRADER_API_Release, METH_NOARGS, nullptr},

	///初始化
	///@remark 初始化运行环境,只有调用后,接口才开始工作
    {"Init", CTP_THOST_FTDC_TRADER_API_Init, METH_NOARGS, nullptr},

	///等待接口线程结束运行
	///@return 线程退出代码
    {"Join", CTP_THOST_FTDC_TRADER_API_Join, METH_NOARGS, nullptr},

	///获取当前交易日
	///@retrun 获取到的交易日
	///@remark 只有登录成功后,才能得到正确的交易日
    {"GetTradingDay", CTP_THOST_FTDC_TRADER_API_GetTradingDay, METH_NOARGS, nullptr},

	///获取已连接的前置的信息
	/// @param pFrontInfo：输入输出参数，用于存储获取到的前置信息，不能为空
	/// @remark 连接成功后，可获取正确的前置地址信息
	/// @remark 登录成功后，可获取正确的前置流控信息
    {"GetFrontInfo", CTP_THOST_FTDC_TRADER_API_GetFrontInfo, METH_VARARGS, nullptr},

	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
    {"RegisterFront", CTP_THOST_FTDC_TRADER_API_RegisterFront, METH_VARARGS, nullptr},

	///注册名字服务器网络地址
	///@param pszNsAddress：名字服务器网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
	///@remark RegisterNameServer优先于RegisterFront
    {"RegisterNameServer", CTP_THOST_FTDC_TRADER_API_RegisterNameServer, METH_VARARGS, nullptr},

	///注册名字服务器用户信息
	///@param pFensUserInfo：用户信息。
    {"RegisterFensUserInfo", CTP_THOST_FTDC_TRADER_API_RegisterFensUserInfo, METH_VARARGS, nullptr},

	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
    {"RegisterSpi", CTP_THOST_FTDC_TRADER_API_RegisterSpi, METH_VARARGS, nullptr},

	///订阅私有流。
	///@param nResumeType 私有流重传方式
	///        THOST_TERT_RESTART:从本交易日开始重传
	///        THOST_TERT_RESUME:从上次收到的续传
	///        THOST_TERT_QUICK:只传送登录后私有流的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
    {"SubscribePrivateTopic", CTP_THOST_FTDC_TRADER_API_SubscribePrivateTopic, METH_VARARGS, nullptr},

	///订阅公共流。
	///@param nResumeType 公共流重传方式
	///        THOST_TERT_RESTART:从本交易日开始重传
	///        THOST_TERT_RESUME:从上次收到的续传
	///        THOST_TERT_QUICK:只传送登录后公共流的内容
	///        THOST_TERT_NONE:取消订阅公共流
	///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
    {"SubscribePublicTopic", CTP_THOST_FTDC_TRADER_API_SubscribePublicTopic, METH_VARARGS, nullptr},

	///客户端认证请求
    {"ReqAuthenticate", CTP_THOST_FTDC_TRADER_API_ReqAuthenticate, METH_VARARGS, nullptr},

	///注册用户终端信息，用于中继服务器多连接模式
	///需要在终端认证成功后，用户登录前调用该接口
    {"RegisterUserSystemInfo", CTP_THOST_FTDC_TRADER_API_RegisterUserSystemInfo, METH_VARARGS, nullptr},

	///上报用户终端信息，用于中继服务器操作员登录模式
	///操作员登录后，可以多次调用该接口上报客户信息
    {"SubmitUserSystemInfo", CTP_THOST_FTDC_TRADER_API_SubmitUserSystemInfo, METH_VARARGS, nullptr},

	///用户登录请求
    {"ReqUserLogin", CTP_THOST_FTDC_TRADER_API_ReqUserLogin, METH_VARARGS, nullptr},

	///登出请求
    {"ReqUserLogout", CTP_THOST_FTDC_TRADER_API_ReqUserLogout, METH_VARARGS, nullptr},

	///用户口令更新请求
    {"ReqUserPasswordUpdate", CTP_THOST_FTDC_TRADER_API_ReqUserPasswordUpdate, METH_VARARGS, nullptr},

	///资金账户口令更新请求
    {"ReqTradingAccountPasswordUpdate", CTP_THOST_FTDC_TRADER_API_ReqTradingAccountPasswordUpdate, METH_VARARGS, nullptr},

	///查询用户当前支持的认证模式
    {"ReqUserAuthMethod", CTP_THOST_FTDC_TRADER_API_ReqUserAuthMethod, METH_VARARGS, nullptr},

	///用户发出获取图形验证码请求
    {"ReqGenUserCaptcha", CTP_THOST_FTDC_TRADER_API_ReqGenUserCaptcha, METH_VARARGS, nullptr},

	///用户发出获取短信验证码请求
    {"ReqGenUserText", CTP_THOST_FTDC_TRADER_API_ReqGenUserText, METH_VARARGS, nullptr},

	///用户发出带有图片验证码的登陆请求
    {"ReqUserLoginWithCaptcha", CTP_THOST_FTDC_TRADER_API_ReqUserLoginWithCaptcha, METH_VARARGS, nullptr},

	///用户发出带有短信验证码的登陆请求
    {"ReqUserLoginWithText", CTP_THOST_FTDC_TRADER_API_ReqUserLoginWithText, METH_VARARGS, nullptr},

	///用户发出带有动态口令的登陆请求
    {"ReqUserLoginWithOTP", CTP_THOST_FTDC_TRADER_API_ReqUserLoginWithOTP, METH_VARARGS, nullptr},

	///报单录入请求
    {"ReqOrderInsert", CTP_THOST_FTDC_TRADER_API_ReqOrderInsert, METH_VARARGS, nullptr},

	///预埋单录入请求
    {"ReqParkedOrderInsert", CTP_THOST_FTDC_TRADER_API_ReqParkedOrderInsert, METH_VARARGS, nullptr},

	///预埋撤单录入请求
    {"ReqParkedOrderAction", CTP_THOST_FTDC_TRADER_API_ReqParkedOrderAction, METH_VARARGS, nullptr},

	///报单操作请求
    {"ReqOrderAction", CTP_THOST_FTDC_TRADER_API_ReqOrderAction, METH_VARARGS, nullptr},

	///查询最大报单数量请求
    {"ReqQryMaxOrderVolume", CTP_THOST_FTDC_TRADER_API_ReqQryMaxOrderVolume, METH_VARARGS, nullptr},

	///投资者结算结果确认
    {"ReqSettlementInfoConfirm", CTP_THOST_FTDC_TRADER_API_ReqSettlementInfoConfirm, METH_VARARGS, nullptr},

	///请求删除预埋单
    {"ReqRemoveParkedOrder", CTP_THOST_FTDC_TRADER_API_ReqRemoveParkedOrder, METH_VARARGS, nullptr},

	///请求删除预埋撤单
    {"ReqRemoveParkedOrderAction", CTP_THOST_FTDC_TRADER_API_ReqRemoveParkedOrderAction, METH_VARARGS, nullptr},

	///执行宣告录入请求
    {"ReqExecOrderInsert", CTP_THOST_FTDC_TRADER_API_ReqExecOrderInsert, METH_VARARGS, nullptr},

	///执行宣告操作请求
    {"ReqExecOrderAction", CTP_THOST_FTDC_TRADER_API_ReqExecOrderAction, METH_VARARGS, nullptr},

	///询价录入请求
    {"ReqForQuoteInsert", CTP_THOST_FTDC_TRADER_API_ReqForQuoteInsert, METH_VARARGS, nullptr},

	///报价录入请求
    {"ReqQuoteInsert", CTP_THOST_FTDC_TRADER_API_ReqQuoteInsert, METH_VARARGS, nullptr},

	///报价操作请求
    {"ReqQuoteAction", CTP_THOST_FTDC_TRADER_API_ReqQuoteAction, METH_VARARGS, nullptr},

	///批量报单操作请求
    {"ReqBatchOrderAction", CTP_THOST_FTDC_TRADER_API_ReqBatchOrderAction, METH_VARARGS, nullptr},

	///期权自对冲录入请求
    {"ReqOptionSelfCloseInsert", CTP_THOST_FTDC_TRADER_API_ReqOptionSelfCloseInsert, METH_VARARGS, nullptr},

	///期权自对冲操作请求
    {"ReqOptionSelfCloseAction", CTP_THOST_FTDC_TRADER_API_ReqOptionSelfCloseAction, METH_VARARGS, nullptr},

	///申请组合录入请求
    {"ReqCombActionInsert", CTP_THOST_FTDC_TRADER_API_ReqCombActionInsert, METH_VARARGS, nullptr},

	///请求查询报单
    {"ReqQryOrder", CTP_THOST_FTDC_TRADER_API_ReqQryOrder, METH_VARARGS, nullptr},

	///请求查询成交
    {"ReqQryTrade", CTP_THOST_FTDC_TRADER_API_ReqQryTrade, METH_VARARGS, nullptr},

	///请求查询投资者持仓
    {"ReqQryInvestorPosition", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPosition, METH_VARARGS, nullptr},

	///请求查询资金账户
    {"ReqQryTradingAccount", CTP_THOST_FTDC_TRADER_API_ReqQryTradingAccount, METH_VARARGS, nullptr},

	///请求查询投资者
    {"ReqQryInvestor", CTP_THOST_FTDC_TRADER_API_ReqQryInvestor, METH_VARARGS, nullptr},

	///请求查询交易编码
    {"ReqQryTradingCode", CTP_THOST_FTDC_TRADER_API_ReqQryTradingCode, METH_VARARGS, nullptr},

	///请求查询合约保证金率
    {"ReqQryInstrumentMarginRate", CTP_THOST_FTDC_TRADER_API_ReqQryInstrumentMarginRate, METH_VARARGS, nullptr},

	///请求查询合约手续费率
    {"ReqQryInstrumentCommissionRate", CTP_THOST_FTDC_TRADER_API_ReqQryInstrumentCommissionRate, METH_VARARGS, nullptr},

	///请求查询交易所
    {"ReqQryExchange", CTP_THOST_FTDC_TRADER_API_ReqQryExchange, METH_VARARGS, nullptr},

	///请求查询产品
    {"ReqQryProduct", CTP_THOST_FTDC_TRADER_API_ReqQryProduct, METH_VARARGS, nullptr},

	///请求查询合约
    {"ReqQryInstrument", CTP_THOST_FTDC_TRADER_API_ReqQryInstrument, METH_VARARGS, nullptr},

	///请求查询行情
    {"ReqQryDepthMarketData", CTP_THOST_FTDC_TRADER_API_ReqQryDepthMarketData, METH_VARARGS, nullptr},

	///请求查询交易员报盘机
    {"ReqQryTraderOffer", CTP_THOST_FTDC_TRADER_API_ReqQryTraderOffer, METH_VARARGS, nullptr},

	///请求查询投资者结算结果
    {"ReqQrySettlementInfo", CTP_THOST_FTDC_TRADER_API_ReqQrySettlementInfo, METH_VARARGS, nullptr},

	///请求查询转帐银行
    {"ReqQryTransferBank", CTP_THOST_FTDC_TRADER_API_ReqQryTransferBank, METH_VARARGS, nullptr},

	///请求查询投资者持仓明细
    {"ReqQryInvestorPositionDetail", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPositionDetail, METH_VARARGS, nullptr},

	///请求查询客户通知
    {"ReqQryNotice", CTP_THOST_FTDC_TRADER_API_ReqQryNotice, METH_VARARGS, nullptr},

	///请求查询结算信息确认
    {"ReqQrySettlementInfoConfirm", CTP_THOST_FTDC_TRADER_API_ReqQrySettlementInfoConfirm, METH_VARARGS, nullptr},

	///请求查询投资者持仓明细
    {"ReqQryInvestorPositionCombineDetail", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPositionCombineDetail, METH_VARARGS, nullptr},

	///请求查询保证金监管系统经纪公司资金账户密钥
    {"ReqQryCFMMCTradingAccountKey", CTP_THOST_FTDC_TRADER_API_ReqQryCFMMCTradingAccountKey, METH_VARARGS, nullptr},

	///请求查询仓单折抵信息
    {"ReqQryEWarrantOffset", CTP_THOST_FTDC_TRADER_API_ReqQryEWarrantOffset, METH_VARARGS, nullptr},

	///请求查询投资者品种/跨品种保证金
    {"ReqQryInvestorProductGroupMargin", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorProductGroupMargin, METH_VARARGS, nullptr},

	///请求查询交易所保证金率
    {"ReqQryExchangeMarginRate", CTP_THOST_FTDC_TRADER_API_ReqQryExchangeMarginRate, METH_VARARGS, nullptr},

	///请求查询交易所调整保证金率
    {"ReqQryExchangeMarginRateAdjust", CTP_THOST_FTDC_TRADER_API_ReqQryExchangeMarginRateAdjust, METH_VARARGS, nullptr},

	///请求查询汇率
    {"ReqQryExchangeRate", CTP_THOST_FTDC_TRADER_API_ReqQryExchangeRate, METH_VARARGS, nullptr},

	///请求查询二级代理操作员银期权限
    {"ReqQrySecAgentACIDMap", CTP_THOST_FTDC_TRADER_API_ReqQrySecAgentACIDMap, METH_VARARGS, nullptr},

	///请求查询产品报价汇率
    {"ReqQryProductExchRate", CTP_THOST_FTDC_TRADER_API_ReqQryProductExchRate, METH_VARARGS, nullptr},

	///请求查询产品组
    {"ReqQryProductGroup", CTP_THOST_FTDC_TRADER_API_ReqQryProductGroup, METH_VARARGS, nullptr},

	///请求查询做市商合约手续费率
    {"ReqQryMMInstrumentCommissionRate", CTP_THOST_FTDC_TRADER_API_ReqQryMMInstrumentCommissionRate, METH_VARARGS, nullptr},

	///请求查询做市商期权合约手续费
    {"ReqQryMMOptionInstrCommRate", CTP_THOST_FTDC_TRADER_API_ReqQryMMOptionInstrCommRate, METH_VARARGS, nullptr},

	///请求查询报单手续费
    {"ReqQryInstrumentOrderCommRate", CTP_THOST_FTDC_TRADER_API_ReqQryInstrumentOrderCommRate, METH_VARARGS, nullptr},

	///请求查询资金账户
    {"ReqQrySecAgentTradingAccount", CTP_THOST_FTDC_TRADER_API_ReqQrySecAgentTradingAccount, METH_VARARGS, nullptr},

	///请求查询二级代理商资金校验模式
    {"ReqQrySecAgentCheckMode", CTP_THOST_FTDC_TRADER_API_ReqQrySecAgentCheckMode, METH_VARARGS, nullptr},

	///请求查询二级代理商信息
    {"ReqQrySecAgentTradeInfo", CTP_THOST_FTDC_TRADER_API_ReqQrySecAgentTradeInfo, METH_VARARGS, nullptr},

	///请求查询期权交易成本
    {"ReqQryOptionInstrTradeCost", CTP_THOST_FTDC_TRADER_API_ReqQryOptionInstrTradeCost, METH_VARARGS, nullptr},

	///请求查询期权合约手续费
    {"ReqQryOptionInstrCommRate", CTP_THOST_FTDC_TRADER_API_ReqQryOptionInstrCommRate, METH_VARARGS, nullptr},

	///请求查询执行宣告
    {"ReqQryExecOrder", CTP_THOST_FTDC_TRADER_API_ReqQryExecOrder, METH_VARARGS, nullptr},

	///请求查询询价
    {"ReqQryForQuote", CTP_THOST_FTDC_TRADER_API_ReqQryForQuote, METH_VARARGS, nullptr},

	///请求查询报价
    {"ReqQryQuote", CTP_THOST_FTDC_TRADER_API_ReqQryQuote, METH_VARARGS, nullptr},

	///请求查询期权自对冲
    {"ReqQryOptionSelfClose", CTP_THOST_FTDC_TRADER_API_ReqQryOptionSelfClose, METH_VARARGS, nullptr},

	///请求查询投资单元
    {"ReqQryInvestUnit", CTP_THOST_FTDC_TRADER_API_ReqQryInvestUnit, METH_VARARGS, nullptr},

	///请求查询组合合约安全系数
    {"ReqQryCombInstrumentGuard", CTP_THOST_FTDC_TRADER_API_ReqQryCombInstrumentGuard, METH_VARARGS, nullptr},

	///请求查询申请组合
    {"ReqQryCombAction", CTP_THOST_FTDC_TRADER_API_ReqQryCombAction, METH_VARARGS, nullptr},

	///请求查询转帐流水
    {"ReqQryTransferSerial", CTP_THOST_FTDC_TRADER_API_ReqQryTransferSerial, METH_VARARGS, nullptr},

	///请求查询银期签约关系
    {"ReqQryAccountregister", CTP_THOST_FTDC_TRADER_API_ReqQryAccountregister, METH_VARARGS, nullptr},

	///请求查询签约银行
    {"ReqQryContractBank", CTP_THOST_FTDC_TRADER_API_ReqQryContractBank, METH_VARARGS, nullptr},

	///请求查询预埋单
    {"ReqQryParkedOrder", CTP_THOST_FTDC_TRADER_API_ReqQryParkedOrder, METH_VARARGS, nullptr},

	///请求查询预埋撤单
    {"ReqQryParkedOrderAction", CTP_THOST_FTDC_TRADER_API_ReqQryParkedOrderAction, METH_VARARGS, nullptr},

	///请求查询交易通知
    {"ReqQryTradingNotice", CTP_THOST_FTDC_TRADER_API_ReqQryTradingNotice, METH_VARARGS, nullptr},

	///请求查询经纪公司交易参数
    {"ReqQryBrokerTradingParams", CTP_THOST_FTDC_TRADER_API_ReqQryBrokerTradingParams, METH_VARARGS, nullptr},

	///请求查询经纪公司交易算法
    {"ReqQryBrokerTradingAlgos", CTP_THOST_FTDC_TRADER_API_ReqQryBrokerTradingAlgos, METH_VARARGS, nullptr},

	///请求查询监控中心用户令牌
    {"ReqQueryCFMMCTradingAccountToken", CTP_THOST_FTDC_TRADER_API_ReqQueryCFMMCTradingAccountToken, METH_VARARGS, nullptr},

	///期货发起银行资金转期货请求
    {"ReqFromBankToFutureByFuture", CTP_THOST_FTDC_TRADER_API_ReqFromBankToFutureByFuture, METH_VARARGS, nullptr},

	///期货发起期货资金转银行请求
    {"ReqFromFutureToBankByFuture", CTP_THOST_FTDC_TRADER_API_ReqFromFutureToBankByFuture, METH_VARARGS, nullptr},

	///期货发起查询银行余额请求
    {"ReqQueryBankAccountMoneyByFuture", CTP_THOST_FTDC_TRADER_API_ReqQueryBankAccountMoneyByFuture, METH_VARARGS, nullptr},

	///请求查询分类合约
    {"ReqQryClassifiedInstrument", CTP_THOST_FTDC_TRADER_API_ReqQryClassifiedInstrument, METH_VARARGS, nullptr},

	///请求组合优惠比例
    {"ReqQryCombPromotionParam", CTP_THOST_FTDC_TRADER_API_ReqQryCombPromotionParam, METH_VARARGS, nullptr},

	///投资者风险结算持仓查询
    {"ReqQryRiskSettleInvstPosition", CTP_THOST_FTDC_TRADER_API_ReqQryRiskSettleInvstPosition, METH_VARARGS, nullptr},

	///风险结算产品查询
    {"ReqQryRiskSettleProductStatus", CTP_THOST_FTDC_TRADER_API_ReqQryRiskSettleProductStatus, METH_VARARGS, nullptr},

	///SPBM期货合约参数查询
    {"ReqQrySPBMFutureParameter", CTP_THOST_FTDC_TRADER_API_ReqQrySPBMFutureParameter, METH_VARARGS, nullptr},

	///SPBM期权合约参数查询
    {"ReqQrySPBMOptionParameter", CTP_THOST_FTDC_TRADER_API_ReqQrySPBMOptionParameter, METH_VARARGS, nullptr},

	///SPBM品种内对锁仓折扣参数查询
    {"ReqQrySPBMIntraParameter", CTP_THOST_FTDC_TRADER_API_ReqQrySPBMIntraParameter, METH_VARARGS, nullptr},

	///SPBM跨品种抵扣参数查询
    {"ReqQrySPBMInterParameter", CTP_THOST_FTDC_TRADER_API_ReqQrySPBMInterParameter, METH_VARARGS, nullptr},

	///SPBM组合保证金套餐查询
    {"ReqQrySPBMPortfDefinition", CTP_THOST_FTDC_TRADER_API_ReqQrySPBMPortfDefinition, METH_VARARGS, nullptr},

	///投资者SPBM套餐选择查询
    {"ReqQrySPBMInvestorPortfDef", CTP_THOST_FTDC_TRADER_API_ReqQrySPBMInvestorPortfDef, METH_VARARGS, nullptr},

	///投资者新型组合保证金系数查询
    {"ReqQryInvestorPortfMarginRatio", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPortfMarginRatio, METH_VARARGS, nullptr},

	///投资者产品SPBM明细查询
    {"ReqQryInvestorProdSPBMDetail", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorProdSPBMDetail, METH_VARARGS, nullptr},

	///投资者商品组SPMM记录查询
    {"ReqQryInvestorCommoditySPMMMargin", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorCommoditySPMMMargin, METH_VARARGS, nullptr},

	///投资者商品群SPMM记录查询
    {"ReqQryInvestorCommodityGroupSPMMMargin", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorCommodityGroupSPMMMargin, METH_VARARGS, nullptr},

	///SPMM合约参数查询
    {"ReqQrySPMMInstParam", CTP_THOST_FTDC_TRADER_API_ReqQrySPMMInstParam, METH_VARARGS, nullptr},

	///SPMM产品参数查询
    {"ReqQrySPMMProductParam", CTP_THOST_FTDC_TRADER_API_ReqQrySPMMProductParam, METH_VARARGS, nullptr},

	///SPBM附加跨品种抵扣参数查询
    {"ReqQrySPBMAddOnInterParameter", CTP_THOST_FTDC_TRADER_API_ReqQrySPBMAddOnInterParameter, METH_VARARGS, nullptr},

	///RCAMS产品组合信息查询
    {"ReqQryRCAMSCombProductInfo", CTP_THOST_FTDC_TRADER_API_ReqQryRCAMSCombProductInfo, METH_VARARGS, nullptr},

	///RCAMS同合约风险对冲参数查询
    {"ReqQryRCAMSInstrParameter", CTP_THOST_FTDC_TRADER_API_ReqQryRCAMSInstrParameter, METH_VARARGS, nullptr},

	///RCAMS品种内风险对冲参数查询
    {"ReqQryRCAMSIntraParameter", CTP_THOST_FTDC_TRADER_API_ReqQryRCAMSIntraParameter, METH_VARARGS, nullptr},

	///RCAMS跨品种风险折抵参数查询
    {"ReqQryRCAMSInterParameter", CTP_THOST_FTDC_TRADER_API_ReqQryRCAMSInterParameter, METH_VARARGS, nullptr},

	///RCAMS空头期权风险调整参数查询
    {"ReqQryRCAMSShortOptAdjustParam", CTP_THOST_FTDC_TRADER_API_ReqQryRCAMSShortOptAdjustParam, METH_VARARGS, nullptr},

	///RCAMS策略组合持仓查询
    {"ReqQryRCAMSInvestorCombPosition", CTP_THOST_FTDC_TRADER_API_ReqQryRCAMSInvestorCombPosition, METH_VARARGS, nullptr},

	///投资者品种RCAMS保证金查询
    {"ReqQryInvestorProdRCAMSMargin", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorProdRCAMSMargin, METH_VARARGS, nullptr},

	///RULE合约保证金参数查询
    {"ReqQryRULEInstrParameter", CTP_THOST_FTDC_TRADER_API_ReqQryRULEInstrParameter, METH_VARARGS, nullptr},

	///RULE品种内对锁仓折扣参数查询
    {"ReqQryRULEIntraParameter", CTP_THOST_FTDC_TRADER_API_ReqQryRULEIntraParameter, METH_VARARGS, nullptr},

	///RULE跨品种抵扣参数查询
    {"ReqQryRULEInterParameter", CTP_THOST_FTDC_TRADER_API_ReqQryRULEInterParameter, METH_VARARGS, nullptr},

	///投资者产品RULE保证金查询
    {"ReqQryInvestorProdRULEMargin", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorProdRULEMargin, METH_VARARGS, nullptr},

	///投资者新型组合保证金开关查询
    {"ReqQryInvestorPortfSetting", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorPortfSetting, METH_VARARGS, nullptr},

	///投资者申报费阶梯收取记录查询
    {"ReqQryInvestorInfoCommRec", CTP_THOST_FTDC_TRADER_API_ReqQryInvestorInfoCommRec, METH_VARARGS, nullptr},

	///组合腿信息查询
    {"ReqQryCombLeg", CTP_THOST_FTDC_TRADER_API_ReqQryCombLeg, METH_VARARGS, nullptr},

	///对冲设置请求
    {"ReqOffsetSetting", CTP_THOST_FTDC_TRADER_API_ReqOffsetSetting, METH_VARARGS, nullptr},

	///对冲设置撤销请求
    {"ReqCancelOffsetSetting", CTP_THOST_FTDC_TRADER_API_ReqCancelOffsetSetting, METH_VARARGS, nullptr},

	///投资者对冲设置查询
    {"ReqQryOffsetSetting", CTP_THOST_FTDC_TRADER_API_ReqQryOffsetSetting, METH_VARARGS, nullptr},


	{nullptr}  /* Sentinel */
};

PyTypeObject CTP_THOST_FTDC_TRADER_API_TYPE = {
	PyVarObject_HEAD_INIT(NULL, 0)
	"PyCTP.CThostFtdcTraderApi",/* tp_name */
	sizeof(struct CTP_THOST_FTDC_TRADER_API),/* tp_basicsize */
	0,                          /* tp_itemsize */
	CTP_THOST_FTDC_TRADER_API_dealloc,/* tp_dealloc */
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
	"equivalent to CThostFtdcTraderApi for cpp", /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	CTP_THOST_FTDC_TRADER_API_methods, /* tp_methods */
	CTP_THOST_FTDC_TRADER_API_members, /* tp_members */
	0,                          /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	0,							/* tp_init */
	0,                          /* tp_alloc */
	0,                          /* tp_new */
};

int CTP_THOST_FTDC_TRADER_API_TYPE_init(PyObject *module) {

	/* 准备好对象使用 CTP_THOST_FTDC_TRADER_API_TYPE  */
	if (PyType_Ready(&CTP_THOST_FTDC_TRADER_API_TYPE) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTraderApi");
		return -1;
	}

    Py_INCREF(&CTP_THOST_FTDC_TRADER_API_TYPE);
    if( PyModule_AddObject(module, "CThostFtdcTraderApi", (PyObject *)&CTP_THOST_FTDC_TRADER_API_TYPE) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTraderApi to module");
        Py_DECREF(&CTP_THOST_FTDC_TRADER_API_TYPE);
		return -1;
    }

    return 0;
}
