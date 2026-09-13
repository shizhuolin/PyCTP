
#include "PyCThostFtdcReqQueryBankAccountBySecField.h"

///次席查询银行资金帐户信息请求

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "LongCustomerName", "DRIdentityID", "SecFutureSerial", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcReqQueryBankAccountBySecField_TradeCode = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcReqQueryBankAccountBySecField_BankID = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcReqQueryBankAccountBySecField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqQueryBankAccountBySecField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqQueryBankAccountBySecField_TradeDate = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcReqQueryBankAccountBySecField_TradeTime = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcReqQueryBankAccountBySecField_BankSerial = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcReqQueryBankAccountBySecField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcReqQueryBankAccountBySecField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcReqQueryBankAccountBySecField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcReqQueryBankAccountBySecField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcReqQueryBankAccountBySecField_CustomerName = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcReqQueryBankAccountBySecField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcReqQueryBankAccountBySecField_CustType = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqQueryBankAccountBySecField_BankAccount = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqQueryBankAccountBySecField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcReqQueryBankAccountBySecField_AccountID = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqQueryBankAccountBySecField_Password = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_Password_length = 0;

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcReqQueryBankAccountBySecField_FutureSerial = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcReqQueryBankAccountBySecField_InstallID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqQueryBankAccountBySecField_UserID = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_UserID_length = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcReqQueryBankAccountBySecField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcReqQueryBankAccountBySecField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_CurrencyID_length = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcReqQueryBankAccountBySecField_Digest = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqQueryBankAccountBySecField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcReqQueryBankAccountBySecField_DeviceID = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcReqQueryBankAccountBySecField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqQueryBankAccountBySecField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcReqQueryBankAccountBySecField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcReqQueryBankAccountBySecField_OperNo = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_OperNo_length = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcReqQueryBankAccountBySecField_RequestID = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcReqQueryBankAccountBySecField_TID = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcReqQueryBankAccountBySecField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcReqQueryBankAccountBySecField_LongCustomerName_length = 0;

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    int CThostFtdcReqQueryBankAccountBySecField_DRIdentityID = 0;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    int CThostFtdcReqQueryBankAccountBySecField_SecFutureSerial = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiy#ii", (char **)kwlist
        , &CThostFtdcReqQueryBankAccountBySecField_TradeCode, &CThostFtdcReqQueryBankAccountBySecField_TradeCode_length
        , &CThostFtdcReqQueryBankAccountBySecField_BankID, &CThostFtdcReqQueryBankAccountBySecField_BankID_length
        , &CThostFtdcReqQueryBankAccountBySecField_BankBranchID, &CThostFtdcReqQueryBankAccountBySecField_BankBranchID_length
        , &CThostFtdcReqQueryBankAccountBySecField_BrokerID, &CThostFtdcReqQueryBankAccountBySecField_BrokerID_length
        , &CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID, &CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID_length
        , &CThostFtdcReqQueryBankAccountBySecField_TradeDate, &CThostFtdcReqQueryBankAccountBySecField_TradeDate_length
        , &CThostFtdcReqQueryBankAccountBySecField_TradeTime, &CThostFtdcReqQueryBankAccountBySecField_TradeTime_length
        , &CThostFtdcReqQueryBankAccountBySecField_BankSerial, &CThostFtdcReqQueryBankAccountBySecField_BankSerial_length
        , &CThostFtdcReqQueryBankAccountBySecField_TradingDay, &CThostFtdcReqQueryBankAccountBySecField_TradingDay_length
        , &CThostFtdcReqQueryBankAccountBySecField_PlateSerial
        , &CThostFtdcReqQueryBankAccountBySecField_LastFragment
        , &CThostFtdcReqQueryBankAccountBySecField_SessionID
        , &CThostFtdcReqQueryBankAccountBySecField_CustomerName, &CThostFtdcReqQueryBankAccountBySecField_CustomerName_length
        , &CThostFtdcReqQueryBankAccountBySecField_IdCardType
        , &CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo, &CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo_length
        , &CThostFtdcReqQueryBankAccountBySecField_CustType
        , &CThostFtdcReqQueryBankAccountBySecField_BankAccount, &CThostFtdcReqQueryBankAccountBySecField_BankAccount_length
        , &CThostFtdcReqQueryBankAccountBySecField_BankPassWord, &CThostFtdcReqQueryBankAccountBySecField_BankPassWord_length
        , &CThostFtdcReqQueryBankAccountBySecField_AccountID, &CThostFtdcReqQueryBankAccountBySecField_AccountID_length
        , &CThostFtdcReqQueryBankAccountBySecField_Password, &CThostFtdcReqQueryBankAccountBySecField_Password_length
        , &CThostFtdcReqQueryBankAccountBySecField_FutureSerial
        , &CThostFtdcReqQueryBankAccountBySecField_InstallID
        , &CThostFtdcReqQueryBankAccountBySecField_UserID, &CThostFtdcReqQueryBankAccountBySecField_UserID_length
        , &CThostFtdcReqQueryBankAccountBySecField_VerifyCertNoFlag
        , &CThostFtdcReqQueryBankAccountBySecField_CurrencyID, &CThostFtdcReqQueryBankAccountBySecField_CurrencyID_length
        , &CThostFtdcReqQueryBankAccountBySecField_Digest, &CThostFtdcReqQueryBankAccountBySecField_Digest_length
        , &CThostFtdcReqQueryBankAccountBySecField_BankAccType
        , &CThostFtdcReqQueryBankAccountBySecField_DeviceID, &CThostFtdcReqQueryBankAccountBySecField_DeviceID_length
        , &CThostFtdcReqQueryBankAccountBySecField_BankSecuAccType
        , &CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank, &CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank_length
        , &CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc, &CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc_length
        , &CThostFtdcReqQueryBankAccountBySecField_BankPwdFlag
        , &CThostFtdcReqQueryBankAccountBySecField_SecuPwdFlag
        , &CThostFtdcReqQueryBankAccountBySecField_OperNo, &CThostFtdcReqQueryBankAccountBySecField_OperNo_length
        , &CThostFtdcReqQueryBankAccountBySecField_RequestID
        , &CThostFtdcReqQueryBankAccountBySecField_TID
        , &CThostFtdcReqQueryBankAccountBySecField_LongCustomerName, &CThostFtdcReqQueryBankAccountBySecField_LongCustomerName_length
        , &CThostFtdcReqQueryBankAccountBySecField_DRIdentityID
        , &CThostFtdcReqQueryBankAccountBySecField_SecFutureSerial
    )) {
        return -1;
    }

    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcReqQueryBankAccountBySecField_TradeCode != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcReqQueryBankAccountBySecField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcReqQueryBankAccountBySecField_TradeCode, CThostFtdcReqQueryBankAccountBySecField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcReqQueryBankAccountBySecField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcReqQueryBankAccountBySecField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcReqQueryBankAccountBySecField_BankID != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcReqQueryBankAccountBySecField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcReqQueryBankAccountBySecField_BankID, CThostFtdcReqQueryBankAccountBySecField_BankID_length);
        strncpy(data->BankID, CThostFtdcReqQueryBankAccountBySecField_BankID, sizeof(data->BankID));
        CThostFtdcReqQueryBankAccountBySecField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcReqQueryBankAccountBySecField_BankBranchID != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcReqQueryBankAccountBySecField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcReqQueryBankAccountBySecField_BankBranchID, CThostFtdcReqQueryBankAccountBySecField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcReqQueryBankAccountBySecField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcReqQueryBankAccountBySecField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqQueryBankAccountBySecField_BrokerID != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqQueryBankAccountBySecField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqQueryBankAccountBySecField_BrokerID, CThostFtdcReqQueryBankAccountBySecField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqQueryBankAccountBySecField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqQueryBankAccountBySecField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID, CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcReqQueryBankAccountBySecField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqQueryBankAccountBySecField_TradeDate != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryBankAccountBySecField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcReqQueryBankAccountBySecField_TradeDate, CThostFtdcReqQueryBankAccountBySecField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcReqQueryBankAccountBySecField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcReqQueryBankAccountBySecField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcReqQueryBankAccountBySecField_TradeTime != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryBankAccountBySecField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcReqQueryBankAccountBySecField_TradeTime, CThostFtdcReqQueryBankAccountBySecField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcReqQueryBankAccountBySecField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcReqQueryBankAccountBySecField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcReqQueryBankAccountBySecField_BankSerial != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcReqQueryBankAccountBySecField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcReqQueryBankAccountBySecField_BankSerial, CThostFtdcReqQueryBankAccountBySecField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcReqQueryBankAccountBySecField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcReqQueryBankAccountBySecField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcReqQueryBankAccountBySecField_TradingDay != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqQueryBankAccountBySecField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqQueryBankAccountBySecField_TradingDay, CThostFtdcReqQueryBankAccountBySecField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqQueryBankAccountBySecField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqQueryBankAccountBySecField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcReqQueryBankAccountBySecField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcReqQueryBankAccountBySecField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcReqQueryBankAccountBySecField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcReqQueryBankAccountBySecField_CustomerName != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcReqQueryBankAccountBySecField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcReqQueryBankAccountBySecField_CustomerName, CThostFtdcReqQueryBankAccountBySecField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcReqQueryBankAccountBySecField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcReqQueryBankAccountBySecField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcReqQueryBankAccountBySecField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo, CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcReqQueryBankAccountBySecField_IdentifiedCardNo = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcReqQueryBankAccountBySecField_CustType;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqQueryBankAccountBySecField_BankAccount != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryBankAccountBySecField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcReqQueryBankAccountBySecField_BankAccount, CThostFtdcReqQueryBankAccountBySecField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcReqQueryBankAccountBySecField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcReqQueryBankAccountBySecField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqQueryBankAccountBySecField_BankPassWord != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryBankAccountBySecField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcReqQueryBankAccountBySecField_BankPassWord, CThostFtdcReqQueryBankAccountBySecField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcReqQueryBankAccountBySecField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcReqQueryBankAccountBySecField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcReqQueryBankAccountBySecField_AccountID != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcReqQueryBankAccountBySecField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcReqQueryBankAccountBySecField_AccountID, CThostFtdcReqQueryBankAccountBySecField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcReqQueryBankAccountBySecField_AccountID, sizeof(data->AccountID));
        CThostFtdcReqQueryBankAccountBySecField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqQueryBankAccountBySecField_Password != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryBankAccountBySecField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqQueryBankAccountBySecField_Password, CThostFtdcReqQueryBankAccountBySecField_Password_length);
        strncpy(data->Password, CThostFtdcReqQueryBankAccountBySecField_Password, sizeof(data->Password));
        CThostFtdcReqQueryBankAccountBySecField_Password = NULL;
    }

    /// 期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->FutureSerial = CThostFtdcReqQueryBankAccountBySecField_FutureSerial;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcReqQueryBankAccountBySecField_InstallID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqQueryBankAccountBySecField_UserID != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqQueryBankAccountBySecField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqQueryBankAccountBySecField_UserID, CThostFtdcReqQueryBankAccountBySecField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqQueryBankAccountBySecField_UserID, sizeof(data->UserID));
        CThostFtdcReqQueryBankAccountBySecField_UserID = NULL;
    }

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcReqQueryBankAccountBySecField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcReqQueryBankAccountBySecField_CurrencyID != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcReqQueryBankAccountBySecField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcReqQueryBankAccountBySecField_CurrencyID, CThostFtdcReqQueryBankAccountBySecField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcReqQueryBankAccountBySecField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcReqQueryBankAccountBySecField_CurrencyID = NULL;
    }

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcReqQueryBankAccountBySecField_Digest != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcReqQueryBankAccountBySecField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcReqQueryBankAccountBySecField_Digest, CThostFtdcReqQueryBankAccountBySecField_Digest_length);
        strncpy(data->Digest, CThostFtdcReqQueryBankAccountBySecField_Digest, sizeof(data->Digest));
        CThostFtdcReqQueryBankAccountBySecField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcReqQueryBankAccountBySecField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcReqQueryBankAccountBySecField_DeviceID != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcReqQueryBankAccountBySecField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcReqQueryBankAccountBySecField_DeviceID, CThostFtdcReqQueryBankAccountBySecField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcReqQueryBankAccountBySecField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcReqQueryBankAccountBySecField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcReqQueryBankAccountBySecField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank, CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcReqQueryBankAccountBySecField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc, CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcReqQueryBankAccountBySecField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcReqQueryBankAccountBySecField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcReqQueryBankAccountBySecField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcReqQueryBankAccountBySecField_OperNo != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcReqQueryBankAccountBySecField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcReqQueryBankAccountBySecField_OperNo, CThostFtdcReqQueryBankAccountBySecField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcReqQueryBankAccountBySecField_OperNo, sizeof(data->OperNo));
        CThostFtdcReqQueryBankAccountBySecField_OperNo = NULL;
    }

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcReqQueryBankAccountBySecField_RequestID;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcReqQueryBankAccountBySecField_TID;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcReqQueryBankAccountBySecField_LongCustomerName != NULL ) {
        if(CThostFtdcReqQueryBankAccountBySecField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcReqQueryBankAccountBySecField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcReqQueryBankAccountBySecField_LongCustomerName, CThostFtdcReqQueryBankAccountBySecField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcReqQueryBankAccountBySecField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcReqQueryBankAccountBySecField_LongCustomerName = NULL;
    }

    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    data->DRIdentityID = CThostFtdcReqQueryBankAccountBySecField_DRIdentityID;

    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    data->SecFutureSerial = CThostFtdcReqQueryBankAccountBySecField_SecFutureSerial;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_repr(PyObject *self) {

    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:y,s:i,s:i}"
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
        , "DRIdentityID", data->DRIdentityID
        , "SecFutureSerial", data->SecFutureSerial
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryBankAccountBySecField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryBankAccountBySecField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcReqQueryBankAccountBySecFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcReqQueryBankAccountBySecFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqQueryBankAccountBySecField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqQueryBankAccountBySecFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqQueryBankAccountBySecFieldData>(self);
    CThostFtdcReqQueryBankAccountBySecField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqQueryBankAccountBySecFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqQueryBankAccountBySecFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcReqQueryBankAccountBySecFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcReqQueryBankAccountBySecFieldData, data.FutureSerial),
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
        .offset = offsetof(PyCThostFtdcReqQueryBankAccountBySecFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcReqQueryBankAccountBySecFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcReqQueryBankAccountBySecFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
    },
    /// 交易中心代码
    /// typedef int TThostFtdcDRIdentityIDType
    {
        .name = "DRIdentityID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqQueryBankAccountBySecFieldData, data.DRIdentityID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易中心代码")
    },
    /// 次中心发起转账期货公司流水号
    /// typedef int TThostFtdcFutureSerialType
    {
        .name = "SecFutureSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqQueryBankAccountBySecFieldData, data.SecFutureSerial),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("次中心发起转账期货公司流水号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqQueryBankAccountBySecFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_TradeCode,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankID,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankBranchID,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BrokerID,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_TradeDate,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_TradeTime,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankSerial,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_TradingDay,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_LastFragment,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_CustomerName,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_IdCardType,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_CustType,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankAccount,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankPassWord,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_AccountID,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_Password,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_UserID,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_CurrencyID,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_Digest,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankAccType,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_DeviceID,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_OperNo,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcReqQueryBankAccountBySecFieldType_get_LongCustomerName,
    .set = PyCThostFtdcReqQueryBankAccountBySecFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqQueryBankAccountBySecFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqQueryBankAccountBySecField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("次席查询银行资金帐户信息请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqQueryBankAccountBySecFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqQueryBankAccountBySecFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqQueryBankAccountBySecFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqQueryBankAccountBySecFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqQueryBankAccountBySecFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqQueryBankAccountBySecFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("次席查询银行资金帐户信息请求")},
    {Py_tp_members, PyCThostFtdcReqQueryBankAccountBySecFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqQueryBankAccountBySecFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqQueryBankAccountBySecFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqQueryBankAccountBySecFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqQueryBankAccountBySecFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqQueryBankAccountBySecField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqQueryBankAccountBySecFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqQueryBankAccountBySecFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqQueryBankAccountBySecFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqQueryBankAccountBySecFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqQueryBankAccountBySecFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqQueryBankAccountBySecFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqQueryBankAccountBySecFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqQueryBankAccountBySecFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqQueryBankAccountBySecField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqQueryBankAccountBySecField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}