
#include "PyCThostFtdcOpenAccountField.h"

///银期开户信息

static int PyCThostFtdcOpenAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "ErrorID", "ErrorMsg", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcOpenAccountField_TradeCode = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcOpenAccountField_BankID = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcOpenAccountField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOpenAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcOpenAccountField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcOpenAccountField_TradeDate = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcOpenAccountField_TradeTime = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcOpenAccountField_BankSerial = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcOpenAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcOpenAccountField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcOpenAccountField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcOpenAccountField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcOpenAccountField_CustomerName = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcOpenAccountField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcOpenAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_IdentifiedCardNo_length = 0;

    /// 性别
    /// typedef char TThostFtdcGenderType
    char CThostFtdcOpenAccountField_Gender = 0;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    char *CThostFtdcOpenAccountField_CountryCode = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_CountryCode_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcOpenAccountField_CustType = 0;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcOpenAccountField_Address = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_Address_length = 0;

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    char *CThostFtdcOpenAccountField_ZipCode = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_ZipCode_length = 0;

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcOpenAccountField_Telephone = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_Telephone_length = 0;

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    char *CThostFtdcOpenAccountField_MobilePhone = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_MobilePhone_length = 0;

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    char *CThostFtdcOpenAccountField_Fax = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_Fax_length = 0;

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    char *CThostFtdcOpenAccountField_EMail = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_EMail_length = 0;

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    char CThostFtdcOpenAccountField_MoneyAccountStatus = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcOpenAccountField_BankAccount = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcOpenAccountField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcOpenAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcOpenAccountField_Password = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcOpenAccountField_InstallID = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcOpenAccountField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcOpenAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_CurrencyID_length = 0;

    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    char CThostFtdcOpenAccountField_CashExchangeCode = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcOpenAccountField_Digest = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcOpenAccountField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcOpenAccountField_DeviceID = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcOpenAccountField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcOpenAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcOpenAccountField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcOpenAccountField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcOpenAccountField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcOpenAccountField_OperNo = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_OperNo_length = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcOpenAccountField_TID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcOpenAccountField_UserID = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_UserID_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcOpenAccountField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcOpenAccountField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_ErrorMsg_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcOpenAccountField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcOpenAccountField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#iy#y#", (char **)kwlist
        , &CThostFtdcOpenAccountField_TradeCode, &CThostFtdcOpenAccountField_TradeCode_length
        , &CThostFtdcOpenAccountField_BankID, &CThostFtdcOpenAccountField_BankID_length
        , &CThostFtdcOpenAccountField_BankBranchID, &CThostFtdcOpenAccountField_BankBranchID_length
        , &CThostFtdcOpenAccountField_BrokerID, &CThostFtdcOpenAccountField_BrokerID_length
        , &CThostFtdcOpenAccountField_BrokerBranchID, &CThostFtdcOpenAccountField_BrokerBranchID_length
        , &CThostFtdcOpenAccountField_TradeDate, &CThostFtdcOpenAccountField_TradeDate_length
        , &CThostFtdcOpenAccountField_TradeTime, &CThostFtdcOpenAccountField_TradeTime_length
        , &CThostFtdcOpenAccountField_BankSerial, &CThostFtdcOpenAccountField_BankSerial_length
        , &CThostFtdcOpenAccountField_TradingDay, &CThostFtdcOpenAccountField_TradingDay_length
        , &CThostFtdcOpenAccountField_PlateSerial
        , &CThostFtdcOpenAccountField_LastFragment
        , &CThostFtdcOpenAccountField_SessionID
        , &CThostFtdcOpenAccountField_CustomerName, &CThostFtdcOpenAccountField_CustomerName_length
        , &CThostFtdcOpenAccountField_IdCardType
        , &CThostFtdcOpenAccountField_IdentifiedCardNo, &CThostFtdcOpenAccountField_IdentifiedCardNo_length
        , &CThostFtdcOpenAccountField_Gender
        , &CThostFtdcOpenAccountField_CountryCode, &CThostFtdcOpenAccountField_CountryCode_length
        , &CThostFtdcOpenAccountField_CustType
        , &CThostFtdcOpenAccountField_Address, &CThostFtdcOpenAccountField_Address_length
        , &CThostFtdcOpenAccountField_ZipCode, &CThostFtdcOpenAccountField_ZipCode_length
        , &CThostFtdcOpenAccountField_Telephone, &CThostFtdcOpenAccountField_Telephone_length
        , &CThostFtdcOpenAccountField_MobilePhone, &CThostFtdcOpenAccountField_MobilePhone_length
        , &CThostFtdcOpenAccountField_Fax, &CThostFtdcOpenAccountField_Fax_length
        , &CThostFtdcOpenAccountField_EMail, &CThostFtdcOpenAccountField_EMail_length
        , &CThostFtdcOpenAccountField_MoneyAccountStatus
        , &CThostFtdcOpenAccountField_BankAccount, &CThostFtdcOpenAccountField_BankAccount_length
        , &CThostFtdcOpenAccountField_BankPassWord, &CThostFtdcOpenAccountField_BankPassWord_length
        , &CThostFtdcOpenAccountField_AccountID, &CThostFtdcOpenAccountField_AccountID_length
        , &CThostFtdcOpenAccountField_Password, &CThostFtdcOpenAccountField_Password_length
        , &CThostFtdcOpenAccountField_InstallID
        , &CThostFtdcOpenAccountField_VerifyCertNoFlag
        , &CThostFtdcOpenAccountField_CurrencyID, &CThostFtdcOpenAccountField_CurrencyID_length
        , &CThostFtdcOpenAccountField_CashExchangeCode
        , &CThostFtdcOpenAccountField_Digest, &CThostFtdcOpenAccountField_Digest_length
        , &CThostFtdcOpenAccountField_BankAccType
        , &CThostFtdcOpenAccountField_DeviceID, &CThostFtdcOpenAccountField_DeviceID_length
        , &CThostFtdcOpenAccountField_BankSecuAccType
        , &CThostFtdcOpenAccountField_BrokerIDByBank, &CThostFtdcOpenAccountField_BrokerIDByBank_length
        , &CThostFtdcOpenAccountField_BankSecuAcc, &CThostFtdcOpenAccountField_BankSecuAcc_length
        , &CThostFtdcOpenAccountField_BankPwdFlag
        , &CThostFtdcOpenAccountField_SecuPwdFlag
        , &CThostFtdcOpenAccountField_OperNo, &CThostFtdcOpenAccountField_OperNo_length
        , &CThostFtdcOpenAccountField_TID
        , &CThostFtdcOpenAccountField_UserID, &CThostFtdcOpenAccountField_UserID_length
        , &CThostFtdcOpenAccountField_ErrorID
        , &CThostFtdcOpenAccountField_ErrorMsg, &CThostFtdcOpenAccountField_ErrorMsg_length
        , &CThostFtdcOpenAccountField_LongCustomerName, &CThostFtdcOpenAccountField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcOpenAccountField_TradeCode != NULL ) {
        if(CThostFtdcOpenAccountField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcOpenAccountField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcOpenAccountField_TradeCode, CThostFtdcOpenAccountField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcOpenAccountField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcOpenAccountField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcOpenAccountField_BankID != NULL ) {
        if(CThostFtdcOpenAccountField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcOpenAccountField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcOpenAccountField_BankID, CThostFtdcOpenAccountField_BankID_length);
        strncpy(data->BankID, CThostFtdcOpenAccountField_BankID, sizeof(data->BankID));
        CThostFtdcOpenAccountField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcOpenAccountField_BankBranchID != NULL ) {
        if(CThostFtdcOpenAccountField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcOpenAccountField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcOpenAccountField_BankBranchID, CThostFtdcOpenAccountField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcOpenAccountField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcOpenAccountField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOpenAccountField_BrokerID != NULL ) {
        if(CThostFtdcOpenAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOpenAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOpenAccountField_BrokerID, CThostFtdcOpenAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOpenAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOpenAccountField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcOpenAccountField_BrokerBranchID != NULL ) {
        if(CThostFtdcOpenAccountField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcOpenAccountField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcOpenAccountField_BrokerBranchID, CThostFtdcOpenAccountField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcOpenAccountField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcOpenAccountField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcOpenAccountField_TradeDate != NULL ) {
        if(CThostFtdcOpenAccountField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcOpenAccountField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcOpenAccountField_TradeDate, CThostFtdcOpenAccountField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcOpenAccountField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcOpenAccountField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcOpenAccountField_TradeTime != NULL ) {
        if(CThostFtdcOpenAccountField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcOpenAccountField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcOpenAccountField_TradeTime, CThostFtdcOpenAccountField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcOpenAccountField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcOpenAccountField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcOpenAccountField_BankSerial != NULL ) {
        if(CThostFtdcOpenAccountField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcOpenAccountField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcOpenAccountField_BankSerial, CThostFtdcOpenAccountField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcOpenAccountField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcOpenAccountField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcOpenAccountField_TradingDay != NULL ) {
        if(CThostFtdcOpenAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcOpenAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcOpenAccountField_TradingDay, CThostFtdcOpenAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcOpenAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcOpenAccountField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcOpenAccountField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcOpenAccountField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcOpenAccountField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcOpenAccountField_CustomerName != NULL ) {
        if(CThostFtdcOpenAccountField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcOpenAccountField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcOpenAccountField_CustomerName, CThostFtdcOpenAccountField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcOpenAccountField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcOpenAccountField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcOpenAccountField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcOpenAccountField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcOpenAccountField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcOpenAccountField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcOpenAccountField_IdentifiedCardNo, CThostFtdcOpenAccountField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcOpenAccountField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcOpenAccountField_IdentifiedCardNo = NULL;
    }

    /// 性别
    /// typedef char TThostFtdcGenderType
    data->Gender = CThostFtdcOpenAccountField_Gender;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    if( CThostFtdcOpenAccountField_CountryCode != NULL ) {
        if(CThostFtdcOpenAccountField_CountryCode_length >= (Py_ssize_t)sizeof(data->CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is 20)", CThostFtdcOpenAccountField_CountryCode_length);
            return -1;
        }
        // memset(data->CountryCode, 0, sizeof(data->CountryCode));
        // memcpy(data->CountryCode, CThostFtdcOpenAccountField_CountryCode, CThostFtdcOpenAccountField_CountryCode_length);
        strncpy(data->CountryCode, CThostFtdcOpenAccountField_CountryCode, sizeof(data->CountryCode));
        CThostFtdcOpenAccountField_CountryCode = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcOpenAccountField_CustType;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcOpenAccountField_Address != NULL ) {
        if(CThostFtdcOpenAccountField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcOpenAccountField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcOpenAccountField_Address, CThostFtdcOpenAccountField_Address_length);
        strncpy(data->Address, CThostFtdcOpenAccountField_Address, sizeof(data->Address));
        CThostFtdcOpenAccountField_Address = NULL;
    }

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    if( CThostFtdcOpenAccountField_ZipCode != NULL ) {
        if(CThostFtdcOpenAccountField_ZipCode_length >= (Py_ssize_t)sizeof(data->ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is 6)", CThostFtdcOpenAccountField_ZipCode_length);
            return -1;
        }
        // memset(data->ZipCode, 0, sizeof(data->ZipCode));
        // memcpy(data->ZipCode, CThostFtdcOpenAccountField_ZipCode, CThostFtdcOpenAccountField_ZipCode_length);
        strncpy(data->ZipCode, CThostFtdcOpenAccountField_ZipCode, sizeof(data->ZipCode));
        CThostFtdcOpenAccountField_ZipCode = NULL;
    }

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcOpenAccountField_Telephone != NULL ) {
        if(CThostFtdcOpenAccountField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcOpenAccountField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcOpenAccountField_Telephone, CThostFtdcOpenAccountField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcOpenAccountField_Telephone, sizeof(data->Telephone));
        CThostFtdcOpenAccountField_Telephone = NULL;
    }

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    if( CThostFtdcOpenAccountField_MobilePhone != NULL ) {
        if(CThostFtdcOpenAccountField_MobilePhone_length >= (Py_ssize_t)sizeof(data->MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is 20)", CThostFtdcOpenAccountField_MobilePhone_length);
            return -1;
        }
        // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
        // memcpy(data->MobilePhone, CThostFtdcOpenAccountField_MobilePhone, CThostFtdcOpenAccountField_MobilePhone_length);
        strncpy(data->MobilePhone, CThostFtdcOpenAccountField_MobilePhone, sizeof(data->MobilePhone));
        CThostFtdcOpenAccountField_MobilePhone = NULL;
    }

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    if( CThostFtdcOpenAccountField_Fax != NULL ) {
        if(CThostFtdcOpenAccountField_Fax_length >= (Py_ssize_t)sizeof(data->Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is 40)", CThostFtdcOpenAccountField_Fax_length);
            return -1;
        }
        // memset(data->Fax, 0, sizeof(data->Fax));
        // memcpy(data->Fax, CThostFtdcOpenAccountField_Fax, CThostFtdcOpenAccountField_Fax_length);
        strncpy(data->Fax, CThostFtdcOpenAccountField_Fax, sizeof(data->Fax));
        CThostFtdcOpenAccountField_Fax = NULL;
    }

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    if( CThostFtdcOpenAccountField_EMail != NULL ) {
        if(CThostFtdcOpenAccountField_EMail_length >= (Py_ssize_t)sizeof(data->EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is 40)", CThostFtdcOpenAccountField_EMail_length);
            return -1;
        }
        // memset(data->EMail, 0, sizeof(data->EMail));
        // memcpy(data->EMail, CThostFtdcOpenAccountField_EMail, CThostFtdcOpenAccountField_EMail_length);
        strncpy(data->EMail, CThostFtdcOpenAccountField_EMail, sizeof(data->EMail));
        CThostFtdcOpenAccountField_EMail = NULL;
    }

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    data->MoneyAccountStatus = CThostFtdcOpenAccountField_MoneyAccountStatus;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcOpenAccountField_BankAccount != NULL ) {
        if(CThostFtdcOpenAccountField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcOpenAccountField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcOpenAccountField_BankAccount, CThostFtdcOpenAccountField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcOpenAccountField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcOpenAccountField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcOpenAccountField_BankPassWord != NULL ) {
        if(CThostFtdcOpenAccountField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcOpenAccountField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcOpenAccountField_BankPassWord, CThostFtdcOpenAccountField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcOpenAccountField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcOpenAccountField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcOpenAccountField_AccountID != NULL ) {
        if(CThostFtdcOpenAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcOpenAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcOpenAccountField_AccountID, CThostFtdcOpenAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcOpenAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcOpenAccountField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcOpenAccountField_Password != NULL ) {
        if(CThostFtdcOpenAccountField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcOpenAccountField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcOpenAccountField_Password, CThostFtdcOpenAccountField_Password_length);
        strncpy(data->Password, CThostFtdcOpenAccountField_Password, sizeof(data->Password));
        CThostFtdcOpenAccountField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcOpenAccountField_InstallID;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcOpenAccountField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcOpenAccountField_CurrencyID != NULL ) {
        if(CThostFtdcOpenAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcOpenAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcOpenAccountField_CurrencyID, CThostFtdcOpenAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcOpenAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcOpenAccountField_CurrencyID = NULL;
    }

    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    data->CashExchangeCode = CThostFtdcOpenAccountField_CashExchangeCode;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcOpenAccountField_Digest != NULL ) {
        if(CThostFtdcOpenAccountField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcOpenAccountField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcOpenAccountField_Digest, CThostFtdcOpenAccountField_Digest_length);
        strncpy(data->Digest, CThostFtdcOpenAccountField_Digest, sizeof(data->Digest));
        CThostFtdcOpenAccountField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcOpenAccountField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcOpenAccountField_DeviceID != NULL ) {
        if(CThostFtdcOpenAccountField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcOpenAccountField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcOpenAccountField_DeviceID, CThostFtdcOpenAccountField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcOpenAccountField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcOpenAccountField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcOpenAccountField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcOpenAccountField_BrokerIDByBank != NULL ) {
        if(CThostFtdcOpenAccountField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcOpenAccountField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcOpenAccountField_BrokerIDByBank, CThostFtdcOpenAccountField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcOpenAccountField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcOpenAccountField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcOpenAccountField_BankSecuAcc != NULL ) {
        if(CThostFtdcOpenAccountField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcOpenAccountField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcOpenAccountField_BankSecuAcc, CThostFtdcOpenAccountField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcOpenAccountField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcOpenAccountField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcOpenAccountField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcOpenAccountField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcOpenAccountField_OperNo != NULL ) {
        if(CThostFtdcOpenAccountField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcOpenAccountField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcOpenAccountField_OperNo, CThostFtdcOpenAccountField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcOpenAccountField_OperNo, sizeof(data->OperNo));
        CThostFtdcOpenAccountField_OperNo = NULL;
    }

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcOpenAccountField_TID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcOpenAccountField_UserID != NULL ) {
        if(CThostFtdcOpenAccountField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcOpenAccountField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcOpenAccountField_UserID, CThostFtdcOpenAccountField_UserID_length);
        strncpy(data->UserID, CThostFtdcOpenAccountField_UserID, sizeof(data->UserID));
        CThostFtdcOpenAccountField_UserID = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcOpenAccountField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcOpenAccountField_ErrorMsg != NULL ) {
        if(CThostFtdcOpenAccountField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcOpenAccountField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcOpenAccountField_ErrorMsg, CThostFtdcOpenAccountField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcOpenAccountField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcOpenAccountField_ErrorMsg = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcOpenAccountField_LongCustomerName != NULL ) {
        if(CThostFtdcOpenAccountField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcOpenAccountField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcOpenAccountField_LongCustomerName, CThostFtdcOpenAccountField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcOpenAccountField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcOpenAccountField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOpenAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:y,s:y}"
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
        , "Gender", data->Gender
        , "CountryCode", data->CountryCode//, (Py_ssize_t)sizeof(data->CountryCode)
        , "CustType", data->CustType
        , "Address", data->Address//, (Py_ssize_t)sizeof(data->Address)
        , "ZipCode", data->ZipCode//, (Py_ssize_t)sizeof(data->ZipCode)
        , "Telephone", data->Telephone//, (Py_ssize_t)sizeof(data->Telephone)
        , "MobilePhone", data->MobilePhone//, (Py_ssize_t)sizeof(data->MobilePhone)
        , "Fax", data->Fax//, (Py_ssize_t)sizeof(data->Fax)
        , "EMail", data->EMail//, (Py_ssize_t)sizeof(data->EMail)
        , "MoneyAccountStatus", data->MoneyAccountStatus
        , "BankAccount", data->BankAccount//, (Py_ssize_t)sizeof(data->BankAccount)
        , "BankPassWord", data->BankPassWord//, (Py_ssize_t)sizeof(data->BankPassWord)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "InstallID", data->InstallID
        , "VerifyCertNoFlag", data->VerifyCertNoFlag
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "CashExchangeCode", data->CashExchangeCode
        , "Digest", data->Digest//, (Py_ssize_t)sizeof(data->Digest)
        , "BankAccType", data->BankAccType
        , "DeviceID", data->DeviceID//, (Py_ssize_t)sizeof(data->DeviceID)
        , "BankSecuAccType", data->BankSecuAccType
        , "BrokerIDByBank", data->BrokerIDByBank//, (Py_ssize_t)sizeof(data->BrokerIDByBank)
        , "BankSecuAcc", data->BankSecuAcc//, (Py_ssize_t)sizeof(data->BankSecuAcc)
        , "BankPwdFlag", data->BankPwdFlag
        , "SecuPwdFlag", data->SecuPwdFlag
        , "OperNo", data->OperNo//, (Py_ssize_t)sizeof(data->OperNo)
        , "TID", data->TID
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ErrorID", data->ErrorID
        , "ErrorMsg", data->ErrorMsg//, (Py_ssize_t)sizeof(data->ErrorMsg)
        , "LongCustomerName", data->LongCustomerName//, (Py_ssize_t)sizeof(data->LongCustomerName)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOpenAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOpenAccountField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcOpenAccountFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOpenAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcOpenAccountFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcOpenAccountFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcOpenAccountFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcOpenAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcOpenAccountFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcOpenAccountFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 性别
/// typedef char TThostFtdcGenderType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_Gender(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Gender), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_Gender(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Gender Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::Gender)) {
        PyErr_SetString(PyExc_ValueError, "Gender must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->Gender = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 国家代码
/// typedef char TThostFtdcCountryCodeType[21]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_CountryCode(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CountryCode, (Py_ssize_t)sizeof(data->CountryCode));
    return PyBytes_FromString(data->CountryCode);
}

static int PyCThostFtdcOpenAccountFieldType_set_CountryCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CountryCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::CountryCode)) {
        PyErr_SetString(PyExc_ValueError, "CountryCode must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->CountryCode, 0, sizeof(data->CountryCode));
    // memcpy(data->CountryCode, buf, len);
    strncpy(data->CountryCode, buf, sizeof(data->CountryCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcOpenAccountFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 邮编
/// typedef char TThostFtdcZipCodeType[7]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_ZipCode(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ZipCode, (Py_ssize_t)sizeof(data->ZipCode));
    return PyBytes_FromString(data->ZipCode);
}

static int PyCThostFtdcOpenAccountFieldType_set_ZipCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->ZipCode, 0, sizeof(data->ZipCode));
    // memcpy(data->ZipCode, buf, len);
    strncpy(data->ZipCode, buf, sizeof(data->ZipCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电话号码
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcOpenAccountFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机
/// typedef char TThostFtdcMobilePhoneType[21]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_MobilePhone(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MobilePhone, (Py_ssize_t)sizeof(data->MobilePhone));
    return PyBytes_FromString(data->MobilePhone);
}

static int PyCThostFtdcOpenAccountFieldType_set_MobilePhone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MobilePhone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::MobilePhone)) {
        PyErr_SetString(PyExc_ValueError, "MobilePhone must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
    // memcpy(data->MobilePhone, buf, len);
    strncpy(data->MobilePhone, buf, sizeof(data->MobilePhone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 传真
/// typedef char TThostFtdcFaxType[41]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_Fax(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Fax, (Py_ssize_t)sizeof(data->Fax));
    return PyBytes_FromString(data->Fax);
}

static int PyCThostFtdcOpenAccountFieldType_set_Fax(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Fax Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::Fax)) {
        PyErr_SetString(PyExc_ValueError, "Fax must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->Fax, 0, sizeof(data->Fax));
    // memcpy(data->Fax, buf, len);
    strncpy(data->Fax, buf, sizeof(data->Fax));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电子邮件
/// typedef char TThostFtdcEMailType[41]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_EMail(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EMail, (Py_ssize_t)sizeof(data->EMail));
    return PyBytes_FromString(data->EMail);
}

static int PyCThostFtdcOpenAccountFieldType_set_EMail(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EMail Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::EMail)) {
        PyErr_SetString(PyExc_ValueError, "EMail must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->EMail, 0, sizeof(data->EMail));
    // memcpy(data->EMail, buf, len);
    strncpy(data->EMail, buf, sizeof(data->EMail));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户状态
/// typedef char TThostFtdcMoneyAccountStatusType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_MoneyAccountStatus(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MoneyAccountStatus), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_MoneyAccountStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MoneyAccountStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::MoneyAccountStatus)) {
        PyErr_SetString(PyExc_ValueError, "MoneyAccountStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->MoneyAccountStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcOpenAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcOpenAccountFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcOpenAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 汇钞标志
/// typedef char TThostFtdcCashExchangeCodeType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_CashExchangeCode(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CashExchangeCode), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_CashExchangeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CashExchangeCode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::CashExchangeCode)) {
        PyErr_SetString(PyExc_ValueError, "CashExchangeCode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->CashExchangeCode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcOpenAccountFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcOpenAccountFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcOpenAccountFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcOpenAccountFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcOpenAccountFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcOpenAccountFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcOpenAccountFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcOpenAccountFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcOpenAccountFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcOpenAccountFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOpenAccountField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOpenAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOpenAccountFieldData>(self);
    CThostFtdcOpenAccountField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOpenAccountFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOpenAccountFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcOpenAccountFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话号")
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
        .offset = offsetof(PyCThostFtdcOpenAccountFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
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
        .offset = offsetof(PyCThostFtdcOpenAccountFieldData, data.TID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("交易ID")
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
        .offset = offsetof(PyCThostFtdcOpenAccountFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOpenAccountFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcOpenAccountFieldType_get_TradeCode,
    .set = PyCThostFtdcOpenAccountFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankID,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankBranchID,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOpenAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcOpenAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcOpenAccountFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcOpenAccountFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcOpenAccountFieldType_get_TradeDate,
    .set = PyCThostFtdcOpenAccountFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcOpenAccountFieldType_get_TradeTime,
    .set = PyCThostFtdcOpenAccountFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankSerial,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcOpenAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcOpenAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcOpenAccountFieldType_get_LastFragment,
    .set = PyCThostFtdcOpenAccountFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcOpenAccountFieldType_get_CustomerName,
    .set = PyCThostFtdcOpenAccountFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcOpenAccountFieldType_get_IdCardType,
    .set = PyCThostFtdcOpenAccountFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcOpenAccountFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcOpenAccountFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 性别
    /// typedef char TThostFtdcGenderType
    {
    .name = "Gender",
    .get = PyCThostFtdcOpenAccountFieldType_get_Gender,
    .set = PyCThostFtdcOpenAccountFieldType_set_Gender,
    .doc = PyDoc_STR("性别"),
    },
    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    {
    .name = "CountryCode",
    .get = PyCThostFtdcOpenAccountFieldType_get_CountryCode,
    .set = PyCThostFtdcOpenAccountFieldType_set_CountryCode,
    .doc = PyDoc_STR("国家代码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcOpenAccountFieldType_get_CustType,
    .set = PyCThostFtdcOpenAccountFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcOpenAccountFieldType_get_Address,
    .set = PyCThostFtdcOpenAccountFieldType_set_Address,
    .doc = PyDoc_STR("地址"),
    },
    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    {
    .name = "ZipCode",
    .get = PyCThostFtdcOpenAccountFieldType_get_ZipCode,
    .set = PyCThostFtdcOpenAccountFieldType_set_ZipCode,
    .doc = PyDoc_STR("邮编"),
    },
    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcOpenAccountFieldType_get_Telephone,
    .set = PyCThostFtdcOpenAccountFieldType_set_Telephone,
    .doc = PyDoc_STR("电话号码"),
    },
    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    {
    .name = "MobilePhone",
    .get = PyCThostFtdcOpenAccountFieldType_get_MobilePhone,
    .set = PyCThostFtdcOpenAccountFieldType_set_MobilePhone,
    .doc = PyDoc_STR("手机"),
    },
    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    {
    .name = "Fax",
    .get = PyCThostFtdcOpenAccountFieldType_get_Fax,
    .set = PyCThostFtdcOpenAccountFieldType_set_Fax,
    .doc = PyDoc_STR("传真"),
    },
    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    {
    .name = "EMail",
    .get = PyCThostFtdcOpenAccountFieldType_get_EMail,
    .set = PyCThostFtdcOpenAccountFieldType_set_EMail,
    .doc = PyDoc_STR("电子邮件"),
    },
    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    {
    .name = "MoneyAccountStatus",
    .get = PyCThostFtdcOpenAccountFieldType_get_MoneyAccountStatus,
    .set = PyCThostFtdcOpenAccountFieldType_set_MoneyAccountStatus,
    .doc = PyDoc_STR("资金账户状态"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankAccount,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankPassWord,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcOpenAccountFieldType_get_AccountID,
    .set = PyCThostFtdcOpenAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcOpenAccountFieldType_get_Password,
    .set = PyCThostFtdcOpenAccountFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcOpenAccountFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcOpenAccountFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcOpenAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcOpenAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    {
    .name = "CashExchangeCode",
    .get = PyCThostFtdcOpenAccountFieldType_get_CashExchangeCode,
    .set = PyCThostFtdcOpenAccountFieldType_set_CashExchangeCode,
    .doc = PyDoc_STR("汇钞标志"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcOpenAccountFieldType_get_Digest,
    .set = PyCThostFtdcOpenAccountFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankAccType,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcOpenAccountFieldType_get_DeviceID,
    .set = PyCThostFtdcOpenAccountFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcOpenAccountFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcOpenAccountFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcOpenAccountFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcOpenAccountFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcOpenAccountFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcOpenAccountFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcOpenAccountFieldType_get_OperNo,
    .set = PyCThostFtdcOpenAccountFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcOpenAccountFieldType_get_UserID,
    .set = PyCThostFtdcOpenAccountFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcOpenAccountFieldType_get_ErrorMsg,
    .set = PyCThostFtdcOpenAccountFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcOpenAccountFieldType_get_LongCustomerName,
    .set = PyCThostFtdcOpenAccountFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOpenAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOpenAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银期开户信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOpenAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOpenAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOpenAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOpenAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOpenAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOpenAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银期开户信息")},
    {Py_tp_members, PyCThostFtdcOpenAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcOpenAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOpenAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOpenAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOpenAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcOpenAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOpenAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOpenAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOpenAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOpenAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOpenAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOpenAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOpenAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOpenAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOpenAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOpenAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}