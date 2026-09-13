
#include "PyCThostFtdcRspQueryAccountField.h"

///查询账户信息响应

static int PyCThostFtdcRspQueryAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcRspQueryAccountField_TradeCode = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcRspQueryAccountField_BankID = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcRspQueryAccountField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcRspQueryAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcRspQueryAccountField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspQueryAccountField_TradeDate = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcRspQueryAccountField_TradeTime = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcRspQueryAccountField_BankSerial = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcRspQueryAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcRspQueryAccountField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcRspQueryAccountField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcRspQueryAccountField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcRspQueryAccountField_CustomerName = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcRspQueryAccountField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcRspQueryAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcRspQueryAccountField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspQueryAccountField_BankAccount = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspQueryAccountField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcRspQueryAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcRspQueryAccountField_Password = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_Password_length = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcRspQueryAccountField_FutureSerial = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcRspQueryAccountField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcRspQueryAccountField_UserID = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcRspQueryAccountField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcRspQueryAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_CurrencyID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcRspQueryAccountField_Digest = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcRspQueryAccountField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcRspQueryAccountField_DeviceID = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcRspQueryAccountField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcRspQueryAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcRspQueryAccountField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcRspQueryAccountField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcRspQueryAccountField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcRspQueryAccountField_OperNo = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcRspQueryAccountField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcRspQueryAccountField_TID = 0;

    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspQueryAccountField_BankUseAmount = 0.0;

    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    double CThostFtdcRspQueryAccountField_BankFetchAmount = 0.0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcRspQueryAccountField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcRspQueryAccountField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddy#", (char **)kwlist
        , &CThostFtdcRspQueryAccountField_TradeCode, &CThostFtdcRspQueryAccountField_TradeCode_length
        , &CThostFtdcRspQueryAccountField_BankID, &CThostFtdcRspQueryAccountField_BankID_length
        , &CThostFtdcRspQueryAccountField_BankBranchID, &CThostFtdcRspQueryAccountField_BankBranchID_length
        , &CThostFtdcRspQueryAccountField_BrokerID, &CThostFtdcRspQueryAccountField_BrokerID_length
        , &CThostFtdcRspQueryAccountField_BrokerBranchID, &CThostFtdcRspQueryAccountField_BrokerBranchID_length
        , &CThostFtdcRspQueryAccountField_TradeDate, &CThostFtdcRspQueryAccountField_TradeDate_length
        , &CThostFtdcRspQueryAccountField_TradeTime, &CThostFtdcRspQueryAccountField_TradeTime_length
        , &CThostFtdcRspQueryAccountField_BankSerial, &CThostFtdcRspQueryAccountField_BankSerial_length
        , &CThostFtdcRspQueryAccountField_TradingDay, &CThostFtdcRspQueryAccountField_TradingDay_length
        , &CThostFtdcRspQueryAccountField_PlateSerial
        , &CThostFtdcRspQueryAccountField_LastFragment
        , &CThostFtdcRspQueryAccountField_SessionID
        , &CThostFtdcRspQueryAccountField_CustomerName, &CThostFtdcRspQueryAccountField_CustomerName_length
        , &CThostFtdcRspQueryAccountField_IdCardType
        , &CThostFtdcRspQueryAccountField_IdentifiedCardNo, &CThostFtdcRspQueryAccountField_IdentifiedCardNo_length
        , &CThostFtdcRspQueryAccountField_CustType
        , &CThostFtdcRspQueryAccountField_BankAccount, &CThostFtdcRspQueryAccountField_BankAccount_length
        , &CThostFtdcRspQueryAccountField_BankPassWord, &CThostFtdcRspQueryAccountField_BankPassWord_length
        , &CThostFtdcRspQueryAccountField_AccountID, &CThostFtdcRspQueryAccountField_AccountID_length
        , &CThostFtdcRspQueryAccountField_Password, &CThostFtdcRspQueryAccountField_Password_length
        , &CThostFtdcRspQueryAccountField_FutureSerial
        , &CThostFtdcRspQueryAccountField_InstallID
        , &CThostFtdcRspQueryAccountField_UserID, &CThostFtdcRspQueryAccountField_UserID_length
        , &CThostFtdcRspQueryAccountField_VerifyCertNoFlag
        , &CThostFtdcRspQueryAccountField_CurrencyID, &CThostFtdcRspQueryAccountField_CurrencyID_length
        , &CThostFtdcRspQueryAccountField_Digest, &CThostFtdcRspQueryAccountField_Digest_length
        , &CThostFtdcRspQueryAccountField_BankAccType
        , &CThostFtdcRspQueryAccountField_DeviceID, &CThostFtdcRspQueryAccountField_DeviceID_length
        , &CThostFtdcRspQueryAccountField_BankSecuAccType
        , &CThostFtdcRspQueryAccountField_BrokerIDByBank, &CThostFtdcRspQueryAccountField_BrokerIDByBank_length
        , &CThostFtdcRspQueryAccountField_BankSecuAcc, &CThostFtdcRspQueryAccountField_BankSecuAcc_length
        , &CThostFtdcRspQueryAccountField_BankPwdFlag
        , &CThostFtdcRspQueryAccountField_SecuPwdFlag
        , &CThostFtdcRspQueryAccountField_OperNo, &CThostFtdcRspQueryAccountField_OperNo_length
        , &CThostFtdcRspQueryAccountField_RequestID
        , &CThostFtdcRspQueryAccountField_TID
        , &CThostFtdcRspQueryAccountField_BankUseAmount
        , &CThostFtdcRspQueryAccountField_BankFetchAmount
        , &CThostFtdcRspQueryAccountField_LongCustomerName, &CThostFtdcRspQueryAccountField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcRspQueryAccountField_TradeCode != NULL ) {
        if(CThostFtdcRspQueryAccountField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcRspQueryAccountField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcRspQueryAccountField_TradeCode, CThostFtdcRspQueryAccountField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcRspQueryAccountField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcRspQueryAccountField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcRspQueryAccountField_BankID != NULL ) {
        if(CThostFtdcRspQueryAccountField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcRspQueryAccountField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcRspQueryAccountField_BankID, CThostFtdcRspQueryAccountField_BankID_length);
        strncpy(data->BankID, CThostFtdcRspQueryAccountField_BankID, sizeof(data->BankID));
        CThostFtdcRspQueryAccountField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcRspQueryAccountField_BankBranchID != NULL ) {
        if(CThostFtdcRspQueryAccountField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcRspQueryAccountField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcRspQueryAccountField_BankBranchID, CThostFtdcRspQueryAccountField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcRspQueryAccountField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcRspQueryAccountField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcRspQueryAccountField_BrokerID != NULL ) {
        if(CThostFtdcRspQueryAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcRspQueryAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcRspQueryAccountField_BrokerID, CThostFtdcRspQueryAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcRspQueryAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcRspQueryAccountField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcRspQueryAccountField_BrokerBranchID != NULL ) {
        if(CThostFtdcRspQueryAccountField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcRspQueryAccountField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcRspQueryAccountField_BrokerBranchID, CThostFtdcRspQueryAccountField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcRspQueryAccountField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcRspQueryAccountField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspQueryAccountField_TradeDate != NULL ) {
        if(CThostFtdcRspQueryAccountField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryAccountField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcRspQueryAccountField_TradeDate, CThostFtdcRspQueryAccountField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcRspQueryAccountField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcRspQueryAccountField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcRspQueryAccountField_TradeTime != NULL ) {
        if(CThostFtdcRspQueryAccountField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryAccountField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcRspQueryAccountField_TradeTime, CThostFtdcRspQueryAccountField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcRspQueryAccountField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcRspQueryAccountField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcRspQueryAccountField_BankSerial != NULL ) {
        if(CThostFtdcRspQueryAccountField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcRspQueryAccountField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcRspQueryAccountField_BankSerial, CThostFtdcRspQueryAccountField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcRspQueryAccountField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcRspQueryAccountField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcRspQueryAccountField_TradingDay != NULL ) {
        if(CThostFtdcRspQueryAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcRspQueryAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcRspQueryAccountField_TradingDay, CThostFtdcRspQueryAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcRspQueryAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcRspQueryAccountField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcRspQueryAccountField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcRspQueryAccountField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcRspQueryAccountField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcRspQueryAccountField_CustomerName != NULL ) {
        if(CThostFtdcRspQueryAccountField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcRspQueryAccountField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcRspQueryAccountField_CustomerName, CThostFtdcRspQueryAccountField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcRspQueryAccountField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcRspQueryAccountField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcRspQueryAccountField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcRspQueryAccountField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcRspQueryAccountField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcRspQueryAccountField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcRspQueryAccountField_IdentifiedCardNo, CThostFtdcRspQueryAccountField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcRspQueryAccountField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcRspQueryAccountField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcRspQueryAccountField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspQueryAccountField_BankAccount != NULL ) {
        if(CThostFtdcRspQueryAccountField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryAccountField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcRspQueryAccountField_BankAccount, CThostFtdcRspQueryAccountField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcRspQueryAccountField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcRspQueryAccountField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspQueryAccountField_BankPassWord != NULL ) {
        if(CThostFtdcRspQueryAccountField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryAccountField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcRspQueryAccountField_BankPassWord, CThostFtdcRspQueryAccountField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcRspQueryAccountField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcRspQueryAccountField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcRspQueryAccountField_AccountID != NULL ) {
        if(CThostFtdcRspQueryAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcRspQueryAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcRspQueryAccountField_AccountID, CThostFtdcRspQueryAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcRspQueryAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcRspQueryAccountField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcRspQueryAccountField_Password != NULL ) {
        if(CThostFtdcRspQueryAccountField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryAccountField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcRspQueryAccountField_Password, CThostFtdcRspQueryAccountField_Password_length);
        strncpy(data->Password, CThostFtdcRspQueryAccountField_Password, sizeof(data->Password));
        CThostFtdcRspQueryAccountField_Password = NULL;
    }

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcRspQueryAccountField_FutureSerial;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcRspQueryAccountField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcRspQueryAccountField_UserID != NULL ) {
        if(CThostFtdcRspQueryAccountField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcRspQueryAccountField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcRspQueryAccountField_UserID, CThostFtdcRspQueryAccountField_UserID_length);
        strncpy(data->UserID, CThostFtdcRspQueryAccountField_UserID, sizeof(data->UserID));
        CThostFtdcRspQueryAccountField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcRspQueryAccountField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcRspQueryAccountField_CurrencyID != NULL ) {
        if(CThostFtdcRspQueryAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcRspQueryAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcRspQueryAccountField_CurrencyID, CThostFtdcRspQueryAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcRspQueryAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcRspQueryAccountField_CurrencyID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcRspQueryAccountField_Digest != NULL ) {
        if(CThostFtdcRspQueryAccountField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcRspQueryAccountField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcRspQueryAccountField_Digest, CThostFtdcRspQueryAccountField_Digest_length);
        strncpy(data->Digest, CThostFtdcRspQueryAccountField_Digest, sizeof(data->Digest));
        CThostFtdcRspQueryAccountField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcRspQueryAccountField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcRspQueryAccountField_DeviceID != NULL ) {
        if(CThostFtdcRspQueryAccountField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcRspQueryAccountField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcRspQueryAccountField_DeviceID, CThostFtdcRspQueryAccountField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcRspQueryAccountField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcRspQueryAccountField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcRspQueryAccountField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcRspQueryAccountField_BrokerIDByBank != NULL ) {
        if(CThostFtdcRspQueryAccountField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcRspQueryAccountField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcRspQueryAccountField_BrokerIDByBank, CThostFtdcRspQueryAccountField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcRspQueryAccountField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcRspQueryAccountField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcRspQueryAccountField_BankSecuAcc != NULL ) {
        if(CThostFtdcRspQueryAccountField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcRspQueryAccountField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcRspQueryAccountField_BankSecuAcc, CThostFtdcRspQueryAccountField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcRspQueryAccountField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcRspQueryAccountField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcRspQueryAccountField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcRspQueryAccountField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcRspQueryAccountField_OperNo != NULL ) {
        if(CThostFtdcRspQueryAccountField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcRspQueryAccountField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcRspQueryAccountField_OperNo, CThostFtdcRspQueryAccountField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcRspQueryAccountField_OperNo, sizeof(data->OperNo));
        CThostFtdcRspQueryAccountField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcRspQueryAccountField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcRspQueryAccountField_TID;

    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    data->BankUseAmount = CThostFtdcRspQueryAccountField_BankUseAmount;

    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    data->BankFetchAmount = CThostFtdcRspQueryAccountField_BankFetchAmount;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcRspQueryAccountField_LongCustomerName != NULL ) {
        if(CThostFtdcRspQueryAccountField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcRspQueryAccountField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcRspQueryAccountField_LongCustomerName, CThostFtdcRspQueryAccountField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcRspQueryAccountField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcRspQueryAccountField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcRspQueryAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:y}"
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
        , "BankUseAmount", data->BankUseAmount
        , "BankFetchAmount", data->BankFetchAmount
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryAccountField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcRspQueryAccountFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcRspQueryAccountFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcRspQueryAccountField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcRspQueryAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcRspQueryAccountFieldData>(self);
    CThostFtdcRspQueryAccountField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcRspQueryAccountFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryAccountFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcRspQueryAccountFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcRspQueryAccountFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcRspQueryAccountFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcRspQueryAccountFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcRspQueryAccountFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    /// 银行可用金额
    /// typedef double TThostFtdcTradeAmountType
    {
        .name = "BankUseAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryAccountFieldData, data.BankUseAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银行可用金额")
    },
    /// 银行可取金额
    /// typedef double TThostFtdcTradeAmountType
    {
        .name = "BankFetchAmount",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcRspQueryAccountFieldData, data.BankFetchAmount),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("银行可取金额")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcRspQueryAccountFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_TradeCode,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankID,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankBranchID,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_TradeDate,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_TradeTime,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankSerial,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_LastFragment,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_CustomerName,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_IdCardType,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_CustType,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankAccount,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankPassWord,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_AccountID,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_Password,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_UserID,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_Digest,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankAccType,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_DeviceID,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_OperNo,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcRspQueryAccountFieldType_get_LongCustomerName,
    .set = PyCThostFtdcRspQueryAccountFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcRspQueryAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcRspQueryAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("查询账户信息响应")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcRspQueryAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcRspQueryAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcRspQueryAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcRspQueryAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcRspQueryAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcRspQueryAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("查询账户信息响应")},
    {Py_tp_members, PyCThostFtdcRspQueryAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcRspQueryAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcRspQueryAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcRspQueryAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcRspQueryAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcRspQueryAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcRspQueryAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcRspQueryAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcRspQueryAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcRspQueryAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcRspQueryAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcRspQueryAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcRspQueryAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcRspQueryAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcRspQueryAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspQueryAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}