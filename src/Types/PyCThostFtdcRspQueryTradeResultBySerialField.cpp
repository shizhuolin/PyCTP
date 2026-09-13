
#include "PyCThostFtdcRspQueryTradeResultBySerialField.h"

///查询指定流水号的交易结果响应

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "ErrorID", "ErrorMsg", "Reference", "RefrenceIssureType", "RefrenceIssure", "OriginReturnCode", "OriginDescrInfoForReturnCode", "BankAccount", "BankPassWord", "AccountID", "Password", "CurrencyID", "TradeAmount", "Digest", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcRspQueryTradeResultBySerialField_TradeCode = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcRspQueryTradeResultBySerialField_BankID = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcRspQueryTradeResultBySerialField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspQueryTradeResultBySerialField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspQueryTradeResultBySerialField_TradeDate = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcRspQueryTradeResultBySerialField_TradeTime = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspQueryTradeResultBySerialField_BankSerial = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspQueryTradeResultBySerialField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspQueryTradeResultBySerialField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcRspQueryTradeResultBySerialField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspQueryTradeResultBySerialField_SessionID = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcRspQueryTradeResultBySerialField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg_length = 0;

    /// 流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspQueryTradeResultBySerialField_Reference = 0;

    /// 本流水号发布者的机构类型
    /// typedef char TThostFtdcInstitutionTypeType
    char CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssureType = 0;

    /// 本流水号发布者机构编码
    /// typedef char TThostFtdcOrganCodeType[36]
    char *CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure_length = 0;

    /// 原始返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    char *CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode_length = 0;

    /// 原始返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    char *CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_length = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspQueryTradeResultBySerialField_BankAccount = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspQueryTradeResultBySerialField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcRspQueryTradeResultBySerialField_AccountID = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspQueryTradeResultBySerialField_Password = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_Password_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcRspQueryTradeResultBySerialField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_CurrencyID_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspQueryTradeResultBySerialField_TradeAmount = 0.0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcRspQueryTradeResultBySerialField_Digest = NULL;
    Py_ssize_t CThostFtdcRspQueryTradeResultBySerialField_Digest_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#icy#y#y#y#y#y#y#y#dy#", (char **)kwlist
        , &CThostFtdcRspQueryTradeResultBySerialField_TradeCode, &CThostFtdcRspQueryTradeResultBySerialField_TradeCode_length
        , &CThostFtdcRspQueryTradeResultBySerialField_BankID, &CThostFtdcRspQueryTradeResultBySerialField_BankID_length
        , &CThostFtdcRspQueryTradeResultBySerialField_BankBranchID, &CThostFtdcRspQueryTradeResultBySerialField_BankBranchID_length
        , &CThostFtdcRspQueryTradeResultBySerialField_BrokerID, &CThostFtdcRspQueryTradeResultBySerialField_BrokerID_length
        , &CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID, &CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID_length
        , &CThostFtdcRspQueryTradeResultBySerialField_TradeDate, &CThostFtdcRspQueryTradeResultBySerialField_TradeDate_length
        , &CThostFtdcRspQueryTradeResultBySerialField_TradeTime, &CThostFtdcRspQueryTradeResultBySerialField_TradeTime_length
        , &CThostFtdcRspQueryTradeResultBySerialField_BankSerial, &CThostFtdcRspQueryTradeResultBySerialField_BankSerial_length
        , &CThostFtdcRspQueryTradeResultBySerialField_TradingDay, &CThostFtdcRspQueryTradeResultBySerialField_TradingDay_length
        , &CThostFtdcRspQueryTradeResultBySerialField_PlateSerial
        , &CThostFtdcRspQueryTradeResultBySerialField_LastFragment
        , &CThostFtdcRspQueryTradeResultBySerialField_SessionID
        , &CThostFtdcRspQueryTradeResultBySerialField_ErrorID
        , &CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg, &CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg_length
        , &CThostFtdcRspQueryTradeResultBySerialField_Reference
        , &CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssureType
        , &CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure, &CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure_length
        , &CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode, &CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode_length
        , &CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode, &CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_length
        , &CThostFtdcRspQueryTradeResultBySerialField_BankAccount, &CThostFtdcRspQueryTradeResultBySerialField_BankAccount_length
        , &CThostFtdcRspQueryTradeResultBySerialField_BankPassWord, &CThostFtdcRspQueryTradeResultBySerialField_BankPassWord_length
        , &CThostFtdcRspQueryTradeResultBySerialField_AccountID, &CThostFtdcRspQueryTradeResultBySerialField_AccountID_length
        , &CThostFtdcRspQueryTradeResultBySerialField_Password, &CThostFtdcRspQueryTradeResultBySerialField_Password_length
        , &CThostFtdcRspQueryTradeResultBySerialField_CurrencyID, &CThostFtdcRspQueryTradeResultBySerialField_CurrencyID_length
        , &CThostFtdcRspQueryTradeResultBySerialField_TradeAmount
        , &CThostFtdcRspQueryTradeResultBySerialField_Digest, &CThostFtdcRspQueryTradeResultBySerialField_Digest_length
    )) {
        return -1;
    }

    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcRspQueryTradeResultBySerialField_TradeCode != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcRspQueryTradeResultBySerialField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcRspQueryTradeResultBySerialField_TradeCode, CThostFtdcRspQueryTradeResultBySerialField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcRspQueryTradeResultBySerialField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcRspQueryTradeResultBySerialField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcRspQueryTradeResultBySerialField_BankID != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcRspQueryTradeResultBySerialField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcRspQueryTradeResultBySerialField_BankID, CThostFtdcRspQueryTradeResultBySerialField_BankID_length);
        strncpy(data->BankID, CThostFtdcRspQueryTradeResultBySerialField_BankID, sizeof(data->BankID));
        CThostFtdcRspQueryTradeResultBySerialField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcRspQueryTradeResultBySerialField_BankBranchID != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcRspQueryTradeResultBySerialField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcRspQueryTradeResultBySerialField_BankBranchID, CThostFtdcRspQueryTradeResultBySerialField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcRspQueryTradeResultBySerialField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcRspQueryTradeResultBySerialField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspQueryTradeResultBySerialField_BrokerID != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspQueryTradeResultBySerialField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspQueryTradeResultBySerialField_BrokerID, CThostFtdcRspQueryTradeResultBySerialField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspQueryTradeResultBySerialField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspQueryTradeResultBySerialField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID, CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcRspQueryTradeResultBySerialField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspQueryTradeResultBySerialField_TradeDate != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryTradeResultBySerialField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcRspQueryTradeResultBySerialField_TradeDate, CThostFtdcRspQueryTradeResultBySerialField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcRspQueryTradeResultBySerialField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcRspQueryTradeResultBySerialField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcRspQueryTradeResultBySerialField_TradeTime != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryTradeResultBySerialField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcRspQueryTradeResultBySerialField_TradeTime, CThostFtdcRspQueryTradeResultBySerialField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcRspQueryTradeResultBySerialField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcRspQueryTradeResultBySerialField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspQueryTradeResultBySerialField_BankSerial != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspQueryTradeResultBySerialField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcRspQueryTradeResultBySerialField_BankSerial, CThostFtdcRspQueryTradeResultBySerialField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcRspQueryTradeResultBySerialField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcRspQueryTradeResultBySerialField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspQueryTradeResultBySerialField_TradingDay != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryTradeResultBySerialField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspQueryTradeResultBySerialField_TradingDay, CThostFtdcRspQueryTradeResultBySerialField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspQueryTradeResultBySerialField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspQueryTradeResultBySerialField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcRspQueryTradeResultBySerialField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcRspQueryTradeResultBySerialField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspQueryTradeResultBySerialField_SessionID;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcRspQueryTradeResultBySerialField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg, CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcRspQueryTradeResultBySerialField_ErrorMsg = NULL;
    }

    /// 流水号
    /// typedef int TThostFtdcSerialType
    data->Reference = CThostFtdcRspQueryTradeResultBySerialField_Reference;

    /// 本流水号发布者的机构类型
    /// typedef char TThostFtdcInstitutionTypeType
    data->RefrenceIssureType = CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssureType;

    /// 本流水号发布者机构编码
    /// typedef char TThostFtdcOrganCodeType[36]
    if( CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure_length >= (Py_ssize_t)sizeof(data->RefrenceIssure)) {
            PyErr_Format(PyExc_ValueError, "RefrenceIssure too long: length=%zd (max allowed is 35)", CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure_length);
            return -1;
        }
        // memset(data->RefrenceIssure, 0, sizeof(data->RefrenceIssure));
        // memcpy(data->RefrenceIssure, CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure, CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure_length);
        strncpy(data->RefrenceIssure, CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure, sizeof(data->RefrenceIssure));
        CThostFtdcRspQueryTradeResultBySerialField_RefrenceIssure = NULL;
    }

    /// 原始返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    if( CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode_length >= (Py_ssize_t)sizeof(data->OriginReturnCode)) {
            PyErr_Format(PyExc_ValueError, "OriginReturnCode too long: length=%zd (max allowed is 6)", CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode_length);
            return -1;
        }
        // memset(data->OriginReturnCode, 0, sizeof(data->OriginReturnCode));
        // memcpy(data->OriginReturnCode, CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode, CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode_length);
        strncpy(data->OriginReturnCode, CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode, sizeof(data->OriginReturnCode));
        CThostFtdcRspQueryTradeResultBySerialField_OriginReturnCode = NULL;
    }

    /// 原始返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    if( CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_length >= (Py_ssize_t)sizeof(data->OriginDescrInfoForReturnCode)) {
            PyErr_Format(PyExc_ValueError, "OriginDescrInfoForReturnCode too long: length=%zd (max allowed is 128)", CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_length);
            return -1;
        }
        // memset(data->OriginDescrInfoForReturnCode, 0, sizeof(data->OriginDescrInfoForReturnCode));
        // memcpy(data->OriginDescrInfoForReturnCode, CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode, CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_length);
        strncpy(data->OriginDescrInfoForReturnCode, CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode, sizeof(data->OriginDescrInfoForReturnCode));
        CThostFtdcRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode = NULL;
    }

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspQueryTradeResultBySerialField_BankAccount != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryTradeResultBySerialField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcRspQueryTradeResultBySerialField_BankAccount, CThostFtdcRspQueryTradeResultBySerialField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcRspQueryTradeResultBySerialField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcRspQueryTradeResultBySerialField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspQueryTradeResultBySerialField_BankPassWord != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryTradeResultBySerialField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcRspQueryTradeResultBySerialField_BankPassWord, CThostFtdcRspQueryTradeResultBySerialField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcRspQueryTradeResultBySerialField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcRspQueryTradeResultBySerialField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcRspQueryTradeResultBySerialField_AccountID != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcRspQueryTradeResultBySerialField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcRspQueryTradeResultBySerialField_AccountID, CThostFtdcRspQueryTradeResultBySerialField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcRspQueryTradeResultBySerialField_AccountID, sizeof(data->AccountID));
        CThostFtdcRspQueryTradeResultBySerialField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspQueryTradeResultBySerialField_Password != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryTradeResultBySerialField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcRspQueryTradeResultBySerialField_Password, CThostFtdcRspQueryTradeResultBySerialField_Password_length);
        strncpy(data->Password, CThostFtdcRspQueryTradeResultBySerialField_Password, sizeof(data->Password));
        CThostFtdcRspQueryTradeResultBySerialField_Password = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcRspQueryTradeResultBySerialField_CurrencyID != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcRspQueryTradeResultBySerialField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcRspQueryTradeResultBySerialField_CurrencyID, CThostFtdcRspQueryTradeResultBySerialField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcRspQueryTradeResultBySerialField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcRspQueryTradeResultBySerialField_CurrencyID = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    data->TradeAmount = CThostFtdcRspQueryTradeResultBySerialField_TradeAmount;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcRspQueryTradeResultBySerialField_Digest != NULL ) {
        if(CThostFtdcRspQueryTradeResultBySerialField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcRspQueryTradeResultBySerialField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcRspQueryTradeResultBySerialField_Digest, CThostFtdcRspQueryTradeResultBySerialField_Digest_length);
        strncpy(data->Digest, CThostFtdcRspQueryTradeResultBySerialField_Digest, sizeof(data->Digest));
        CThostFtdcRspQueryTradeResultBySerialField_Digest = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_repr(PyObject *self) {

    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:i,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:d,s:y}"
        , "TradeCode", data->TradeCode//, (Py_ssize_t)sizeof(data->TradeCode)
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBranchID", data->BankBranchID//, (Py_ssize_t)sizeof(data->BankBranchID)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BrokerBranchID", data->BrokerBranchID//, (Py_ssize_t)sizeof(data->BrokerBranchID)
        , "TradeDate", data->TradeDate//, (Py_ssize_t)sizeof(data->TradeDate)
        , "TradeTime", data->TradeTime//, (Py_ssize_t)sizeof(data->TradeTime)
        , "BankSerial", data->BankSerial//, (Py_ssize_t)sizeof(data->BankSerial)
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "PlateSerial", data->PlateSerial
        , "LastFragment", data->LastFragment
        , "SessionID", data->SessionID
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "Reference", data->Reference
        , "RefrenceIssureType", data->RefrenceIssureType
        , "RefrenceIssure", data->RefrenceIssure//, (Py_ssize_t)sizeof(data->RefrenceIssure)
        , "OriginReturnCode", data->OriginReturnCode//, (Py_ssize_t)sizeof(data->OriginReturnCode)
        , "OriginDescrInfoForReturnCode", data->OriginDescrInfoForReturnCode//, (Py_ssize_t)sizeof(data->OriginDescrInfoForReturnCode)
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "BankPassWord", data->BankPassWord//, (Py_ssize_t)sizeof(data->BankPassWord)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "TradeAmount", data->TradeAmount
        , "Digest", data->Digest//, (Py_ssize_t)sizeof(data->Digest)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryTradeResultBySerialField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryTradeResultBySerialField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本流水号发布者的机构类型
/// typedef char TThostFtdcInstitutionTypeType
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_RefrenceIssureType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->RefrenceIssureType), 1);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_RefrenceIssureType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RefrenceIssureType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::RefrenceIssureType)) {
        PyErr_SetString(PyExc_ValueError, "RefrenceIssureType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    data->RefrenceIssureType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本流水号发布者机构编码
/// typedef char TThostFtdcOrganCodeType[36]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_RefrenceIssure(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RefrenceIssure, (Py_ssize_t)sizeof(data->RefrenceIssure));
    return PyBytes_FromString(data->RefrenceIssure);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_RefrenceIssure(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RefrenceIssure Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::RefrenceIssure)) {
        PyErr_SetString(PyExc_ValueError, "RefrenceIssure must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->RefrenceIssure, 0, sizeof(data->RefrenceIssure));
    // memcpy(data->RefrenceIssure, buf, len);
    strncpy(data->RefrenceIssure, buf, sizeof(data->RefrenceIssure));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 原始返回代码
/// typedef char TThostFtdcReturnCodeType[7]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_OriginReturnCode(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OriginReturnCode, (Py_ssize_t)sizeof(data->OriginReturnCode));
    return PyBytes_FromString(data->OriginReturnCode);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_OriginReturnCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OriginReturnCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::OriginReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "OriginReturnCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->OriginReturnCode, 0, sizeof(data->OriginReturnCode));
    // memcpy(data->OriginReturnCode, buf, len);
    strncpy(data->OriginReturnCode, buf, sizeof(data->OriginReturnCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 原始返回码描述
/// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_OriginDescrInfoForReturnCode(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OriginDescrInfoForReturnCode, (Py_ssize_t)sizeof(data->OriginDescrInfoForReturnCode));
    return PyBytes_FromString(data->OriginDescrInfoForReturnCode);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_OriginDescrInfoForReturnCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OriginDescrInfoForReturnCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::OriginDescrInfoForReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "OriginDescrInfoForReturnCode must be less than 128 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->OriginDescrInfoForReturnCode, 0, sizeof(data->OriginDescrInfoForReturnCode));
    // memcpy(data->OriginDescrInfoForReturnCode, buf, len);
    strncpy(data->OriginDescrInfoForReturnCode, buf, sizeof(data->OriginDescrInfoForReturnCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryTradeResultBySerialField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryTradeResultBySerialFieldData>(self);
    CThostFtdcRspQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspQueryTradeResultBySerialFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryTradeResultBySerialFieldData, data.PlateSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银期平台消息流水号")
    },
    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryTradeResultBySerialFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话号")
    },
    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    {
        .name = "ErrorID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryTradeResultBySerialFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    /// 流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "Reference",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryTradeResultBySerialFieldData, data.Reference),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("流水号")
    },
    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    {
        .name = "TradeAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryTradeResultBySerialFieldData, data.TradeAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("转帐金额")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspQueryTradeResultBySerialFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_TradeCode,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankID,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankBranchID,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BrokerID,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_TradeDate,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_TradeTime,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankSerial,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_TradingDay,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_LastFragment,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_ErrorMsg,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 本流水号发布者的机构类型
    /// typedef char TThostFtdcInstitutionTypeType
    {
    .name = "RefrenceIssureType",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_RefrenceIssureType,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_RefrenceIssureType,
    .doc = PyDoc_STR("本流水号发布者的机构类型"),
    },
    /// 本流水号发布者机构编码
    /// typedef char TThostFtdcOrganCodeType[36]
    {
    .name = "RefrenceIssure",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_RefrenceIssure,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_RefrenceIssure,
    .doc = PyDoc_STR("本流水号发布者机构编码"),
    },
    /// 原始返回代码
    /// typedef char TThostFtdcReturnCodeType[7]
    {
    .name = "OriginReturnCode",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_OriginReturnCode,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_OriginReturnCode,
    .doc = PyDoc_STR("原始返回代码"),
    },
    /// 原始返回码描述
    /// typedef char TThostFtdcDescrInfoForReturnCodeType[129]
    {
    .name = "OriginDescrInfoForReturnCode",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_OriginDescrInfoForReturnCode,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_OriginDescrInfoForReturnCode,
    .doc = PyDoc_STR("原始返回码描述"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankAccount,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_BankPassWord,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_AccountID,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_Password,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_CurrencyID,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcRspQueryTradeResultBySerialFieldType_get_Digest,
    .set = PyCThostFtdcRspQueryTradeResultBySerialFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspQueryTradeResultBySerialFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspQueryTradeResultBySerialField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询指定流水号的交易结果响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspQueryTradeResultBySerialFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspQueryTradeResultBySerialFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspQueryTradeResultBySerialFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspQueryTradeResultBySerialFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspQueryTradeResultBySerialFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspQueryTradeResultBySerialFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询指定流水号的交易结果响应")},
    {Py_tp_members, PyCThostFtdcRspQueryTradeResultBySerialFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspQueryTradeResultBySerialFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspQueryTradeResultBySerialFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspQueryTradeResultBySerialFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspQueryTradeResultBySerialFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspQueryTradeResultBySerialField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspQueryTradeResultBySerialFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspQueryTradeResultBySerialFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspQueryTradeResultBySerialFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspQueryTradeResultBySerialFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspQueryTradeResultBySerialFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspQueryTradeResultBySerialFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspQueryTradeResultBySerialFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspQueryTradeResultBySerialField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspQueryTradeResultBySerialField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}