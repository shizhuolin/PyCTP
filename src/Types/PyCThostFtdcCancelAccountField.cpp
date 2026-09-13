
#include "PyCThostFtdcCancelAccountField.h"

///银期销户信息

static int PyCThostFtdcCancelAccountFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "ErrorID", "ErrorMsg", "LongCustomerName", NULL };


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    char *CThostFtdcCancelAccountField_TradeCode = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_TradeCode_length = 0;

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    char *CThostFtdcCancelAccountField_BankID = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BankID_length = 0;

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    char *CThostFtdcCancelAccountField_BankBranchID = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BankBranchID_length = 0;

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcCancelAccountField_BrokerID = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BrokerID_length = 0;

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    char *CThostFtdcCancelAccountField_BrokerBranchID = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BrokerBranchID_length = 0;

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcCancelAccountField_TradeDate = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_TradeDate_length = 0;

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    char *CThostFtdcCancelAccountField_TradeTime = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_TradeTime_length = 0;

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    char *CThostFtdcCancelAccountField_BankSerial = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BankSerial_length = 0;

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    char *CThostFtdcCancelAccountField_TradingDay = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_TradingDay_length = 0;

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    int CThostFtdcCancelAccountField_PlateSerial = 0;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    char CThostFtdcCancelAccountField_LastFragment = 0;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcCancelAccountField_SessionID = 0;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    char *CThostFtdcCancelAccountField_CustomerName = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_CustomerName_length = 0;

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    char CThostFtdcCancelAccountField_IdCardType = 0;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    char *CThostFtdcCancelAccountField_IdentifiedCardNo = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_IdentifiedCardNo_length = 0;

    /// 性别
    /// typedef char TThostFtdcGenderType
    char CThostFtdcCancelAccountField_Gender = 0;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    char *CThostFtdcCancelAccountField_CountryCode = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_CountryCode_length = 0;

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    char CThostFtdcCancelAccountField_CustType = 0;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    char *CThostFtdcCancelAccountField_Address = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_Address_length = 0;

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    char *CThostFtdcCancelAccountField_ZipCode = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_ZipCode_length = 0;

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    char *CThostFtdcCancelAccountField_Telephone = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_Telephone_length = 0;

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    char *CThostFtdcCancelAccountField_MobilePhone = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_MobilePhone_length = 0;

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    char *CThostFtdcCancelAccountField_Fax = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_Fax_length = 0;

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    char *CThostFtdcCancelAccountField_EMail = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_EMail_length = 0;

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    char CThostFtdcCancelAccountField_MoneyAccountStatus = 0;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcCancelAccountField_BankAccount = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BankAccount_length = 0;

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcCancelAccountField_BankPassWord = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BankPassWord_length = 0;

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcCancelAccountField_AccountID = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_AccountID_length = 0;

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcCancelAccountField_Password = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_Password_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcCancelAccountField_InstallID = 0;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    char CThostFtdcCancelAccountField_VerifyCertNoFlag = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcCancelAccountField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_CurrencyID_length = 0;

    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    char CThostFtdcCancelAccountField_CashExchangeCode = 0;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    char *CThostFtdcCancelAccountField_Digest = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_Digest_length = 0;

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcCancelAccountField_BankAccType = 0;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    char *CThostFtdcCancelAccountField_DeviceID = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_DeviceID_length = 0;

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    char CThostFtdcCancelAccountField_BankSecuAccType = 0;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    char *CThostFtdcCancelAccountField_BrokerIDByBank = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BrokerIDByBank_length = 0;

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    char *CThostFtdcCancelAccountField_BankSecuAcc = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_BankSecuAcc_length = 0;

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcCancelAccountField_BankPwdFlag = 0;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    char CThostFtdcCancelAccountField_SecuPwdFlag = 0;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    char *CThostFtdcCancelAccountField_OperNo = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_OperNo_length = 0;

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    int CThostFtdcCancelAccountField_TID = 0;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcCancelAccountField_UserID = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_UserID_length = 0;

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    int CThostFtdcCancelAccountField_ErrorID = 0;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcCancelAccountField_ErrorMsg = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_ErrorMsg_length = 0;

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    char *CThostFtdcCancelAccountField_LongCustomerName = NULL;
    Py_ssize_t CThostFtdcCancelAccountField_LongCustomerName_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#iy#y#", (char **)kwlist
        , &CThostFtdcCancelAccountField_TradeCode, &CThostFtdcCancelAccountField_TradeCode_length
        , &CThostFtdcCancelAccountField_BankID, &CThostFtdcCancelAccountField_BankID_length
        , &CThostFtdcCancelAccountField_BankBranchID, &CThostFtdcCancelAccountField_BankBranchID_length
        , &CThostFtdcCancelAccountField_BrokerID, &CThostFtdcCancelAccountField_BrokerID_length
        , &CThostFtdcCancelAccountField_BrokerBranchID, &CThostFtdcCancelAccountField_BrokerBranchID_length
        , &CThostFtdcCancelAccountField_TradeDate, &CThostFtdcCancelAccountField_TradeDate_length
        , &CThostFtdcCancelAccountField_TradeTime, &CThostFtdcCancelAccountField_TradeTime_length
        , &CThostFtdcCancelAccountField_BankSerial, &CThostFtdcCancelAccountField_BankSerial_length
        , &CThostFtdcCancelAccountField_TradingDay, &CThostFtdcCancelAccountField_TradingDay_length
        , &CThostFtdcCancelAccountField_PlateSerial
        , &CThostFtdcCancelAccountField_LastFragment
        , &CThostFtdcCancelAccountField_SessionID
        , &CThostFtdcCancelAccountField_CustomerName, &CThostFtdcCancelAccountField_CustomerName_length
        , &CThostFtdcCancelAccountField_IdCardType
        , &CThostFtdcCancelAccountField_IdentifiedCardNo, &CThostFtdcCancelAccountField_IdentifiedCardNo_length
        , &CThostFtdcCancelAccountField_Gender
        , &CThostFtdcCancelAccountField_CountryCode, &CThostFtdcCancelAccountField_CountryCode_length
        , &CThostFtdcCancelAccountField_CustType
        , &CThostFtdcCancelAccountField_Address, &CThostFtdcCancelAccountField_Address_length
        , &CThostFtdcCancelAccountField_ZipCode, &CThostFtdcCancelAccountField_ZipCode_length
        , &CThostFtdcCancelAccountField_Telephone, &CThostFtdcCancelAccountField_Telephone_length
        , &CThostFtdcCancelAccountField_MobilePhone, &CThostFtdcCancelAccountField_MobilePhone_length
        , &CThostFtdcCancelAccountField_Fax, &CThostFtdcCancelAccountField_Fax_length
        , &CThostFtdcCancelAccountField_EMail, &CThostFtdcCancelAccountField_EMail_length
        , &CThostFtdcCancelAccountField_MoneyAccountStatus
        , &CThostFtdcCancelAccountField_BankAccount, &CThostFtdcCancelAccountField_BankAccount_length
        , &CThostFtdcCancelAccountField_BankPassWord, &CThostFtdcCancelAccountField_BankPassWord_length
        , &CThostFtdcCancelAccountField_AccountID, &CThostFtdcCancelAccountField_AccountID_length
        , &CThostFtdcCancelAccountField_Password, &CThostFtdcCancelAccountField_Password_length
        , &CThostFtdcCancelAccountField_InstallID
        , &CThostFtdcCancelAccountField_VerifyCertNoFlag
        , &CThostFtdcCancelAccountField_CurrencyID, &CThostFtdcCancelAccountField_CurrencyID_length
        , &CThostFtdcCancelAccountField_CashExchangeCode
        , &CThostFtdcCancelAccountField_Digest, &CThostFtdcCancelAccountField_Digest_length
        , &CThostFtdcCancelAccountField_BankAccType
        , &CThostFtdcCancelAccountField_DeviceID, &CThostFtdcCancelAccountField_DeviceID_length
        , &CThostFtdcCancelAccountField_BankSecuAccType
        , &CThostFtdcCancelAccountField_BrokerIDByBank, &CThostFtdcCancelAccountField_BrokerIDByBank_length
        , &CThostFtdcCancelAccountField_BankSecuAcc, &CThostFtdcCancelAccountField_BankSecuAcc_length
        , &CThostFtdcCancelAccountField_BankPwdFlag
        , &CThostFtdcCancelAccountField_SecuPwdFlag
        , &CThostFtdcCancelAccountField_OperNo, &CThostFtdcCancelAccountField_OperNo_length
        , &CThostFtdcCancelAccountField_TID
        , &CThostFtdcCancelAccountField_UserID, &CThostFtdcCancelAccountField_UserID_length
        , &CThostFtdcCancelAccountField_ErrorID
        , &CThostFtdcCancelAccountField_ErrorMsg, &CThostFtdcCancelAccountField_ErrorMsg_length
        , &CThostFtdcCancelAccountField_LongCustomerName, &CThostFtdcCancelAccountField_LongCustomerName_length
    )) {
        return -1;
    }

    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);


    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    if( CThostFtdcCancelAccountField_TradeCode != NULL ) {
        if(CThostFtdcCancelAccountField_TradeCode_length >= (Py_ssize_t)sizeof(data->TradeCode)) {
            PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is 6)", CThostFtdcCancelAccountField_TradeCode_length);
            return -1;
        }
        // memset(data->TradeCode, 0, sizeof(data->TradeCode));
        // memcpy(data->TradeCode, CThostFtdcCancelAccountField_TradeCode, CThostFtdcCancelAccountField_TradeCode_length);
        strncpy(data->TradeCode, CThostFtdcCancelAccountField_TradeCode, sizeof(data->TradeCode));
        CThostFtdcCancelAccountField_TradeCode = NULL;
    }

    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    if( CThostFtdcCancelAccountField_BankID != NULL ) {
        if(CThostFtdcCancelAccountField_BankID_length >= (Py_ssize_t)sizeof(data->BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is 3)", CThostFtdcCancelAccountField_BankID_length);
            return -1;
        }
        // memset(data->BankID, 0, sizeof(data->BankID));
        // memcpy(data->BankID, CThostFtdcCancelAccountField_BankID, CThostFtdcCancelAccountField_BankID_length);
        strncpy(data->BankID, CThostFtdcCancelAccountField_BankID, sizeof(data->BankID));
        CThostFtdcCancelAccountField_BankID = NULL;
    }

    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    if( CThostFtdcCancelAccountField_BankBranchID != NULL ) {
        if(CThostFtdcCancelAccountField_BankBranchID_length >= (Py_ssize_t)sizeof(data->BankBranchID)) {
            PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is 4)", CThostFtdcCancelAccountField_BankBranchID_length);
            return -1;
        }
        // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
        // memcpy(data->BankBranchID, CThostFtdcCancelAccountField_BankBranchID, CThostFtdcCancelAccountField_BankBranchID_length);
        strncpy(data->BankBranchID, CThostFtdcCancelAccountField_BankBranchID, sizeof(data->BankBranchID));
        CThostFtdcCancelAccountField_BankBranchID = NULL;
    }

    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcCancelAccountField_BrokerID != NULL ) {
        if(CThostFtdcCancelAccountField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcCancelAccountField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcCancelAccountField_BrokerID, CThostFtdcCancelAccountField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcCancelAccountField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcCancelAccountField_BrokerID = NULL;
    }

    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    if( CThostFtdcCancelAccountField_BrokerBranchID != NULL ) {
        if(CThostFtdcCancelAccountField_BrokerBranchID_length >= (Py_ssize_t)sizeof(data->BrokerBranchID)) {
            PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is 30)", CThostFtdcCancelAccountField_BrokerBranchID_length);
            return -1;
        }
        // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
        // memcpy(data->BrokerBranchID, CThostFtdcCancelAccountField_BrokerBranchID, CThostFtdcCancelAccountField_BrokerBranchID_length);
        strncpy(data->BrokerBranchID, CThostFtdcCancelAccountField_BrokerBranchID, sizeof(data->BrokerBranchID));
        CThostFtdcCancelAccountField_BrokerBranchID = NULL;
    }

    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcCancelAccountField_TradeDate != NULL ) {
        if(CThostFtdcCancelAccountField_TradeDate_length >= (Py_ssize_t)sizeof(data->TradeDate)) {
            PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is 8)", CThostFtdcCancelAccountField_TradeDate_length);
            return -1;
        }
        // memset(data->TradeDate, 0, sizeof(data->TradeDate));
        // memcpy(data->TradeDate, CThostFtdcCancelAccountField_TradeDate, CThostFtdcCancelAccountField_TradeDate_length);
        strncpy(data->TradeDate, CThostFtdcCancelAccountField_TradeDate, sizeof(data->TradeDate));
        CThostFtdcCancelAccountField_TradeDate = NULL;
    }

    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    if( CThostFtdcCancelAccountField_TradeTime != NULL ) {
        if(CThostFtdcCancelAccountField_TradeTime_length >= (Py_ssize_t)sizeof(data->TradeTime)) {
            PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is 8)", CThostFtdcCancelAccountField_TradeTime_length);
            return -1;
        }
        // memset(data->TradeTime, 0, sizeof(data->TradeTime));
        // memcpy(data->TradeTime, CThostFtdcCancelAccountField_TradeTime, CThostFtdcCancelAccountField_TradeTime_length);
        strncpy(data->TradeTime, CThostFtdcCancelAccountField_TradeTime, sizeof(data->TradeTime));
        CThostFtdcCancelAccountField_TradeTime = NULL;
    }

    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    if( CThostFtdcCancelAccountField_BankSerial != NULL ) {
        if(CThostFtdcCancelAccountField_BankSerial_length >= (Py_ssize_t)sizeof(data->BankSerial)) {
            PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is 12)", CThostFtdcCancelAccountField_BankSerial_length);
            return -1;
        }
        // memset(data->BankSerial, 0, sizeof(data->BankSerial));
        // memcpy(data->BankSerial, CThostFtdcCancelAccountField_BankSerial, CThostFtdcCancelAccountField_BankSerial_length);
        strncpy(data->BankSerial, CThostFtdcCancelAccountField_BankSerial, sizeof(data->BankSerial));
        CThostFtdcCancelAccountField_BankSerial = NULL;
    }

    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    if( CThostFtdcCancelAccountField_TradingDay != NULL ) {
        if(CThostFtdcCancelAccountField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcCancelAccountField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcCancelAccountField_TradingDay, CThostFtdcCancelAccountField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcCancelAccountField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcCancelAccountField_TradingDay = NULL;
    }

    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    data->PlateSerial = CThostFtdcCancelAccountField_PlateSerial;

    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    data->LastFragment = CThostFtdcCancelAccountField_LastFragment;

    /// 会话号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcCancelAccountField_SessionID;

    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    if( CThostFtdcCancelAccountField_CustomerName != NULL ) {
        if(CThostFtdcCancelAccountField_CustomerName_length >= (Py_ssize_t)sizeof(data->CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is 50)", CThostFtdcCancelAccountField_CustomerName_length);
            return -1;
        }
        // memset(data->CustomerName, 0, sizeof(data->CustomerName));
        // memcpy(data->CustomerName, CThostFtdcCancelAccountField_CustomerName, CThostFtdcCancelAccountField_CustomerName_length);
        strncpy(data->CustomerName, CThostFtdcCancelAccountField_CustomerName, sizeof(data->CustomerName));
        CThostFtdcCancelAccountField_CustomerName = NULL;
    }

    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    data->IdCardType = CThostFtdcCancelAccountField_IdCardType;

    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    if( CThostFtdcCancelAccountField_IdentifiedCardNo != NULL ) {
        if(CThostFtdcCancelAccountField_IdentifiedCardNo_length >= (Py_ssize_t)sizeof(data->IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is 50)", CThostFtdcCancelAccountField_IdentifiedCardNo_length);
            return -1;
        }
        // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
        // memcpy(data->IdentifiedCardNo, CThostFtdcCancelAccountField_IdentifiedCardNo, CThostFtdcCancelAccountField_IdentifiedCardNo_length);
        strncpy(data->IdentifiedCardNo, CThostFtdcCancelAccountField_IdentifiedCardNo, sizeof(data->IdentifiedCardNo));
        CThostFtdcCancelAccountField_IdentifiedCardNo = NULL;
    }

    /// 性别
    /// typedef char TThostFtdcGenderType
    data->Gender = CThostFtdcCancelAccountField_Gender;

    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    if( CThostFtdcCancelAccountField_CountryCode != NULL ) {
        if(CThostFtdcCancelAccountField_CountryCode_length >= (Py_ssize_t)sizeof(data->CountryCode)) {
            PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is 20)", CThostFtdcCancelAccountField_CountryCode_length);
            return -1;
        }
        // memset(data->CountryCode, 0, sizeof(data->CountryCode));
        // memcpy(data->CountryCode, CThostFtdcCancelAccountField_CountryCode, CThostFtdcCancelAccountField_CountryCode_length);
        strncpy(data->CountryCode, CThostFtdcCancelAccountField_CountryCode, sizeof(data->CountryCode));
        CThostFtdcCancelAccountField_CountryCode = NULL;
    }

    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    data->CustType = CThostFtdcCancelAccountField_CustType;

    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    if( CThostFtdcCancelAccountField_Address != NULL ) {
        if(CThostFtdcCancelAccountField_Address_length >= (Py_ssize_t)sizeof(data->Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is 100)", CThostFtdcCancelAccountField_Address_length);
            return -1;
        }
        // memset(data->Address, 0, sizeof(data->Address));
        // memcpy(data->Address, CThostFtdcCancelAccountField_Address, CThostFtdcCancelAccountField_Address_length);
        strncpy(data->Address, CThostFtdcCancelAccountField_Address, sizeof(data->Address));
        CThostFtdcCancelAccountField_Address = NULL;
    }

    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    if( CThostFtdcCancelAccountField_ZipCode != NULL ) {
        if(CThostFtdcCancelAccountField_ZipCode_length >= (Py_ssize_t)sizeof(data->ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is 6)", CThostFtdcCancelAccountField_ZipCode_length);
            return -1;
        }
        // memset(data->ZipCode, 0, sizeof(data->ZipCode));
        // memcpy(data->ZipCode, CThostFtdcCancelAccountField_ZipCode, CThostFtdcCancelAccountField_ZipCode_length);
        strncpy(data->ZipCode, CThostFtdcCancelAccountField_ZipCode, sizeof(data->ZipCode));
        CThostFtdcCancelAccountField_ZipCode = NULL;
    }

    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    if( CThostFtdcCancelAccountField_Telephone != NULL ) {
        if(CThostFtdcCancelAccountField_Telephone_length >= (Py_ssize_t)sizeof(data->Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is 40)", CThostFtdcCancelAccountField_Telephone_length);
            return -1;
        }
        // memset(data->Telephone, 0, sizeof(data->Telephone));
        // memcpy(data->Telephone, CThostFtdcCancelAccountField_Telephone, CThostFtdcCancelAccountField_Telephone_length);
        strncpy(data->Telephone, CThostFtdcCancelAccountField_Telephone, sizeof(data->Telephone));
        CThostFtdcCancelAccountField_Telephone = NULL;
    }

    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    if( CThostFtdcCancelAccountField_MobilePhone != NULL ) {
        if(CThostFtdcCancelAccountField_MobilePhone_length >= (Py_ssize_t)sizeof(data->MobilePhone)) {
            PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is 20)", CThostFtdcCancelAccountField_MobilePhone_length);
            return -1;
        }
        // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
        // memcpy(data->MobilePhone, CThostFtdcCancelAccountField_MobilePhone, CThostFtdcCancelAccountField_MobilePhone_length);
        strncpy(data->MobilePhone, CThostFtdcCancelAccountField_MobilePhone, sizeof(data->MobilePhone));
        CThostFtdcCancelAccountField_MobilePhone = NULL;
    }

    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    if( CThostFtdcCancelAccountField_Fax != NULL ) {
        if(CThostFtdcCancelAccountField_Fax_length >= (Py_ssize_t)sizeof(data->Fax)) {
            PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is 40)", CThostFtdcCancelAccountField_Fax_length);
            return -1;
        }
        // memset(data->Fax, 0, sizeof(data->Fax));
        // memcpy(data->Fax, CThostFtdcCancelAccountField_Fax, CThostFtdcCancelAccountField_Fax_length);
        strncpy(data->Fax, CThostFtdcCancelAccountField_Fax, sizeof(data->Fax));
        CThostFtdcCancelAccountField_Fax = NULL;
    }

    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    if( CThostFtdcCancelAccountField_EMail != NULL ) {
        if(CThostFtdcCancelAccountField_EMail_length >= (Py_ssize_t)sizeof(data->EMail)) {
            PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is 40)", CThostFtdcCancelAccountField_EMail_length);
            return -1;
        }
        // memset(data->EMail, 0, sizeof(data->EMail));
        // memcpy(data->EMail, CThostFtdcCancelAccountField_EMail, CThostFtdcCancelAccountField_EMail_length);
        strncpy(data->EMail, CThostFtdcCancelAccountField_EMail, sizeof(data->EMail));
        CThostFtdcCancelAccountField_EMail = NULL;
    }

    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    data->MoneyAccountStatus = CThostFtdcCancelAccountField_MoneyAccountStatus;

    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcCancelAccountField_BankAccount != NULL ) {
        if(CThostFtdcCancelAccountField_BankAccount_length >= (Py_ssize_t)sizeof(data->BankAccount)) {
            PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is 40)", CThostFtdcCancelAccountField_BankAccount_length);
            return -1;
        }
        // memset(data->BankAccount, 0, sizeof(data->BankAccount));
        // memcpy(data->BankAccount, CThostFtdcCancelAccountField_BankAccount, CThostFtdcCancelAccountField_BankAccount_length);
        strncpy(data->BankAccount, CThostFtdcCancelAccountField_BankAccount, sizeof(data->BankAccount));
        CThostFtdcCancelAccountField_BankAccount = NULL;
    }

    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcCancelAccountField_BankPassWord != NULL ) {
        if(CThostFtdcCancelAccountField_BankPassWord_length >= (Py_ssize_t)sizeof(data->BankPassWord)) {
            PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is 40)", CThostFtdcCancelAccountField_BankPassWord_length);
            return -1;
        }
        // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
        // memcpy(data->BankPassWord, CThostFtdcCancelAccountField_BankPassWord, CThostFtdcCancelAccountField_BankPassWord_length);
        strncpy(data->BankPassWord, CThostFtdcCancelAccountField_BankPassWord, sizeof(data->BankPassWord));
        CThostFtdcCancelAccountField_BankPassWord = NULL;
    }

    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcCancelAccountField_AccountID != NULL ) {
        if(CThostFtdcCancelAccountField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcCancelAccountField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcCancelAccountField_AccountID, CThostFtdcCancelAccountField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcCancelAccountField_AccountID, sizeof(data->AccountID));
        CThostFtdcCancelAccountField_AccountID = NULL;
    }

    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcCancelAccountField_Password != NULL ) {
        if(CThostFtdcCancelAccountField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcCancelAccountField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcCancelAccountField_Password, CThostFtdcCancelAccountField_Password_length);
        strncpy(data->Password, CThostFtdcCancelAccountField_Password, sizeof(data->Password));
        CThostFtdcCancelAccountField_Password = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcCancelAccountField_InstallID;

    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    data->VerifyCertNoFlag = CThostFtdcCancelAccountField_VerifyCertNoFlag;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcCancelAccountField_CurrencyID != NULL ) {
        if(CThostFtdcCancelAccountField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcCancelAccountField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcCancelAccountField_CurrencyID, CThostFtdcCancelAccountField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcCancelAccountField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcCancelAccountField_CurrencyID = NULL;
    }

    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    data->CashExchangeCode = CThostFtdcCancelAccountField_CashExchangeCode;

    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    if( CThostFtdcCancelAccountField_Digest != NULL ) {
        if(CThostFtdcCancelAccountField_Digest_length >= (Py_ssize_t)sizeof(data->Digest)) {
            PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is 35)", CThostFtdcCancelAccountField_Digest_length);
            return -1;
        }
        // memset(data->Digest, 0, sizeof(data->Digest));
        // memcpy(data->Digest, CThostFtdcCancelAccountField_Digest, CThostFtdcCancelAccountField_Digest_length);
        strncpy(data->Digest, CThostFtdcCancelAccountField_Digest, sizeof(data->Digest));
        CThostFtdcCancelAccountField_Digest = NULL;
    }

    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankAccType = CThostFtdcCancelAccountField_BankAccType;

    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    if( CThostFtdcCancelAccountField_DeviceID != NULL ) {
        if(CThostFtdcCancelAccountField_DeviceID_length >= (Py_ssize_t)sizeof(data->DeviceID)) {
            PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is 2)", CThostFtdcCancelAccountField_DeviceID_length);
            return -1;
        }
        // memset(data->DeviceID, 0, sizeof(data->DeviceID));
        // memcpy(data->DeviceID, CThostFtdcCancelAccountField_DeviceID, CThostFtdcCancelAccountField_DeviceID_length);
        strncpy(data->DeviceID, CThostFtdcCancelAccountField_DeviceID, sizeof(data->DeviceID));
        CThostFtdcCancelAccountField_DeviceID = NULL;
    }

    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    data->BankSecuAccType = CThostFtdcCancelAccountField_BankSecuAccType;

    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    if( CThostFtdcCancelAccountField_BrokerIDByBank != NULL ) {
        if(CThostFtdcCancelAccountField_BrokerIDByBank_length >= (Py_ssize_t)sizeof(data->BrokerIDByBank)) {
            PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is 32)", CThostFtdcCancelAccountField_BrokerIDByBank_length);
            return -1;
        }
        // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
        // memcpy(data->BrokerIDByBank, CThostFtdcCancelAccountField_BrokerIDByBank, CThostFtdcCancelAccountField_BrokerIDByBank_length);
        strncpy(data->BrokerIDByBank, CThostFtdcCancelAccountField_BrokerIDByBank, sizeof(data->BrokerIDByBank));
        CThostFtdcCancelAccountField_BrokerIDByBank = NULL;
    }

    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    if( CThostFtdcCancelAccountField_BankSecuAcc != NULL ) {
        if(CThostFtdcCancelAccountField_BankSecuAcc_length >= (Py_ssize_t)sizeof(data->BankSecuAcc)) {
            PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is 40)", CThostFtdcCancelAccountField_BankSecuAcc_length);
            return -1;
        }
        // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
        // memcpy(data->BankSecuAcc, CThostFtdcCancelAccountField_BankSecuAcc, CThostFtdcCancelAccountField_BankSecuAcc_length);
        strncpy(data->BankSecuAcc, CThostFtdcCancelAccountField_BankSecuAcc, sizeof(data->BankSecuAcc));
        CThostFtdcCancelAccountField_BankSecuAcc = NULL;
    }

    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    data->BankPwdFlag = CThostFtdcCancelAccountField_BankPwdFlag;

    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    data->SecuPwdFlag = CThostFtdcCancelAccountField_SecuPwdFlag;

    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    if( CThostFtdcCancelAccountField_OperNo != NULL ) {
        if(CThostFtdcCancelAccountField_OperNo_length >= (Py_ssize_t)sizeof(data->OperNo)) {
            PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is 16)", CThostFtdcCancelAccountField_OperNo_length);
            return -1;
        }
        // memset(data->OperNo, 0, sizeof(data->OperNo));
        // memcpy(data->OperNo, CThostFtdcCancelAccountField_OperNo, CThostFtdcCancelAccountField_OperNo_length);
        strncpy(data->OperNo, CThostFtdcCancelAccountField_OperNo, sizeof(data->OperNo));
        CThostFtdcCancelAccountField_OperNo = NULL;
    }

    /// 交易ID
    /// typedef int TThostFtdcTIDType
    data->TID = CThostFtdcCancelAccountField_TID;

    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcCancelAccountField_UserID != NULL ) {
        if(CThostFtdcCancelAccountField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcCancelAccountField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcCancelAccountField_UserID, CThostFtdcCancelAccountField_UserID_length);
        strncpy(data->UserID, CThostFtdcCancelAccountField_UserID, sizeof(data->UserID));
        CThostFtdcCancelAccountField_UserID = NULL;
    }

    /// 错误代码
    /// typedef int TThostFtdcErrorIDType
    data->ErrorID = CThostFtdcCancelAccountField_ErrorID;

    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcCancelAccountField_ErrorMsg != NULL ) {
        if(CThostFtdcCancelAccountField_ErrorMsg_length >= (Py_ssize_t)sizeof(data->ErrorMsg)) {
            PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is 80)", CThostFtdcCancelAccountField_ErrorMsg_length);
            return -1;
        }
        // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
        // memcpy(data->ErrorMsg, CThostFtdcCancelAccountField_ErrorMsg, CThostFtdcCancelAccountField_ErrorMsg_length);
        strncpy(data->ErrorMsg, CThostFtdcCancelAccountField_ErrorMsg, sizeof(data->ErrorMsg));
        CThostFtdcCancelAccountField_ErrorMsg = NULL;
    }

    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    if( CThostFtdcCancelAccountField_LongCustomerName != NULL ) {
        if(CThostFtdcCancelAccountField_LongCustomerName_length >= (Py_ssize_t)sizeof(data->LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is 160)", CThostFtdcCancelAccountField_LongCustomerName_length);
            return -1;
        }
        // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
        // memcpy(data->LongCustomerName, CThostFtdcCancelAccountField_LongCustomerName, CThostFtdcCancelAccountField_LongCustomerName_length);
        strncpy(data->LongCustomerName, CThostFtdcCancelAccountField_LongCustomerName, sizeof(data->LongCustomerName));
        CThostFtdcCancelAccountField_LongCustomerName = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcCancelAccountFieldType_repr(PyObject *self) {

    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCancelAccountField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCancelAccountField repr");
        return NULL;
    }

    return repr;
}


/// 业务功能码
/// typedef char TThostFtdcTradeCodeType[7]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_TradeCode(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeCode, (Py_ssize_t)sizeof(data->TradeCode));
    return PyBytes_FromString(data->TradeCode);
}

static int PyCThostFtdcCancelAccountFieldType_set_TradeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::TradeCode)) {
        PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->TradeCode, 0, sizeof(data->TradeCode));
    // memcpy(data->TradeCode, buf, len);
    strncpy(data->TradeCode, buf, sizeof(data->TradeCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行代码
/// typedef char TThostFtdcBankIDType[4]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankID(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankID, (Py_ssize_t)sizeof(data->BankID));
    return PyBytes_FromString(data->BankID);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BankID, 0, sizeof(data->BankID));
    // memcpy(data->BankID, buf, len);
    strncpy(data->BankID, buf, sizeof(data->BankID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行分支机构代码
/// typedef char TThostFtdcBankBrchIDType[5]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankBranchID(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankBranchID, (Py_ssize_t)sizeof(data->BankBranchID));
    return PyBytes_FromString(data->BankBranchID);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 4 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BankBranchID, 0, sizeof(data->BankBranchID));
    // memcpy(data->BankBranchID, buf, len);
    strncpy(data->BankBranchID, buf, sizeof(data->BankBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcCancelAccountFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期商分支机构代码
/// typedef char TThostFtdcFutureBranchIDType[31]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BrokerBranchID(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerBranchID, (Py_ssize_t)sizeof(data->BrokerBranchID));
    return PyBytes_FromString(data->BrokerBranchID);
}

static int PyCThostFtdcCancelAccountFieldType_set_BrokerBranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BrokerBranchID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BrokerBranchID, 0, sizeof(data->BrokerBranchID));
    // memcpy(data->BrokerBranchID, buf, len);
    strncpy(data->BrokerBranchID, buf, sizeof(data->BrokerBranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日期
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_TradeDate(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeDate, (Py_ssize_t)sizeof(data->TradeDate));
    return PyBytes_FromString(data->TradeDate);
}

static int PyCThostFtdcCancelAccountFieldType_set_TradeDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::TradeDate)) {
        PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->TradeDate, 0, sizeof(data->TradeDate));
    // memcpy(data->TradeDate, buf, len);
    strncpy(data->TradeDate, buf, sizeof(data->TradeDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易时间
/// typedef char TThostFtdcTradeTimeType[9]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_TradeTime(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradeTime, (Py_ssize_t)sizeof(data->TradeTime));
    return PyBytes_FromString(data->TradeTime);
}

static int PyCThostFtdcCancelAccountFieldType_set_TradeTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::TradeTime)) {
        PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->TradeTime, 0, sizeof(data->TradeTime));
    // memcpy(data->TradeTime, buf, len);
    strncpy(data->TradeTime, buf, sizeof(data->TradeTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行流水号
/// typedef char TThostFtdcBankSerialType[13]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankSerial(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSerial, (Py_ssize_t)sizeof(data->BankSerial));
    return PyBytes_FromString(data->BankSerial);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankSerial(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankSerial)) {
        PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BankSerial, 0, sizeof(data->BankSerial));
    // memcpy(data->BankSerial, buf, len);
    strncpy(data->BankSerial, buf, sizeof(data->BankSerial));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易系统日期 
/// typedef char TThostFtdcTradeDateType[9]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcCancelAccountFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最后分片标志
/// typedef char TThostFtdcLastFragmentType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_LastFragment(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->LastFragment), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_LastFragment(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::LastFragment)) {
        PyErr_SetString(PyExc_ValueError, "LastFragment must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->LastFragment = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户姓名
/// typedef char TThostFtdcIndividualNameType[51]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_CustomerName(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CustomerName, (Py_ssize_t)sizeof(data->CustomerName));
    return PyBytes_FromString(data->CustomerName);
}

static int PyCThostFtdcCancelAccountFieldType_set_CustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->CustomerName, 0, sizeof(data->CustomerName));
    // memcpy(data->CustomerName, buf, len);
    strncpy(data->CustomerName, buf, sizeof(data->CustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件类型
/// typedef char TThostFtdcIdCardTypeType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_IdCardType(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->IdCardType), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_IdCardType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->IdCardType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 证件号码
/// typedef char TThostFtdcIdentifiedCardNoType[51]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_IdentifiedCardNo(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IdentifiedCardNo, (Py_ssize_t)sizeof(data->IdentifiedCardNo));
    return PyBytes_FromString(data->IdentifiedCardNo);
}

static int PyCThostFtdcCancelAccountFieldType_set_IdentifiedCardNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 50 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->IdentifiedCardNo, 0, sizeof(data->IdentifiedCardNo));
    // memcpy(data->IdentifiedCardNo, buf, len);
    strncpy(data->IdentifiedCardNo, buf, sizeof(data->IdentifiedCardNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 性别
/// typedef char TThostFtdcGenderType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_Gender(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->Gender), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_Gender(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Gender Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::Gender)) {
        PyErr_SetString(PyExc_ValueError, "Gender must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->Gender = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 国家代码
/// typedef char TThostFtdcCountryCodeType[21]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_CountryCode(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CountryCode, (Py_ssize_t)sizeof(data->CountryCode));
    return PyBytes_FromString(data->CountryCode);
}

static int PyCThostFtdcCancelAccountFieldType_set_CountryCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CountryCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::CountryCode)) {
        PyErr_SetString(PyExc_ValueError, "CountryCode must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->CountryCode, 0, sizeof(data->CountryCode));
    // memcpy(data->CountryCode, buf, len);
    strncpy(data->CountryCode, buf, sizeof(data->CountryCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户类型
/// typedef char TThostFtdcCustTypeType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_CustType(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CustType), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_CustType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->CustType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 地址
/// typedef char TThostFtdcAddressType[101]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_Address(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Address, (Py_ssize_t)sizeof(data->Address));
    return PyBytes_FromString(data->Address);
}

static int PyCThostFtdcCancelAccountFieldType_set_Address(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 100 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->Address, 0, sizeof(data->Address));
    // memcpy(data->Address, buf, len);
    strncpy(data->Address, buf, sizeof(data->Address));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 邮编
/// typedef char TThostFtdcZipCodeType[7]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_ZipCode(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ZipCode, (Py_ssize_t)sizeof(data->ZipCode));
    return PyBytes_FromString(data->ZipCode);
}

static int PyCThostFtdcCancelAccountFieldType_set_ZipCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 6 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->ZipCode, 0, sizeof(data->ZipCode));
    // memcpy(data->ZipCode, buf, len);
    strncpy(data->ZipCode, buf, sizeof(data->ZipCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电话号码
/// typedef char TThostFtdcTelephoneType[41]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_Telephone(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Telephone, (Py_ssize_t)sizeof(data->Telephone));
    return PyBytes_FromString(data->Telephone);
}

static int PyCThostFtdcCancelAccountFieldType_set_Telephone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->Telephone, 0, sizeof(data->Telephone));
    // memcpy(data->Telephone, buf, len);
    strncpy(data->Telephone, buf, sizeof(data->Telephone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 手机
/// typedef char TThostFtdcMobilePhoneType[21]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_MobilePhone(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MobilePhone, (Py_ssize_t)sizeof(data->MobilePhone));
    return PyBytes_FromString(data->MobilePhone);
}

static int PyCThostFtdcCancelAccountFieldType_set_MobilePhone(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MobilePhone Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::MobilePhone)) {
        PyErr_SetString(PyExc_ValueError, "MobilePhone must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->MobilePhone, 0, sizeof(data->MobilePhone));
    // memcpy(data->MobilePhone, buf, len);
    strncpy(data->MobilePhone, buf, sizeof(data->MobilePhone));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 传真
/// typedef char TThostFtdcFaxType[41]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_Fax(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Fax, (Py_ssize_t)sizeof(data->Fax));
    return PyBytes_FromString(data->Fax);
}

static int PyCThostFtdcCancelAccountFieldType_set_Fax(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Fax Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::Fax)) {
        PyErr_SetString(PyExc_ValueError, "Fax must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->Fax, 0, sizeof(data->Fax));
    // memcpy(data->Fax, buf, len);
    strncpy(data->Fax, buf, sizeof(data->Fax));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 电子邮件
/// typedef char TThostFtdcEMailType[41]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_EMail(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->EMail, (Py_ssize_t)sizeof(data->EMail));
    return PyBytes_FromString(data->EMail);
}

static int PyCThostFtdcCancelAccountFieldType_set_EMail(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "EMail Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::EMail)) {
        PyErr_SetString(PyExc_ValueError, "EMail must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->EMail, 0, sizeof(data->EMail));
    // memcpy(data->EMail, buf, len);
    strncpy(data->EMail, buf, sizeof(data->EMail));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账户状态
/// typedef char TThostFtdcMoneyAccountStatusType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_MoneyAccountStatus(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->MoneyAccountStatus), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_MoneyAccountStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MoneyAccountStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::MoneyAccountStatus)) {
        PyErr_SetString(PyExc_ValueError, "MoneyAccountStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->MoneyAccountStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankAccount(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankAccount, (Py_ssize_t)sizeof(data->BankAccount));
    return PyBytes_FromString(data->BankAccount);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankAccount(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankAccount)) {
        PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BankAccount, 0, sizeof(data->BankAccount));
    // memcpy(data->BankAccount, buf, len);
    strncpy(data->BankAccount, buf, sizeof(data->BankAccount));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankPassWord(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankPassWord, (Py_ssize_t)sizeof(data->BankPassWord));
    return PyBytes_FromString(data->BankPassWord);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankPassWord(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankPassWord)) {
        PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BankPassWord, 0, sizeof(data->BankPassWord));
    // memcpy(data->BankPassWord, buf, len);
    strncpy(data->BankPassWord, buf, sizeof(data->BankPassWord));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者帐号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcCancelAccountFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcCancelAccountFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 验证客户证件号码标志
/// typedef char TThostFtdcYesNoIndicatorType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_VerifyCertNoFlag(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->VerifyCertNoFlag), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_VerifyCertNoFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::VerifyCertNoFlag)) {
        PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->VerifyCertNoFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcCancelAccountFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 汇钞标志
/// typedef char TThostFtdcCashExchangeCodeType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_CashExchangeCode(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CashExchangeCode), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_CashExchangeCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CashExchangeCode Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::CashExchangeCode)) {
        PyErr_SetString(PyExc_ValueError, "CashExchangeCode must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->CashExchangeCode = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 摘要
/// typedef char TThostFtdcDigestType[36]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_Digest(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Digest, (Py_ssize_t)sizeof(data->Digest));
    return PyBytes_FromString(data->Digest);
}

static int PyCThostFtdcCancelAccountFieldType_set_Digest(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::Digest)) {
        PyErr_SetString(PyExc_ValueError, "Digest must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->Digest, 0, sizeof(data->Digest));
    // memcpy(data->Digest, buf, len);
    strncpy(data->Digest, buf, sizeof(data->Digest));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankAccType(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankAccType), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->BankAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 渠道标志
/// typedef char TThostFtdcDeviceIDType[3]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_DeviceID(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DeviceID, (Py_ssize_t)sizeof(data->DeviceID));
    return PyBytes_FromString(data->DeviceID);
}

static int PyCThostFtdcCancelAccountFieldType_set_DeviceID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::DeviceID)) {
        PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 2 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->DeviceID, 0, sizeof(data->DeviceID));
    // memcpy(data->DeviceID, buf, len);
    strncpy(data->DeviceID, buf, sizeof(data->DeviceID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号类型
/// typedef char TThostFtdcBankAccTypeType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankSecuAccType(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankSecuAccType), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankSecuAccType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankSecuAccType)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->BankSecuAccType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货公司银行编码
/// typedef char TThostFtdcBankCodingForFutureType[33]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BrokerIDByBank(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerIDByBank, (Py_ssize_t)sizeof(data->BrokerIDByBank));
    return PyBytes_FromString(data->BrokerIDByBank);
}

static int PyCThostFtdcCancelAccountFieldType_set_BrokerIDByBank(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BrokerIDByBank)) {
        PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BrokerIDByBank, 0, sizeof(data->BrokerIDByBank));
    // memcpy(data->BrokerIDByBank, buf, len);
    strncpy(data->BrokerIDByBank, buf, sizeof(data->BrokerIDByBank));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货单位帐号
/// typedef char TThostFtdcBankAccountType[41]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankSecuAcc(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BankSecuAcc, (Py_ssize_t)sizeof(data->BankSecuAcc));
    return PyBytes_FromString(data->BankSecuAcc);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankSecuAcc(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankSecuAcc)) {
        PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->BankSecuAcc, 0, sizeof(data->BankSecuAcc));
    // memcpy(data->BankSecuAcc, buf, len);
    strncpy(data->BankSecuAcc, buf, sizeof(data->BankSecuAcc));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 银行密码标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_BankPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BankPwdFlag), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_BankPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::BankPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->BankPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期货资金密码核对标志
/// typedef char TThostFtdcPwdFlagType
static PyObject *PyCThostFtdcCancelAccountFieldType_get_SecuPwdFlag(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->SecuPwdFlag), 1);
}

static int PyCThostFtdcCancelAccountFieldType_set_SecuPwdFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::SecuPwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    data->SecuPwdFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易柜员
/// typedef char TThostFtdcOperNoType[17]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_OperNo(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OperNo, (Py_ssize_t)sizeof(data->OperNo));
    return PyBytes_FromString(data->OperNo);
}

static int PyCThostFtdcCancelAccountFieldType_set_OperNo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::OperNo)) {
        PyErr_SetString(PyExc_ValueError, "OperNo must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->OperNo, 0, sizeof(data->OperNo));
    // memcpy(data->OperNo, buf, len);
    strncpy(data->OperNo, buf, sizeof(data->OperNo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户标识
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcCancelAccountFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 错误信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_ErrorMsg(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ErrorMsg, (Py_ssize_t)sizeof(data->ErrorMsg));
    return PyBytes_FromString(data->ErrorMsg);
}

static int PyCThostFtdcCancelAccountFieldType_set_ErrorMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::ErrorMsg)) {
        PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->ErrorMsg, 0, sizeof(data->ErrorMsg));
    // memcpy(data->ErrorMsg, buf, len);
    strncpy(data->ErrorMsg, buf, sizeof(data->ErrorMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 长客户姓名
/// typedef char TThostFtdcLongIndividualNameType[161]
static PyObject *PyCThostFtdcCancelAccountFieldType_get_LongCustomerName(PyObject *self, void *closure) {
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LongCustomerName, (Py_ssize_t)sizeof(data->LongCustomerName));
    return PyBytes_FromString(data->LongCustomerName);
}

static int PyCThostFtdcCancelAccountFieldType_set_LongCustomerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcCancelAccountField::LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 160 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcCancelAccountFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcCancelAccountFieldData>(self);
    CThostFtdcCancelAccountField *data = &(extra->data);
    // memset(data->LongCustomerName, 0, sizeof(data->LongCustomerName));
    // memcpy(data->LongCustomerName, buf, len);
    strncpy(data->LongCustomerName, buf, sizeof(data->LongCustomerName));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcCancelAccountFieldType_members[] = {
    /// 银期平台消息流水号
    /// typedef int TThostFtdcSerialType
    {
        .name = "PlateSerial",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcCancelAccountFieldData, data.PlateSerial),
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
        .offset = offsetof(PyCThostFtdcCancelAccountFieldData, data.SessionID),
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
        .offset = offsetof(PyCThostFtdcCancelAccountFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcCancelAccountFieldData, data.TID),
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
        .offset = offsetof(PyCThostFtdcCancelAccountFieldData, data.ErrorID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("错误代码")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcCancelAccountFieldType_getsets[] = {
    /// 业务功能码
    /// typedef char TThostFtdcTradeCodeType[7]
    {
    .name = "TradeCode",
    .get = PyCThostFtdcCancelAccountFieldType_get_TradeCode,
    .set = PyCThostFtdcCancelAccountFieldType_set_TradeCode,
    .doc = PyDoc_STR("业务功能码"),
    },
    /// 银行代码
    /// typedef char TThostFtdcBankIDType[4]
    {
    .name = "BankID",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankID,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankID,
    .doc = PyDoc_STR("银行代码"),
    },
    /// 银行分支机构代码
    /// typedef char TThostFtdcBankBrchIDType[5]
    {
    .name = "BankBranchID",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankBranchID,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankBranchID,
    .doc = PyDoc_STR("银行分支机构代码"),
    },
    /// 期商代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcCancelAccountFieldType_get_BrokerID,
    .set = PyCThostFtdcCancelAccountFieldType_set_BrokerID,
    .doc = PyDoc_STR("期商代码"),
    },
    /// 期商分支机构代码
    /// typedef char TThostFtdcFutureBranchIDType[31]
    {
    .name = "BrokerBranchID",
    .get = PyCThostFtdcCancelAccountFieldType_get_BrokerBranchID,
    .set = PyCThostFtdcCancelAccountFieldType_set_BrokerBranchID,
    .doc = PyDoc_STR("期商分支机构代码"),
    },
    /// 交易日期
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradeDate",
    .get = PyCThostFtdcCancelAccountFieldType_get_TradeDate,
    .set = PyCThostFtdcCancelAccountFieldType_set_TradeDate,
    .doc = PyDoc_STR("交易日期"),
    },
    /// 交易时间
    /// typedef char TThostFtdcTradeTimeType[9]
    {
    .name = "TradeTime",
    .get = PyCThostFtdcCancelAccountFieldType_get_TradeTime,
    .set = PyCThostFtdcCancelAccountFieldType_set_TradeTime,
    .doc = PyDoc_STR("交易时间"),
    },
    /// 银行流水号
    /// typedef char TThostFtdcBankSerialType[13]
    {
    .name = "BankSerial",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankSerial,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankSerial,
    .doc = PyDoc_STR("银行流水号"),
    },
    /// 交易系统日期 
    /// typedef char TThostFtdcTradeDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcCancelAccountFieldType_get_TradingDay,
    .set = PyCThostFtdcCancelAccountFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易系统日期 "),
    },
    /// 最后分片标志
    /// typedef char TThostFtdcLastFragmentType
    {
    .name = "LastFragment",
    .get = PyCThostFtdcCancelAccountFieldType_get_LastFragment,
    .set = PyCThostFtdcCancelAccountFieldType_set_LastFragment,
    .doc = PyDoc_STR("最后分片标志"),
    },
    /// 客户姓名
    /// typedef char TThostFtdcIndividualNameType[51]
    {
    .name = "CustomerName",
    .get = PyCThostFtdcCancelAccountFieldType_get_CustomerName,
    .set = PyCThostFtdcCancelAccountFieldType_set_CustomerName,
    .doc = PyDoc_STR("客户姓名"),
    },
    /// 证件类型
    /// typedef char TThostFtdcIdCardTypeType
    {
    .name = "IdCardType",
    .get = PyCThostFtdcCancelAccountFieldType_get_IdCardType,
    .set = PyCThostFtdcCancelAccountFieldType_set_IdCardType,
    .doc = PyDoc_STR("证件类型"),
    },
    /// 证件号码
    /// typedef char TThostFtdcIdentifiedCardNoType[51]
    {
    .name = "IdentifiedCardNo",
    .get = PyCThostFtdcCancelAccountFieldType_get_IdentifiedCardNo,
    .set = PyCThostFtdcCancelAccountFieldType_set_IdentifiedCardNo,
    .doc = PyDoc_STR("证件号码"),
    },
    /// 性别
    /// typedef char TThostFtdcGenderType
    {
    .name = "Gender",
    .get = PyCThostFtdcCancelAccountFieldType_get_Gender,
    .set = PyCThostFtdcCancelAccountFieldType_set_Gender,
    .doc = PyDoc_STR("性别"),
    },
    /// 国家代码
    /// typedef char TThostFtdcCountryCodeType[21]
    {
    .name = "CountryCode",
    .get = PyCThostFtdcCancelAccountFieldType_get_CountryCode,
    .set = PyCThostFtdcCancelAccountFieldType_set_CountryCode,
    .doc = PyDoc_STR("国家代码"),
    },
    /// 客户类型
    /// typedef char TThostFtdcCustTypeType
    {
    .name = "CustType",
    .get = PyCThostFtdcCancelAccountFieldType_get_CustType,
    .set = PyCThostFtdcCancelAccountFieldType_set_CustType,
    .doc = PyDoc_STR("客户类型"),
    },
    /// 地址
    /// typedef char TThostFtdcAddressType[101]
    {
    .name = "Address",
    .get = PyCThostFtdcCancelAccountFieldType_get_Address,
    .set = PyCThostFtdcCancelAccountFieldType_set_Address,
    .doc = PyDoc_STR("地址"),
    },
    /// 邮编
    /// typedef char TThostFtdcZipCodeType[7]
    {
    .name = "ZipCode",
    .get = PyCThostFtdcCancelAccountFieldType_get_ZipCode,
    .set = PyCThostFtdcCancelAccountFieldType_set_ZipCode,
    .doc = PyDoc_STR("邮编"),
    },
    /// 电话号码
    /// typedef char TThostFtdcTelephoneType[41]
    {
    .name = "Telephone",
    .get = PyCThostFtdcCancelAccountFieldType_get_Telephone,
    .set = PyCThostFtdcCancelAccountFieldType_set_Telephone,
    .doc = PyDoc_STR("电话号码"),
    },
    /// 手机
    /// typedef char TThostFtdcMobilePhoneType[21]
    {
    .name = "MobilePhone",
    .get = PyCThostFtdcCancelAccountFieldType_get_MobilePhone,
    .set = PyCThostFtdcCancelAccountFieldType_set_MobilePhone,
    .doc = PyDoc_STR("手机"),
    },
    /// 传真
    /// typedef char TThostFtdcFaxType[41]
    {
    .name = "Fax",
    .get = PyCThostFtdcCancelAccountFieldType_get_Fax,
    .set = PyCThostFtdcCancelAccountFieldType_set_Fax,
    .doc = PyDoc_STR("传真"),
    },
    /// 电子邮件
    /// typedef char TThostFtdcEMailType[41]
    {
    .name = "EMail",
    .get = PyCThostFtdcCancelAccountFieldType_get_EMail,
    .set = PyCThostFtdcCancelAccountFieldType_set_EMail,
    .doc = PyDoc_STR("电子邮件"),
    },
    /// 资金账户状态
    /// typedef char TThostFtdcMoneyAccountStatusType
    {
    .name = "MoneyAccountStatus",
    .get = PyCThostFtdcCancelAccountFieldType_get_MoneyAccountStatus,
    .set = PyCThostFtdcCancelAccountFieldType_set_MoneyAccountStatus,
    .doc = PyDoc_STR("资金账户状态"),
    },
    /// 银行帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankAccount",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankAccount,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankAccount,
    .doc = PyDoc_STR("银行帐号"),
    },
    /// 银行密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "BankPassWord",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankPassWord,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankPassWord,
    .doc = PyDoc_STR("银行密码"),
    },
    /// 投资者帐号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcCancelAccountFieldType_get_AccountID,
    .set = PyCThostFtdcCancelAccountFieldType_set_AccountID,
    .doc = PyDoc_STR("投资者帐号"),
    },
    /// 期货密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcCancelAccountFieldType_get_Password,
    .set = PyCThostFtdcCancelAccountFieldType_set_Password,
    .doc = PyDoc_STR("期货密码"),
    },
    /// 验证客户证件号码标志
    /// typedef char TThostFtdcYesNoIndicatorType
    {
    .name = "VerifyCertNoFlag",
    .get = PyCThostFtdcCancelAccountFieldType_get_VerifyCertNoFlag,
    .set = PyCThostFtdcCancelAccountFieldType_set_VerifyCertNoFlag,
    .doc = PyDoc_STR("验证客户证件号码标志"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcCancelAccountFieldType_get_CurrencyID,
    .set = PyCThostFtdcCancelAccountFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 汇钞标志
    /// typedef char TThostFtdcCashExchangeCodeType
    {
    .name = "CashExchangeCode",
    .get = PyCThostFtdcCancelAccountFieldType_get_CashExchangeCode,
    .set = PyCThostFtdcCancelAccountFieldType_set_CashExchangeCode,
    .doc = PyDoc_STR("汇钞标志"),
    },
    /// 摘要
    /// typedef char TThostFtdcDigestType[36]
    {
    .name = "Digest",
    .get = PyCThostFtdcCancelAccountFieldType_get_Digest,
    .set = PyCThostFtdcCancelAccountFieldType_set_Digest,
    .doc = PyDoc_STR("摘要"),
    },
    /// 银行帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankAccType",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankAccType,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankAccType,
    .doc = PyDoc_STR("银行帐号类型"),
    },
    /// 渠道标志
    /// typedef char TThostFtdcDeviceIDType[3]
    {
    .name = "DeviceID",
    .get = PyCThostFtdcCancelAccountFieldType_get_DeviceID,
    .set = PyCThostFtdcCancelAccountFieldType_set_DeviceID,
    .doc = PyDoc_STR("渠道标志"),
    },
    /// 期货单位帐号类型
    /// typedef char TThostFtdcBankAccTypeType
    {
    .name = "BankSecuAccType",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankSecuAccType,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankSecuAccType,
    .doc = PyDoc_STR("期货单位帐号类型"),
    },
    /// 期货公司银行编码
    /// typedef char TThostFtdcBankCodingForFutureType[33]
    {
    .name = "BrokerIDByBank",
    .get = PyCThostFtdcCancelAccountFieldType_get_BrokerIDByBank,
    .set = PyCThostFtdcCancelAccountFieldType_set_BrokerIDByBank,
    .doc = PyDoc_STR("期货公司银行编码"),
    },
    /// 期货单位帐号
    /// typedef char TThostFtdcBankAccountType[41]
    {
    .name = "BankSecuAcc",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankSecuAcc,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankSecuAcc,
    .doc = PyDoc_STR("期货单位帐号"),
    },
    /// 银行密码标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "BankPwdFlag",
    .get = PyCThostFtdcCancelAccountFieldType_get_BankPwdFlag,
    .set = PyCThostFtdcCancelAccountFieldType_set_BankPwdFlag,
    .doc = PyDoc_STR("银行密码标志"),
    },
    /// 期货资金密码核对标志
    /// typedef char TThostFtdcPwdFlagType
    {
    .name = "SecuPwdFlag",
    .get = PyCThostFtdcCancelAccountFieldType_get_SecuPwdFlag,
    .set = PyCThostFtdcCancelAccountFieldType_set_SecuPwdFlag,
    .doc = PyDoc_STR("期货资金密码核对标志"),
    },
    /// 交易柜员
    /// typedef char TThostFtdcOperNoType[17]
    {
    .name = "OperNo",
    .get = PyCThostFtdcCancelAccountFieldType_get_OperNo,
    .set = PyCThostFtdcCancelAccountFieldType_set_OperNo,
    .doc = PyDoc_STR("交易柜员"),
    },
    /// 用户标识
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcCancelAccountFieldType_get_UserID,
    .set = PyCThostFtdcCancelAccountFieldType_set_UserID,
    .doc = PyDoc_STR("用户标识"),
    },
    /// 错误信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "ErrorMsg",
    .get = PyCThostFtdcCancelAccountFieldType_get_ErrorMsg,
    .set = PyCThostFtdcCancelAccountFieldType_set_ErrorMsg,
    .doc = PyDoc_STR("错误信息"),
    },
    /// 长客户姓名
    /// typedef char TThostFtdcLongIndividualNameType[161]
    {
    .name = "LongCustomerName",
    .get = PyCThostFtdcCancelAccountFieldType_get_LongCustomerName,
    .set = PyCThostFtdcCancelAccountFieldType_set_LongCustomerName,
    .doc = PyDoc_STR("长客户姓名"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcCancelAccountFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcCancelAccountField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("银期销户信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcCancelAccountFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcCancelAccountFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcCancelAccountFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcCancelAccountFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcCancelAccountFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcCancelAccountFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("银期销户信息")},
    {Py_tp_members, PyCThostFtdcCancelAccountFieldType_members},
    {Py_tp_getset, PyCThostFtdcCancelAccountFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcCancelAccountFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcCancelAccountFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcCancelAccountFieldType_spec = {
    .name = "PyCTP.CThostFtdcCancelAccountField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcCancelAccountFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcCancelAccountFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcCancelAccountFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcCancelAccountFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcCancelAccountFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcCancelAccountFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcCancelAccountFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcCancelAccountFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcCancelAccountField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCancelAccountField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}