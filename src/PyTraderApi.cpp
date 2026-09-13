
#include "stdafx.h"
#include "PyTraderApi.h"
#include "PyTypes.h"

namespace {
    class PyCThostFtdcTraderSpi final: public CThostFtdcTraderSpi {
        protected:

            PyCThostFtdcTraderApiData *api;

        public:

            PyCThostFtdcTraderSpi(PyCThostFtdcTraderApiData *a) : api(a) {}


            ///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
            void OnFrontConnected() override {
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
            void OnFrontDisconnected(int nReason) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjnReason = NULL;
                PyObject *result = NULL;

                pyobjnReason = PyLong_FromLong(nReason);
                if(!pyobjnReason) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjnReason);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnFrontDisconnected"), const_cast<char *>("O"), pyobjnReason);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjnReason);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///心跳超时警告。当长时间未收到报文时，该方法被调用。
            ///@param nTimeLapse 距离上次接收报文的时间
            void OnHeartBeatWarning(int nTimeLapse) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjnTimeLapse = NULL;
                PyObject *result = NULL;

                pyobjnTimeLapse = PyLong_FromLong(nTimeLapse);
                if(!pyobjnTimeLapse) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjnTimeLapse);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnHeartBeatWarning"), const_cast<char *>("O"), pyobjnTimeLapse);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjnTimeLapse);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///客户端认证响应
            void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspAuthenticateField = NULL;
                PyObject *pyobjpRspAuthenticateField_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRspAuthenticateField) {
                    pyobjpRspAuthenticateField = PyType_GenericAlloc(PyCThostFtdcRspAuthenticateFieldType, 0);
                    if (!pyobjpRspAuthenticateField) goto cleanup;
                    PyCThostFtdcRspAuthenticateFieldData *extra_pRspAuthenticateField = PyCTP_GetTypeData<PyCThostFtdcRspAuthenticateFieldData>(pyobjpRspAuthenticateField);
                    extra_pRspAuthenticateField->data = *pRspAuthenticateField;
                    pyobjpRspAuthenticateField_arg = pyobjpRspAuthenticateField;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRspAuthenticateField_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspAuthenticate"), const_cast<char *>("OOOO"), pyobjpRspAuthenticateField_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspAuthenticateField);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///该方法在处理私有流之前被调用
            ///@param nSeqNo 即将被处理的私有流的序号
            void OnRtnPrivateSeqNo(int nSeqNo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjnSeqNo = NULL;
                PyObject *result = NULL;

                pyobjnSeqNo = PyLong_FromLong(nSeqNo);
                if(!pyobjnSeqNo) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjnSeqNo);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnPrivateSeqNo"), const_cast<char *>("O"), pyobjnSeqNo);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjnSeqNo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///登录请求响应
            void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspUserLogin = NULL;
                PyObject *pyobjpRspUserLogin_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRspUserLogin) {
                    pyobjpRspUserLogin = PyType_GenericAlloc(PyCThostFtdcRspUserLoginFieldType, 0);
                    if (!pyobjpRspUserLogin) goto cleanup;
                    PyCThostFtdcRspUserLoginFieldData *extra_pRspUserLogin = PyCTP_GetTypeData<PyCThostFtdcRspUserLoginFieldData>(pyobjpRspUserLogin);
                    extra_pRspUserLogin->data = *pRspUserLogin;
                    pyobjpRspUserLogin_arg = pyobjpRspUserLogin;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRspUserLogin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserLogin"), const_cast<char *>("OOOO"), pyobjpRspUserLogin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspUserLogin);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///登出请求响应
            void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpUserLogout = NULL;
                PyObject *pyobjpUserLogout_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pUserLogout) {
                    pyobjpUserLogout = PyType_GenericAlloc(PyCThostFtdcUserLogoutFieldType, 0);
                    if (!pyobjpUserLogout) goto cleanup;
                    PyCThostFtdcUserLogoutFieldData *extra_pUserLogout = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(pyobjpUserLogout);
                    extra_pUserLogout->data = *pUserLogout;
                    pyobjpUserLogout_arg = pyobjpUserLogout;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpUserLogout_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserLogout"), const_cast<char *>("OOOO"), pyobjpUserLogout_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpUserLogout);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///用户口令更新请求响应
            void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpUserPasswordUpdate = NULL;
                PyObject *pyobjpUserPasswordUpdate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pUserPasswordUpdate) {
                    pyobjpUserPasswordUpdate = PyType_GenericAlloc(PyCThostFtdcUserPasswordUpdateFieldType, 0);
                    if (!pyobjpUserPasswordUpdate) goto cleanup;
                    PyCThostFtdcUserPasswordUpdateFieldData *extra_pUserPasswordUpdate = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(pyobjpUserPasswordUpdate);
                    extra_pUserPasswordUpdate->data = *pUserPasswordUpdate;
                    pyobjpUserPasswordUpdate_arg = pyobjpUserPasswordUpdate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpUserPasswordUpdate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserPasswordUpdate"), const_cast<char *>("OOOO"), pyobjpUserPasswordUpdate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpUserPasswordUpdate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///资金账户口令更新请求响应
            void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTradingAccountPasswordUpdate = NULL;
                PyObject *pyobjpTradingAccountPasswordUpdate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTradingAccountPasswordUpdate) {
                    pyobjpTradingAccountPasswordUpdate = PyType_GenericAlloc(PyCThostFtdcTradingAccountPasswordUpdateFieldType, 0);
                    if (!pyobjpTradingAccountPasswordUpdate) goto cleanup;
                    PyCThostFtdcTradingAccountPasswordUpdateFieldData *extra_pTradingAccountPasswordUpdate = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(pyobjpTradingAccountPasswordUpdate);
                    extra_pTradingAccountPasswordUpdate->data = *pTradingAccountPasswordUpdate;
                    pyobjpTradingAccountPasswordUpdate_arg = pyobjpTradingAccountPasswordUpdate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTradingAccountPasswordUpdate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspTradingAccountPasswordUpdate"), const_cast<char *>("OOOO"), pyobjpTradingAccountPasswordUpdate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTradingAccountPasswordUpdate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///查询用户当前支持的认证模式的回复
            void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspUserAuthMethod = NULL;
                PyObject *pyobjpRspUserAuthMethod_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRspUserAuthMethod) {
                    pyobjpRspUserAuthMethod = PyType_GenericAlloc(PyCThostFtdcRspUserAuthMethodFieldType, 0);
                    if (!pyobjpRspUserAuthMethod) goto cleanup;
                    PyCThostFtdcRspUserAuthMethodFieldData *extra_pRspUserAuthMethod = PyCTP_GetTypeData<PyCThostFtdcRspUserAuthMethodFieldData>(pyobjpRspUserAuthMethod);
                    extra_pRspUserAuthMethod->data = *pRspUserAuthMethod;
                    pyobjpRspUserAuthMethod_arg = pyobjpRspUserAuthMethod;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRspUserAuthMethod_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUserAuthMethod"), const_cast<char *>("OOOO"), pyobjpRspUserAuthMethod_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspUserAuthMethod);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///获取图形验证码请求的回复
            void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspGenUserCaptcha = NULL;
                PyObject *pyobjpRspGenUserCaptcha_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRspGenUserCaptcha) {
                    pyobjpRspGenUserCaptcha = PyType_GenericAlloc(PyCThostFtdcRspGenUserCaptchaFieldType, 0);
                    if (!pyobjpRspGenUserCaptcha) goto cleanup;
                    PyCThostFtdcRspGenUserCaptchaFieldData *extra_pRspGenUserCaptcha = PyCTP_GetTypeData<PyCThostFtdcRspGenUserCaptchaFieldData>(pyobjpRspGenUserCaptcha);
                    extra_pRspGenUserCaptcha->data = *pRspGenUserCaptcha;
                    pyobjpRspGenUserCaptcha_arg = pyobjpRspGenUserCaptcha;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRspGenUserCaptcha_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspGenUserCaptcha"), const_cast<char *>("OOOO"), pyobjpRspGenUserCaptcha_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspGenUserCaptcha);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///获取短信验证码请求的回复
            void OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspGenUserText = NULL;
                PyObject *pyobjpRspGenUserText_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRspGenUserText) {
                    pyobjpRspGenUserText = PyType_GenericAlloc(PyCThostFtdcRspGenUserTextFieldType, 0);
                    if (!pyobjpRspGenUserText) goto cleanup;
                    PyCThostFtdcRspGenUserTextFieldData *extra_pRspGenUserText = PyCTP_GetTypeData<PyCThostFtdcRspGenUserTextFieldData>(pyobjpRspGenUserText);
                    extra_pRspGenUserText->data = *pRspGenUserText;
                    pyobjpRspGenUserText_arg = pyobjpRspGenUserText;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRspGenUserText_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspGenUserText"), const_cast<char *>("OOOO"), pyobjpRspGenUserText_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspGenUserText);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报单录入请求响应
            void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOrder = NULL;
                PyObject *pyobjpInputOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputOrder) {
                    pyobjpInputOrder = PyType_GenericAlloc(PyCThostFtdcInputOrderFieldType, 0);
                    if (!pyobjpInputOrder) goto cleanup;
                    PyCThostFtdcInputOrderFieldData *extra_pInputOrder = PyCTP_GetTypeData<PyCThostFtdcInputOrderFieldData>(pyobjpInputOrder);
                    extra_pInputOrder->data = *pInputOrder;
                    pyobjpInputOrder_arg = pyobjpInputOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOrderInsert"), const_cast<char *>("OOOO"), pyobjpInputOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///预埋单录入请求响应
            void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpParkedOrder = NULL;
                PyObject *pyobjpParkedOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pParkedOrder) {
                    pyobjpParkedOrder = PyType_GenericAlloc(PyCThostFtdcParkedOrderFieldType, 0);
                    if (!pyobjpParkedOrder) goto cleanup;
                    PyCThostFtdcParkedOrderFieldData *extra_pParkedOrder = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(pyobjpParkedOrder);
                    extra_pParkedOrder->data = *pParkedOrder;
                    pyobjpParkedOrder_arg = pyobjpParkedOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpParkedOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspParkedOrderInsert"), const_cast<char *>("OOOO"), pyobjpParkedOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpParkedOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///预埋撤单录入请求响应
            void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpParkedOrderAction = NULL;
                PyObject *pyobjpParkedOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pParkedOrderAction) {
                    pyobjpParkedOrderAction = PyType_GenericAlloc(PyCThostFtdcParkedOrderActionFieldType, 0);
                    if (!pyobjpParkedOrderAction) goto cleanup;
                    PyCThostFtdcParkedOrderActionFieldData *extra_pParkedOrderAction = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(pyobjpParkedOrderAction);
                    extra_pParkedOrderAction->data = *pParkedOrderAction;
                    pyobjpParkedOrderAction_arg = pyobjpParkedOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpParkedOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspParkedOrderAction"), const_cast<char *>("OOOO"), pyobjpParkedOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpParkedOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报单操作请求响应
            void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOrderAction = NULL;
                PyObject *pyobjpInputOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputOrderAction) {
                    pyobjpInputOrderAction = PyType_GenericAlloc(PyCThostFtdcInputOrderActionFieldType, 0);
                    if (!pyobjpInputOrderAction) goto cleanup;
                    PyCThostFtdcInputOrderActionFieldData *extra_pInputOrderAction = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(pyobjpInputOrderAction);
                    extra_pInputOrderAction->data = *pInputOrderAction;
                    pyobjpInputOrderAction_arg = pyobjpInputOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOrderAction"), const_cast<char *>("OOOO"), pyobjpInputOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///查询最大报单数量响应
            void OnRspQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField *pQryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpQryMaxOrderVolume = NULL;
                PyObject *pyobjpQryMaxOrderVolume_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pQryMaxOrderVolume) {
                    pyobjpQryMaxOrderVolume = PyType_GenericAlloc(PyCThostFtdcQryMaxOrderVolumeFieldType, 0);
                    if (!pyobjpQryMaxOrderVolume) goto cleanup;
                    PyCThostFtdcQryMaxOrderVolumeFieldData *extra_pQryMaxOrderVolume = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeFieldData>(pyobjpQryMaxOrderVolume);
                    extra_pQryMaxOrderVolume->data = *pQryMaxOrderVolume;
                    pyobjpQryMaxOrderVolume_arg = pyobjpQryMaxOrderVolume;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpQryMaxOrderVolume_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryMaxOrderVolume"), const_cast<char *>("OOOO"), pyobjpQryMaxOrderVolume_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpQryMaxOrderVolume);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者结算结果确认响应
            void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSettlementInfoConfirm = NULL;
                PyObject *pyobjpSettlementInfoConfirm_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSettlementInfoConfirm) {
                    pyobjpSettlementInfoConfirm = PyType_GenericAlloc(PyCThostFtdcSettlementInfoConfirmFieldType, 0);
                    if (!pyobjpSettlementInfoConfirm) goto cleanup;
                    PyCThostFtdcSettlementInfoConfirmFieldData *extra_pSettlementInfoConfirm = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(pyobjpSettlementInfoConfirm);
                    extra_pSettlementInfoConfirm->data = *pSettlementInfoConfirm;
                    pyobjpSettlementInfoConfirm_arg = pyobjpSettlementInfoConfirm;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSettlementInfoConfirm_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSettlementInfoConfirm"), const_cast<char *>("OOOO"), pyobjpSettlementInfoConfirm_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSettlementInfoConfirm);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///删除预埋单响应
            void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRemoveParkedOrder = NULL;
                PyObject *pyobjpRemoveParkedOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRemoveParkedOrder) {
                    pyobjpRemoveParkedOrder = PyType_GenericAlloc(PyCThostFtdcRemoveParkedOrderFieldType, 0);
                    if (!pyobjpRemoveParkedOrder) goto cleanup;
                    PyCThostFtdcRemoveParkedOrderFieldData *extra_pRemoveParkedOrder = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(pyobjpRemoveParkedOrder);
                    extra_pRemoveParkedOrder->data = *pRemoveParkedOrder;
                    pyobjpRemoveParkedOrder_arg = pyobjpRemoveParkedOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRemoveParkedOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspRemoveParkedOrder"), const_cast<char *>("OOOO"), pyobjpRemoveParkedOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRemoveParkedOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///删除预埋撤单响应
            void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRemoveParkedOrderAction = NULL;
                PyObject *pyobjpRemoveParkedOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRemoveParkedOrderAction) {
                    pyobjpRemoveParkedOrderAction = PyType_GenericAlloc(PyCThostFtdcRemoveParkedOrderActionFieldType, 0);
                    if (!pyobjpRemoveParkedOrderAction) goto cleanup;
                    PyCThostFtdcRemoveParkedOrderActionFieldData *extra_pRemoveParkedOrderAction = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderActionFieldData>(pyobjpRemoveParkedOrderAction);
                    extra_pRemoveParkedOrderAction->data = *pRemoveParkedOrderAction;
                    pyobjpRemoveParkedOrderAction_arg = pyobjpRemoveParkedOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRemoveParkedOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspRemoveParkedOrderAction"), const_cast<char *>("OOOO"), pyobjpRemoveParkedOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRemoveParkedOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///执行宣告录入请求响应
            void OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputExecOrder = NULL;
                PyObject *pyobjpInputExecOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputExecOrder) {
                    pyobjpInputExecOrder = PyType_GenericAlloc(PyCThostFtdcInputExecOrderFieldType, 0);
                    if (!pyobjpInputExecOrder) goto cleanup;
                    PyCThostFtdcInputExecOrderFieldData *extra_pInputExecOrder = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(pyobjpInputExecOrder);
                    extra_pInputExecOrder->data = *pInputExecOrder;
                    pyobjpInputExecOrder_arg = pyobjpInputExecOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputExecOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspExecOrderInsert"), const_cast<char *>("OOOO"), pyobjpInputExecOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputExecOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///执行宣告操作请求响应
            void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputExecOrderAction = NULL;
                PyObject *pyobjpInputExecOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputExecOrderAction) {
                    pyobjpInputExecOrderAction = PyType_GenericAlloc(PyCThostFtdcInputExecOrderActionFieldType, 0);
                    if (!pyobjpInputExecOrderAction) goto cleanup;
                    PyCThostFtdcInputExecOrderActionFieldData *extra_pInputExecOrderAction = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(pyobjpInputExecOrderAction);
                    extra_pInputExecOrderAction->data = *pInputExecOrderAction;
                    pyobjpInputExecOrderAction_arg = pyobjpInputExecOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputExecOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspExecOrderAction"), const_cast<char *>("OOOO"), pyobjpInputExecOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputExecOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///询价录入请求响应
            void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputForQuote = NULL;
                PyObject *pyobjpInputForQuote_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputForQuote) {
                    pyobjpInputForQuote = PyType_GenericAlloc(PyCThostFtdcInputForQuoteFieldType, 0);
                    if (!pyobjpInputForQuote) goto cleanup;
                    PyCThostFtdcInputForQuoteFieldData *extra_pInputForQuote = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(pyobjpInputForQuote);
                    extra_pInputForQuote->data = *pInputForQuote;
                    pyobjpInputForQuote_arg = pyobjpInputForQuote;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputForQuote_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspForQuoteInsert"), const_cast<char *>("OOOO"), pyobjpInputForQuote_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputForQuote);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报价录入请求响应
            void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputQuote = NULL;
                PyObject *pyobjpInputQuote_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputQuote) {
                    pyobjpInputQuote = PyType_GenericAlloc(PyCThostFtdcInputQuoteFieldType, 0);
                    if (!pyobjpInputQuote) goto cleanup;
                    PyCThostFtdcInputQuoteFieldData *extra_pInputQuote = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(pyobjpInputQuote);
                    extra_pInputQuote->data = *pInputQuote;
                    pyobjpInputQuote_arg = pyobjpInputQuote;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputQuote_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQuoteInsert"), const_cast<char *>("OOOO"), pyobjpInputQuote_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputQuote);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报价操作请求响应
            void OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputQuoteAction = NULL;
                PyObject *pyobjpInputQuoteAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputQuoteAction) {
                    pyobjpInputQuoteAction = PyType_GenericAlloc(PyCThostFtdcInputQuoteActionFieldType, 0);
                    if (!pyobjpInputQuoteAction) goto cleanup;
                    PyCThostFtdcInputQuoteActionFieldData *extra_pInputQuoteAction = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(pyobjpInputQuoteAction);
                    extra_pInputQuoteAction->data = *pInputQuoteAction;
                    pyobjpInputQuoteAction_arg = pyobjpInputQuoteAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputQuoteAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQuoteAction"), const_cast<char *>("OOOO"), pyobjpInputQuoteAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputQuoteAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///批量报单操作请求响应
            void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputBatchOrderAction = NULL;
                PyObject *pyobjpInputBatchOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputBatchOrderAction) {
                    pyobjpInputBatchOrderAction = PyType_GenericAlloc(PyCThostFtdcInputBatchOrderActionFieldType, 0);
                    if (!pyobjpInputBatchOrderAction) goto cleanup;
                    PyCThostFtdcInputBatchOrderActionFieldData *extra_pInputBatchOrderAction = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(pyobjpInputBatchOrderAction);
                    extra_pInputBatchOrderAction->data = *pInputBatchOrderAction;
                    pyobjpInputBatchOrderAction_arg = pyobjpInputBatchOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputBatchOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspBatchOrderAction"), const_cast<char *>("OOOO"), pyobjpInputBatchOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputBatchOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期权自对冲录入请求响应
            void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOptionSelfClose = NULL;
                PyObject *pyobjpInputOptionSelfClose_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputOptionSelfClose) {
                    pyobjpInputOptionSelfClose = PyType_GenericAlloc(PyCThostFtdcInputOptionSelfCloseFieldType, 0);
                    if (!pyobjpInputOptionSelfClose) goto cleanup;
                    PyCThostFtdcInputOptionSelfCloseFieldData *extra_pInputOptionSelfClose = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(pyobjpInputOptionSelfClose);
                    extra_pInputOptionSelfClose->data = *pInputOptionSelfClose;
                    pyobjpInputOptionSelfClose_arg = pyobjpInputOptionSelfClose;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputOptionSelfClose_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOptionSelfCloseInsert"), const_cast<char *>("OOOO"), pyobjpInputOptionSelfClose_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOptionSelfClose);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期权自对冲操作请求响应
            void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOptionSelfCloseAction = NULL;
                PyObject *pyobjpInputOptionSelfCloseAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputOptionSelfCloseAction) {
                    pyobjpInputOptionSelfCloseAction = PyType_GenericAlloc(PyCThostFtdcInputOptionSelfCloseActionFieldType, 0);
                    if (!pyobjpInputOptionSelfCloseAction) goto cleanup;
                    PyCThostFtdcInputOptionSelfCloseActionFieldData *extra_pInputOptionSelfCloseAction = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(pyobjpInputOptionSelfCloseAction);
                    extra_pInputOptionSelfCloseAction->data = *pInputOptionSelfCloseAction;
                    pyobjpInputOptionSelfCloseAction_arg = pyobjpInputOptionSelfCloseAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputOptionSelfCloseAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOptionSelfCloseAction"), const_cast<char *>("OOOO"), pyobjpInputOptionSelfCloseAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOptionSelfCloseAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///申请组合录入请求响应
            void OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputCombAction = NULL;
                PyObject *pyobjpInputCombAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputCombAction) {
                    pyobjpInputCombAction = PyType_GenericAlloc(PyCThostFtdcInputCombActionFieldType, 0);
                    if (!pyobjpInputCombAction) goto cleanup;
                    PyCThostFtdcInputCombActionFieldData *extra_pInputCombAction = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(pyobjpInputCombAction);
                    extra_pInputCombAction->data = *pInputCombAction;
                    pyobjpInputCombAction_arg = pyobjpInputCombAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputCombAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspCombActionInsert"), const_cast<char *>("OOOO"), pyobjpInputCombAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputCombAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询报单响应
            void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOrder = NULL;
                PyObject *pyobjpOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pOrder) {
                    pyobjpOrder = PyType_GenericAlloc(PyCThostFtdcOrderFieldType, 0);
                    if (!pyobjpOrder) goto cleanup;
                    PyCThostFtdcOrderFieldData *extra_pOrder = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(pyobjpOrder);
                    extra_pOrder->data = *pOrder;
                    pyobjpOrder_arg = pyobjpOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOrder"), const_cast<char *>("OOOO"), pyobjpOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询成交响应
            void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTrade = NULL;
                PyObject *pyobjpTrade_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTrade) {
                    pyobjpTrade = PyType_GenericAlloc(PyCThostFtdcTradeFieldType, 0);
                    if (!pyobjpTrade) goto cleanup;
                    PyCThostFtdcTradeFieldData *extra_pTrade = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(pyobjpTrade);
                    extra_pTrade->data = *pTrade;
                    pyobjpTrade_arg = pyobjpTrade;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTrade_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTrade"), const_cast<char *>("OOOO"), pyobjpTrade_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTrade);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询投资者持仓响应
            void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorPosition = NULL;
                PyObject *pyobjpInvestorPosition_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorPosition) {
                    pyobjpInvestorPosition = PyType_GenericAlloc(PyCThostFtdcInvestorPositionFieldType, 0);
                    if (!pyobjpInvestorPosition) goto cleanup;
                    PyCThostFtdcInvestorPositionFieldData *extra_pInvestorPosition = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionFieldData>(pyobjpInvestorPosition);
                    extra_pInvestorPosition->data = *pInvestorPosition;
                    pyobjpInvestorPosition_arg = pyobjpInvestorPosition;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorPosition_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPosition"), const_cast<char *>("OOOO"), pyobjpInvestorPosition_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorPosition);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询资金账户响应
            void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTradingAccount = NULL;
                PyObject *pyobjpTradingAccount_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTradingAccount) {
                    pyobjpTradingAccount = PyType_GenericAlloc(PyCThostFtdcTradingAccountFieldType, 0);
                    if (!pyobjpTradingAccount) goto cleanup;
                    PyCThostFtdcTradingAccountFieldData *extra_pTradingAccount = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(pyobjpTradingAccount);
                    extra_pTradingAccount->data = *pTradingAccount;
                    pyobjpTradingAccount_arg = pyobjpTradingAccount;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTradingAccount_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingAccount"), const_cast<char *>("OOOO"), pyobjpTradingAccount_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTradingAccount);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询投资者响应
            void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestor = NULL;
                PyObject *pyobjpInvestor_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestor) {
                    pyobjpInvestor = PyType_GenericAlloc(PyCThostFtdcInvestorFieldType, 0);
                    if (!pyobjpInvestor) goto cleanup;
                    PyCThostFtdcInvestorFieldData *extra_pInvestor = PyCTP_GetTypeData<PyCThostFtdcInvestorFieldData>(pyobjpInvestor);
                    extra_pInvestor->data = *pInvestor;
                    pyobjpInvestor_arg = pyobjpInvestor;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestor_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestor"), const_cast<char *>("OOOO"), pyobjpInvestor_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestor);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询交易编码响应
            void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTradingCode = NULL;
                PyObject *pyobjpTradingCode_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTradingCode) {
                    pyobjpTradingCode = PyType_GenericAlloc(PyCThostFtdcTradingCodeFieldType, 0);
                    if (!pyobjpTradingCode) goto cleanup;
                    PyCThostFtdcTradingCodeFieldData *extra_pTradingCode = PyCTP_GetTypeData<PyCThostFtdcTradingCodeFieldData>(pyobjpTradingCode);
                    extra_pTradingCode->data = *pTradingCode;
                    pyobjpTradingCode_arg = pyobjpTradingCode;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTradingCode_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingCode"), const_cast<char *>("OOOO"), pyobjpTradingCode_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTradingCode);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询合约保证金率响应
            void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInstrumentMarginRate = NULL;
                PyObject *pyobjpInstrumentMarginRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInstrumentMarginRate) {
                    pyobjpInstrumentMarginRate = PyType_GenericAlloc(PyCThostFtdcInstrumentMarginRateFieldType, 0);
                    if (!pyobjpInstrumentMarginRate) goto cleanup;
                    PyCThostFtdcInstrumentMarginRateFieldData *extra_pInstrumentMarginRate = PyCTP_GetTypeData<PyCThostFtdcInstrumentMarginRateFieldData>(pyobjpInstrumentMarginRate);
                    extra_pInstrumentMarginRate->data = *pInstrumentMarginRate;
                    pyobjpInstrumentMarginRate_arg = pyobjpInstrumentMarginRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInstrumentMarginRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrumentMarginRate"), const_cast<char *>("OOOO"), pyobjpInstrumentMarginRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInstrumentMarginRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询合约手续费率响应
            void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInstrumentCommissionRate = NULL;
                PyObject *pyobjpInstrumentCommissionRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInstrumentCommissionRate) {
                    pyobjpInstrumentCommissionRate = PyType_GenericAlloc(PyCThostFtdcInstrumentCommissionRateFieldType, 0);
                    if (!pyobjpInstrumentCommissionRate) goto cleanup;
                    PyCThostFtdcInstrumentCommissionRateFieldData *extra_pInstrumentCommissionRate = PyCTP_GetTypeData<PyCThostFtdcInstrumentCommissionRateFieldData>(pyobjpInstrumentCommissionRate);
                    extra_pInstrumentCommissionRate->data = *pInstrumentCommissionRate;
                    pyobjpInstrumentCommissionRate_arg = pyobjpInstrumentCommissionRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInstrumentCommissionRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrumentCommissionRate"), const_cast<char *>("OOOO"), pyobjpInstrumentCommissionRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInstrumentCommissionRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询用户会话响应
            void OnRspQryUserSession(CThostFtdcUserSessionField *pUserSession, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpUserSession = NULL;
                PyObject *pyobjpUserSession_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pUserSession) {
                    pyobjpUserSession = PyType_GenericAlloc(PyCThostFtdcUserSessionFieldType, 0);
                    if (!pyobjpUserSession) goto cleanup;
                    PyCThostFtdcUserSessionFieldData *extra_pUserSession = PyCTP_GetTypeData<PyCThostFtdcUserSessionFieldData>(pyobjpUserSession);
                    extra_pUserSession->data = *pUserSession;
                    pyobjpUserSession_arg = pyobjpUserSession;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpUserSession_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryUserSession"), const_cast<char *>("OOOO"), pyobjpUserSession_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpUserSession);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询交易所响应
            void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpExchange = NULL;
                PyObject *pyobjpExchange_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pExchange) {
                    pyobjpExchange = PyType_GenericAlloc(PyCThostFtdcExchangeFieldType, 0);
                    if (!pyobjpExchange) goto cleanup;
                    PyCThostFtdcExchangeFieldData *extra_pExchange = PyCTP_GetTypeData<PyCThostFtdcExchangeFieldData>(pyobjpExchange);
                    extra_pExchange->data = *pExchange;
                    pyobjpExchange_arg = pyobjpExchange;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpExchange_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchange"), const_cast<char *>("OOOO"), pyobjpExchange_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpExchange);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询产品响应
            void OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpProduct = NULL;
                PyObject *pyobjpProduct_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pProduct) {
                    pyobjpProduct = PyType_GenericAlloc(PyCThostFtdcProductFieldType, 0);
                    if (!pyobjpProduct) goto cleanup;
                    PyCThostFtdcProductFieldData *extra_pProduct = PyCTP_GetTypeData<PyCThostFtdcProductFieldData>(pyobjpProduct);
                    extra_pProduct->data = *pProduct;
                    pyobjpProduct_arg = pyobjpProduct;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpProduct_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProduct"), const_cast<char *>("OOOO"), pyobjpProduct_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpProduct);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询合约响应
            void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInstrument = NULL;
                PyObject *pyobjpInstrument_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInstrument) {
                    pyobjpInstrument = PyType_GenericAlloc(PyCThostFtdcInstrumentFieldType, 0);
                    if (!pyobjpInstrument) goto cleanup;
                    PyCThostFtdcInstrumentFieldData *extra_pInstrument = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(pyobjpInstrument);
                    extra_pInstrument->data = *pInstrument;
                    pyobjpInstrument_arg = pyobjpInstrument;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrument"), const_cast<char *>("OOOO"), pyobjpInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInstrument);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询行情响应
            void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpDepthMarketData = NULL;
                PyObject *pyobjpDepthMarketData_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pDepthMarketData) {
                    pyobjpDepthMarketData = PyType_GenericAlloc(PyCThostFtdcDepthMarketDataFieldType, 0);
                    if (!pyobjpDepthMarketData) goto cleanup;
                    PyCThostFtdcDepthMarketDataFieldData *extra_pDepthMarketData = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(pyobjpDepthMarketData);
                    extra_pDepthMarketData->data = *pDepthMarketData;
                    pyobjpDepthMarketData_arg = pyobjpDepthMarketData;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpDepthMarketData_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryDepthMarketData"), const_cast<char *>("OOOO"), pyobjpDepthMarketData_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpDepthMarketData);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询交易员报盘机响应
            void OnRspQryTraderOffer(CThostFtdcTraderOfferField *pTraderOffer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTraderOffer = NULL;
                PyObject *pyobjpTraderOffer_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTraderOffer) {
                    pyobjpTraderOffer = PyType_GenericAlloc(PyCThostFtdcTraderOfferFieldType, 0);
                    if (!pyobjpTraderOffer) goto cleanup;
                    PyCThostFtdcTraderOfferFieldData *extra_pTraderOffer = PyCTP_GetTypeData<PyCThostFtdcTraderOfferFieldData>(pyobjpTraderOffer);
                    extra_pTraderOffer->data = *pTraderOffer;
                    pyobjpTraderOffer_arg = pyobjpTraderOffer;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTraderOffer_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTraderOffer"), const_cast<char *>("OOOO"), pyobjpTraderOffer_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTraderOffer);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询投资者结算结果响应
            void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSettlementInfo = NULL;
                PyObject *pyobjpSettlementInfo_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSettlementInfo) {
                    pyobjpSettlementInfo = PyType_GenericAlloc(PyCThostFtdcSettlementInfoFieldType, 0);
                    if (!pyobjpSettlementInfo) goto cleanup;
                    PyCThostFtdcSettlementInfoFieldData *extra_pSettlementInfo = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoFieldData>(pyobjpSettlementInfo);
                    extra_pSettlementInfo->data = *pSettlementInfo;
                    pyobjpSettlementInfo_arg = pyobjpSettlementInfo;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSettlementInfo_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySettlementInfo"), const_cast<char *>("OOOO"), pyobjpSettlementInfo_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSettlementInfo);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询转帐银行响应
            void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTransferBank = NULL;
                PyObject *pyobjpTransferBank_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTransferBank) {
                    pyobjpTransferBank = PyType_GenericAlloc(PyCThostFtdcTransferBankFieldType, 0);
                    if (!pyobjpTransferBank) goto cleanup;
                    PyCThostFtdcTransferBankFieldData *extra_pTransferBank = PyCTP_GetTypeData<PyCThostFtdcTransferBankFieldData>(pyobjpTransferBank);
                    extra_pTransferBank->data = *pTransferBank;
                    pyobjpTransferBank_arg = pyobjpTransferBank;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTransferBank_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTransferBank"), const_cast<char *>("OOOO"), pyobjpTransferBank_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTransferBank);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询投资者持仓明细响应
            void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorPositionDetail = NULL;
                PyObject *pyobjpInvestorPositionDetail_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorPositionDetail) {
                    pyobjpInvestorPositionDetail = PyType_GenericAlloc(PyCThostFtdcInvestorPositionDetailFieldType, 0);
                    if (!pyobjpInvestorPositionDetail) goto cleanup;
                    PyCThostFtdcInvestorPositionDetailFieldData *extra_pInvestorPositionDetail = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionDetailFieldData>(pyobjpInvestorPositionDetail);
                    extra_pInvestorPositionDetail->data = *pInvestorPositionDetail;
                    pyobjpInvestorPositionDetail_arg = pyobjpInvestorPositionDetail;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorPositionDetail_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPositionDetail"), const_cast<char *>("OOOO"), pyobjpInvestorPositionDetail_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorPositionDetail);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询客户通知响应
            void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpNotice = NULL;
                PyObject *pyobjpNotice_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pNotice) {
                    pyobjpNotice = PyType_GenericAlloc(PyCThostFtdcNoticeFieldType, 0);
                    if (!pyobjpNotice) goto cleanup;
                    PyCThostFtdcNoticeFieldData *extra_pNotice = PyCTP_GetTypeData<PyCThostFtdcNoticeFieldData>(pyobjpNotice);
                    extra_pNotice->data = *pNotice;
                    pyobjpNotice_arg = pyobjpNotice;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpNotice_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryNotice"), const_cast<char *>("OOOO"), pyobjpNotice_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpNotice);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询结算信息确认响应
            void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSettlementInfoConfirm = NULL;
                PyObject *pyobjpSettlementInfoConfirm_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSettlementInfoConfirm) {
                    pyobjpSettlementInfoConfirm = PyType_GenericAlloc(PyCThostFtdcSettlementInfoConfirmFieldType, 0);
                    if (!pyobjpSettlementInfoConfirm) goto cleanup;
                    PyCThostFtdcSettlementInfoConfirmFieldData *extra_pSettlementInfoConfirm = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(pyobjpSettlementInfoConfirm);
                    extra_pSettlementInfoConfirm->data = *pSettlementInfoConfirm;
                    pyobjpSettlementInfoConfirm_arg = pyobjpSettlementInfoConfirm;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSettlementInfoConfirm_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySettlementInfoConfirm"), const_cast<char *>("OOOO"), pyobjpSettlementInfoConfirm_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSettlementInfoConfirm);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询投资者持仓明细响应
            void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorPositionCombineDetail = NULL;
                PyObject *pyobjpInvestorPositionCombineDetail_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorPositionCombineDetail) {
                    pyobjpInvestorPositionCombineDetail = PyType_GenericAlloc(PyCThostFtdcInvestorPositionCombineDetailFieldType, 0);
                    if (!pyobjpInvestorPositionCombineDetail) goto cleanup;
                    PyCThostFtdcInvestorPositionCombineDetailFieldData *extra_pInvestorPositionCombineDetail = PyCTP_GetTypeData<PyCThostFtdcInvestorPositionCombineDetailFieldData>(pyobjpInvestorPositionCombineDetail);
                    extra_pInvestorPositionCombineDetail->data = *pInvestorPositionCombineDetail;
                    pyobjpInvestorPositionCombineDetail_arg = pyobjpInvestorPositionCombineDetail;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorPositionCombineDetail_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPositionCombineDetail"), const_cast<char *>("OOOO"), pyobjpInvestorPositionCombineDetail_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorPositionCombineDetail);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///查询保证金监管系统经纪公司资金账户密钥响应
            void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCFMMCTradingAccountKey = NULL;
                PyObject *pyobjpCFMMCTradingAccountKey_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pCFMMCTradingAccountKey) {
                    pyobjpCFMMCTradingAccountKey = PyType_GenericAlloc(PyCThostFtdcCFMMCTradingAccountKeyFieldType, 0);
                    if (!pyobjpCFMMCTradingAccountKey) goto cleanup;
                    PyCThostFtdcCFMMCTradingAccountKeyFieldData *extra_pCFMMCTradingAccountKey = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountKeyFieldData>(pyobjpCFMMCTradingAccountKey);
                    extra_pCFMMCTradingAccountKey->data = *pCFMMCTradingAccountKey;
                    pyobjpCFMMCTradingAccountKey_arg = pyobjpCFMMCTradingAccountKey;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpCFMMCTradingAccountKey_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCFMMCTradingAccountKey"), const_cast<char *>("OOOO"), pyobjpCFMMCTradingAccountKey_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCFMMCTradingAccountKey);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询仓单折抵信息响应
            void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpEWarrantOffset = NULL;
                PyObject *pyobjpEWarrantOffset_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pEWarrantOffset) {
                    pyobjpEWarrantOffset = PyType_GenericAlloc(PyCThostFtdcEWarrantOffsetFieldType, 0);
                    if (!pyobjpEWarrantOffset) goto cleanup;
                    PyCThostFtdcEWarrantOffsetFieldData *extra_pEWarrantOffset = PyCTP_GetTypeData<PyCThostFtdcEWarrantOffsetFieldData>(pyobjpEWarrantOffset);
                    extra_pEWarrantOffset->data = *pEWarrantOffset;
                    pyobjpEWarrantOffset_arg = pyobjpEWarrantOffset;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpEWarrantOffset_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryEWarrantOffset"), const_cast<char *>("OOOO"), pyobjpEWarrantOffset_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpEWarrantOffset);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询投资者品种/跨品种保证金响应
            void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorProductGroupMargin = NULL;
                PyObject *pyobjpInvestorProductGroupMargin_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorProductGroupMargin) {
                    pyobjpInvestorProductGroupMargin = PyType_GenericAlloc(PyCThostFtdcInvestorProductGroupMarginFieldType, 0);
                    if (!pyobjpInvestorProductGroupMargin) goto cleanup;
                    PyCThostFtdcInvestorProductGroupMarginFieldData *extra_pInvestorProductGroupMargin = PyCTP_GetTypeData<PyCThostFtdcInvestorProductGroupMarginFieldData>(pyobjpInvestorProductGroupMargin);
                    extra_pInvestorProductGroupMargin->data = *pInvestorProductGroupMargin;
                    pyobjpInvestorProductGroupMargin_arg = pyobjpInvestorProductGroupMargin;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorProductGroupMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProductGroupMargin"), const_cast<char *>("OOOO"), pyobjpInvestorProductGroupMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorProductGroupMargin);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询交易所保证金率响应
            void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpExchangeMarginRate = NULL;
                PyObject *pyobjpExchangeMarginRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pExchangeMarginRate) {
                    pyobjpExchangeMarginRate = PyType_GenericAlloc(PyCThostFtdcExchangeMarginRateFieldType, 0);
                    if (!pyobjpExchangeMarginRate) goto cleanup;
                    PyCThostFtdcExchangeMarginRateFieldData *extra_pExchangeMarginRate = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateFieldData>(pyobjpExchangeMarginRate);
                    extra_pExchangeMarginRate->data = *pExchangeMarginRate;
                    pyobjpExchangeMarginRate_arg = pyobjpExchangeMarginRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpExchangeMarginRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeMarginRate"), const_cast<char *>("OOOO"), pyobjpExchangeMarginRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpExchangeMarginRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询交易所调整保证金率响应
            void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpExchangeMarginRateAdjust = NULL;
                PyObject *pyobjpExchangeMarginRateAdjust_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pExchangeMarginRateAdjust) {
                    pyobjpExchangeMarginRateAdjust = PyType_GenericAlloc(PyCThostFtdcExchangeMarginRateAdjustFieldType, 0);
                    if (!pyobjpExchangeMarginRateAdjust) goto cleanup;
                    PyCThostFtdcExchangeMarginRateAdjustFieldData *extra_pExchangeMarginRateAdjust = PyCTP_GetTypeData<PyCThostFtdcExchangeMarginRateAdjustFieldData>(pyobjpExchangeMarginRateAdjust);
                    extra_pExchangeMarginRateAdjust->data = *pExchangeMarginRateAdjust;
                    pyobjpExchangeMarginRateAdjust_arg = pyobjpExchangeMarginRateAdjust;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpExchangeMarginRateAdjust_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeMarginRateAdjust"), const_cast<char *>("OOOO"), pyobjpExchangeMarginRateAdjust_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpExchangeMarginRateAdjust);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询汇率响应
            void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpExchangeRate = NULL;
                PyObject *pyobjpExchangeRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pExchangeRate) {
                    pyobjpExchangeRate = PyType_GenericAlloc(PyCThostFtdcExchangeRateFieldType, 0);
                    if (!pyobjpExchangeRate) goto cleanup;
                    PyCThostFtdcExchangeRateFieldData *extra_pExchangeRate = PyCTP_GetTypeData<PyCThostFtdcExchangeRateFieldData>(pyobjpExchangeRate);
                    extra_pExchangeRate->data = *pExchangeRate;
                    pyobjpExchangeRate_arg = pyobjpExchangeRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpExchangeRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExchangeRate"), const_cast<char *>("OOOO"), pyobjpExchangeRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpExchangeRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询二级代理操作员银期权限响应
            void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSecAgentACIDMap = NULL;
                PyObject *pyobjpSecAgentACIDMap_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSecAgentACIDMap) {
                    pyobjpSecAgentACIDMap = PyType_GenericAlloc(PyCThostFtdcSecAgentACIDMapFieldType, 0);
                    if (!pyobjpSecAgentACIDMap) goto cleanup;
                    PyCThostFtdcSecAgentACIDMapFieldData *extra_pSecAgentACIDMap = PyCTP_GetTypeData<PyCThostFtdcSecAgentACIDMapFieldData>(pyobjpSecAgentACIDMap);
                    extra_pSecAgentACIDMap->data = *pSecAgentACIDMap;
                    pyobjpSecAgentACIDMap_arg = pyobjpSecAgentACIDMap;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSecAgentACIDMap_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentACIDMap"), const_cast<char *>("OOOO"), pyobjpSecAgentACIDMap_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSecAgentACIDMap);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询产品报价汇率
            void OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpProductExchRate = NULL;
                PyObject *pyobjpProductExchRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pProductExchRate) {
                    pyobjpProductExchRate = PyType_GenericAlloc(PyCThostFtdcProductExchRateFieldType, 0);
                    if (!pyobjpProductExchRate) goto cleanup;
                    PyCThostFtdcProductExchRateFieldData *extra_pProductExchRate = PyCTP_GetTypeData<PyCThostFtdcProductExchRateFieldData>(pyobjpProductExchRate);
                    extra_pProductExchRate->data = *pProductExchRate;
                    pyobjpProductExchRate_arg = pyobjpProductExchRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpProductExchRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProductExchRate"), const_cast<char *>("OOOO"), pyobjpProductExchRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpProductExchRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询产品组
            void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpProductGroup = NULL;
                PyObject *pyobjpProductGroup_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pProductGroup) {
                    pyobjpProductGroup = PyType_GenericAlloc(PyCThostFtdcProductGroupFieldType, 0);
                    if (!pyobjpProductGroup) goto cleanup;
                    PyCThostFtdcProductGroupFieldData *extra_pProductGroup = PyCTP_GetTypeData<PyCThostFtdcProductGroupFieldData>(pyobjpProductGroup);
                    extra_pProductGroup->data = *pProductGroup;
                    pyobjpProductGroup_arg = pyobjpProductGroup;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpProductGroup_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryProductGroup"), const_cast<char *>("OOOO"), pyobjpProductGroup_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpProductGroup);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询做市商合约手续费率响应
            void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpMMInstrumentCommissionRate = NULL;
                PyObject *pyobjpMMInstrumentCommissionRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pMMInstrumentCommissionRate) {
                    pyobjpMMInstrumentCommissionRate = PyType_GenericAlloc(PyCThostFtdcMMInstrumentCommissionRateFieldType, 0);
                    if (!pyobjpMMInstrumentCommissionRate) goto cleanup;
                    PyCThostFtdcMMInstrumentCommissionRateFieldData *extra_pMMInstrumentCommissionRate = PyCTP_GetTypeData<PyCThostFtdcMMInstrumentCommissionRateFieldData>(pyobjpMMInstrumentCommissionRate);
                    extra_pMMInstrumentCommissionRate->data = *pMMInstrumentCommissionRate;
                    pyobjpMMInstrumentCommissionRate_arg = pyobjpMMInstrumentCommissionRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpMMInstrumentCommissionRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryMMInstrumentCommissionRate"), const_cast<char *>("OOOO"), pyobjpMMInstrumentCommissionRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpMMInstrumentCommissionRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询做市商期权合约手续费响应
            void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpMMOptionInstrCommRate = NULL;
                PyObject *pyobjpMMOptionInstrCommRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pMMOptionInstrCommRate) {
                    pyobjpMMOptionInstrCommRate = PyType_GenericAlloc(PyCThostFtdcMMOptionInstrCommRateFieldType, 0);
                    if (!pyobjpMMOptionInstrCommRate) goto cleanup;
                    PyCThostFtdcMMOptionInstrCommRateFieldData *extra_pMMOptionInstrCommRate = PyCTP_GetTypeData<PyCThostFtdcMMOptionInstrCommRateFieldData>(pyobjpMMOptionInstrCommRate);
                    extra_pMMOptionInstrCommRate->data = *pMMOptionInstrCommRate;
                    pyobjpMMOptionInstrCommRate_arg = pyobjpMMOptionInstrCommRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpMMOptionInstrCommRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryMMOptionInstrCommRate"), const_cast<char *>("OOOO"), pyobjpMMOptionInstrCommRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpMMOptionInstrCommRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询报单手续费响应
            void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInstrumentOrderCommRate = NULL;
                PyObject *pyobjpInstrumentOrderCommRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInstrumentOrderCommRate) {
                    pyobjpInstrumentOrderCommRate = PyType_GenericAlloc(PyCThostFtdcInstrumentOrderCommRateFieldType, 0);
                    if (!pyobjpInstrumentOrderCommRate) goto cleanup;
                    PyCThostFtdcInstrumentOrderCommRateFieldData *extra_pInstrumentOrderCommRate = PyCTP_GetTypeData<PyCThostFtdcInstrumentOrderCommRateFieldData>(pyobjpInstrumentOrderCommRate);
                    extra_pInstrumentOrderCommRate->data = *pInstrumentOrderCommRate;
                    pyobjpInstrumentOrderCommRate_arg = pyobjpInstrumentOrderCommRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInstrumentOrderCommRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInstrumentOrderCommRate"), const_cast<char *>("OOOO"), pyobjpInstrumentOrderCommRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInstrumentOrderCommRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询资金账户响应
            void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTradingAccount = NULL;
                PyObject *pyobjpTradingAccount_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTradingAccount) {
                    pyobjpTradingAccount = PyType_GenericAlloc(PyCThostFtdcTradingAccountFieldType, 0);
                    if (!pyobjpTradingAccount) goto cleanup;
                    PyCThostFtdcTradingAccountFieldData *extra_pTradingAccount = PyCTP_GetTypeData<PyCThostFtdcTradingAccountFieldData>(pyobjpTradingAccount);
                    extra_pTradingAccount->data = *pTradingAccount;
                    pyobjpTradingAccount_arg = pyobjpTradingAccount;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTradingAccount_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentTradingAccount"), const_cast<char *>("OOOO"), pyobjpTradingAccount_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTradingAccount);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询二级代理商资金校验模式响应
            void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSecAgentCheckMode = NULL;
                PyObject *pyobjpSecAgentCheckMode_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSecAgentCheckMode) {
                    pyobjpSecAgentCheckMode = PyType_GenericAlloc(PyCThostFtdcSecAgentCheckModeFieldType, 0);
                    if (!pyobjpSecAgentCheckMode) goto cleanup;
                    PyCThostFtdcSecAgentCheckModeFieldData *extra_pSecAgentCheckMode = PyCTP_GetTypeData<PyCThostFtdcSecAgentCheckModeFieldData>(pyobjpSecAgentCheckMode);
                    extra_pSecAgentCheckMode->data = *pSecAgentCheckMode;
                    pyobjpSecAgentCheckMode_arg = pyobjpSecAgentCheckMode;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSecAgentCheckMode_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentCheckMode"), const_cast<char *>("OOOO"), pyobjpSecAgentCheckMode_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSecAgentCheckMode);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询二级代理商信息响应
            void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSecAgentTradeInfo = NULL;
                PyObject *pyobjpSecAgentTradeInfo_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSecAgentTradeInfo) {
                    pyobjpSecAgentTradeInfo = PyType_GenericAlloc(PyCThostFtdcSecAgentTradeInfoFieldType, 0);
                    if (!pyobjpSecAgentTradeInfo) goto cleanup;
                    PyCThostFtdcSecAgentTradeInfoFieldData *extra_pSecAgentTradeInfo = PyCTP_GetTypeData<PyCThostFtdcSecAgentTradeInfoFieldData>(pyobjpSecAgentTradeInfo);
                    extra_pSecAgentTradeInfo->data = *pSecAgentTradeInfo;
                    pyobjpSecAgentTradeInfo_arg = pyobjpSecAgentTradeInfo;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSecAgentTradeInfo_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySecAgentTradeInfo"), const_cast<char *>("OOOO"), pyobjpSecAgentTradeInfo_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSecAgentTradeInfo);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询期权交易成本响应
            void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOptionInstrTradeCost = NULL;
                PyObject *pyobjpOptionInstrTradeCost_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pOptionInstrTradeCost) {
                    pyobjpOptionInstrTradeCost = PyType_GenericAlloc(PyCThostFtdcOptionInstrTradeCostFieldType, 0);
                    if (!pyobjpOptionInstrTradeCost) goto cleanup;
                    PyCThostFtdcOptionInstrTradeCostFieldData *extra_pOptionInstrTradeCost = PyCTP_GetTypeData<PyCThostFtdcOptionInstrTradeCostFieldData>(pyobjpOptionInstrTradeCost);
                    extra_pOptionInstrTradeCost->data = *pOptionInstrTradeCost;
                    pyobjpOptionInstrTradeCost_arg = pyobjpOptionInstrTradeCost;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpOptionInstrTradeCost_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOptionInstrTradeCost"), const_cast<char *>("OOOO"), pyobjpOptionInstrTradeCost_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOptionInstrTradeCost);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询期权合约手续费响应
            void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOptionInstrCommRate = NULL;
                PyObject *pyobjpOptionInstrCommRate_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pOptionInstrCommRate) {
                    pyobjpOptionInstrCommRate = PyType_GenericAlloc(PyCThostFtdcOptionInstrCommRateFieldType, 0);
                    if (!pyobjpOptionInstrCommRate) goto cleanup;
                    PyCThostFtdcOptionInstrCommRateFieldData *extra_pOptionInstrCommRate = PyCTP_GetTypeData<PyCThostFtdcOptionInstrCommRateFieldData>(pyobjpOptionInstrCommRate);
                    extra_pOptionInstrCommRate->data = *pOptionInstrCommRate;
                    pyobjpOptionInstrCommRate_arg = pyobjpOptionInstrCommRate;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpOptionInstrCommRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOptionInstrCommRate"), const_cast<char *>("OOOO"), pyobjpOptionInstrCommRate_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOptionInstrCommRate);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询执行宣告响应
            void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpExecOrder = NULL;
                PyObject *pyobjpExecOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pExecOrder) {
                    pyobjpExecOrder = PyType_GenericAlloc(PyCThostFtdcExecOrderFieldType, 0);
                    if (!pyobjpExecOrder) goto cleanup;
                    PyCThostFtdcExecOrderFieldData *extra_pExecOrder = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(pyobjpExecOrder);
                    extra_pExecOrder->data = *pExecOrder;
                    pyobjpExecOrder_arg = pyobjpExecOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpExecOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryExecOrder"), const_cast<char *>("OOOO"), pyobjpExecOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpExecOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询询价响应
            void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpForQuote = NULL;
                PyObject *pyobjpForQuote_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pForQuote) {
                    pyobjpForQuote = PyType_GenericAlloc(PyCThostFtdcForQuoteFieldType, 0);
                    if (!pyobjpForQuote) goto cleanup;
                    PyCThostFtdcForQuoteFieldData *extra_pForQuote = PyCTP_GetTypeData<PyCThostFtdcForQuoteFieldData>(pyobjpForQuote);
                    extra_pForQuote->data = *pForQuote;
                    pyobjpForQuote_arg = pyobjpForQuote;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpForQuote_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryForQuote"), const_cast<char *>("OOOO"), pyobjpForQuote_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpForQuote);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询报价响应
            void OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpQuote = NULL;
                PyObject *pyobjpQuote_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pQuote) {
                    pyobjpQuote = PyType_GenericAlloc(PyCThostFtdcQuoteFieldType, 0);
                    if (!pyobjpQuote) goto cleanup;
                    PyCThostFtdcQuoteFieldData *extra_pQuote = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(pyobjpQuote);
                    extra_pQuote->data = *pQuote;
                    pyobjpQuote_arg = pyobjpQuote;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpQuote_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryQuote"), const_cast<char *>("OOOO"), pyobjpQuote_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpQuote);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询期权自对冲响应
            void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOptionSelfClose = NULL;
                PyObject *pyobjpOptionSelfClose_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pOptionSelfClose) {
                    pyobjpOptionSelfClose = PyType_GenericAlloc(PyCThostFtdcOptionSelfCloseFieldType, 0);
                    if (!pyobjpOptionSelfClose) goto cleanup;
                    PyCThostFtdcOptionSelfCloseFieldData *extra_pOptionSelfClose = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(pyobjpOptionSelfClose);
                    extra_pOptionSelfClose->data = *pOptionSelfClose;
                    pyobjpOptionSelfClose_arg = pyobjpOptionSelfClose;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpOptionSelfClose_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOptionSelfClose"), const_cast<char *>("OOOO"), pyobjpOptionSelfClose_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOptionSelfClose);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询投资单元响应
            void OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestUnit = NULL;
                PyObject *pyobjpInvestUnit_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestUnit) {
                    pyobjpInvestUnit = PyType_GenericAlloc(PyCThostFtdcInvestUnitFieldType, 0);
                    if (!pyobjpInvestUnit) goto cleanup;
                    PyCThostFtdcInvestUnitFieldData *extra_pInvestUnit = PyCTP_GetTypeData<PyCThostFtdcInvestUnitFieldData>(pyobjpInvestUnit);
                    extra_pInvestUnit->data = *pInvestUnit;
                    pyobjpInvestUnit_arg = pyobjpInvestUnit;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestUnit_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestUnit"), const_cast<char *>("OOOO"), pyobjpInvestUnit_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestUnit);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询组合合约安全系数响应
            void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCombInstrumentGuard = NULL;
                PyObject *pyobjpCombInstrumentGuard_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pCombInstrumentGuard) {
                    pyobjpCombInstrumentGuard = PyType_GenericAlloc(PyCThostFtdcCombInstrumentGuardFieldType, 0);
                    if (!pyobjpCombInstrumentGuard) goto cleanup;
                    PyCThostFtdcCombInstrumentGuardFieldData *extra_pCombInstrumentGuard = PyCTP_GetTypeData<PyCThostFtdcCombInstrumentGuardFieldData>(pyobjpCombInstrumentGuard);
                    extra_pCombInstrumentGuard->data = *pCombInstrumentGuard;
                    pyobjpCombInstrumentGuard_arg = pyobjpCombInstrumentGuard;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpCombInstrumentGuard_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombInstrumentGuard"), const_cast<char *>("OOOO"), pyobjpCombInstrumentGuard_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCombInstrumentGuard);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询申请组合响应
            void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCombAction = NULL;
                PyObject *pyobjpCombAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pCombAction) {
                    pyobjpCombAction = PyType_GenericAlloc(PyCThostFtdcCombActionFieldType, 0);
                    if (!pyobjpCombAction) goto cleanup;
                    PyCThostFtdcCombActionFieldData *extra_pCombAction = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(pyobjpCombAction);
                    extra_pCombAction->data = *pCombAction;
                    pyobjpCombAction_arg = pyobjpCombAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpCombAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombAction"), const_cast<char *>("OOOO"), pyobjpCombAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCombAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询转帐流水响应
            void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTransferSerial = NULL;
                PyObject *pyobjpTransferSerial_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTransferSerial) {
                    pyobjpTransferSerial = PyType_GenericAlloc(PyCThostFtdcTransferSerialFieldType, 0);
                    if (!pyobjpTransferSerial) goto cleanup;
                    PyCThostFtdcTransferSerialFieldData *extra_pTransferSerial = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(pyobjpTransferSerial);
                    extra_pTransferSerial->data = *pTransferSerial;
                    pyobjpTransferSerial_arg = pyobjpTransferSerial;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTransferSerial_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTransferSerial"), const_cast<char *>("OOOO"), pyobjpTransferSerial_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTransferSerial);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询银期签约关系响应
            void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpAccountregister = NULL;
                PyObject *pyobjpAccountregister_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pAccountregister) {
                    pyobjpAccountregister = PyType_GenericAlloc(PyCThostFtdcAccountregisterFieldType, 0);
                    if (!pyobjpAccountregister) goto cleanup;
                    PyCThostFtdcAccountregisterFieldData *extra_pAccountregister = PyCTP_GetTypeData<PyCThostFtdcAccountregisterFieldData>(pyobjpAccountregister);
                    extra_pAccountregister->data = *pAccountregister;
                    pyobjpAccountregister_arg = pyobjpAccountregister;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpAccountregister_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryAccountregister"), const_cast<char *>("OOOO"), pyobjpAccountregister_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpAccountregister);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///错误应答
            void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOO"), pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspError"), const_cast<char *>("OOO"), pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报单通知
            void OnRtnOrder(CThostFtdcOrderField *pOrder) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOrder = NULL;
                PyObject *pyobjpOrder_arg = Py_None;
                PyObject *result = NULL;

                if (pOrder) {
                    pyobjpOrder = PyType_GenericAlloc(PyCThostFtdcOrderFieldType, 0);
                    if (!pyobjpOrder) goto cleanup;
                    PyCThostFtdcOrderFieldData *extra_pOrder = PyCTP_GetTypeData<PyCThostFtdcOrderFieldData>(pyobjpOrder);
                    extra_pOrder->data = *pOrder;
                    pyobjpOrder_arg = pyobjpOrder;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpOrder_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOrder"), const_cast<char *>("O"), pyobjpOrder_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOrder);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///成交通知
            void OnRtnTrade(CThostFtdcTradeField *pTrade) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTrade = NULL;
                PyObject *pyobjpTrade_arg = Py_None;
                PyObject *result = NULL;

                if (pTrade) {
                    pyobjpTrade = PyType_GenericAlloc(PyCThostFtdcTradeFieldType, 0);
                    if (!pyobjpTrade) goto cleanup;
                    PyCThostFtdcTradeFieldData *extra_pTrade = PyCTP_GetTypeData<PyCThostFtdcTradeFieldData>(pyobjpTrade);
                    extra_pTrade->data = *pTrade;
                    pyobjpTrade_arg = pyobjpTrade;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpTrade_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnTrade"), const_cast<char *>("O"), pyobjpTrade_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTrade);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报单录入错误回报
            void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOrder = NULL;
                PyObject *pyobjpInputOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputOrder) {
                    pyobjpInputOrder = PyType_GenericAlloc(PyCThostFtdcInputOrderFieldType, 0);
                    if (!pyobjpInputOrder) goto cleanup;
                    PyCThostFtdcInputOrderFieldData *extra_pInputOrder = PyCTP_GetTypeData<PyCThostFtdcInputOrderFieldData>(pyobjpInputOrder);
                    extra_pInputOrder->data = *pInputOrder;
                    pyobjpInputOrder_arg = pyobjpInputOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputOrder_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOrderInsert"), const_cast<char *>("OO"), pyobjpInputOrder_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报单操作错误回报
            void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOrderAction = NULL;
                PyObject *pyobjpOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pOrderAction) {
                    pyobjpOrderAction = PyType_GenericAlloc(PyCThostFtdcOrderActionFieldType, 0);
                    if (!pyobjpOrderAction) goto cleanup;
                    PyCThostFtdcOrderActionFieldData *extra_pOrderAction = PyCTP_GetTypeData<PyCThostFtdcOrderActionFieldData>(pyobjpOrderAction);
                    extra_pOrderAction->data = *pOrderAction;
                    pyobjpOrderAction_arg = pyobjpOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpOrderAction_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOrderAction"), const_cast<char *>("OO"), pyobjpOrderAction_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///合约交易状态通知
            void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInstrumentStatus = NULL;
                PyObject *pyobjpInstrumentStatus_arg = Py_None;
                PyObject *result = NULL;

                if (pInstrumentStatus) {
                    pyobjpInstrumentStatus = PyType_GenericAlloc(PyCThostFtdcInstrumentStatusFieldType, 0);
                    if (!pyobjpInstrumentStatus) goto cleanup;
                    PyCThostFtdcInstrumentStatusFieldData *extra_pInstrumentStatus = PyCTP_GetTypeData<PyCThostFtdcInstrumentStatusFieldData>(pyobjpInstrumentStatus);
                    extra_pInstrumentStatus->data = *pInstrumentStatus;
                    pyobjpInstrumentStatus_arg = pyobjpInstrumentStatus;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpInstrumentStatus_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnInstrumentStatus"), const_cast<char *>("O"), pyobjpInstrumentStatus_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInstrumentStatus);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///交易所公告通知
            void OnRtnBulletin(CThostFtdcBulletinField *pBulletin) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpBulletin = NULL;
                PyObject *pyobjpBulletin_arg = Py_None;
                PyObject *result = NULL;

                if (pBulletin) {
                    pyobjpBulletin = PyType_GenericAlloc(PyCThostFtdcBulletinFieldType, 0);
                    if (!pyobjpBulletin) goto cleanup;
                    PyCThostFtdcBulletinFieldData *extra_pBulletin = PyCTP_GetTypeData<PyCThostFtdcBulletinFieldData>(pyobjpBulletin);
                    extra_pBulletin->data = *pBulletin;
                    pyobjpBulletin_arg = pyobjpBulletin;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpBulletin_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnBulletin"), const_cast<char *>("O"), pyobjpBulletin_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpBulletin);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///交易通知
            void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTradingNoticeInfo = NULL;
                PyObject *pyobjpTradingNoticeInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pTradingNoticeInfo) {
                    pyobjpTradingNoticeInfo = PyType_GenericAlloc(PyCThostFtdcTradingNoticeInfoFieldType, 0);
                    if (!pyobjpTradingNoticeInfo) goto cleanup;
                    PyCThostFtdcTradingNoticeInfoFieldData *extra_pTradingNoticeInfo = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeInfoFieldData>(pyobjpTradingNoticeInfo);
                    extra_pTradingNoticeInfo->data = *pTradingNoticeInfo;
                    pyobjpTradingNoticeInfo_arg = pyobjpTradingNoticeInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpTradingNoticeInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnTradingNotice"), const_cast<char *>("O"), pyobjpTradingNoticeInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTradingNoticeInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///提示条件单校验错误
            void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpErrorConditionalOrder = NULL;
                PyObject *pyobjpErrorConditionalOrder_arg = Py_None;
                PyObject *result = NULL;

                if (pErrorConditionalOrder) {
                    pyobjpErrorConditionalOrder = PyType_GenericAlloc(PyCThostFtdcErrorConditionalOrderFieldType, 0);
                    if (!pyobjpErrorConditionalOrder) goto cleanup;
                    PyCThostFtdcErrorConditionalOrderFieldData *extra_pErrorConditionalOrder = PyCTP_GetTypeData<PyCThostFtdcErrorConditionalOrderFieldData>(pyobjpErrorConditionalOrder);
                    extra_pErrorConditionalOrder->data = *pErrorConditionalOrder;
                    pyobjpErrorConditionalOrder_arg = pyobjpErrorConditionalOrder;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpErrorConditionalOrder_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnErrorConditionalOrder"), const_cast<char *>("O"), pyobjpErrorConditionalOrder_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpErrorConditionalOrder);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///执行宣告通知
            void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpExecOrder = NULL;
                PyObject *pyobjpExecOrder_arg = Py_None;
                PyObject *result = NULL;

                if (pExecOrder) {
                    pyobjpExecOrder = PyType_GenericAlloc(PyCThostFtdcExecOrderFieldType, 0);
                    if (!pyobjpExecOrder) goto cleanup;
                    PyCThostFtdcExecOrderFieldData *extra_pExecOrder = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(pyobjpExecOrder);
                    extra_pExecOrder->data = *pExecOrder;
                    pyobjpExecOrder_arg = pyobjpExecOrder;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpExecOrder_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnExecOrder"), const_cast<char *>("O"), pyobjpExecOrder_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpExecOrder);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///执行宣告录入错误回报
            void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputExecOrder = NULL;
                PyObject *pyobjpInputExecOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputExecOrder) {
                    pyobjpInputExecOrder = PyType_GenericAlloc(PyCThostFtdcInputExecOrderFieldType, 0);
                    if (!pyobjpInputExecOrder) goto cleanup;
                    PyCThostFtdcInputExecOrderFieldData *extra_pInputExecOrder = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(pyobjpInputExecOrder);
                    extra_pInputExecOrder->data = *pInputExecOrder;
                    pyobjpInputExecOrder_arg = pyobjpInputExecOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputExecOrder_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnExecOrderInsert"), const_cast<char *>("OO"), pyobjpInputExecOrder_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputExecOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///执行宣告操作错误回报
            void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpExecOrderAction = NULL;
                PyObject *pyobjpExecOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pExecOrderAction) {
                    pyobjpExecOrderAction = PyType_GenericAlloc(PyCThostFtdcExecOrderActionFieldType, 0);
                    if (!pyobjpExecOrderAction) goto cleanup;
                    PyCThostFtdcExecOrderActionFieldData *extra_pExecOrderAction = PyCTP_GetTypeData<PyCThostFtdcExecOrderActionFieldData>(pyobjpExecOrderAction);
                    extra_pExecOrderAction->data = *pExecOrderAction;
                    pyobjpExecOrderAction_arg = pyobjpExecOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpExecOrderAction_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnExecOrderAction"), const_cast<char *>("OO"), pyobjpExecOrderAction_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpExecOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///询价录入错误回报
            void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputForQuote = NULL;
                PyObject *pyobjpInputForQuote_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputForQuote) {
                    pyobjpInputForQuote = PyType_GenericAlloc(PyCThostFtdcInputForQuoteFieldType, 0);
                    if (!pyobjpInputForQuote) goto cleanup;
                    PyCThostFtdcInputForQuoteFieldData *extra_pInputForQuote = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(pyobjpInputForQuote);
                    extra_pInputForQuote->data = *pInputForQuote;
                    pyobjpInputForQuote_arg = pyobjpInputForQuote;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputForQuote_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnForQuoteInsert"), const_cast<char *>("OO"), pyobjpInputForQuote_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputForQuote);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报价通知
            void OnRtnQuote(CThostFtdcQuoteField *pQuote) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpQuote = NULL;
                PyObject *pyobjpQuote_arg = Py_None;
                PyObject *result = NULL;

                if (pQuote) {
                    pyobjpQuote = PyType_GenericAlloc(PyCThostFtdcQuoteFieldType, 0);
                    if (!pyobjpQuote) goto cleanup;
                    PyCThostFtdcQuoteFieldData *extra_pQuote = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(pyobjpQuote);
                    extra_pQuote->data = *pQuote;
                    pyobjpQuote_arg = pyobjpQuote;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpQuote_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnQuote"), const_cast<char *>("O"), pyobjpQuote_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpQuote);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报价录入错误回报
            void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputQuote = NULL;
                PyObject *pyobjpInputQuote_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputQuote) {
                    pyobjpInputQuote = PyType_GenericAlloc(PyCThostFtdcInputQuoteFieldType, 0);
                    if (!pyobjpInputQuote) goto cleanup;
                    PyCThostFtdcInputQuoteFieldData *extra_pInputQuote = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(pyobjpInputQuote);
                    extra_pInputQuote->data = *pInputQuote;
                    pyobjpInputQuote_arg = pyobjpInputQuote;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputQuote_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQuoteInsert"), const_cast<char *>("OO"), pyobjpInputQuote_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputQuote);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///报价操作错误回报
            void OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpQuoteAction = NULL;
                PyObject *pyobjpQuoteAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pQuoteAction) {
                    pyobjpQuoteAction = PyType_GenericAlloc(PyCThostFtdcQuoteActionFieldType, 0);
                    if (!pyobjpQuoteAction) goto cleanup;
                    PyCThostFtdcQuoteActionFieldData *extra_pQuoteAction = PyCTP_GetTypeData<PyCThostFtdcQuoteActionFieldData>(pyobjpQuoteAction);
                    extra_pQuoteAction->data = *pQuoteAction;
                    pyobjpQuoteAction_arg = pyobjpQuoteAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpQuoteAction_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQuoteAction"), const_cast<char *>("OO"), pyobjpQuoteAction_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpQuoteAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///询价通知
            void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpForQuoteRsp = NULL;
                PyObject *pyobjpForQuoteRsp_arg = Py_None;
                PyObject *result = NULL;

                if (pForQuoteRsp) {
                    pyobjpForQuoteRsp = PyType_GenericAlloc(PyCThostFtdcForQuoteRspFieldType, 0);
                    if (!pyobjpForQuoteRsp) goto cleanup;
                    PyCThostFtdcForQuoteRspFieldData *extra_pForQuoteRsp = PyCTP_GetTypeData<PyCThostFtdcForQuoteRspFieldData>(pyobjpForQuoteRsp);
                    extra_pForQuoteRsp->data = *pForQuoteRsp;
                    pyobjpForQuoteRsp_arg = pyobjpForQuoteRsp;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpForQuoteRsp_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnForQuoteRsp"), const_cast<char *>("O"), pyobjpForQuoteRsp_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpForQuoteRsp);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///保证金监控中心用户令牌
            void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCFMMCTradingAccountToken = NULL;
                PyObject *pyobjpCFMMCTradingAccountToken_arg = Py_None;
                PyObject *result = NULL;

                if (pCFMMCTradingAccountToken) {
                    pyobjpCFMMCTradingAccountToken = PyType_GenericAlloc(PyCThostFtdcCFMMCTradingAccountTokenFieldType, 0);
                    if (!pyobjpCFMMCTradingAccountToken) goto cleanup;
                    PyCThostFtdcCFMMCTradingAccountTokenFieldData *extra_pCFMMCTradingAccountToken = PyCTP_GetTypeData<PyCThostFtdcCFMMCTradingAccountTokenFieldData>(pyobjpCFMMCTradingAccountToken);
                    extra_pCFMMCTradingAccountToken->data = *pCFMMCTradingAccountToken;
                    pyobjpCFMMCTradingAccountToken_arg = pyobjpCFMMCTradingAccountToken;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpCFMMCTradingAccountToken_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCFMMCTradingAccountToken"), const_cast<char *>("O"), pyobjpCFMMCTradingAccountToken_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCFMMCTradingAccountToken);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///批量报单操作错误回报
            void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpBatchOrderAction = NULL;
                PyObject *pyobjpBatchOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pBatchOrderAction) {
                    pyobjpBatchOrderAction = PyType_GenericAlloc(PyCThostFtdcBatchOrderActionFieldType, 0);
                    if (!pyobjpBatchOrderAction) goto cleanup;
                    PyCThostFtdcBatchOrderActionFieldData *extra_pBatchOrderAction = PyCTP_GetTypeData<PyCThostFtdcBatchOrderActionFieldData>(pyobjpBatchOrderAction);
                    extra_pBatchOrderAction->data = *pBatchOrderAction;
                    pyobjpBatchOrderAction_arg = pyobjpBatchOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpBatchOrderAction_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnBatchOrderAction"), const_cast<char *>("OO"), pyobjpBatchOrderAction_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpBatchOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期权自对冲通知
            void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOptionSelfClose = NULL;
                PyObject *pyobjpOptionSelfClose_arg = Py_None;
                PyObject *result = NULL;

                if (pOptionSelfClose) {
                    pyobjpOptionSelfClose = PyType_GenericAlloc(PyCThostFtdcOptionSelfCloseFieldType, 0);
                    if (!pyobjpOptionSelfClose) goto cleanup;
                    PyCThostFtdcOptionSelfCloseFieldData *extra_pOptionSelfClose = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(pyobjpOptionSelfClose);
                    extra_pOptionSelfClose->data = *pOptionSelfClose;
                    pyobjpOptionSelfClose_arg = pyobjpOptionSelfClose;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpOptionSelfClose_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOptionSelfClose"), const_cast<char *>("O"), pyobjpOptionSelfClose_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOptionSelfClose);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期权自对冲录入错误回报
            void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOptionSelfClose = NULL;
                PyObject *pyobjpInputOptionSelfClose_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputOptionSelfClose) {
                    pyobjpInputOptionSelfClose = PyType_GenericAlloc(PyCThostFtdcInputOptionSelfCloseFieldType, 0);
                    if (!pyobjpInputOptionSelfClose) goto cleanup;
                    PyCThostFtdcInputOptionSelfCloseFieldData *extra_pInputOptionSelfClose = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(pyobjpInputOptionSelfClose);
                    extra_pInputOptionSelfClose->data = *pInputOptionSelfClose;
                    pyobjpInputOptionSelfClose_arg = pyobjpInputOptionSelfClose;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputOptionSelfClose_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOptionSelfCloseInsert"), const_cast<char *>("OO"), pyobjpInputOptionSelfClose_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOptionSelfClose);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期权自对冲操作错误回报
            void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOptionSelfCloseAction = NULL;
                PyObject *pyobjpOptionSelfCloseAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pOptionSelfCloseAction) {
                    pyobjpOptionSelfCloseAction = PyType_GenericAlloc(PyCThostFtdcOptionSelfCloseActionFieldType, 0);
                    if (!pyobjpOptionSelfCloseAction) goto cleanup;
                    PyCThostFtdcOptionSelfCloseActionFieldData *extra_pOptionSelfCloseAction = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseActionFieldData>(pyobjpOptionSelfCloseAction);
                    extra_pOptionSelfCloseAction->data = *pOptionSelfCloseAction;
                    pyobjpOptionSelfCloseAction_arg = pyobjpOptionSelfCloseAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpOptionSelfCloseAction_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOptionSelfCloseAction"), const_cast<char *>("OO"), pyobjpOptionSelfCloseAction_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOptionSelfCloseAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///申请组合通知
            void OnRtnCombAction(CThostFtdcCombActionField *pCombAction) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCombAction = NULL;
                PyObject *pyobjpCombAction_arg = Py_None;
                PyObject *result = NULL;

                if (pCombAction) {
                    pyobjpCombAction = PyType_GenericAlloc(PyCThostFtdcCombActionFieldType, 0);
                    if (!pyobjpCombAction) goto cleanup;
                    PyCThostFtdcCombActionFieldData *extra_pCombAction = PyCTP_GetTypeData<PyCThostFtdcCombActionFieldData>(pyobjpCombAction);
                    extra_pCombAction->data = *pCombAction;
                    pyobjpCombAction_arg = pyobjpCombAction;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpCombAction_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCombAction"), const_cast<char *>("O"), pyobjpCombAction_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCombAction);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///申请组合录入错误回报
            void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputCombAction = NULL;
                PyObject *pyobjpInputCombAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputCombAction) {
                    pyobjpInputCombAction = PyType_GenericAlloc(PyCThostFtdcInputCombActionFieldType, 0);
                    if (!pyobjpInputCombAction) goto cleanup;
                    PyCThostFtdcInputCombActionFieldData *extra_pInputCombAction = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(pyobjpInputCombAction);
                    extra_pInputCombAction->data = *pInputCombAction;
                    pyobjpInputCombAction_arg = pyobjpInputCombAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputCombAction_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnCombActionInsert"), const_cast<char *>("OO"), pyobjpInputCombAction_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputCombAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询签约银行响应
            void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpContractBank = NULL;
                PyObject *pyobjpContractBank_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pContractBank) {
                    pyobjpContractBank = PyType_GenericAlloc(PyCThostFtdcContractBankFieldType, 0);
                    if (!pyobjpContractBank) goto cleanup;
                    PyCThostFtdcContractBankFieldData *extra_pContractBank = PyCTP_GetTypeData<PyCThostFtdcContractBankFieldData>(pyobjpContractBank);
                    extra_pContractBank->data = *pContractBank;
                    pyobjpContractBank_arg = pyobjpContractBank;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpContractBank_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryContractBank"), const_cast<char *>("OOOO"), pyobjpContractBank_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpContractBank);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询预埋单响应
            void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpParkedOrder = NULL;
                PyObject *pyobjpParkedOrder_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pParkedOrder) {
                    pyobjpParkedOrder = PyType_GenericAlloc(PyCThostFtdcParkedOrderFieldType, 0);
                    if (!pyobjpParkedOrder) goto cleanup;
                    PyCThostFtdcParkedOrderFieldData *extra_pParkedOrder = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(pyobjpParkedOrder);
                    extra_pParkedOrder->data = *pParkedOrder;
                    pyobjpParkedOrder_arg = pyobjpParkedOrder;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpParkedOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryParkedOrder"), const_cast<char *>("OOOO"), pyobjpParkedOrder_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpParkedOrder);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询预埋撤单响应
            void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpParkedOrderAction = NULL;
                PyObject *pyobjpParkedOrderAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pParkedOrderAction) {
                    pyobjpParkedOrderAction = PyType_GenericAlloc(PyCThostFtdcParkedOrderActionFieldType, 0);
                    if (!pyobjpParkedOrderAction) goto cleanup;
                    PyCThostFtdcParkedOrderActionFieldData *extra_pParkedOrderAction = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(pyobjpParkedOrderAction);
                    extra_pParkedOrderAction->data = *pParkedOrderAction;
                    pyobjpParkedOrderAction_arg = pyobjpParkedOrderAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpParkedOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryParkedOrderAction"), const_cast<char *>("OOOO"), pyobjpParkedOrderAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpParkedOrderAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询交易通知响应
            void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpTradingNotice = NULL;
                PyObject *pyobjpTradingNotice_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pTradingNotice) {
                    pyobjpTradingNotice = PyType_GenericAlloc(PyCThostFtdcTradingNoticeFieldType, 0);
                    if (!pyobjpTradingNotice) goto cleanup;
                    PyCThostFtdcTradingNoticeFieldData *extra_pTradingNotice = PyCTP_GetTypeData<PyCThostFtdcTradingNoticeFieldData>(pyobjpTradingNotice);
                    extra_pTradingNotice->data = *pTradingNotice;
                    pyobjpTradingNotice_arg = pyobjpTradingNotice;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpTradingNotice_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryTradingNotice"), const_cast<char *>("OOOO"), pyobjpTradingNotice_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpTradingNotice);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询经纪公司交易参数响应
            void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpBrokerTradingParams = NULL;
                PyObject *pyobjpBrokerTradingParams_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pBrokerTradingParams) {
                    pyobjpBrokerTradingParams = PyType_GenericAlloc(PyCThostFtdcBrokerTradingParamsFieldType, 0);
                    if (!pyobjpBrokerTradingParams) goto cleanup;
                    PyCThostFtdcBrokerTradingParamsFieldData *extra_pBrokerTradingParams = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingParamsFieldData>(pyobjpBrokerTradingParams);
                    extra_pBrokerTradingParams->data = *pBrokerTradingParams;
                    pyobjpBrokerTradingParams_arg = pyobjpBrokerTradingParams;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpBrokerTradingParams_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryBrokerTradingParams"), const_cast<char *>("OOOO"), pyobjpBrokerTradingParams_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpBrokerTradingParams);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询经纪公司交易算法响应
            void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpBrokerTradingAlgos = NULL;
                PyObject *pyobjpBrokerTradingAlgos_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pBrokerTradingAlgos) {
                    pyobjpBrokerTradingAlgos = PyType_GenericAlloc(PyCThostFtdcBrokerTradingAlgosFieldType, 0);
                    if (!pyobjpBrokerTradingAlgos) goto cleanup;
                    PyCThostFtdcBrokerTradingAlgosFieldData *extra_pBrokerTradingAlgos = PyCTP_GetTypeData<PyCThostFtdcBrokerTradingAlgosFieldData>(pyobjpBrokerTradingAlgos);
                    extra_pBrokerTradingAlgos->data = *pBrokerTradingAlgos;
                    pyobjpBrokerTradingAlgos_arg = pyobjpBrokerTradingAlgos;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpBrokerTradingAlgos_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryBrokerTradingAlgos"), const_cast<char *>("OOOO"), pyobjpBrokerTradingAlgos_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpBrokerTradingAlgos);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询监控中心用户令牌
            void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpQueryCFMMCTradingAccountToken = NULL;
                PyObject *pyobjpQueryCFMMCTradingAccountToken_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pQueryCFMMCTradingAccountToken) {
                    pyobjpQueryCFMMCTradingAccountToken = PyType_GenericAlloc(PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType, 0);
                    if (!pyobjpQueryCFMMCTradingAccountToken) goto cleanup;
                    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *extra_pQueryCFMMCTradingAccountToken = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(pyobjpQueryCFMMCTradingAccountToken);
                    extra_pQueryCFMMCTradingAccountToken->data = *pQueryCFMMCTradingAccountToken;
                    pyobjpQueryCFMMCTradingAccountToken_arg = pyobjpQueryCFMMCTradingAccountToken;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpQueryCFMMCTradingAccountToken_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQueryCFMMCTradingAccountToken"), const_cast<char *>("OOOO"), pyobjpQueryCFMMCTradingAccountToken_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpQueryCFMMCTradingAccountToken);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///银行发起银行资金转期货通知
            void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspTransfer = NULL;
                PyObject *pyobjpRspTransfer_arg = Py_None;
                PyObject *result = NULL;

                if (pRspTransfer) {
                    pyobjpRspTransfer = PyType_GenericAlloc(PyCThostFtdcRspTransferFieldType, 0);
                    if (!pyobjpRspTransfer) goto cleanup;
                    PyCThostFtdcRspTransferFieldData *extra_pRspTransfer = PyCTP_GetTypeData<PyCThostFtdcRspTransferFieldData>(pyobjpRspTransfer);
                    extra_pRspTransfer->data = *pRspTransfer;
                    pyobjpRspTransfer_arg = pyobjpRspTransfer;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspTransfer_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromBankToFutureByBank"), const_cast<char *>("O"), pyobjpRspTransfer_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspTransfer);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///银行发起期货资金转银行通知
            void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspTransfer = NULL;
                PyObject *pyobjpRspTransfer_arg = Py_None;
                PyObject *result = NULL;

                if (pRspTransfer) {
                    pyobjpRspTransfer = PyType_GenericAlloc(PyCThostFtdcRspTransferFieldType, 0);
                    if (!pyobjpRspTransfer) goto cleanup;
                    PyCThostFtdcRspTransferFieldData *extra_pRspTransfer = PyCTP_GetTypeData<PyCThostFtdcRspTransferFieldData>(pyobjpRspTransfer);
                    extra_pRspTransfer->data = *pRspTransfer;
                    pyobjpRspTransfer_arg = pyobjpRspTransfer;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspTransfer_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromFutureToBankByBank"), const_cast<char *>("O"), pyobjpRspTransfer_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspTransfer);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///银行发起冲正银行转期货通知
            void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspRepeal = NULL;
                PyObject *pyobjpRspRepeal_arg = Py_None;
                PyObject *result = NULL;

                if (pRspRepeal) {
                    pyobjpRspRepeal = PyType_GenericAlloc(PyCThostFtdcRspRepealFieldType, 0);
                    if (!pyobjpRspRepeal) goto cleanup;
                    PyCThostFtdcRspRepealFieldData *extra_pRspRepeal = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(pyobjpRspRepeal);
                    extra_pRspRepeal->data = *pRspRepeal;
                    pyobjpRspRepeal_arg = pyobjpRspRepeal;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByBank"), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspRepeal);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///银行发起冲正期货转银行通知
            void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspRepeal = NULL;
                PyObject *pyobjpRspRepeal_arg = Py_None;
                PyObject *result = NULL;

                if (pRspRepeal) {
                    pyobjpRspRepeal = PyType_GenericAlloc(PyCThostFtdcRspRepealFieldType, 0);
                    if (!pyobjpRspRepeal) goto cleanup;
                    PyCThostFtdcRspRepealFieldData *extra_pRspRepeal = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(pyobjpRspRepeal);
                    extra_pRspRepeal->data = *pRspRepeal;
                    pyobjpRspRepeal_arg = pyobjpRspRepeal;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByBank"), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspRepeal);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起银行资金转期货通知
            void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspTransfer = NULL;
                PyObject *pyobjpRspTransfer_arg = Py_None;
                PyObject *result = NULL;

                if (pRspTransfer) {
                    pyobjpRspTransfer = PyType_GenericAlloc(PyCThostFtdcRspTransferFieldType, 0);
                    if (!pyobjpRspTransfer) goto cleanup;
                    PyCThostFtdcRspTransferFieldData *extra_pRspTransfer = PyCTP_GetTypeData<PyCThostFtdcRspTransferFieldData>(pyobjpRspTransfer);
                    extra_pRspTransfer->data = *pRspTransfer;
                    pyobjpRspTransfer_arg = pyobjpRspTransfer;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspTransfer_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromBankToFutureByFuture"), const_cast<char *>("O"), pyobjpRspTransfer_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspTransfer);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起期货资金转银行通知
            void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspTransfer = NULL;
                PyObject *pyobjpRspTransfer_arg = Py_None;
                PyObject *result = NULL;

                if (pRspTransfer) {
                    pyobjpRspTransfer = PyType_GenericAlloc(PyCThostFtdcRspTransferFieldType, 0);
                    if (!pyobjpRspTransfer) goto cleanup;
                    PyCThostFtdcRspTransferFieldData *extra_pRspTransfer = PyCTP_GetTypeData<PyCThostFtdcRspTransferFieldData>(pyobjpRspTransfer);
                    extra_pRspTransfer->data = *pRspTransfer;
                    pyobjpRspTransfer_arg = pyobjpRspTransfer;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspTransfer_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnFromFutureToBankByFuture"), const_cast<char *>("O"), pyobjpRspTransfer_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspTransfer);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
            void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspRepeal = NULL;
                PyObject *pyobjpRspRepeal_arg = Py_None;
                PyObject *result = NULL;

                if (pRspRepeal) {
                    pyobjpRspRepeal = PyType_GenericAlloc(PyCThostFtdcRspRepealFieldType, 0);
                    if (!pyobjpRspRepeal) goto cleanup;
                    PyCThostFtdcRspRepealFieldData *extra_pRspRepeal = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(pyobjpRspRepeal);
                    extra_pRspRepeal->data = *pRspRepeal;
                    pyobjpRspRepeal_arg = pyobjpRspRepeal;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByFutureManual"), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspRepeal);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
            void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspRepeal = NULL;
                PyObject *pyobjpRspRepeal_arg = Py_None;
                PyObject *result = NULL;

                if (pRspRepeal) {
                    pyobjpRspRepeal = PyType_GenericAlloc(PyCThostFtdcRspRepealFieldType, 0);
                    if (!pyobjpRspRepeal) goto cleanup;
                    PyCThostFtdcRspRepealFieldData *extra_pRspRepeal = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(pyobjpRspRepeal);
                    extra_pRspRepeal->data = *pRspRepeal;
                    pyobjpRspRepeal_arg = pyobjpRspRepeal;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByFutureManual"), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspRepeal);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起查询银行余额通知
            void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpNotifyQueryAccount = NULL;
                PyObject *pyobjpNotifyQueryAccount_arg = Py_None;
                PyObject *result = NULL;

                if (pNotifyQueryAccount) {
                    pyobjpNotifyQueryAccount = PyType_GenericAlloc(PyCThostFtdcNotifyQueryAccountFieldType, 0);
                    if (!pyobjpNotifyQueryAccount) goto cleanup;
                    PyCThostFtdcNotifyQueryAccountFieldData *extra_pNotifyQueryAccount = PyCTP_GetTypeData<PyCThostFtdcNotifyQueryAccountFieldData>(pyobjpNotifyQueryAccount);
                    extra_pNotifyQueryAccount->data = *pNotifyQueryAccount;
                    pyobjpNotifyQueryAccount_arg = pyobjpNotifyQueryAccount;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpNotifyQueryAccount_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnQueryBankBalanceByFuture"), const_cast<char *>("O"), pyobjpNotifyQueryAccount_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpNotifyQueryAccount);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起银行资金转期货错误回报
            void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpReqTransfer = NULL;
                PyObject *pyobjpReqTransfer_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pReqTransfer) {
                    pyobjpReqTransfer = PyType_GenericAlloc(PyCThostFtdcReqTransferFieldType, 0);
                    if (!pyobjpReqTransfer) goto cleanup;
                    PyCThostFtdcReqTransferFieldData *extra_pReqTransfer = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(pyobjpReqTransfer);
                    extra_pReqTransfer->data = *pReqTransfer;
                    pyobjpReqTransfer_arg = pyobjpReqTransfer;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpReqTransfer_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnBankToFutureByFuture"), const_cast<char *>("OO"), pyobjpReqTransfer_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpReqTransfer);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起期货资金转银行错误回报
            void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpReqTransfer = NULL;
                PyObject *pyobjpReqTransfer_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pReqTransfer) {
                    pyobjpReqTransfer = PyType_GenericAlloc(PyCThostFtdcReqTransferFieldType, 0);
                    if (!pyobjpReqTransfer) goto cleanup;
                    PyCThostFtdcReqTransferFieldData *extra_pReqTransfer = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(pyobjpReqTransfer);
                    extra_pReqTransfer->data = *pReqTransfer;
                    pyobjpReqTransfer_arg = pyobjpReqTransfer;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpReqTransfer_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnFutureToBankByFuture"), const_cast<char *>("OO"), pyobjpReqTransfer_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpReqTransfer);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///系统运行时期货端手工发起冲正银行转期货错误回报
            void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpReqRepeal = NULL;
                PyObject *pyobjpReqRepeal_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pReqRepeal) {
                    pyobjpReqRepeal = PyType_GenericAlloc(PyCThostFtdcReqRepealFieldType, 0);
                    if (!pyobjpReqRepeal) goto cleanup;
                    PyCThostFtdcReqRepealFieldData *extra_pReqRepeal = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(pyobjpReqRepeal);
                    extra_pReqRepeal->data = *pReqRepeal;
                    pyobjpReqRepeal_arg = pyobjpReqRepeal;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpReqRepeal_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnRepealBankToFutureByFutureManual"), const_cast<char *>("OO"), pyobjpReqRepeal_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpReqRepeal);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///系统运行时期货端手工发起冲正期货转银行错误回报
            void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpReqRepeal = NULL;
                PyObject *pyobjpReqRepeal_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pReqRepeal) {
                    pyobjpReqRepeal = PyType_GenericAlloc(PyCThostFtdcReqRepealFieldType, 0);
                    if (!pyobjpReqRepeal) goto cleanup;
                    PyCThostFtdcReqRepealFieldData *extra_pReqRepeal = PyCTP_GetTypeData<PyCThostFtdcReqRepealFieldData>(pyobjpReqRepeal);
                    extra_pReqRepeal->data = *pReqRepeal;
                    pyobjpReqRepeal_arg = pyobjpReqRepeal;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpReqRepeal_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnRepealFutureToBankByFutureManual"), const_cast<char *>("OO"), pyobjpReqRepeal_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpReqRepeal);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起查询银行余额错误回报
            void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpReqQueryAccount = NULL;
                PyObject *pyobjpReqQueryAccount_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pReqQueryAccount) {
                    pyobjpReqQueryAccount = PyType_GenericAlloc(PyCThostFtdcReqQueryAccountFieldType, 0);
                    if (!pyobjpReqQueryAccount) goto cleanup;
                    PyCThostFtdcReqQueryAccountFieldData *extra_pReqQueryAccount = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(pyobjpReqQueryAccount);
                    extra_pReqQueryAccount->data = *pReqQueryAccount;
                    pyobjpReqQueryAccount_arg = pyobjpReqQueryAccount;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpReqQueryAccount_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnQueryBankBalanceByFuture"), const_cast<char *>("OO"), pyobjpReqQueryAccount_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpReqQueryAccount);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
            void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspRepeal = NULL;
                PyObject *pyobjpRspRepeal_arg = Py_None;
                PyObject *result = NULL;

                if (pRspRepeal) {
                    pyobjpRspRepeal = PyType_GenericAlloc(PyCThostFtdcRspRepealFieldType, 0);
                    if (!pyobjpRspRepeal) goto cleanup;
                    PyCThostFtdcRspRepealFieldData *extra_pRspRepeal = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(pyobjpRspRepeal);
                    extra_pRspRepeal->data = *pRspRepeal;
                    pyobjpRspRepeal_arg = pyobjpRspRepeal;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromBankToFutureByFuture"), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspRepeal);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
            void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspRepeal = NULL;
                PyObject *pyobjpRspRepeal_arg = Py_None;
                PyObject *result = NULL;

                if (pRspRepeal) {
                    pyobjpRspRepeal = PyType_GenericAlloc(PyCThostFtdcRspRepealFieldType, 0);
                    if (!pyobjpRspRepeal) goto cleanup;
                    PyCThostFtdcRspRepealFieldData *extra_pRspRepeal = PyCTP_GetTypeData<PyCThostFtdcRspRepealFieldData>(pyobjpRspRepeal);
                    extra_pRspRepeal->data = *pRspRepeal;
                    pyobjpRspRepeal_arg = pyobjpRspRepeal;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnRepealFromFutureToBankByFuture"), const_cast<char *>("O"), pyobjpRspRepeal_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspRepeal);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起银行资金转期货应答
            void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpReqTransfer = NULL;
                PyObject *pyobjpReqTransfer_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pReqTransfer) {
                    pyobjpReqTransfer = PyType_GenericAlloc(PyCThostFtdcReqTransferFieldType, 0);
                    if (!pyobjpReqTransfer) goto cleanup;
                    PyCThostFtdcReqTransferFieldData *extra_pReqTransfer = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(pyobjpReqTransfer);
                    extra_pReqTransfer->data = *pReqTransfer;
                    pyobjpReqTransfer_arg = pyobjpReqTransfer;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpReqTransfer_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspFromBankToFutureByFuture"), const_cast<char *>("OOOO"), pyobjpReqTransfer_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpReqTransfer);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起期货资金转银行应答
            void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpReqTransfer = NULL;
                PyObject *pyobjpReqTransfer_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pReqTransfer) {
                    pyobjpReqTransfer = PyType_GenericAlloc(PyCThostFtdcReqTransferFieldType, 0);
                    if (!pyobjpReqTransfer) goto cleanup;
                    PyCThostFtdcReqTransferFieldData *extra_pReqTransfer = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(pyobjpReqTransfer);
                    extra_pReqTransfer->data = *pReqTransfer;
                    pyobjpReqTransfer_arg = pyobjpReqTransfer;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpReqTransfer_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspFromFutureToBankByFuture"), const_cast<char *>("OOOO"), pyobjpReqTransfer_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpReqTransfer);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///期货发起查询银行余额应答
            void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpReqQueryAccount = NULL;
                PyObject *pyobjpReqQueryAccount_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pReqQueryAccount) {
                    pyobjpReqQueryAccount = PyType_GenericAlloc(PyCThostFtdcReqQueryAccountFieldType, 0);
                    if (!pyobjpReqQueryAccount) goto cleanup;
                    PyCThostFtdcReqQueryAccountFieldData *extra_pReqQueryAccount = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(pyobjpReqQueryAccount);
                    extra_pReqQueryAccount->data = *pReqQueryAccount;
                    pyobjpReqQueryAccount_arg = pyobjpReqQueryAccount;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpReqQueryAccount_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQueryBankAccountMoneyByFuture"), const_cast<char *>("OOOO"), pyobjpReqQueryAccount_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpReqQueryAccount);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///银行发起银期开户通知
            void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOpenAccount = NULL;
                PyObject *pyobjpOpenAccount_arg = Py_None;
                PyObject *result = NULL;

                if (pOpenAccount) {
                    pyobjpOpenAccount = PyType_GenericAlloc(PyCThostFtdcOpenAccountFieldType, 0);
                    if (!pyobjpOpenAccount) goto cleanup;
                    PyCThostFtdcOpenAccountFieldData *extra_pOpenAccount = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(pyobjpOpenAccount);
                    extra_pOpenAccount->data = *pOpenAccount;
                    pyobjpOpenAccount_arg = pyobjpOpenAccount;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpOpenAccount_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOpenAccountByBank"), const_cast<char *>("O"), pyobjpOpenAccount_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOpenAccount);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///银行发起银期销户通知
            void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCancelAccount = NULL;
                PyObject *pyobjpCancelAccount_arg = Py_None;
                PyObject *result = NULL;

                if (pCancelAccount) {
                    pyobjpCancelAccount = PyType_GenericAlloc(PyCThostFtdcCancelAccountFieldType, 0);
                    if (!pyobjpCancelAccount) goto cleanup;
                    PyCThostFtdcCancelAccountFieldData *extra_pCancelAccount = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(pyobjpCancelAccount);
                    extra_pCancelAccount->data = *pCancelAccount;
                    pyobjpCancelAccount_arg = pyobjpCancelAccount;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpCancelAccount_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnCancelAccountByBank"), const_cast<char *>("O"), pyobjpCancelAccount_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCancelAccount);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///银行发起变更银行账号通知
            void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpChangeAccount = NULL;
                PyObject *pyobjpChangeAccount_arg = Py_None;
                PyObject *result = NULL;

                if (pChangeAccount) {
                    pyobjpChangeAccount = PyType_GenericAlloc(PyCThostFtdcChangeAccountFieldType, 0);
                    if (!pyobjpChangeAccount) goto cleanup;
                    PyCThostFtdcChangeAccountFieldData *extra_pChangeAccount = PyCTP_GetTypeData<PyCThostFtdcChangeAccountFieldData>(pyobjpChangeAccount);
                    extra_pChangeAccount->data = *pChangeAccount;
                    pyobjpChangeAccount_arg = pyobjpChangeAccount;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpChangeAccount_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnChangeAccountByBank"), const_cast<char *>("O"), pyobjpChangeAccount_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpChangeAccount);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求查询分类合约响应
            void OnRspQryClassifiedInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInstrument = NULL;
                PyObject *pyobjpInstrument_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInstrument) {
                    pyobjpInstrument = PyType_GenericAlloc(PyCThostFtdcInstrumentFieldType, 0);
                    if (!pyobjpInstrument) goto cleanup;
                    PyCThostFtdcInstrumentFieldData *extra_pInstrument = PyCTP_GetTypeData<PyCThostFtdcInstrumentFieldData>(pyobjpInstrument);
                    extra_pInstrument->data = *pInstrument;
                    pyobjpInstrument_arg = pyobjpInstrument;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryClassifiedInstrument"), const_cast<char *>("OOOO"), pyobjpInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInstrument);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///请求组合优惠比例响应
            void OnRspQryCombPromotionParam(CThostFtdcCombPromotionParamField *pCombPromotionParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCombPromotionParam = NULL;
                PyObject *pyobjpCombPromotionParam_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pCombPromotionParam) {
                    pyobjpCombPromotionParam = PyType_GenericAlloc(PyCThostFtdcCombPromotionParamFieldType, 0);
                    if (!pyobjpCombPromotionParam) goto cleanup;
                    PyCThostFtdcCombPromotionParamFieldData *extra_pCombPromotionParam = PyCTP_GetTypeData<PyCThostFtdcCombPromotionParamFieldData>(pyobjpCombPromotionParam);
                    extra_pCombPromotionParam->data = *pCombPromotionParam;
                    pyobjpCombPromotionParam_arg = pyobjpCombPromotionParam;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpCombPromotionParam_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombPromotionParam"), const_cast<char *>("OOOO"), pyobjpCombPromotionParam_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCombPromotionParam);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者风险结算持仓查询响应
            void OnRspQryRiskSettleInvstPosition(CThostFtdcRiskSettleInvstPositionField *pRiskSettleInvstPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRiskSettleInvstPosition = NULL;
                PyObject *pyobjpRiskSettleInvstPosition_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRiskSettleInvstPosition) {
                    pyobjpRiskSettleInvstPosition = PyType_GenericAlloc(PyCThostFtdcRiskSettleInvstPositionFieldType, 0);
                    if (!pyobjpRiskSettleInvstPosition) goto cleanup;
                    PyCThostFtdcRiskSettleInvstPositionFieldData *extra_pRiskSettleInvstPosition = PyCTP_GetTypeData<PyCThostFtdcRiskSettleInvstPositionFieldData>(pyobjpRiskSettleInvstPosition);
                    extra_pRiskSettleInvstPosition->data = *pRiskSettleInvstPosition;
                    pyobjpRiskSettleInvstPosition_arg = pyobjpRiskSettleInvstPosition;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRiskSettleInvstPosition_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRiskSettleInvstPosition"), const_cast<char *>("OOOO"), pyobjpRiskSettleInvstPosition_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRiskSettleInvstPosition);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///风险结算产品查询响应
            void OnRspQryRiskSettleProductStatus(CThostFtdcRiskSettleProductStatusField *pRiskSettleProductStatus, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRiskSettleProductStatus = NULL;
                PyObject *pyobjpRiskSettleProductStatus_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRiskSettleProductStatus) {
                    pyobjpRiskSettleProductStatus = PyType_GenericAlloc(PyCThostFtdcRiskSettleProductStatusFieldType, 0);
                    if (!pyobjpRiskSettleProductStatus) goto cleanup;
                    PyCThostFtdcRiskSettleProductStatusFieldData *extra_pRiskSettleProductStatus = PyCTP_GetTypeData<PyCThostFtdcRiskSettleProductStatusFieldData>(pyobjpRiskSettleProductStatus);
                    extra_pRiskSettleProductStatus->data = *pRiskSettleProductStatus;
                    pyobjpRiskSettleProductStatus_arg = pyobjpRiskSettleProductStatus;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRiskSettleProductStatus_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRiskSettleProductStatus"), const_cast<char *>("OOOO"), pyobjpRiskSettleProductStatus_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRiskSettleProductStatus);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///SPBM期货合约参数查询响应
            void OnRspQrySPBMFutureParameter(CThostFtdcSPBMFutureParameterField *pSPBMFutureParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPBMFutureParameter = NULL;
                PyObject *pyobjpSPBMFutureParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPBMFutureParameter) {
                    pyobjpSPBMFutureParameter = PyType_GenericAlloc(PyCThostFtdcSPBMFutureParameterFieldType, 0);
                    if (!pyobjpSPBMFutureParameter) goto cleanup;
                    PyCThostFtdcSPBMFutureParameterFieldData *extra_pSPBMFutureParameter = PyCTP_GetTypeData<PyCThostFtdcSPBMFutureParameterFieldData>(pyobjpSPBMFutureParameter);
                    extra_pSPBMFutureParameter->data = *pSPBMFutureParameter;
                    pyobjpSPBMFutureParameter_arg = pyobjpSPBMFutureParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPBMFutureParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMFutureParameter"), const_cast<char *>("OOOO"), pyobjpSPBMFutureParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPBMFutureParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///SPBM期权合约参数查询响应
            void OnRspQrySPBMOptionParameter(CThostFtdcSPBMOptionParameterField *pSPBMOptionParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPBMOptionParameter = NULL;
                PyObject *pyobjpSPBMOptionParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPBMOptionParameter) {
                    pyobjpSPBMOptionParameter = PyType_GenericAlloc(PyCThostFtdcSPBMOptionParameterFieldType, 0);
                    if (!pyobjpSPBMOptionParameter) goto cleanup;
                    PyCThostFtdcSPBMOptionParameterFieldData *extra_pSPBMOptionParameter = PyCTP_GetTypeData<PyCThostFtdcSPBMOptionParameterFieldData>(pyobjpSPBMOptionParameter);
                    extra_pSPBMOptionParameter->data = *pSPBMOptionParameter;
                    pyobjpSPBMOptionParameter_arg = pyobjpSPBMOptionParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPBMOptionParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMOptionParameter"), const_cast<char *>("OOOO"), pyobjpSPBMOptionParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPBMOptionParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///SPBM品种内对锁仓折扣参数查询响应
            void OnRspQrySPBMIntraParameter(CThostFtdcSPBMIntraParameterField *pSPBMIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPBMIntraParameter = NULL;
                PyObject *pyobjpSPBMIntraParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPBMIntraParameter) {
                    pyobjpSPBMIntraParameter = PyType_GenericAlloc(PyCThostFtdcSPBMIntraParameterFieldType, 0);
                    if (!pyobjpSPBMIntraParameter) goto cleanup;
                    PyCThostFtdcSPBMIntraParameterFieldData *extra_pSPBMIntraParameter = PyCTP_GetTypeData<PyCThostFtdcSPBMIntraParameterFieldData>(pyobjpSPBMIntraParameter);
                    extra_pSPBMIntraParameter->data = *pSPBMIntraParameter;
                    pyobjpSPBMIntraParameter_arg = pyobjpSPBMIntraParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPBMIntraParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMIntraParameter"), const_cast<char *>("OOOO"), pyobjpSPBMIntraParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPBMIntraParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///SPBM跨品种抵扣参数查询响应
            void OnRspQrySPBMInterParameter(CThostFtdcSPBMInterParameterField *pSPBMInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPBMInterParameter = NULL;
                PyObject *pyobjpSPBMInterParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPBMInterParameter) {
                    pyobjpSPBMInterParameter = PyType_GenericAlloc(PyCThostFtdcSPBMInterParameterFieldType, 0);
                    if (!pyobjpSPBMInterParameter) goto cleanup;
                    PyCThostFtdcSPBMInterParameterFieldData *extra_pSPBMInterParameter = PyCTP_GetTypeData<PyCThostFtdcSPBMInterParameterFieldData>(pyobjpSPBMInterParameter);
                    extra_pSPBMInterParameter->data = *pSPBMInterParameter;
                    pyobjpSPBMInterParameter_arg = pyobjpSPBMInterParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPBMInterParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMInterParameter"), const_cast<char *>("OOOO"), pyobjpSPBMInterParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPBMInterParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///SPBM组合保证金套餐查询响应
            void OnRspQrySPBMPortfDefinition(CThostFtdcSPBMPortfDefinitionField *pSPBMPortfDefinition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPBMPortfDefinition = NULL;
                PyObject *pyobjpSPBMPortfDefinition_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPBMPortfDefinition) {
                    pyobjpSPBMPortfDefinition = PyType_GenericAlloc(PyCThostFtdcSPBMPortfDefinitionFieldType, 0);
                    if (!pyobjpSPBMPortfDefinition) goto cleanup;
                    PyCThostFtdcSPBMPortfDefinitionFieldData *extra_pSPBMPortfDefinition = PyCTP_GetTypeData<PyCThostFtdcSPBMPortfDefinitionFieldData>(pyobjpSPBMPortfDefinition);
                    extra_pSPBMPortfDefinition->data = *pSPBMPortfDefinition;
                    pyobjpSPBMPortfDefinition_arg = pyobjpSPBMPortfDefinition;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPBMPortfDefinition_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMPortfDefinition"), const_cast<char *>("OOOO"), pyobjpSPBMPortfDefinition_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPBMPortfDefinition);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者SPBM套餐选择查询响应
            void OnRspQrySPBMInvestorPortfDef(CThostFtdcSPBMInvestorPortfDefField *pSPBMInvestorPortfDef, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPBMInvestorPortfDef = NULL;
                PyObject *pyobjpSPBMInvestorPortfDef_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPBMInvestorPortfDef) {
                    pyobjpSPBMInvestorPortfDef = PyType_GenericAlloc(PyCThostFtdcSPBMInvestorPortfDefFieldType, 0);
                    if (!pyobjpSPBMInvestorPortfDef) goto cleanup;
                    PyCThostFtdcSPBMInvestorPortfDefFieldData *extra_pSPBMInvestorPortfDef = PyCTP_GetTypeData<PyCThostFtdcSPBMInvestorPortfDefFieldData>(pyobjpSPBMInvestorPortfDef);
                    extra_pSPBMInvestorPortfDef->data = *pSPBMInvestorPortfDef;
                    pyobjpSPBMInvestorPortfDef_arg = pyobjpSPBMInvestorPortfDef;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPBMInvestorPortfDef_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMInvestorPortfDef"), const_cast<char *>("OOOO"), pyobjpSPBMInvestorPortfDef_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPBMInvestorPortfDef);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者新型组合保证金系数查询响应
            void OnRspQryInvestorPortfMarginRatio(CThostFtdcInvestorPortfMarginRatioField *pInvestorPortfMarginRatio, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorPortfMarginRatio = NULL;
                PyObject *pyobjpInvestorPortfMarginRatio_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorPortfMarginRatio) {
                    pyobjpInvestorPortfMarginRatio = PyType_GenericAlloc(PyCThostFtdcInvestorPortfMarginRatioFieldType, 0);
                    if (!pyobjpInvestorPortfMarginRatio) goto cleanup;
                    PyCThostFtdcInvestorPortfMarginRatioFieldData *extra_pInvestorPortfMarginRatio = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfMarginRatioFieldData>(pyobjpInvestorPortfMarginRatio);
                    extra_pInvestorPortfMarginRatio->data = *pInvestorPortfMarginRatio;
                    pyobjpInvestorPortfMarginRatio_arg = pyobjpInvestorPortfMarginRatio;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorPortfMarginRatio_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPortfMarginRatio"), const_cast<char *>("OOOO"), pyobjpInvestorPortfMarginRatio_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorPortfMarginRatio);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者产品SPBM明细查询响应
            void OnRspQryInvestorProdSPBMDetail(CThostFtdcInvestorProdSPBMDetailField *pInvestorProdSPBMDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorProdSPBMDetail = NULL;
                PyObject *pyobjpInvestorProdSPBMDetail_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorProdSPBMDetail) {
                    pyobjpInvestorProdSPBMDetail = PyType_GenericAlloc(PyCThostFtdcInvestorProdSPBMDetailFieldType, 0);
                    if (!pyobjpInvestorProdSPBMDetail) goto cleanup;
                    PyCThostFtdcInvestorProdSPBMDetailFieldData *extra_pInvestorProdSPBMDetail = PyCTP_GetTypeData<PyCThostFtdcInvestorProdSPBMDetailFieldData>(pyobjpInvestorProdSPBMDetail);
                    extra_pInvestorProdSPBMDetail->data = *pInvestorProdSPBMDetail;
                    pyobjpInvestorProdSPBMDetail_arg = pyobjpInvestorProdSPBMDetail;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorProdSPBMDetail_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProdSPBMDetail"), const_cast<char *>("OOOO"), pyobjpInvestorProdSPBMDetail_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorProdSPBMDetail);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者商品组SPMM记录查询响应
            void OnRspQryInvestorCommoditySPMMMargin(CThostFtdcInvestorCommoditySPMMMarginField *pInvestorCommoditySPMMMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorCommoditySPMMMargin = NULL;
                PyObject *pyobjpInvestorCommoditySPMMMargin_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorCommoditySPMMMargin) {
                    pyobjpInvestorCommoditySPMMMargin = PyType_GenericAlloc(PyCThostFtdcInvestorCommoditySPMMMarginFieldType, 0);
                    if (!pyobjpInvestorCommoditySPMMMargin) goto cleanup;
                    PyCThostFtdcInvestorCommoditySPMMMarginFieldData *extra_pInvestorCommoditySPMMMargin = PyCTP_GetTypeData<PyCThostFtdcInvestorCommoditySPMMMarginFieldData>(pyobjpInvestorCommoditySPMMMargin);
                    extra_pInvestorCommoditySPMMMargin->data = *pInvestorCommoditySPMMMargin;
                    pyobjpInvestorCommoditySPMMMargin_arg = pyobjpInvestorCommoditySPMMMargin;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorCommoditySPMMMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorCommoditySPMMMargin"), const_cast<char *>("OOOO"), pyobjpInvestorCommoditySPMMMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorCommoditySPMMMargin);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者商品群SPMM记录查询响应
            void OnRspQryInvestorCommodityGroupSPMMMargin(CThostFtdcInvestorCommodityGroupSPMMMarginField *pInvestorCommodityGroupSPMMMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorCommodityGroupSPMMMargin = NULL;
                PyObject *pyobjpInvestorCommodityGroupSPMMMargin_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorCommodityGroupSPMMMargin) {
                    pyobjpInvestorCommodityGroupSPMMMargin = PyType_GenericAlloc(PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType, 0);
                    if (!pyobjpInvestorCommodityGroupSPMMMargin) goto cleanup;
                    PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData *extra_pInvestorCommodityGroupSPMMMargin = PyCTP_GetTypeData<PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData>(pyobjpInvestorCommodityGroupSPMMMargin);
                    extra_pInvestorCommodityGroupSPMMMargin->data = *pInvestorCommodityGroupSPMMMargin;
                    pyobjpInvestorCommodityGroupSPMMMargin_arg = pyobjpInvestorCommodityGroupSPMMMargin;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorCommodityGroupSPMMMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorCommodityGroupSPMMMargin"), const_cast<char *>("OOOO"), pyobjpInvestorCommodityGroupSPMMMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorCommodityGroupSPMMMargin);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///SPMM合约参数查询响应
            void OnRspQrySPMMInstParam(CThostFtdcSPMMInstParamField *pSPMMInstParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPMMInstParam = NULL;
                PyObject *pyobjpSPMMInstParam_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPMMInstParam) {
                    pyobjpSPMMInstParam = PyType_GenericAlloc(PyCThostFtdcSPMMInstParamFieldType, 0);
                    if (!pyobjpSPMMInstParam) goto cleanup;
                    PyCThostFtdcSPMMInstParamFieldData *extra_pSPMMInstParam = PyCTP_GetTypeData<PyCThostFtdcSPMMInstParamFieldData>(pyobjpSPMMInstParam);
                    extra_pSPMMInstParam->data = *pSPMMInstParam;
                    pyobjpSPMMInstParam_arg = pyobjpSPMMInstParam;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPMMInstParam_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPMMInstParam"), const_cast<char *>("OOOO"), pyobjpSPMMInstParam_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPMMInstParam);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///SPMM产品参数查询响应
            void OnRspQrySPMMProductParam(CThostFtdcSPMMProductParamField *pSPMMProductParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPMMProductParam = NULL;
                PyObject *pyobjpSPMMProductParam_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPMMProductParam) {
                    pyobjpSPMMProductParam = PyType_GenericAlloc(PyCThostFtdcSPMMProductParamFieldType, 0);
                    if (!pyobjpSPMMProductParam) goto cleanup;
                    PyCThostFtdcSPMMProductParamFieldData *extra_pSPMMProductParam = PyCTP_GetTypeData<PyCThostFtdcSPMMProductParamFieldData>(pyobjpSPMMProductParam);
                    extra_pSPMMProductParam->data = *pSPMMProductParam;
                    pyobjpSPMMProductParam_arg = pyobjpSPMMProductParam;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPMMProductParam_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPMMProductParam"), const_cast<char *>("OOOO"), pyobjpSPMMProductParam_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPMMProductParam);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///SPBM附加跨品种抵扣参数查询响应
            void OnRspQrySPBMAddOnInterParameter(CThostFtdcSPBMAddOnInterParameterField *pSPBMAddOnInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSPBMAddOnInterParameter = NULL;
                PyObject *pyobjpSPBMAddOnInterParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSPBMAddOnInterParameter) {
                    pyobjpSPBMAddOnInterParameter = PyType_GenericAlloc(PyCThostFtdcSPBMAddOnInterParameterFieldType, 0);
                    if (!pyobjpSPBMAddOnInterParameter) goto cleanup;
                    PyCThostFtdcSPBMAddOnInterParameterFieldData *extra_pSPBMAddOnInterParameter = PyCTP_GetTypeData<PyCThostFtdcSPBMAddOnInterParameterFieldData>(pyobjpSPBMAddOnInterParameter);
                    extra_pSPBMAddOnInterParameter->data = *pSPBMAddOnInterParameter;
                    pyobjpSPBMAddOnInterParameter_arg = pyobjpSPBMAddOnInterParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSPBMAddOnInterParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySPBMAddOnInterParameter"), const_cast<char *>("OOOO"), pyobjpSPBMAddOnInterParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSPBMAddOnInterParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RCAMS产品组合信息查询响应
            void OnRspQryRCAMSCombProductInfo(CThostFtdcRCAMSCombProductInfoField *pRCAMSCombProductInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRCAMSCombProductInfo = NULL;
                PyObject *pyobjpRCAMSCombProductInfo_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRCAMSCombProductInfo) {
                    pyobjpRCAMSCombProductInfo = PyType_GenericAlloc(PyCThostFtdcRCAMSCombProductInfoFieldType, 0);
                    if (!pyobjpRCAMSCombProductInfo) goto cleanup;
                    PyCThostFtdcRCAMSCombProductInfoFieldData *extra_pRCAMSCombProductInfo = PyCTP_GetTypeData<PyCThostFtdcRCAMSCombProductInfoFieldData>(pyobjpRCAMSCombProductInfo);
                    extra_pRCAMSCombProductInfo->data = *pRCAMSCombProductInfo;
                    pyobjpRCAMSCombProductInfo_arg = pyobjpRCAMSCombProductInfo;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRCAMSCombProductInfo_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSCombProductInfo"), const_cast<char *>("OOOO"), pyobjpRCAMSCombProductInfo_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRCAMSCombProductInfo);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RCAMS同合约风险对冲参数查询响应
            void OnRspQryRCAMSInstrParameter(CThostFtdcRCAMSInstrParameterField *pRCAMSInstrParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRCAMSInstrParameter = NULL;
                PyObject *pyobjpRCAMSInstrParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRCAMSInstrParameter) {
                    pyobjpRCAMSInstrParameter = PyType_GenericAlloc(PyCThostFtdcRCAMSInstrParameterFieldType, 0);
                    if (!pyobjpRCAMSInstrParameter) goto cleanup;
                    PyCThostFtdcRCAMSInstrParameterFieldData *extra_pRCAMSInstrParameter = PyCTP_GetTypeData<PyCThostFtdcRCAMSInstrParameterFieldData>(pyobjpRCAMSInstrParameter);
                    extra_pRCAMSInstrParameter->data = *pRCAMSInstrParameter;
                    pyobjpRCAMSInstrParameter_arg = pyobjpRCAMSInstrParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRCAMSInstrParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSInstrParameter"), const_cast<char *>("OOOO"), pyobjpRCAMSInstrParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRCAMSInstrParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RCAMS品种内风险对冲参数查询响应
            void OnRspQryRCAMSIntraParameter(CThostFtdcRCAMSIntraParameterField *pRCAMSIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRCAMSIntraParameter = NULL;
                PyObject *pyobjpRCAMSIntraParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRCAMSIntraParameter) {
                    pyobjpRCAMSIntraParameter = PyType_GenericAlloc(PyCThostFtdcRCAMSIntraParameterFieldType, 0);
                    if (!pyobjpRCAMSIntraParameter) goto cleanup;
                    PyCThostFtdcRCAMSIntraParameterFieldData *extra_pRCAMSIntraParameter = PyCTP_GetTypeData<PyCThostFtdcRCAMSIntraParameterFieldData>(pyobjpRCAMSIntraParameter);
                    extra_pRCAMSIntraParameter->data = *pRCAMSIntraParameter;
                    pyobjpRCAMSIntraParameter_arg = pyobjpRCAMSIntraParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRCAMSIntraParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSIntraParameter"), const_cast<char *>("OOOO"), pyobjpRCAMSIntraParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRCAMSIntraParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RCAMS跨品种风险折抵参数查询响应
            void OnRspQryRCAMSInterParameter(CThostFtdcRCAMSInterParameterField *pRCAMSInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRCAMSInterParameter = NULL;
                PyObject *pyobjpRCAMSInterParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRCAMSInterParameter) {
                    pyobjpRCAMSInterParameter = PyType_GenericAlloc(PyCThostFtdcRCAMSInterParameterFieldType, 0);
                    if (!pyobjpRCAMSInterParameter) goto cleanup;
                    PyCThostFtdcRCAMSInterParameterFieldData *extra_pRCAMSInterParameter = PyCTP_GetTypeData<PyCThostFtdcRCAMSInterParameterFieldData>(pyobjpRCAMSInterParameter);
                    extra_pRCAMSInterParameter->data = *pRCAMSInterParameter;
                    pyobjpRCAMSInterParameter_arg = pyobjpRCAMSInterParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRCAMSInterParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSInterParameter"), const_cast<char *>("OOOO"), pyobjpRCAMSInterParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRCAMSInterParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RCAMS空头期权风险调整参数查询响应
            void OnRspQryRCAMSShortOptAdjustParam(CThostFtdcRCAMSShortOptAdjustParamField *pRCAMSShortOptAdjustParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRCAMSShortOptAdjustParam = NULL;
                PyObject *pyobjpRCAMSShortOptAdjustParam_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRCAMSShortOptAdjustParam) {
                    pyobjpRCAMSShortOptAdjustParam = PyType_GenericAlloc(PyCThostFtdcRCAMSShortOptAdjustParamFieldType, 0);
                    if (!pyobjpRCAMSShortOptAdjustParam) goto cleanup;
                    PyCThostFtdcRCAMSShortOptAdjustParamFieldData *extra_pRCAMSShortOptAdjustParam = PyCTP_GetTypeData<PyCThostFtdcRCAMSShortOptAdjustParamFieldData>(pyobjpRCAMSShortOptAdjustParam);
                    extra_pRCAMSShortOptAdjustParam->data = *pRCAMSShortOptAdjustParam;
                    pyobjpRCAMSShortOptAdjustParam_arg = pyobjpRCAMSShortOptAdjustParam;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRCAMSShortOptAdjustParam_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSShortOptAdjustParam"), const_cast<char *>("OOOO"), pyobjpRCAMSShortOptAdjustParam_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRCAMSShortOptAdjustParam);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RCAMS策略组合持仓查询响应
            void OnRspQryRCAMSInvestorCombPosition(CThostFtdcRCAMSInvestorCombPositionField *pRCAMSInvestorCombPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRCAMSInvestorCombPosition = NULL;
                PyObject *pyobjpRCAMSInvestorCombPosition_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRCAMSInvestorCombPosition) {
                    pyobjpRCAMSInvestorCombPosition = PyType_GenericAlloc(PyCThostFtdcRCAMSInvestorCombPositionFieldType, 0);
                    if (!pyobjpRCAMSInvestorCombPosition) goto cleanup;
                    PyCThostFtdcRCAMSInvestorCombPositionFieldData *extra_pRCAMSInvestorCombPosition = PyCTP_GetTypeData<PyCThostFtdcRCAMSInvestorCombPositionFieldData>(pyobjpRCAMSInvestorCombPosition);
                    extra_pRCAMSInvestorCombPosition->data = *pRCAMSInvestorCombPosition;
                    pyobjpRCAMSInvestorCombPosition_arg = pyobjpRCAMSInvestorCombPosition;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRCAMSInvestorCombPosition_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRCAMSInvestorCombPosition"), const_cast<char *>("OOOO"), pyobjpRCAMSInvestorCombPosition_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRCAMSInvestorCombPosition);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者品种RCAMS保证金查询响应
            void OnRspQryInvestorProdRCAMSMargin(CThostFtdcInvestorProdRCAMSMarginField *pInvestorProdRCAMSMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorProdRCAMSMargin = NULL;
                PyObject *pyobjpInvestorProdRCAMSMargin_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorProdRCAMSMargin) {
                    pyobjpInvestorProdRCAMSMargin = PyType_GenericAlloc(PyCThostFtdcInvestorProdRCAMSMarginFieldType, 0);
                    if (!pyobjpInvestorProdRCAMSMargin) goto cleanup;
                    PyCThostFtdcInvestorProdRCAMSMarginFieldData *extra_pInvestorProdRCAMSMargin = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRCAMSMarginFieldData>(pyobjpInvestorProdRCAMSMargin);
                    extra_pInvestorProdRCAMSMargin->data = *pInvestorProdRCAMSMargin;
                    pyobjpInvestorProdRCAMSMargin_arg = pyobjpInvestorProdRCAMSMargin;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorProdRCAMSMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProdRCAMSMargin"), const_cast<char *>("OOOO"), pyobjpInvestorProdRCAMSMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorProdRCAMSMargin);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RULE合约保证金参数查询响应
            void OnRspQryRULEInstrParameter(CThostFtdcRULEInstrParameterField *pRULEInstrParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRULEInstrParameter = NULL;
                PyObject *pyobjpRULEInstrParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRULEInstrParameter) {
                    pyobjpRULEInstrParameter = PyType_GenericAlloc(PyCThostFtdcRULEInstrParameterFieldType, 0);
                    if (!pyobjpRULEInstrParameter) goto cleanup;
                    PyCThostFtdcRULEInstrParameterFieldData *extra_pRULEInstrParameter = PyCTP_GetTypeData<PyCThostFtdcRULEInstrParameterFieldData>(pyobjpRULEInstrParameter);
                    extra_pRULEInstrParameter->data = *pRULEInstrParameter;
                    pyobjpRULEInstrParameter_arg = pyobjpRULEInstrParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRULEInstrParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRULEInstrParameter"), const_cast<char *>("OOOO"), pyobjpRULEInstrParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRULEInstrParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RULE品种内对锁仓折扣参数查询响应
            void OnRspQryRULEIntraParameter(CThostFtdcRULEIntraParameterField *pRULEIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRULEIntraParameter = NULL;
                PyObject *pyobjpRULEIntraParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRULEIntraParameter) {
                    pyobjpRULEIntraParameter = PyType_GenericAlloc(PyCThostFtdcRULEIntraParameterFieldType, 0);
                    if (!pyobjpRULEIntraParameter) goto cleanup;
                    PyCThostFtdcRULEIntraParameterFieldData *extra_pRULEIntraParameter = PyCTP_GetTypeData<PyCThostFtdcRULEIntraParameterFieldData>(pyobjpRULEIntraParameter);
                    extra_pRULEIntraParameter->data = *pRULEIntraParameter;
                    pyobjpRULEIntraParameter_arg = pyobjpRULEIntraParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRULEIntraParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRULEIntraParameter"), const_cast<char *>("OOOO"), pyobjpRULEIntraParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRULEIntraParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///RULE跨品种抵扣参数查询响应
            void OnRspQryRULEInterParameter(CThostFtdcRULEInterParameterField *pRULEInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRULEInterParameter = NULL;
                PyObject *pyobjpRULEInterParameter_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRULEInterParameter) {
                    pyobjpRULEInterParameter = PyType_GenericAlloc(PyCThostFtdcRULEInterParameterFieldType, 0);
                    if (!pyobjpRULEInterParameter) goto cleanup;
                    PyCThostFtdcRULEInterParameterFieldData *extra_pRULEInterParameter = PyCTP_GetTypeData<PyCThostFtdcRULEInterParameterFieldData>(pyobjpRULEInterParameter);
                    extra_pRULEInterParameter->data = *pRULEInterParameter;
                    pyobjpRULEInterParameter_arg = pyobjpRULEInterParameter;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRULEInterParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryRULEInterParameter"), const_cast<char *>("OOOO"), pyobjpRULEInterParameter_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRULEInterParameter);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者产品RULE保证金查询响应
            void OnRspQryInvestorProdRULEMargin(CThostFtdcInvestorProdRULEMarginField *pInvestorProdRULEMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorProdRULEMargin = NULL;
                PyObject *pyobjpInvestorProdRULEMargin_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorProdRULEMargin) {
                    pyobjpInvestorProdRULEMargin = PyType_GenericAlloc(PyCThostFtdcInvestorProdRULEMarginFieldType, 0);
                    if (!pyobjpInvestorProdRULEMargin) goto cleanup;
                    PyCThostFtdcInvestorProdRULEMarginFieldData *extra_pInvestorProdRULEMargin = PyCTP_GetTypeData<PyCThostFtdcInvestorProdRULEMarginFieldData>(pyobjpInvestorProdRULEMargin);
                    extra_pInvestorProdRULEMargin->data = *pInvestorProdRULEMargin;
                    pyobjpInvestorProdRULEMargin_arg = pyobjpInvestorProdRULEMargin;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorProdRULEMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorProdRULEMargin"), const_cast<char *>("OOOO"), pyobjpInvestorProdRULEMargin_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorProdRULEMargin);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者新型组合保证金开关查询响应
            void OnRspQryInvestorPortfSetting(CThostFtdcInvestorPortfSettingField *pInvestorPortfSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorPortfSetting = NULL;
                PyObject *pyobjpInvestorPortfSetting_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorPortfSetting) {
                    pyobjpInvestorPortfSetting = PyType_GenericAlloc(PyCThostFtdcInvestorPortfSettingFieldType, 0);
                    if (!pyobjpInvestorPortfSetting) goto cleanup;
                    PyCThostFtdcInvestorPortfSettingFieldData *extra_pInvestorPortfSetting = PyCTP_GetTypeData<PyCThostFtdcInvestorPortfSettingFieldData>(pyobjpInvestorPortfSetting);
                    extra_pInvestorPortfSetting->data = *pInvestorPortfSetting;
                    pyobjpInvestorPortfSetting_arg = pyobjpInvestorPortfSetting;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorPortfSetting_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorPortfSetting"), const_cast<char *>("OOOO"), pyobjpInvestorPortfSetting_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorPortfSetting);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者申报费阶梯收取记录查询响应
            void OnRspQryInvestorInfoCommRec(CThostFtdcInvestorInfoCommRecField *pInvestorInfoCommRec, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInvestorInfoCommRec = NULL;
                PyObject *pyobjpInvestorInfoCommRec_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInvestorInfoCommRec) {
                    pyobjpInvestorInfoCommRec = PyType_GenericAlloc(PyCThostFtdcInvestorInfoCommRecFieldType, 0);
                    if (!pyobjpInvestorInfoCommRec) goto cleanup;
                    PyCThostFtdcInvestorInfoCommRecFieldData *extra_pInvestorInfoCommRec = PyCTP_GetTypeData<PyCThostFtdcInvestorInfoCommRecFieldData>(pyobjpInvestorInfoCommRec);
                    extra_pInvestorInfoCommRec->data = *pInvestorInfoCommRec;
                    pyobjpInvestorInfoCommRec_arg = pyobjpInvestorInfoCommRec;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInvestorInfoCommRec_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryInvestorInfoCommRec"), const_cast<char *>("OOOO"), pyobjpInvestorInfoCommRec_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInvestorInfoCommRec);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///组合腿信息查询响应
            void OnRspQryCombLeg(CThostFtdcCombLegField *pCombLeg, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCombLeg = NULL;
                PyObject *pyobjpCombLeg_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pCombLeg) {
                    pyobjpCombLeg = PyType_GenericAlloc(PyCThostFtdcCombLegFieldType, 0);
                    if (!pyobjpCombLeg) goto cleanup;
                    PyCThostFtdcCombLegFieldData *extra_pCombLeg = PyCTP_GetTypeData<PyCThostFtdcCombLegFieldData>(pyobjpCombLeg);
                    extra_pCombLeg->data = *pCombLeg;
                    pyobjpCombLeg_arg = pyobjpCombLeg;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpCombLeg_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryCombLeg"), const_cast<char *>("OOOO"), pyobjpCombLeg_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCombLeg);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///对冲设置请求响应
            void OnRspOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOffsetSetting = NULL;
                PyObject *pyobjpInputOffsetSetting_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputOffsetSetting) {
                    pyobjpInputOffsetSetting = PyType_GenericAlloc(PyCThostFtdcInputOffsetSettingFieldType, 0);
                    if (!pyobjpInputOffsetSetting) goto cleanup;
                    PyCThostFtdcInputOffsetSettingFieldData *extra_pInputOffsetSetting = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(pyobjpInputOffsetSetting);
                    extra_pInputOffsetSetting->data = *pInputOffsetSetting;
                    pyobjpInputOffsetSetting_arg = pyobjpInputOffsetSetting;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputOffsetSetting_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspOffsetSetting"), const_cast<char *>("OOOO"), pyobjpInputOffsetSetting_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOffsetSetting);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///对冲设置撤销请求响应
            void OnRspCancelOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOffsetSetting = NULL;
                PyObject *pyobjpInputOffsetSetting_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputOffsetSetting) {
                    pyobjpInputOffsetSetting = PyType_GenericAlloc(PyCThostFtdcInputOffsetSettingFieldType, 0);
                    if (!pyobjpInputOffsetSetting) goto cleanup;
                    PyCThostFtdcInputOffsetSettingFieldData *extra_pInputOffsetSetting = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(pyobjpInputOffsetSetting);
                    extra_pInputOffsetSetting->data = *pInputOffsetSetting;
                    pyobjpInputOffsetSetting_arg = pyobjpInputOffsetSetting;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputOffsetSetting_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspCancelOffsetSetting"), const_cast<char *>("OOOO"), pyobjpInputOffsetSetting_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOffsetSetting);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///对冲设置通知
            void OnRtnOffsetSetting(CThostFtdcOffsetSettingField *pOffsetSetting) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOffsetSetting = NULL;
                PyObject *pyobjpOffsetSetting_arg = Py_None;
                PyObject *result = NULL;

                if (pOffsetSetting) {
                    pyobjpOffsetSetting = PyType_GenericAlloc(PyCThostFtdcOffsetSettingFieldType, 0);
                    if (!pyobjpOffsetSetting) goto cleanup;
                    PyCThostFtdcOffsetSettingFieldData *extra_pOffsetSetting = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(pyobjpOffsetSetting);
                    extra_pOffsetSetting->data = *pOffsetSetting;
                    pyobjpOffsetSetting_arg = pyobjpOffsetSetting;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpOffsetSetting_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnOffsetSetting"), const_cast<char *>("O"), pyobjpOffsetSetting_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOffsetSetting);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///对冲设置错误回报
            void OnErrRtnOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputOffsetSetting = NULL;
                PyObject *pyobjpInputOffsetSetting_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputOffsetSetting) {
                    pyobjpInputOffsetSetting = PyType_GenericAlloc(PyCThostFtdcInputOffsetSettingFieldType, 0);
                    if (!pyobjpInputOffsetSetting) goto cleanup;
                    PyCThostFtdcInputOffsetSettingFieldData *extra_pInputOffsetSetting = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(pyobjpInputOffsetSetting);
                    extra_pInputOffsetSetting->data = *pInputOffsetSetting;
                    pyobjpInputOffsetSetting_arg = pyobjpInputOffsetSetting;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputOffsetSetting_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnOffsetSetting"), const_cast<char *>("OO"), pyobjpInputOffsetSetting_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputOffsetSetting);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///对冲设置撤销错误回报
            void OnErrRtnCancelOffsetSetting(CThostFtdcCancelOffsetSettingField *pCancelOffsetSetting, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpCancelOffsetSetting = NULL;
                PyObject *pyobjpCancelOffsetSetting_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pCancelOffsetSetting) {
                    pyobjpCancelOffsetSetting = PyType_GenericAlloc(PyCThostFtdcCancelOffsetSettingFieldType, 0);
                    if (!pyobjpCancelOffsetSetting) goto cleanup;
                    PyCThostFtdcCancelOffsetSettingFieldData *extra_pCancelOffsetSetting = PyCTP_GetTypeData<PyCThostFtdcCancelOffsetSettingFieldData>(pyobjpCancelOffsetSetting);
                    extra_pCancelOffsetSetting->data = *pCancelOffsetSetting;
                    pyobjpCancelOffsetSetting_arg = pyobjpCancelOffsetSetting;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpCancelOffsetSetting_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnCancelOffsetSetting"), const_cast<char *>("OO"), pyobjpCancelOffsetSetting_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpCancelOffsetSetting);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///投资者对冲设置查询响应
            void OnRspQryOffsetSetting(CThostFtdcOffsetSettingField *pOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpOffsetSetting = NULL;
                PyObject *pyobjpOffsetSetting_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pOffsetSetting) {
                    pyobjpOffsetSetting = PyType_GenericAlloc(PyCThostFtdcOffsetSettingFieldType, 0);
                    if (!pyobjpOffsetSetting) goto cleanup;
                    PyCThostFtdcOffsetSettingFieldData *extra_pOffsetSetting = PyCTP_GetTypeData<PyCThostFtdcOffsetSettingFieldData>(pyobjpOffsetSetting);
                    extra_pOffsetSetting->data = *pOffsetSetting;
                    pyobjpOffsetSetting_arg = pyobjpOffsetSetting;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpOffsetSetting_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryOffsetSetting"), const_cast<char *>("OOOO"), pyobjpOffsetSetting_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpOffsetSetting);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///申请短信验证码响应
            void OnRspGenSMSCode(CThostFtdcRspGenSMSCodeField *pRspGenSMSCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpRspGenSMSCode = NULL;
                PyObject *pyobjpRspGenSMSCode_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pRspGenSMSCode) {
                    pyobjpRspGenSMSCode = PyType_GenericAlloc(PyCThostFtdcRspGenSMSCodeFieldType, 0);
                    if (!pyobjpRspGenSMSCode) goto cleanup;
                    PyCThostFtdcRspGenSMSCodeFieldData *extra_pRspGenSMSCode = PyCTP_GetTypeData<PyCThostFtdcRspGenSMSCodeFieldData>(pyobjpRspGenSMSCode);
                    extra_pRspGenSMSCode->data = *pRspGenSMSCode;
                    pyobjpRspGenSMSCode_arg = pyobjpRspGenSMSCode;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpRspGenSMSCode_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspGenSMSCode"), const_cast<char *>("OOOO"), pyobjpRspGenSMSCode_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpRspGenSMSCode);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套利确认回复
            void OnRspSpdApply(CThostFtdcInputSpdApplyField *pInputSpdApply, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputSpdApply = NULL;
                PyObject *pyobjpInputSpdApply_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputSpdApply) {
                    pyobjpInputSpdApply = PyType_GenericAlloc(PyCThostFtdcInputSpdApplyFieldType, 0);
                    if (!pyobjpInputSpdApply) goto cleanup;
                    PyCThostFtdcInputSpdApplyFieldData *extra_pInputSpdApply = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(pyobjpInputSpdApply);
                    extra_pInputSpdApply->data = *pInputSpdApply;
                    pyobjpInputSpdApply_arg = pyobjpInputSpdApply;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputSpdApply_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSpdApply"), const_cast<char *>("OOOO"), pyobjpInputSpdApply_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputSpdApply);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套利确认撤销回复
            void OnRspSpdApplyAction(CThostFtdcInputSpdApplyActionField *pInputSpdApplyAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputSpdApplyAction = NULL;
                PyObject *pyobjpInputSpdApplyAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputSpdApplyAction) {
                    pyobjpInputSpdApplyAction = PyType_GenericAlloc(PyCThostFtdcInputSpdApplyActionFieldType, 0);
                    if (!pyobjpInputSpdApplyAction) goto cleanup;
                    PyCThostFtdcInputSpdApplyActionFieldData *extra_pInputSpdApplyAction = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(pyobjpInputSpdApplyAction);
                    extra_pInputSpdApplyAction->data = *pInputSpdApplyAction;
                    pyobjpInputSpdApplyAction_arg = pyobjpInputSpdApplyAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputSpdApplyAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSpdApplyAction"), const_cast<char *>("OOOO"), pyobjpInputSpdApplyAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputSpdApplyAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套利确认查询回复
            void OnRspQrySpdApply(CThostFtdcSpdApplyField *pSpdApply, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSpdApply = NULL;
                PyObject *pyobjpSpdApply_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSpdApply) {
                    pyobjpSpdApply = PyType_GenericAlloc(PyCThostFtdcSpdApplyFieldType, 0);
                    if (!pyobjpSpdApply) goto cleanup;
                    PyCThostFtdcSpdApplyFieldData *extra_pSpdApply = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(pyobjpSpdApply);
                    extra_pSpdApply->data = *pSpdApply;
                    pyobjpSpdApply_arg = pyobjpSpdApply;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSpdApply_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQrySpdApply"), const_cast<char *>("OOOO"), pyobjpSpdApply_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSpdApply);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套利确认通知
            void OnRtnSpdApply(CThostFtdcSpdApplyField *pSpdApply) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSpdApply = NULL;
                PyObject *pyobjpSpdApply_arg = Py_None;
                PyObject *result = NULL;

                if (pSpdApply) {
                    pyobjpSpdApply = PyType_GenericAlloc(PyCThostFtdcSpdApplyFieldType, 0);
                    if (!pyobjpSpdApply) goto cleanup;
                    PyCThostFtdcSpdApplyFieldData *extra_pSpdApply = PyCTP_GetTypeData<PyCThostFtdcSpdApplyFieldData>(pyobjpSpdApply);
                    extra_pSpdApply->data = *pSpdApply;
                    pyobjpSpdApply_arg = pyobjpSpdApply;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpSpdApply_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnSpdApply"), const_cast<char *>("O"), pyobjpSpdApply_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSpdApply);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套利申请录入错误回报
            void OnErrRtnSpdApply(CThostFtdcInputSpdApplyField *pInputSpdApply, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputSpdApply = NULL;
                PyObject *pyobjpInputSpdApply_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputSpdApply) {
                    pyobjpInputSpdApply = PyType_GenericAlloc(PyCThostFtdcInputSpdApplyFieldType, 0);
                    if (!pyobjpInputSpdApply) goto cleanup;
                    PyCThostFtdcInputSpdApplyFieldData *extra_pInputSpdApply = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(pyobjpInputSpdApply);
                    extra_pInputSpdApply->data = *pInputSpdApply;
                    pyobjpInputSpdApply_arg = pyobjpInputSpdApply;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputSpdApply_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnSpdApply"), const_cast<char *>("OO"), pyobjpInputSpdApply_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputSpdApply);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套利确认撤销通知
            void OnErrRtnSpdApplyAction(CThostFtdcSpdApplyActionField *pSpdApplyAction, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSpdApplyAction = NULL;
                PyObject *pyobjpSpdApplyAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pSpdApplyAction) {
                    pyobjpSpdApplyAction = PyType_GenericAlloc(PyCThostFtdcSpdApplyActionFieldType, 0);
                    if (!pyobjpSpdApplyAction) goto cleanup;
                    PyCThostFtdcSpdApplyActionFieldData *extra_pSpdApplyAction = PyCTP_GetTypeData<PyCThostFtdcSpdApplyActionFieldData>(pyobjpSpdApplyAction);
                    extra_pSpdApplyAction->data = *pSpdApplyAction;
                    pyobjpSpdApplyAction_arg = pyobjpSpdApplyAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpSpdApplyAction_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnSpdApplyAction"), const_cast<char *>("OO"), pyobjpSpdApplyAction_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSpdApplyAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套保确认回复
            void OnRspHedgeCfm(CThostFtdcInputHedgeCfmField *pInputHedgeCfm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputHedgeCfm = NULL;
                PyObject *pyobjpInputHedgeCfm_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputHedgeCfm) {
                    pyobjpInputHedgeCfm = PyType_GenericAlloc(PyCThostFtdcInputHedgeCfmFieldType, 0);
                    if (!pyobjpInputHedgeCfm) goto cleanup;
                    PyCThostFtdcInputHedgeCfmFieldData *extra_pInputHedgeCfm = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(pyobjpInputHedgeCfm);
                    extra_pInputHedgeCfm->data = *pInputHedgeCfm;
                    pyobjpInputHedgeCfm_arg = pyobjpInputHedgeCfm;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputHedgeCfm_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspHedgeCfm"), const_cast<char *>("OOOO"), pyobjpInputHedgeCfm_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputHedgeCfm);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套保确认撤销回复
            void OnRspHedgeCfmAction(CThostFtdcInputHedgeCfmActionField *pInputHedgeCfmAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputHedgeCfmAction = NULL;
                PyObject *pyobjpInputHedgeCfmAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pInputHedgeCfmAction) {
                    pyobjpInputHedgeCfmAction = PyType_GenericAlloc(PyCThostFtdcInputHedgeCfmActionFieldType, 0);
                    if (!pyobjpInputHedgeCfmAction) goto cleanup;
                    PyCThostFtdcInputHedgeCfmActionFieldData *extra_pInputHedgeCfmAction = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(pyobjpInputHedgeCfmAction);
                    extra_pInputHedgeCfmAction->data = *pInputHedgeCfmAction;
                    pyobjpInputHedgeCfmAction_arg = pyobjpInputHedgeCfmAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpInputHedgeCfmAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspHedgeCfmAction"), const_cast<char *>("OOOO"), pyobjpInputHedgeCfmAction_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputHedgeCfmAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套保确认查询回复
            void OnRspQryHedgeCfm(CThostFtdcHedgeCfmField *pHedgeCfm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpHedgeCfm = NULL;
                PyObject *pyobjpHedgeCfm_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pHedgeCfm) {
                    pyobjpHedgeCfm = PyType_GenericAlloc(PyCThostFtdcHedgeCfmFieldType, 0);
                    if (!pyobjpHedgeCfm) goto cleanup;
                    PyCThostFtdcHedgeCfmFieldData *extra_pHedgeCfm = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(pyobjpHedgeCfm);
                    extra_pHedgeCfm->data = *pHedgeCfm;
                    pyobjpHedgeCfm_arg = pyobjpHedgeCfm;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }
                pyobjnRequestID = PyLong_FromLong(nRequestID);
                if(!pyobjnRequestID) goto cleanup;
                pyobjbIsLast = PyBool_FromLong(bIsLast);
                if (!pyobjbIsLast) goto cleanup;

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpHedgeCfm_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryHedgeCfm"), const_cast<char *>("OOOO"), pyobjpHedgeCfm_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpHedgeCfm);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套保确认通知
            void OnRtnHedgeCfm(CThostFtdcHedgeCfmField *pHedgeCfm) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpHedgeCfm = NULL;
                PyObject *pyobjpHedgeCfm_arg = Py_None;
                PyObject *result = NULL;

                if (pHedgeCfm) {
                    pyobjpHedgeCfm = PyType_GenericAlloc(PyCThostFtdcHedgeCfmFieldType, 0);
                    if (!pyobjpHedgeCfm) goto cleanup;
                    PyCThostFtdcHedgeCfmFieldData *extra_pHedgeCfm = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmFieldData>(pyobjpHedgeCfm);
                    extra_pHedgeCfm->data = *pHedgeCfm;
                    pyobjpHedgeCfm_arg = pyobjpHedgeCfm;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpHedgeCfm_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnHedgeCfm"), const_cast<char *>("O"), pyobjpHedgeCfm_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpHedgeCfm);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套保额度录入错误回报
            void OnErrRtnHedgeCfm(CThostFtdcInputHedgeCfmField *pInputHedgeCfm, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpInputHedgeCfm = NULL;
                PyObject *pyobjpInputHedgeCfm_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pInputHedgeCfm) {
                    pyobjpInputHedgeCfm = PyType_GenericAlloc(PyCThostFtdcInputHedgeCfmFieldType, 0);
                    if (!pyobjpInputHedgeCfm) goto cleanup;
                    PyCThostFtdcInputHedgeCfmFieldData *extra_pInputHedgeCfm = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(pyobjpInputHedgeCfm);
                    extra_pInputHedgeCfm->data = *pInputHedgeCfm;
                    pyobjpInputHedgeCfm_arg = pyobjpInputHedgeCfm;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpInputHedgeCfm_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnHedgeCfm"), const_cast<char *>("OO"), pyobjpInputHedgeCfm_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpInputHedgeCfm);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///套保确认撤销通知
            void OnErrRtnHedgeCfmAction(CThostFtdcHedgeCfmActionField *pHedgeCfmAction, CThostFtdcRspInfoField *pRspInfo) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpHedgeCfmAction = NULL;
                PyObject *pyobjpHedgeCfmAction_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *result = NULL;

                if (pHedgeCfmAction) {
                    pyobjpHedgeCfmAction = PyType_GenericAlloc(PyCThostFtdcHedgeCfmActionFieldType, 0);
                    if (!pyobjpHedgeCfmAction) goto cleanup;
                    PyCThostFtdcHedgeCfmActionFieldData *extra_pHedgeCfmAction = PyCTP_GetTypeData<PyCThostFtdcHedgeCfmActionFieldData>(pyobjpHedgeCfmAction);
                    extra_pHedgeCfmAction->data = *pHedgeCfmAction;
                    pyobjpHedgeCfmAction_arg = pyobjpHedgeCfmAction;
                }
                if (pRspInfo) {
                    pyobjpRspInfo = PyType_GenericAlloc(PyCThostFtdcRspInfoFieldType, 0);
                    if (!pyobjpRspInfo) goto cleanup;
                    PyCThostFtdcRspInfoFieldData *extra_pRspInfo = PyCTP_GetTypeData<PyCThostFtdcRspInfoFieldData>(pyobjpRspInfo);
                    extra_pRspInfo->data = *pRspInfo;
                    pyobjpRspInfo_arg = pyobjpRspInfo;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OO"), pyobjpHedgeCfmAction_arg, pyobjpRspInfo_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnErrRtnHedgeCfmAction"), const_cast<char *>("OO"), pyobjpHedgeCfmAction_arg, pyobjpRspInfo_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpHedgeCfmAction);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }
    };
}

///创建TraderApi
///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
///@param bIsProductionMode true:使用生产版本的API  false:使用测评版本的API
///@return 创建出的UserApi
///@see static CThostFtdcTraderApi * CThostFtdcTraderApi::CreateFtdcTraderApi(const char *pszFlowPath = "", bool bIsProductionMode = true)
static PyObject *PyCThostFtdcTraderApiType_method_CreateFtdcTraderApi(PyTypeObject *type, PyObject *args){
	const char *pszFlowPath = "";
	bool bIsProductionMode = true;

	if (!PyArg_ParseTuple(args, "|yp", &pszFlowPath, &bIsProductionMode)) {
		return NULL;
	}

	/* 构造api对象 */
	PyObject *self = PyType_GenericAlloc(type, 0);
	if(!self){
		return NULL;
	}

    PyCThostFtdcTraderApiData* extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);

	/* 创建ctpapi实例 */
	extra->api = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath, bIsProductionMode);

	if(!(extra->api)){
		PyErr_SetString(PyExc_RuntimeError, "CThostFtdcTraderApi::CreateFtdcTraderApi failed");
		Py_DECREF(self);
		return NULL;
	}

	extra->spi  = new (std::nothrow) PyCThostFtdcTraderSpi(extra);
    if (!(extra->spi)) {
        PyErr_NoMemory();
        Py_DECREF(self);
        return NULL;
    }

	extra->api->RegisterSpi(extra->spi);

	extra->pySpi = Py_None;
	Py_INCREF(extra->pySpi);

	return self;
}
///删除接口对象本身
///@remark 不再使用本接口对象时,调用该函数删除接口对象
///@see void CThostFtdcTraderApi::Release()
static PyObject *PyCThostFtdcTraderApiType_method_Release(PyObject *self, PyObject *args) {
	PyCThostFtdcTraderApiData* extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
	if( extra->api )
	{
		extra->api->RegisterSpi(NULL);
		extra->api->Release();
		extra->api = NULL;
	}
	if( extra->spi ){
		delete dynamic_cast<PyCThostFtdcTraderSpi *>(extra->spi);
		extra->spi = NULL;
	}
	Py_CLEAR(extra->pySpi);
	Py_RETURN_NONE;
}
///注册回调接口
///@param pSpi 派生自回调接口类的实例
///@see void CThostFtdcTraderApi::RegisterSpi(CThostFtdcTraderSpi *pSpi)
static PyObject *PyCThostFtdcTraderApiType_method_RegisterSpi(PyObject *self, PyObject *args) {
    PyCThostFtdcTraderApiData* extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyObject *tmp = extra->pySpi;
	if (!PyArg_ParseTuple(args, "O", &extra->pySpi)) {
		return NULL;
	}
	Py_INCREF(extra->pySpi);
	Py_XDECREF(tmp);
	Py_RETURN_NONE;
}


///获取API的版本信息
///@retrun 获取到的版本号
///@see static const char * CThostFtdcTraderApi::GetApiVersion()
static PyObject* PyCThostFtdcTraderApiType_method_GetApiVersion(PyObject *self, PyObject *args) {
    return PyBytes_FromString(CThostFtdcTraderApi::GetApiVersion());
}

///初始化
///@remark 初始化运行环境,只有调用后,接口才开始工作
///@see void CThostFtdcTraderApi::Init()
static PyObject* PyCThostFtdcTraderApiType_method_Init(PyObject *self, PyObject *args) {
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    extra->api->Init();
    extra = NULL;
    Py_RETURN_NONE;
}

///等待接口线程结束运行
///@return 线程退出代码
///@see int CThostFtdcTraderApi::Join()
static PyObject* PyCThostFtdcTraderApiType_method_Join(PyObject *self, PyObject *args) {
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
	return PyLong_FromLong(extra->api->Join());
}

///获取当前交易日
///@retrun 获取到的交易日
///@remark 只有登录成功后,才能得到正确的交易日
///@see const char * CThostFtdcTraderApi::GetTradingDay()
static PyObject* PyCThostFtdcTraderApiType_method_GetTradingDay(PyObject *self, PyObject *args) {
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    return PyBytes_FromString(extra->api->GetTradingDay());
}

///获取已连接的前置的信息
/// @param pFrontInfo：输入输出参数，用于存储获取到的前置信息，不能为空
/// @remark 连接成功后，可获取正确的前置地址信息
/// @remark 登录成功后，可获取正确的前置流控信息
///@see void CThostFtdcTraderApi::GetFrontInfo(CThostFtdcFrontInfoField *pFrontInfo)
static PyObject* PyCThostFtdcTraderApiType_method_GetFrontInfo(PyObject *self, PyObject *args) {
	PyObject *obj = NULL;
	if (!PyArg_ParseTuple(args, "O", &obj)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(obj, PyCThostFtdcFrontInfoFieldType)) {
        PyErr_Format(PyExc_TypeError, "GetFrontInfo: expected CThostFtdcFrontInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcFrontInfoFieldData *obj_extra = PyCTP_GetTypeData<PyCThostFtdcFrontInfoFieldData>(obj);
	extra->api->GetFrontInfo(&(obj_extra->data));
	extra = NULL;
	obj_extra = NULL;
	obj = NULL;
	Py_RETURN_NONE;
}

///注册前置机网络地址
///@param pszFrontAddress：前置机网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
///@see void CThostFtdcTraderApi::RegisterFront(char *pszFrontAddress)
static PyObject* PyCThostFtdcTraderApiType_method_RegisterFront(PyObject *self, PyObject *args) {
    char *pszFrontAddress = NULL;
    if (!PyArg_ParseTuple(args, "y", &pszFrontAddress)) {
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    extra->api->RegisterFront(pszFrontAddress);
    extra = NULL;
    pszFrontAddress = NULL;
    Py_RETURN_NONE;
}

///注册名字服务器网络地址
///@param pszNsAddress：名字服务器网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
///@remark RegisterNameServer优先于RegisterFront
///@see void CThostFtdcTraderApi::RegisterNameServer(char *pszNsAddress)
static PyObject* PyCThostFtdcTraderApiType_method_RegisterNameServer(PyObject *self, PyObject *args) {
    char *pszNsAddress = NULL;
    if (!PyArg_ParseTuple(args, "y", &pszNsAddress)) {
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    extra->api->RegisterNameServer(pszNsAddress);
    extra = NULL;
    pszNsAddress = NULL;
    Py_RETURN_NONE;
}

///注册名字服务器用户信息
///@param pFensUserInfo：用户信息。
///@see void CThostFtdcTraderApi::RegisterFensUserInfo(CThostFtdcFensUserInfoField *pFensUserInfo)
static PyObject* PyCThostFtdcTraderApiType_method_RegisterFensUserInfo(PyObject *self, PyObject *args) {
	PyObject *obj = NULL;
	if (!PyArg_ParseTuple(args, "O", &obj)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(obj, PyCThostFtdcFensUserInfoFieldType)) {
        PyErr_Format(PyExc_TypeError, "RegisterFensUserInfo: expected CThostFtdcFensUserInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcFensUserInfoFieldData *obj_extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(obj);
	extra->api->RegisterFensUserInfo(&(obj_extra->data));
	extra = NULL;
	obj_extra = NULL;
	obj = NULL;
	Py_RETURN_NONE;
}

///订阅私有流。
///@param nResumeType 私有流重传方式
///        THOST_TERT_RESTART:从本交易日开始重传
///        THOST_TERT_RESUME:从上次收到的续传
///        THOST_TERT_QUICK:只传送登录后私有流的内容
///        THOST_TERT_RESUME_FROM_SEQ_NO:从指定序号开始重传，序号从1开始
///@param nSeqNo 私有流序号，只在THOST_TERT_RESUME_FROM_SEQ_NO模式下有效
///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
///@see void CThostFtdcTraderApi::SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType, int nSeqNo = 1)
static PyObject* PyCThostFtdcTraderApiType_method_SubscribePrivateTopic(PyObject *self, PyObject *args) {
	THOST_TE_RESUME_TYPE nResumeType;
    int nSeqNo = 1;

	if (!PyArg_ParseTuple(args, "i|i", &nResumeType, &nSeqNo))
	{
		return NULL;
	}
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
	extra->api->SubscribePrivateTopic(nResumeType, nSeqNo);
	Py_RETURN_NONE;
}

///订阅公共流。
///@param nResumeType 公共流重传方式
///        THOST_TERT_RESTART:从本交易日开始重传
///        THOST_TERT_RESUME:从上次收到的续传
///        THOST_TERT_QUICK:只传送登录后公共流的内容
///        THOST_TERT_NONE:取消订阅公共流
///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
///@see void CThostFtdcTraderApi::SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType)
static PyObject* PyCThostFtdcTraderApiType_method_SubscribePublicTopic(PyObject *self, PyObject *args) {
	THOST_TE_RESUME_TYPE nResumeType;

	if (!PyArg_ParseTuple(args, const_cast<char *>("i"), &nResumeType))
	{
		return NULL;
	}
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
	extra->api->SubscribePublicTopic(nResumeType);
	Py_RETURN_NONE;
}

///客户端认证请求
///@see int CThostFtdcTraderApi::ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqAuthenticate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqAuthenticateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqAuthenticate: param 1 expected CThostFtdcReqAuthenticateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqAuthenticateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqAuthenticateFieldData>(arg1);
	ret = extra->api->ReqAuthenticate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///注册用户终端信息，用于中继服务器多连接模式
///需要在终端认证成功后，用户登录前调用该接口
///@see int CThostFtdcTraderApi::RegisterUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo)
static PyObject* PyCThostFtdcTraderApiType_method_RegisterUserSystemInfo(PyObject *self, PyObject *args) {
	int ret;
	PyObject *obj = NULL;
	if (!PyArg_ParseTuple(args, "O", &obj)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(obj, PyCThostFtdcUserSystemInfoFieldType)) {
        PyErr_Format(PyExc_TypeError, "RegisterUserSystemInfo: expected CThostFtdcUserSystemInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcUserSystemInfoFieldData *obj_extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(obj);
	ret = extra->api->RegisterUserSystemInfo(&(obj_extra->data));
	extra = NULL;
	obj_extra = NULL;
    obj = NULL;
	return PyLong_FromLong(ret);
}


///上报用户终端信息，用于中继服务器操作员登录模式
///操作员登录后，可以多次调用该接口上报客户信息
///@see int CThostFtdcTraderApi::SubmitUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo)
static PyObject* PyCThostFtdcTraderApiType_method_SubmitUserSystemInfo(PyObject *self, PyObject *args) {
	int ret;
	PyObject *obj = NULL;
	if (!PyArg_ParseTuple(args, "O", &obj)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(obj, PyCThostFtdcUserSystemInfoFieldType)) {
        PyErr_Format(PyExc_TypeError, "SubmitUserSystemInfo: expected CThostFtdcUserSystemInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcUserSystemInfoFieldData *obj_extra = PyCTP_GetTypeData<PyCThostFtdcUserSystemInfoFieldData>(obj);
	ret = extra->api->SubmitUserSystemInfo(&(obj_extra->data));
	extra = NULL;
	obj_extra = NULL;
    obj = NULL;
	return PyLong_FromLong(ret);
}


///注册用户终端信息，用于中继服务器多连接模式.用于微信小程序等应用上报信息.
///@see int CThostFtdcTraderApi::RegisterWechatUserSystemInfo(CThostFtdcWechatUserSystemInfoField *pUserSystemInfo)
static PyObject* PyCThostFtdcTraderApiType_method_RegisterWechatUserSystemInfo(PyObject *self, PyObject *args) {
	int ret;
	PyObject *obj = NULL;
	if (!PyArg_ParseTuple(args, "O", &obj)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(obj, PyCThostFtdcWechatUserSystemInfoFieldType)) {
        PyErr_Format(PyExc_TypeError, "RegisterWechatUserSystemInfo: expected CThostFtdcWechatUserSystemInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcWechatUserSystemInfoFieldData *obj_extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(obj);
	ret = extra->api->RegisterWechatUserSystemInfo(&(obj_extra->data));
	extra = NULL;
	obj_extra = NULL;
    obj = NULL;
	return PyLong_FromLong(ret);
}


///上报用户终端信息，用于中继服务器操作员登录模式.用于微信小程序等应用上报信息.
///@see int CThostFtdcTraderApi::SubmitWechatUserSystemInfo(CThostFtdcWechatUserSystemInfoField *pUserSystemInfo)
static PyObject* PyCThostFtdcTraderApiType_method_SubmitWechatUserSystemInfo(PyObject *self, PyObject *args) {
	int ret;
	PyObject *obj = NULL;
	if (!PyArg_ParseTuple(args, "O", &obj)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(obj, PyCThostFtdcWechatUserSystemInfoFieldType)) {
        PyErr_Format(PyExc_TypeError, "SubmitWechatUserSystemInfo: expected CThostFtdcWechatUserSystemInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcWechatUserSystemInfoFieldData *obj_extra = PyCTP_GetTypeData<PyCThostFtdcWechatUserSystemInfoFieldData>(obj);
	ret = extra->api->SubmitWechatUserSystemInfo(&(obj_extra->data));
	extra = NULL;
	obj_extra = NULL;
    obj = NULL;
	return PyLong_FromLong(ret);
}


///用户登录请求
///@see int CThostFtdcTraderApi::ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqUserLogin(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqUserLoginFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserLogin: param 1 expected CThostFtdcReqUserLoginField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqUserLoginFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(arg1);
	ret = extra->api->ReqUserLogin(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///登出请求
///@see int CThostFtdcTraderApi::ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqUserLogout(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcUserLogoutFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserLogout: param 1 expected CThostFtdcUserLogoutField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcUserLogoutFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(arg1);
	ret = extra->api->ReqUserLogout(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///用户口令更新请求
///@see int CThostFtdcTraderApi::ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqUserPasswordUpdate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcUserPasswordUpdateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserPasswordUpdate: param 1 expected CThostFtdcUserPasswordUpdateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcUserPasswordUpdateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcUserPasswordUpdateFieldData>(arg1);
	ret = extra->api->ReqUserPasswordUpdate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///资金账户口令更新请求
///@see int CThostFtdcTraderApi::ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqTradingAccountPasswordUpdate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcTradingAccountPasswordUpdateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqTradingAccountPasswordUpdate: param 1 expected CThostFtdcTradingAccountPasswordUpdateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcTradingAccountPasswordUpdateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcTradingAccountPasswordUpdateFieldData>(arg1);
	ret = extra->api->ReqTradingAccountPasswordUpdate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///查询用户当前支持的认证模式
///@see int CThostFtdcTraderApi::ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField *pReqUserAuthMethod, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqUserAuthMethod(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqUserAuthMethodFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserAuthMethod: param 1 expected CThostFtdcReqUserAuthMethodField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqUserAuthMethodFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqUserAuthMethodFieldData>(arg1);
	ret = extra->api->ReqUserAuthMethod(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///用户发出获取图形验证码请求
///@see int CThostFtdcTraderApi::ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField *pReqGenUserCaptcha, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqGenUserCaptcha(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqGenUserCaptchaFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqGenUserCaptcha: param 1 expected CThostFtdcReqGenUserCaptchaField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqGenUserCaptchaFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserCaptchaFieldData>(arg1);
	ret = extra->api->ReqGenUserCaptcha(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///用户发出获取短信验证码请求
///@see int CThostFtdcTraderApi::ReqGenUserText(CThostFtdcReqGenUserTextField *pReqGenUserText, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqGenUserText(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqGenUserTextFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqGenUserText: param 1 expected CThostFtdcReqGenUserTextField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqGenUserTextFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqGenUserTextFieldData>(arg1);
	ret = extra->api->ReqGenUserText(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///用户发出带有图片验证码的登陆请求
///@see int CThostFtdcTraderApi::ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField *pReqUserLoginWithCaptcha, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqUserLoginWithCaptcha(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqUserLoginWithCaptchaFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserLoginWithCaptcha: param 1 expected CThostFtdcReqUserLoginWithCaptchaField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqUserLoginWithCaptchaFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithCaptchaFieldData>(arg1);
	ret = extra->api->ReqUserLoginWithCaptcha(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///用户发出带有短信验证码的登陆请求
///@see int CThostFtdcTraderApi::ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField *pReqUserLoginWithText, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqUserLoginWithText(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqUserLoginWithTextFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserLoginWithText: param 1 expected CThostFtdcReqUserLoginWithTextField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqUserLoginWithTextFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithTextFieldData>(arg1);
	ret = extra->api->ReqUserLoginWithText(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///用户发出带有动态口令的登陆请求
///@see int CThostFtdcTraderApi::ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField *pReqUserLoginWithOTP, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqUserLoginWithOTP(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqUserLoginWithOTPFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserLoginWithOTP: param 1 expected CThostFtdcReqUserLoginWithOTPField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqUserLoginWithOTPFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(arg1);
	ret = extra->api->ReqUserLoginWithOTP(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///报单录入请求
///@see int CThostFtdcTraderApi::ReqOrderInsert(CThostFtdcInputOrderField *pInputOrder, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqOrderInsert(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputOrderFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqOrderInsert: param 1 expected CThostFtdcInputOrderField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputOrderFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderFieldData>(arg1);
	ret = extra->api->ReqOrderInsert(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///预埋单录入请求
///@see int CThostFtdcTraderApi::ReqParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqParkedOrderInsert(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcParkedOrderFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqParkedOrderInsert: param 1 expected CThostFtdcParkedOrderField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcParkedOrderFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderFieldData>(arg1);
	ret = extra->api->ReqParkedOrderInsert(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///预埋撤单录入请求
///@see int CThostFtdcTraderApi::ReqParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqParkedOrderAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcParkedOrderActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqParkedOrderAction: param 1 expected CThostFtdcParkedOrderActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcParkedOrderActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcParkedOrderActionFieldData>(arg1);
	ret = extra->api->ReqParkedOrderAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///报单操作请求
///@see int CThostFtdcTraderApi::ReqOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqOrderAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputOrderActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqOrderAction: param 1 expected CThostFtdcInputOrderActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputOrderActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputOrderActionFieldData>(arg1);
	ret = extra->api->ReqOrderAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///查询最大报单数量请求
///@see int CThostFtdcTraderApi::ReqQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField *pQryMaxOrderVolume, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryMaxOrderVolume(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryMaxOrderVolumeFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryMaxOrderVolume: param 1 expected CThostFtdcQryMaxOrderVolumeField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryMaxOrderVolumeFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryMaxOrderVolumeFieldData>(arg1);
	ret = extra->api->ReqQryMaxOrderVolume(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者结算结果确认
///@see int CThostFtdcTraderApi::ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqSettlementInfoConfirm(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcSettlementInfoConfirmFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqSettlementInfoConfirm: param 1 expected CThostFtdcSettlementInfoConfirmField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcSettlementInfoConfirmFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcSettlementInfoConfirmFieldData>(arg1);
	ret = extra->api->ReqSettlementInfoConfirm(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求删除预埋单
///@see int CThostFtdcTraderApi::ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqRemoveParkedOrder(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcRemoveParkedOrderFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqRemoveParkedOrder: param 1 expected CThostFtdcRemoveParkedOrderField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcRemoveParkedOrderFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderFieldData>(arg1);
	ret = extra->api->ReqRemoveParkedOrder(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求删除预埋撤单
///@see int CThostFtdcTraderApi::ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqRemoveParkedOrderAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcRemoveParkedOrderActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqRemoveParkedOrderAction: param 1 expected CThostFtdcRemoveParkedOrderActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcRemoveParkedOrderActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcRemoveParkedOrderActionFieldData>(arg1);
	ret = extra->api->ReqRemoveParkedOrderAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///执行宣告录入请求
///@see int CThostFtdcTraderApi::ReqExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqExecOrderInsert(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputExecOrderFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqExecOrderInsert: param 1 expected CThostFtdcInputExecOrderField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputExecOrderFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderFieldData>(arg1);
	ret = extra->api->ReqExecOrderInsert(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///执行宣告操作请求
///@see int CThostFtdcTraderApi::ReqExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqExecOrderAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputExecOrderActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqExecOrderAction: param 1 expected CThostFtdcInputExecOrderActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputExecOrderActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputExecOrderActionFieldData>(arg1);
	ret = extra->api->ReqExecOrderAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///询价录入请求
///@see int CThostFtdcTraderApi::ReqForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqForQuoteInsert(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputForQuoteFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqForQuoteInsert: param 1 expected CThostFtdcInputForQuoteField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputForQuoteFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputForQuoteFieldData>(arg1);
	ret = extra->api->ReqForQuoteInsert(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///报价录入请求
///@see int CThostFtdcTraderApi::ReqQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQuoteInsert(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputQuoteFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQuoteInsert: param 1 expected CThostFtdcInputQuoteField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputQuoteFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteFieldData>(arg1);
	ret = extra->api->ReqQuoteInsert(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///报价操作请求
///@see int CThostFtdcTraderApi::ReqQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQuoteAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputQuoteActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQuoteAction: param 1 expected CThostFtdcInputQuoteActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputQuoteActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputQuoteActionFieldData>(arg1);
	ret = extra->api->ReqQuoteAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///批量报单操作请求
///@see int CThostFtdcTraderApi::ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqBatchOrderAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputBatchOrderActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqBatchOrderAction: param 1 expected CThostFtdcInputBatchOrderActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputBatchOrderActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputBatchOrderActionFieldData>(arg1);
	ret = extra->api->ReqBatchOrderAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///期权自对冲录入请求
///@see int CThostFtdcTraderApi::ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqOptionSelfCloseInsert(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputOptionSelfCloseFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqOptionSelfCloseInsert: param 1 expected CThostFtdcInputOptionSelfCloseField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputOptionSelfCloseFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseFieldData>(arg1);
	ret = extra->api->ReqOptionSelfCloseInsert(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///期权自对冲操作请求
///@see int CThostFtdcTraderApi::ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqOptionSelfCloseAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputOptionSelfCloseActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqOptionSelfCloseAction: param 1 expected CThostFtdcInputOptionSelfCloseActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputOptionSelfCloseActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputOptionSelfCloseActionFieldData>(arg1);
	ret = extra->api->ReqOptionSelfCloseAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///申请组合录入请求
///@see int CThostFtdcTraderApi::ReqCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqCombActionInsert(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputCombActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqCombActionInsert: param 1 expected CThostFtdcInputCombActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputCombActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputCombActionFieldData>(arg1);
	ret = extra->api->ReqCombActionInsert(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询报单
///@see int CThostFtdcTraderApi::ReqQryOrder(CThostFtdcQryOrderField *pQryOrder, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryOrder(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryOrderFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryOrder: param 1 expected CThostFtdcQryOrderField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryOrderFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryOrderFieldData>(arg1);
	ret = extra->api->ReqQryOrder(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询成交
///@see int CThostFtdcTraderApi::ReqQryTrade(CThostFtdcQryTradeField *pQryTrade, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryTrade(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryTradeFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryTrade: param 1 expected CThostFtdcQryTradeField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryTradeFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryTradeFieldData>(arg1);
	ret = extra->api->ReqQryTrade(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询投资者持仓
///@see int CThostFtdcTraderApi::ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorPosition(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorPositionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorPosition: param 1 expected CThostFtdcQryInvestorPositionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorPositionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionFieldData>(arg1);
	ret = extra->api->ReqQryInvestorPosition(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询资金账户
///@see int CThostFtdcTraderApi::ReqQryTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryTradingAccount(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryTradingAccountFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryTradingAccount: param 1 expected CThostFtdcQryTradingAccountField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryTradingAccountFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(arg1);
	ret = extra->api->ReqQryTradingAccount(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询投资者
///@see int CThostFtdcTraderApi::ReqQryInvestor(CThostFtdcQryInvestorField *pQryInvestor, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestor(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestor: param 1 expected CThostFtdcQryInvestorField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorFieldData>(arg1);
	ret = extra->api->ReqQryInvestor(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询交易编码
///@see int CThostFtdcTraderApi::ReqQryTradingCode(CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryTradingCode(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryTradingCodeFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryTradingCode: param 1 expected CThostFtdcQryTradingCodeField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryTradingCodeFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingCodeFieldData>(arg1);
	ret = extra->api->ReqQryTradingCode(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询合约保证金率
///@see int CThostFtdcTraderApi::ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInstrumentMarginRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInstrumentMarginRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInstrumentMarginRate: param 1 expected CThostFtdcQryInstrumentMarginRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInstrumentMarginRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentMarginRateFieldData>(arg1);
	ret = extra->api->ReqQryInstrumentMarginRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询合约手续费率
///@see int CThostFtdcTraderApi::ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInstrumentCommissionRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInstrumentCommissionRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInstrumentCommissionRate: param 1 expected CThostFtdcQryInstrumentCommissionRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInstrumentCommissionRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentCommissionRateFieldData>(arg1);
	ret = extra->api->ReqQryInstrumentCommissionRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询用户会话
///@see int CThostFtdcTraderApi::ReqQryUserSession(CThostFtdcQryUserSessionField *pQryUserSession, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryUserSession(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryUserSessionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryUserSession: param 1 expected CThostFtdcQryUserSessionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryUserSessionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryUserSessionFieldData>(arg1);
	ret = extra->api->ReqQryUserSession(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询交易所
///@see int CThostFtdcTraderApi::ReqQryExchange(CThostFtdcQryExchangeField *pQryExchange, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryExchange(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryExchangeFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryExchange: param 1 expected CThostFtdcQryExchangeField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryExchangeFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeFieldData>(arg1);
	ret = extra->api->ReqQryExchange(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询产品
///@see int CThostFtdcTraderApi::ReqQryProduct(CThostFtdcQryProductField *pQryProduct, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryProduct(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryProductFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryProduct: param 1 expected CThostFtdcQryProductField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryProductFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryProductFieldData>(arg1);
	ret = extra->api->ReqQryProduct(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询合约
///@see int CThostFtdcTraderApi::ReqQryInstrument(CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInstrument(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInstrumentFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInstrument: param 1 expected CThostFtdcQryInstrumentField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInstrumentFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentFieldData>(arg1);
	ret = extra->api->ReqQryInstrument(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询行情
///@see int CThostFtdcTraderApi::ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryDepthMarketData(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryDepthMarketDataFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryDepthMarketData: param 1 expected CThostFtdcQryDepthMarketDataField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryDepthMarketDataFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryDepthMarketDataFieldData>(arg1);
	ret = extra->api->ReqQryDepthMarketData(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询交易员报盘机
///@see int CThostFtdcTraderApi::ReqQryTraderOffer(CThostFtdcQryTraderOfferField *pQryTraderOffer, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryTraderOffer(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryTraderOfferFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryTraderOffer: param 1 expected CThostFtdcQryTraderOfferField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryTraderOfferFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryTraderOfferFieldData>(arg1);
	ret = extra->api->ReqQryTraderOffer(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询投资者结算结果
///@see int CThostFtdcTraderApi::ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySettlementInfo(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySettlementInfoFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySettlementInfo: param 1 expected CThostFtdcQrySettlementInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySettlementInfoFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoFieldData>(arg1);
	ret = extra->api->ReqQrySettlementInfo(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询转帐银行
///@see int CThostFtdcTraderApi::ReqQryTransferBank(CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryTransferBank(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryTransferBankFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryTransferBank: param 1 expected CThostFtdcQryTransferBankField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryTransferBankFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferBankFieldData>(arg1);
	ret = extra->api->ReqQryTransferBank(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询投资者持仓明细
///@see int CThostFtdcTraderApi::ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorPositionDetail(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorPositionDetailFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorPositionDetail: param 1 expected CThostFtdcQryInvestorPositionDetailField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorPositionDetailFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionDetailFieldData>(arg1);
	ret = extra->api->ReqQryInvestorPositionDetail(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询客户通知
///@see int CThostFtdcTraderApi::ReqQryNotice(CThostFtdcQryNoticeField *pQryNotice, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryNotice(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryNoticeFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryNotice: param 1 expected CThostFtdcQryNoticeField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryNoticeFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryNoticeFieldData>(arg1);
	ret = extra->api->ReqQryNotice(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询结算信息确认
///@see int CThostFtdcTraderApi::ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySettlementInfoConfirm(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySettlementInfoConfirmFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySettlementInfoConfirm: param 1 expected CThostFtdcQrySettlementInfoConfirmField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySettlementInfoConfirmFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySettlementInfoConfirmFieldData>(arg1);
	ret = extra->api->ReqQrySettlementInfoConfirm(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询投资者持仓明细
///@see int CThostFtdcTraderApi::ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorPositionCombineDetail(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorPositionCombineDetailFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorPositionCombineDetail: param 1 expected CThostFtdcQryInvestorPositionCombineDetailField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorPositionCombineDetailFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPositionCombineDetailFieldData>(arg1);
	ret = extra->api->ReqQryInvestorPositionCombineDetail(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询保证金监管系统经纪公司资金账户密钥
///@see int CThostFtdcTraderApi::ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryCFMMCTradingAccountKey(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryCFMMCTradingAccountKeyFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryCFMMCTradingAccountKey: param 1 expected CThostFtdcQryCFMMCTradingAccountKeyField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryCFMMCTradingAccountKeyFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryCFMMCTradingAccountKeyFieldData>(arg1);
	ret = extra->api->ReqQryCFMMCTradingAccountKey(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询仓单折抵信息
///@see int CThostFtdcTraderApi::ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryEWarrantOffset(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryEWarrantOffsetFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryEWarrantOffset: param 1 expected CThostFtdcQryEWarrantOffsetField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryEWarrantOffsetFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryEWarrantOffsetFieldData>(arg1);
	ret = extra->api->ReqQryEWarrantOffset(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询投资者品种/跨品种保证金
///@see int CThostFtdcTraderApi::ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField *pQryInvestorProductGroupMargin, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorProductGroupMargin(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorProductGroupMarginFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorProductGroupMargin: param 1 expected CThostFtdcQryInvestorProductGroupMarginField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorProductGroupMarginFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProductGroupMarginFieldData>(arg1);
	ret = extra->api->ReqQryInvestorProductGroupMargin(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询交易所保证金率
///@see int CThostFtdcTraderApi::ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField *pQryExchangeMarginRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryExchangeMarginRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryExchangeMarginRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryExchangeMarginRate: param 1 expected CThostFtdcQryExchangeMarginRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryExchangeMarginRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateFieldData>(arg1);
	ret = extra->api->ReqQryExchangeMarginRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询交易所调整保证金率
///@see int CThostFtdcTraderApi::ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField *pQryExchangeMarginRateAdjust, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryExchangeMarginRateAdjust(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryExchangeMarginRateAdjustFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryExchangeMarginRateAdjust: param 1 expected CThostFtdcQryExchangeMarginRateAdjustField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryExchangeMarginRateAdjustFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeMarginRateAdjustFieldData>(arg1);
	ret = extra->api->ReqQryExchangeMarginRateAdjust(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询汇率
///@see int CThostFtdcTraderApi::ReqQryExchangeRate(CThostFtdcQryExchangeRateField *pQryExchangeRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryExchangeRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryExchangeRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryExchangeRate: param 1 expected CThostFtdcQryExchangeRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryExchangeRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryExchangeRateFieldData>(arg1);
	ret = extra->api->ReqQryExchangeRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询二级代理操作员银期权限
///@see int CThostFtdcTraderApi::ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField *pQrySecAgentACIDMap, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySecAgentACIDMap(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySecAgentACIDMapFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySecAgentACIDMap: param 1 expected CThostFtdcQrySecAgentACIDMapField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySecAgentACIDMapFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentACIDMapFieldData>(arg1);
	ret = extra->api->ReqQrySecAgentACIDMap(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询产品报价汇率
///@see int CThostFtdcTraderApi::ReqQryProductExchRate(CThostFtdcQryProductExchRateField *pQryProductExchRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryProductExchRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryProductExchRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryProductExchRate: param 1 expected CThostFtdcQryProductExchRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryProductExchRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryProductExchRateFieldData>(arg1);
	ret = extra->api->ReqQryProductExchRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询产品组
///@see int CThostFtdcTraderApi::ReqQryProductGroup(CThostFtdcQryProductGroupField *pQryProductGroup, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryProductGroup(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryProductGroupFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryProductGroup: param 1 expected CThostFtdcQryProductGroupField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryProductGroupFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryProductGroupFieldData>(arg1);
	ret = extra->api->ReqQryProductGroup(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询做市商合约手续费率
///@see int CThostFtdcTraderApi::ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField *pQryMMInstrumentCommissionRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryMMInstrumentCommissionRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryMMInstrumentCommissionRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryMMInstrumentCommissionRate: param 1 expected CThostFtdcQryMMInstrumentCommissionRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryMMInstrumentCommissionRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryMMInstrumentCommissionRateFieldData>(arg1);
	ret = extra->api->ReqQryMMInstrumentCommissionRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询做市商期权合约手续费
///@see int CThostFtdcTraderApi::ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField *pQryMMOptionInstrCommRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryMMOptionInstrCommRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryMMOptionInstrCommRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryMMOptionInstrCommRate: param 1 expected CThostFtdcQryMMOptionInstrCommRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryMMOptionInstrCommRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryMMOptionInstrCommRateFieldData>(arg1);
	ret = extra->api->ReqQryMMOptionInstrCommRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询报单手续费
///@see int CThostFtdcTraderApi::ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField *pQryInstrumentOrderCommRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInstrumentOrderCommRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInstrumentOrderCommRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInstrumentOrderCommRate: param 1 expected CThostFtdcQryInstrumentOrderCommRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInstrumentOrderCommRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInstrumentOrderCommRateFieldData>(arg1);
	ret = extra->api->ReqQryInstrumentOrderCommRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询资金账户
///@see int CThostFtdcTraderApi::ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySecAgentTradingAccount(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryTradingAccountFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySecAgentTradingAccount: param 1 expected CThostFtdcQryTradingAccountField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryTradingAccountFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingAccountFieldData>(arg1);
	ret = extra->api->ReqQrySecAgentTradingAccount(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询二级代理商资金校验模式
///@see int CThostFtdcTraderApi::ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField *pQrySecAgentCheckMode, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySecAgentCheckMode(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySecAgentCheckModeFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySecAgentCheckMode: param 1 expected CThostFtdcQrySecAgentCheckModeField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySecAgentCheckModeFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentCheckModeFieldData>(arg1);
	ret = extra->api->ReqQrySecAgentCheckMode(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询二级代理商信息
///@see int CThostFtdcTraderApi::ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField *pQrySecAgentTradeInfo, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySecAgentTradeInfo(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySecAgentTradeInfoFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySecAgentTradeInfo: param 1 expected CThostFtdcQrySecAgentTradeInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySecAgentTradeInfoFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySecAgentTradeInfoFieldData>(arg1);
	ret = extra->api->ReqQrySecAgentTradeInfo(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询期权交易成本
///@see int CThostFtdcTraderApi::ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField *pQryOptionInstrTradeCost, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryOptionInstrTradeCost(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryOptionInstrTradeCostFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryOptionInstrTradeCost: param 1 expected CThostFtdcQryOptionInstrTradeCostField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryOptionInstrTradeCostFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrTradeCostFieldData>(arg1);
	ret = extra->api->ReqQryOptionInstrTradeCost(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询期权合约手续费
///@see int CThostFtdcTraderApi::ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField *pQryOptionInstrCommRate, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryOptionInstrCommRate(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryOptionInstrCommRateFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryOptionInstrCommRate: param 1 expected CThostFtdcQryOptionInstrCommRateField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryOptionInstrCommRateFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionInstrCommRateFieldData>(arg1);
	ret = extra->api->ReqQryOptionInstrCommRate(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询执行宣告
///@see int CThostFtdcTraderApi::ReqQryExecOrder(CThostFtdcQryExecOrderField *pQryExecOrder, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryExecOrder(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryExecOrderFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryExecOrder: param 1 expected CThostFtdcQryExecOrderField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryExecOrderFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryExecOrderFieldData>(arg1);
	ret = extra->api->ReqQryExecOrder(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询询价
///@see int CThostFtdcTraderApi::ReqQryForQuote(CThostFtdcQryForQuoteField *pQryForQuote, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryForQuote(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryForQuoteFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryForQuote: param 1 expected CThostFtdcQryForQuoteField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryForQuoteFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryForQuoteFieldData>(arg1);
	ret = extra->api->ReqQryForQuote(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询报价
///@see int CThostFtdcTraderApi::ReqQryQuote(CThostFtdcQryQuoteField *pQryQuote, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryQuote(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryQuoteFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryQuote: param 1 expected CThostFtdcQryQuoteField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryQuoteFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryQuoteFieldData>(arg1);
	ret = extra->api->ReqQryQuote(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询期权自对冲
///@see int CThostFtdcTraderApi::ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField *pQryOptionSelfClose, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryOptionSelfClose(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryOptionSelfCloseFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryOptionSelfClose: param 1 expected CThostFtdcQryOptionSelfCloseField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryOptionSelfCloseFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryOptionSelfCloseFieldData>(arg1);
	ret = extra->api->ReqQryOptionSelfClose(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询投资单元
///@see int CThostFtdcTraderApi::ReqQryInvestUnit(CThostFtdcQryInvestUnitField *pQryInvestUnit, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestUnit(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestUnitFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestUnit: param 1 expected CThostFtdcQryInvestUnitField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestUnitFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestUnitFieldData>(arg1);
	ret = extra->api->ReqQryInvestUnit(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询组合合约安全系数
///@see int CThostFtdcTraderApi::ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField *pQryCombInstrumentGuard, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryCombInstrumentGuard(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryCombInstrumentGuardFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryCombInstrumentGuard: param 1 expected CThostFtdcQryCombInstrumentGuardField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryCombInstrumentGuardFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryCombInstrumentGuardFieldData>(arg1);
	ret = extra->api->ReqQryCombInstrumentGuard(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询申请组合
///@see int CThostFtdcTraderApi::ReqQryCombAction(CThostFtdcQryCombActionField *pQryCombAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryCombAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryCombActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryCombAction: param 1 expected CThostFtdcQryCombActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryCombActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryCombActionFieldData>(arg1);
	ret = extra->api->ReqQryCombAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询转帐流水
///@see int CThostFtdcTraderApi::ReqQryTransferSerial(CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryTransferSerial(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryTransferSerialFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryTransferSerial: param 1 expected CThostFtdcQryTransferSerialField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryTransferSerialFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryTransferSerialFieldData>(arg1);
	ret = extra->api->ReqQryTransferSerial(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询银期签约关系
///@see int CThostFtdcTraderApi::ReqQryAccountregister(CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryAccountregister(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryAccountregisterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryAccountregister: param 1 expected CThostFtdcQryAccountregisterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryAccountregisterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryAccountregisterFieldData>(arg1);
	ret = extra->api->ReqQryAccountregister(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询签约银行
///@see int CThostFtdcTraderApi::ReqQryContractBank(CThostFtdcQryContractBankField *pQryContractBank, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryContractBank(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryContractBankFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryContractBank: param 1 expected CThostFtdcQryContractBankField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryContractBankFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryContractBankFieldData>(arg1);
	ret = extra->api->ReqQryContractBank(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询预埋单
///@see int CThostFtdcTraderApi::ReqQryParkedOrder(CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryParkedOrder(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryParkedOrderFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryParkedOrder: param 1 expected CThostFtdcQryParkedOrderField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryParkedOrderFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryParkedOrderFieldData>(arg1);
	ret = extra->api->ReqQryParkedOrder(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询预埋撤单
///@see int CThostFtdcTraderApi::ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryParkedOrderAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryParkedOrderActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryParkedOrderAction: param 1 expected CThostFtdcQryParkedOrderActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryParkedOrderActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryParkedOrderActionFieldData>(arg1);
	ret = extra->api->ReqQryParkedOrderAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询交易通知
///@see int CThostFtdcTraderApi::ReqQryTradingNotice(CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryTradingNotice(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryTradingNoticeFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryTradingNotice: param 1 expected CThostFtdcQryTradingNoticeField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryTradingNoticeFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryTradingNoticeFieldData>(arg1);
	ret = extra->api->ReqQryTradingNotice(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询经纪公司交易参数
///@see int CThostFtdcTraderApi::ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryBrokerTradingParams(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryBrokerTradingParamsFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryBrokerTradingParams: param 1 expected CThostFtdcQryBrokerTradingParamsField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryBrokerTradingParamsFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingParamsFieldData>(arg1);
	ret = extra->api->ReqQryBrokerTradingParams(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询经纪公司交易算法
///@see int CThostFtdcTraderApi::ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryBrokerTradingAlgos(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryBrokerTradingAlgosFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryBrokerTradingAlgos: param 1 expected CThostFtdcQryBrokerTradingAlgosField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryBrokerTradingAlgosFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryBrokerTradingAlgosFieldData>(arg1);
	ret = extra->api->ReqQryBrokerTradingAlgos(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询监控中心用户令牌
///@see int CThostFtdcTraderApi::ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQueryCFMMCTradingAccountToken(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQueryCFMMCTradingAccountToken: param 1 expected CThostFtdcQueryCFMMCTradingAccountTokenField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData>(arg1);
	ret = extra->api->ReqQueryCFMMCTradingAccountToken(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///期货发起银行资金转期货请求
///@see int CThostFtdcTraderApi::ReqFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqFromBankToFutureByFuture(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqTransferFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqFromBankToFutureByFuture: param 1 expected CThostFtdcReqTransferField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqTransferFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(arg1);
	ret = extra->api->ReqFromBankToFutureByFuture(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///期货发起期货资金转银行请求
///@see int CThostFtdcTraderApi::ReqFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqFromFutureToBankByFuture(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqTransferFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqFromFutureToBankByFuture: param 1 expected CThostFtdcReqTransferField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqTransferFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqTransferFieldData>(arg1);
	ret = extra->api->ReqFromFutureToBankByFuture(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///期货发起查询银行余额请求
///@see int CThostFtdcTraderApi::ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQueryBankAccountMoneyByFuture(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqQueryAccountFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQueryBankAccountMoneyByFuture: param 1 expected CThostFtdcReqQueryAccountField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqQueryAccountFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(arg1);
	ret = extra->api->ReqQueryBankAccountMoneyByFuture(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询分类合约
///@see int CThostFtdcTraderApi::ReqQryClassifiedInstrument(CThostFtdcQryClassifiedInstrumentField *pQryClassifiedInstrument, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryClassifiedInstrument(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryClassifiedInstrumentFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryClassifiedInstrument: param 1 expected CThostFtdcQryClassifiedInstrumentField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryClassifiedInstrumentFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryClassifiedInstrumentFieldData>(arg1);
	ret = extra->api->ReqQryClassifiedInstrument(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求组合优惠比例
///@see int CThostFtdcTraderApi::ReqQryCombPromotionParam(CThostFtdcQryCombPromotionParamField *pQryCombPromotionParam, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryCombPromotionParam(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryCombPromotionParamFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryCombPromotionParam: param 1 expected CThostFtdcQryCombPromotionParamField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryCombPromotionParamFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryCombPromotionParamFieldData>(arg1);
	ret = extra->api->ReqQryCombPromotionParam(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者风险结算持仓查询
///@see int CThostFtdcTraderApi::ReqQryRiskSettleInvstPosition(CThostFtdcQryRiskSettleInvstPositionField *pQryRiskSettleInvstPosition, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRiskSettleInvstPosition(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRiskSettleInvstPositionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRiskSettleInvstPosition: param 1 expected CThostFtdcQryRiskSettleInvstPositionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRiskSettleInvstPositionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleInvstPositionFieldData>(arg1);
	ret = extra->api->ReqQryRiskSettleInvstPosition(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///风险结算产品查询
///@see int CThostFtdcTraderApi::ReqQryRiskSettleProductStatus(CThostFtdcQryRiskSettleProductStatusField *pQryRiskSettleProductStatus, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRiskSettleProductStatus(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRiskSettleProductStatusFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRiskSettleProductStatus: param 1 expected CThostFtdcQryRiskSettleProductStatusField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRiskSettleProductStatusFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRiskSettleProductStatusFieldData>(arg1);
	ret = extra->api->ReqQryRiskSettleProductStatus(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///SPBM期货合约参数查询
///@see int CThostFtdcTraderApi::ReqQrySPBMFutureParameter(CThostFtdcQrySPBMFutureParameterField *pQrySPBMFutureParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPBMFutureParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPBMFutureParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPBMFutureParameter: param 1 expected CThostFtdcQrySPBMFutureParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPBMFutureParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMFutureParameterFieldData>(arg1);
	ret = extra->api->ReqQrySPBMFutureParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///SPBM期权合约参数查询
///@see int CThostFtdcTraderApi::ReqQrySPBMOptionParameter(CThostFtdcQrySPBMOptionParameterField *pQrySPBMOptionParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPBMOptionParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPBMOptionParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPBMOptionParameter: param 1 expected CThostFtdcQrySPBMOptionParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPBMOptionParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMOptionParameterFieldData>(arg1);
	ret = extra->api->ReqQrySPBMOptionParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///SPBM品种内对锁仓折扣参数查询
///@see int CThostFtdcTraderApi::ReqQrySPBMIntraParameter(CThostFtdcQrySPBMIntraParameterField *pQrySPBMIntraParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPBMIntraParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPBMIntraParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPBMIntraParameter: param 1 expected CThostFtdcQrySPBMIntraParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPBMIntraParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMIntraParameterFieldData>(arg1);
	ret = extra->api->ReqQrySPBMIntraParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///SPBM跨品种抵扣参数查询
///@see int CThostFtdcTraderApi::ReqQrySPBMInterParameter(CThostFtdcQrySPBMInterParameterField *pQrySPBMInterParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPBMInterParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPBMInterParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPBMInterParameter: param 1 expected CThostFtdcQrySPBMInterParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPBMInterParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInterParameterFieldData>(arg1);
	ret = extra->api->ReqQrySPBMInterParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///SPBM组合保证金套餐查询
///@see int CThostFtdcTraderApi::ReqQrySPBMPortfDefinition(CThostFtdcQrySPBMPortfDefinitionField *pQrySPBMPortfDefinition, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPBMPortfDefinition(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPBMPortfDefinitionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPBMPortfDefinition: param 1 expected CThostFtdcQrySPBMPortfDefinitionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPBMPortfDefinitionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMPortfDefinitionFieldData>(arg1);
	ret = extra->api->ReqQrySPBMPortfDefinition(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者SPBM套餐选择查询
///@see int CThostFtdcTraderApi::ReqQrySPBMInvestorPortfDef(CThostFtdcQrySPBMInvestorPortfDefField *pQrySPBMInvestorPortfDef, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPBMInvestorPortfDef(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPBMInvestorPortfDefFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPBMInvestorPortfDef: param 1 expected CThostFtdcQrySPBMInvestorPortfDefField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPBMInvestorPortfDefFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMInvestorPortfDefFieldData>(arg1);
	ret = extra->api->ReqQrySPBMInvestorPortfDef(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者新型组合保证金系数查询
///@see int CThostFtdcTraderApi::ReqQryInvestorPortfMarginRatio(CThostFtdcQryInvestorPortfMarginRatioField *pQryInvestorPortfMarginRatio, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorPortfMarginRatio(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorPortfMarginRatioFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorPortfMarginRatio: param 1 expected CThostFtdcQryInvestorPortfMarginRatioField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorPortfMarginRatioFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfMarginRatioFieldData>(arg1);
	ret = extra->api->ReqQryInvestorPortfMarginRatio(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者产品SPBM明细查询
///@see int CThostFtdcTraderApi::ReqQryInvestorProdSPBMDetail(CThostFtdcQryInvestorProdSPBMDetailField *pQryInvestorProdSPBMDetail, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorProdSPBMDetail(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorProdSPBMDetailFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorProdSPBMDetail: param 1 expected CThostFtdcQryInvestorProdSPBMDetailField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorProdSPBMDetailFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdSPBMDetailFieldData>(arg1);
	ret = extra->api->ReqQryInvestorProdSPBMDetail(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者商品组SPMM记录查询
///@see int CThostFtdcTraderApi::ReqQryInvestorCommoditySPMMMargin(CThostFtdcQryInvestorCommoditySPMMMarginField *pQryInvestorCommoditySPMMMargin, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorCommoditySPMMMargin(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorCommoditySPMMMargin: param 1 expected CThostFtdcQryInvestorCommoditySPMMMarginField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData>(arg1);
	ret = extra->api->ReqQryInvestorCommoditySPMMMargin(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者商品群SPMM记录查询
///@see int CThostFtdcTraderApi::ReqQryInvestorCommodityGroupSPMMMargin(CThostFtdcQryInvestorCommodityGroupSPMMMarginField *pQryInvestorCommodityGroupSPMMMargin, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorCommodityGroupSPMMMargin(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorCommodityGroupSPMMMargin: param 1 expected CThostFtdcQryInvestorCommodityGroupSPMMMarginField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData>(arg1);
	ret = extra->api->ReqQryInvestorCommodityGroupSPMMMargin(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///SPMM合约参数查询
///@see int CThostFtdcTraderApi::ReqQrySPMMInstParam(CThostFtdcQrySPMMInstParamField *pQrySPMMInstParam, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPMMInstParam(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPMMInstParamFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPMMInstParam: param 1 expected CThostFtdcQrySPMMInstParamField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPMMInstParamFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMInstParamFieldData>(arg1);
	ret = extra->api->ReqQrySPMMInstParam(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///SPMM产品参数查询
///@see int CThostFtdcTraderApi::ReqQrySPMMProductParam(CThostFtdcQrySPMMProductParamField *pQrySPMMProductParam, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPMMProductParam(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPMMProductParamFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPMMProductParam: param 1 expected CThostFtdcQrySPMMProductParamField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPMMProductParamFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPMMProductParamFieldData>(arg1);
	ret = extra->api->ReqQrySPMMProductParam(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///SPBM附加跨品种抵扣参数查询
///@see int CThostFtdcTraderApi::ReqQrySPBMAddOnInterParameter(CThostFtdcQrySPBMAddOnInterParameterField *pQrySPBMAddOnInterParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySPBMAddOnInterParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySPBMAddOnInterParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySPBMAddOnInterParameter: param 1 expected CThostFtdcQrySPBMAddOnInterParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySPBMAddOnInterParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySPBMAddOnInterParameterFieldData>(arg1);
	ret = extra->api->ReqQrySPBMAddOnInterParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RCAMS产品组合信息查询
///@see int CThostFtdcTraderApi::ReqQryRCAMSCombProductInfo(CThostFtdcQryRCAMSCombProductInfoField *pQryRCAMSCombProductInfo, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRCAMSCombProductInfo(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRCAMSCombProductInfoFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRCAMSCombProductInfo: param 1 expected CThostFtdcQryRCAMSCombProductInfoField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRCAMSCombProductInfoFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSCombProductInfoFieldData>(arg1);
	ret = extra->api->ReqQryRCAMSCombProductInfo(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RCAMS同合约风险对冲参数查询
///@see int CThostFtdcTraderApi::ReqQryRCAMSInstrParameter(CThostFtdcQryRCAMSInstrParameterField *pQryRCAMSInstrParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRCAMSInstrParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRCAMSInstrParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRCAMSInstrParameter: param 1 expected CThostFtdcQryRCAMSInstrParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRCAMSInstrParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInstrParameterFieldData>(arg1);
	ret = extra->api->ReqQryRCAMSInstrParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RCAMS品种内风险对冲参数查询
///@see int CThostFtdcTraderApi::ReqQryRCAMSIntraParameter(CThostFtdcQryRCAMSIntraParameterField *pQryRCAMSIntraParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRCAMSIntraParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRCAMSIntraParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRCAMSIntraParameter: param 1 expected CThostFtdcQryRCAMSIntraParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRCAMSIntraParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSIntraParameterFieldData>(arg1);
	ret = extra->api->ReqQryRCAMSIntraParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RCAMS跨品种风险折抵参数查询
///@see int CThostFtdcTraderApi::ReqQryRCAMSInterParameter(CThostFtdcQryRCAMSInterParameterField *pQryRCAMSInterParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRCAMSInterParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRCAMSInterParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRCAMSInterParameter: param 1 expected CThostFtdcQryRCAMSInterParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRCAMSInterParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInterParameterFieldData>(arg1);
	ret = extra->api->ReqQryRCAMSInterParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RCAMS空头期权风险调整参数查询
///@see int CThostFtdcTraderApi::ReqQryRCAMSShortOptAdjustParam(CThostFtdcQryRCAMSShortOptAdjustParamField *pQryRCAMSShortOptAdjustParam, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRCAMSShortOptAdjustParam(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRCAMSShortOptAdjustParam: param 1 expected CThostFtdcQryRCAMSShortOptAdjustParamField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData>(arg1);
	ret = extra->api->ReqQryRCAMSShortOptAdjustParam(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RCAMS策略组合持仓查询
///@see int CThostFtdcTraderApi::ReqQryRCAMSInvestorCombPosition(CThostFtdcQryRCAMSInvestorCombPositionField *pQryRCAMSInvestorCombPosition, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRCAMSInvestorCombPosition(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRCAMSInvestorCombPositionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRCAMSInvestorCombPosition: param 1 expected CThostFtdcQryRCAMSInvestorCombPositionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRCAMSInvestorCombPositionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRCAMSInvestorCombPositionFieldData>(arg1);
	ret = extra->api->ReqQryRCAMSInvestorCombPosition(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者品种RCAMS保证金查询
///@see int CThostFtdcTraderApi::ReqQryInvestorProdRCAMSMargin(CThostFtdcQryInvestorProdRCAMSMarginField *pQryInvestorProdRCAMSMargin, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorProdRCAMSMargin(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorProdRCAMSMarginFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorProdRCAMSMargin: param 1 expected CThostFtdcQryInvestorProdRCAMSMarginField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorProdRCAMSMarginFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRCAMSMarginFieldData>(arg1);
	ret = extra->api->ReqQryInvestorProdRCAMSMargin(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RULE合约保证金参数查询
///@see int CThostFtdcTraderApi::ReqQryRULEInstrParameter(CThostFtdcQryRULEInstrParameterField *pQryRULEInstrParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRULEInstrParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRULEInstrParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRULEInstrParameter: param 1 expected CThostFtdcQryRULEInstrParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRULEInstrParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInstrParameterFieldData>(arg1);
	ret = extra->api->ReqQryRULEInstrParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RULE品种内对锁仓折扣参数查询
///@see int CThostFtdcTraderApi::ReqQryRULEIntraParameter(CThostFtdcQryRULEIntraParameterField *pQryRULEIntraParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRULEIntraParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRULEIntraParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRULEIntraParameter: param 1 expected CThostFtdcQryRULEIntraParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRULEIntraParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEIntraParameterFieldData>(arg1);
	ret = extra->api->ReqQryRULEIntraParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///RULE跨品种抵扣参数查询
///@see int CThostFtdcTraderApi::ReqQryRULEInterParameter(CThostFtdcQryRULEInterParameterField *pQryRULEInterParameter, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryRULEInterParameter(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryRULEInterParameterFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryRULEInterParameter: param 1 expected CThostFtdcQryRULEInterParameterField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryRULEInterParameterFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryRULEInterParameterFieldData>(arg1);
	ret = extra->api->ReqQryRULEInterParameter(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者产品RULE保证金查询
///@see int CThostFtdcTraderApi::ReqQryInvestorProdRULEMargin(CThostFtdcQryInvestorProdRULEMarginField *pQryInvestorProdRULEMargin, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorProdRULEMargin(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorProdRULEMarginFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorProdRULEMargin: param 1 expected CThostFtdcQryInvestorProdRULEMarginField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorProdRULEMarginFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorProdRULEMarginFieldData>(arg1);
	ret = extra->api->ReqQryInvestorProdRULEMargin(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者新型组合保证金开关查询
///@see int CThostFtdcTraderApi::ReqQryInvestorPortfSetting(CThostFtdcQryInvestorPortfSettingField *pQryInvestorPortfSetting, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorPortfSetting(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorPortfSettingFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorPortfSetting: param 1 expected CThostFtdcQryInvestorPortfSettingField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorPortfSettingFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorPortfSettingFieldData>(arg1);
	ret = extra->api->ReqQryInvestorPortfSetting(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者申报费阶梯收取记录查询
///@see int CThostFtdcTraderApi::ReqQryInvestorInfoCommRec(CThostFtdcQryInvestorInfoCommRecField *pQryInvestorInfoCommRec, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryInvestorInfoCommRec(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryInvestorInfoCommRecFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryInvestorInfoCommRec: param 1 expected CThostFtdcQryInvestorInfoCommRecField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryInvestorInfoCommRecFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryInvestorInfoCommRecFieldData>(arg1);
	ret = extra->api->ReqQryInvestorInfoCommRec(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///组合腿信息查询
///@see int CThostFtdcTraderApi::ReqQryCombLeg(CThostFtdcQryCombLegField *pQryCombLeg, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryCombLeg(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryCombLegFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryCombLeg: param 1 expected CThostFtdcQryCombLegField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryCombLegFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryCombLegFieldData>(arg1);
	ret = extra->api->ReqQryCombLeg(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///对冲设置请求
///@see int CThostFtdcTraderApi::ReqOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqOffsetSetting(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputOffsetSettingFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqOffsetSetting: param 1 expected CThostFtdcInputOffsetSettingField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputOffsetSettingFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(arg1);
	ret = extra->api->ReqOffsetSetting(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///对冲设置撤销请求
///@see int CThostFtdcTraderApi::ReqCancelOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqCancelOffsetSetting(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputOffsetSettingFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqCancelOffsetSetting: param 1 expected CThostFtdcInputOffsetSettingField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputOffsetSettingFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputOffsetSettingFieldData>(arg1);
	ret = extra->api->ReqCancelOffsetSetting(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///投资者对冲设置查询
///@see int CThostFtdcTraderApi::ReqQryOffsetSetting(CThostFtdcQryOffsetSettingField *pQryOffsetSetting, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryOffsetSetting(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryOffsetSettingFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryOffsetSetting: param 1 expected CThostFtdcQryOffsetSettingField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryOffsetSettingFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryOffsetSettingFieldData>(arg1);
	ret = extra->api->ReqQryOffsetSetting(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///申请短信验证码请求
///@see int CThostFtdcTraderApi::ReqGenSMSCode(CThostFtdcReqGenSMSCodeField *pReqGenSMSCode, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqGenSMSCode(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqGenSMSCodeFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqGenSMSCode: param 1 expected CThostFtdcReqGenSMSCodeField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcReqGenSMSCodeFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqGenSMSCodeFieldData>(arg1);
	ret = extra->api->ReqGenSMSCode(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///套利确认请求
///@see int CThostFtdcTraderApi::ReqSpdApply(CThostFtdcInputSpdApplyField *pInputSpdApply, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqSpdApply(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputSpdApplyFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqSpdApply: param 1 expected CThostFtdcInputSpdApplyField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputSpdApplyFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyFieldData>(arg1);
	ret = extra->api->ReqSpdApply(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///套利确认撤销请求
///@see int CThostFtdcTraderApi::ReqSpdApplyAction(CThostFtdcInputSpdApplyActionField *pInputSpdApplyAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqSpdApplyAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputSpdApplyActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqSpdApplyAction: param 1 expected CThostFtdcInputSpdApplyActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputSpdApplyActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputSpdApplyActionFieldData>(arg1);
	ret = extra->api->ReqSpdApplyAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///套利确认查询请求
///@see int CThostFtdcTraderApi::ReqQrySpdApply(CThostFtdcQrySpdApplyField *pQrySpdApply, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQrySpdApply(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQrySpdApplyFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQrySpdApply: param 1 expected CThostFtdcQrySpdApplyField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQrySpdApplyFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQrySpdApplyFieldData>(arg1);
	ret = extra->api->ReqQrySpdApply(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///套保确认请求
///@see int CThostFtdcTraderApi::ReqHedgeCfm(CThostFtdcInputHedgeCfmField *pInputHedgeCfm, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqHedgeCfm(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputHedgeCfmFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqHedgeCfm: param 1 expected CThostFtdcInputHedgeCfmField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputHedgeCfmFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmFieldData>(arg1);
	ret = extra->api->ReqHedgeCfm(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///套保确认撤销请求
///@see int CThostFtdcTraderApi::ReqHedgeCfmAction(CThostFtdcInputHedgeCfmActionField *pInputHedgeCfmAction, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqHedgeCfmAction(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcInputHedgeCfmActionFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqHedgeCfmAction: param 1 expected CThostFtdcInputHedgeCfmActionField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcInputHedgeCfmActionFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcInputHedgeCfmActionFieldData>(arg1);
	ret = extra->api->ReqHedgeCfmAction(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///套保确认查询请求
///@see int CThostFtdcTraderApi::ReqQryHedgeCfm(CThostFtdcQryHedgeCfmField *pQryHedgeCfm, int nRequestID)
static PyObject* PyCThostFtdcTraderApiType_method_ReqQryHedgeCfm(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryHedgeCfmFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryHedgeCfm: param 1 expected CThostFtdcQryHedgeCfmField instance");
        return NULL;
    }
    PyCThostFtdcTraderApiData *extra = PyCTP_GetTypeData<PyCThostFtdcTraderApiData>(self);
    PyCThostFtdcQryHedgeCfmFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryHedgeCfmFieldData>(arg1);
	ret = extra->api->ReqQryHedgeCfm(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

static void PyCThostFtdcTraderApiType_dealloc(PyObject *self) {
    PyObject *result = PyCThostFtdcTraderApiType_method_Release(self, NULL);
    Py_XDECREF(result);
	freefunc tp_free = (freefunc)PyType_GetSlot(Py_TYPE(self), Py_tp_free);
    if (tp_free) {
        tp_free(self);
    }
}

static PyMethodDef PyCThostFtdcTraderApiType_methods[] = {
    ///创建TraderApi
    ///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
    ///@param bIsProductionMode true:使用生产版本的API  false:使用测评版本的API
    ///@return 创建出的UserApi
    {
    .ml_name="CreateFtdcTraderApi",
    .ml_meth=(PyCFunction)PyCThostFtdcTraderApiType_method_CreateFtdcTraderApi,
    .ml_flags=METH_VARARGS | METH_CLASS,
    .ml_doc=PyDoc_STR("创建TraderApi"),
    },
    ///获取API的版本信息
    ///@retrun 获取到的版本号
    {
    .ml_name="GetApiVersion",
    .ml_meth=PyCThostFtdcTraderApiType_method_GetApiVersion,
    .ml_flags=METH_NOARGS | METH_STATIC,
    .ml_doc=PyDoc_STR("获取API的版本信息"),
    },
    ///删除接口对象本身
    ///@remark 不再使用本接口对象时,调用该函数删除接口对象
    {
    .ml_name="Release",
    .ml_meth=PyCThostFtdcTraderApiType_method_Release,
    .ml_flags=METH_NOARGS,
    .ml_doc=PyDoc_STR("删除接口对象本身"),
    },
    ///初始化
    ///@remark 初始化运行环境,只有调用后,接口才开始工作
    {
    .ml_name="Init",
    .ml_meth=PyCThostFtdcTraderApiType_method_Init,
    .ml_flags=METH_NOARGS,
    .ml_doc=PyDoc_STR("初始化"),
    },
    ///等待接口线程结束运行
    ///@return 线程退出代码
    {
    .ml_name="Join",
    .ml_meth=PyCThostFtdcTraderApiType_method_Join,
    .ml_flags=METH_NOARGS,
    .ml_doc=PyDoc_STR("等待接口线程结束运行"),
    },
    ///获取当前交易日
    ///@retrun 获取到的交易日
    ///@remark 只有登录成功后,才能得到正确的交易日
    {
    .ml_name="GetTradingDay",
    .ml_meth=PyCThostFtdcTraderApiType_method_GetTradingDay,
    .ml_flags=METH_NOARGS,
    .ml_doc=PyDoc_STR("获取当前交易日"),
    },
    ///获取已连接的前置的信息
    /// @param pFrontInfo：输入输出参数，用于存储获取到的前置信息，不能为空
    /// @remark 连接成功后，可获取正确的前置地址信息
    /// @remark 登录成功后，可获取正确的前置流控信息
    {
    .ml_name="GetFrontInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_GetFrontInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("获取已连接的前置的信息"),
    },
    ///注册前置机网络地址
    ///@param pszFrontAddress：前置机网络地址。
    ///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
    ///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
    {
    .ml_name="RegisterFront",
    .ml_meth=PyCThostFtdcTraderApiType_method_RegisterFront,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册前置机网络地址"),
    },
    ///注册名字服务器网络地址
    ///@param pszNsAddress：名字服务器网络地址。
    ///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
    ///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
    ///@remark RegisterNameServer优先于RegisterFront
    {
    .ml_name="RegisterNameServer",
    .ml_meth=PyCThostFtdcTraderApiType_method_RegisterNameServer,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册名字服务器网络地址"),
    },
    ///注册名字服务器用户信息
    ///@param pFensUserInfo：用户信息。
    {
    .ml_name="RegisterFensUserInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_RegisterFensUserInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册名字服务器用户信息"),
    },
    ///注册回调接口
    ///@param pSpi 派生自回调接口类的实例
    {
    .ml_name="RegisterSpi",
    .ml_meth=PyCThostFtdcTraderApiType_method_RegisterSpi,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册回调接口"),
    },
    ///订阅私有流。
    ///@param nResumeType 私有流重传方式
    ///        THOST_TERT_RESTART:从本交易日开始重传
    ///        THOST_TERT_RESUME:从上次收到的续传
    ///        THOST_TERT_QUICK:只传送登录后私有流的内容
    ///        THOST_TERT_RESUME_FROM_SEQ_NO:从指定序号开始重传，序号从1开始
    ///@param nSeqNo 私有流序号，只在THOST_TERT_RESUME_FROM_SEQ_NO模式下有效
    ///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
    {
    .ml_name="SubscribePrivateTopic",
    .ml_meth=PyCThostFtdcTraderApiType_method_SubscribePrivateTopic,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("订阅私有流。"),
    },
    ///订阅公共流。
    ///@param nResumeType 公共流重传方式
    ///        THOST_TERT_RESTART:从本交易日开始重传
    ///        THOST_TERT_RESUME:从上次收到的续传
    ///        THOST_TERT_QUICK:只传送登录后公共流的内容
    ///        THOST_TERT_NONE:取消订阅公共流
    ///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
    {
    .ml_name="SubscribePublicTopic",
    .ml_meth=PyCThostFtdcTraderApiType_method_SubscribePublicTopic,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("订阅公共流。"),
    },
    ///客户端认证请求
    {
    .ml_name="ReqAuthenticate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqAuthenticate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("客户端认证请求"),
    },
    ///注册用户终端信息，用于中继服务器多连接模式
    ///需要在终端认证成功后，用户登录前调用该接口
    {
    .ml_name="RegisterUserSystemInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_RegisterUserSystemInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册用户终端信息，用于中继服务器多连接模式"),
    },
    ///上报用户终端信息，用于中继服务器操作员登录模式
    ///操作员登录后，可以多次调用该接口上报客户信息
    {
    .ml_name="SubmitUserSystemInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_SubmitUserSystemInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("上报用户终端信息，用于中继服务器操作员登录模式"),
    },
    ///注册用户终端信息，用于中继服务器多连接模式.用于微信小程序等应用上报信息.
    {
    .ml_name="RegisterWechatUserSystemInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_RegisterWechatUserSystemInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册用户终端信息，用于中继服务器多连接模式.用于微信小程序等应用上报信息."),
    },
    ///上报用户终端信息，用于中继服务器操作员登录模式.用于微信小程序等应用上报信息.
    {
    .ml_name="SubmitWechatUserSystemInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_SubmitWechatUserSystemInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("上报用户终端信息，用于中继服务器操作员登录模式.用于微信小程序等应用上报信息."),
    },
    ///用户登录请求
    {
    .ml_name="ReqUserLogin",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqUserLogin,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("用户登录请求"),
    },
    ///登出请求
    {
    .ml_name="ReqUserLogout",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqUserLogout,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("登出请求"),
    },
    ///用户口令更新请求
    {
    .ml_name="ReqUserPasswordUpdate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqUserPasswordUpdate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("用户口令更新请求"),
    },
    ///资金账户口令更新请求
    {
    .ml_name="ReqTradingAccountPasswordUpdate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqTradingAccountPasswordUpdate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("资金账户口令更新请求"),
    },
    ///查询用户当前支持的认证模式
    {
    .ml_name="ReqUserAuthMethod",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqUserAuthMethod,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("查询用户当前支持的认证模式"),
    },
    ///用户发出获取图形验证码请求
    {
    .ml_name="ReqGenUserCaptcha",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqGenUserCaptcha,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("用户发出获取图形验证码请求"),
    },
    ///用户发出获取短信验证码请求
    {
    .ml_name="ReqGenUserText",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqGenUserText,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("用户发出获取短信验证码请求"),
    },
    ///用户发出带有图片验证码的登陆请求
    {
    .ml_name="ReqUserLoginWithCaptcha",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqUserLoginWithCaptcha,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("用户发出带有图片验证码的登陆请求"),
    },
    ///用户发出带有短信验证码的登陆请求
    {
    .ml_name="ReqUserLoginWithText",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqUserLoginWithText,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("用户发出带有短信验证码的登陆请求"),
    },
    ///用户发出带有动态口令的登陆请求
    {
    .ml_name="ReqUserLoginWithOTP",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqUserLoginWithOTP,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("用户发出带有动态口令的登陆请求"),
    },
    ///报单录入请求
    {
    .ml_name="ReqOrderInsert",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqOrderInsert,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("报单录入请求"),
    },
    ///预埋单录入请求
    {
    .ml_name="ReqParkedOrderInsert",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqParkedOrderInsert,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("预埋单录入请求"),
    },
    ///预埋撤单录入请求
    {
    .ml_name="ReqParkedOrderAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqParkedOrderAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("预埋撤单录入请求"),
    },
    ///报单操作请求
    {
    .ml_name="ReqOrderAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqOrderAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("报单操作请求"),
    },
    ///查询最大报单数量请求
    {
    .ml_name="ReqQryMaxOrderVolume",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryMaxOrderVolume,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("查询最大报单数量请求"),
    },
    ///投资者结算结果确认
    {
    .ml_name="ReqSettlementInfoConfirm",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqSettlementInfoConfirm,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者结算结果确认"),
    },
    ///请求删除预埋单
    {
    .ml_name="ReqRemoveParkedOrder",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqRemoveParkedOrder,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求删除预埋单"),
    },
    ///请求删除预埋撤单
    {
    .ml_name="ReqRemoveParkedOrderAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqRemoveParkedOrderAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求删除预埋撤单"),
    },
    ///执行宣告录入请求
    {
    .ml_name="ReqExecOrderInsert",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqExecOrderInsert,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("执行宣告录入请求"),
    },
    ///执行宣告操作请求
    {
    .ml_name="ReqExecOrderAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqExecOrderAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("执行宣告操作请求"),
    },
    ///询价录入请求
    {
    .ml_name="ReqForQuoteInsert",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqForQuoteInsert,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("询价录入请求"),
    },
    ///报价录入请求
    {
    .ml_name="ReqQuoteInsert",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQuoteInsert,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("报价录入请求"),
    },
    ///报价操作请求
    {
    .ml_name="ReqQuoteAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQuoteAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("报价操作请求"),
    },
    ///批量报单操作请求
    {
    .ml_name="ReqBatchOrderAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqBatchOrderAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("批量报单操作请求"),
    },
    ///期权自对冲录入请求
    {
    .ml_name="ReqOptionSelfCloseInsert",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqOptionSelfCloseInsert,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("期权自对冲录入请求"),
    },
    ///期权自对冲操作请求
    {
    .ml_name="ReqOptionSelfCloseAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqOptionSelfCloseAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("期权自对冲操作请求"),
    },
    ///申请组合录入请求
    {
    .ml_name="ReqCombActionInsert",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqCombActionInsert,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("申请组合录入请求"),
    },
    ///请求查询报单
    {
    .ml_name="ReqQryOrder",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryOrder,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询报单"),
    },
    ///请求查询成交
    {
    .ml_name="ReqQryTrade",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryTrade,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询成交"),
    },
    ///请求查询投资者持仓
    {
    .ml_name="ReqQryInvestorPosition",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorPosition,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询投资者持仓"),
    },
    ///请求查询资金账户
    {
    .ml_name="ReqQryTradingAccount",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryTradingAccount,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询资金账户"),
    },
    ///请求查询投资者
    {
    .ml_name="ReqQryInvestor",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestor,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询投资者"),
    },
    ///请求查询交易编码
    {
    .ml_name="ReqQryTradingCode",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryTradingCode,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询交易编码"),
    },
    ///请求查询合约保证金率
    {
    .ml_name="ReqQryInstrumentMarginRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInstrumentMarginRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询合约保证金率"),
    },
    ///请求查询合约手续费率
    {
    .ml_name="ReqQryInstrumentCommissionRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInstrumentCommissionRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询合约手续费率"),
    },
    ///请求查询用户会话
    {
    .ml_name="ReqQryUserSession",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryUserSession,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询用户会话"),
    },
    ///请求查询交易所
    {
    .ml_name="ReqQryExchange",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryExchange,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询交易所"),
    },
    ///请求查询产品
    {
    .ml_name="ReqQryProduct",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryProduct,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询产品"),
    },
    ///请求查询合约
    {
    .ml_name="ReqQryInstrument",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInstrument,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询合约"),
    },
    ///请求查询行情
    {
    .ml_name="ReqQryDepthMarketData",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryDepthMarketData,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询行情"),
    },
    ///请求查询交易员报盘机
    {
    .ml_name="ReqQryTraderOffer",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryTraderOffer,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询交易员报盘机"),
    },
    ///请求查询投资者结算结果
    {
    .ml_name="ReqQrySettlementInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySettlementInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询投资者结算结果"),
    },
    ///请求查询转帐银行
    {
    .ml_name="ReqQryTransferBank",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryTransferBank,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询转帐银行"),
    },
    ///请求查询投资者持仓明细
    {
    .ml_name="ReqQryInvestorPositionDetail",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorPositionDetail,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询投资者持仓明细"),
    },
    ///请求查询客户通知
    {
    .ml_name="ReqQryNotice",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryNotice,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询客户通知"),
    },
    ///请求查询结算信息确认
    {
    .ml_name="ReqQrySettlementInfoConfirm",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySettlementInfoConfirm,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询结算信息确认"),
    },
    ///请求查询投资者持仓明细
    {
    .ml_name="ReqQryInvestorPositionCombineDetail",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorPositionCombineDetail,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询投资者持仓明细"),
    },
    ///请求查询保证金监管系统经纪公司资金账户密钥
    {
    .ml_name="ReqQryCFMMCTradingAccountKey",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryCFMMCTradingAccountKey,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询保证金监管系统经纪公司资金账户密钥"),
    },
    ///请求查询仓单折抵信息
    {
    .ml_name="ReqQryEWarrantOffset",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryEWarrantOffset,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询仓单折抵信息"),
    },
    ///请求查询投资者品种/跨品种保证金
    {
    .ml_name="ReqQryInvestorProductGroupMargin",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorProductGroupMargin,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询投资者品种/跨品种保证金"),
    },
    ///请求查询交易所保证金率
    {
    .ml_name="ReqQryExchangeMarginRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryExchangeMarginRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询交易所保证金率"),
    },
    ///请求查询交易所调整保证金率
    {
    .ml_name="ReqQryExchangeMarginRateAdjust",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryExchangeMarginRateAdjust,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询交易所调整保证金率"),
    },
    ///请求查询汇率
    {
    .ml_name="ReqQryExchangeRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryExchangeRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询汇率"),
    },
    ///请求查询二级代理操作员银期权限
    {
    .ml_name="ReqQrySecAgentACIDMap",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySecAgentACIDMap,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询二级代理操作员银期权限"),
    },
    ///请求查询产品报价汇率
    {
    .ml_name="ReqQryProductExchRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryProductExchRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询产品报价汇率"),
    },
    ///请求查询产品组
    {
    .ml_name="ReqQryProductGroup",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryProductGroup,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询产品组"),
    },
    ///请求查询做市商合约手续费率
    {
    .ml_name="ReqQryMMInstrumentCommissionRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryMMInstrumentCommissionRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询做市商合约手续费率"),
    },
    ///请求查询做市商期权合约手续费
    {
    .ml_name="ReqQryMMOptionInstrCommRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryMMOptionInstrCommRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询做市商期权合约手续费"),
    },
    ///请求查询报单手续费
    {
    .ml_name="ReqQryInstrumentOrderCommRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInstrumentOrderCommRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询报单手续费"),
    },
    ///请求查询资金账户
    {
    .ml_name="ReqQrySecAgentTradingAccount",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySecAgentTradingAccount,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询资金账户"),
    },
    ///请求查询二级代理商资金校验模式
    {
    .ml_name="ReqQrySecAgentCheckMode",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySecAgentCheckMode,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询二级代理商资金校验模式"),
    },
    ///请求查询二级代理商信息
    {
    .ml_name="ReqQrySecAgentTradeInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySecAgentTradeInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询二级代理商信息"),
    },
    ///请求查询期权交易成本
    {
    .ml_name="ReqQryOptionInstrTradeCost",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryOptionInstrTradeCost,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询期权交易成本"),
    },
    ///请求查询期权合约手续费
    {
    .ml_name="ReqQryOptionInstrCommRate",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryOptionInstrCommRate,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询期权合约手续费"),
    },
    ///请求查询执行宣告
    {
    .ml_name="ReqQryExecOrder",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryExecOrder,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询执行宣告"),
    },
    ///请求查询询价
    {
    .ml_name="ReqQryForQuote",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryForQuote,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询询价"),
    },
    ///请求查询报价
    {
    .ml_name="ReqQryQuote",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryQuote,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询报价"),
    },
    ///请求查询期权自对冲
    {
    .ml_name="ReqQryOptionSelfClose",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryOptionSelfClose,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询期权自对冲"),
    },
    ///请求查询投资单元
    {
    .ml_name="ReqQryInvestUnit",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestUnit,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询投资单元"),
    },
    ///请求查询组合合约安全系数
    {
    .ml_name="ReqQryCombInstrumentGuard",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryCombInstrumentGuard,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询组合合约安全系数"),
    },
    ///请求查询申请组合
    {
    .ml_name="ReqQryCombAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryCombAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询申请组合"),
    },
    ///请求查询转帐流水
    {
    .ml_name="ReqQryTransferSerial",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryTransferSerial,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询转帐流水"),
    },
    ///请求查询银期签约关系
    {
    .ml_name="ReqQryAccountregister",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryAccountregister,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询银期签约关系"),
    },
    ///请求查询签约银行
    {
    .ml_name="ReqQryContractBank",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryContractBank,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询签约银行"),
    },
    ///请求查询预埋单
    {
    .ml_name="ReqQryParkedOrder",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryParkedOrder,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询预埋单"),
    },
    ///请求查询预埋撤单
    {
    .ml_name="ReqQryParkedOrderAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryParkedOrderAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询预埋撤单"),
    },
    ///请求查询交易通知
    {
    .ml_name="ReqQryTradingNotice",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryTradingNotice,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询交易通知"),
    },
    ///请求查询经纪公司交易参数
    {
    .ml_name="ReqQryBrokerTradingParams",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryBrokerTradingParams,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询经纪公司交易参数"),
    },
    ///请求查询经纪公司交易算法
    {
    .ml_name="ReqQryBrokerTradingAlgos",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryBrokerTradingAlgos,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询经纪公司交易算法"),
    },
    ///请求查询监控中心用户令牌
    {
    .ml_name="ReqQueryCFMMCTradingAccountToken",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQueryCFMMCTradingAccountToken,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询监控中心用户令牌"),
    },
    ///期货发起银行资金转期货请求
    {
    .ml_name="ReqFromBankToFutureByFuture",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqFromBankToFutureByFuture,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("期货发起银行资金转期货请求"),
    },
    ///期货发起期货资金转银行请求
    {
    .ml_name="ReqFromFutureToBankByFuture",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqFromFutureToBankByFuture,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("期货发起期货资金转银行请求"),
    },
    ///期货发起查询银行余额请求
    {
    .ml_name="ReqQueryBankAccountMoneyByFuture",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQueryBankAccountMoneyByFuture,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("期货发起查询银行余额请求"),
    },
    ///请求查询分类合约
    {
    .ml_name="ReqQryClassifiedInstrument",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryClassifiedInstrument,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询分类合约"),
    },
    ///请求组合优惠比例
    {
    .ml_name="ReqQryCombPromotionParam",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryCombPromotionParam,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求组合优惠比例"),
    },
    ///投资者风险结算持仓查询
    {
    .ml_name="ReqQryRiskSettleInvstPosition",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRiskSettleInvstPosition,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者风险结算持仓查询"),
    },
    ///风险结算产品查询
    {
    .ml_name="ReqQryRiskSettleProductStatus",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRiskSettleProductStatus,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("风险结算产品查询"),
    },
    ///SPBM期货合约参数查询
    {
    .ml_name="ReqQrySPBMFutureParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPBMFutureParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("SPBM期货合约参数查询"),
    },
    ///SPBM期权合约参数查询
    {
    .ml_name="ReqQrySPBMOptionParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPBMOptionParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("SPBM期权合约参数查询"),
    },
    ///SPBM品种内对锁仓折扣参数查询
    {
    .ml_name="ReqQrySPBMIntraParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPBMIntraParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("SPBM品种内对锁仓折扣参数查询"),
    },
    ///SPBM跨品种抵扣参数查询
    {
    .ml_name="ReqQrySPBMInterParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPBMInterParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("SPBM跨品种抵扣参数查询"),
    },
    ///SPBM组合保证金套餐查询
    {
    .ml_name="ReqQrySPBMPortfDefinition",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPBMPortfDefinition,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("SPBM组合保证金套餐查询"),
    },
    ///投资者SPBM套餐选择查询
    {
    .ml_name="ReqQrySPBMInvestorPortfDef",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPBMInvestorPortfDef,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者SPBM套餐选择查询"),
    },
    ///投资者新型组合保证金系数查询
    {
    .ml_name="ReqQryInvestorPortfMarginRatio",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorPortfMarginRatio,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者新型组合保证金系数查询"),
    },
    ///投资者产品SPBM明细查询
    {
    .ml_name="ReqQryInvestorProdSPBMDetail",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorProdSPBMDetail,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者产品SPBM明细查询"),
    },
    ///投资者商品组SPMM记录查询
    {
    .ml_name="ReqQryInvestorCommoditySPMMMargin",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorCommoditySPMMMargin,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者商品组SPMM记录查询"),
    },
    ///投资者商品群SPMM记录查询
    {
    .ml_name="ReqQryInvestorCommodityGroupSPMMMargin",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorCommodityGroupSPMMMargin,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者商品群SPMM记录查询"),
    },
    ///SPMM合约参数查询
    {
    .ml_name="ReqQrySPMMInstParam",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPMMInstParam,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("SPMM合约参数查询"),
    },
    ///SPMM产品参数查询
    {
    .ml_name="ReqQrySPMMProductParam",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPMMProductParam,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("SPMM产品参数查询"),
    },
    ///SPBM附加跨品种抵扣参数查询
    {
    .ml_name="ReqQrySPBMAddOnInterParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySPBMAddOnInterParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("SPBM附加跨品种抵扣参数查询"),
    },
    ///RCAMS产品组合信息查询
    {
    .ml_name="ReqQryRCAMSCombProductInfo",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRCAMSCombProductInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RCAMS产品组合信息查询"),
    },
    ///RCAMS同合约风险对冲参数查询
    {
    .ml_name="ReqQryRCAMSInstrParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRCAMSInstrParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RCAMS同合约风险对冲参数查询"),
    },
    ///RCAMS品种内风险对冲参数查询
    {
    .ml_name="ReqQryRCAMSIntraParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRCAMSIntraParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RCAMS品种内风险对冲参数查询"),
    },
    ///RCAMS跨品种风险折抵参数查询
    {
    .ml_name="ReqQryRCAMSInterParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRCAMSInterParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RCAMS跨品种风险折抵参数查询"),
    },
    ///RCAMS空头期权风险调整参数查询
    {
    .ml_name="ReqQryRCAMSShortOptAdjustParam",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRCAMSShortOptAdjustParam,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RCAMS空头期权风险调整参数查询"),
    },
    ///RCAMS策略组合持仓查询
    {
    .ml_name="ReqQryRCAMSInvestorCombPosition",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRCAMSInvestorCombPosition,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RCAMS策略组合持仓查询"),
    },
    ///投资者品种RCAMS保证金查询
    {
    .ml_name="ReqQryInvestorProdRCAMSMargin",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorProdRCAMSMargin,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者品种RCAMS保证金查询"),
    },
    ///RULE合约保证金参数查询
    {
    .ml_name="ReqQryRULEInstrParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRULEInstrParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RULE合约保证金参数查询"),
    },
    ///RULE品种内对锁仓折扣参数查询
    {
    .ml_name="ReqQryRULEIntraParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRULEIntraParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RULE品种内对锁仓折扣参数查询"),
    },
    ///RULE跨品种抵扣参数查询
    {
    .ml_name="ReqQryRULEInterParameter",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryRULEInterParameter,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("RULE跨品种抵扣参数查询"),
    },
    ///投资者产品RULE保证金查询
    {
    .ml_name="ReqQryInvestorProdRULEMargin",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorProdRULEMargin,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者产品RULE保证金查询"),
    },
    ///投资者新型组合保证金开关查询
    {
    .ml_name="ReqQryInvestorPortfSetting",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorPortfSetting,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者新型组合保证金开关查询"),
    },
    ///投资者申报费阶梯收取记录查询
    {
    .ml_name="ReqQryInvestorInfoCommRec",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryInvestorInfoCommRec,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者申报费阶梯收取记录查询"),
    },
    ///组合腿信息查询
    {
    .ml_name="ReqQryCombLeg",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryCombLeg,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("组合腿信息查询"),
    },
    ///对冲设置请求
    {
    .ml_name="ReqOffsetSetting",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqOffsetSetting,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("对冲设置请求"),
    },
    ///对冲设置撤销请求
    {
    .ml_name="ReqCancelOffsetSetting",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqCancelOffsetSetting,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("对冲设置撤销请求"),
    },
    ///投资者对冲设置查询
    {
    .ml_name="ReqQryOffsetSetting",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryOffsetSetting,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("投资者对冲设置查询"),
    },
    ///申请短信验证码请求
    {
    .ml_name="ReqGenSMSCode",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqGenSMSCode,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("申请短信验证码请求"),
    },
    ///套利确认请求
    {
    .ml_name="ReqSpdApply",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqSpdApply,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("套利确认请求"),
    },
    ///套利确认撤销请求
    {
    .ml_name="ReqSpdApplyAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqSpdApplyAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("套利确认撤销请求"),
    },
    ///套利确认查询请求
    {
    .ml_name="ReqQrySpdApply",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQrySpdApply,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("套利确认查询请求"),
    },
    ///套保确认请求
    {
    .ml_name="ReqHedgeCfm",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqHedgeCfm,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("套保确认请求"),
    },
    ///套保确认撤销请求
    {
    .ml_name="ReqHedgeCfmAction",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqHedgeCfmAction,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("套保确认撤销请求"),
    },
    ///套保确认查询请求
    {
    .ml_name="ReqQryHedgeCfm",
    .ml_meth=PyCThostFtdcTraderApiType_method_ReqQryHedgeCfm,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("套保确认查询请求"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTraderApiType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTraderApi"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("")),
    PySlot_UINT64(Py_tp_flags, Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE),
    PySlot_STATIC_DATA(Py_tp_methods, PyCThostFtdcTraderApiType_methods),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTraderApiData)),
    PySlot_FUNC(Py_tp_dealloc, PyCThostFtdcTraderApiType_dealloc),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTraderApiType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("")},
    {Py_tp_methods, PyCThostFtdcTraderApiType_methods},
    {Py_tp_dealloc, (void *)PyCThostFtdcTraderApiType_dealloc},
    {0, NULL}  /* Sentinel */
};
static PyType_Spec PyCThostFtdcTraderApiType_spec = {
    .name = "PyCTP.CThostFtdcTraderApi",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTraderApiData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTraderApiData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .slots = PyCThostFtdcTraderApiType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTraderApiType = NULL;

int PyCTP_module_add_PyCThostFtdcTraderApiType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTraderApiType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTraderApiType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTraderApiType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTraderApi", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTraderApi to module");
        Py_DECREF(pytype);
        return -1;
    };

    return 0;
}