
#include "PyCThostFtdcReqQueryTradeResultBySerialField.h"

///查询指定流水号的交易结果请求

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "Reference", "RefrenceIssureType", "RefrenceIssure", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "CurrencyID", "TradeAmount", "Digest", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqQueryTradeResultBySerialField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqQueryTradeResultBySerialField_BankID = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqQueryTradeResultBySerialField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqQueryTradeResultBySerialField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqQueryTradeResultBySerialField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqQueryTradeResultBySerialField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqQueryTradeResultBySerialField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqQueryTradeResultBySerialField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqQueryTradeResultBySerialField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqQueryTradeResultBySerialField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqQueryTradeResultBySerialField_SessionID = 0;

    /// 流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqQueryTradeResultBySerialField_Reference = 0;

    /// 本流水号发布者的机构类型
    /// typedef char TThostFtdcInstitutionTypeType
    char CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssureType = 0;

    /// 本流水号发布者机构编码
    /// typedef char TThostFtdcOrganCodeType[36]
    char *CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure_length = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcReqQueryTradeResultBySerialField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReqQueryTradeResultBySerialField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReqQueryTradeResultBySerialField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqQueryTradeResultBySerialField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqQueryTradeResultBySerialField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcReqQueryTradeResultBySerialField_AccountID = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqQueryTradeResultBySerialField_Password = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_Password_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReqQueryTradeResultBySerialField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_CurrencyID_length = 0;

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcReqQueryTradeResultBySerialField_TradeAmount = 0.0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqQueryTradeResultBySerialField_Digest = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_Digest_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciicy#y#cy#cy#y#y#y#y#dy#y#", (char **)kwlist
        , &CThostFtdcReqQueryTradeResultBySerialField_TradeCode, &CThostFtdcReqQueryTradeResultBySerialField_TradeCode_length
        , &CThostFtdcReqQueryTradeResultBySerialField_BankID, &CThostFtdcReqQueryTradeResultBySerialField_BankID_length
        , &CThostFtdcReqQueryTradeResultBySerialField_BankBranchID, &CThostFtdcReqQueryTradeResultBySerialField_BankBranchID_length
        , &CThostFtdcReqQueryTradeResultBySerialField_BrokerID, &CThostFtdcReqQueryTradeResultBySerialField_BrokerID_length
        , &CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID, &CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID_length
        , &CThostFtdcReqQueryTradeResultBySerialField_TradeDate, &CThostFtdcReqQueryTradeResultBySerialField_TradeDate_length
        , &CThostFtdcReqQueryTradeResultBySerialField_TradeTime, &CThostFtdcReqQueryTradeResultBySerialField_TradeTime_length
        , &CThostFtdcReqQueryTradeResultBySerialField_BankSerial, &CThostFtdcReqQueryTradeResultBySerialField_BankSerial_length
        , &CThostFtdcReqQueryTradeResultBySerialField_TradingDay, &CThostFtdcReqQueryTradeResultBySerialField_TradingDay_length
        , &CThostFtdcReqQueryTradeResultBySerialField_PlateSerial
        , &CThostFtdcReqQueryTradeResultBySerialField_LastFragment
        , &CThostFtdcReqQueryTradeResultBySerialField_SessionID
        , &CThostFtdcReqQueryTradeResultBySerialField_Reference
        , &CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssureType
        , &CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure, &CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure_length
        , &CThostFtdcReqQueryTradeResultBySerialField_CustomerName, &CThostFtdcReqQueryTradeResultBySerialField_CustomerName_length
        , &CThostFtdcReqQueryTradeResultBySerialField_IdCardType
        , &CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo, &CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo_length
        , &CThostFtdcReqQueryTradeResultBySerialField_CustType
        , &CThostFtdcReqQueryTradeResultBySerialField_BankAccount, &CThostFtdcReqQueryTradeResultBySerialField_BankAccount_length
        , &CThostFtdcReqQueryTradeResultBySerialField_BankPassWord, &CThostFtdcReqQueryTradeResultBySerialField_BankPassWord_length
        , &CThostFtdcReqQueryTradeResultBySerialField_AccountID, &CThostFtdcReqQueryTradeResultBySerialField_AccountID_length
        , &CThostFtdcReqQueryTradeResultBySerialField_Password, &CThostFtdcReqQueryTradeResultBySerialField_Password_length
        , &CThostFtdcReqQueryTradeResultBySerialField_CurrencyID, &CThostFtdcReqQueryTradeResultBySerialField_CurrencyID_length
        , &CThostFtdcReqQueryTradeResultBySerialField_TradeAmount
        , &CThostFtdcReqQueryTradeResultBySerialField_Digest, &CThostFtdcReqQueryTradeResultBySerialField_Digest_length
        , &CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName, &CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqQueryTradeResultBySerialField_TradeCode != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqQueryTradeResultBySerialField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqQueryTradeResultBySerialField_TradeCode, CThostFtdcReqQueryTradeResultBySerialField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqQueryTradeResultBySerialField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqQueryTradeResultBySerialField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqQueryTradeResultBySerialField_BankID != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqQueryTradeResultBySerialField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqQueryTradeResultBySerialField_BankID, CThostFtdcReqQueryTradeResultBySerialField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqQueryTradeResultBySerialField_BankID, sizeof(data->BankID));
        CThostFtdcReqQueryTradeResultBySerialField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqQueryTradeResultBySerialField_BankBranchID != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqQueryTradeResultBySerialField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqQueryTradeResultBySerialField_BankBranchID, CThostFtdcReqQueryTradeResultBySerialField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqQueryTradeResultBySerialField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqQueryTradeResultBySerialField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqQueryTradeResultBySerialField_BrokerID != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqQueryTradeResultBySerialField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqQueryTradeResultBySerialField_BrokerID, CThostFtdcReqQueryTradeResultBySerialField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqQueryTradeResultBySerialField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqQueryTradeResultBySerialField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID, CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqQueryTradeResultBySerialField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqQueryTradeResultBySerialField_TradeDate != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryTradeResultBySerialField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqQueryTradeResultBySerialField_TradeDate, CThostFtdcReqQueryTradeResultBySerialField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqQueryTradeResultBySerialField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqQueryTradeResultBySerialField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqQueryTradeResultBySerialField_TradeTime != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryTradeResultBySerialField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqQueryTradeResultBySerialField_TradeTime, CThostFtdcReqQueryTradeResultBySerialField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqQueryTradeResultBySerialField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqQueryTradeResultBySerialField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqQueryTradeResultBySerialField_BankSerial != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqQueryTradeResultBySerialField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqQueryTradeResultBySerialField_BankSerial, CThostFtdcReqQueryTradeResultBySerialField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqQueryTradeResultBySerialField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqQueryTradeResultBySerialField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqQueryTradeResultBySerialField_TradingDay != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryTradeResultBySerialField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqQueryTradeResultBySerialField_TradingDay, CThostFtdcReqQueryTradeResultBySerialField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqQueryTradeResultBySerialField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqQueryTradeResultBySerialField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqQueryTradeResultBySerialField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqQueryTradeResultBySerialField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqQueryTradeResultBySerialField_SessionID;

    /// 流水号
    /// typedef int TThostFtdcSerialType
    data->Reference = CThostFtdcReqQueryTradeResultBySerialField_Reference;

    /// 本流水号发布者的机构类型
    /// typedef char TThostFtdcInstitutionTypeType
    data->RefrenceIssureType = CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssureType;

    /// 本流水号发布者机构编码
    /// typedef char TThostFtdcOrganCodeType[36]
    if( CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure_length >= (Py_ssize_t)sizeof(data->RefrenceIssure)) {
            PyErr_Format(PyExc_ValueError, "RefrenceIssure too long: length=%zd (max allowed is 35)", CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure_length);
            return -1;
        }
        // memset(data->RefrenceIssure, 0, sizeof(data->RefrenceIssure));
        // memcpy(data->RefrenceIssure, CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure, CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure_length);
        strncpy(data->RefrenceIssure, CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure, sizeof(data->RefrenceIssure));
        CThostFtdcReqQueryTradeResultBySerialField_RefrenceIssure = NULL;
    }

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcReqQueryTradeResultBySerialField_CustomerName != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcReqQueryTradeResultBySerialField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReqQueryTradeResultBySerialField_CustomerName, CThostFtdcReqQueryTradeResultBySerialField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReqQueryTradeResultBySerialField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReqQueryTradeResultBySerialField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReqQueryTradeResultBySerialField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo, CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReqQueryTradeResultBySerialField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReqQueryTradeResultBySerialField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqQueryTradeResultBySerialField_BankAccount != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryTradeResultBySerialField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReqQueryTradeResultBySerialField_BankAccount, CThostFtdcReqQueryTradeResultBySerialField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReqQueryTradeResultBySerialField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReqQueryTradeResultBySerialField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqQueryTradeResultBySerialField_BankPassWord != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryTradeResultBySerialField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReqQueryTradeResultBySerialField_BankPassWord, CThostFtdcReqQueryTradeResultBySerialField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReqQueryTradeResultBySerialField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReqQueryTradeResultBySerialField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcReqQueryTradeResultBySerialField_AccountID != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcReqQueryTradeResultBySerialField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcReqQueryTradeResultBySerialField_AccountID, CThostFtdcReqQueryTradeResultBySerialField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcReqQueryTradeResultBySerialField_AccountID, sizeof(data->AccountID));
        CThostFtdcReqQueryTradeResultBySerialField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqQueryTradeResultBySerialField_Password != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryTradeResultBySerialField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqQueryTradeResultBySerialField_Password, CThostFtdcReqQueryTradeResultBySerialField_Password_length);
        strncpy(data->Password, CThostFtdcReqQueryTradeResultBySerialField_Password, sizeof(data->Password));
        CThostFtdcReqQueryTradeResultBySerialField_Password = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReqQueryTradeResultBySerialField_CurrencyID != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReqQueryTradeResultBySerialField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReqQueryTradeResultBySerialField_CurrencyID, CThostFtdcReqQueryTradeResultBySerialField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReqQueryTradeResultBySerialField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReqQueryTradeResultBySerialField_CurrencyID = NULL;
    }

    /// 转帐金额
    /// typedef double TThostFtdcTradeAmountType
    data->TradeAmount = CThostFtdcReqQueryTradeResultBySerialField_TradeAmount;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqQueryTradeResultBySerialField_Digest != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqQueryTradeResultBySerialField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqQueryTradeResultBySerialField_Digest, CThostFtdcReqQueryTradeResultBySerialField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqQueryTradeResultBySerialField_Digest, sizeof(data->Digest));
        CThostFtdcReqQueryTradeResultBySerialField_Digest = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName != NULL ) {
        if(CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName, CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcReqQueryTradeResultBySerialField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_repr(PyObject *self) {

    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:d,s:y,s:y}"
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
        , "Reference", data->Reference
        , "RefrenceIssureType", data->RefrenceIssureType
        , "RefrenceIssure", data->RefrenceIssure//, (Py_ssize_t)sizeof(data->RefrenceIssure)
        , "CustomerName", data->CustomerName//, (Py_ssize_t)sizeof(data->CustomerName)
        , "IdCardType", data->IdCardType
        , "IdentifiedCardNo", data->IdentifiedCardNo//, (Py_ssize_t)sizeof(data->IdentifiedCardNo)
        , "CustType", data->CustType
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "BankPassWord", data->BankPassWord//, (Py_ssize_t)sizeof(data->BankPassWord)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "TradeAmount", data->TradeAmount
        , "Digest", data->Digest//, (Py_ssize_t)sizeof(data->Digest)
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryTradeResultBySerialField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryTradeResultBySerialField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本流水号发布者的机构类型
/// typedef char TThostFtdcInstitutionTypeType
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_RefrenceIssureType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->RefrenceIssureType), 1);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_RefrenceIssureType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RefrenceIssureType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::RefrenceIssureType)) {
        PyErr_SetString(PyExc_ValueError, "RefrenceIssureType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    data->RefrenceIssureType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本流水号发布者机构编码
/// typedef char TThostFtdcOrganCodeType[36]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_RefrenceIssure(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->RefrenceIssure, (Py_ssize_t)sizeof(data->RefrenceIssure));
    return PyBytes_FromString(data->RefrenceIssure);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_RefrenceIssure(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "RefrenceIssure Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::RefrenceIssure)) {
        PyErr_SetString(PyExc_ValueError, "RefrenceIssure must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->RefrenceIssure, 0, sizeof(data->RefrenceIssure));
    // memcpy(data->RefrenceIssure, buf, len);
    strncpy(data->RefrenceIssure, buf, sizeof(data->RefrenceIssure));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryTradeResultBySerialField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryTradeResultBySerialFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryTradeResultBySerialFieldData>(self);
    CThostFtdcReqQueryTradeResultBySerialField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqQueryTradeResultBySerialFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqQueryTradeResultBySerialFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqQueryTradeResultBySerialFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话号")
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
        .offset = offsetof(PyCThostFtdcReqQueryTradeResultBySerialFieldData, data.Reference),
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
        .offset = offsetof(PyCThostFtdcReqQueryTradeResultBySerialFieldData, data.TradeAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("转帐金额")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqQueryTradeResultBySerialFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_TradeCode,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankID,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BrokerID,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_TradeDate,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_TradeTime,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankSerial,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_TradingDay,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_LastFragment,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 本流水号发布者的机构类型
    /// typedef char TThostFtdcInstitutionTypeType
    {
    .name = "RefrenceIssureType",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_RefrenceIssureType,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_RefrenceIssureType,
    .doc = PyDoc_STR("本流水号发布者的机构类型"),
    },
    /// 本流水号发布者机构编码
    /// typedef char TThostFtdcOrganCodeType[36]
    {
    .name = "RefrenceIssure",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_RefrenceIssure,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_RefrenceIssure,
    .doc = PyDoc_STR("本流水号发布者机构编码"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_CustomerName,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_IdCardType,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_CustType,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankAccount,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_BankPassWord,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_AccountID,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_Password,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_CurrencyID,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_Digest,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcReqQueryTradeResultBySerialFieldType_get_LongCustomerName,
    .set = PyCThostFtdcReqQueryTradeResultBySerialFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqQueryTradeResultBySerialFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqQueryTradeResultBySerialField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询指定流水号的交易结果请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqQueryTradeResultBySerialFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqQueryTradeResultBySerialFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqQueryTradeResultBySerialFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqQueryTradeResultBySerialFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqQueryTradeResultBySerialFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqQueryTradeResultBySerialFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询指定流水号的交易结果请求")},
    {Py_tp_members, PyCThostFtdcReqQueryTradeResultBySerialFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqQueryTradeResultBySerialFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqQueryTradeResultBySerialFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqQueryTradeResultBySerialFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqQueryTradeResultBySerialFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqQueryTradeResultBySerialField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqQueryTradeResultBySerialFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqQueryTradeResultBySerialFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqQueryTradeResultBySerialFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqQueryTradeResultBySerialFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqQueryTradeResultBySerialFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqQueryTradeResultBySerialFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqQueryTradeResultBySerialFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqQueryTradeResultBySerialField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqQueryTradeResultBySerialField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}