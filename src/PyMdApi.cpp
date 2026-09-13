
#include "stdafx.h"
#include "PyMdApi.h"
#include "PyTypes.h"

namespace {
    class PyCThostFtdcMdSpi final: public CThostFtdcMdSpi {
        protected:

            PyCThostFtdcMdApiData *api;

        public:

            PyCThostFtdcMdSpi(PyCThostFtdcMdApiData *a) : api(a) {}


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

            ///请求查询组播合约响应
            void OnRspQryMulticastInstrument(CThostFtdcMulticastInstrumentField *pMulticastInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpMulticastInstrument = NULL;
                PyObject *pyobjpMulticastInstrument_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pMulticastInstrument) {
                    pyobjpMulticastInstrument = PyType_GenericAlloc(PyCThostFtdcMulticastInstrumentFieldType, 0);
                    if (!pyobjpMulticastInstrument) goto cleanup;
                    PyCThostFtdcMulticastInstrumentFieldData *extra_pMulticastInstrument = PyCTP_GetTypeData<PyCThostFtdcMulticastInstrumentFieldData>(pyobjpMulticastInstrument);
                    extra_pMulticastInstrument->data = *pMulticastInstrument;
                    pyobjpMulticastInstrument_arg = pyobjpMulticastInstrument;
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

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpMulticastInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspQryMulticastInstrument"), const_cast<char *>("OOOO"), pyobjpMulticastInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpMulticastInstrument);
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

            ///订阅行情应答
            void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSpecificInstrument = NULL;
                PyObject *pyobjpSpecificInstrument_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSpecificInstrument) {
                    pyobjpSpecificInstrument = PyType_GenericAlloc(PyCThostFtdcSpecificInstrumentFieldType, 0);
                    if (!pyobjpSpecificInstrument) goto cleanup;
                    PyCThostFtdcSpecificInstrumentFieldData *extra_pSpecificInstrument = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(pyobjpSpecificInstrument);
                    extra_pSpecificInstrument->data = *pSpecificInstrument;
                    pyobjpSpecificInstrument_arg = pyobjpSpecificInstrument;
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

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSpecificInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSubMarketData"), const_cast<char *>("OOOO"), pyobjpSpecificInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSpecificInstrument);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///取消订阅行情应答
            void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSpecificInstrument = NULL;
                PyObject *pyobjpSpecificInstrument_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSpecificInstrument) {
                    pyobjpSpecificInstrument = PyType_GenericAlloc(PyCThostFtdcSpecificInstrumentFieldType, 0);
                    if (!pyobjpSpecificInstrument) goto cleanup;
                    PyCThostFtdcSpecificInstrumentFieldData *extra_pSpecificInstrument = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(pyobjpSpecificInstrument);
                    extra_pSpecificInstrument->data = *pSpecificInstrument;
                    pyobjpSpecificInstrument_arg = pyobjpSpecificInstrument;
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

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSpecificInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUnSubMarketData"), const_cast<char *>("OOOO"), pyobjpSpecificInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSpecificInstrument);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///订阅询价应答
            void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSpecificInstrument = NULL;
                PyObject *pyobjpSpecificInstrument_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSpecificInstrument) {
                    pyobjpSpecificInstrument = PyType_GenericAlloc(PyCThostFtdcSpecificInstrumentFieldType, 0);
                    if (!pyobjpSpecificInstrument) goto cleanup;
                    PyCThostFtdcSpecificInstrumentFieldData *extra_pSpecificInstrument = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(pyobjpSpecificInstrument);
                    extra_pSpecificInstrument->data = *pSpecificInstrument;
                    pyobjpSpecificInstrument_arg = pyobjpSpecificInstrument;
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

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSpecificInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspSubForQuoteRsp"), const_cast<char *>("OOOO"), pyobjpSpecificInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSpecificInstrument);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///取消订阅询价应答
            void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpSpecificInstrument = NULL;
                PyObject *pyobjpSpecificInstrument_arg = Py_None;
                PyObject *pyobjpRspInfo = NULL;
                PyObject *pyobjpRspInfo_arg = Py_None;
                PyObject *pyobjnRequestID = NULL;
                PyObject *pyobjbIsLast = NULL;
                PyObject *result = NULL;

                if (pSpecificInstrument) {
                    pyobjpSpecificInstrument = PyType_GenericAlloc(PyCThostFtdcSpecificInstrumentFieldType, 0);
                    if (!pyobjpSpecificInstrument) goto cleanup;
                    PyCThostFtdcSpecificInstrumentFieldData *extra_pSpecificInstrument = PyCTP_GetTypeData<PyCThostFtdcSpecificInstrumentFieldData>(pyobjpSpecificInstrument);
                    extra_pSpecificInstrument->data = *pSpecificInstrument;
                    pyobjpSpecificInstrument_arg = pyobjpSpecificInstrument;
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

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("OOOO"), pyobjpSpecificInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRspUnSubForQuoteRsp"), const_cast<char *>("OOOO"), pyobjpSpecificInstrument_arg, pyobjpRspInfo_arg, pyobjnRequestID, pyobjbIsLast);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpSpecificInstrument);
                    Py_XDECREF(pyobjpRspInfo);
                    Py_XDECREF(pyobjnRequestID);
                    Py_XDECREF(pyobjbIsLast);
                    Py_XDECREF(result);
                PyGILState_Release(gstate);
            }

            ///深度行情通知
            void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) override {
                PyGILState_STATE gstate = PyGILState_Ensure();

                PyObject *pyobjpDepthMarketData = NULL;
                PyObject *pyobjpDepthMarketData_arg = Py_None;
                PyObject *result = NULL;

                if (pDepthMarketData) {
                    pyobjpDepthMarketData = PyType_GenericAlloc(PyCThostFtdcDepthMarketDataFieldType, 0);
                    if (!pyobjpDepthMarketData) goto cleanup;
                    PyCThostFtdcDepthMarketDataFieldData *extra_pDepthMarketData = PyCTP_GetTypeData<PyCThostFtdcDepthMarketDataFieldData>(pyobjpDepthMarketData);
                    extra_pDepthMarketData->data = *pDepthMarketData;
                    pyobjpDepthMarketData_arg = pyobjpDepthMarketData;
                }

                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("O"), pyobjpDepthMarketData_arg);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("OnRtnDepthMarketData"), const_cast<char *>("O"), pyobjpDepthMarketData_arg);
                if(!result) PyErr_Print();

                cleanup:
                    Py_XDECREF(pyobjpDepthMarketData);
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
    };
}

///创建MdApi
///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
///@param bIsProductionMode true:使用生产版本的API  false:使用测评版本API
///@return 创建出的UserApi
///modify for udp marketdata
///@see static CThostFtdcMdApi * CThostFtdcMdApi::CreateFtdcMdApi(const char *pszFlowPath = "", const bool bIsUsingUdp = false, const bool bIsMulticast = false, bool bIsProductionMode = true)
static PyObject *PyCThostFtdcMdApiType_method_CreateFtdcMdApi(PyTypeObject *type, PyObject *args){
	const char *pszFlowPath = "";
	bool bIsUsingUdp = false;
	bool bIsMulticast = false;
	bool bIsProductionMode = true;

	if (!PyArg_ParseTuple(args, "|yppp", &pszFlowPath, &bIsUsingUdp, &bIsMulticast, &bIsProductionMode)) {
		return NULL;
	}

	/* 构造api对象 */
	PyObject *self = PyType_GenericAlloc(type, 0);
	if(!self){
		return NULL;
	}

    PyCThostFtdcMdApiData* extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);

	/* 创建ctpapi实例 */
	extra->api = CThostFtdcMdApi::CreateFtdcMdApi(pszFlowPath, bIsUsingUdp, bIsMulticast, bIsProductionMode);

	if(!(extra->api)){
		PyErr_SetString(PyExc_RuntimeError, "CThostFtdcMdApi::CreateFtdcMdApi failed");
		Py_DECREF(self);
		return NULL;
	}

	extra->spi  = new (std::nothrow) PyCThostFtdcMdSpi(extra);
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
///@see void CThostFtdcMdApi::Release()
static PyObject *PyCThostFtdcMdApiType_method_Release(PyObject *self, PyObject *args) {
	PyCThostFtdcMdApiData* extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
	if( extra->api )
	{
		extra->api->RegisterSpi(NULL);
		extra->api->Release();
		extra->api = NULL;
	}
	if( extra->spi ){
		delete dynamic_cast<PyCThostFtdcMdSpi *>(extra->spi);
		extra->spi = NULL;
	}
	Py_CLEAR(extra->pySpi);
	Py_RETURN_NONE;
}
///注册回调接口
///@param pSpi 派生自回调接口类的实例
///@see void CThostFtdcMdApi::RegisterSpi(CThostFtdcMdSpi *pSpi)
static PyObject *PyCThostFtdcMdApiType_method_RegisterSpi(PyObject *self, PyObject *args) {
    PyCThostFtdcMdApiData* extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
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
///@see static const char * CThostFtdcMdApi::GetApiVersion()
static PyObject* PyCThostFtdcMdApiType_method_GetApiVersion(PyObject *self, PyObject *args) {
    return PyBytes_FromString(CThostFtdcMdApi::GetApiVersion());
}

///初始化
///@remark 初始化运行环境,只有调用后,接口才开始工作
///@see void CThostFtdcMdApi::Init()
static PyObject* PyCThostFtdcMdApiType_method_Init(PyObject *self, PyObject *args) {
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
    extra->api->Init();
    extra = NULL;
    Py_RETURN_NONE;
}

///等待接口线程结束运行
///@return 线程退出代码
///@see int CThostFtdcMdApi::Join()
static PyObject* PyCThostFtdcMdApiType_method_Join(PyObject *self, PyObject *args) {
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
	return PyLong_FromLong(extra->api->Join());
}

///获取当前交易日
///@retrun 获取到的交易日
///@remark 只有登录成功后,才能得到正确的交易日
///@see const char * CThostFtdcMdApi::GetTradingDay()
static PyObject* PyCThostFtdcMdApiType_method_GetTradingDay(PyObject *self, PyObject *args) {
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
    return PyBytes_FromString(extra->api->GetTradingDay());
}

///注册前置机网络地址
///@param pszFrontAddress：前置机网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
///@see void CThostFtdcMdApi::RegisterFront(char *pszFrontAddress)
static PyObject* PyCThostFtdcMdApiType_method_RegisterFront(PyObject *self, PyObject *args) {
    char *pszFrontAddress = NULL;
    if (!PyArg_ParseTuple(args, "y", &pszFrontAddress)) {
        return NULL;
    }
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
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
///@see void CThostFtdcMdApi::RegisterNameServer(char *pszNsAddress)
static PyObject* PyCThostFtdcMdApiType_method_RegisterNameServer(PyObject *self, PyObject *args) {
    char *pszNsAddress = NULL;
    if (!PyArg_ParseTuple(args, "y", &pszNsAddress)) {
        return NULL;
    }
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
    extra->api->RegisterNameServer(pszNsAddress);
    extra = NULL;
    pszNsAddress = NULL;
    Py_RETURN_NONE;
}

///注册名字服务器用户信息
///@param pFensUserInfo：用户信息。
///@see void CThostFtdcMdApi::RegisterFensUserInfo(CThostFtdcFensUserInfoField *pFensUserInfo)
static PyObject* PyCThostFtdcMdApiType_method_RegisterFensUserInfo(PyObject *self, PyObject *args) {
	PyObject *obj = NULL;
	if (!PyArg_ParseTuple(args, "O", &obj)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(obj, PyCThostFtdcFensUserInfoFieldType)) {
        PyErr_Format(PyExc_TypeError, "RegisterFensUserInfo: expected CThostFtdcFensUserInfoField instance");
        return NULL;
    }
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
    PyCThostFtdcFensUserInfoFieldData *obj_extra = PyCTP_GetTypeData<PyCThostFtdcFensUserInfoFieldData>(obj);
	extra->api->RegisterFensUserInfo(&(obj_extra->data));
	extra = NULL;
	obj_extra = NULL;
	obj = NULL;
	Py_RETURN_NONE;
}

///订阅行情。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
///@see int CThostFtdcMdApi::SubscribeMarketData(char *ppInstrumentID[], int nCount)
static PyObject* PyCThostFtdcMdApiType_method_SubscribeMarketData(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	char **ppInstrumentID = NULL;
	if ( !PyArg_ParseTuple(args, "Oi", &arg1, &arg2) ) {
        return NULL;
    }
	if( !PyList_Check(arg1) ) {
        PyErr_SetString(PyExc_TypeError, "SubscribeMarketData: argument 1 must be a list");
        return NULL;
    }
	if( PyList_Size(arg1) != (Py_ssize_t)arg2 ) {
        PyErr_Format(PyExc_ValueError, "SubscribeMarketData: nCount (%d) does not match list length (%zd)", arg2, PyList_Size(arg1));
        return NULL;
    }
	ppInstrumentID = new(std::nothrow) char*[arg2];
	if(!ppInstrumentID) {
        PyErr_NoMemory();
        return NULL;
	}
	for(int i=0; i < arg2; i++) {
        PyObject* item = PyList_GetItem(arg1, i);
        if( !PyBytes_Check(item) ) {
            PyErr_Format(PyExc_TypeError, "SubscribeMarketData: list item %d must be bytes", i);
            delete[] ppInstrumentID;
            return NULL;
        }
        ppInstrumentID[i] = PyBytes_AsString(item);
	}
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
	ret = extra->api->SubscribeMarketData(ppInstrumentID, arg2);
	delete[] ppInstrumentID;
	ppInstrumentID = NULL;
	arg1 = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///退订行情。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
///@see int CThostFtdcMdApi::UnSubscribeMarketData(char *ppInstrumentID[], int nCount)
static PyObject* PyCThostFtdcMdApiType_method_UnSubscribeMarketData(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	char **ppInstrumentID = NULL;
	if ( !PyArg_ParseTuple(args, "Oi", &arg1, &arg2) ) {
        return NULL;
    }
	if( !PyList_Check(arg1) ) {
        PyErr_SetString(PyExc_TypeError, "UnSubscribeMarketData: argument 1 must be a list");
        return NULL;
    }
	if( PyList_Size(arg1) != (Py_ssize_t)arg2 ) {
        PyErr_Format(PyExc_ValueError, "UnSubscribeMarketData: nCount (%d) does not match list length (%zd)", arg2, PyList_Size(arg1));
        return NULL;
    }
	ppInstrumentID = new(std::nothrow) char*[arg2];
	if(!ppInstrumentID) {
        PyErr_NoMemory();
        return NULL;
	}
	for(int i=0; i < arg2; i++) {
        PyObject* item = PyList_GetItem(arg1, i);
        if( !PyBytes_Check(item) ) {
            PyErr_Format(PyExc_TypeError, "UnSubscribeMarketData: list item %d must be bytes", i);
            delete[] ppInstrumentID;
            return NULL;
        }
        ppInstrumentID[i] = PyBytes_AsString(item);
	}
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
	ret = extra->api->UnSubscribeMarketData(ppInstrumentID, arg2);
	delete[] ppInstrumentID;
	ppInstrumentID = NULL;
	arg1 = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///订阅询价。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
///@see int CThostFtdcMdApi::SubscribeForQuoteRsp(char *ppInstrumentID[], int nCount)
static PyObject* PyCThostFtdcMdApiType_method_SubscribeForQuoteRsp(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	char **ppInstrumentID = NULL;
	if ( !PyArg_ParseTuple(args, "Oi", &arg1, &arg2) ) {
        return NULL;
    }
	if( !PyList_Check(arg1) ) {
        PyErr_SetString(PyExc_TypeError, "SubscribeForQuoteRsp: argument 1 must be a list");
        return NULL;
    }
	if( PyList_Size(arg1) != (Py_ssize_t)arg2 ) {
        PyErr_Format(PyExc_ValueError, "SubscribeForQuoteRsp: nCount (%d) does not match list length (%zd)", arg2, PyList_Size(arg1));
        return NULL;
    }
	ppInstrumentID = new(std::nothrow) char*[arg2];
	if(!ppInstrumentID) {
        PyErr_NoMemory();
        return NULL;
	}
	for(int i=0; i < arg2; i++) {
        PyObject* item = PyList_GetItem(arg1, i);
        if( !PyBytes_Check(item) ) {
            PyErr_Format(PyExc_TypeError, "SubscribeForQuoteRsp: list item %d must be bytes", i);
            delete[] ppInstrumentID;
            return NULL;
        }
        ppInstrumentID[i] = PyBytes_AsString(item);
	}
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
	ret = extra->api->SubscribeForQuoteRsp(ppInstrumentID, arg2);
	delete[] ppInstrumentID;
	ppInstrumentID = NULL;
	arg1 = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///退订询价。
///@param ppInstrumentID 合约ID
///@param nCount 要订阅/退订行情的合约个数
///@remark
///@see int CThostFtdcMdApi::UnSubscribeForQuoteRsp(char *ppInstrumentID[], int nCount)
static PyObject* PyCThostFtdcMdApiType_method_UnSubscribeForQuoteRsp(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	char **ppInstrumentID = NULL;
	if ( !PyArg_ParseTuple(args, "Oi", &arg1, &arg2) ) {
        return NULL;
    }
	if( !PyList_Check(arg1) ) {
        PyErr_SetString(PyExc_TypeError, "UnSubscribeForQuoteRsp: argument 1 must be a list");
        return NULL;
    }
	if( PyList_Size(arg1) != (Py_ssize_t)arg2 ) {
        PyErr_Format(PyExc_ValueError, "UnSubscribeForQuoteRsp: nCount (%d) does not match list length (%zd)", arg2, PyList_Size(arg1));
        return NULL;
    }
	ppInstrumentID = new(std::nothrow) char*[arg2];
	if(!ppInstrumentID) {
        PyErr_NoMemory();
        return NULL;
	}
	for(int i=0; i < arg2; i++) {
        PyObject* item = PyList_GetItem(arg1, i);
        if( !PyBytes_Check(item) ) {
            PyErr_Format(PyExc_TypeError, "UnSubscribeForQuoteRsp: list item %d must be bytes", i);
            delete[] ppInstrumentID;
            return NULL;
        }
        ppInstrumentID[i] = PyBytes_AsString(item);
	}
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
	ret = extra->api->UnSubscribeForQuoteRsp(ppInstrumentID, arg2);
	delete[] ppInstrumentID;
	ppInstrumentID = NULL;
	arg1 = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///用户登录请求
///@see int CThostFtdcMdApi::ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
static PyObject* PyCThostFtdcMdApiType_method_ReqUserLogin(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcReqUserLoginFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserLogin: param 1 expected CThostFtdcReqUserLoginField instance");
        return NULL;
    }
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
    PyCThostFtdcReqUserLoginFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(arg1);
	ret = extra->api->ReqUserLogin(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///登出请求
///@see int CThostFtdcMdApi::ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
static PyObject* PyCThostFtdcMdApiType_method_ReqUserLogout(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcUserLogoutFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqUserLogout: param 1 expected CThostFtdcUserLogoutField instance");
        return NULL;
    }
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
    PyCThostFtdcUserLogoutFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcUserLogoutFieldData>(arg1);
	ret = extra->api->ReqUserLogout(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

///请求查询组播合约
///@see int CThostFtdcMdApi::ReqQryMulticastInstrument(CThostFtdcQryMulticastInstrumentField *pQryMulticastInstrument, int nRequestID)
static PyObject* PyCThostFtdcMdApiType_method_ReqQryMulticastInstrument(PyObject *self, PyObject *args) {
	PyObject *arg1 = NULL;
	int arg2, ret;
	if (!PyArg_ParseTuple(args, "Oi", &arg1, &arg2)) {
        return NULL;
    }
    if (!PyObject_TypeCheck(arg1, PyCThostFtdcQryMulticastInstrumentFieldType )) {
        PyErr_Format( PyExc_TypeError, "ReqQryMulticastInstrument: param 1 expected CThostFtdcQryMulticastInstrumentField instance");
        return NULL;
    }
    PyCThostFtdcMdApiData *extra = PyCTP_GetTypeData<PyCThostFtdcMdApiData>(self);
    PyCThostFtdcQryMulticastInstrumentFieldData *arg1_extra = PyCTP_GetTypeData<PyCThostFtdcQryMulticastInstrumentFieldData>(arg1);
	ret = extra->api->ReqQryMulticastInstrument(&(arg1_extra->data), arg2);
	arg1 = NULL;
	arg1_extra = NULL;
	extra = NULL;
	return PyLong_FromLong(ret);
}

static void PyCThostFtdcMdApiType_dealloc(PyObject *self) {
    PyObject *result = PyCThostFtdcMdApiType_method_Release(self, NULL);
    Py_XDECREF(result);
	freefunc tp_free = (freefunc)PyType_GetSlot(Py_TYPE(self), Py_tp_free);
    if (tp_free) {
        tp_free(self);
    }
}

static PyMethodDef PyCThostFtdcMdApiType_methods[] = {
    ///创建MdApi
    ///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
    ///@param bIsProductionMode true:使用生产版本的API  false:使用测评版本API
    ///@return 创建出的UserApi
    ///modify for udp marketdata
    {
    .ml_name="CreateFtdcMdApi",
    .ml_meth=(PyCFunction)PyCThostFtdcMdApiType_method_CreateFtdcMdApi,
    .ml_flags=METH_VARARGS | METH_CLASS,
    .ml_doc=PyDoc_STR("创建MdApi"),
    },
    ///获取API的版本信息
    ///@retrun 获取到的版本号
    {
    .ml_name="GetApiVersion",
    .ml_meth=PyCThostFtdcMdApiType_method_GetApiVersion,
    .ml_flags=METH_NOARGS | METH_STATIC,
    .ml_doc=PyDoc_STR("获取API的版本信息"),
    },
    ///删除接口对象本身
    ///@remark 不再使用本接口对象时,调用该函数删除接口对象
    {
    .ml_name="Release",
    .ml_meth=PyCThostFtdcMdApiType_method_Release,
    .ml_flags=METH_NOARGS,
    .ml_doc=PyDoc_STR("删除接口对象本身"),
    },
    ///初始化
    ///@remark 初始化运行环境,只有调用后,接口才开始工作
    {
    .ml_name="Init",
    .ml_meth=PyCThostFtdcMdApiType_method_Init,
    .ml_flags=METH_NOARGS,
    .ml_doc=PyDoc_STR("初始化"),
    },
    ///等待接口线程结束运行
    ///@return 线程退出代码
    {
    .ml_name="Join",
    .ml_meth=PyCThostFtdcMdApiType_method_Join,
    .ml_flags=METH_NOARGS,
    .ml_doc=PyDoc_STR("等待接口线程结束运行"),
    },
    ///获取当前交易日
    ///@retrun 获取到的交易日
    ///@remark 只有登录成功后,才能得到正确的交易日
    {
    .ml_name="GetTradingDay",
    .ml_meth=PyCThostFtdcMdApiType_method_GetTradingDay,
    .ml_flags=METH_NOARGS,
    .ml_doc=PyDoc_STR("获取当前交易日"),
    },
    ///注册前置机网络地址
    ///@param pszFrontAddress：前置机网络地址。
    ///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
    ///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
    {
    .ml_name="RegisterFront",
    .ml_meth=PyCThostFtdcMdApiType_method_RegisterFront,
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
    .ml_meth=PyCThostFtdcMdApiType_method_RegisterNameServer,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册名字服务器网络地址"),
    },
    ///注册名字服务器用户信息
    ///@param pFensUserInfo：用户信息。
    {
    .ml_name="RegisterFensUserInfo",
    .ml_meth=PyCThostFtdcMdApiType_method_RegisterFensUserInfo,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册名字服务器用户信息"),
    },
    ///注册回调接口
    ///@param pSpi 派生自回调接口类的实例
    {
    .ml_name="RegisterSpi",
    .ml_meth=PyCThostFtdcMdApiType_method_RegisterSpi,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("注册回调接口"),
    },
    ///订阅行情。
    ///@param ppInstrumentID 合约ID
    ///@param nCount 要订阅/退订行情的合约个数
    ///@remark
    {
    .ml_name="SubscribeMarketData",
    .ml_meth=PyCThostFtdcMdApiType_method_SubscribeMarketData,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("订阅行情。"),
    },
    ///退订行情。
    ///@param ppInstrumentID 合约ID
    ///@param nCount 要订阅/退订行情的合约个数
    ///@remark
    {
    .ml_name="UnSubscribeMarketData",
    .ml_meth=PyCThostFtdcMdApiType_method_UnSubscribeMarketData,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("退订行情。"),
    },
    ///订阅询价。
    ///@param ppInstrumentID 合约ID
    ///@param nCount 要订阅/退订行情的合约个数
    ///@remark
    {
    .ml_name="SubscribeForQuoteRsp",
    .ml_meth=PyCThostFtdcMdApiType_method_SubscribeForQuoteRsp,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("订阅询价。"),
    },
    ///退订询价。
    ///@param ppInstrumentID 合约ID
    ///@param nCount 要订阅/退订行情的合约个数
    ///@remark
    {
    .ml_name="UnSubscribeForQuoteRsp",
    .ml_meth=PyCThostFtdcMdApiType_method_UnSubscribeForQuoteRsp,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("退订询价。"),
    },
    ///用户登录请求
    {
    .ml_name="ReqUserLogin",
    .ml_meth=PyCThostFtdcMdApiType_method_ReqUserLogin,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("用户登录请求"),
    },
    ///登出请求
    {
    .ml_name="ReqUserLogout",
    .ml_meth=PyCThostFtdcMdApiType_method_ReqUserLogout,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("登出请求"),
    },
    ///请求查询组播合约
    {
    .ml_name="ReqQryMulticastInstrument",
    .ml_meth=PyCThostFtdcMdApiType_method_ReqQryMulticastInstrument,
    .ml_flags=METH_VARARGS,
    .ml_doc=PyDoc_STR("请求查询组播合约"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMdApiType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMdApi"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("")),
    PySlot_UINT64(Py_tp_flags, Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE),
    PySlot_STATIC_DATA(Py_tp_methods, PyCThostFtdcMdApiType_methods),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMdApiData)),
    PySlot_FUNC(Py_tp_dealloc, PyCThostFtdcMdApiType_dealloc),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMdApiType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("")},
    {Py_tp_methods, PyCThostFtdcMdApiType_methods},
    {Py_tp_dealloc, (void *)PyCThostFtdcMdApiType_dealloc},
    {0, NULL}  /* Sentinel */
};
static PyType_Spec PyCThostFtdcMdApiType_spec = {
    .name = "PyCTP.CThostFtdcMdApi",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMdApiData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMdApiData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .slots = PyCThostFtdcMdApiType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMdApiType = NULL;

int PyCTP_module_add_PyCThostFtdcMdApiType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMdApiType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMdApiType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMdApiType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMdApi", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMdApi to module");
        Py_DECREF(pytype);
        return -1;
    };

    return 0;
}