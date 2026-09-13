
#include "PyCThostFtdcTransferSerialField.h"

///银期转账交易流水表

static int PyCThostFtdcTransferSerialFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "PlateSerial", "TradeDate", "TradingDay", "TradeTime", "TradeCode", "SessionID", "BankID", "BankBranchID", "BankAccType", "BankAccount", "BankSerial", "BrokerID", "BrokerBranchID", "FutureAccType", "AccountID", "InvestorID", "FutureSerial", "IdCardType", "IdentifiedCardNo", "CurrencyID", "TradeAmount", "CustFee", "BrokerFee", "AvailabilityFlag", "OperatorCode", "BankNewAccount", "ErrorID", "ErrorMsg", NULL };


    /// 平台流水号
    /// typedef int TThostFtdcPlateSerialType
    int CThostFtdcTransferSerialField_PlateSerial = 0;

    /// 交易发起方日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcTransferSerialField_TradeDate = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_TradeDate_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcTransferSerialField_TradingDay = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_TradingDay_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcTransferSerialField_TradeTime = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_TradeTime_length = 0;

    /// 交易代码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcTransferSerialField_TradeCode = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_TradeCode_length = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcTransferSerialField_SessionID = 0;

    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcTransferSerialField_BankID = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_BankID_length = 0;

    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcTransferSerialField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_BankBranchID_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcTransferSerialField_BankAccType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcTransferSerialField_BankAccount = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_BankAccount_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcTransferSerialField_BankSerial = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_BankSerial_length = 0;

    /// 期货公司编码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcTransferSerialField_BrokerID = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcTransferSerialField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_BrokerBranchID_length = 0;

    /// 期货公司帐号类型
    /// typedef char TThostFtdcFutureAccTypeType
    char CThostFtdcTransferSerialField_FutureAccType = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcTransferSerialField_AccountID = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_AccountID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcTransferSerialField_InvestorID = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_InvestorID_length = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcTransferSerialField_FutureSerial = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcTransferSerialField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcTransferSerialField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_IdentifiedCardNo_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcTransferSerialField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_CurrencyID_length = 0;

    /// 交易金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcTransferSerialField_TradeAmount = 0.0;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    double CThostFtdcTransferSerialField_CustFee = 0.0;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    double CThostFtdcTransferSerialField_BrokerFee = 0.0;

    /// 有效标志
    /// typedef char TThostFtdcAvailabilityFlagType
    char CThostFtdcTransferSerialField_AvailabilityFlag = 0;

    /// 操作员
    /// typedef char TThostFtdcOperatorCodeType[17]
    char *CThostFtdcTransferSerialField_OperatorCode = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_OperatorCode_length = 0;

    /// 新银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcTransferSerialField_BankNewAccount = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_BankNewAccount_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcTransferSerialField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcTransferSerialField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcTransferSerialField_ErrorMsg_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#y#y#iy#y#cy#y#y#y#cy#y#icy#y#dddcy#y#iy#", (char **)kwlist
        , &CThostFtdcTransferSerialField_PlateSerial
        , &CThostFtdcTransferSerialField_TradeDate, &CThostFtdcTransferSerialField_TradeDate_length
        , &CThostFtdcTransferSerialField_TradingDay, &CThostFtdcTransferSerialField_TradingDay_length
        , &CThostFtdcTransferSerialField_TradeTime, &CThostFtdcTransferSerialField_TradeTime_length
        , &CThostFtdcTransferSerialField_TradeCode, &CThostFtdcTransferSerialField_TradeCode_length
        , &CThostFtdcTransferSerialField_SessionID
        , &CThostFtdcTransferSerialField_BankID, &CThostFtdcTransferSerialField_BankID_length
        , &CThostFtdcTransferSerialField_BankBranchID, &CThostFtdcTransferSerialField_BankBranchID_length
        , &CThostFtdcTransferSerialField_BankAccType
        , &CThostFtdcTransferSerialField_BankAccount, &CThostFtdcTransferSerialField_BankAccount_length
        , &CThostFtdcTransferSerialField_BankSerial, &CThostFtdcTransferSerialField_BankSerial_length
        , &CThostFtdcTransferSerialField_BrokerID, &CThostFtdcTransferSerialField_BrokerID_length
        , &CThostFtdcTransferSerialField_BrokerBranchID, &CThostFtdcTransferSerialField_BrokerBranchID_length
        , &CThostFtdcTransferSerialField_FutureAccType
        , &CThostFtdcTransferSerialField_AccountID, &CThostFtdcTransferSerialField_AccountID_length
        , &CThostFtdcTransferSerialField_InvestorID, &CThostFtdcTransferSerialField_InvestorID_length
        , &CThostFtdcTransferSerialField_FutureSerial
        , &CThostFtdcTransferSerialField_IdCardType
        , &CThostFtdcTransferSerialField_IdentifiedCardNo, &CThostFtdcTransferSerialField_IdentifiedCardNo_length
        , &CThostFtdcTransferSerialField_CurrencyID, &CThostFtdcTransferSerialField_CurrencyID_length
        , &CThostFtdcTransferSerialField_TradeAmount
        , &CThostFtdcTransferSerialField_CustFee
        , &CThostFtdcTransferSerialField_BrokerFee
        , &CThostFtdcTransferSerialField_AvailabilityFlag
        , &CThostFtdcTransferSerialField_OperatorCode, &CThostFtdcTransferSerialField_OperatorCode_length
        , &CThostFtdcTransferSerialField_BankNewAccount, &CThostFtdcTransferSerialField_BankNewAccount_length
        , &CThostFtdcTransferSerialField_ErrorID
        , &CThostFtdcTransferSerialField_ErrorMsg, &CThostFtdcTransferSerialField_ErrorMsg_length
    )) {
        return -1;
    }

    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);


    /// 平台流水号
    /// typedef int TThostFtdcPlateSerialType
    data->PlateSerial = CThostFtdcTransferSerialField_PlateSerial;

    /// 交易发起方日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcTransferSerialField_TradeDate != NULL ) {
        if(CThostFtdcTransferSerialField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcTransferSerialField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcTransferSerialField_TradeDate, CThostFtdcTransferSerialField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcTransferSerialField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcTransferSerialField_TradeDate = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcTransferSerialField_TradingDay != NULL ) {
        if(CThostFtdcTransferSerialField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcTransferSerialField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcTransferSerialField_TradingDay, CThostFtdcTransferSerialField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcTransferSerialField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcTransferSerialField_TradingDay = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcTransferSerialField_TradeTime != NULL ) {
        if(CThostFtdcTransferSerialField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcTransferSerialField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcTransferSerialField_TradeTime, CThostFtdcTransferSerialField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcTransferSerialField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcTransferSerialField_TradeTime = NULL;
    }

    /// 交易代码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcTransferSerialField_TradeCode != NULL ) {
        if(CThostFtdcTransferSerialField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcTransferSerialField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcTransferSerialField_TradeCode, CThostFtdcTransferSerialField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcTransferSerialField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcTransferSerialField_TradeCode = NULL;
    }

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcTransferSerialField_SessionID;

    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcTransferSerialField_BankID != NULL ) {
        if(CThostFtdcTransferSerialField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcTransferSerialField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcTransferSerialField_BankID, CThostFtdcTransferSerialField_BankID_length);
        strncpy(data->BankID, CThostFtdcTransferSerialField_BankID, sizeof(data->BankID));
        CThostFtdcTransferSerialField_BankID = NULL;
    }

    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcTransferSerialField_BankBranchID != NULL ) {
        if(CThostFtdcTransferSerialField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcTransferSerialField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcTransferSerialField_BankBranchID, CThostFtdcTransferSerialField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcTransferSerialField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcTransferSerialField_BankBranchID = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcTransferSerialField_BankAccType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcTransferSerialField_BankAccount != NULL ) {
        if(CThostFtdcTransferSerialField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcTransferSerialField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcTransferSerialField_BankAccount, CThostFtdcTransferSerialField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcTransferSerialField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcTransferSerialField_BankAccount = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcTransferSerialField_BankSerial != NULL ) {
        if(CThostFtdcTransferSerialField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcTransferSerialField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcTransferSerialField_BankSerial, CThostFtdcTransferSerialField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcTransferSerialField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcTransferSerialField_BankSerial = NULL;
    }

    /// 期货公司编码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcTransferSerialField_BrokerID != NULL ) {
        if(CThostFtdcTransferSerialField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcTransferSerialField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcTransferSerialField_BrokerID, CThostFtdcTransferSerialField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcTransferSerialField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcTransferSerialField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcTransferSerialField_BrokerBranchID != NULL ) {
        if(CThostFtdcTransferSerialField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcTransferSerialField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcTransferSerialField_BrokerBranchID, CThostFtdcTransferSerialField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcTransferSerialField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcTransferSerialField_BrokerBranchID = NULL;
    }

    /// 期货公司帐号类型
    /// typedef char TThostFtdcFutureAccTypeType
    data->FutureAccType = CThostFtdcTransferSerialField_FutureAccType;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcTransferSerialField_AccountID != NULL ) {
        if(CThostFtdcTransferSerialField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcTransferSerialField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcTransferSerialField_AccountID, CThostFtdcTransferSerialField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcTransferSerialField_AccountID, sizeof(data->AccountID));
        CThostFtdcTransferSerialField_AccountID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcTransferSerialField_InvestorID != NULL ) {
        if(CThostFtdcTransferSerialField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcTransferSerialField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcTransferSerialField_InvestorID, CThostFtdcTransferSerialField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcTransferSerialField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcTransferSerialField_InvestorID = NULL;
    }

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcTransferSerialField_FutureSerial;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcTransferSerialField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcTransferSerialField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcTransferSerialField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcTransferSerialField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcTransferSerialField_IdentifiedCardNo, CThostFtdcTransferSerialField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcTransferSerialField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcTransferSerialField_IdentifiedCardNo = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcTransferSerialField_CurrencyID != NULL ) {
        if(CThostFtdcTransferSerialField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcTransferSerialField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcTransferSerialField_CurrencyID, CThostFtdcTransferSerialField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcTransferSerialField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcTransferSerialField_CurrencyID = NULL;
    }

    /// 交易金额
    /// typedef double TThostFtdcTradeAmountType
    data->TradeAmount = CThostFtdcTransferSerialField_TradeAmount;

    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    data->CustFee = CThostFtdcTransferSerialField_CustFee;

    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    data->BrokerFee = CThostFtdcTransferSerialField_BrokerFee;

    /// 有效标志
    /// typedef char TThostFtdcAvailabilityFlagType
    data->AvailabilityFlag = CThostFtdcTransferSerialField_AvailabilityFlag;

    /// 操作员
    /// typedef char TThostFtdcOperatorCodeType[17]
    if( CThostFtdcTransferSerialField_OperatorCode != NULL ) {
        if(CThostFtdcTransferSerialField_OperatorCode_length >= (Py_ssize_t)sizeof(data->OperatorCode)) {
            PyErr_Format(PyExc_ValueError, "OperatorCode too long: length=%zd (max allowed is 16)", CThostFtdcTransferSerialField_OperatorCode_length);
            return -1;
        }
        // memset(data->OperatorCode, 0, sizeof(data->OperatorCode));
        // memcpy(data->OperatorCode, CThostFtdcTransferSerialField_OperatorCode, CThostFtdcTransferSerialField_OperatorCode_length);
        strncpy(data->OperatorCode, CThostFtdcTransferSerialField_OperatorCode, sizeof(data->OperatorCode));
        CThostFtdcTransferSerialField_OperatorCode = NULL;
    }

    /// 新银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcTransferSerialField_BankNewAccount != NULL ) {
        if(CThostFtdcTransferSerialField_BankNewAccount_length >= (Py_ssize_t)sizeof(data->BankNewAccount)) {
            PyErr_Format(PyExc_ValueError, "BankNewAccount too long: length=%zd (max allowed is 40)", CThostFtdcTransferSerialField_BankNewAccount_length);
            return -1;
        }
        // memset(data->BankNewAccount, 0, sizeof(data->BankNewAccount));
        // memcpy(data->BankNewAccount, CThostFtdcTransferSerialField_BankNewAccount, CThostFtdcTransferSerialField_BankNewAccount_length);
        strncpy(data->BankNewAccount, CThostFtdcTransferSerialField_BankNewAccount, sizeof(data->BankNewAccount));
        CThostFtdcTransferSerialField_BankNewAccount = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcTransferSerialField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcTransferSerialField_ErrorMsg != NULL ) {
        if(CThostFtdcTransferSerialField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcTransferSerialField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcTransferSerialField_ErrorMsg, CThostFtdcTransferSerialField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcTransferSerialField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcTransferSerialField_ErrorMsg = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcTransferSerialFieldType_repr(PyObject *self) {

    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:c,s:y,s:y,s:i,s:y}"
        , "PlateSerial", data->PlateSerial
        , "TradeDate", data->TradeDate//, (Py_ssize_t)sizeof(data->TradeDate)
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "TradeTime", data->TradeTime//, (Py_ssize_t)sizeof(data->TradeTime)
        , "TradeCode", data->TradeCode//, (Py_ssize_t)sizeof(data->TradeCode)
        , "SessionID", data->SessionID
        , "BankID", data->BankID//, (Py_ssize_t)sizeof(data->BankID)
        , "BankBranchID", data->BankBranchID//, (Py_ssize_t)sizeof(data->BankBranchID)
        , "BankAccType", data->BankAccType
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "BankSerial", data->BankSerial//, (Py_ssize_t)sizeof(data->BankSerial)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "BrokerBranchID", data->BrokerBranchID//, (Py_ssize_t)sizeof(data->BrokerBranchID)
        , "FutureAccType", data->FutureAccType
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "FutureSerial", data->FutureSerial
        , "IdCardType", data->IdCardType
        , "IdentifiedCardNo", data->IdentifiedCardNo//, (Py_ssize_t)sizeof(data->IdentifiedCardNo)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "TradeAmount", data->TradeAmount
        , "CustFee", data->CustFee
        , "BrokerFee", data->BrokerFee
        , "AvailabilityFlag", data->AvailabilityFlag
        , "OperatorCode", data->OperatorCode//, (Py_ssize_t)sizeof(data->OperatorCode)
        , "BankNewAccount", data->BankNewAccount//, (Py_ssize_t)sizeof(data->BankNewAccount)
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferSerialField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferSerialField repr");
        return NULL;
    }

    return repr;
}


/// 交易发起方日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcTransferSerialFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcTransferSerialFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcTransferSerialFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易代码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcTransferSerialFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行编码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcTransferSerialFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构编码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcTransferSerialFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcTransferSerialFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcTransferSerialFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcTransferSerialFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcTransferSerialFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司编码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcTransferSerialFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcTransferSerialFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司帐号类型
/// typedef char TThostFtdcFutureAccTypeType
static PyObject *PyCThostFtdcTransferSerialFieldType_get_FutureAccType(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->FutureAccType), 1);
}

static int PyCThostFtdcTransferSerialFieldType_set_FutureAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::FutureAccType)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    data->FutureAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcTransferSerialFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcTransferSerialFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcTransferSerialFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcTransferSerialFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcTransferSerialFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcTransferSerialFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效标志
/// typedef char TThostFtdcAvailabilityFlagType
static PyObject *PyCThostFtdcTransferSerialFieldType_get_AvailabilityFlag(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AvailabilityFlag), 1);
}

static int PyCThostFtdcTransferSerialFieldType_set_AvailabilityFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AvailabilityFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::AvailabilityFlag)) {
        PyErr_SetString(PyExc_ValueError, "AvailabilityFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    data->AvailabilityFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作员
/// typedef char TThostFtdcOperatorCodeType[17]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_OperatorCode(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperatorCode, (Py_ssize_t)sizeof(data->OperatorCode));
    return PyBytes_FromString(data->OperatorCode);
}

static int PyCThostFtdcTransferSerialFieldType_set_OperatorCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperatorCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::OperatorCode)) {
        PyErr_SetString(PyExc_ValueError, "OperatorCode must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->OperatorCode, 0, sizeof(data->OperatorCode));
    // memcpy(data->OperatorCode, buf, len);
    strncpy(data->OperatorCode, buf, sizeof(data->OperatorCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 新银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_BankNewAccount(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankNewAccount, (Py_ssize_t)sizeof(data->BankNewAccount));
    return PyBytes_FromString(data->BankNewAccount);
}

static int PyCThostFtdcTransferSerialFieldType_set_BankNewAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankNewAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::BankNewAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankNewAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->BankNewAccount, 0, sizeof(data->BankNewAccount));
    // memcpy(data->BankNewAccount, buf, len);
    strncpy(data->BankNewAccount, buf, sizeof(data->BankNewAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcTransferSerialFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcTransferSerialFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcTransferSerialField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcTransferSerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcTransferSerialFieldData>(self);
    CThostFtdcTransferSerialField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcTransferSerialFieldType_members[] = {
    /// 平台流水号
    /// typedef int TThostFtdcPlateSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferSerialFieldData, data.PlateSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("平台流水号")
    },
    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferSerialFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    {
        .name = "FutureSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferSerialFieldData, data.FutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货公司流水号")
    },
    /// 交易金额
    /// typedef double TThostFtdcTradeAmountType
    {
        .name = "TradeAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferSerialFieldData, data.TradeAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易金额")
    },
    /// 应收客户费用
    /// typedef double TThostFtdcCustFeeType
    {
        .name = "CustFee",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferSerialFieldData, data.CustFee),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("应收客户费用")
    },
    /// 应收期货公司费用
    /// typedef double TThostFtdcFutureFeeType
    {
        .name = "BrokerFee",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcTransferSerialFieldData, data.BrokerFee),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("应收期货公司费用")
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
        .offset = offsetof(PyCThostFtdcTransferSerialFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcTransferSerialFieldType_getsets[] = {
    /// 交易发起方日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcTransferSerialFieldType_get_TradeDate,
    .set = PyCThostFtdcTransferSerialFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易发起方日期"),
    },
    /// 交易日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcTransferSerialFieldType_get_TradingDay,
    .set = PyCThostFtdcTransferSerialFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcTransferSerialFieldType_get_TradeTime,
    .set = PyCThostFtdcTransferSerialFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 交易代码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcTransferSerialFieldType_get_TradeCode,
    .set = PyCThostFtdcTransferSerialFieldType_set_TradeCode,
    .doc = PyDoc_STR("交易代码"),
    },
    /// 银行编码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcTransferSerialFieldType_get_BankID,
    .set = PyCThostFtdcTransferSerialFieldType_set_BankID,
    .doc = PyDoc_STR("银行编码"),
    },
    /// 银行分支机构编码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcTransferSerialFieldType_get_BankBranchID,
    .set = PyCThostFtdcTransferSerialFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构编码"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcTransferSerialFieldType_get_BankAccType,
    .set = PyCThostFtdcTransferSerialFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcTransferSerialFieldType_get_BankAccount,
    .set = PyCThostFtdcTransferSerialFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcTransferSerialFieldType_get_BankSerial,
    .set = PyCThostFtdcTransferSerialFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 期货公司编码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcTransferSerialFieldType_get_BrokerID,
    .set = PyCThostFtdcTransferSerialFieldType_set_BrokerID,
    .doc = PyDoc_STR("期货公司编码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcTransferSerialFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcTransferSerialFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 期货公司帐号类型
    /// typedef char TThostFtdcFutureAccTypeType
    {
    .name = "FutureAccType",
    .get = PyCThostFtdcTransferSerialFieldType_get_FutureAccType,
    .set = PyCThostFtdcTransferSerialFieldType_set_FutureAccType,
    .doc = PyDoc_STR("期货公司帐号类型"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcTransferSerialFieldType_get_AccountID,
    .set = PyCThostFtdcTransferSerialFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcTransferSerialFieldType_get_InvestorID,
    .set = PyCThostFtdcTransferSerialFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcTransferSerialFieldType_get_IdCardType,
    .set = PyCThostFtdcTransferSerialFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcTransferSerialFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcTransferSerialFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcTransferSerialFieldType_get_CurrencyID,
    .set = PyCThostFtdcTransferSerialFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 有效标志
    /// typedef char TThostFtdcAvailabilityFlagType
    {
    .name = "AvailabilityFlag",
    .get = PyCThostFtdcTransferSerialFieldType_get_AvailabilityFlag,
    .set = PyCThostFtdcTransferSerialFieldType_set_AvailabilityFlag,
    .doc = PyDoc_STR("有效标志"),
    },
    /// 操作员
    /// typedef char TThostFtdcOperatorCodeType[17]
    {
    .name = "OperatorCode",
    .get = PyCThostFtdcTransferSerialFieldType_get_OperatorCode,
    .set = PyCThostFtdcTransferSerialFieldType_set_OperatorCode,
    .doc = PyDoc_STR("操作员"),
    },
    /// 新银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankNewAccount",
    .get = PyCThostFtdcTransferSerialFieldType_get_BankNewAccount,
    .set = PyCThostFtdcTransferSerialFieldType_set_BankNewAccount,
    .doc = PyDoc_STR("新银行帐号"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcTransferSerialFieldType_get_ErrorMsg,
    .set = PyCThostFtdcTransferSerialFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcTransferSerialFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcTransferSerialField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银期转账交易流水表")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcTransferSerialFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcTransferSerialFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcTransferSerialFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcTransferSerialFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcTransferSerialFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcTransferSerialFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银期转账交易流水表")},
    {Py_tp_members, PyCThostFtdcTransferSerialFieldType_members},
    {Py_tp_getset, PyCThostFtdcTransferSerialFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcTransferSerialFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcTransferSerialFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcTransferSerialFieldType_spec = {
    .name = "PyCTP.CThostFtdcTransferSerialField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcTransferSerialFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcTransferSerialFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcTransferSerialFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcTransferSerialFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcTransferSerialFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcTransferSerialFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcTransferSerialFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcTransferSerialFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcTransferSerialField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferSerialField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}