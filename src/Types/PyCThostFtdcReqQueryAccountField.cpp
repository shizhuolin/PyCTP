
#include "PyCThostFtdcReqQueryAccountField.h"

///查询账户信息请求

static int PyCThostFtdcReqQueryAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqQueryAccountField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqQueryAccountField_BankID = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqQueryAccountField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqQueryAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqQueryAccountField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqQueryAccountField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqQueryAccountField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqQueryAccountField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqQueryAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqQueryAccountField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqQueryAccountField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqQueryAccountField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcReqQueryAccountField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReqQueryAccountField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReqQueryAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReqQueryAccountField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqQueryAccountField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqQueryAccountField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcReqQueryAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqQueryAccountField_Password = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_Password_length = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcReqQueryAccountField_FutureSerial = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReqQueryAccountField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqQueryAccountField_UserID = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcReqQueryAccountField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReqQueryAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_CurrencyID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqQueryAccountField_Digest = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqQueryAccountField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcReqQueryAccountField_DeviceID = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqQueryAccountField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReqQueryAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqQueryAccountField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqQueryAccountField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqQueryAccountField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcReqQueryAccountField_OperNo = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcReqQueryAccountField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReqQueryAccountField_TID = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReqQueryAccountField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcReqQueryAccountField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiy#", (char **)kwlist
        , &CThostFtdcReqQueryAccountField_TradeCode, &CThostFtdcReqQueryAccountField_TradeCode_length
        , &CThostFtdcReqQueryAccountField_BankID, &CThostFtdcReqQueryAccountField_BankID_length
        , &CThostFtdcReqQueryAccountField_BankBranchID, &CThostFtdcReqQueryAccountField_BankBranchID_length
        , &CThostFtdcReqQueryAccountField_BrokerID, &CThostFtdcReqQueryAccountField_BrokerID_length
        , &CThostFtdcReqQueryAccountField_BrokerBranchID, &CThostFtdcReqQueryAccountField_BrokerBranchID_length
        , &CThostFtdcReqQueryAccountField_TradeDate, &CThostFtdcReqQueryAccountField_TradeDate_length
        , &CThostFtdcReqQueryAccountField_TradeTime, &CThostFtdcReqQueryAccountField_TradeTime_length
        , &CThostFtdcReqQueryAccountField_BankSerial, &CThostFtdcReqQueryAccountField_BankSerial_length
        , &CThostFtdcReqQueryAccountField_TradingDay, &CThostFtdcReqQueryAccountField_TradingDay_length
        , &CThostFtdcReqQueryAccountField_PlateSerial
        , &CThostFtdcReqQueryAccountField_LastFragment
        , &CThostFtdcReqQueryAccountField_SessionID
        , &CThostFtdcReqQueryAccountField_CustomerName, &CThostFtdcReqQueryAccountField_CustomerName_length
        , &CThostFtdcReqQueryAccountField_IdCardType
        , &CThostFtdcReqQueryAccountField_IdentifiedCardNo, &CThostFtdcReqQueryAccountField_IdentifiedCardNo_length
        , &CThostFtdcReqQueryAccountField_CustType
        , &CThostFtdcReqQueryAccountField_BankAccount, &CThostFtdcReqQueryAccountField_BankAccount_length
        , &CThostFtdcReqQueryAccountField_BankPassWord, &CThostFtdcReqQueryAccountField_BankPassWord_length
        , &CThostFtdcReqQueryAccountField_AccountID, &CThostFtdcReqQueryAccountField_AccountID_length
        , &CThostFtdcReqQueryAccountField_Password, &CThostFtdcReqQueryAccountField_Password_length
        , &CThostFtdcReqQueryAccountField_FutureSerial
        , &CThostFtdcReqQueryAccountField_InstallID
        , &CThostFtdcReqQueryAccountField_UserID, &CThostFtdcReqQueryAccountField_UserID_length
        , &CThostFtdcReqQueryAccountField_VerifyCertNoFlag
        , &CThostFtdcReqQueryAccountField_CurrencyID, &CThostFtdcReqQueryAccountField_CurrencyID_length
        , &CThostFtdcReqQueryAccountField_Digest, &CThostFtdcReqQueryAccountField_Digest_length
        , &CThostFtdcReqQueryAccountField_BankAccType
        , &CThostFtdcReqQueryAccountField_DeviceID, &CThostFtdcReqQueryAccountField_DeviceID_length
        , &CThostFtdcReqQueryAccountField_BankSecuAccType
        , &CThostFtdcReqQueryAccountField_BrokerIDByBank, &CThostFtdcReqQueryAccountField_BrokerIDByBank_length
        , &CThostFtdcReqQueryAccountField_BankSecuAcc, &CThostFtdcReqQueryAccountField_BankSecuAcc_length
        , &CThostFtdcReqQueryAccountField_BankPwdFlag
        , &CThostFtdcReqQueryAccountField_SecuPwdFlag
        , &CThostFtdcReqQueryAccountField_OperNo, &CThostFtdcReqQueryAccountField_OperNo_length
        , &CThostFtdcReqQueryAccountField_RequestID
        , &CThostFtdcReqQueryAccountField_TID
        , &CThostFtdcReqQueryAccountField_LongCustomerName, &CThostFtdcReqQueryAccountField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqQueryAccountField_TradeCode != NULL ) {
        if(CThostFtdcReqQueryAccountField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqQueryAccountField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqQueryAccountField_TradeCode, CThostFtdcReqQueryAccountField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqQueryAccountField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqQueryAccountField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqQueryAccountField_BankID != NULL ) {
        if(CThostFtdcReqQueryAccountField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqQueryAccountField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqQueryAccountField_BankID, CThostFtdcReqQueryAccountField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqQueryAccountField_BankID, sizeof(data->BankID));
        CThostFtdcReqQueryAccountField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqQueryAccountField_BankBranchID != NULL ) {
        if(CThostFtdcReqQueryAccountField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqQueryAccountField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqQueryAccountField_BankBranchID, CThostFtdcReqQueryAccountField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqQueryAccountField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqQueryAccountField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqQueryAccountField_BrokerID != NULL ) {
        if(CThostFtdcReqQueryAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqQueryAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqQueryAccountField_BrokerID, CThostFtdcReqQueryAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqQueryAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqQueryAccountField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqQueryAccountField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqQueryAccountField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqQueryAccountField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqQueryAccountField_BrokerBranchID, CThostFtdcReqQueryAccountField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqQueryAccountField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqQueryAccountField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqQueryAccountField_TradeDate != NULL ) {
        if(CThostFtdcReqQueryAccountField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryAccountField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqQueryAccountField_TradeDate, CThostFtdcReqQueryAccountField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqQueryAccountField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqQueryAccountField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqQueryAccountField_TradeTime != NULL ) {
        if(CThostFtdcReqQueryAccountField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryAccountField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqQueryAccountField_TradeTime, CThostFtdcReqQueryAccountField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqQueryAccountField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqQueryAccountField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqQueryAccountField_BankSerial != NULL ) {
        if(CThostFtdcReqQueryAccountField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqQueryAccountField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqQueryAccountField_BankSerial, CThostFtdcReqQueryAccountField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqQueryAccountField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqQueryAccountField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqQueryAccountField_TradingDay != NULL ) {
        if(CThostFtdcReqQueryAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqQueryAccountField_TradingDay, CThostFtdcReqQueryAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqQueryAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqQueryAccountField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqQueryAccountField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqQueryAccountField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqQueryAccountField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcReqQueryAccountField_CustomerName != NULL ) {
        if(CThostFtdcReqQueryAccountField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcReqQueryAccountField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReqQueryAccountField_CustomerName, CThostFtdcReqQueryAccountField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReqQueryAccountField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReqQueryAccountField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReqQueryAccountField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReqQueryAccountField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReqQueryAccountField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReqQueryAccountField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReqQueryAccountField_IdentifiedCardNo, CThostFtdcReqQueryAccountField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReqQueryAccountField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReqQueryAccountField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReqQueryAccountField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqQueryAccountField_BankAccount != NULL ) {
        if(CThostFtdcReqQueryAccountField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryAccountField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReqQueryAccountField_BankAccount, CThostFtdcReqQueryAccountField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReqQueryAccountField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReqQueryAccountField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqQueryAccountField_BankPassWord != NULL ) {
        if(CThostFtdcReqQueryAccountField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryAccountField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReqQueryAccountField_BankPassWord, CThostFtdcReqQueryAccountField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReqQueryAccountField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReqQueryAccountField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcReqQueryAccountField_AccountID != NULL ) {
        if(CThostFtdcReqQueryAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcReqQueryAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcReqQueryAccountField_AccountID, CThostFtdcReqQueryAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcReqQueryAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcReqQueryAccountField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqQueryAccountField_Password != NULL ) {
        if(CThostFtdcReqQueryAccountField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryAccountField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqQueryAccountField_Password, CThostFtdcReqQueryAccountField_Password_length);
        strncpy(data->Password, CThostFtdcReqQueryAccountField_Password, sizeof(data->Password));
        CThostFtdcReqQueryAccountField_Password = NULL;
    }

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcReqQueryAccountField_FutureSerial;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReqQueryAccountField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqQueryAccountField_UserID != NULL ) {
        if(CThostFtdcReqQueryAccountField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqQueryAccountField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqQueryAccountField_UserID, CThostFtdcReqQueryAccountField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqQueryAccountField_UserID, sizeof(data->UserID));
        CThostFtdcReqQueryAccountField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcReqQueryAccountField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReqQueryAccountField_CurrencyID != NULL ) {
        if(CThostFtdcReqQueryAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReqQueryAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReqQueryAccountField_CurrencyID, CThostFtdcReqQueryAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReqQueryAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReqQueryAccountField_CurrencyID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqQueryAccountField_Digest != NULL ) {
        if(CThostFtdcReqQueryAccountField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqQueryAccountField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqQueryAccountField_Digest, CThostFtdcReqQueryAccountField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqQueryAccountField_Digest, sizeof(data->Digest));
        CThostFtdcReqQueryAccountField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcReqQueryAccountField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcReqQueryAccountField_DeviceID != NULL ) {
        if(CThostFtdcReqQueryAccountField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcReqQueryAccountField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcReqQueryAccountField_DeviceID, CThostFtdcReqQueryAccountField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcReqQueryAccountField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcReqQueryAccountField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcReqQueryAccountField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReqQueryAccountField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReqQueryAccountField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReqQueryAccountField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReqQueryAccountField_BrokerIDByBank, CThostFtdcReqQueryAccountField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReqQueryAccountField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReqQueryAccountField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqQueryAccountField_BankSecuAcc != NULL ) {
        if(CThostFtdcReqQueryAccountField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryAccountField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcReqQueryAccountField_BankSecuAcc, CThostFtdcReqQueryAccountField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcReqQueryAccountField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcReqQueryAccountField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcReqQueryAccountField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcReqQueryAccountField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcReqQueryAccountField_OperNo != NULL ) {
        if(CThostFtdcReqQueryAccountField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcReqQueryAccountField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcReqQueryAccountField_OperNo, CThostFtdcReqQueryAccountField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcReqQueryAccountField_OperNo, sizeof(data->OperNo));
        CThostFtdcReqQueryAccountField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcReqQueryAccountField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReqQueryAccountField_TID;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReqQueryAccountField_LongCustomerName != NULL ) {
        if(CThostFtdcReqQueryAccountField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReqQueryAccountField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcReqQueryAccountField_LongCustomerName, CThostFtdcReqQueryAccountField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcReqQueryAccountField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcReqQueryAccountField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqQueryAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:y}"
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
        , "CustomerName", data->CustomerName//, (Py_ssize_t)sizeof(data->CustomerName)
        , "IdCardType", data->IdCardType
        , "IdentifiedCardNo", data->IdentifiedCardNo//, (Py_ssize_t)sizeof(data->IdentifiedCardNo)
        , "CustType", data->CustType
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "BankPassWord", data->BankPassWord//, (Py_ssize_t)sizeof(data->BankPassWord)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "FutureSerial", data->FutureSerial
        , "InstallID", data->InstallID
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "VerifyCertNoFlag", data->VerifyCertNoFlag
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "Digest", data->Digest//, (Py_ssize_t)sizeof(data->Digest)
        , "BankAccType", data->BankAccType
        , "DeviceID", data->DeviceID//, (Py_ssize_t)sizeof(data->DeviceID)
        , "BankSecuAccType", data->BankSecuAccType
        , "BrokerIDByBank", data->BrokerIDByBank//, (Py_ssize_t)sizeof(data->BrokerIDByBank)
        , "BankSecuAcc", data->BankSecuAcc//, (Py_ssize_t)sizeof(data->BankSecuAcc)
        , "BankPwdFlag", data->BankPwdFlag
        , "SecuPwdFlag", data->SecuPwdFlag
        , "OperNo", data->OperNo//, (Py_ssize_t)sizeof(data->OperNo)
        , "RequestID", data->RequestID
        , "TID", data->TID
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryAccountField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReqQueryAccountFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcReqQueryAccountFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryAccountField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryAccountFieldData>(self);
    CThostFtdcReqQueryAccountField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqQueryAccountFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqQueryAccountFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqQueryAccountFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话号")
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
        .offset = offsetof(PyCThostFtdcReqQueryAccountFieldData, data.FutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("期货公司流水号")
    },
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqQueryAccountFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    {
        .name = "RequestID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqQueryAccountFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    /// 交易ID
    /// typedef int TThostFtdcTIDType
    {
        .name = "TID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqQueryAccountFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqQueryAccountFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_TradeCode,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankID,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_TradeDate,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_TradeTime,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankSerial,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_LastFragment,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_CustomerName,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_IdCardType,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_CustType,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankAccount,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankPassWord,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_AccountID,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_Password,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_UserID,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_Digest,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankAccType,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_DeviceID,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_OperNo,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcReqQueryAccountFieldType_get_LongCustomerName,
    .set = PyCThostFtdcReqQueryAccountFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqQueryAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqQueryAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询账户信息请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqQueryAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqQueryAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqQueryAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqQueryAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqQueryAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqQueryAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询账户信息请求")},
    {Py_tp_members, PyCThostFtdcReqQueryAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqQueryAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqQueryAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqQueryAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqQueryAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqQueryAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqQueryAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqQueryAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqQueryAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqQueryAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqQueryAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqQueryAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqQueryAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqQueryAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqQueryAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqQueryAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}