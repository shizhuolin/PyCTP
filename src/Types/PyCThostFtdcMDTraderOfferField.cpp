
#include "PyCThostFtdcMDTraderOfferField.h"

///交易所行情报盘机

static int PyCThostFtdcMDTraderOfferFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "TraderID", "ParticipantID", "Password", "InstallID", "OrderLocalID", "TraderConnectStatus", "ConnectRequestDate", "ConnectRequestTime", "LastReportDate", "LastReportTime", "ConnectDate", "ConnectTime", "StartDate", "StartTime", "TradingDay", "BrokerID", "MaxTradeID", "MaxOrderMessageReference", "OrderCancelAlg", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcMDTraderOfferField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_ExchangeID_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcMDTraderOfferField_TraderID = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_TraderID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcMDTraderOfferField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_ParticipantID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcMDTraderOfferField_Password = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcMDTraderOfferField_InstallID = 0;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcMDTraderOfferField_OrderLocalID = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_OrderLocalID_length = 0;

    /// 交易所交易员连接状态
    /// typedef char TThostFtdcTraderConnectStatusType
    char CThostFtdcMDTraderOfferField_TraderConnectStatus = 0;

    /// 发出连接请求的日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMDTraderOfferField_ConnectRequestDate = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_ConnectRequestDate_length = 0;

    /// 发出连接请求的时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcMDTraderOfferField_ConnectRequestTime = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_ConnectRequestTime_length = 0;

    /// 上次报告日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMDTraderOfferField_LastReportDate = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_LastReportDate_length = 0;

    /// 上次报告时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcMDTraderOfferField_LastReportTime = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_LastReportTime_length = 0;

    /// 完成连接日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMDTraderOfferField_ConnectDate = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_ConnectDate_length = 0;

    /// 完成连接时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcMDTraderOfferField_ConnectTime = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_ConnectTime_length = 0;

    /// 启动日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMDTraderOfferField_StartDate = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_StartDate_length = 0;

    /// 启动时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcMDTraderOfferField_StartTime = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_StartTime_length = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcMDTraderOfferField_TradingDay = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcMDTraderOfferField_BrokerID = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_BrokerID_length = 0;

    /// 本席位最大成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    char *CThostFtdcMDTraderOfferField_MaxTradeID = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_MaxTradeID_length = 0;

    /// 本席位最大报单备拷
    /// typedef char TThostFtdcReturnCodeType[7]
    char *CThostFtdcMDTraderOfferField_MaxOrderMessageReference = NULL;
    Py_ssize_t CThostFtdcMDTraderOfferField_MaxOrderMessageReference_length = 0;

    /// 撤单时选择席位算法
    /// typedef char TThostFtdcOrderCancelAlgType
    char CThostFtdcMDTraderOfferField_OrderCancelAlg = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cy#y#y#y#y#y#y#y#y#y#y#y#c", (char **)kwlist
        , &CThostFtdcMDTraderOfferField_ExchangeID, &CThostFtdcMDTraderOfferField_ExchangeID_length
        , &CThostFtdcMDTraderOfferField_TraderID, &CThostFtdcMDTraderOfferField_TraderID_length
        , &CThostFtdcMDTraderOfferField_ParticipantID, &CThostFtdcMDTraderOfferField_ParticipantID_length
        , &CThostFtdcMDTraderOfferField_Password, &CThostFtdcMDTraderOfferField_Password_length
        , &CThostFtdcMDTraderOfferField_InstallID
        , &CThostFtdcMDTraderOfferField_OrderLocalID, &CThostFtdcMDTraderOfferField_OrderLocalID_length
        , &CThostFtdcMDTraderOfferField_TraderConnectStatus
        , &CThostFtdcMDTraderOfferField_ConnectRequestDate, &CThostFtdcMDTraderOfferField_ConnectRequestDate_length
        , &CThostFtdcMDTraderOfferField_ConnectRequestTime, &CThostFtdcMDTraderOfferField_ConnectRequestTime_length
        , &CThostFtdcMDTraderOfferField_LastReportDate, &CThostFtdcMDTraderOfferField_LastReportDate_length
        , &CThostFtdcMDTraderOfferField_LastReportTime, &CThostFtdcMDTraderOfferField_LastReportTime_length
        , &CThostFtdcMDTraderOfferField_ConnectDate, &CThostFtdcMDTraderOfferField_ConnectDate_length
        , &CThostFtdcMDTraderOfferField_ConnectTime, &CThostFtdcMDTraderOfferField_ConnectTime_length
        , &CThostFtdcMDTraderOfferField_StartDate, &CThostFtdcMDTraderOfferField_StartDate_length
        , &CThostFtdcMDTraderOfferField_StartTime, &CThostFtdcMDTraderOfferField_StartTime_length
        , &CThostFtdcMDTraderOfferField_TradingDay, &CThostFtdcMDTraderOfferField_TradingDay_length
        , &CThostFtdcMDTraderOfferField_BrokerID, &CThostFtdcMDTraderOfferField_BrokerID_length
        , &CThostFtdcMDTraderOfferField_MaxTradeID, &CThostFtdcMDTraderOfferField_MaxTradeID_length
        , &CThostFtdcMDTraderOfferField_MaxOrderMessageReference, &CThostFtdcMDTraderOfferField_MaxOrderMessageReference_length
        , &CThostFtdcMDTraderOfferField_OrderCancelAlg
    )) {
        return -1;
    }

    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcMDTraderOfferField_ExchangeID != NULL ) {
        if(CThostFtdcMDTraderOfferField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcMDTraderOfferField_ExchangeID, CThostFtdcMDTraderOfferField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcMDTraderOfferField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcMDTraderOfferField_ExchangeID = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcMDTraderOfferField_TraderID != NULL ) {
        if(CThostFtdcMDTraderOfferField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcMDTraderOfferField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcMDTraderOfferField_TraderID, CThostFtdcMDTraderOfferField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcMDTraderOfferField_TraderID, sizeof(data->TraderID));
        CThostFtdcMDTraderOfferField_TraderID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcMDTraderOfferField_ParticipantID != NULL ) {
        if(CThostFtdcMDTraderOfferField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcMDTraderOfferField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcMDTraderOfferField_ParticipantID, CThostFtdcMDTraderOfferField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcMDTraderOfferField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcMDTraderOfferField_ParticipantID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcMDTraderOfferField_Password != NULL ) {
        if(CThostFtdcMDTraderOfferField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcMDTraderOfferField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcMDTraderOfferField_Password, CThostFtdcMDTraderOfferField_Password_length);
        strncpy(data->Password, CThostFtdcMDTraderOfferField_Password, sizeof(data->Password));
        CThostFtdcMDTraderOfferField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcMDTraderOfferField_InstallID;

    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcMDTraderOfferField_OrderLocalID != NULL ) {
        if(CThostFtdcMDTraderOfferField_OrderLocalID_length >= (Py_ssize_t)sizeof(data->OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcMDTraderOfferField_OrderLocalID_length);
            return -1;
        }
        // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
        // memcpy(data->OrderLocalID, CThostFtdcMDTraderOfferField_OrderLocalID, CThostFtdcMDTraderOfferField_OrderLocalID_length);
        strncpy(data->OrderLocalID, CThostFtdcMDTraderOfferField_OrderLocalID, sizeof(data->OrderLocalID));
        CThostFtdcMDTraderOfferField_OrderLocalID = NULL;
    }

    /// 交易所交易员连接状态
    /// typedef char TThostFtdcTraderConnectStatusType
    data->TraderConnectStatus = CThostFtdcMDTraderOfferField_TraderConnectStatus;

    /// 发出连接请求的日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMDTraderOfferField_ConnectRequestDate != NULL ) {
        if(CThostFtdcMDTraderOfferField_ConnectRequestDate_length >= (Py_ssize_t)sizeof(data->ConnectRequestDate)) {
            PyErr_Format(PyExc_ValueError, "ConnectRequestDate too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_ConnectRequestDate_length);
            return -1;
        }
        // memset(data->ConnectRequestDate, 0, sizeof(data->ConnectRequestDate));
        // memcpy(data->ConnectRequestDate, CThostFtdcMDTraderOfferField_ConnectRequestDate, CThostFtdcMDTraderOfferField_ConnectRequestDate_length);
        strncpy(data->ConnectRequestDate, CThostFtdcMDTraderOfferField_ConnectRequestDate, sizeof(data->ConnectRequestDate));
        CThostFtdcMDTraderOfferField_ConnectRequestDate = NULL;
    }

    /// 发出连接请求的时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcMDTraderOfferField_ConnectRequestTime != NULL ) {
        if(CThostFtdcMDTraderOfferField_ConnectRequestTime_length >= (Py_ssize_t)sizeof(data->ConnectRequestTime)) {
            PyErr_Format(PyExc_ValueError, "ConnectRequestTime too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_ConnectRequestTime_length);
            return -1;
        }
        // memset(data->ConnectRequestTime, 0, sizeof(data->ConnectRequestTime));
        // memcpy(data->ConnectRequestTime, CThostFtdcMDTraderOfferField_ConnectRequestTime, CThostFtdcMDTraderOfferField_ConnectRequestTime_length);
        strncpy(data->ConnectRequestTime, CThostFtdcMDTraderOfferField_ConnectRequestTime, sizeof(data->ConnectRequestTime));
        CThostFtdcMDTraderOfferField_ConnectRequestTime = NULL;
    }

    /// 上次报告日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMDTraderOfferField_LastReportDate != NULL ) {
        if(CThostFtdcMDTraderOfferField_LastReportDate_length >= (Py_ssize_t)sizeof(data->LastReportDate)) {
            PyErr_Format(PyExc_ValueError, "LastReportDate too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_LastReportDate_length);
            return -1;
        }
        // memset(data->LastReportDate, 0, sizeof(data->LastReportDate));
        // memcpy(data->LastReportDate, CThostFtdcMDTraderOfferField_LastReportDate, CThostFtdcMDTraderOfferField_LastReportDate_length);
        strncpy(data->LastReportDate, CThostFtdcMDTraderOfferField_LastReportDate, sizeof(data->LastReportDate));
        CThostFtdcMDTraderOfferField_LastReportDate = NULL;
    }

    /// 上次报告时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcMDTraderOfferField_LastReportTime != NULL ) {
        if(CThostFtdcMDTraderOfferField_LastReportTime_length >= (Py_ssize_t)sizeof(data->LastReportTime)) {
            PyErr_Format(PyExc_ValueError, "LastReportTime too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_LastReportTime_length);
            return -1;
        }
        // memset(data->LastReportTime, 0, sizeof(data->LastReportTime));
        // memcpy(data->LastReportTime, CThostFtdcMDTraderOfferField_LastReportTime, CThostFtdcMDTraderOfferField_LastReportTime_length);
        strncpy(data->LastReportTime, CThostFtdcMDTraderOfferField_LastReportTime, sizeof(data->LastReportTime));
        CThostFtdcMDTraderOfferField_LastReportTime = NULL;
    }

    /// 完成连接日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMDTraderOfferField_ConnectDate != NULL ) {
        if(CThostFtdcMDTraderOfferField_ConnectDate_length >= (Py_ssize_t)sizeof(data->ConnectDate)) {
            PyErr_Format(PyExc_ValueError, "ConnectDate too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_ConnectDate_length);
            return -1;
        }
        // memset(data->ConnectDate, 0, sizeof(data->ConnectDate));
        // memcpy(data->ConnectDate, CThostFtdcMDTraderOfferField_ConnectDate, CThostFtdcMDTraderOfferField_ConnectDate_length);
        strncpy(data->ConnectDate, CThostFtdcMDTraderOfferField_ConnectDate, sizeof(data->ConnectDate));
        CThostFtdcMDTraderOfferField_ConnectDate = NULL;
    }

    /// 完成连接时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcMDTraderOfferField_ConnectTime != NULL ) {
        if(CThostFtdcMDTraderOfferField_ConnectTime_length >= (Py_ssize_t)sizeof(data->ConnectTime)) {
            PyErr_Format(PyExc_ValueError, "ConnectTime too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_ConnectTime_length);
            return -1;
        }
        // memset(data->ConnectTime, 0, sizeof(data->ConnectTime));
        // memcpy(data->ConnectTime, CThostFtdcMDTraderOfferField_ConnectTime, CThostFtdcMDTraderOfferField_ConnectTime_length);
        strncpy(data->ConnectTime, CThostFtdcMDTraderOfferField_ConnectTime, sizeof(data->ConnectTime));
        CThostFtdcMDTraderOfferField_ConnectTime = NULL;
    }

    /// 启动日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMDTraderOfferField_StartDate != NULL ) {
        if(CThostFtdcMDTraderOfferField_StartDate_length >= (Py_ssize_t)sizeof(data->StartDate)) {
            PyErr_Format(PyExc_ValueError, "StartDate too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_StartDate_length);
            return -1;
        }
        // memset(data->StartDate, 0, sizeof(data->StartDate));
        // memcpy(data->StartDate, CThostFtdcMDTraderOfferField_StartDate, CThostFtdcMDTraderOfferField_StartDate_length);
        strncpy(data->StartDate, CThostFtdcMDTraderOfferField_StartDate, sizeof(data->StartDate));
        CThostFtdcMDTraderOfferField_StartDate = NULL;
    }

    /// 启动时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcMDTraderOfferField_StartTime != NULL ) {
        if(CThostFtdcMDTraderOfferField_StartTime_length >= (Py_ssize_t)sizeof(data->StartTime)) {
            PyErr_Format(PyExc_ValueError, "StartTime too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_StartTime_length);
            return -1;
        }
        // memset(data->StartTime, 0, sizeof(data->StartTime));
        // memcpy(data->StartTime, CThostFtdcMDTraderOfferField_StartTime, CThostFtdcMDTraderOfferField_StartTime_length);
        strncpy(data->StartTime, CThostFtdcMDTraderOfferField_StartTime, sizeof(data->StartTime));
        CThostFtdcMDTraderOfferField_StartTime = NULL;
    }

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcMDTraderOfferField_TradingDay != NULL ) {
        if(CThostFtdcMDTraderOfferField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcMDTraderOfferField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcMDTraderOfferField_TradingDay, CThostFtdcMDTraderOfferField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcMDTraderOfferField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcMDTraderOfferField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcMDTraderOfferField_BrokerID != NULL ) {
        if(CThostFtdcMDTraderOfferField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcMDTraderOfferField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcMDTraderOfferField_BrokerID, CThostFtdcMDTraderOfferField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcMDTraderOfferField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcMDTraderOfferField_BrokerID = NULL;
    }

    /// 本席位最大成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    if( CThostFtdcMDTraderOfferField_MaxTradeID != NULL ) {
        if(CThostFtdcMDTraderOfferField_MaxTradeID_length >= (Py_ssize_t)sizeof(data->MaxTradeID)) {
            PyErr_Format(PyExc_ValueError, "MaxTradeID too long: length=%zd (max allowed is 20)", CThostFtdcMDTraderOfferField_MaxTradeID_length);
            return -1;
        }
        // memset(data->MaxTradeID, 0, sizeof(data->MaxTradeID));
        // memcpy(data->MaxTradeID, CThostFtdcMDTraderOfferField_MaxTradeID, CThostFtdcMDTraderOfferField_MaxTradeID_length);
        strncpy(data->MaxTradeID, CThostFtdcMDTraderOfferField_MaxTradeID, sizeof(data->MaxTradeID));
        CThostFtdcMDTraderOfferField_MaxTradeID = NULL;
    }

    /// 本席位最大报单备拷
    /// typedef char TThostFtdcReturnCodeType[7]
    if( CThostFtdcMDTraderOfferField_MaxOrderMessageReference != NULL ) {
        if(CThostFtdcMDTraderOfferField_MaxOrderMessageReference_length >= (Py_ssize_t)sizeof(data->MaxOrderMessageReference)) {
            PyErr_Format(PyExc_ValueError, "MaxOrderMessageReference too long: length=%zd (max allowed is 6)", CThostFtdcMDTraderOfferField_MaxOrderMessageReference_length);
            return -1;
        }
        // memset(data->MaxOrderMessageReference, 0, sizeof(data->MaxOrderMessageReference));
        // memcpy(data->MaxOrderMessageReference, CThostFtdcMDTraderOfferField_MaxOrderMessageReference, CThostFtdcMDTraderOfferField_MaxOrderMessageReference_length);
        strncpy(data->MaxOrderMessageReference, CThostFtdcMDTraderOfferField_MaxOrderMessageReference, sizeof(data->MaxOrderMessageReference));
        CThostFtdcMDTraderOfferField_MaxOrderMessageReference = NULL;
    }

    /// 撤单时选择席位算法
    /// typedef char TThostFtdcOrderCancelAlgType
    data->OrderCancelAlg = CThostFtdcMDTraderOfferField_OrderCancelAlg;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcMDTraderOfferFieldType_repr(PyObject *self) {

    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "InstallID", data->InstallID
        , "OrderLocalID", data->OrderLocalID//, (Py_ssize_t)sizeof(data->OrderLocalID)
        , "TraderConnectStatus", data->TraderConnectStatus
        , "ConnectRequestDate", data->ConnectRequestDate//, (Py_ssize_t)sizeof(data->ConnectRequestDate)
        , "ConnectRequestTime", data->ConnectRequestTime//, (Py_ssize_t)sizeof(data->ConnectRequestTime)
        , "LastReportDate", data->LastReportDate//, (Py_ssize_t)sizeof(data->LastReportDate)
        , "LastReportTime", data->LastReportTime//, (Py_ssize_t)sizeof(data->LastReportTime)
        , "ConnectDate", data->ConnectDate//, (Py_ssize_t)sizeof(data->ConnectDate)
        , "ConnectTime", data->ConnectTime//, (Py_ssize_t)sizeof(data->ConnectTime)
        , "StartDate", data->StartDate//, (Py_ssize_t)sizeof(data->StartDate)
        , "StartTime", data->StartTime//, (Py_ssize_t)sizeof(data->StartTime)
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "MaxTradeID", data->MaxTradeID//, (Py_ssize_t)sizeof(data->MaxTradeID)
        , "MaxOrderMessageReference", data->MaxOrderMessageReference//, (Py_ssize_t)sizeof(data->MaxOrderMessageReference)
        , "OrderCancelAlg", data->OrderCancelAlg
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMDTraderOfferField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMDTraderOfferField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报单编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_OrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderLocalID, (Py_ssize_t)sizeof(data->OrderLocalID));
    return PyBytes_FromString(data->OrderLocalID);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_OrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->OrderLocalID, 0, sizeof(data->OrderLocalID));
    // memcpy(data->OrderLocalID, buf, len);
    strncpy(data->OrderLocalID, buf, sizeof(data->OrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员连接状态
/// typedef char TThostFtdcTraderConnectStatusType
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_TraderConnectStatus(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TraderConnectStatus), 1);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_TraderConnectStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderConnectStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::TraderConnectStatus)) {
        PyErr_SetString(PyExc_ValueError, "TraderConnectStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    data->TraderConnectStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发出连接请求的日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_ConnectRequestDate(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ConnectRequestDate, (Py_ssize_t)sizeof(data->ConnectRequestDate));
    return PyBytes_FromString(data->ConnectRequestDate);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_ConnectRequestDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ConnectRequestDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::ConnectRequestDate)) {
        PyErr_SetString(PyExc_ValueError, "ConnectRequestDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->ConnectRequestDate, 0, sizeof(data->ConnectRequestDate));
    // memcpy(data->ConnectRequestDate, buf, len);
    strncpy(data->ConnectRequestDate, buf, sizeof(data->ConnectRequestDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 发出连接请求的时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_ConnectRequestTime(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ConnectRequestTime, (Py_ssize_t)sizeof(data->ConnectRequestTime));
    return PyBytes_FromString(data->ConnectRequestTime);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_ConnectRequestTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ConnectRequestTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::ConnectRequestTime)) {
        PyErr_SetString(PyExc_ValueError, "ConnectRequestTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->ConnectRequestTime, 0, sizeof(data->ConnectRequestTime));
    // memcpy(data->ConnectRequestTime, buf, len);
    strncpy(data->ConnectRequestTime, buf, sizeof(data->ConnectRequestTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上次报告日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_LastReportDate(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LastReportDate, (Py_ssize_t)sizeof(data->LastReportDate));
    return PyBytes_FromString(data->LastReportDate);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_LastReportDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastReportDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::LastReportDate)) {
        PyErr_SetString(PyExc_ValueError, "LastReportDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->LastReportDate, 0, sizeof(data->LastReportDate));
    // memcpy(data->LastReportDate, buf, len);
    strncpy(data->LastReportDate, buf, sizeof(data->LastReportDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上次报告时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_LastReportTime(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LastReportTime, (Py_ssize_t)sizeof(data->LastReportTime));
    return PyBytes_FromString(data->LastReportTime);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_LastReportTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastReportTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::LastReportTime)) {
        PyErr_SetString(PyExc_ValueError, "LastReportTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->LastReportTime, 0, sizeof(data->LastReportTime));
    // memcpy(data->LastReportTime, buf, len);
    strncpy(data->LastReportTime, buf, sizeof(data->LastReportTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 完成连接日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_ConnectDate(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ConnectDate, (Py_ssize_t)sizeof(data->ConnectDate));
    return PyBytes_FromString(data->ConnectDate);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_ConnectDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ConnectDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::ConnectDate)) {
        PyErr_SetString(PyExc_ValueError, "ConnectDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->ConnectDate, 0, sizeof(data->ConnectDate));
    // memcpy(data->ConnectDate, buf, len);
    strncpy(data->ConnectDate, buf, sizeof(data->ConnectDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 完成连接时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_ConnectTime(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ConnectTime, (Py_ssize_t)sizeof(data->ConnectTime));
    return PyBytes_FromString(data->ConnectTime);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_ConnectTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ConnectTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::ConnectTime)) {
        PyErr_SetString(PyExc_ValueError, "ConnectTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->ConnectTime, 0, sizeof(data->ConnectTime));
    // memcpy(data->ConnectTime, buf, len);
    strncpy(data->ConnectTime, buf, sizeof(data->ConnectTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 启动日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_StartDate(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StartDate, (Py_ssize_t)sizeof(data->StartDate));
    return PyBytes_FromString(data->StartDate);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_StartDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StartDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::StartDate)) {
        PyErr_SetString(PyExc_ValueError, "StartDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->StartDate, 0, sizeof(data->StartDate));
    // memcpy(data->StartDate, buf, len);
    strncpy(data->StartDate, buf, sizeof(data->StartDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 启动时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_StartTime(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StartTime, (Py_ssize_t)sizeof(data->StartTime));
    return PyBytes_FromString(data->StartTime);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_StartTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StartTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::StartTime)) {
        PyErr_SetString(PyExc_ValueError, "StartTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->StartTime, 0, sizeof(data->StartTime));
    // memcpy(data->StartTime, buf, len);
    strncpy(data->StartTime, buf, sizeof(data->StartTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本席位最大成交编号
/// typedef char TThostFtdcTradeIDType[21]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_MaxTradeID(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MaxTradeID, (Py_ssize_t)sizeof(data->MaxTradeID));
    return PyBytes_FromString(data->MaxTradeID);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_MaxTradeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MaxTradeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::MaxTradeID)) {
        PyErr_SetString(PyExc_ValueError, "MaxTradeID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->MaxTradeID, 0, sizeof(data->MaxTradeID));
    // memcpy(data->MaxTradeID, buf, len);
    strncpy(data->MaxTradeID, buf, sizeof(data->MaxTradeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本席位最大报单备拷
/// typedef char TThostFtdcReturnCodeType[7]
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_MaxOrderMessageReference(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MaxOrderMessageReference, (Py_ssize_t)sizeof(data->MaxOrderMessageReference));
    return PyBytes_FromString(data->MaxOrderMessageReference);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_MaxOrderMessageReference(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MaxOrderMessageReference Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::MaxOrderMessageReference)) {
        PyErr_SetString(PyExc_ValueError, "MaxOrderMessageReference must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    // memset(data->MaxOrderMessageReference, 0, sizeof(data->MaxOrderMessageReference));
    // memcpy(data->MaxOrderMessageReference, buf, len);
    strncpy(data->MaxOrderMessageReference, buf, sizeof(data->MaxOrderMessageReference));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤单时选择席位算法
/// typedef char TThostFtdcOrderCancelAlgType
static PyObject *PyCThostFtdcMDTraderOfferFieldType_get_OrderCancelAlg(PyObject *self, void *closure) {
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderCancelAlg), 1);
}

static int PyCThostFtdcMDTraderOfferFieldType_set_OrderCancelAlg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderCancelAlg Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcMDTraderOfferField::OrderCancelAlg)) {
        PyErr_SetString(PyExc_ValueError, "OrderCancelAlg must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcMDTraderOfferFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcMDTraderOfferFieldData>(self);
    CThostFtdcMDTraderOfferField *data = &(extra->data);
    data->OrderCancelAlg = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcMDTraderOfferFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcMDTraderOfferFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcMDTraderOfferFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_ExchangeID,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_TraderID,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_ParticipantID,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_Password,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 本地报单编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OrderLocalID",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_OrderLocalID,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_OrderLocalID,
    .doc = PyDoc_STR("本地报单编号"),
    },
    /// 交易所交易员连接状态
    /// typedef char TThostFtdcTraderConnectStatusType
    {
    .name = "TraderConnectStatus",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_TraderConnectStatus,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_TraderConnectStatus,
    .doc = PyDoc_STR("交易所交易员连接状态"),
    },
    /// 发出连接请求的日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ConnectRequestDate",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_ConnectRequestDate,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_ConnectRequestDate,
    .doc = PyDoc_STR("发出连接请求的日期"),
    },
    /// 发出连接请求的时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ConnectRequestTime",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_ConnectRequestTime,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_ConnectRequestTime,
    .doc = PyDoc_STR("发出连接请求的时间"),
    },
    /// 上次报告日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "LastReportDate",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_LastReportDate,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_LastReportDate,
    .doc = PyDoc_STR("上次报告日期"),
    },
    /// 上次报告时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "LastReportTime",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_LastReportTime,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_LastReportTime,
    .doc = PyDoc_STR("上次报告时间"),
    },
    /// 完成连接日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ConnectDate",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_ConnectDate,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_ConnectDate,
    .doc = PyDoc_STR("完成连接日期"),
    },
    /// 完成连接时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ConnectTime",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_ConnectTime,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_ConnectTime,
    .doc = PyDoc_STR("完成连接时间"),
    },
    /// 启动日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "StartDate",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_StartDate,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_StartDate,
    .doc = PyDoc_STR("启动日期"),
    },
    /// 启动时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "StartTime",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_StartTime,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_StartTime,
    .doc = PyDoc_STR("启动时间"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_TradingDay,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_BrokerID,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 本席位最大成交编号
    /// typedef char TThostFtdcTradeIDType[21]
    {
    .name = "MaxTradeID",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_MaxTradeID,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_MaxTradeID,
    .doc = PyDoc_STR("本席位最大成交编号"),
    },
    /// 本席位最大报单备拷
    /// typedef char TThostFtdcReturnCodeType[7]
    {
    .name = "MaxOrderMessageReference",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_MaxOrderMessageReference,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_MaxOrderMessageReference,
    .doc = PyDoc_STR("本席位最大报单备拷"),
    },
    /// 撤单时选择席位算法
    /// typedef char TThostFtdcOrderCancelAlgType
    {
    .name = "OrderCancelAlg",
    .get = PyCThostFtdcMDTraderOfferFieldType_get_OrderCancelAlg,
    .set = PyCThostFtdcMDTraderOfferFieldType_set_OrderCancelAlg,
    .doc = PyDoc_STR("撤单时选择席位算法"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcMDTraderOfferFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcMDTraderOfferField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所行情报盘机")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcMDTraderOfferFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcMDTraderOfferFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcMDTraderOfferFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcMDTraderOfferFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcMDTraderOfferFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcMDTraderOfferFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所行情报盘机")},
    {Py_tp_members, PyCThostFtdcMDTraderOfferFieldType_members},
    {Py_tp_getset, PyCThostFtdcMDTraderOfferFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcMDTraderOfferFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcMDTraderOfferFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcMDTraderOfferFieldType_spec = {
    .name = "PyCTP.CThostFtdcMDTraderOfferField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcMDTraderOfferFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcMDTraderOfferFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcMDTraderOfferFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcMDTraderOfferFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcMDTraderOfferFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcMDTraderOfferFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcMDTraderOfferFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcMDTraderOfferFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcMDTraderOfferField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMDTraderOfferField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}